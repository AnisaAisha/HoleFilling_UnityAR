using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine;
using UnityEngine.XR.ARSubsystems;
using System.Runtime.InteropServices;
using System.IO;

namespace Cdm.XR.Extensions
{
    public class ARDensePointCloudManager : MonoBehaviour
    {
        private static readonly List<ARDensePointCloud> _pointClouds = new List<ARDensePointCloud>();
        
        public ARDensePointCloud pointCloudPrefab;

        // Maximum number of points we store in a point cloud.
        public int maxPoints = 3000000;
        public int maxPointsPerFrame = 1000;

        [SerializeField, Range(0f, 1f)] 
        private float _minConfidence = 0.5f;

        public float minConfidence
        {
            get => _minConfidence;
            set => _minConfidence = Mathf.Clamp01(value);
        }

        [SerializeField, Tooltip("Max rotation angle in degrees.")]
        private float _cameraRotationThreshold = 2;

        [SerializeField, Tooltip("Max translation in meters")]
        private float _cameraTranslationThreshold = 0.02f;

        // Camera's threshold values for detecting when the camera moves so that we can accumulate the points.
        private float cameraRotationThreshold => Mathf.Cos(_cameraRotationThreshold * Mathf.Deg2Rad);
        private float cameraTranslationThreshold => Mathf.Pow(_cameraTranslationThreshold, 2); // (meter-squared)

        private XRSessionSubsystem _sessionSubsystem;
        private XROcclusionSubsystem _occlusionSubsystem;
        private XRCameraSubsystem _cameraSubsystem;

        public ARDensePointCloud pointCloud { get; private set; }

        private Camera _mainCamera;
        private Pose _lastCameraPose;

        private Vector2Int[] _samplingGrid;
        private int _depthWidth;
        private int _depthHeight;

        private static readonly List<ARDensePointCloud> _pointCloudsAdded = new List<ARDensePointCloud>();
        private static readonly List<ARDensePointCloud> _pointCloudsUpdated = new List<ARDensePointCloud>();
        private static readonly List<ARDensePointCloud> _pointCloudsRemoved = new List<ARDensePointCloud>();
        private void Start()
        {
            CreateNewPointCloud();

            _mainCamera = Camera.main;

#if !UNITY_EDITOR
            StartCoroutine(InitializeSubsystems());
#endif
        }

        private void CreateNewPointCloud()
        {
            pointCloud = Instantiate(pointCloudPrefab);
            pointCloud.name = $"Point Cloud ({_pointClouds.Count})";
            pointCloud.Create(maxPoints);
            _pointClouds.Add(pointCloud);
            OnPointCloudAdded();
            
            //Debug.Log($"New point cloud created: {pointCloud.name}");
        }
        
        public void DestroyAllPointClouds()
        {
            foreach (var pc in _pointClouds)
            {
                if (pc != null)
                {
                    _pointCloudsRemoved.Add(pc);
                    Destroy(pc.gameObject);
                }
            }
            
            _pointClouds.Clear();
            OnPointCloudsChanged();
        }
        private bool hasExecuted = false;
        private int frameCounter = 0;
        // private unsafe void Update()
        // {
        //     if (frameCounter > 0) {
        //         return;
        //     }

        //     isScanning = scanButton.GetComponent<ButtonHandler>().isScanning;
        //     if (isScanning) {
        //         Debug.Log("this should only run once");
        //         frameCounter++;
        //     }

        //     if (_sessionSubsystem == null || _cameraSubsystem == null || _occlusionSubsystem == null)
        //         return;

        //     if (_sessionSubsystem.trackingState != TrackingState.Tracking)
        //         return;

        //     XRCpuImage cameraImage = default;
        //     XRCpuImage depthImage = default;
        //     XRCpuImage depthConfidenceImage = default;

        //     try
        //     {
        //         if (!_cameraSubsystem.TryAcquireLatestCpuImage(out cameraImage))
        //             throw new InvalidOperationException("Cannot acquire camera image");

        //         if (!_occlusionSubsystem.TryAcquireEnvironmentDepthCpuImage(out depthImage))
        //             throw new InvalidOperationException("Cannot acquire depth image");

        //         if (!_occlusionSubsystem.TryAcquireEnvironmentDepthConfidenceCpuImage(out depthConfidenceImage))
        //             throw new InvalidOperationException("Cannot acquire depth confidence map image");

        //         Debug.Log($"Depth image size: {depthImage.width}x{depthImage.height}");

        //         var depthValues = depthImage.GetPlane(0).data.Reinterpret<float>();
        //         var depthConfidenceValues = depthConfidenceImage.GetPlane(0).data;

