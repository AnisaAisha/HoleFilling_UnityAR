#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>
struct SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t8CB28AA1030E7FAEFC28809245F48903A966B2CF;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tFB624BCBD66F2375A53C5B17F42E131972D1E0D9;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>
struct SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct SubsystemProvider_1_tBF3C4994CBAACCFBF7C5B74C847151ED05D7D9C7;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemWithProvider_3_t4D6DBA97FBFBBDD88E0B44C80B4711879EFD7522;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t47A08A8E52556949A85ED11792391A687F965D53;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct TrackingSubsystem_4_t36B7E963263063D29AD906549E77576FAA31C385;
// UnityEngine.XR.ARSubsystems.ValidationUtility`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct ValidationUtility_1_t341A62AD04111B1E420AF1C31DC2190E708137BE;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2;
// UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser
struct DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor
struct XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider
struct Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValidationUtility_1_t341A62AD04111B1E420AF1C31DC2190E708137BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral0B9AEC2348486B831A3488530ACA1A6FECCC60DE;
IL2CPP_EXTERN_C String_t* _stringLiteral1C60D08AD178165742EAA66ED6E17B425304C141;
IL2CPP_EXTERN_C String_t* _stringLiteral220060F066F23D953DBDE62B9269659F55600D8E;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2ABD255D5E79D438044AA7D302C04ABEC3F505B5;
IL2CPP_EXTERN_C String_t* _stringLiteral31D159E683556C06B3B3963D92483B6867EB3233;
IL2CPP_EXTERN_C String_t* _stringLiteral36D03817BE07DC567E24E1ED6450F60D1FBE6156;
IL2CPP_EXTERN_C String_t* _stringLiteral371D4A83362DFDF00E89BA68C82057A64E205D24;
IL2CPP_EXTERN_C String_t* _stringLiteral3B1384C148B6355F25E67F7DFA0D39159B634A77;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral40F25DCEA3689A55267487C5F546C2AD0C2BB96B;
IL2CPP_EXTERN_C String_t* _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
IL2CPP_EXTERN_C String_t* _stringLiteral6308B88C9CA0C0B8108C62352D54B606B444C3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C;
IL2CPP_EXTERN_C String_t* _stringLiteral74C9B52FCBF111B4DFCD448D9C0E01FE4D21D99D;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7A3084E0303BA48B1355FE32F766678366C93AC8;
IL2CPP_EXTERN_C String_t* _stringLiteral92580D64BA310146F0049A68E639333564037B8B;
IL2CPP_EXTERN_C String_t* _stringLiteral96F3DC1EDD0EA6533A47F309AB798C05B5B2FDAA;
IL2CPP_EXTERN_C String_t* _stringLiteralB51BA3F369D95E685969CC962493A3F0B421BA4D;
IL2CPP_EXTERN_C String_t* _stringLiteralBEC9FDEA1EB953376E5F17E9CEC1AFAC97FDD26D;
IL2CPP_EXTERN_C String_t* _stringLiteralC6EAFD4C3B23645C412BB41A74CBFEB5A62E11BF;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralE446F5E5E3D5CD70111EE44D96D38C2402691299;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5480845DDB54CEC63C75E046DD65BEE8C8AB4F1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAB9760CC88D560C88D99EC0F40D9DA8814CDF933_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9DC74661C7591B33A0DA56C42A1D18E5CB5A5FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mBDD575450D75412D3AED5564F20533D7333E839B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_GetEnumerator_m593F898A8B31F750E85880418A2B04F2E7CDCDFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mA25A93E9848172129AC64B461B713935273B26EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_op_Implicit_m290EE8D065382D8121D3681FC0CDC7C6E0D1A8D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m443239B7937D845C4BDDFF63A68A515EC92204EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mEC2B34CD521662D07140FCB0D91A67D0411A3BF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE682C3E729CFBCC34BB9C4A636722ACD6E35D014_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Profiler_ValidateArguments_m631DF788CA8A7DF599A5871AF4D7FA8B9C3B52CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_mF2D187E7D28DAABC9682974F8BC24DD94AEC3880_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_mFE0B943258581DA1E3C8A38D2B1FDF6C431276B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_Raycast_mB206D5960A72ECCC6BC44AA91719306F790C4854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_Raycast_mDB7696CAE66690693DA105DDC40B319A327807E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_get_frameRate_m3D2F14E59249D30B755798C8C0732B0CEFA059E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_matchFrameRateRequested_m7D3DF9134FA202F846C13A322D4E895801E1B19A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_m07EAA6E76991BF9B677CE120674A862A92575EA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_mC889EBB6C5855DD9086D1ABADA7C64D5D3461B9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m14DC8034E7EF5275FC50EA47EF2355B6D9CC22B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_mB17ACABA3F2892B7CA5AE85EBF66B795E26AA997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3__ctor_m8563E495EB3A4C08B0C3C47658443D5A72A646FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_subsystemDescriptor_mF7CA6B57486377149C97D5CA6D59C0F1D8BCEB48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_4__ctor_m7E7E0815845FC7D13BBCA56A4EE6A9F384E22CC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidationUtility_1_ValidateAndDisposeIfThrown_mD36540C5A9568B6A11ACA2BFE33C28F0BFF33CD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidationUtility_1__ctor_m285405455174C22AF9381457103A44659DC54075_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSessionSubsystem_InstallAsync_m7E278495740EB305D92109D0FFE0895B774D3DA7_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.ValidationUtility`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct ValidationUtility_1_t341A62AD04111B1E420AF1C31DC2190E708137BE  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.ValidationUtility`1::m_Trackables
	HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* ___m_Trackables_4;
};

// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions
struct SessionAvailabilityExtensions_tC1373C1768B1576234D33B802746F77FCC60E8B1  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Unity.Collections.NativeSlice`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>
struct NativeSlice_1_t398BDCDCE5F9AF840285A8E6EC69152FED8FADFE 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t8CB28AA1030E7FAEFC28809245F48903A966B2CF  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tFB624BCBD66F2375A53C5B17F42E131972D1E0D9  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct SubsystemProvider_1_tBF3C4994CBAACCFBF7C5B74C847151ED05D7D9C7  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemWithProvider_3_t4D6DBA97FBFBBDD88E0B44C80B4711879EFD7522  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* ___U3CproviderU3Ek__BackingField_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser
struct DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8  : public ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.XR.ARSubsystems.ScopedProfiler
struct ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F 
{
	union
	{
		struct
		{
		};
		uint8_t ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F__padding[1];
	};
};

// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidLow
	uint64_t ___m_GuidLow_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidHigh
	uint64_t ___m_GuidHigh_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_3;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_pinvoke
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	char* ___U3CidU3Ek__BackingField_2;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_com
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	Il2CppChar* ___U3CidU3Ek__BackingField_2;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct TrackingSubsystem_4_t36B7E963263063D29AD906549E77576FAA31C385  : public SubsystemWithProvider_3_t4D6DBA97FBFBBDD88E0B44C80B4711879EFD7522
{
};

// Unity.Collections.Allocator
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.XR.ARSubsystems.Feature
struct Feature_t4F077DF9999D98A1C051A9A8983AB9A4F9D00F6A 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.Feature::value__
	uint64_t ___value___2;
};

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct NotTrackingReason_t03B4F5F62D4AF16340686F7F424704E5A5EBBE20 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_tE9DA9C4DF8FB26DD1C7E0F8AA022C1164A423F6B 
{
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.ScreenOrientation
struct ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2 
{
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.SessionAvailability
struct SessionAvailability_t01F7B649A99735E8895479D291EB177ADC8B4255 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.SessionInstallationStatus
struct SessionInstallationStatus_tC6EBB8AF18CA242785C3A1941A61A087EFD3A4F3 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionInstallationStatus::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.Supported
struct Supported_t78D339E736374B7F1336F01A352E7DB556F89106 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.Supported::value__
	int32_t ___value___2;
};

// UnityEngine.Rendering.TextureDimension
struct TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642 
{
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;
};

// UnityEngine.TextureFormat
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.TrackableType
struct TrackableType_t8B4D3C5D68805ECC40B1C8CA6C7174184BB2C110 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076  : public SubsystemDescriptorWithProvider_2_tFB624BCBD66F2375A53C5B17F42E131972D1E0D9
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider
struct Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46  : public SubsystemProvider_1_tBF3C4994CBAACCFBF7C5B74C847151ED05D7D9C7
{
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5  : public SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F
{
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>
struct NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;
};

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;
};

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.XR.ARSubsystems.XRRaycast
struct XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::m_Distance
	float ___m_Distance_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_HitTrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_HitTrackableId_6;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7  : public TrackingSubsystem_4_t36B7E963263063D29AD906549E77576FAA31C385
{
	// UnityEngine.XR.ARSubsystems.ValidationUtility`1<UnityEngine.XR.ARSubsystems.XRRaycast> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::m_ValidationUtility
	ValidationUtility_1_t341A62AD04111B1E420AF1C31DC2190E708137BE* ___m_ValidationUtility_4;
};

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor
struct XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311  : public SubsystemDescriptorWithProvider_2_t8CB28AA1030E7FAEFC28809245F48903A966B2CF
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportedTrackableTypes>k__BackingField
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportsTrackedRaycasts>k__BackingField
	bool ___U3CsupportsTrackedRaycastsU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams
