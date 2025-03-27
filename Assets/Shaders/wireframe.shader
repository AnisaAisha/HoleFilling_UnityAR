Shader "Custom/FlatShadingNoInterpolation"
{
    Properties
    {
        _Color ("Base Color", Color) = (1, 1, 1, 1)
        _MainTex ("Base Texture", 2D) = "white" { }
        _BumpMap ("Normalmap", 2D) = "bump" {}
        _SpecColor ("Specular Color", Color) = (0.5, 0.5, 0.5, 1)
        _Shininess ("Shininess", Range(0.03, 1)) = 0.078125
    }
    SubShader
    {
        Tags { "RenderType" = "Opaque" }
        LOD 400

        Pass
        {
            Name "FORWARD"
            Tags { "LightMode" = "ForwardBase" }

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma multi_compile_fog
            #include "UnityCG.cginc"

            // Define the structure of vertex data
            struct appdata
            {
                float4 vertex : POSITION;
                float3 normal : NORMAL; // Vertex normal for each vertex (this will be the face normal)
                float2 uv : TEXCOORD0;
                float4 color : COLOR0;  // Vertex color (used for flat shading)
            };

            // Output structure to fragment shader
            struct v2f
            {
                float4 pos : SV_POSITION;
                nointerpolation float3 normal : NORMAL; // No interpolation for the normal
                float2 uv : TEXCOORD0;
                float4 color : COLOR0; // Pass the vertex color through
            };

            // The color to be used for flat shading
            float4 _Color;
            sampler2D _MainTex;
            sampler2D _BumpMap;
            float4 _SpecColor;
            float _Shininess;

            // Vertex shader
            v2f vert(appdata v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);

                // Pass the normal directly, no interpolation
                o.normal = v.normal;

                // Pass the color and texture coordinates
                o.color = v.color;
                o.uv = v.uv;

                return o;
            }

            // Fragment shader
            half4 frag(v2f i) : SV_Target
            {
                // Compute lighting in the fragment shader
                half3 lightDir = normalize(_WorldSpaceLightPos0.xyz); // Get light direction
                half diff = max(0, dot(i.normal, lightDir)); // Compute diffuse lighting

                // Sample the texture (if any)
                half4 texColor = tex2D(_MainTex, i.uv);

                // Apply vertex color for flat shading
                half4 finalColor = texColor * i.color * _Color * diff;

                // Return the final color with specular highlight
                return finalColor;
            }

            ENDCG
        }
    }

    Fallback "Diffuse"
}

// {
//     Properties
//     {
//         _Color ("Base Color", Color) = (1, 1, 1, 1)
//         _MainTex ("Base Texture", 2D) = "white" { }
//     }
//     SubShader
//     {
//         Tags { "RenderType" = "Opaque" }

//         Pass
//         {
//             Name "FORWARD"
//             Tags { "LightMode" = "ForwardBase" }

//             CGPROGRAM
//             #pragma vertex vert
//             #pragma fragment frag
//             #pragma multi_compile_fog
//             #include "UnityCG.cginc"

//             // Define the structure of vertex data
//             struct appdata
//             {
//                 float4 vertex : POSITION;
//                 float3 normal : NORMAL; // Vertex normal for each vertex (this will be the face normal)
//                 float2 uv : TEXCOORD0;
//             };

//             // Output structure to fragment shader
//             struct v2f
//             {
//                 float4 pos : SV_POSITION;
//                 nointerpolation float3 normal : NORMAL; // No interpolation for the normal
//                 float2 uv : TEXCOORD0;
//             };

//             // The color to be used for flat shading
//             float4 _Color;
//             sampler2D _MainTex;

//             // Vertex shader
//             v2f vert(appdata v)
//             {
//                 v2f o;
//                 o.pos = UnityObjectToClipPos(v.vertex);

//                 // Pass the normal directly, no interpolation
//                 o.normal = v.normal;

//                 o.uv = v.uv;
//                 return o;
//             }

//             // Fragment shader
//             half4 frag(v2f i) : SV_Target
//             {
//                 // Compute lighting in the fragment shader
//                 half3 lightDir = normalize(_WorldSpaceLightPos0.xyz); // Get light direction
//                 half diff = max(0, dot(i.normal, lightDir)); // Compute diffuse lighting

//                 // Sample the texture (if any) and apply the flat color shading
//                 half4 texColor = tex2D(_MainTex, i.uv);
//                 return texColor * diff * _Color; // Apply lighting and color
//             }

//             ENDCG
//         }
//     }
//     Fallback "Diffuse"
// }