        //         pointCloud.BeginUpdate();

        //         // Debug.Log("checking smth: " + (depthImage.height * depthImage.width));

        //         for (int y = 0; y < depthImage.height; y++)
        //         {
        //             for (int x = 0; x < depthImage.width; x++)
        //             {
        //                 int i = x + y * depthImage.width; // index for the depth array

        //                 float depth = depthValues[i];
        //                 float depthConfidence = ClampConfidence01(depthConfidenceValues[i]);

        //                 // Calculate normalized coordinates
        //                 float npx = x / (float)depthImage.width;
        //                 float npy = 1f - (y / (float)depthImage.height);

        //                 var worldPoint = _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * npx, Screen.height * npy, depth));

        //                 // if (depthConfidence >= minConfidence)
        //                 // {
        //                 //     var normal = (_mainCamera.transform.position - worldPoint).normalized;
        //                 //     Color color = new Color(depth, depth, depth, 1f);
        //                 //     pointCloud.Add(worldPoint, normal, color, depthConfidence);
        //                 // }

        //                 var normal = (_mainCamera.transform.position - worldPoint).normalized;
        //                 Color color = new Color(depth, depth, depth, 1f);
        //                 pointCloud.Add(worldPoint, normal, color, depthConfidence);
        //             }
        //         }
        //         Debug.Log(pointCloud.count);
        //         pointCloud.EndUpdate();
        //         OnPointCloudUpdated();
        //     }
        //     finally
        //     {
        //         cameraImage.Dispose();
        //         depthImage.Dispose();
        //         depthConfidenceImage.Dispose();
        //     }
        // }

        private unsafe void Update()
        {
            if (frameCounter > 0) {
                return;
            }

            isScanning = scanButton.GetComponent<ButtonHandler>().isScanning;
            if (isScanning) {
                Debug.Log("this should only run once");
                frameCounter++;
            }
                
            if (_sessionSubsystem == null || _cameraSubsystem == null || _occlusionSubsystem == null)
                return;

            if (_sessionSubsystem.trackingState != TrackingState.Tracking)
                return;

            if (!ShouldAccumulatePoints())
                return;

            XRCpuImage cameraImage = default;
            XRCpuImage depthImage = default;
            XRCpuImage depthConfidenceImage = default;

            try
            {
                if (!_cameraSubsystem.TryAcquireLatestCpuImage(out cameraImage))
                    throw new InvalidOperationException("Cannot acquire camera image");

                if (!_occlusionSubsystem.TryAcquireEnvironmentDepthCpuImage(out depthImage))
                    throw new InvalidOperationException("Cannot acquire depth image");

                if (!_occlusionSubsystem.TryAcquireEnvironmentDepthConfidenceCpuImage(out depthConfidenceImage))
                    throw new InvalidOperationException("Cannot acquire depth confidence map image");

                // Debug.Log($"Screen size: {Screen.width}x{Screen.height}");
                Debug.Log($"Depth image size: {depthImage.width}x{depthImage.height}");

                var conversionParams = new XRCpuImage.ConversionParams()
                {
                    inputRect = new RectInt(0, 0, cameraImage.width, cameraImage.height),
                    outputDimensions = new Vector2Int(depthImage.width, depthImage.height),
                    outputFormat = TextureFormat.RGBA32,
                    transformation = XRCpuImage.Transformation.None
                };

                var cameraImageSize = cameraImage.GetConvertedDataSize(conversionParams);
                var cameraImageBuffer = new NativeArray<Color32>(cameraImageSize, Allocator.Temp);
                cameraImage.Convert(conversionParams, new IntPtr(cameraImageBuffer.GetUnsafePtr()),
                    cameraImageBuffer.Length);

                var depthValues = depthImage.GetPlane(0).data.Reinterpret<float>();
                var depthConfidenceValues = depthConfidenceImage.GetPlane(0).data;

                Debug.Log("depth values: " + depthValues.Length);
                Texture2D depthTexture = new Texture2D(depthImage.width, depthImage.height, TextureFormat.RFloat, false);

                /** Create a Texture2D to get depth image */
                for (int y = 0; y < depthImage.height; y++)
                {
                    for (int x = 0; x < depthImage.width; x++)
                    {
                        // Get the depth value for the current pixel
                        int index = x + y * depthImage.width;
                        float depthValue = depthValues[index];
                        // Set the pixel color in the texture using the depth value
                        Color color = new Color(depthValue, depthValue, depthValue, 1f);
                        depthTexture.SetPixel(x, y, color);
                    }
                }
                depthTexture.Apply();
                byte[] pngData = depthTexture.EncodeToPNG();
                if (pngData != null)
                {
                    string filePath = Application.persistentDataPath + "/depthimg.png";
                    File.WriteAllBytes(filePath, pngData);
                }
                /** Depth image save code ends here */

                if (_samplingGrid == null || _depthWidth != depthImage.width || _depthHeight != depthImage.height)
                {
                    CreateSamplingGrid(depthImage.width, depthImage.height);
                    _depthWidth = depthImage.width;
                    _depthHeight = depthImage.height;
                }

                // Debug.Log("sampling grid size: " + _samplingGrid.Length);

                pointCloud.BeginUpdate();
                foreach (var c in _samplingGrid)
                {
                    var i = c.x + c.y * depthImage.width;

                    var npx = c.x / (float) depthImage.width;
                    var npy = 1f - (c.y / (float) depthImage.height);

                    var color = cameraImageBuffer[i];
                    var depth = depthValues[i];
                    var depthConfidence = ClampConfidence01(depthConfidenceValues[i]);

                    var worldPoint =
                        _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * npx, Screen.height * npy, depth));

                    if (pointCloud.isFull)
                    {
                        // Complete current point cloud update operation.
                        pointCloud.EndUpdate();
                        
                        // Create new point cloud and continue to adding points.
                        CreateNewPointCloud();
                        pointCloud.BeginUpdate();
                    }

                    // if (depthConfidence >= minConfidence)
                    // {
                    //     var normal = (_mainCamera.transform.position - worldPoint).normalized;
                    //     pointCloud.Add(worldPoint, normal, color, depthConfidence);
                    // }
                    var normal = (_mainCamera.transform.position - worldPoint).normalized;
                    pointCloud.Add(worldPoint, normal, color, depthConfidence);
                }