struct XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 
{
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenOrientation>k__BackingField
	int32_t ___U3CscreenOrientationU3Ek__BackingField_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenDimensions>k__BackingField
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CscreenDimensionsU3Ek__BackingField_1;
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 
{
	// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportedTrackableTypes>k__BackingField
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsTrackedRaycasts>k__BackingField
	bool ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	int32_t ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	int32_t ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
};

// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>
struct Enumerator_tD931B981D9A59D89BFAA36FDC5C9A8384551A464 
{
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1/Enumerator::m_Array
	NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1/Enumerator::m_Index
	int32_t ___m_Index_1;
	// T Unity.Collections.NativeArray`1/Enumerator::value
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___value_2;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.XR.ARSubsystems.Configuration
struct Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 
{
	// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::<descriptor>k__BackingField
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___U3CdescriptorU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::<features>k__BackingField
	uint64_t ___U3CfeaturesU3Ek__BackingField_1;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>
struct Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___value_1;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399  : public SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526
{
	// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::<currentConfiguration>k__BackingField
	Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D ___U3CcurrentConfigurationU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_PreviousDesiredFeatures
	uint64_t ___m_PreviousDesiredFeatures_5;
	// UnityEngine.XR.ARSubsystems.Configuration UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_PreviousConfiguration
	Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___m_PreviousConfiguration_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_FirstUpdate
	bool ___m_FirstUpdate_7;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_DefaultConfigurationChooser
	ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* ___m_DefaultConfigurationChooser_8;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_ConfigurationChooser
	ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* ___m_ConfigurationChooser_9;
};

// UnityEngine.XR.ARSubsystems.ValidationUtility`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct ValidationUtility_1_t341A62AD04111B1E420AF1C31DC2190E708137BE_StaticFields
{
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.ValidationUtility`1::s_IdSet
	HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* ___s_IdSet_0;
	// System.String UnityEngine.XR.ARSubsystems.ValidationUtility`1::k_AddedAction
	String_t* ___k_AddedAction_1;
	// System.String UnityEngine.XR.ARSubsystems.ValidationUtility`1::k_UpdatedAction
	String_t* ___k_UpdatedAction_2;
	// System.String UnityEngine.XR.ARSubsystems.ValidationUtility`1::k_RemovedAction
	String_t* ___k_RemovedAction_3;
};

// UnityEngine.XR.ARSubsystems.ValidationUtility`1<UnityEngine.XR.ARSubsystems.XRRaycast>

// UnityEngine.XR.ARSubsystems.ConfigurationChooser

// UnityEngine.XR.ARSubsystems.ConfigurationChooser

// UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions

// UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// Unity.Collections.NativeSlice`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>

// Unity.Collections.NativeSlice`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser

// UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.XR.ARSubsystems.ScopedProfiler

// UnityEngine.XR.ARSubsystems.ScopedProfiler

// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_StaticFields
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::k_Empty
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___k_Empty_0;
};

// UnityEngine.XR.ARSubsystems.SerializableGuid

// System.Single

// System.Single

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.XR.ARSubsystems.TrackableId

// System.UInt64

// System.UInt64

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector2Int

// System.Void

// System.Void

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// Unity.Collections.Allocator

// Unity.Collections.Allocator

// UnityEngine.XR.ARSubsystems.Feature

// UnityEngine.XR.ARSubsystems.Feature

// System.Int32Enum

// System.Int32Enum

// UnityEngine.XR.ARSubsystems.NotTrackingReason

// UnityEngine.XR.ARSubsystems.NotTrackingReason

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// UnityEngine.Ray

// UnityEngine.Ray

// System.Text.RegularExpressions.RegexOptions

// System.Text.RegularExpressions.RegexOptions

// UnityEngine.ScreenOrientation

// UnityEngine.ScreenOrientation

// UnityEngine.XR.ARSubsystems.SessionAvailability

// UnityEngine.XR.ARSubsystems.SessionAvailability

// UnityEngine.XR.ARSubsystems.SessionInstallationStatus

// UnityEngine.XR.ARSubsystems.SessionInstallationStatus

// UnityEngine.XR.ARSubsystems.Supported

// UnityEngine.XR.ARSubsystems.Supported

// UnityEngine.Rendering.TextureDimension

// UnityEngine.Rendering.TextureDimension

// UnityEngine.TextureFormat

// UnityEngine.TextureFormat

// UnityEngine.XR.ARSubsystems.TrackableType

// UnityEngine.XR.ARSubsystems.TrackableType

// UnityEngine.XR.ARSubsystems.TrackingState

// UnityEngine.XR.ARSubsystems.TrackingState

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.Text.RegularExpressions.Regex

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.XR.ARSubsystems.XRRaycast
struct XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::s_Default
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRRaycast

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams

// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo

// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>

// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>

// System.ArgumentException

// System.ArgumentException

// UnityEngine.XR.ARSubsystems.Configuration

// UnityEngine.XR.ARSubsystems.Configuration

// System.NotSupportedException

// System.NotSupportedException

// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>

// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void UnityEngine.XR.ARSubsystems.ValidationUtility`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtility_1__ctor_m285405455174C22AF9381457103A44659DC54075_gshared (ValidationUtility_1_t341A62AD04111B1E420AF1C31DC2190E708137BE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_mFB0EB2FBD50AE188F7C5BA05657F8CB3E61C78CC_gshared (TrackingSubsystem_4_t47A08A8E52556949A85ED11792391A687F965D53* __this, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ValidationUtility`1<UnityEngine.XR.ARSubsystems.XRRaycast>::ValidateAndDisposeIfThrown(UnityEngine.XR.ARSubsystems.TrackableChanges`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtility_1_ValidateAndDisposeIfThrown_mD36540C5A9568B6A11ACA2BFE33C28F0BFF33CD9_gshared (ValidationUtility_1_t341A62AD04111B1E420AF1C31DC2190E708137BE* __this, TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 ___0_changes, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared (SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared (SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07* __this, const RuntimeMethod* method) ;
// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_subsystemDescriptor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_subsystemDescriptor_mB4052808D703DF75CA2D74A5801B59172E3F80C7_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_3__ctor_mEC13729FA21E9E590467B3B9FC8CD25CC281FFD4_gshared (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::get_IsCreated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mA25A93E9848172129AC64B461B713935273B26EC_gshared_inline (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mBDD575450D75412D3AED5564F20533D7333E839B_gshared (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD931B981D9A59D89BFAA36FDC5C9A8384551A464 NativeArray_1_GetEnumerator_m593F898A8B31F750E85880418A2B04F2E7CDCDFB_gshared (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m5480845DDB54CEC63C75E046DD65BEE8C8AB4F1B_gshared (Enumerator_tD931B981D9A59D89BFAA36FDC5C9A8384551A464* __this, const RuntimeMethod* method) ;
// T Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 Enumerator_get_Current_m9DC74661C7591B33A0DA56C42A1D18E5CB5A5FF2_gshared_inline (Enumerator_tD931B981D9A59D89BFAA36FDC5C9A8384551A464* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::MoveNext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mAB9760CC88D560C88D99EC0F40D9DA8814CDF933_gshared_inline (Enumerator_tD931B981D9A59D89BFAA36FDC5C9A8384551A464* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSlice`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::op_Implicit(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t398BDCDCE5F9AF840285A8E6EC69152FED8FADFE NativeSlice_1_op_Implicit_m290EE8D065382D8121D3681FC0CDC7C6E0D1A8D0_gshared (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 ___0_array, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m443239B7937D845C4BDDFF63A68A515EC92204EB_gshared (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D* __this, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mEC2B34CD521662D07140FCB0D91A67D0411A3BF3_gshared_inline (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 Nullable_1_get_Value_mE682C3E729CFBCC34BB9C4A636722ACD6E35D014_gshared (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB* Promise_1_CreateResolvedPromise_m0949FA71DFBA371879063E5948B8E5B46467EFCF_gshared (int32_t ___0_result, const RuntimeMethod* method) ;

// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::get_trackableId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycastHit_get_trackableId_m8B92C0F8977D274743D9388DEB7DCEBCC88E7325_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycastHit_get_pose_m3B8D69B763A39178CB583948B4E08255FE9A633E_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::get_distance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRRaycastHit_get_distance_m7098B7C90D22697CA37FBBDF50A4109AD055CA80_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::get_hitType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRRaycastHit_get_hitType_m30A8013E847E6B2B70A9511B522099C03102E933_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,System.Single,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, float ___2_distance, int32_t ___3_hitType, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.TrackableId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Pose::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pose_GetHashCode_mDD6C48FABC18795F04F82D42DFCBC916C0C6CCDB (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastHit::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycastHit_GetHashCode_m7C9DBAE43B929D3D4BBFF37E15E4E01143BC4A6B (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::Equals(UnityEngine.XR.ARSubsystems.XRRaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_Equals_mE45E36906807C4F3C5E28C1F54228142D444DA0A (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_Equals_m319801A0EFB8A841B3B7E6197BB612780698759A (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Pose::Equals(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pose_Equals_m31979E7A46252DBB620F4A0EA3BDBA61782DA498 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_other, const RuntimeMethod* method) ;
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline (const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ValidationUtility`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor()
inline void ValidationUtility_1__ctor_m285405455174C22AF9381457103A44659DC54075 (ValidationUtility_1_t341A62AD04111B1E420AF1C31DC2190E708137BE* __this, const RuntimeMethod* method)
{
	((  void (*) (ValidationUtility_1_t341A62AD04111B1E420AF1C31DC2190E708137BE*, const RuntimeMethod*))ValidationUtility_1__ctor_m285405455174C22AF9381457103A44659DC54075_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>::.ctor()
inline void TrackingSubsystem_4__ctor_m7E7E0815845FC7D13BBCA56A4EE6A9F384E22CC1 (TrackingSubsystem_4_t36B7E963263063D29AD906549E77576FAA31C385* __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_4_t36B7E963263063D29AD906549E77576FAA31C385*, const RuntimeMethod*))TrackingSubsystem_4__ctor_mFB0EB2FBD50AE188F7C5BA05657F8CB3E61C78CC_gshared)(__this, method);
}
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>::get_provider()
inline Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline (SubsystemWithProvider_3_t4D6DBA97FBFBBDD88E0B44C80B4711879EFD7522* __this, const RuntimeMethod* method)
{
	return ((  Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* (*) (SubsystemWithProvider_3_t4D6DBA97FBFBBDD88E0B44C80B4711879EFD7522*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::get_defaultValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 XRRaycast_get_defaultValue_m37D4F9D561AA6422EEB957A49FDC8B9E1669A48E_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ValidationUtility`1<UnityEngine.XR.ARSubsystems.XRRaycast>::ValidateAndDisposeIfThrown(UnityEngine.XR.ARSubsystems.TrackableChanges`1<T>)
inline void ValidationUtility_1_ValidateAndDisposeIfThrown_mD36540C5A9568B6A11ACA2BFE33C28F0BFF33CD9 (ValidationUtility_1_t341A62AD04111B1E420AF1C31DC2190E708137BE* __this, TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 ___0_changes, const RuntimeMethod* method)
{
	((  void (*) (ValidationUtility_1_t341A62AD04111B1E420AF1C31DC2190E708137BE*, TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5, const RuntimeMethod*))ValidationUtility_1_ValidateAndDisposeIfThrown_mD36540C5A9568B6A11ACA2BFE33C28F0BFF33CD9_gshared)(__this, ___0_changes, method);
}
// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::get_defaultValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 XRRaycastHit_get_defaultValue_m330E18C6389B68E95AB5CFF26531D5CF5DE6E090_inline (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m14DC8034E7EF5275FC50EA47EF2355B6D9CC22B8 (SubsystemProvider_1_tBF3C4994CBAACCFBF7C5B74C847151ED05D7D9C7* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_tBF3C4994CBAACCFBF7C5B74C847151ED05D7D9C7*, const RuntimeMethod*))SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor__ctor_m95E810A79E27BB9FE0CC927BCBDEE2BFC5A0B011 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_cinfo, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___0_descriptor, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_m07EAA6E76991BF9B677CE120674A862A92575EA1 (SubsystemDescriptorWithProvider_2_t8CB28AA1030E7FAEFC28809245F48903A966B2CF* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_t8CB28AA1030E7FAEFC28809245F48903A966B2CF*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsViewportBasedRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m1860360556D5F4BBD3B242C93D8C92B3F8FA8D90_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsWorldBasedRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_m2A57C6AF5B8A21E2780A2CDC288F2917DB4BC590_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportedTrackableTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_m99EBD94098B7BD499391301B0099EC9381D32558_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsTrackedRaycasts()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_m9C99240C24C64818B63A368C025689018E8C4044_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m962E07A26F49D8C32DAEFEC4F9E0F79EBC128533_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m5D183591B4A3ECA1EC2AA9015C02DCD1EB1F076F_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m20C9DAD8677611ACD22689DA249911EEDE46EBF7_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mC7DB604D2E288A145177EC66F8C1DAA50F38693F_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m05D5BC11896AED796A6E237BBB98FA4EF3CF17A4_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_m319BC9C9EB554C35CD40B791917A603D63BEEE0A_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackedRaycasts_m7E65DAEB9ED0CB4C4C83DB751C1547145949AA41_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::ReferenceHash(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m3B3273BD5CFEFD2D09635E1B69281B0ECD9819FB (int32_t ___0_hash1, int32_t ___1_hash2, int32_t ___2_hash3, int32_t ___3_hash4, int32_t ___4_hash5, int32_t ___5_hash6, int32_t ___6_hash7, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m6CC66C9C4BA7904DF1E9E9D7A3C74DC8D6A6C1BA (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mD2E403B4E791DCE658297F8CA484149EB2D5F5B8 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m4D9FFB9CFA4DF03E9AF2763D3E91926896FCD64D (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m3022468C4555B097321DCDB08B4079DA430EBB3A (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Profiling.Profiler::BeginSample(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler__ctor_m652B5689DE1A3C3EF7D12801DA27FA3B40E4412F (ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Profiling.Profiler::EndSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757 (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler_Dispose_m7B646405B4E52CC4677329D3B860BE9C17A9DAC4 (ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.SerializableGuid::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableGuid__ctor_m0F2435157FEC8427E91A7D0DD39960BADE7209F0 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, uint64_t ___0_guidLow, uint64_t ___1_guidHigh, const RuntimeMethod* method) ;
// System.Guid UnityEngine.XR.ARSubsystems.GuidUtil::Compose(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t GuidUtil_Compose_m58AA1AA0AF27A23B64937C72023C6F72D4C8DD40 (uint64_t ___0_low, uint64_t ___1_high, const RuntimeMethod* method) ;
// System.Guid UnityEngine.XR.ARSubsystems.SerializableGuid::get_guid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t SerializableGuid_get_guid_mC9C573E5730B2B18F6DFA80F0BCFD1A097C362B3 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, const RuntimeMethod* method) ;
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36 (int32_t ___0_hash1, int32_t ___1_hash2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.SerializableGuid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializableGuid_GetHashCode_mC33B7B6D908B3A62767C19B331620784F1998D07 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.SerializableGuid::Equals(UnityEngine.XR.ARSubsystems.SerializableGuid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableGuid_Equals_m7096244EB28310B3CB17CD79EE7068768C6AB4F7 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.SerializableGuid::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableGuid_Equals_mEB4A1B39DD600CB499AC43BF60A3BD206A1EFD71 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.SerializableGuid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableGuid_ToString_m4FB29C69FF91DC2020A96C3C83FE1B60F9C73047 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::get_provider()
inline Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline (SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526* __this, const RuntimeMethod* method)
{
	return ((  Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* (*) (SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::get_subsystemDescriptor()
inline XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* SubsystemWithProvider_3_get_subsystemDescriptor_mF7CA6B57486377149C97D5CA6D59C0F1D8BCEB48_inline (SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526* __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* (*) (SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526*, const RuntimeMethod*))SubsystemWithProvider_3_get_subsystemDescriptor_mB4052808D703DF75CA2D74A5801B59172E3F80C7_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::get_supportsInstall()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsInstall_m3EE93DA405D5C59B746B621FC30D4CC182BB1E53_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConfigurationChooser__ctor_mDFBE2A3915F886FE4D79CD514F550A10CCC6A90C (DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::.ctor()
inline void SubsystemWithProvider_3__ctor_m8563E495EB3A4C08B0C3C47658443D5A72A646FF (SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526*, const RuntimeMethod*))SubsystemWithProvider_3__ctor_mEC13729FA21E9E590467B3B9FC8CD25CC281FFD4_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::GetConfigurationDescriptors(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 XRSessionSubsystem_GetConfigurationDescriptors_m437FE62BDE0C6F37AC5A75C1A11674AB403147F2 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, int32_t ___0_allocator, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mA25A93E9848172129AC64B461B713935273B26EC_inline (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mA25A93E9848172129AC64B461B713935273B26EC_gshared_inline)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::Dispose()
inline void NativeArray_1_Dispose_mBDD575450D75412D3AED5564F20533D7333E839B (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2*, const RuntimeMethod*))NativeArray_1_Dispose_mBDD575450D75412D3AED5564F20533D7333E839B_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::GetEnumerator()
inline Enumerator_tD931B981D9A59D89BFAA36FDC5C9A8384551A464 NativeArray_1_GetEnumerator_m593F898A8B31F750E85880418A2B04F2E7CDCDFB (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD931B981D9A59D89BFAA36FDC5C9A8384551A464 (*) (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2*, const RuntimeMethod*))NativeArray_1_GetEnumerator_m593F898A8B31F750E85880418A2B04F2E7CDCDFB_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::Dispose()
inline void Enumerator_Dispose_m5480845DDB54CEC63C75E046DD65BEE8C8AB4F1B (Enumerator_tD931B981D9A59D89BFAA36FDC5C9A8384551A464* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD931B981D9A59D89BFAA36FDC5C9A8384551A464*, const RuntimeMethod*))Enumerator_Dispose_m5480845DDB54CEC63C75E046DD65BEE8C8AB4F1B_gshared)(__this, method);
}
// T Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::get_Current()
inline ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 Enumerator_get_Current_m9DC74661C7591B33A0DA56C42A1D18E5CB5A5FF2_inline (Enumerator_tD931B981D9A59D89BFAA36FDC5C9A8384551A464* __this, const RuntimeMethod* method)
{
	return ((  ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 (*) (Enumerator_tD931B981D9A59D89BFAA36FDC5C9A8384551A464*, const RuntimeMethod*))Enumerator_get_Current_m9DC74661C7591B33A0DA56C42A1D18E5CB5A5FF2_gshared_inline)(__this, method);
}
// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::get_identifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ConfigurationDescriptor_get_identifier_m858F4B730002C1823D283460115DA65C6A46BCB6_inline (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystem::HexString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSessionSubsystem_HexString_m4BB0D6C1C291C1713B9365C2268941FAD0FB53AB (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::get_rank()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConfigurationDescriptor_get_rank_mEDFBF5E2173FA84A0695BB01A6A40860794F6FA8_inline (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::get_capabilities()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConfigurationDescriptor_get_capabilities_m6A4EF4C0E0FE3671E8564EF13BA2A5B4264CF938_inline (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.FeatureExtensions::ToStringList(UnityEngine.XR.ARSubsystems.Feature,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FeatureExtensions_ToStringList_m7961C38D97DCDD6FB5EAC9AB77104F97D5304214 (uint64_t ___0_features, String_t* ___1_separator, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::MoveNext()
inline bool Enumerator_MoveNext_mAB9760CC88D560C88D99EC0F40D9DA8814CDF933_inline (Enumerator_tD931B981D9A59D89BFAA36FDC5C9A8384551A464* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD931B981D9A59D89BFAA36FDC5C9A8384551A464*, const RuntimeMethod*))Enumerator_MoveNext_mAB9760CC88D560C88D99EC0F40D9DA8814CDF933_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSlice`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::op_Implicit(Unity.Collections.NativeArray`1<T>)
inline NativeSlice_1_t398BDCDCE5F9AF840285A8E6EC69152FED8FADFE NativeSlice_1_op_Implicit_m290EE8D065382D8121D3681FC0CDC7C6E0D1A8D0 (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 ___0_array, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_t398BDCDCE5F9AF840285A8E6EC69152FED8FADFE (*) (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2, const RuntimeMethod*))NativeSlice_1_op_Implicit_m290EE8D065382D8121D3681FC0CDC7C6E0D1A8D0_gshared)(___0_array, method);
}
// System.Void System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>::.ctor(T)
inline void Nullable_1__ctor_m443239B7937D845C4BDDFF63A68A515EC92204EB (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D* __this, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D*, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947, const RuntimeMethod*))Nullable_1__ctor_m443239B7937D845C4BDDFF63A68A515EC92204EB_gshared)(__this, ___0_value, method);
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_requestedFeatures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XRSessionSubsystem_get_requestedFeatures_m2193DB34D2CC44D20701580C9FA062EA111CFCE3 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::DetermineConfiguration(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D XRSessionSubsystem_DetermineConfiguration_m0A5C3F6A14CB8F2D74D5162CCCD5FBD3D51F58A5 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, uint64_t ___0_features, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::set_currentConfiguration(System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystem_set_currentConfiguration_m4299FA74038DD6293A125B425179E4C948D09917_inline (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D ___0_value, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_currentConfiguration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D XRSessionSubsystem_get_currentConfiguration_m1AB222F75B6C1645DB3405CB9AE18740EE66F0E5_inline (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>::get_HasValue()
inline bool Nullable_1_get_HasValue_mEC2B34CD521662D07140FCB0D91A67D0411A3BF3_inline (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D*, const RuntimeMethod*))Nullable_1_get_HasValue_mEC2B34CD521662D07140FCB0D91A67D0411A3BF3_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>::get_Value()
inline Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 Nullable_1_get_Value_mE682C3E729CFBCC34BB9C4A636722ACD6E35D014 (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D* __this, const RuntimeMethod* method)
{
	return ((  Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 (*) (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D*, const RuntimeMethod*))Nullable_1_get_Value_mE682C3E729CFBCC34BB9C4A636722ACD6E35D014_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::DebugPrintConfigurationChange(UnityEngine.XR.ARSubsystems.Configuration,UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_DebugPrintConfigurationChange_m1A02C301784F7EE669CB6CD5BBBB5B3A595CCFB5 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___0_configuration, uint64_t ___1_desiredFeatures, const RuntimeMethod* method) ;
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032 (intptr_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292 (intptr_t* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.Configuration::op_Inequality(UnityEngine.XR.ARSubsystems.Configuration,UnityEngine.XR.ARSubsystems.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Configuration_op_Inequality_m02D4E5E82910A6C7BBCEC7B3ED5C6DA8B5608010 (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___0_lhs, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::get_descriptor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 Configuration_get_descriptor_m3C4973351367EA0BD9E48DA1E2201D8803BA8D1E_inline (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::get_features()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Configuration_get_features_m704F372E940AF1DB435C1EBFF8E48EAD4E8B3776_inline (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.FeatureExtensions::SetDifference(UnityEngine.XR.ARSubsystems.Feature,UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FeatureExtensions_SetDifference_mA9D5A50B2BF9B5C66047D6152384DC14D5BBCE9F (uint64_t ___0_self, uint64_t ___1_features, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.FeatureExtensions::TrackingModes(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FeatureExtensions_TrackingModes_m98FFB5EE942CA939B0F4F06A425673A4081287B7 (uint64_t ___0_self, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>::CreateResolvedPromise(T)
inline Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* Promise_1_CreateResolvedPromise_mFE0B943258581DA1E3C8A38D2B1FDF6C431276B3 (int32_t ___0_result, const RuntimeMethod* method)
{
	return ((  Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_m0949FA71DFBA371879063E5948B8E5B46467EFCF_gshared)(___0_result, method);
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>::CreateResolvedPromise(T)
inline Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* Promise_1_CreateResolvedPromise_mF2D187E7D28DAABC9682974F8BC24DD94AEC3880 (int32_t ___0_result, const RuntimeMethod* method)
{
	return ((  Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_m0949FA71DFBA371879063E5948B8E5B46467EFCF_gshared)(___0_result, method);
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_mB17ACABA3F2892B7CA5AE85EBF66B795E26AA997 (SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F*, const RuntimeMethod*))SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor__ctor_mB1B365F156769946A415E3A37A4FDDE167D5D5B7 (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_cinfo, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_mC889EBB6C5855DD9086D1ABADA7C64D5D3461B9C (SubsystemDescriptorWithProvider_2_tFB624BCBD66F2375A53C5B17F42E131972D1E0D9* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_tFB624BCBD66F2375A53C5B17F42E131972D1E0D9*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsInstall()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsInstall(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_m6BF049FADBC0C98964ED4DC227535BB27BBDA6B7_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsMatchFrameRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m7E8D8FF23A84B20582BF51BEF07DCDFF325ACDF8_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m2D7B3F90910D284E6D8696F3E187E61436768107 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m0C051CCCCA3A44F0C851768FE1CDB49DAC6D82B6 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m053CC1A9E8D4DBF1FAFACF66083B615EF36CA572 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenOrientation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenOrientation(UnityEngine.ScreenOrientation)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenOrientation_m95E8C1C9AEEFCD0577AE4605645FA8CD8F1D6B9B_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenDimensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenDimensions(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenDimensions_mC99924339E008CEFCF202EC394463F00DF0DA4B3_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_mA3B6135FA770AF0C171319B50D9B913657230EB7_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_GetHashCode_m735A861B2C2718DBF5588467EC76FC6EC77EFE8D (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mEC4D21B1DFB2DB2327FCE21B43C144DD2003828C (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mE2FA6A03BEBC662F543FA73D25561369FAEE7EAF (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSessionUpdateParams_ToString_m82D102D9405D9B5FCA96E55074C982F225287D80 (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2Int::Equals(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_other, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, uint64_t ___0_subId1, uint64_t ___1_subId2, const RuntimeMethod* method) ;
// System.String System.UInt64::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680 (uint64_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_m4BE1AD91726751D994E6FB864B231BE5D7D3F85F (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m67C98169A04DB96CCEBC08A05B3FF9544B52C3E5 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_pattern, int32_t ___1_options, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_nativeTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRTextureDescriptor_get_nativeTexture_m1E27C0E1DC11DDC6139178509EE91B8DF54DBAD4 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_width_m570472F03994BC63F21751414105A2E0C112DBF2 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_height_mC0B37241C24FA883E2594B9411080EDF654E3E01 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_mipmapCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_mipmapCount_m4B2ED0D6EBE06AD86E356203B4AB5DE3807C1D31 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_format_mA745AA87046D4FE4846C11B8285B980FF6DDDD1A (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_propertyNameId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_propertyNameId_mF5A620F0DAEE746BDD293DB7F02909FB5404DCC1 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_get_valid_mBEE2CC268CC8773618BAB7794118746E235A6761 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_depth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_depth_m5885EBF7D767C918B1483D63D1B11EE60D939E7D_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_dimension()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722 (int32_t* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::hasIdenticalTextureMetadata(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_hasIdenticalTextureMetadata_mB4DA1A4CFF4ABB66F8FF3AF1F310E60BA1B3F872 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_other, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRTextureDescriptor_Reset_m1BE8024830BA7AFB94AAD01731FDB449DD12A01F (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_m4931F85C225CAC63EC71FBCE246204E244B6CA2B (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_m42127F01DF3CDEA1F38CF07E6057E8AD9E6F4570 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D (intptr_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_GetHashCode_mFEB456F0A0985232D0E342B8F10669149F190012 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.String System.IntPtr::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_m4B664F765633183265DE764BECD5D78FCCA20A13 (intptr_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.XRTextureDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRTextureDescriptor_ToString_m452F36D253986001921C5F627E67E2452D685493 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Profiling.Profiler::ValidateArguments(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_ValidateArguments_m631DF788CA8A7DF599A5871AF4D7FA8B9C3B52CC_inline (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Profiling.Profiler::BeginSampleImpl(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Profiler_BeginSampleImpl_m7CA0C092A61229CA7BF617E521F2DE0E2B155CEA (String_t* ___0_name, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_targetObject, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::get_defaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 XRRaycastHit_get_defaultValue_m330E18C6389B68E95AB5CFF26531D5CF5DE6E090 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRRaycastHit defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_0 = ((XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycastHit_get_trackableId_m8B92C0F8977D274743D9388DEB7DCEBCC88E7325 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_TrackableId_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycastHit_get_trackableId_m8B92C0F8977D274743D9388DEB7DCEBCC88E7325_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 _returnValue;
	_returnValue = XRRaycastHit_get_trackableId_m8B92C0F8977D274743D9388DEB7DCEBCC88E7325_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycastHit_get_pose_m3B8D69B763A39178CB583948B4E08255FE9A633E (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycastHit_get_pose_m3B8D69B763A39178CB583948B4E08255FE9A633E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = XRRaycastHit_get_pose_m3B8D69B763A39178CB583948B4E08255FE9A633E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRRaycastHit_get_distance_m7098B7C90D22697CA37FBBDF50A4109AD055CA80 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Distance;
		float L_0 = __this->___m_Distance_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float XRRaycastHit_get_distance_m7098B7C90D22697CA37FBBDF50A4109AD055CA80_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	float _returnValue;
	_returnValue = XRRaycastHit_get_distance_m7098B7C90D22697CA37FBBDF50A4109AD055CA80_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::get_hitType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycastHit_get_hitType_m30A8013E847E6B2B70A9511B522099C03102E933 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HitType;
		int32_t L_0 = __this->___m_HitType_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRRaycastHit_get_hitType_m30A8013E847E6B2B70A9511B522099C03102E933_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRRaycastHit_get_hitType_m30A8013E847E6B2B70A9511B522099C03102E933_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,System.Single,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, float ___2_distance, int32_t ___3_hitType, const RuntimeMethod* method) 
{
	{
		// m_TrackableId = trackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ___0_trackableId;
		__this->___m_TrackableId_1 = L_0;
		// m_Pose = pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = ___1_pose;
		__this->___m_Pose_2 = L_1;
		// m_Distance = distance;
		float L_2 = ___2_distance;
		__this->___m_Distance_3 = L_2;
		// m_HitType = hitType;
		int32_t L_3 = ___3_hitType;
		__this->___m_HitType_4 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641_AdjustorThunk (RuntimeObject* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, float ___2_distance, int32_t ___3_hitType, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641(_thisAdjusted, ___0_trackableId, ___1_pose, ___2_distance, ___3_hitType, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastHit::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycastHit_GetHashCode_m7C9DBAE43B929D3D4BBFF37E15E4E01143BC4A6B (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// var hash = m_TrackableId.GetHashCode();
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_0 = (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)(&__this->___m_TrackableId_1);
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537(L_0, NULL);
		V_0 = L_1;
		// hash = hash * 486187739 + m_Pose.GetHashCode();
		int32_t L_2 = V_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->___m_Pose_2);
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Pose_GetHashCode_mDD6C48FABC18795F04F82D42DFCBC916C0C6CCDB(L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)486187739))), L_4));
		// hash = hash * 486187739 + m_Distance.GetHashCode();
		int32_t L_5 = V_0;
		float* L_6 = (float*)(&__this->___m_Distance_3);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)486187739))), L_7));
		// hash = hash * 486187739 + ((int)m_HitType).GetHashCode();
		int32_t L_8 = V_0;
		int32_t L_9 = __this->___m_HitType_4;
		V_1 = L_9;
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)486187739))), L_10));
		// return hash;
		int32_t L_11 = V_0;
		V_2 = L_11;
		goto IL_005d;
	}

IL_005d:
	{
		// }
		int32_t L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C  int32_t XRRaycastHit_GetHashCode_m7C9DBAE43B929D3D4BBFF37E15E4E01143BC4A6B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRRaycastHit_GetHashCode_m7C9DBAE43B929D3D4BBFF37E15E4E01143BC4A6B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_Equals_m319801A0EFB8A841B3B7E6197BB612780698759A (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B3_0 = 0;
	{
		// public override bool Equals(object obj) => (obj is XRRaycastHit other) && Equals(other);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*)((XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*)(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*)UnBox(L_1, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var))));
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = XRRaycastHit_Equals_mE45E36906807C4F3C5E28C1F54228142D444DA0A(__this, L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return (bool)G_B3_0;
	}
}
IL2CPP_EXTERN_C  bool XRRaycastHit_Equals_m319801A0EFB8A841B3B7E6197BB612780698759A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRRaycastHit_Equals_m319801A0EFB8A841B3B7E6197BB612780698759A(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::Equals(UnityEngine.XR.ARSubsystems.XRRaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_Equals_mE45E36906807C4F3C5E28C1F54228142D444DA0A (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// return
		//     (m_TrackableId.Equals(other.m_TrackableId)) &&
		//     (m_Pose.Equals(other.m_Pose)) &&
		//     (m_Distance.Equals(other.m_Distance)) &&
		//     (m_HitType == other.m_HitType);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_0 = (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)(&__this->___m_TrackableId_1);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_1 = ___0_other;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2 = L_1.___m_TrackableId_1;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)(&__this->___m_Pose_2);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_5 = ___0_other;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = L_5.___m_Pose_2;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Pose_Equals_m31979E7A46252DBB620F4A0EA3BDBA61782DA498(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		float* L_8 = (float*)(&__this->___m_Distance_3);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_9 = ___0_other;
		float L_10 = L_9.___m_Distance_3;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_12 = __this->___m_HitType_4;
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_13 = ___0_other;
		int32_t L_14 = L_13.___m_HitType_4;
		G_B5_0 = ((((int32_t)L_12) == ((int32_t)L_14))? 1 : 0);
		goto IL_004b;
	}

IL_004a:
	{
		G_B5_0 = 0;
	}

IL_004b:
	{
		V_0 = (bool)G_B5_0;
		goto IL_004e;
	}

IL_004e:
	{
		// }
		bool L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C  bool XRRaycastHit_Equals_mE45E36906807C4F3C5E28C1F54228142D444DA0A_AdjustorThunk (RuntimeObject* __this, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___0_other, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRRaycastHit_Equals_mE45E36906807C4F3C5E28C1F54228142D444DA0A(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastHit__cctor_m5484BC89F33E0E0E1C846CB135139037484009D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly XRRaycastHit s_Default = new XRRaycastHit(
		//     TrackableId.invalidId, Pose.identity, 0, TrackableType.None);
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0;
		L_0 = TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_2;
		memset((&L_2), 0, sizeof(L_2));
		XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641((&L_2), L_0, L_1, (0.0f), 0, /*hidden argument*/NULL);
		((XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var))->___s_Default_0 = L_2;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem__ctor_m883CA69818A86683F768E24C30896A03AB231744 (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingSubsystem_4__ctor_m7E7E0815845FC7D13BBCA56A4EE6A9F384E22CC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidationUtility_1__ctor_m285405455174C22AF9381457103A44659DC54075_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidationUtility_1_t341A62AD04111B1E420AF1C31DC2190E708137BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ValidationUtility<XRRaycast> m_ValidationUtility = new ValidationUtility<XRRaycast>();
		ValidationUtility_1_t341A62AD04111B1E420AF1C31DC2190E708137BE* L_0 = (ValidationUtility_1_t341A62AD04111B1E420AF1C31DC2190E708137BE*)il2cpp_codegen_object_new(ValidationUtility_1_t341A62AD04111B1E420AF1C31DC2190E708137BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValidationUtility_1__ctor_m285405455174C22AF9381457103A44659DC54075(L_0, ValidationUtility_1__ctor_m285405455174C22AF9381457103A44659DC54075_RuntimeMethod_var);
		__this->___m_ValidationUtility_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ValidationUtility_4), (void*)L_0);
		// public XRRaycastSubsystem() { }
		TrackingSubsystem_4__ctor_m7E7E0815845FC7D13BBCA56A4EE6A9F384E22CC1(__this, TrackingSubsystem_4__ctor_m7E7E0815845FC7D13BBCA56A4EE6A9F384E22CC1_RuntimeMethod_var);
		// public XRRaycastSubsystem() { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::GetChanges(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 XRRaycastSubsystem_GetChanges_mAAF6A88E1636E9143D46216A137FC40065756B36 (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, int32_t ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidationUtility_1_ValidateAndDisposeIfThrown_mD36540C5A9568B6A11ACA2BFE33C28F0BFF33CD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var changes = provider.GetChanges(XRRaycast.defaultValue, allocator);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_1;
		L_1 = XRRaycast_get_defaultValue_m37D4F9D561AA6422EEB957A49FDC8B9E1669A48E_inline(NULL);
		int32_t L_2 = ___0_allocator;
		NullCheck(L_0);
		TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 L_3;
		L_3 = VirtualFuncInvoker2< TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103, int32_t >::Invoke(11 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRRaycast,Unity.Collections.Allocator) */, L_0, L_1, L_2);
		V_0 = L_3;
		// m_ValidationUtility.ValidateAndDisposeIfThrown(changes);
		ValidationUtility_1_t341A62AD04111B1E420AF1C31DC2190E708137BE* L_4 = __this->___m_ValidationUtility_4;
		TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 L_5 = V_0;
		NullCheck(L_4);
		ValidationUtility_1_ValidateAndDisposeIfThrown_mD36540C5A9568B6A11ACA2BFE33C28F0BFF33CD9(L_4, L_5, ValidationUtility_1_ValidateAndDisposeIfThrown_mD36540C5A9568B6A11ACA2BFE33C28F0BFF33CD9_RuntimeMethod_var);
		// return changes;
		TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 L_6 = V_0;
		V_1 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 L_7 = V_1;
		return L_7;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::TryAddRaycast(UnityEngine.Vector2,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastSubsystem_TryAddRaycast_mD0D3CCD94C1EAF43E5DA8130DD35CB2B95785DEF (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, float ___1_estimatedDistance, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* ___2_raycast, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool TryAddRaycast(Vector2 screenPoint, float estimatedDistance, out XRRaycast raycast) => provider.TryAddRaycast(screenPoint, estimatedDistance, out raycast);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_screenPoint;
		float L_2 = ___1_estimatedDistance;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* L_3 = ___2_raycast;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker3< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* >::Invoke(8 /* System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::TryAddRaycast(UnityEngine.Vector2,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::TryAddRaycast(UnityEngine.Ray,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastSubsystem_TryAddRaycast_m8B4904E8E52037689CC8A28E952BC532DAC13B8B (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float ___1_estimatedDistance, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* ___2_raycast, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool TryAddRaycast(Ray ray, float estimatedDistance, out XRRaycast raycast) => provider.TryAddRaycast(ray, estimatedDistance, out raycast);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_1 = ___0_ray;
		float L_2 = ___1_estimatedDistance;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* L_3 = ___2_raycast;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker3< bool, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, float, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* >::Invoke(9 /* System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::TryAddRaycast(UnityEngine.Ray,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::RemoveRaycast(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem_RemoveRaycast_mD95EEE6441B70215E92C6FE47B8B586F61F5E331 (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RemoveRaycast(TrackableId trackableId) => provider.RemoveRaycast(trackableId);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableId;
		NullCheck(L_0);
		VirtualActionInvoker1< TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 >::Invoke(10 /* System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::RemoveRaycast(UnityEngine.XR.ARSubsystems.TrackableId) */, L_0, L_1);
		return;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::Raycast(UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 XRRaycastSubsystem_Raycast_m8F80A2A2DB7028A18192426BC8A12C1AEE8BAE12 (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, int32_t ___1_trackableTypeMask, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return provider.Raycast(XRRaycastHit.defaultValue, ray, trackableTypeMask, allocator);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_1;
		L_1 = XRRaycastHit_get_defaultValue_m330E18C6389B68E95AB5CFF26531D5CF5DE6E090_inline(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2 = ___0_ray;
		int32_t L_3 = ___1_trackableTypeMask;
		int32_t L_4 = ___2_allocator;
		NullCheck(L_0);
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_5;
		L_5 = VirtualFuncInvoker4< NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, int32_t, int32_t >::Invoke(12 /* Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator) */, L_0, L_1, L_2, L_3, L_4);
		V_0 = L_5;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_6 = V_0;
		return L_6;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::Raycast(UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 XRRaycastSubsystem_Raycast_mA1E217F2C1B58EDE213F651AD6F966E77D67F688 (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, int32_t ___1_trackableTypeMask, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return provider.Raycast(XRRaycastHit.defaultValue, screenPoint, trackableTypeMask, allocator);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_1;
		L_1 = XRRaycastHit_get_defaultValue_m330E18C6389B68E95AB5CFF26531D5CF5DE6E090_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_screenPoint;
		int32_t L_3 = ___1_trackableTypeMask;
		int32_t L_4 = ___2_allocator;
		NullCheck(L_0);
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_5;
		L_5 = VirtualFuncInvoker4< NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t, int32_t >::Invoke(13 /* Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator) */, L_0, L_1, L_2, L_3, L_4);
		V_0 = L_5;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_6 = V_0;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m1857D20E067E44CF3BAD3E96A368619BAB6474FA (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, const RuntimeMethod* method) 
{
	{
		// public override void Start() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_m1B4BADF1B98C07455D3BEEEB7A22FD8444904952 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, const RuntimeMethod* method) 
{
	{
		// public override void Stop() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_mB9445EA71155D4A8A69DA2E3A929FDAF5C4BB3B3 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, const RuntimeMethod* method) 
{
	{
		// public override void Destroy() { }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::TryAddRaycast(UnityEngine.Vector2,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddRaycast_mF21620620C50F046E545FBC7BD33B411C466D0A5 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, float ___1_estimatedDistance, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* ___2_raycast, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// raycast = XRRaycast.defaultValue;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* L_0 = ___2_raycast;
		il2cpp_codegen_runtime_class_init_inline(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_1;
		L_1 = XRRaycast_get_defaultValue_m37D4F9D561AA6422EEB957A49FDC8B9E1669A48E_inline(NULL);
		*(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)L_0 = L_1;
		// return false;
		V_0 = (bool)0;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::TryAddRaycast(UnityEngine.Ray,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddRaycast_m42D31584099F01A3FC95D884A08C23BAA7515143 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float ___1_estimatedDistance, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* ___2_raycast, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// raycast = XRRaycast.defaultValue;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* L_0 = ___2_raycast;
		il2cpp_codegen_runtime_class_init_inline(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_1;
		L_1 = XRRaycast_get_defaultValue_m37D4F9D561AA6422EEB957A49FDC8B9E1669A48E_inline(NULL);
		*(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)L_0 = L_1;
		// return false;
		V_0 = (bool)0;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::RemoveRaycast(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_RemoveRaycast_m255F5FAC2D9A0E406FDE819156EBC7C11B23DF94 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) 
{
	{
		// public virtual void RemoveRaycast(TrackableId trackableId) { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRRaycast,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 Provider_GetChanges_m62ED7DA58CBC28C0C63EDFF72C9C6B7421A3B2B5 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___0_defaultRaycast, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public virtual TrackableChanges<XRRaycast> GetChanges(XRRaycast defaultRaycast, Allocator allocator) => default;
		il2cpp_codegen_initobj((&V_0), sizeof(TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5));
		TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 L_0 = V_0;
		return L_0;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 Provider_Raycast_mB206D5960A72ECCC6BC44AA91719306F790C4854 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___0_defaultRaycastHit, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___1_ray, int32_t ___2_trackableTypeMask, int32_t ___3_allocator, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Raycasting using a Ray is not supported.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB51BA3F369D95E685969CC962493A3F0B421BA4D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_Raycast_mB206D5960A72ECCC6BC44AA91719306F790C4854_RuntimeMethod_var)));
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 Provider_Raycast_mDB7696CAE66690693DA105DDC40B319A327807E6 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___0_defaultRaycastHit, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPoint, int32_t ___2_trackableTypeMask, int32_t ___3_allocator, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Raycasting using a screen point is not supported.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B9AEC2348486B831A3488530ACA1A6FECCC60DE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_Raycast_mDB7696CAE66690693DA105DDC40B319A327807E6_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mA6631023676667A3E88702E327B8CCC05F58F678 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m14DC8034E7EF5275FC50EA47EF2355B6D9CC22B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m14DC8034E7EF5275FC50EA47EF2355B6D9CC22B8(__this, SubsystemProvider_1__ctor_m14DC8034E7EF5275FC50EA47EF2355B6D9CC22B8_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::get_supportsViewportBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastSubsystemDescriptor_get_supportsViewportBasedRaycast_m9B041E253DF77C3584BC482D253746AB8A0B4FDB (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; private set; }
		bool L_0 = __this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m1860360556D5F4BBD3B242C93D8C92B3F8FA8D90 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::get_supportsWorldBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastSubsystemDescriptor_get_supportsWorldBasedRaycast_m06932061F9A99D5B2EDF87E420811B985EBD0F82 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; private set; }
		bool L_0 = __this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_m2A57C6AF5B8A21E2780A2CDC288F2917DB4BC590 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_m99EBD94098B7BD499391301B0099EC9381D32558 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CsupportedTrackableTypesU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_m9C99240C24C64818B63A368C025689018E8C4044 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_RegisterDescriptor_m5F967AE129CABAC92A8774272B77B97D5D52F5E9 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRRaycastSubsystemDescriptor(cinfo));
		Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 L_0 = ___0_cinfo;
		XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* L_1 = (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311*)il2cpp_codegen_object_new(XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XRRaycastSubsystemDescriptor__ctor_m95E810A79E27BB9FE0CC927BCBDEE2BFC5A0B011(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor__ctor_m95E810A79E27BB9FE0CC927BCBDEE2BFC5A0B011 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_m07EAA6E76991BF9B677CE120674A862A92575EA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRRaycastSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptorWithProvider_2__ctor_m07EAA6E76991BF9B677CE120674A862A92575EA1(__this, SubsystemDescriptorWithProvider_2__ctor_m07EAA6E76991BF9B677CE120674A862A92575EA1_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0;
		L_0 = Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		// providerType = cinfo.providerType;
		Type_t* L_1;
		L_1 = Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_1, NULL);
		// subsystemTypeOverride = cinfo.subsystemTypeOverride;
		Type_t* L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_2, NULL);
		// supportsViewportBasedRaycast = cinfo.supportsViewportBasedRaycast;
		bool L_3;
		L_3 = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline((&___0_cinfo), NULL);
		XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m1860360556D5F4BBD3B242C93D8C92B3F8FA8D90_inline(__this, L_3, NULL);
		// supportsWorldBasedRaycast = cinfo.supportsWorldBasedRaycast;
		bool L_4;
		L_4 = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline((&___0_cinfo), NULL);
		XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_m2A57C6AF5B8A21E2780A2CDC288F2917DB4BC590_inline(__this, L_4, NULL);
		// supportedTrackableTypes = cinfo.supportedTrackableTypes;
		int32_t L_5;
		L_5 = Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline((&___0_cinfo), NULL);
		XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_m99EBD94098B7BD499391301B0099EC9381D32558_inline(__this, L_5, NULL);
		// supportsTrackedRaycasts = cinfo.supportsTrackedRaycasts;
		bool L_6;
		L_6 = Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_inline((&___0_cinfo), NULL);
		XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_m9C99240C24C64818B63A368C025689018E8C4044_inline(__this, L_6, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_pinvoke(const Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54& unmarshaled, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_pinvoke_back(const Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_pinvoke& marshaled, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_pinvoke_cleanup(Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_com(const Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54& unmarshaled, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_com_back(const Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_com& marshaled, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_com_cleanup(Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m962E07A26F49D8C32DAEFEC4F9E0F79EBC128533 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m962E07A26F49D8C32DAEFEC4F9E0F79EBC128533_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_id_m962E07A26F49D8C32DAEFEC4F9E0F79EBC128533_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m5D183591B4A3ECA1EC2AA9015C02DCD1EB1F076F (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m5D183591B4A3ECA1EC2AA9015C02DCD1EB1F076F_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_providerType_m5D183591B4A3ECA1EC2AA9015C02DCD1EB1F076F_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m20C9DAD8677611ACD22689DA249911EEDE46EBF7 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_m20C9DAD8677611ACD22689DA249911EEDE46EBF7_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_m20C9DAD8677611ACD22689DA249911EEDE46EBF7_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsViewportBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = __this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mC7DB604D2E288A145177EC66F8C1DAA50F38693F (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsViewportBasedRaycast_mC7DB604D2E288A145177EC66F8C1DAA50F38693F_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_supportsViewportBasedRaycast_mC7DB604D2E288A145177EC66F8C1DAA50F38693F_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsWorldBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = __this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m05D5BC11896AED796A6E237BBB98FA4EF3CF17A4 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsWorldBasedRaycast_m05D5BC11896AED796A6E237BBB98FA4EF3CF17A4_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_supportsWorldBasedRaycast_m05D5BC11896AED796A6E237BBB98FA4EF3CF17A4_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportedTrackableTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = __this->___U3CsupportedTrackableTypesU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_m319BC9C9EB554C35CD40B791917A603D63BEEE0A (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CsupportedTrackableTypesU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportedTrackableTypes_m319BC9C9EB554C35CD40B791917A603D63BEEE0A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_supportedTrackableTypes_m319BC9C9EB554C35CD40B791917A603D63BEEE0A_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsTrackedRaycasts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = __this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackedRaycasts_m7E65DAEB9ED0CB4C4C83DB751C1547145949AA41 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsTrackedRaycasts_m7E65DAEB9ED0CB4C4C83DB751C1547145949AA41_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_supportsTrackedRaycasts_m7E65DAEB9ED0CB4C4C83DB751C1547145949AA41_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m6CC66C9C4BA7904DF1E9E9D7A3C74DC8D6A6C1BA (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// public override int GetHashCode() => HashCodeUtil.Combine(
		//     HashCodeUtil.ReferenceHash(id),
		//     HashCodeUtil.ReferenceHash(providerType),
		//     HashCodeUtil.ReferenceHash(subsystemTypeOverride),
		//     supportsViewportBasedRaycast.GetHashCode(),
		//     supportsWorldBasedRaycast.GetHashCode(),
		//     ((int)supportedTrackableTypes).GetHashCode(),
		//     supportsTrackedRaycasts.GetHashCode());
		String_t* L_0;
		L_0 = Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline(__this, NULL);
		int32_t L_1;
		L_1 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_0, NULL);
		Type_t* L_2;
		L_2 = Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline(__this, NULL);
		int32_t L_3;
		L_3 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_2, NULL);
		Type_t* L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline(__this, NULL);
		int32_t L_5;
		L_5 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_4, NULL);
		bool L_6;
		L_6 = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline(__this, NULL);
		V_0 = L_6;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		bool L_8;
		L_8 = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline(__this, NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		int32_t L_10;
		L_10 = Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline(__this, NULL);
		V_1 = L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_1), NULL);
		bool L_12;
		L_12 = Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_inline(__this, NULL);
		V_0 = L_12;
		int32_t L_13;
		L_13 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		int32_t L_14;
		L_14 = HashCodeUtil_Combine_m3B3273BD5CFEFD2D09635E1B69281B0ECD9819FB(L_1, L_3, L_5, L_7, L_9, L_11, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m6CC66C9C4BA7904DF1E9E9D7A3C74DC8D6A6C1BA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_m6CC66C9C4BA7904DF1E9E9D7A3C74DC8D6A6C1BA(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m4D9FFB9CFA4DF03E9AF2763D3E91926896FCD64D (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// public override bool Equals(object obj) => (obj is Cinfo) && Equals((Cinfo)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = Cinfo_Equals_mD2E403B4E791DCE658297F8CA484149EB2D5F5B8(__this, ((*(Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*)((Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*)(Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*)UnBox(L_1, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		return (bool)G_B3_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m4D9FFB9CFA4DF03E9AF2763D3E91926896FCD64D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m4D9FFB9CFA4DF03E9AF2763D3E91926896FCD64D(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m3022468C4555B097321DCDB08B4079DA430EBB3A (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("XRRaycastSubsystemDescriptor:\nsupportsViewportBasedRaycast: {0}\nsupportsWorldBasedRaycast: {1}",
		//     supportsViewportBasedRaycast, supportsWorldBasedRaycast);
		bool L_0;
		L_0 = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline(__this, NULL);
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		bool L_3;
		L_3 = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline(__this, NULL);
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C, L_2, L_5, NULL);
		V_0 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		String_t* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_ToString_m3022468C4555B097321DCDB08B4079DA430EBB3A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_ToString_m3022468C4555B097321DCDB08B4079DA430EBB3A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mD2E403B4E791DCE658297F8CA484149EB2D5F5B8 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	{
		// return
		//     String.Equals(id, other.id) &&
		//     ReferenceEquals(providerType, other.providerType) &&
		//     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
		//     supportsViewportBasedRaycast == other.supportsViewportBasedRaycast &&
		//     supportsWorldBasedRaycast == other.supportsWorldBasedRaycast &&
		//     supportedTrackableTypes == other.supportedTrackableTypes;
		String_t* L_0;
		L_0 = Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline(__this, NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline((&___0_other), NULL);
		bool L_2;
		L_2 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0062;
		}
	}
	{
		Type_t* L_3;
		L_3 = Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline(__this, NULL);
		Type_t* L_4;
		L_4 = Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_3) == ((RuntimeObject*)(Type_t*)L_4))))
		{
			goto IL_0062;
		}
	}
	{
		Type_t* L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline(__this, NULL);
		Type_t* L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_5) == ((RuntimeObject*)(Type_t*)L_6))))
		{
			goto IL_0062;
		}
	}
	{
		bool L_7;
		L_7 = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline(__this, NULL);
		bool L_8;
		L_8 = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0062;
		}
	}
	{
		bool L_9;
		L_9 = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline(__this, NULL);
		bool L_10;
		L_10 = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_11;
		L_11 = Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline(__this, NULL);
		int32_t L_12;
		L_12 = Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline((&___0_other), NULL);
		G_B7_0 = ((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		goto IL_0063;
	}

IL_0062:
	{
		G_B7_0 = 0;
	}

IL_0063:
	{
		V_0 = (bool)G_B7_0;
		goto IL_0066;
	}

IL_0066:
	{
		// }
		bool L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_mD2E403B4E791DCE658297F8CA484149EB2D5F5B8_AdjustorThunk (RuntimeObject* __this, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_other, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_mD2E403B4E791DCE658297F8CA484149EB2D5F5B8(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler__ctor_m652B5689DE1A3C3EF7D12801DA27FA3B40E4412F (ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		// public ScopedProfiler(string name) => Profiler.BeginSample(name);
		String_t* L_0 = ___0_name;
		Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScopedProfiler__ctor_m652B5689DE1A3C3EF7D12801DA27FA3B40E4412F_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, const RuntimeMethod* method)
{
	ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F*>(__this + _offset);
	ScopedProfiler__ctor_m652B5689DE1A3C3EF7D12801DA27FA3B40E4412F(_thisAdjusted, ___0_name, method);
}
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler_Dispose_m7B646405B4E52CC4677329D3B860BE9C17A9DAC4 (ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* __this, const RuntimeMethod* method) 
{
	{
		// public void Dispose() => Profiler.EndSample();
		Profiler_EndSample_m3FCA26738A87C0B8E352533AD48E2A16B047A757(NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ScopedProfiler_Dispose_m7B646405B4E52CC4677329D3B860BE9C17A9DAC4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F*>(__this + _offset);
	ScopedProfiler_Dispose_m7B646405B4E52CC4677329D3B860BE9C17A9DAC4(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.SerializableGuid::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableGuid__ctor_m0F2435157FEC8427E91A7D0DD39960BADE7209F0 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, uint64_t ___0_guidLow, uint64_t ___1_guidHigh, const RuntimeMethod* method) 
{
	{
		// m_GuidLow = guidLow;
		uint64_t L_0 = ___0_guidLow;
		__this->___m_GuidLow_1 = L_0;
		// m_GuidHigh = guidHigh;
		uint64_t L_1 = ___1_guidHigh;
		__this->___m_GuidHigh_2 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SerializableGuid__ctor_m0F2435157FEC8427E91A7D0DD39960BADE7209F0_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_guidLow, uint64_t ___1_guidHigh, const RuntimeMethod* method)
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*>(__this + _offset);
	SerializableGuid__ctor_m0F2435157FEC8427E91A7D0DD39960BADE7209F0(_thisAdjusted, ___0_guidLow, ___1_guidHigh, method);
}
// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::get_empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 SerializableGuid_get_empty_m4E3F843DBDDCC5A4B19A19FBDF2F9B53EEAA0073 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SerializableGuid empty => k_Empty;
		il2cpp_codegen_runtime_class_init_inline(SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var);
		SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 L_0 = ((SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_StaticFields*)il2cpp_codegen_static_fields_for(SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var))->___k_Empty_0;
		return L_0;
	}
}
// System.Guid UnityEngine.XR.ARSubsystems.SerializableGuid::get_guid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t SerializableGuid_get_guid_mC9C573E5730B2B18F6DFA80F0BCFD1A097C362B3 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, const RuntimeMethod* method) 
{
	{
		// public Guid guid => GuidUtil.Compose(m_GuidLow, m_GuidHigh);
		uint64_t L_0 = __this->___m_GuidLow_1;
		uint64_t L_1 = __this->___m_GuidHigh_2;
		Guid_t L_2;
		L_2 = GuidUtil_Compose_m58AA1AA0AF27A23B64937C72023C6F72D4C8DD40(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Guid_t SerializableGuid_get_guid_mC9C573E5730B2B18F6DFA80F0BCFD1A097C362B3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*>(__this + _offset);
	Guid_t _returnValue;
	_returnValue = SerializableGuid_get_guid_mC9C573E5730B2B18F6DFA80F0BCFD1A097C362B3(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.SerializableGuid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializableGuid_GetHashCode_mC33B7B6D908B3A62767C19B331620784F1998D07 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, const RuntimeMethod* method) 
{
	{
		// public override int GetHashCode() => HashCodeUtil.Combine(m_GuidLow.GetHashCode(), m_GuidHigh.GetHashCode());
		uint64_t* L_0 = (uint64_t*)(&__this->___m_GuidLow_1);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		uint64_t* L_2 = (uint64_t*)(&__this->___m_GuidHigh_2);
		int32_t L_3;
		L_3 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_2, NULL);
		int32_t L_4;
		L_4 = HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36(L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t SerializableGuid_GetHashCode_mC33B7B6D908B3A62767C19B331620784F1998D07_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SerializableGuid_GetHashCode_mC33B7B6D908B3A62767C19B331620784F1998D07(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.SerializableGuid::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableGuid_Equals_mEB4A1B39DD600CB499AC43BF60A3BD206A1EFD71 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// public override bool Equals(object obj) => (obj is SerializableGuid) && Equals((SerializableGuid)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SerializableGuid_Equals_m7096244EB28310B3CB17CD79EE7068768C6AB4F7(__this, ((*(SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*)((SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*)(SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*)UnBox(L_1, SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		return (bool)G_B3_0;
	}
}
IL2CPP_EXTERN_C  bool SerializableGuid_Equals_mEB4A1B39DD600CB499AC43BF60A3BD206A1EFD71_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*>(__this + _offset);
	bool _returnValue;
	_returnValue = SerializableGuid_Equals_mEB4A1B39DD600CB499AC43BF60A3BD206A1EFD71(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.SerializableGuid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableGuid_ToString_m4FB29C69FF91DC2020A96C3C83FE1B60F9C73047 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override string ToString() => guid.ToString();
		il2cpp_codegen_runtime_class_init_inline(SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var);
		Guid_t L_0;
		L_0 = SerializableGuid_get_guid_mC9C573E5730B2B18F6DFA80F0BCFD1A097C362B3(__this, NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* SerializableGuid_ToString_m4FB29C69FF91DC2020A96C3C83FE1B60F9C73047_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SerializableGuid_ToString_m4FB29C69FF91DC2020A96C3C83FE1B60F9C73047(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.SerializableGuid::Equals(UnityEngine.XR.ARSubsystems.SerializableGuid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableGuid_Equals_m7096244EB28310B3CB17CD79EE7068768C6AB4F7 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return
		//     (m_GuidLow == other.m_GuidLow) &&
		//     (m_GuidHigh == other.m_GuidHigh);
		uint64_t L_0 = __this->___m_GuidLow_1;
		SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 L_1 = ___0_other;
		uint64_t L_2 = L_1.___m_GuidLow_1;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_3 = __this->___m_GuidHigh_2;
		SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 L_4 = ___0_other;
		uint64_t L_5 = L_4.___m_GuidHigh_2;
		G_B3_0 = ((((int64_t)L_3) == ((int64_t)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool SerializableGuid_Equals_m7096244EB28310B3CB17CD79EE7068768C6AB4F7_AdjustorThunk (RuntimeObject* __this, SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___0_other, const RuntimeMethod* method)
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*>(__this + _offset);
	bool _returnValue;
	_returnValue = SerializableGuid_Equals_m7096244EB28310B3CB17CD79EE7068768C6AB4F7(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.SerializableGuid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableGuid__cctor_m99C1CBC863F8F315793500688464404564D5722B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly SerializableGuid k_Empty = new SerializableGuid(0, 0);
		SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 L_0;
		memset((&L_0), 0, sizeof(L_0));
		SerializableGuid__ctor_m0F2435157FEC8427E91A7D0DD39960BADE7209F0((&L_0), ((int64_t)0), ((int64_t)0), /*hidden argument*/NULL);
		((SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_StaticFields*)il2cpp_codegen_static_fields_for(SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var))->___k_Empty_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions::IsSupported(UnityEngine.XR.ARSubsystems.SessionAvailability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsSupported_m9105265F71A68B18269095FFE362CD24148F6E7C (int32_t ___0_availability, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return (availability & SessionAvailability.Supported) != SessionAvailability.None;
		int32_t L_0 = ___0_availability;
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&2))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions::IsInstalled(UnityEngine.XR.ARSubsystems.SessionAvailability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsInstalled_m5AA4AE58BC0BA7C30E77B1B06038BED076ABFFDB (int32_t ___0_availability, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return (availability & SessionAvailability.Installed) != SessionAvailability.None;
		int32_t L_0 = ___0_availability;
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&4))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* XRSessionSubsystem_GetAvailabilityAsync_m30808B871A7C1BC1BAC7EE85B0F36DB4422769BF (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Promise<SessionAvailability> GetAvailabilityAsync() => provider.GetAvailabilityAsync();
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* L_1;
		L_1 = VirtualFuncInvoker0< Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* >::Invoke(19 /* UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::GetAvailabilityAsync() */, L_0);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::InstallAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* XRSessionSubsystem_InstallAsync_m7E278495740EB305D92109D0FFE0895B774D3DA7 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_subsystemDescriptor_mF7CA6B57486377149C97D5CA6D59C0F1D8BCEB48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* V_1 = NULL;
	{
		// if (!subsystemDescriptor.supportsInstall)
		XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* L_0;
		L_0 = SubsystemWithProvider_3_get_subsystemDescriptor_mF7CA6B57486377149C97D5CA6D59C0F1D8BCEB48_inline(__this, SubsystemWithProvider_3_get_subsystemDescriptor_mF7CA6B57486377149C97D5CA6D59C0F1D8BCEB48_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = XRSessionSubsystemDescriptor_get_supportsInstall_m3EE93DA405D5C59B746B621FC30D4CC182BB1E53_inline(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// throw new NotSupportedException("InstallAsync is not supported on this platform.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_3 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE446F5E5E3D5CD70111EE44D96D38C2402691299)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRSessionSubsystem_InstallAsync_m7E278495740EB305D92109D0FFE0895B774D3DA7_RuntimeMethod_var)));
	}

IL_001e:
	{
		// return provider.InstallAsync();
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_4;
		L_4 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_4);
		Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* L_5;
		L_5 = VirtualFuncInvoker0< Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* >::Invoke(20 /* UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::InstallAsync() */, L_4);
		V_1 = L_5;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_mB926772E21C65B0CBCE36FD4610CEC1B677999C8 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3__ctor_m8563E495EB3A4C08B0C3C47658443D5A72A646FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool m_FirstUpdate = true;
		__this->___m_FirstUpdate_7 = (bool)1;
		// ConfigurationChooser m_DefaultConfigurationChooser = new DefaultConfigurationChooser();
		DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8* L_0 = (DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8*)il2cpp_codegen_object_new(DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultConfigurationChooser__ctor_mDFBE2A3915F886FE4D79CD514F550A10CCC6A90C(L_0, NULL);
		__this->___m_DefaultConfigurationChooser_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DefaultConfigurationChooser_8), (void*)L_0);
		// public XRSessionSubsystem()
		SubsystemWithProvider_3__ctor_m8563E495EB3A4C08B0C3C47658443D5A72A646FF(__this, SubsystemWithProvider_3__ctor_m8563E495EB3A4C08B0C3C47658443D5A72A646FF_RuntimeMethod_var);
		// m_ConfigurationChooser = m_DefaultConfigurationChooser;
		ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* L_1 = __this->___m_DefaultConfigurationChooser_8;
		__this->___m_ConfigurationChooser_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ConfigurationChooser_9), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_Reset_m7413F6A15AA7A69B40F473129325FC71593ABAA6 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Reset() => provider.Reset();
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(15 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Reset() */, L_0);
		return;
	}
}
// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::DetermineConfiguration(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D XRSessionSubsystem_DetermineConfiguration_m0A5C3F6A14CB8F2D74D5162CCCD5FBD3D51F58A5 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, uint64_t ___0_features, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5480845DDB54CEC63C75E046DD65BEE8C8AB4F1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAB9760CC88D560C88D99EC0F40D9DA8814CDF933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9DC74661C7591B33A0DA56C42A1D18E5CB5A5FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mBDD575450D75412D3AED5564F20533D7333E839B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_GetEnumerator_m593F898A8B31F750E85880418A2B04F2E7CDCDFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mA25A93E9848172129AC64B461B713935273B26EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_op_Implicit_m290EE8D065382D8121D3681FC0CDC7C6E0D1A8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m443239B7937D845C4BDDFF63A68A515EC92204EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96F3DC1EDD0EA6533A47F309AB798C05B5B2FDAA);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	StringBuilder_t* V_5 = NULL;
	Enumerator_tD931B981D9A59D89BFAA36FDC5C9A8384551A464 V_6;
	memset((&V_6), 0, sizeof(V_6));
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D V_8;
	memset((&V_8), 0, sizeof(V_8));
	Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// var descriptors = GetConfigurationDescriptors(Allocator.Temp);
		NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 L_0;
		L_0 = XRSessionSubsystem_GetConfigurationDescriptors_m437FE62BDE0C6F37AC5A75C1A11674AB403147F2(__this, 2, NULL);
		V_0 = L_0;
		// if (descriptors.IsCreated)
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mA25A93E9848172129AC64B461B713935273B26EC_inline((&V_0), NativeArray_1_get_IsCreated_mA25A93E9848172129AC64B461B713935273B26EC_RuntimeMethod_var);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_00f4;
		}
	}
	{
		// using (descriptors)
		NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 L_3 = V_0;
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e4:
			{// begin finally (depth: 1)
				NativeArray_1_Dispose_mBDD575450D75412D3AED5564F20533D7333E839B((&V_2), NativeArray_1_Dispose_mBDD575450D75412D3AED5564F20533D7333E839B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (descriptors.Length > 0)
				int32_t L_4;
				L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_0))->___m_Length_1);
				V_3 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
				bool L_5 = V_3;
				if (!L_5)
				{
					goto IL_00e1_1;
				}
			}
			{
				// if (m_FirstUpdate)
				bool L_6 = __this->___m_FirstUpdate_7;
				V_4 = L_6;
				bool L_7 = V_4;
				if (!L_7)
				{
					goto IL_00c6_1;
				}
			}
			{
				// var sb = new System.Text.StringBuilder();
				StringBuilder_t* L_8 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_8, NULL);
				V_5 = L_8;
				// foreach (var descriptor in descriptors)
				Enumerator_tD931B981D9A59D89BFAA36FDC5C9A8384551A464 L_9;
				L_9 = NativeArray_1_GetEnumerator_m593F898A8B31F750E85880418A2B04F2E7CDCDFB((&V_0), NativeArray_1_GetEnumerator_m593F898A8B31F750E85880418A2B04F2E7CDCDFB_RuntimeMethod_var);
				V_6 = L_9;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a2_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m5480845DDB54CEC63C75E046DD65BEE8C8AB4F1B((&V_6), Enumerator_Dispose_m5480845DDB54CEC63C75E046DD65BEE8C8AB4F1B_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0097_2;
					}

IL_0050_2:
					{
						// foreach (var descriptor in descriptors)
						ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_10;
						L_10 = Enumerator_get_Current_m9DC74661C7591B33A0DA56C42A1D18E5CB5A5FF2_inline((&V_6), Enumerator_get_Current_m9DC74661C7591B33A0DA56C42A1D18E5CB5A5FF2_RuntimeMethod_var);
						V_7 = L_10;
						// sb.Append($"Configuration Descriptor {HexString(descriptor.identifier)} (rank {descriptor.rank}): {descriptor.capabilities.ToStringList()}\n");
						StringBuilder_t* L_11 = V_5;
						intptr_t L_12;
						L_12 = ConfigurationDescriptor_get_identifier_m858F4B730002C1823D283460115DA65C6A46BCB6_inline((&V_7), NULL);
						String_t* L_13;
						L_13 = XRSessionSubsystem_HexString_m4BB0D6C1C291C1713B9365C2268941FAD0FB53AB(__this, L_12, NULL);
						int32_t L_14;
						L_14 = ConfigurationDescriptor_get_rank_mEDFBF5E2173FA84A0695BB01A6A40860794F6FA8_inline((&V_7), NULL);
						int32_t L_15 = L_14;
						RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
						uint64_t L_17;
						L_17 = ConfigurationDescriptor_get_capabilities_m6A4EF4C0E0FE3671E8564EF13BA2A5B4264CF938_inline((&V_7), NULL);
						String_t* L_18;
						L_18 = FeatureExtensions_ToStringList_m7961C38D97DCDD6FB5EAC9AB77104F97D5304214(L_17, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
						String_t* L_19;
						L_19 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral96F3DC1EDD0EA6533A47F309AB798C05B5B2FDAA, L_13, L_16, L_18, NULL);
						NullCheck(L_11);
						StringBuilder_t* L_20;
						L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_19, NULL);
					}

IL_0097_2:
					{
						// foreach (var descriptor in descriptors)
						bool L_21;
						L_21 = Enumerator_MoveNext_mAB9760CC88D560C88D99EC0F40D9DA8814CDF933_inline((&V_6), Enumerator_MoveNext_mAB9760CC88D560C88D99EC0F40D9DA8814CDF933_RuntimeMethod_var);
						if (L_21)
						{
							goto IL_0050_2;
						}
					}
					{
						goto IL_00b1_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00b1_1:
			{
				// Debug.Log(sb.ToString());
				StringBuilder_t* L_22 = V_5;
				NullCheck(L_22);
				String_t* L_23;
				L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_23, NULL);
				// m_FirstUpdate = false;
				__this->___m_FirstUpdate_7 = (bool)0;
			}

IL_00c6_1:
			{
				// return m_ConfigurationChooser.ChooseConfiguration(descriptors, features);
				ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* L_24 = __this->___m_ConfigurationChooser_9;
				NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 L_25 = V_0;
				NativeSlice_1_t398BDCDCE5F9AF840285A8E6EC69152FED8FADFE L_26;
				L_26 = NativeSlice_1_op_Implicit_m290EE8D065382D8121D3681FC0CDC7C6E0D1A8D0(L_25, NativeSlice_1_op_Implicit_m290EE8D065382D8121D3681FC0CDC7C6E0D1A8D0_RuntimeMethod_var);
				uint64_t L_27 = ___0_features;
				NullCheck(L_24);
				Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 L_28;
				L_28 = VirtualFuncInvoker2< Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947, NativeSlice_1_t398BDCDCE5F9AF840285A8E6EC69152FED8FADFE, uint64_t >::Invoke(4 /* UnityEngine.XR.ARSubsystems.Configuration UnityEngine.XR.ARSubsystems.ConfigurationChooser::ChooseConfiguration(Unity.Collections.NativeSlice`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>,UnityEngine.XR.ARSubsystems.Feature) */, L_24, L_26, L_27);
				Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_29;
				memset((&L_29), 0, sizeof(L_29));
				Nullable_1__ctor_m443239B7937D845C4BDDFF63A68A515EC92204EB((&L_29), L_28, /*hidden argument*/Nullable_1__ctor_m443239B7937D845C4BDDFF63A68A515EC92204EB_RuntimeMethod_var);
				V_8 = L_29;
				goto IL_0102;
			}

IL_00e1_1:
			{
				goto IL_00f3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f3:
	{
	}

IL_00f4:
	{
		// return null;
		il2cpp_codegen_initobj((&V_9), sizeof(Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D));
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_30 = V_9;
		V_8 = L_30;
		goto IL_0102;
	}

IL_0102:
	{
		// }
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_31 = V_8;
		return L_31;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_Update_m25DA803713B0800B1C39326D71817305C6A38749 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_updateParams, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mEC2B34CD521662D07140FCB0D91A67D0411A3BF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE682C3E729CFBCC34BB9C4A636722ACD6E35D014_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// currentConfiguration = DetermineConfiguration(requestedFeatures);
		uint64_t L_0;
		L_0 = XRSessionSubsystem_get_requestedFeatures_m2193DB34D2CC44D20701580C9FA062EA111CFCE3(__this, NULL);
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_1;
		L_1 = XRSessionSubsystem_DetermineConfiguration_m0A5C3F6A14CB8F2D74D5162CCCD5FBD3D51F58A5(__this, L_0, NULL);
		XRSessionSubsystem_set_currentConfiguration_m4299FA74038DD6293A125B425179E4C948D09917_inline(__this, L_1, NULL);
		// if (currentConfiguration.HasValue)
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_2;
		L_2 = XRSessionSubsystem_get_currentConfiguration_m1AB222F75B6C1645DB3405CB9AE18740EE66F0E5_inline(__this, NULL);
		V_1 = L_2;
		bool L_3;
		L_3 = Nullable_1_get_HasValue_mEC2B34CD521662D07140FCB0D91A67D0411A3BF3_inline((&V_1), Nullable_1_get_HasValue_mEC2B34CD521662D07140FCB0D91A67D0411A3BF3_RuntimeMethod_var);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		// DebugPrintConfigurationChange(currentConfiguration.Value, requestedFeatures);
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_5;
		L_5 = XRSessionSubsystem_get_currentConfiguration_m1AB222F75B6C1645DB3405CB9AE18740EE66F0E5_inline(__this, NULL);
		V_1 = L_5;
		Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 L_6;
		L_6 = Nullable_1_get_Value_mE682C3E729CFBCC34BB9C4A636722ACD6E35D014((&V_1), Nullable_1_get_Value_mE682C3E729CFBCC34BB9C4A636722ACD6E35D014_RuntimeMethod_var);
		uint64_t L_7;
		L_7 = XRSessionSubsystem_get_requestedFeatures_m2193DB34D2CC44D20701580C9FA062EA111CFCE3(__this, NULL);
		XRSessionSubsystem_DebugPrintConfigurationChange_m1A02C301784F7EE669CB6CD5BBBB5B3A595CCFB5(__this, L_6, L_7, NULL);
		// provider.Update(updateParams, currentConfiguration.Value);
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_8;
		L_8 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 L_9 = ___0_updateParams;
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_10;
		L_10 = XRSessionSubsystem_get_currentConfiguration_m1AB222F75B6C1645DB3405CB9AE18740EE66F0E5_inline(__this, NULL);
		V_1 = L_10;
		Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 L_11;
		L_11 = Nullable_1_get_Value_mE682C3E729CFBCC34BB9C4A636722ACD6E35D014((&V_1), Nullable_1_get_Value_mE682C3E729CFBCC34BB9C4A636722ACD6E35D014_RuntimeMethod_var);
		NullCheck(L_8);
		VirtualActionInvoker2< XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 >::Invoke(9 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams,UnityEngine.XR.ARSubsystems.Configuration) */, L_8, L_9, L_11);
		goto IL_006f;
	}

IL_0060:
	{
		// provider.Update(updateParams);
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_12;
		L_12 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 L_13 = ___0_updateParams;
		NullCheck(L_12);
		VirtualActionInvoker1< XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 >::Invoke(8 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams) */, L_12, L_13);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_currentConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D XRSessionSubsystem_get_currentConfiguration_m1AB222F75B6C1645DB3405CB9AE18740EE66F0E5 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	{
		// public Configuration? currentConfiguration { get; private set; }
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_0 = __this->___U3CcurrentConfigurationU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::set_currentConfiguration(System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_set_currentConfiguration_m4299FA74038DD6293A125B425179E4C948D09917 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D ___0_value, const RuntimeMethod* method) 
{
	{
		// public Configuration? currentConfiguration { get; private set; }
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_0 = ___0_value;
		__this->___U3CcurrentConfigurationU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystem::HexString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSessionSubsystem_HexString_m4BB0D6C1C291C1713B9365C2268941FAD0FB53AB (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F25DCEA3689A55267487C5F546C2AD0C2BB96B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// unsafe string HexString(IntPtr ptr) => sizeof(IntPtr) == 4 ? $"0x{ptr.ToInt32():x}" : $"0x{ptr.ToInt64():x}";
		uint32_t L_0 = sizeof(intptr_t);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0021;
		}
	}
	{
		int64_t L_1;
		L_1 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&___0_ptr), NULL);
		int64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral40F25DCEA3689A55267487C5F546C2AD0C2BB96B, L_3, NULL);
		G_B3_0 = L_4;
		goto IL_0037;
	}

IL_0021:
	{
		int32_t L_5;
		L_5 = IntPtr_ToInt32_mD53B5D2C73C7E4BE5ADEBC5D187EACC83D5BB292((&___0_ptr), NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral40F25DCEA3689A55267487C5F546C2AD0C2BB96B, L_7, NULL);
		G_B3_0 = L_8;
	}

IL_0037:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::DebugPrintConfigurationChange(UnityEngine.XR.ARSubsystems.Configuration,UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_DebugPrintConfigurationChange_m1A02C301784F7EE669CB6CD5BBBB5B3A595CCFB5 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___0_configuration, uint64_t ___1_desiredFeatures, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral220060F066F23D953DBDE62B9269659F55600D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36D03817BE07DC567E24E1ED6450F60D1FBE6156);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6308B88C9CA0C0B8108C62352D54B606B444C3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74C9B52FCBF111B4DFCD448D9C0E01FE4D21D99D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A3084E0303BA48B1355FE32F766678366C93AC8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StringBuilder_t* V_1 = NULL;
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		// if (configuration != m_PreviousConfiguration ||
		//     desiredFeatures != m_PreviousDesiredFeatures)
		Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 L_0 = ___0_configuration;
		Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 L_1 = __this->___m_PreviousConfiguration_6;
		bool L_2;
		L_2 = Configuration_op_Inequality_m02D4E5E82910A6C7BBCEC7B3ED5C6DA8B5608010(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		uint64_t L_3 = ___1_desiredFeatures;
		uint64_t L_4 = __this->___m_PreviousDesiredFeatures_5;
		G_B3_0 = ((((int32_t)((((int64_t)L_3) == ((int64_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0112;
		}
	}
	{
		// var sb = new System.Text.StringBuilder();
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_1 = L_6;
		// sb.Append($"Using session configuration {HexString(configuration.descriptor.identifier)}");
		StringBuilder_t* L_7 = V_1;
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_8;
		L_8 = Configuration_get_descriptor_m3C4973351367EA0BD9E48DA1E2201D8803BA8D1E_inline((&___0_configuration), NULL);
		V_2 = L_8;
		intptr_t L_9;
		L_9 = ConfigurationDescriptor_get_identifier_m858F4B730002C1823D283460115DA65C6A46BCB6_inline((&V_2), NULL);
		String_t* L_10;
		L_10 = XRSessionSubsystem_HexString_m4BB0D6C1C291C1713B9365C2268941FAD0FB53AB(__this, L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral74C9B52FCBF111B4DFCD448D9C0E01FE4D21D99D, L_10, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, L_11, NULL);
		// if (configuration.descriptor.identifier == m_PreviousConfiguration.descriptor.identifier)
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_13;
		L_13 = Configuration_get_descriptor_m3C4973351367EA0BD9E48DA1E2201D8803BA8D1E_inline((&___0_configuration), NULL);
		V_2 = L_13;
		intptr_t L_14;
		L_14 = ConfigurationDescriptor_get_identifier_m858F4B730002C1823D283460115DA65C6A46BCB6_inline((&V_2), NULL);
		Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* L_15 = (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947*)(&__this->___m_PreviousConfiguration_6);
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_16;
		L_16 = Configuration_get_descriptor_m3C4973351367EA0BD9E48DA1E2201D8803BA8D1E_inline(L_15, NULL);
		V_2 = L_16;
		intptr_t L_17;
		L_17 = ConfigurationDescriptor_get_identifier_m858F4B730002C1823D283460115DA65C6A46BCB6_inline((&V_2), NULL);
		bool L_18;
		L_18 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_14, L_17, NULL);
		V_3 = L_18;
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		// sb.Append(" (unchanged)");
		StringBuilder_t* L_20 = V_1;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral220060F066F23D953DBDE62B9269659F55600D8E, NULL);
	}

IL_008b:
	{
		// sb.Append("\n\tRequested Features: ");
		StringBuilder_t* L_22 = V_1;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteral7A3084E0303BA48B1355FE32F766678366C93AC8, NULL);
		// sb.Append(desiredFeatures.ToStringList());
		StringBuilder_t* L_24 = V_1;
		uint64_t L_25 = ___1_desiredFeatures;
		String_t* L_26;
		L_26 = FeatureExtensions_ToStringList_m7961C38D97DCDD6FB5EAC9AB77104F97D5304214(L_25, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_26, NULL);
		// sb.Append("\n\tSupported Features: ");
		StringBuilder_t* L_28 = V_1;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteral6308B88C9CA0C0B8108C62352D54B606B444C3F0, NULL);
		// sb.Append(configuration.features.ToStringList());
		StringBuilder_t* L_30 = V_1;
		uint64_t L_31;
		L_31 = Configuration_get_features_m704F372E940AF1DB435C1EBFF8E48EAD4E8B3776_inline((&___0_configuration), NULL);
		String_t* L_32;
		L_32 = FeatureExtensions_ToStringList_m7961C38D97DCDD6FB5EAC9AB77104F97D5304214(L_31, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		NullCheck(L_30);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, L_32, NULL);
		// sb.Append("\n\tRequested features not satisfied: ");
		StringBuilder_t* L_34 = V_1;
		NullCheck(L_34);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, _stringLiteral36D03817BE07DC567E24E1ED6450F60D1FBE6156, NULL);
		// sb.Append(desiredFeatures.SetDifference(configuration.features).ToStringList());
		StringBuilder_t* L_36 = V_1;
		uint64_t L_37 = ___1_desiredFeatures;
		uint64_t L_38;
		L_38 = Configuration_get_features_m704F372E940AF1DB435C1EBFF8E48EAD4E8B3776_inline((&___0_configuration), NULL);
		uint64_t L_39;
		L_39 = FeatureExtensions_SetDifference_mA9D5A50B2BF9B5C66047D6152384DC14D5BBCE9F(L_37, L_38, NULL);
		String_t* L_40;
		L_40 = FeatureExtensions_ToStringList_m7961C38D97DCDD6FB5EAC9AB77104F97D5304214(L_39, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		NullCheck(L_36);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_36, L_40, NULL);
		// Debug.Log(sb.ToString());
		StringBuilder_t* L_42 = V_1;
		NullCheck(L_42);
		String_t* L_43;
		L_43 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_42);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_43, NULL);
		// m_PreviousConfiguration = configuration;
		Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 L_44 = ___0_configuration;
		__this->___m_PreviousConfiguration_6 = L_44;
		// m_PreviousDesiredFeatures = desiredFeatures;
		uint64_t L_45 = ___1_desiredFeatures;
		__this->___m_PreviousDesiredFeatures_5 = L_45;
	}

