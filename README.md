<!-- # Visualizing a Point Cloud Using Depth in Unity
Visualizing a point cloud using depth API in Unity similar to [WWDC20 demo](https://developer.apple.com/documentation/arkit/visualizing_a_point_cloud_using_scene_depth).

![GIF](SaJII4P.gif)


### Requirements
- iOS device with a LiDAR sensor (iPad Pro 2020 and iPhone 12)

### Known Issues
- Supports only *Landscape Left* orientation -->

# Hole Filling and Mesh Repair of 3D Scanned Objects
This project investigates on enhancing the techniques of hole filling
and mesh repair during the scanning of 3D objects and environments in Augmented
Reality (AR) applications. 

### Keyboard Controls
There are several keyboard controls to view, analyze and modify the scanned mesh in the Unity scene.

#### Navigation
- WASD: Move forward, left, backward, right respectively.
- E, Q: Move up and down.
- Right Mouse Click: Rotate and look around the scene

#### Hole Viewing
- Left Mouse Click: Create new holes at that position with a specified radius
- H: Move to next hole
- P: Move to previous hole
If a hole is selected, following commands are also valid:
- 1: Focus on hole (in Game mode)
- 2: Rotate along hole (positive angle)
- 3: Rotate along hole (negative angle)

#### Hole Modification and Reconstruction
- N: Remove non-manifold vertices in hole
- F: Fill holes
- 4: Edge flip
- 5: Edge split
- 6: Smooth Hole
