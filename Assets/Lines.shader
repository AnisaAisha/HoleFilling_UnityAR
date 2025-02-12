Shader "Custom/WireframeShader"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _WireColor ("Wire Color", Color) = (0,0,0,1)
        _WireThickness ("Wire Thickness", Range(0, 1)) = 0.02
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

            struct appdata
            {
                float4 vertex : POSITION;
                float3 normal : NORMAL;
                float2 uv : TEXCOORD0;
            };

            struct v2f
            {
                float4 pos : SV_POSITION;
                float2 uv : TEXCOORD0;
                float3 worldNormal : NORMAL;
                float3 worldPos : TEXCOORD1;
            };

            sampler2D _MainTex;
            float4 _WireColor;
            float _WireThickness;

            v2f vert (appdata v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv;
                o.worldNormal = UnityObjectToWorldNormal(v.normal);
                o.worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
                return o;
            }

            float4 frag (v2f i) : SV_Target
            {
                float3 normal = normalize(i.worldNormal);
                float edgeFactor = abs(dot(normal, float3(1, 1, 1))); // Edge detection

                float wire = smoothstep(1 - _WireThickness, 1, edgeFactor);
                float3 baseColor = tex2D(_MainTex, i.uv).rgb;
                float3 finalColor = lerp(_WireColor.rgb, baseColor, wire);

                return float4(finalColor, 1);
            }
            ENDCG
        }
    }
}