IL_0112:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_requestedFeatures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XRSessionSubsystem_get_requestedFeatures_m2193DB34D2CC44D20701580C9FA062EA111CFCE3 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Feature requestedFeatures => provider.requestedFeatures;
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(10 /* UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_requestedFeatures() */, L_0);
		return L_1;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::GetConfigurationDescriptors(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 XRSessionSubsystem_GetConfigurationDescriptors_m437FE62BDE0C6F37AC5A75C1A11674AB403147F2 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, int32_t ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NativeArray<ConfigurationDescriptor> GetConfigurationDescriptors(Allocator allocator) => provider.GetConfigurationDescriptors(allocator);
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		int32_t L_1 = ___0_allocator;
		NullCheck(L_0);
		NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 L_2;
		L_2 = VirtualFuncInvoker1< NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2, int32_t >::Invoke(14 /* Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::GetConfigurationDescriptors(Unity.Collections.Allocator) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_OnApplicationPause_mE4BBAAC4555EA3AAF9B8113406DC920054A1307D (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void OnApplicationPause() =>  provider.OnApplicationPause();
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(16 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::OnApplicationPause() */, L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::OnApplicationResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_OnApplicationResume_mCECA16418E8ECAFFCAEDE50D80364B4709A0D488 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void OnApplicationResume() => provider.OnApplicationResume();
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(17 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::OnApplicationResume() */, L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_trackingState_mC2FE654BEB0240C5C3FF85E31DA35E52F85DB550 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TrackingState trackingState => provider.trackingState;
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_trackingState() */, L_0);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_requestedTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XRSessionSubsystem_get_requestedTrackingMode_m9C8B343227EE42F5ED9980A26008BBEFA101D49F (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => provider.requestedTrackingMode.TrackingModes();
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(11 /* UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_requestedTrackingMode() */, L_0);
		uint64_t L_2;
		L_2 = FeatureExtensions_TrackingModes_m98FFB5EE942CA939B0F4F06A425673A4081287B7(L_1, NULL);
		return L_2;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::set_requestedTrackingMode(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_set_requestedTrackingMode_m8BBE750492C85A5D35063E246E1F090D5DF73026 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => provider.requestedTrackingMode = value.TrackingModes();
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		uint64_t L_1 = ___0_value;
		uint64_t L_2;
		L_2 = FeatureExtensions_TrackingModes_m98FFB5EE942CA939B0F4F06A425673A4081287B7(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< uint64_t >::Invoke(12 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::set_requestedTrackingMode(UnityEngine.XR.ARSubsystems.Feature) */, L_0, L_2);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_currentTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XRSessionSubsystem_get_currentTrackingMode_mD059B4FBD0D07A428470FF2677002EA51AA2CFB5 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Feature currentTrackingMode => provider.currentTrackingMode.TrackingModes();
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(13 /* UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_currentTrackingMode() */, L_0);
		uint64_t L_2;
		L_2 = FeatureExtensions_TrackingModes_m98FFB5EE942CA939B0F4F06A425673A4081287B7(L_1, NULL);
		return L_2;
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_notTrackingReason_m78C6CAA0D4570B7E410C1D375A3CC0AEEC1AFE5A (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NotTrackingReason notTrackingReason => provider.notTrackingReason;
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_notTrackingReason() */, L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_matchFrameRateEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionSubsystem_get_matchFrameRateEnabled_m0D73F1F3C3B72ACBA97EDA22A62E69C727D2EDB7 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => provider.matchFrameRateEnabled;
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_matchFrameRateEnabled() */, L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_matchFrameRateRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionSubsystem_get_matchFrameRateRequested_m6344C601746F6822B56E362F1FC4C4ABE15D22A4 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => provider.matchFrameRateRequested;
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(25 /* System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_matchFrameRateRequested() */, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::set_matchFrameRateRequested(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_set_matchFrameRateRequested_m778FF485C34682FE76BCA4871EB4D1D2F5AF73F1 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => provider.matchFrameRateRequested = value;
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		bool L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< bool >::Invoke(26 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::set_matchFrameRateRequested(System.Boolean) */, L_0, L_1);
		return;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_frameRate_m08D6A4F0F598E99A26747827F0630CFDB922A4E3 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int frameRate => provider.frameRate;
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_frameRate() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m6E563F958F1D15385E35A74FC8A82E6AEA46343E (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public override void Start() {}
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_m333D402B548DA93070E850B93D06EC4F1FB07026 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public override void Stop() {}
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Update_mED507841F7B7D096FC116F775A144293B59E783A (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_updateParams, const RuntimeMethod* method) 
{
	{
		// public virtual void Update(XRSessionUpdateParams updateParams) { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams,UnityEngine.XR.ARSubsystems.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Update_m7DA03CBB0EBA3A2798DF9681CBDDBCA0AE224C85 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_updateParams, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___1_configuration, const RuntimeMethod* method) 
{
	{
		// public virtual void Update(XRSessionUpdateParams updateParams, Configuration configuration) { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_requestedFeatures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Provider_get_requestedFeatures_m10A009D1F22281A8E1BDEA2156B6DF78C03BA855 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual Feature requestedFeatures => Feature.None;
		return (uint64_t)(((int64_t)0));
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_requestedTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Provider_get_requestedTrackingMode_m7B7AC5BD9BAEB3B75E96FCC308EDB19523AF2834 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// get => Feature.None;
		return (uint64_t)(((int64_t)0));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::set_requestedTrackingMode(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_requestedTrackingMode_m8E0E2EBDB0E20C7E4B4DDD4BFCEDF3C8009BA2E3 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set {}
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_currentTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Provider_get_currentTrackingMode_m65B8B630C321A5B41ACDC2F01D0DE2FF111CE638 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual Feature currentTrackingMode => Feature.None;
		return (uint64_t)(((int64_t)0));
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::GetConfigurationDescriptors(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 Provider_GetConfigurationDescriptors_m66DEAAC3E52B4D710710989049669C7DC7B6D643 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, int32_t ___0_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public virtual NativeArray<ConfigurationDescriptor> GetConfigurationDescriptors(Allocator allocator) => default;
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2));
		NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m8A97A126A24DE21208CC6C23BDA3C462F7DD0311 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public override void Destroy() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Reset_mC3F1E5323D153985545F3EDDF20DA73703468FC2 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void Reset() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_OnApplicationPause_m8FB7F1B59209A522883E89CCFD925A67198E9C90 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void OnApplicationPause() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::OnApplicationResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_OnApplicationResume_m744FBE7BF974465A14E7ABD2EBAD3EC7E588B117 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void OnApplicationResume() { }
		return;
	}
}
// System.IntPtr UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Provider_get_nativePtr_mB998A97B2BFEC1BB38F64D7B507FA0A1FB9C1B67 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual IntPtr nativePtr => IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* Provider_GetAvailabilityAsync_m0CC77C1C614055744ADFBB72CA4297D4E51A0EE9 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_CreateResolvedPromise_mFE0B943258581DA1E3C8A38D2B1FDF6C431276B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* V_0 = NULL;
	{
		// return Promise<SessionAvailability>.CreateResolvedPromise(SessionAvailability.None);
		Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* L_0;
		L_0 = Promise_1_CreateResolvedPromise_mFE0B943258581DA1E3C8A38D2B1FDF6C431276B3(0, Promise_1_CreateResolvedPromise_mFE0B943258581DA1E3C8A38D2B1FDF6C431276B3_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::InstallAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* Provider_InstallAsync_mC7CC25E00D2B78EF1D9B8615ADF663BDA2DB2419 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_CreateResolvedPromise_mF2D187E7D28DAABC9682974F8BC24DD94AEC3880_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* V_0 = NULL;
	{
		// return Promise<SessionInstallationStatus>.CreateResolvedPromise(SessionInstallationStatus.ErrorInstallNotSupported);
		Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* L_0;
		L_0 = Promise_1_CreateResolvedPromise_mF2D187E7D28DAABC9682974F8BC24DD94AEC3880(4, Promise_1_CreateResolvedPromise_mF2D187E7D28DAABC9682974F8BC24DD94AEC3880_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_trackingState_m0203345C74B979CB55AC990DA824AD8DE0CA1ADB (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual TrackingState trackingState => TrackingState.None;
		return (int32_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_notTrackingReason_m1D74C45C3CB3C617E7AB3D79C31F0B77CE7ECA32 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual NotTrackingReason notTrackingReason => NotTrackingReason.Unsupported;
		return (int32_t)(6);
	}
}
// System.Guid UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_sessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Provider_get_sessionId_m34F4CBEF73037CC97575A15ED53526D5030CCC93 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual Guid sessionId => Guid.Empty;
		Guid_t L_0 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_matchFrameRateEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_matchFrameRateEnabled_m99E9CB391AC8D0CCFEBB9591C6725B2B06E2C5B9 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool matchFrameRateEnabled => false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_matchFrameRateRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_matchFrameRateRequested_m227999FA334E01B18CCB64CEDE9683FB6055B6C1 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// get => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::set_matchFrameRateRequested(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_matchFrameRateRequested_m7D3DF9134FA202F846C13A322D4E895801E1B19A (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, bool ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value)
		bool L_0 = ___0_value;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// throw new NotSupportedException("Matching frame rate is not supported.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC6EAFD4C3B23645C412BB41A74CBFEB5A62E11BF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_set_matchFrameRateRequested_m7D3DF9134FA202F846C13A322D4E895801E1B19A_RuntimeMethod_var)));
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_frameRate_m3D2F14E59249D30B755798C8C0732B0CEFA059E3 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Querying the frame rate is not supported by this session subsystem.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3B1384C148B6355F25E67F7DFA0D39159B634A77)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_get_frameRate_m3D2F14E59249D30B755798C8C0732B0CEFA059E3_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m43661C1B8B6373D456C0CDA35F96AACBAB01290A (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_mB17ACABA3F2892B7CA5AE85EBF66B795E26AA997_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_mB17ACABA3F2892B7CA5AE85EBF66B795E26AA997(__this, SubsystemProvider_1__ctor_mB17ACABA3F2892B7CA5AE85EBF66B795E26AA997_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::get_supportsInstall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsInstall_m3EE93DA405D5C59B746B621FC30D4CC182BB1E53 (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = __this->___U3CsupportsInstallU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_m6BF049FADBC0C98964ED4DC227535BB27BBDA6B7 (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsInstallU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::get_supportsMatchFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsMatchFrameRate_m516AB9E3CDBE8002D4EBD036EDFD787C46C5FF26 (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; private set; }
		bool L_0 = __this->___U3CsupportsMatchFrameRateU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m7E8D8FF23A84B20582BF51BEF07DCDFF325ACDF8 (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsMatchFrameRateU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_RegisterDescriptor_m93A3C60962B96C0AC75288931A21E2D2C0CF3895 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRSessionSubsystemDescriptor(cinfo));
		Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 L_0 = ___0_cinfo;
		XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* L_1 = (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076*)il2cpp_codegen_object_new(XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XRSessionSubsystemDescriptor__ctor_mB1B365F156769946A415E3A37A4FDDE167D5D5B7(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor__ctor_mB1B365F156769946A415E3A37A4FDDE167D5D5B7 (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_mC889EBB6C5855DD9086D1ABADA7C64D5D3461B9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRSessionSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptorWithProvider_2__ctor_mC889EBB6C5855DD9086D1ABADA7C64D5D3461B9C(__this, SubsystemDescriptorWithProvider_2__ctor_mC889EBB6C5855DD9086D1ABADA7C64D5D3461B9C_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0;
		L_0 = Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		// providerType = cinfo.providerType;
		Type_t* L_1;
		L_1 = Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_1, NULL);
		// subsystemTypeOverride = cinfo.subsystemTypeOverride;
		Type_t* L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_2, NULL);
		// supportsInstall = cinfo.supportsInstall;
		bool L_3;
		L_3 = Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline((&___0_cinfo), NULL);
		XRSessionSubsystemDescriptor_set_supportsInstall_m6BF049FADBC0C98964ED4DC227535BB27BBDA6B7_inline(__this, L_3, NULL);
		// supportsMatchFrameRate = cinfo.supportsMatchFrameRate;
		bool L_4;
		L_4 = Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline((&___0_cinfo), NULL);
		XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m7E8D8FF23A84B20582BF51BEF07DCDFF325ACDF8_inline(__this, L_4, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_pinvoke(const Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03& unmarshaled, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_pinvoke_back(const Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_pinvoke& marshaled, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_pinvoke_cleanup(Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_com(const Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03& unmarshaled, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_com_back(const Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_com& marshaled, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_com_cleanup(Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsInstall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = __this->___U3CsupportsInstallU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsInstallU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsMatchFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = __this->___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsMatchFrameRateU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4_inline(_thisAdjusted, ___0_value, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m2D7B3F90910D284E6D8696F3E187E61436768107 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// int hash = HashCodeUtil.ReferenceHash(id);
		String_t* L_0;
		L_0 = Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline(__this, NULL);
		int32_t L_1;
		L_1 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_0, NULL);
		V_0 = L_1;
		// hash = hash * 486187739 + HashCodeUtil.ReferenceHash(providerType);
		int32_t L_2 = V_0;
		Type_t* L_3;
		L_3 = Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline(__this, NULL);
		int32_t L_4;
		L_4 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)486187739))), L_4));
		// hash = hash * 486187739 + HashCodeUtil.ReferenceHash(subsystemTypeOverride);
		int32_t L_5 = V_0;
		Type_t* L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline(__this, NULL);
		int32_t L_7;
		L_7 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)486187739))), L_7));
		// hash = hash * 486187739 + supportsInstall.GetHashCode();
		int32_t L_8 = V_0;
		bool L_9;
		L_9 = Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline(__this, NULL);
		V_1 = L_9;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)486187739))), L_10));
		// hash = hash * 486187739 + supportsMatchFrameRate.GetHashCode();
		int32_t L_11 = V_0;
		bool L_12;
		L_12 = Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline(__this, NULL);
		V_1 = L_12;
		int32_t L_13;
		L_13 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)486187739))), L_13));
		// return hash;
		int32_t L_14 = V_0;
		V_2 = L_14;
		goto IL_0068;
	}

IL_0068:
	{
		// }
		int32_t L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m2D7B3F90910D284E6D8696F3E187E61436768107_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_m2D7B3F90910D284E6D8696F3E187E61436768107(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m0C051CCCCA3A44F0C851768FE1CDB49DAC6D82B6 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B6_0 = 0;
	{
		// return
		//     string.Equals(id, other.id) &&
		//     ReferenceEquals(providerType, other.providerType) &&
		//     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
		//     supportsInstall == other.supportsInstall &&
		//     supportsMatchFrameRate == other.supportsMatchFrameRate;
		String_t* L_0;
		L_0 = Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline(__this, NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline((&___0_other), NULL);
		bool L_2;
		L_2 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		Type_t* L_3;
		L_3 = Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline(__this, NULL);
		Type_t* L_4;
		L_4 = Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_3) == ((RuntimeObject*)(Type_t*)L_4))))
		{
			goto IL_0053;
		}
	}
	{
		Type_t* L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline(__this, NULL);
		Type_t* L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_5) == ((RuntimeObject*)(Type_t*)L_6))))
		{
			goto IL_0053;
		}
	}
	{
		bool L_7;
		L_7 = Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline(__this, NULL);
		bool L_8;
		L_8 = Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0053;
		}
	}
	{
		bool L_9;
		L_9 = Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline(__this, NULL);
		bool L_10;
		L_10 = Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline((&___0_other), NULL);
		G_B6_0 = ((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B6_0 = 0;
	}

IL_0054:
	{
		V_0 = (bool)G_B6_0;
		goto IL_0057;
	}

IL_0057:
	{
		// }
		bool L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m0C051CCCCA3A44F0C851768FE1CDB49DAC6D82B6_AdjustorThunk (RuntimeObject* __this, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_other, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m0C051CCCCA3A44F0C851768FE1CDB49DAC6D82B6(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m053CC1A9E8D4DBF1FAFACF66083B615EF36CA572 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// public override bool Equals(object obj) => obj is Cinfo && Equals((Cinfo)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = Cinfo_Equals_m0C051CCCCA3A44F0C851768FE1CDB49DAC6D82B6(__this, ((*(Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*)((Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*)(Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*)UnBox(L_1, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		return (bool)G_B3_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m053CC1A9E8D4DBF1FAFACF66083B615EF36CA572_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m053CC1A9E8D4DBF1FAFACF66083B615EF36CA572(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	{
		// public ScreenOrientation screenOrientation { get; set; }
		int32_t L_0 = __this->___U3CscreenOrientationU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenOrientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenOrientation_m95E8C1C9AEEFCD0577AE4605645FA8CD8F1D6B9B (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public ScreenOrientation screenOrientation { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CscreenOrientationU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRSessionUpdateParams_set_screenOrientation_m95E8C1C9AEEFCD0577AE4605645FA8CD8F1D6B9B_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	XRSessionUpdateParams_set_screenOrientation_m95E8C1C9AEEFCD0577AE4605645FA8CD8F1D6B9B_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenDimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119 (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Int screenDimensions { get; set; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___U3CscreenDimensionsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A _returnValue;
	_returnValue = XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenDimensions(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenDimensions_mC99924339E008CEFCF202EC394463F00DF0DA4B3 (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2Int screenDimensions { get; set; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___0_value;
		__this->___U3CscreenDimensionsU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRSessionUpdateParams_set_screenDimensions_mC99924339E008CEFCF202EC394463F00DF0DA4B3_AdjustorThunk (RuntimeObject* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	XRSessionUpdateParams_set_screenDimensions_mC99924339E008CEFCF202EC394463F00DF0DA4B3_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_GetHashCode_m735A861B2C2718DBF5588467EC76FC6EC77EFE8D (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public override int GetHashCode() => HashCodeUtil.Combine(((int)screenOrientation).GetHashCode(), screenDimensions.GetHashCode());
		int32_t L_0;
		L_0 = XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2;
		L_2 = XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline(__this, NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = Vector2Int_GetHashCode_mA3B6135FA770AF0C171319B50D9B913657230EB7_inline((&V_1), NULL);
		int32_t L_4;
		L_4 = HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36(L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t XRSessionUpdateParams_GetHashCode_m735A861B2C2718DBF5588467EC76FC6EC77EFE8D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRSessionUpdateParams_GetHashCode_m735A861B2C2718DBF5588467EC76FC6EC77EFE8D(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mE2FA6A03BEBC662F543FA73D25561369FAEE7EAF (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// public override bool Equals(object obj) => (obj is XRSessionUpdateParams) && Equals((XRSessionUpdateParams)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = XRSessionUpdateParams_Equals_mEC4D21B1DFB2DB2327FCE21B43C144DD2003828C(__this, ((*(XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*)((XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*)(XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*)UnBox(L_1, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		return (bool)G_B3_0;
	}
}
IL2CPP_EXTERN_C  bool XRSessionUpdateParams_Equals_mE2FA6A03BEBC662F543FA73D25561369FAEE7EAF_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRSessionUpdateParams_Equals_mE2FA6A03BEBC662F543FA73D25561369FAEE7EAF(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSessionUpdateParams_ToString_m82D102D9405D9B5FCA96E55074C982F225287D80 (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral371D4A83362DFDF00E89BA68C82057A64E205D24);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"Screen Orientation: {screenOrientation}, Screen Dimensions: {screenDimensions}";
		int32_t L_0;
		L_0 = XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline(__this, NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var, &L_1);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3;
		L_3 = XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline(__this, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4 = L_3;
		RuntimeObject* L_5 = Box(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral371D4A83362DFDF00E89BA68C82057A64E205D24, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* XRSessionUpdateParams_ToString_m82D102D9405D9B5FCA96E55074C982F225287D80_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XRSessionUpdateParams_ToString_m82D102D9405D9B5FCA96E55074C982F225287D80(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mEC4D21B1DFB2DB2327FCE21B43C144DD2003828C (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_other, const RuntimeMethod* method) 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B3_0 = 0;
	{
		// (screenOrientation == other.screenOrientation) &&
		// screenDimensions.Equals(other.screenDimensions);
		int32_t L_0;
		L_0 = XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline(__this, NULL);
		int32_t L_1;
		L_1 = XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0026;
		}
	}
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2;
		L_2 = XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline(__this, NULL);
		V_0 = L_2;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3;
		L_3 = XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline((&___0_other), NULL);
		bool L_4;
		L_4 = Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline((&V_0), L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		return (bool)G_B3_0;
	}
}
IL2CPP_EXTERN_C  bool XRSessionUpdateParams_Equals_mEC4D21B1DFB2DB2327FCE21B43C144DD2003828C_AdjustorThunk (RuntimeObject* __this, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_other, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRSessionUpdateParams_Equals_mEC4D21B1DFB2DB2327FCE21B43C144DD2003828C(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TrackableId invalidId => s_InvalidId;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_InvalidId_1;
		return L_0;
	}
}
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SubId1;
		uint64_t L_0 = __this->___m_SubId1_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SubId2;
		uint64_t L_0 = __this->___m_SubId2_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, uint64_t ___0_subId1, uint64_t ___1_subId2, const RuntimeMethod* method) 
{
	{
		// m_SubId1 = subId1;
		uint64_t L_0 = ___0_subId1;
		__this->___m_SubId1_2 = L_0;
		// m_SubId2 = subId2;
		uint64_t L_1 = ___1_subId2;
		__this->___m_SubId2_3 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_subId1, uint64_t ___1_subId2, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5(_thisAdjusted, ___0_subId1, ___1_subId2, method);
}
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_m4BE1AD91726751D994E6FB864B231BE5D7D3F85F (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("{0}-{1}",
		//     m_SubId1.ToString("X16"),
		//     m_SubId2.ToString("X16"));
		uint64_t* L_0 = (uint64_t*)(&__this->___m_SubId1_2);
		String_t* L_1;
		L_1 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_0, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, NULL);
		uint64_t* L_2 = (uint64_t*)(&__this->___m_SubId2_3);
		String_t* L_3;
		L_3 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_2, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, NULL);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8, L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		String_t* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  String_t* TrackableId_ToString_m4BE1AD91726751D994E6FB864B231BE5D7D3F85F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = TrackableId_ToString_m4BE1AD91726751D994E6FB864B231BE5D7D3F85F(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.TrackableId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	{
		// public override int GetHashCode() => HashCodeUtil.Combine(m_SubId1.GetHashCode(), m_SubId2.GetHashCode());
		uint64_t* L_0 = (uint64_t*)(&__this->___m_SubId1_2);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		uint64_t* L_2 = (uint64_t*)(&__this->___m_SubId2_3);
		int32_t L_3;
		L_3 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_2, NULL);
		int32_t L_4;
		L_4 = HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36(L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m67C98169A04DB96CCEBC08A05B3FF9544B52C3E5 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// public override bool Equals(object obj) => obj is TrackableId && Equals((TrackableId)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E(__this, ((*(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)UnBox(L_1, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		return (bool)G_B3_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableId_Equals_m67C98169A04DB96CCEBC08A05B3FF9544B52C3E5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableId_Equals_m67C98169A04DB96CCEBC08A05B3FF9544B52C3E5(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_other, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// public bool Equals(TrackableId other) => (m_SubId1 == other.m_SubId1) && (m_SubId2 == other.m_SubId2);
		uint64_t L_0 = __this->___m_SubId1_2;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_other;
		uint64_t L_2 = L_1.___m_SubId1_2;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		uint64_t L_3 = __this->___m_SubId2_3;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_4 = ___0_other;
		uint64_t L_5 = L_4.___m_SubId2_3;
		G_B3_0 = ((((int64_t)L_3) == ((int64_t)L_5))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		return (bool)G_B3_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E_AdjustorThunk (RuntimeObject* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_other, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::op_Equality(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_op_Equality_m9E51E31C58CA710A1BD2E3AE1D2286E2FE5B3529 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_lhs, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___1_rhs, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// (lhs.m_SubId1 == rhs.m_SubId1) &&
		// (lhs.m_SubId2 == rhs.m_SubId2);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ___0_lhs;
		uint64_t L_1 = L_0.___m_SubId1_2;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2 = ___1_rhs;
		uint64_t L_3 = L_2.___m_SubId1_2;
		if ((!(((uint64_t)L_1) == ((uint64_t)L_3))))
		{
			goto IL_001e;
		}
	}
	{
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_4 = ___0_lhs;
		uint64_t L_5 = L_4.___m_SubId2_3;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_6 = ___1_rhs;
		uint64_t L_7 = L_6.___m_SubId2_3;
		G_B3_0 = ((((int64_t)L_5) == ((int64_t)L_7))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		return (bool)G_B3_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__cctor_m0233247C572757642543FD7F9D7AFFA432EC916F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEC9FDEA1EB953376E5F17E9CEC1AFAC97FDD26D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Regex s_TrackableIdRegex = new Regex(@"^(?<part1>[a-fA-F\d]{16})-(?<part2>[a-fA-F\d]{16})$",
		//                                                      RegexOptions.Compiled|RegexOptions.CultureInvariant|RegexOptions.Singleline|RegexOptions.ExplicitCapture);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_0, _stringLiteralBEC9FDEA1EB953376E5F17E9CEC1AFAC97FDD26D, ((int32_t)540), NULL);
		((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_TrackableIdRegex_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_TrackableIdRegex_0), (void*)L_0);
		// static TrackableId s_InvalidId = new TrackableId(0, 0);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5((&L_1), ((int64_t)0), ((int64_t)0), /*hidden argument*/NULL);
		((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_InvalidId_1 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_nativeTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRTextureDescriptor_get_nativeTexture_m1E27C0E1DC11DDC6139178509EE91B8DF54DBAD4 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_NativeTexture; }
		intptr_t L_0 = __this->___m_NativeTexture_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_NativeTexture; }
		intptr_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  intptr_t XRTextureDescriptor_get_nativeTexture_m1E27C0E1DC11DDC6139178509EE91B8DF54DBAD4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = XRTextureDescriptor_get_nativeTexture_m1E27C0E1DC11DDC6139178509EE91B8DF54DBAD4(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_width_m570472F03994BC63F21751414105A2E0C112DBF2 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return m_Width; }
		int32_t L_0 = __this->___m_Width_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Width; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t XRTextureDescriptor_get_width_m570472F03994BC63F21751414105A2E0C112DBF2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRTextureDescriptor_get_width_m570472F03994BC63F21751414105A2E0C112DBF2(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_height_mC0B37241C24FA883E2594B9411080EDF654E3E01 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return m_Height; }
		int32_t L_0 = __this->___m_Height_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Height; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t XRTextureDescriptor_get_height_mC0B37241C24FA883E2594B9411080EDF654E3E01_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRTextureDescriptor_get_height_mC0B37241C24FA883E2594B9411080EDF654E3E01(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_mipmapCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_mipmapCount_m4B2ED0D6EBE06AD86E356203B4AB5DE3807C1D31 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return m_MipmapCount; }
		int32_t L_0 = __this->___m_MipmapCount_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_MipmapCount; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t XRTextureDescriptor_get_mipmapCount_m4B2ED0D6EBE06AD86E356203B4AB5DE3807C1D31_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRTextureDescriptor_get_mipmapCount_m4B2ED0D6EBE06AD86E356203B4AB5DE3807C1D31(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_format_mA745AA87046D4FE4846C11B8285B980FF6DDDD1A (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return m_Format; }
		int32_t L_0 = __this->___m_Format_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_Format; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t XRTextureDescriptor_get_format_mA745AA87046D4FE4846C11B8285B980FF6DDDD1A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRTextureDescriptor_get_format_mA745AA87046D4FE4846C11B8285B980FF6DDDD1A(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_propertyNameId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_propertyNameId_mF5A620F0DAEE746BDD293DB7F02909FB5404DCC1 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return m_PropertyNameId; }
		int32_t L_0 = __this->___m_PropertyNameId_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_PropertyNameId; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t XRTextureDescriptor_get_propertyNameId_mF5A620F0DAEE746BDD293DB7F02909FB5404DCC1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRTextureDescriptor_get_propertyNameId_mF5A620F0DAEE746BDD293DB7F02909FB5404DCC1(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_get_valid_mBEE2CC268CC8773618BAB7794118746E235A6761 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// get { return (m_NativeTexture != IntPtr.Zero) && (m_Width > 0) && (m_Height > 0); }
		intptr_t L_0 = __this->___m_NativeTexture_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_3 = __this->___m_Width_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = __this->___m_Height_2;
		G_B4_0 = ((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B4_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B4_0;
		goto IL_002b;
	}

IL_002b:
	{
		// get { return (m_NativeTexture != IntPtr.Zero) && (m_Width > 0) && (m_Height > 0); }
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool XRTextureDescriptor_get_valid_mBEE2CC268CC8773618BAB7794118746E235A6761_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRTextureDescriptor_get_valid_mBEE2CC268CC8773618BAB7794118746E235A6761(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_depth_m5885EBF7D767C918B1483D63D1B11EE60D939E7D (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Depth;
		int32_t L_0 = __this->___m_Depth_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRTextureDescriptor_get_depth_m5885EBF7D767C918B1483D63D1B11EE60D939E7D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRTextureDescriptor_get_depth_m5885EBF7D767C918B1483D63D1B11EE60D939E7D_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_dimension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Dimension;
		int32_t L_0 = __this->___m_Dimension_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::hasIdenticalTextureMetadata(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_hasIdenticalTextureMetadata_mB4DA1A4CFF4ABB66F8FF3AF1F310E60BA1B3F872 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	{
		// return
		//     m_Width.Equals(other.m_Width) &&
		//     m_Height.Equals(other.m_Height) &&
		//     m_Depth.Equals(other.m_Depth) &&
		//     m_Dimension == other.m_Dimension &&
		//     m_MipmapCount.Equals(other.m_MipmapCount) &&
		//     (m_Format == other.m_Format);
		int32_t* L_0 = (int32_t*)(&__this->___m_Width_1);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_1 = ___0_other;
		int32_t L_2 = L_1.___m_Width_1;
		bool L_3;
		L_3 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_006b;
		}
	}
	{
		int32_t* L_4 = (int32_t*)(&__this->___m_Height_2);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_5 = ___0_other;
		int32_t L_6 = L_5.___m_Height_2;
		bool L_7;
		L_7 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		int32_t* L_8 = (int32_t*)(&__this->___m_Depth_6);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_9 = ___0_other;
		int32_t L_10 = L_9.___m_Depth_6;
		bool L_11;
		L_11 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_12 = __this->___m_Dimension_7;
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_13 = ___0_other;
		int32_t L_14 = L_13.___m_Dimension_7;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t* L_15 = (int32_t*)(&__this->___m_MipmapCount_3);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_16 = ___0_other;
		int32_t L_17 = L_16.___m_MipmapCount_3;
		bool L_18;
		L_18 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_19 = __this->___m_Format_4;
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_20 = ___0_other;
		int32_t L_21 = L_20.___m_Format_4;
		G_B7_0 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		goto IL_006c;
	}

IL_006b:
	{
		G_B7_0 = 0;
	}

IL_006c:
	{
		V_0 = (bool)G_B7_0;
		goto IL_006f;
	}

IL_006f:
	{
		// }
		bool L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C  bool XRTextureDescriptor_hasIdenticalTextureMetadata_mB4DA1A4CFF4ABB66F8FF3AF1F310E60BA1B3F872_AdjustorThunk (RuntimeObject* __this, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_other, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRTextureDescriptor_hasIdenticalTextureMetadata_mB4DA1A4CFF4ABB66F8FF3AF1F310E60BA1B3F872(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRTextureDescriptor_Reset_m1BE8024830BA7AFB94AAD01731FDB449DD12A01F (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NativeTexture = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___m_NativeTexture_0 = L_0;
		// m_Width = 0;
		__this->___m_Width_1 = 0;
		// m_Height = 0;
		__this->___m_Height_2 = 0;
		// m_Depth = 0;
		__this->___m_Depth_6 = 0;
		// m_Dimension = (TextureDimension)0;
		__this->___m_Dimension_7 = 0;
		// m_MipmapCount = 0;
		__this->___m_MipmapCount_3 = 0;
		// m_Format = (TextureFormat)0;
		__this->___m_Format_4 = 0;
		// m_PropertyNameId = 0;
		__this->___m_PropertyNameId_5 = 0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRTextureDescriptor_Reset_m1BE8024830BA7AFB94AAD01731FDB449DD12A01F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	XRTextureDescriptor_Reset_m1BE8024830BA7AFB94AAD01731FDB449DD12A01F(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_m4931F85C225CAC63EC71FBCE246204E244B6CA2B (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// return
		//     hasIdenticalTextureMetadata(other) &&
		//     m_PropertyNameId.Equals(other.m_PropertyNameId) &&
		//     (m_NativeTexture == other.m_NativeTexture);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_0 = ___0_other;
		bool L_1;
		L_1 = XRTextureDescriptor_hasIdenticalTextureMetadata_mB4DA1A4CFF4ABB66F8FF3AF1F310E60BA1B3F872(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		int32_t* L_2 = (int32_t*)(&__this->___m_PropertyNameId_5);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_3 = ___0_other;
		int32_t L_4 = L_3.___m_PropertyNameId_5;
		bool L_5;
		L_5 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		intptr_t L_6 = __this->___m_NativeTexture_0;
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_7 = ___0_other;
		intptr_t L_8 = L_7.___m_NativeTexture_0;
		bool L_9;
		L_9 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_6, L_8, NULL);
		G_B4_0 = ((int32_t)(L_9));
		goto IL_0031;
	}

IL_0030:
	{
		G_B4_0 = 0;
	}

IL_0031:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C  bool XRTextureDescriptor_Equals_m4931F85C225CAC63EC71FBCE246204E244B6CA2B_AdjustorThunk (RuntimeObject* __this, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_other, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRTextureDescriptor_Equals_m4931F85C225CAC63EC71FBCE246204E244B6CA2B(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_m42127F01DF3CDEA1F38CF07E6057E8AD9E6F4570 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return ((obj is XRTextureDescriptor) && Equals((XRTextureDescriptor)obj));
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = XRTextureDescriptor_Equals_m4931F85C225CAC63EC71FBCE246204E244B6CA2B(__this, ((*(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*)((XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*)(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*)UnBox(L_1, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool XRTextureDescriptor_Equals_m42127F01DF3CDEA1F38CF07E6057E8AD9E6F4570_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRTextureDescriptor_Equals_m42127F01DF3CDEA1F38CF07E6057E8AD9E6F4570(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_GetHashCode_mFEB456F0A0985232D0E342B8F10669149F190012 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int hashCode = 486187739;
		V_0 = ((int32_t)486187739);
		// hashCode = (hashCode * 486187739) + m_NativeTexture.GetHashCode();
		int32_t L_0 = V_0;
		intptr_t* L_1 = (intptr_t*)(&__this->___m_NativeTexture_0);
		int32_t L_2;
		L_2 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_1, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)486187739))), L_2));
		// hashCode = (hashCode * 486187739) + m_Width.GetHashCode();
		int32_t L_3 = V_0;
		int32_t* L_4 = (int32_t*)(&__this->___m_Width_1);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)486187739))), L_5));
		// hashCode = (hashCode * 486187739) + m_Height.GetHashCode();
		int32_t L_6 = V_0;
		int32_t* L_7 = (int32_t*)(&__this->___m_Height_2);
		int32_t L_8;
		L_8 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_7, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)486187739))), L_8));
		// hashCode = (hashCode * 486187739) + m_Depth.GetHashCode();
		int32_t L_9 = V_0;
		int32_t* L_10 = (int32_t*)(&__this->___m_Depth_6);
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_10, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)486187739))), L_11));
		// hashCode = (hashCode * 486187739) + ((int)m_Dimension).GetHashCode();
		int32_t L_12 = V_0;
		int32_t L_13 = __this->___m_Dimension_7;
		V_1 = L_13;
		int32_t L_14;
		L_14 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)486187739))), L_14));
		// hashCode = (hashCode * 486187739) + m_MipmapCount.GetHashCode();
		int32_t L_15 = V_0;
		int32_t* L_16 = (int32_t*)(&__this->___m_MipmapCount_3);
		int32_t L_17;
		L_17 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_16, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)486187739))), L_17));
		// hashCode = (hashCode * 486187739) + ((int)m_Format).GetHashCode();
		int32_t L_18 = V_0;
		int32_t L_19 = __this->___m_Format_4;
		V_1 = L_19;
		int32_t L_20;
		L_20 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)486187739))), L_20));
		// hashCode = (hashCode * 486187739) + m_PropertyNameId.GetHashCode();
		int32_t L_21 = V_0;
		int32_t* L_22 = (int32_t*)(&__this->___m_PropertyNameId_5);
		int32_t L_23;
		L_23 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_22, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)486187739))), L_23));
		// return hashCode;
		int32_t L_24 = V_0;
		V_2 = L_24;
		goto IL_00b3;
	}

