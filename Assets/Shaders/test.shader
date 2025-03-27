Shader "Custom/ScreenSpaceWireframe"
{
    Properties
    {
        _WireColor ("Wireframe Color", Color) = (0, 0, 0, 1)
        _MainTex ("Texture", 2D) = "white" {}
        _WireThickness ("Wire Thickness", Range(0.0, 1.0)) = 0.2
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"

            struct appdata_t
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
                float3 barycentric : TEXCOORD1; // Barycentric stored in UV1
            };

            struct v2f
            {
                float4 pos : SV_POSITION;
                float2 uv : TEXCOORD0;
                float3 barycentric : TEXCOORD1;
            };

            sampler2D _MainTex;
            fixed4 _WireColor;
            float _WireThickness;

            v2f vert (appdata_t v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv;
                o.barycentric = v.barycentric; // Pass barycentric from UV1
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                fixed4 texColor = tex2D(_MainTex, i.uv);

                // // Compute screen-space line width using fwidth()
                float3 bary = i.barycentric;
                float3 d = fwidth(bary); // Get screen-space derivatives for anti-aliasing
                float edgeFactor = min(bary.x, min(bary.y, bary.z)); // Find closest edge
                float lineWidth = _WireThickness * 0.5; // Thickness factor
                
                // Smoothstep for anti-aliased edges
                float wire = smoothstep(d.x * lineWidth, d.x * (lineWidth + 0.02), edgeFactor);
                fixed4 finalColor = lerp(_WireColor, texColor, wire);

                return finalColor;
                // return fixed4(i.barycentric, 1.0);
            }
            ENDCG
        }
    }
}