                pointCloud.EndUpdate();

                OnPointCloudUpdated();
            }
            finally
            {
                _lastCameraPose = new Pose(_mainCamera.transform.position, _mainCamera.transform.rotation);

                cameraImage.Dispose();
                depthImage.Dispose();
                depthConfidenceImage.Dispose();
            }
        }

        private static float ClampConfidence01(byte confidence)
        {
            switch (confidence)
            {
                case 0: return 0; // Low
                case 1: return 0.5f; // Medium
                case 2: return 1f; // High
                default: return 0f;
            }
        }

        private void CreateSamplingGrid(int width, int height)
        {
            _samplingGrid = new Vector2Int[width * height];
            for (int y = 0; y < height; y++)
            {
                for (int x = 0; x < width; x++)
                {
                    _samplingGrid[y * width + x] = new Vector2Int(x, y);
                }
            }
            // var gridArea = width * height;
            // var spacing = Mathf.Sqrt(gridArea / (float) maxPointsPerFrame);
            // var deltaX = Mathf.RoundToInt(width / spacing);
            // var deltaY = Mathf.RoundToInt(height / spacing);

            // _samplingGrid = new Vector2Int[deltaX * deltaY];
            // var i = 0;
            // for (var y = 0; y < deltaY; y++)
            // {
            //     var alternatingOffsetX = (y % 2) * spacing / 2f;

            //     for (var x = 0; x < deltaX; x++)
            //     {
            //         var point = new Vector2Int
            //         (
            //             Mathf.FloorToInt(alternatingOffsetX + (x + 0.5f) * spacing),
            //             Mathf.FloorToInt((y + 0.5f) * spacing)
            //         );
            //         _samplingGrid[i++] = point;
            //     }
            // }
        }

        // private void CreateSamplingGrid(int width, int height)
        // {
        //     // Set a smaller maximum number of points per frame for denser sampling
        //     var gridArea = width * height;

        //     // Calculate spacing to get more points
        //     var spacing = Mathf.Sqrt(gridArea / (float)maxPointsPerFrame);
        //     Debug.Log("Spacing: " + spacing);
            
        //     // Calculate deltaX and deltaY based on the adjusted spacing
        //     var deltaX = Mathf.FloorToInt(width / spacing);
        //     var deltaY = Mathf.FloorToInt(height / spacing);

        //     // Create a sampling grid with minimal gaps
        //     _samplingGrid = new Vector2Int[deltaX * deltaY];
        //     var i = 0;
        //     for (var y = 0; y < deltaY; y++)
        //     {
        //         for (var x = 0; x < deltaX; x++)
        //         {
        //             // Calculate the point positions with minimal gaps
        //             var point = new Vector2Int
        //             (
        //                 Mathf.FloorToInt((x + 0.05f) * spacing),
        //                 Mathf.FloorToInt((y + 0.05f) * spacing)
        //             );
        //             // Ensure the point is within the bounds of the image
        //             if (point.x < width && point.y < height)
        //             {
        //                 _samplingGrid[i++] = point;
        //             }
        //         }
        //     }

        //     // Resize the array to the actual number of points added
        //     Array.Resize(ref _samplingGrid, i);
        // }



        private bool ShouldAccumulatePoints()
        {
            var cameraTransform = _mainCamera.transform;
            return pointCloud.count == 0;// ||
                //    Vector3.Dot(_lastCameraPose.forward, cameraTransform.forward) <= cameraRotationThreshold ||
                //    (_lastCameraPose.position - cameraTransform.position).sqrMagnitude >= cameraTranslationThreshold;
        }

        private IEnumerator InitializeSubsystems()
        {
            // Try get AR session subsystem and make sure AR is supported by the device.
            if (TryGetFirstSubsystem(out _sessionSubsystem))
            {
                var availabilityPromise = _sessionSubsystem.GetAvailabilityAsync();
                yield return availabilityPromise;
                var availability = availabilityPromise.result;
                if (!availability.IsSupported())
                {
                    Debug.LogError($"The current device is not AR capable (but may require a software update).");
                    yield break;
                }
            }
            else
            {
                Debug.LogError($"{nameof(XRSessionSubsystem)} not found.");
                yield break;
            }

            if (!TryGetFirstSubsystem(out _cameraSubsystem))
            {
                Debug.LogError($"{nameof(XRCameraSubsystem)} not found.");
                yield break;
            }

            if (!TryGetFirstSubsystem(out _occlusionSubsystem))
            {
                Debug.LogError($"{nameof(XROcclusionSubsystem)} not found.");
                yield break;
            }

            _occlusionSubsystem.requestedEnvironmentDepthMode = EnvironmentDepthMode.Best;
            _occlusionSubsystem.requestedOcclusionPreferenceMode = OcclusionPreferenceMode.PreferEnvironmentOcclusion;
        }

        private static bool TryGetFirstSubsystem<T>(out T subsystem) where T : ISubsystem
        {
            var subsystems = new List<T>();
            SubsystemManager.GetInstances(subsystems);

            if (subsystems.Any())
            {
                subsystem = subsystems.First();
                return true;
            }

            subsystem = default(T);
            return false;
        }

        public static IEnumerable<ARDensePointCloud> GetAllPointClouds()
        {
            return _pointClouds;
        }

        private void OnPointCloudAdded()
        {
            Debug.Assert(pointCloud != null);
            _pointCloudsAdded.Add(pointCloud);
            OnPointCloudsChanged();
        }

        private void OnPointCloudUpdated()
        {
            Debug.Assert(pointCloud != null);
            _pointCloudsUpdated.Add(pointCloud);
            OnPointCloudsChanged();
        }

        private void OnPointCloudRemoved()
        {
            if (pointCloud != null)
            {
                _pointCloudsRemoved.Add(pointCloud);
                OnPointCloudsChanged();
            }
        }

        private static void OnPointCloudsChanged()
        {
            pointCloudsChanged?.Invoke(
                new ARDensePointCloudsChangedEventArgs(_pointCloudsAdded, _pointCloudsUpdated, _pointCloudsRemoved));

            _pointCloudsAdded.Clear();
            _pointCloudsUpdated.Clear();
            _pointCloudsRemoved.Clear();
        }

        public static event Action<ARDensePointCloudsChangedEventArgs> pointCloudsChanged;


        public GameObject scanButton;
        private bool isScanning;
        public void SavePoints() {
            isScanning = scanButton.GetComponent<ButtonHandler>().isScanning;
            Debug.Log("Inside save points func");
            Debug.Log("check: " + pointCloud.points.Length);
            Debug.Log("second check: " + isScanning);
            // if (pointCloud.points.Length > 0) {
            //     for (int i = 0; i < 10; i++) {
            //         Debug.Log("point: " + pointCloud.points[i]);
            //     }
            // }
            if (!isScanning) {
                Debug.Log("scanning stopped, now we write points to file");
                string path = Application.persistentDataPath + "/pointcloud.txt";
                using (StreamWriter writer = new StreamWriter(path))
                {
                    writer.WriteLine(_depthWidth.ToString() + " " + _depthHeight.ToString());
                    foreach (Vector3 point in pointCloud.points)
                    {
                        float x = point.x;
                        float y = point.y;
                        float z = point.z;
                        writer.WriteLine(string.Format("{0:N6} {1:N6} {2:N6}", x, y, z));
                    }
                }
            }
        }
    }
}