IL_00b3:
	{
		// }
		int32_t L_25 = V_2;
		return L_25;
	}
}
IL2CPP_EXTERN_C  int32_t XRTextureDescriptor_GetHashCode_mFEB456F0A0985232D0E342B8F10669149F190012_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRTextureDescriptor_GetHashCode_mFEB456F0A0985232D0E342B8F10669149F190012(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.XRTextureDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRTextureDescriptor_ToString_m452F36D253986001921C5F627E67E2452D685493 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C60D08AD178165742EAA66ED6E17B425304C141);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ABD255D5E79D438044AA7D302C04ABEC3F505B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92580D64BA310146F0049A68E639333564037B8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return $"0x{m_NativeTexture.ToString("X16")} {m_Width.ToString()}x{ m_Height.ToString()}"+
		//         $"x{m_Depth.ToString()}-{m_MipmapCount.ToString()} dimension:{m_Dimension.ToString()}"+
		//         $" format:{m_Format.ToString()} propertyNameId:{m_PropertyNameId.ToString()}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		intptr_t* L_3 = (intptr_t*)(&__this->___m_NativeTexture_0);
		String_t* L_4;
		L_4 = IntPtr_ToString_m4B664F765633183265DE764BECD5D78FCCA20A13(L_3, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int32_t* L_7 = (int32_t*)(&__this->___m_Width_1);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		int32_t* L_11 = (int32_t*)(&__this->___m_Height_2);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_10;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		int32_t* L_15 = (int32_t*)(&__this->___m_Depth_6);
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_14;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		int32_t* L_19 = (int32_t*)(&__this->___m_MipmapCount_3);
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_19, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_18;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral92580D64BA310146F0049A68E639333564037B8B);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral92580D64BA310146F0049A68E639333564037B8B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		int32_t* L_23 = (int32_t*)(&__this->___m_Dimension_7);
		Il2CppFakeBox<int32_t> L_24(TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_il2cpp_TypeInfo_var, L_23);
		String_t* L_25;
		L_25 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_24), NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_22;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral2ABD255D5E79D438044AA7D302C04ABEC3F505B5);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral2ABD255D5E79D438044AA7D302C04ABEC3F505B5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		int32_t* L_28 = (int32_t*)(&__this->___m_Format_4);
		Il2CppFakeBox<int32_t> L_29(TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_il2cpp_TypeInfo_var, L_28);
		String_t* L_30;
		L_30 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_29), NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_30);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_27;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral1C60D08AD178165742EAA66ED6E17B425304C141);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral1C60D08AD178165742EAA66ED6E17B425304C141);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
		int32_t* L_33 = (int32_t*)(&__this->___m_PropertyNameId_5);
		String_t* L_34;
		L_34 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_33, NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_34);
		String_t* L_35;
		L_35 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_32, NULL);
		V_0 = L_35;
		goto IL_00d8;
	}

IL_00d8:
	{
		// }
		String_t* L_36 = V_0;
		return L_36;
	}
}
IL2CPP_EXTERN_C  String_t* XRTextureDescriptor_ToString_m452F36D253986001921C5F627E67E2452D685493_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XRTextureDescriptor_ToString_m452F36D253986001921C5F627E67E2452D685493(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycastHit_get_trackableId_m8B92C0F8977D274743D9388DEB7DCEBCC88E7325_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_TrackableId_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycastHit_get_pose_m3B8D69B763A39178CB583948B4E08255FE9A633E_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRRaycastHit_get_distance_m7098B7C90D22697CA37FBBDF50A4109AD055CA80_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Distance;
		float L_0 = __this->___m_Distance_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRRaycastHit_get_hitType_m30A8013E847E6B2B70A9511B522099C03102E933_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HitType;
		int32_t L_0 = __this->___m_HitType_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TrackableId invalidId => s_InvalidId;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_InvalidId_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 XRRaycast_get_defaultValue_m37D4F9D561AA6422EEB957A49FDC8B9E1669A48E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRRaycast defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_0 = ((XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 XRRaycastHit_get_defaultValue_m330E18C6389B68E95AB5CFF26531D5CF5DE6E090_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRRaycastHit defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_0 = ((XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = __this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m1860360556D5F4BBD3B242C93D8C92B3F8FA8D90_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = __this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_m2A57C6AF5B8A21E2780A2CDC288F2917DB4BC590_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = __this->___U3CsupportedTrackableTypesU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_m99EBD94098B7BD499391301B0099EC9381D32558_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CsupportedTrackableTypesU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = __this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_m9C99240C24C64818B63A368C025689018E8C4044_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m962E07A26F49D8C32DAEFEC4F9E0F79EBC128533_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m5D183591B4A3ECA1EC2AA9015C02DCD1EB1F076F_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m20C9DAD8677611ACD22689DA249911EEDE46EBF7_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mC7DB604D2E288A145177EC66F8C1DAA50F38693F_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m05D5BC11896AED796A6E237BBB98FA4EF3CF17A4_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_m319BC9C9EB554C35CD40B791917A603D63BEEE0A_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CsupportedTrackableTypesU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackedRaycasts_m7E65DAEB9ED0CB4C4C83DB751C1547145949AA41_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_BeginSample_m640E26B682D803CC5DB4EDFDF2F6E83771BF0BE4_inline (String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		Profiler_ValidateArguments_m631DF788CA8A7DF599A5871AF4D7FA8B9C3B52CC_inline(L_0, NULL);
		String_t* L_1 = ___0_name;
		Profiler_BeginSampleImpl_m7CA0C092A61229CA7BF617E521F2DE0E2B155CEA(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsInstall_m3EE93DA405D5C59B746B621FC30D4CC182BB1E53_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = __this->___U3CsupportsInstallU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ConfigurationDescriptor_get_identifier_m858F4B730002C1823D283460115DA65C6A46BCB6_inline (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr identifier => m_Identifier;
		intptr_t L_0 = __this->___m_Identifier_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConfigurationDescriptor_get_rank_mEDFBF5E2173FA84A0695BB01A6A40860794F6FA8_inline (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) 
{
	{
		// public int rank => m_Rank;
		int32_t L_0 = __this->___m_Rank_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConfigurationDescriptor_get_capabilities_m6A4EF4C0E0FE3671E8564EF13BA2A5B4264CF938_inline (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* __this, const RuntimeMethod* method) 
{
	{
		// public Feature capabilities => m_Capabilities;
		uint64_t L_0 = __this->___m_Capabilities_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystem_set_currentConfiguration_m4299FA74038DD6293A125B425179E4C948D09917_inline (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D ___0_value, const RuntimeMethod* method) 
{
	{
		// public Configuration? currentConfiguration { get; private set; }
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_0 = ___0_value;
		__this->___U3CcurrentConfigurationU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D XRSessionSubsystem_get_currentConfiguration_m1AB222F75B6C1645DB3405CB9AE18740EE66F0E5_inline (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	{
		// public Configuration? currentConfiguration { get; private set; }
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_0 = __this->___U3CcurrentConfigurationU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 Configuration_get_descriptor_m3C4973351367EA0BD9E48DA1E2201D8803BA8D1E_inline (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* __this, const RuntimeMethod* method) 
{
	{
		// public ConfigurationDescriptor descriptor { get; private set; }
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_0 = __this->___U3CdescriptorU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Configuration_get_features_m704F372E940AF1DB435C1EBFF8E48EAD4E8B3776_inline (Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947* __this, const RuntimeMethod* method) 
{
	{
		// public Feature features { get; private set; }
		uint64_t L_0 = __this->___U3CfeaturesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = __this->___U3CsupportsInstallU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_m6BF049FADBC0C98964ED4DC227535BB27BBDA6B7_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsInstallU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = __this->___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m7E8D8FF23A84B20582BF51BEF07DCDFF325ACDF8_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsMatchFrameRateU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsInstallU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsMatchFrameRateU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	{
		// public ScreenOrientation screenOrientation { get; set; }
		int32_t L_0 = __this->___U3CscreenOrientationU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenOrientation_m95E8C1C9AEEFCD0577AE4605645FA8CD8F1D6B9B_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public ScreenOrientation screenOrientation { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CscreenOrientationU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Int screenDimensions { get; set; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___U3CscreenDimensionsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenDimensions_mC99924339E008CEFCF202EC394463F00DF0DA4B3_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2Int screenDimensions { get; set; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___0_value;
		__this->___U3CscreenDimensionsU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_mA3B6135FA770AF0C171319B50D9B913657230EB7_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		V_1 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(__this, NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(__this, NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___0_other), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SubId1;
		uint64_t L_0 = __this->___m_SubId1_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SubId2;
		uint64_t L_0 = __this->___m_SubId2_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_depth_m5885EBF7D767C918B1483D63D1B11EE60D939E7D_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Depth;
		int32_t L_0 = __this->___m_Depth_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Dimension;
		int32_t L_0 = __this->___m_Dimension_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CproviderU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_subsystemDescriptor_mB4052808D703DF75CA2D74A5801B59172E3F80C7_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CsubsystemDescriptorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mA25A93E9848172129AC64B461B713935273B26EC_gshared_inline (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer_0;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 Enumerator_get_Current_m9DC74661C7591B33A0DA56C42A1D18E5CB5A5FF2_gshared_inline (Enumerator_tD931B981D9A59D89BFAA36FDC5C9A8384551A464* __this, const RuntimeMethod* method) 
{
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_0 = __this->___value_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mAB9760CC88D560C88D99EC0F40D9DA8814CDF933_gshared_inline (Enumerator_tD931B981D9A59D89BFAA36FDC5C9A8384551A464* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___m_Index_1;
		__this->___m_Index_1 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___m_Index_1;
		NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2* L_2 = (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2*)(&__this->___m_Array_0);
		int32_t L_3 = L_2->___m_Length_1;
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2* L_5 = (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2*)(&__this->___m_Array_0);
		void* L_6 = L_5->___m_Buffer_0;
		int32_t L_7 = __this->___m_Index_1;
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_8;
		L_8 = ((  ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 (*) (void*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0)))(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->___value_2 = L_8;
		V_1 = (bool)1;
		goto IL_0057;
	}

IL_0047:
	{
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1* L_9 = (ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*)(&__this->___value_2);
		il2cpp_codegen_initobj(L_9, sizeof(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1));
		V_1 = (bool)0;
		goto IL_0057;
	}

IL_0057:
	{
		bool L_10 = V_1;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mEC2B34CD521662D07140FCB0D91A67D0411A3BF3_gshared_inline (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Profiler_ValidateArguments_m631DF788CA8A7DF599A5871AF4D7FA8B9C3B52CC_inline (String_t* ___0_name, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0 = ___0_name;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31D159E683556C06B3B3963D92483B6867EB3233)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Profiler_ValidateArguments_m631DF788CA8A7DF599A5871AF4D7FA8B9C3B52CC_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
