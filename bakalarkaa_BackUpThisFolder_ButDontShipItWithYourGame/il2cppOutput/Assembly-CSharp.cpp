#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// SelectionManager[]
struct SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// ARManager
struct ARManager_t082C478673DF5F5786DFB25006CC1643E8471245;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// Animation
struct Animation_tEC33195B0B2E18ABF28C90641DDB6DA92B77286E;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// CubeHandler
struct CubeHandler_tF4E3180843FA1F77EDD376EA590F67CFD9F0488F;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlacementManager
struct PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SelectionManager
struct SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// unityy
struct unityy_t3A63DAC83FF92496D8532BC144F3E63611A42DCA;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9;
IL2CPP_EXTERN_C String_t* _stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18;
IL2CPP_EXTERN_C String_t* _stringLiteral1E58DF6AC72AD5A81B8BF891A1324BD9BEE588EA;
IL2CPP_EXTERN_C String_t* _stringLiteral376F0114C8F1770EBB9C5F2785DE5F935AA7E9C8;
IL2CPP_EXTERN_C String_t* _stringLiteral946A16C6F63DECCA0CAB6C6E840FA95D31A9C237;
IL2CPP_EXTERN_C String_t* _stringLiteral987703431C77C5E98624964EF0E5B726F46C7E4F;
IL2CPP_EXTERN_C String_t* _stringLiteralB71620C733E44991BE845B6E0C4D9177EE70446D;
IL2CPP_EXTERN_C String_t* _stringLiteralB99532D5CEFED04D2DF63758274BBF69C89ACAC3;
IL2CPP_EXTERN_C String_t* _stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928;
IL2CPP_EXTERN_C String_t* _stringLiteralDA4188A1482414EA846EDA98A100F34FB7A407FC;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DB1B6CF792E1BF1AED62392910B83816D9FC52;
IL2CPP_EXTERN_C const RuntimeMethod* ARManager_ConfirmPlace_m996712269C30631C7FCB3B1F36D8113D6CCF53DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Animation_AnimationPlay_m7D8268D32570A6E872630AACE49E7388D316637E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m89205C40F433E0572A7B69422BE17AA26B72B7DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m00A30A49C0E708B2A2ACA8D9AB9098C70A45F4C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_mBF707AD1CBD37486C3EB6FC5051FDA8E2FF0672B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_mBCEE23F2766908DD31711F4D9212FFB1C26EF926_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlacementManager_ConfirmPlace_m6572FFE0398F45142B9AD739D62CD16C3FF530A2_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841;
struct SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8292C421BBB00D7661DC07462822936152BAB446_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// Vector2Extentions
struct Vector2Extentions_t769E17C0367D772C6915684F291B0745A19C6DBB  : public RuntimeObject
{
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.TouchPhase
struct TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E 
{
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;
};

// UnityEngine.TouchType
struct TouchType_t84F82C73BC1A6012141735AD84DA67AA7F7AB43F 
{
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.TrackableType
struct TrackableType_t8B4D3C5D68805ECC40B1C8CA6C7174184BB2C110 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;
};

// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_t7F40241CC7C406EBD574D426F736CB744DE86CDA 
{
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Selectable/Transition
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
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

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C* ___s_SubsystemInstances_6;
};

// ARManager
struct ARManager_t082C478673DF5F5786DFB25006CC1643E8471245  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas[] ARManager::canvases
	CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* ___canvases_4;
	// UnityEngine.UI.Text ARManager::textMesh
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textMesh_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> ARManager::hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hits_6;
	// SelectionManager ARManager::objectToSpawn
	SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* ___objectToSpawn_7;
	// UnityEngine.Camera ARManager::arCam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___arCam_8;
	// SelectionManager ARManager::spawnedObject
	SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* ___spawnedObject_9;
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARManager::aRRaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___aRRaycastManager_10;
	// UnityEngine.UI.Button ARManager::confirmButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___confirmButton_11;
	// System.Single ARManager::rotationSpeed
	float ___rotationSpeed_12;
	// System.Boolean ARManager::isMoving
	bool ___isMoving_13;
};

// Animation
struct Animation_tEC33195B0B2E18ABF28C90641DDB6DA92B77286E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Animation::canvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas_4;
	// UnityEngine.UI.Button Animation::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_5;
};

// CubeHandler
struct CubeHandler_tF4E3180843FA1F77EDD376EA590F67CFD9F0488F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CubeHandler::cube
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cube_4;
	// UnityEngine.Vector3 CubeHandler::scaleChange
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scaleChange_5;
	// System.Single CubeHandler::difference
	float ___difference_6;
	// UnityEngine.Vector3 CubeHandler::coordinate
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___coordinate_7;
	// System.Single CubeHandler::result
	float ___result_8;
};

// PlacementManager
struct PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas[] PlacementManager::canvases
	CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* ___canvases_4;
	// UnityEngine.GameObject PlacementManager::placedPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placedPrefab_5;
	// UnityEngine.UI.Button PlacementManager::confirmButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___confirmButton_6;
	// UnityEngine.Camera PlacementManager::arCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___arCamera_7;
	// System.Single PlacementManager::rotationSpeed
	float ___rotationSpeed_8;
	// UnityEngine.Vector2 PlacementManager::touchPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchPosition_9;
	// UnityEngine.XR.ARFoundation.ARRaycastManager PlacementManager::aRRaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___aRRaycastManager_10;
	// SelectionManager PlacementManager::lastSelectedObject
	SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* ___lastSelectedObject_12;
};

struct PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> PlacementManager::hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hits_11;
};

// SelectionManager
struct SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SelectionManager::<IsSelected>k__BackingField
	bool ___U3CIsSelectedU3Ek__BackingField_4;
	// UnityEngine.TextMesh SelectionManager::<OverlayText>k__BackingField
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___U3COverlayTextU3Ek__BackingField_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// unityy
struct unityy_t3A63DAC83FF92496D8532BC144F3E63611A42DCA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> unityy::hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hits_4;
	// UnityEngine.GameObject unityy::spawnableObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnableObject_5;
	// UnityEngine.Camera unityy::arCam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___arCam_6;
	// UnityEngine.GameObject unityy::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_7;
	// UnityEngine.XR.ARFoundation.ARRaycastManager unityy::aRRaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___aRRaycastManager_8;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Removed_13;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// SelectionManager[]
struct SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C  : public RuntimeArray
{
	ALIGN_FIELD (8) SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* m_Items[1];

	inline SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841  : public RuntimeArray
{
	ALIGN_FIELD (8) Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* m_Items[1];

	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;

// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean ARManager::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARManager_TryGetTouchPosition_m7904ED0662CB58D9E4EC55A74721132C9CC905E1 (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___touchPosition0, const RuntimeMethod* method) ;
// System.Boolean Vector2Extentions::PositionOverUIElement(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2Extentions_PositionOverUIElement_m46664C20A024BF2C8987C297A0F90A9D37957F51 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<SelectionManager>()
inline SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* Component_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m89205C40F433E0572A7B69422BE17AA26B72B7DB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ARManager::DisplaySelectedObject(SelectionManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_DisplaySelectedObject_mDADFBF625BDE85EC90D6962EDD6D057ECFF6261C (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* ___spawnableObject0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<SelectionManager>()
inline SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* Object_FindObjectsOfType_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_mBF707AD1CBD37486C3EB6FC5051FDA8E2FF0672B (const RuntimeMethod* method)
{
	return ((  SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// System.Void SelectionManager::set_Selected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionManager_set_Selected_m2B39DF08A91E539B1316947B904EBF29970DA06A (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ARManager::ManageLastSelectedObject(SelectionManager,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_ManageLastSelectedObject_mEEF8D0BF6C39B231A06E76062A4DB17FE2D69D80 (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* ___spawnedObject0, bool ___state1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// System.Void ARManager::SpawnPrefab(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_SpawnPrefab_mC51CE2E473A7B44B3F1BC85B285898765CE4600A (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Boolean SelectionManager::get_Selected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SelectionManager_get_Selected_m3DEBFC71A78FC68F45C908ECE00525439837316E (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<SelectionManager>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* Object_Instantiate_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_mBCEE23F2766908DD31711F4D9212FFB1C26EF926 (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* (*) (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void CubeHandler::CalculateDifference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeHandler_CalculateDifference_m1F04C637B5EA8CF76318299035F5223C8DBD35BA (CubeHandler_tF4E3180843FA1F77EDD376EA590F67CFD9F0488F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Void PlacementManager::ManageLastSelectedObject(SelectionManager,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_ManageLastSelectedObject_mD27B317AE68290F4ED3B25CFEB56CB9E4BD54BFE (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* ___lastSelectedObject0, bool ___state1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<SelectionManager>()
inline SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* GameObject_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m00A30A49C0E708B2A2ACA8D9AB9098C70A45F4C8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void PlacementManager::popup(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_popup_mF8B2687EB0920552EDA4BA938983DC6548DABCAC (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean SelectionManager::get_IsSelected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SelectionManager_get_IsSelected_m505A70B244969795660A43D322FCC1BEA0FBCF1A_inline (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, const RuntimeMethod* method) ;
// System.Void SelectionManager::set_IsSelected(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectionManager_set_IsSelected_mC65B289D10394603A29257A4ABFE43EF1BC8404B_inline (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean unityy::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool unityy_TryGetTouchPosition_m9E87F1B2A0D419AD722DC32110198EA61EAF3719 (unityy_t3A63DAC83FF92496D8532BC144F3E63611A42DCA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___touchPosition0, const RuntimeMethod* method) ;
// System.Void unityy::SpawnPrefab(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityy_SpawnPrefab_m35A63D3021D3E90CF53F329E50E8D8633102B837 (unityy_t3A63DAC83FF92496D8532BC144F3E63611A42DCA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___spawnRotation1, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
inline void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared)(__this, method);
}
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_RaycastAll_mE93CC75909438D20D17A0EF98348A064FBFEA528 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___raycastResults1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
inline int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
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
// System.Void Animation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Awake_m0BDE3C1C2BF9508A282A8EBE03AD3CF479CCE835 (Animation_tEC33195B0B2E18ABF28C90641DDB6DA92B77286E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Animation_AnimationPlay_m7D8268D32570A6E872630AACE49E7388D316637E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// button.onClick.AddListener(AnimationPlay);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___button_5;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)Animation_AnimationPlay_m7D8268D32570A6E872630AACE49E7388D316637E_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Animation::AnimationPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_AnimationPlay_m7D8268D32570A6E872630AACE49E7388D316637E (Animation_tEC33195B0B2E18ABF28C90641DDB6DA92B77286E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// canvas.GetComponent<Animator>().Play("MainMenu");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___canvas_4;
		NullCheck(L_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_1);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_1, _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, NULL);
		// }
		return;
	}
}
// System.Void Animation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation__ctor_mF61AF13A1C1D84120C487AEC2107B8CB27A44FE5 (Animation_tEC33195B0B2E18ABF28C90641DDB6DA92B77286E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ARManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_Awake_m7A4306FE51EC99D2434E368F8A2B57A11CDEF073 (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARManager_ConfirmPlace_m996712269C30631C7FCB3B1F36D8113D6CCF53DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aRRaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___aRRaycastManager_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aRRaycastManager_10), (void*)L_0);
		// confirmButton.onClick.AddListener(ConfirmPlace);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___confirmButton_11;
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)ARManager_ConfirmPlace_m996712269C30631C7FCB3B1F36D8113D6CCF53DD_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void ARManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_Start_m076359B9D8D438AB7042625E623EBE616B7FB6E3 (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DB1B6CF792E1BF1AED62392910B83816D9FC52);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnedObject = null;
		__this->___spawnedObject_9 = (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_9), (void*)(SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D*)NULL);
		// arCam = GameObject.Find("AR Camera").GetComponent<Camera>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralE3DB1B6CF792E1BF1AED62392910B83816D9FC52, NULL);
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_0, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		__this->___arCam_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arCam_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void ARManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_Update_mDD46A69CED64360F68ADEAB5E28804C5F31A4736 (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m89205C40F433E0572A7B69422BE17AA26B72B7DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_mBF707AD1CBD37486C3EB6FC5051FDA8E2FF0672B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E58DF6AC72AD5A81B8BF891A1324BD9BEE588EA);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* V_12 = NULL;
	SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* V_13 = NULL;
	int32_t V_14 = 0;
	SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* V_15 = NULL;
	bool V_16 = false;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_17;
	memset((&V_17), 0, sizeof(V_17));
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B26_0 = 0;
	{
		// if (!TryGetTouchPosition(out Vector2 touchPosition))
		bool L_0;
		L_0 = ARManager_TryGetTouchPosition_m7904ED0662CB58D9E4EC55A74721132C9CC905E1(__this, (&V_0), NULL);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		goto IL_0243;
	}

IL_0015:
	{
		// bool overlap = touchPosition.PositionOverUIElement();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		bool L_3;
		L_3 = Vector2Extentions_PositionOverUIElement_m46664C20A024BF2C8987C297A0F90A9D37957F51(L_2, NULL);
		V_1 = L_3;
		// if (overlap) return;
		bool L_4 = V_1;
		V_3 = L_4;
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// if (overlap) return;
		goto IL_0243;
	}

IL_0026:
	{
		// if (aRRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_6 = __this->___aRRaycastManager_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_8 = __this->___hits_6;
		NullCheck(L_6);
		bool L_9;
		L_9 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_6, L_7, L_8, 1, NULL);
		V_4 = L_9;
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0243;
		}
	}
	{
		// if (Input.GetTouch(0).phase == TouchPhase.Began && spawnedObject == null)
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_11;
		L_11 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_6 = L_11;
		int32_t L_12;
		L_12 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_6), NULL);
		if (L_12)
		{
			goto IL_0062;
		}
	}
	{
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_13 = __this->___spawnedObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B8_0 = ((int32_t)(L_14));
		goto IL_0063;
	}

IL_0062:
	{
		G_B8_0 = 0;
	}

IL_0063:
	{
		V_5 = (bool)G_B8_0;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0199;
		}
	}
	{
		// Ray ray = arCam.ScreenPointToRay(Input.GetTouch(0).position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___arCam_8;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_17;
		L_17 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_6 = L_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_6), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_18, NULL);
		NullCheck(L_16);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_20;
		L_20 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_16, L_19, NULL);
		V_8 = L_20;
		// if (Physics.Raycast(ray, out hit))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_21 = V_8;
		bool L_22;
		L_22 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_21, (&V_7), NULL);
		V_9 = L_22;
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_0198;
		}
	}
	{
		// if (hit.collider.gameObject.tag == "ARObject")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_24;
		L_24 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_7), NULL);
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_25, NULL);
		bool L_27;
		L_27 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_26, _stringLiteral1E58DF6AC72AD5A81B8BF891A1324BD9BEE588EA, NULL);
		V_10 = L_27;
		bool L_28 = V_10;
		if (!L_28)
		{
			goto IL_00e3;
		}
	}
	{
		// spawnedObject = hit.transform.GetComponent<SelectionManager>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_7), NULL);
		NullCheck(L_29);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_30;
		L_30 = Component_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m89205C40F433E0572A7B69422BE17AA26B72B7DB(L_29, Component_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m89205C40F433E0572A7B69422BE17AA26B72B7DB_RuntimeMethod_var);
		__this->___spawnedObject_9 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_9), (void*)L_30);
		// DisplaySelectedObject(spawnedObject);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_31 = __this->___spawnedObject_9;
		ARManager_DisplaySelectedObject_mDADFBF625BDE85EC90D6962EDD6D057ECFF6261C(__this, L_31, NULL);
	}

IL_00e3:
	{
		// if (spawnedObject != null)
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_32 = __this->___spawnedObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_11 = L_33;
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_015a;
		}
	}
	{
		// SelectionManager[] allOtherObjects = FindObjectsOfType<SelectionManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* L_35;
		L_35 = Object_FindObjectsOfType_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_mBF707AD1CBD37486C3EB6FC5051FDA8E2FF0672B(Object_FindObjectsOfType_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_mBF707AD1CBD37486C3EB6FC5051FDA8E2FF0672B_RuntimeMethod_var);
		V_12 = L_35;
		// foreach (SelectionManager placementObject in allOtherObjects)
		SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* L_36 = V_12;
		V_13 = L_36;
		V_14 = 0;
		goto IL_0141;
	}

IL_0107:
	{
		// foreach (SelectionManager placementObject in allOtherObjects)
		SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* L_37 = V_13;
		int32_t L_38 = V_14;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_15 = L_40;
		// if (placementObject != spawnedObject)
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_41 = V_15;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_42 = __this->___spawnedObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_41, L_42, NULL);
		V_16 = L_43;
		bool L_44 = V_16;
		if (!L_44)
		{
			goto IL_012f;
		}
	}
	{
		// placementObject.Selected = false;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_45 = V_15;
		NullCheck(L_45);
		SelectionManager_set_Selected_m2B39DF08A91E539B1316947B904EBF29970DA06A(L_45, (bool)0, NULL);
		goto IL_013a;
	}

IL_012f:
	{
		// placementObject.Selected = true;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_46 = V_15;
		NullCheck(L_46);
		SelectionManager_set_Selected_m2B39DF08A91E539B1316947B904EBF29970DA06A(L_46, (bool)1, NULL);
	}

IL_013a:
	{
		int32_t L_47 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0141:
	{
		// foreach (SelectionManager placementObject in allOtherObjects)
		int32_t L_48 = V_14;
		SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* L_49 = V_13;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_0107;
		}
	}
	{
		// ManageLastSelectedObject(spawnedObject, true);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_50 = __this->___spawnedObject_9;
		ARManager_ManageLastSelectedObject_mEEF8D0BF6C39B231A06E76062A4DB17FE2D69D80(__this, L_50, (bool)1, NULL);
		goto IL_0197;
	}

IL_015a:
	{
		// SpawnPrefab(hits[0].pose.position, hits[0].pose.rotation);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_51 = __this->___hits_6;
		NullCheck(L_51);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_52;
		L_52 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_51, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_17 = L_52;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_53;
		L_53 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_17), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = L_53.___position_0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_55 = __this->___hits_6;
		NullCheck(L_55);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_56;
		L_56 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_55, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_17 = L_56;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_57;
		L_57 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_17), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = L_57.___rotation_1;
		ARManager_SpawnPrefab_mC51CE2E473A7B44B3F1BC85B285898765CE4600A(__this, L_54, L_58, NULL);
	}

IL_0197:
	{
	}

IL_0198:
	{
	}

IL_0199:
	{
		// if (Input.GetTouch(0).phase == TouchPhase.Moved && spawnedObject != null)
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_59;
		L_59 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_6 = L_59;
		int32_t L_60;
		L_60 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_6), NULL);
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01b9;
		}
	}
	{
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_61 = __this->___spawnedObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_61, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B26_0 = ((int32_t)(L_62));
		goto IL_01ba;
	}

IL_01b9:
	{
		G_B26_0 = 0;
	}

IL_01ba:
	{
		V_18 = (bool)G_B26_0;
		bool L_63 = V_18;
		if (!L_63)
		{
			goto IL_0214;
		}
	}
	{
		// if (spawnedObject.Selected)
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_64 = __this->___spawnedObject_9;
		NullCheck(L_64);
		bool L_65;
		L_65 = SelectionManager_get_Selected_m3DEBFC71A78FC68F45C908ECE00525439837316E(L_64, NULL);
		V_19 = L_65;
		bool L_66 = V_19;
		if (!L_66)
		{
			goto IL_0213;
		}
	}
	{
		// isMoving = true;
		__this->___isMoving_13 = (bool)1;
		// DisplaySelectedObject(spawnedObject);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_67 = __this->___spawnedObject_9;
		ARManager_DisplaySelectedObject_mDADFBF625BDE85EC90D6962EDD6D057ECFF6261C(__this, L_67, NULL);
		// spawnedObject.transform.position = hits[0].pose.position;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_68 = __this->___spawnedObject_9;
		NullCheck(L_68);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69;
		L_69 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_68, NULL);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_70 = __this->___hits_6;
		NullCheck(L_70);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_71;
		L_71 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_70, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_17 = L_71;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_72;
		L_72 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_17), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = L_72.___position_0;
		NullCheck(L_69);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_69, L_73, NULL);
	}

IL_0213:
	{
	}

IL_0214:
	{
		// if (Input.GetTouch(0).phase == TouchPhase.Ended)
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_74;
		L_74 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_6 = L_74;
		int32_t L_75;
		L_75 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_6), NULL);
		V_20 = (bool)((((int32_t)L_75) == ((int32_t)3))? 1 : 0);
		bool L_76 = V_20;
		if (!L_76)
		{
			goto IL_0242;
		}
	}
	{
		// isMoving = false;
		__this->___isMoving_13 = (bool)0;
		// DisplaySelectedObject(spawnedObject);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_77 = __this->___spawnedObject_9;
		ARManager_DisplaySelectedObject_mDADFBF625BDE85EC90D6962EDD6D057ECFF6261C(__this, L_77, NULL);
	}

IL_0242:
	{
	}

IL_0243:
	{
		// }
		return;
	}
}
// System.Void ARManager::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_OnCollisionEnter_mC65F29C67A82A9E479A2117ABDEE094C1184BADE (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ARManager::DisplaySelectedObject(SelectionManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_DisplaySelectedObject_mDADFBF625BDE85EC90D6962EDD6D057ECFF6261C (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* ___spawnableObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral376F0114C8F1770EBB9C5F2785DE5F935AA7E9C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral946A16C6F63DECCA0CAB6C6E840FA95D31A9C237);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA4188A1482414EA846EDA98A100F34FB7A407FC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (spawnableObject == null)
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_0 = ___spawnableObject0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// gameObjectName = "none";
		V_0 = _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9;
		goto IL_0045;
	}

IL_0016:
	{
		// else if(spawnableObject.gameObject.name.Length == 0)
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_3 = ___spawnableObject0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		// gameObjectName = "object";
		V_0 = _stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18;
		goto IL_0045;
	}

IL_0037:
	{
		// gameObjectName = spawnableObject.gameObject.name;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_8 = ___spawnableObject0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		V_0 = L_10;
	}

IL_0045:
	{
		// if (isMoving)
		bool L_11 = __this->___isMoving_13;
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		// gameObjectName = "moving object";
		V_0 = _stringLiteral946A16C6F63DECCA0CAB6C6E840FA95D31A9C237;
		// textMesh.text = "currently " + gameObjectName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___textMesh_5;
		String_t* L_14 = V_0;
		String_t* L_15;
		L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral376F0114C8F1770EBB9C5F2785DE5F935AA7E9C8, L_14, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_15);
		// textMesh.enabled = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___textMesh_5;
		NullCheck(L_16);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_16, (bool)1, NULL);
		goto IL_00a3;
	}

IL_007d:
	{
		// textMesh.text = "currently selected " + gameObjectName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___textMesh_5;
		String_t* L_18 = V_0;
		String_t* L_19;
		L_19 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralDA4188A1482414EA846EDA98A100F34FB7A407FC, L_18, NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_19);
		// textMesh.enabled = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___textMesh_5;
		NullCheck(L_20);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_20, (bool)1, NULL);
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void ARManager::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_Destroy_mDDDCE574D8AC5F6C90F8F5710D08BCE4C689AAD0 (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(spawnedObject != null)
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_0 = __this->___spawnedObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// if (spawnedObject.Selected)
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_3 = __this->___spawnedObject_9;
		NullCheck(L_3);
		bool L_4;
		L_4 = SelectionManager_get_Selected_m3DEBFC71A78FC68F45C908ECE00525439837316E(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// Destroy(spawnedObject.gameObject);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_6 = __this->___spawnedObject_9;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
	}

IL_0034:
	{
	}

IL_0035:
	{
		// spawnedObject = null;
		__this->___spawnedObject_9 = (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_9), (void*)(SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D*)NULL);
		// isMoving = false;
		__this->___isMoving_13 = (bool)0;
		// DisplaySelectedObject(spawnedObject);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_8 = __this->___spawnedObject_9;
		ARManager_DisplaySelectedObject_mDADFBF625BDE85EC90D6962EDD6D057ECFF6261C(__this, L_8, NULL);
		// return;
		goto IL_0052;
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void ARManager::ConfirmPlace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_ConfirmPlace_m996712269C30631C7FCB3B1F36D8113D6CCF53DD (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (spawnedObject != null)
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_0 = __this->___spawnedObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// ManageLastSelectedObject(spawnedObject, false);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_3 = __this->___spawnedObject_9;
		ARManager_ManageLastSelectedObject_mEEF8D0BF6C39B231A06E76062A4DB17FE2D69D80(__this, L_3, (bool)0, NULL);
		// spawnedObject = null;
		__this->___spawnedObject_9 = (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_9), (void*)(SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D*)NULL);
		// isMoving = false;
		__this->___isMoving_13 = (bool)0;
		// DisplaySelectedObject(spawnedObject);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_4 = __this->___spawnedObject_9;
		ARManager_DisplaySelectedObject_mDADFBF625BDE85EC90D6962EDD6D057ECFF6261C(__this, L_4, NULL);
	}

IL_003c:
	{
		// return;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void ARManager::ManageLastSelectedObject(SelectionManager,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_ManageLastSelectedObject_mEEF8D0BF6C39B231A06E76062A4DB17FE2D69D80 (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* ___spawnedObject0, bool ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// GameObject child = spawnedObject.transform.Find("Cube").gameObject;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_0 = ___spawnedObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		V_0 = L_3;
		// if (child == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		// GameObject children = spawnedObject.transform.GetChild(0).gameObject;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_7 = ___spawnedObject0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, 0, NULL);
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		V_2 = L_10;
		// GameObject finalChild = children.transform.Find("Cube").gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_2;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_12, _stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928, NULL);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		V_3 = L_14;
		// finalChild = child;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		V_3 = L_15;
	}

IL_004e:
	{
		// spawnedObject.Selected = state;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_16 = ___spawnedObject0;
		bool L_17 = ___state1;
		NullCheck(L_16);
		SelectionManager_set_Selected_m2B39DF08A91E539B1316947B904EBF29970DA06A(L_16, L_17, NULL);
		// isMoving = state;
		bool L_18 = ___state1;
		__this->___isMoving_13 = L_18;
		// child.SetActive(state);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_0;
		bool L_20 = ___state1;
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, L_20, NULL);
		// }
		return;
	}
}
// System.Void ARManager::SpawnPrefab(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_SpawnPrefab_mC51CE2E473A7B44B3F1BC85B285898765CE4600A (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m89205C40F433E0572A7B69422BE17AA26B72B7DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_mBCEE23F2766908DD31711F4D9212FFB1C26EF926_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnedObject = Instantiate(objectToSpawn, position, rotation).GetComponent<SelectionManager>();
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_0 = __this->___objectToSpawn_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rotation1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_3;
		L_3 = Object_Instantiate_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_mBCEE23F2766908DD31711F4D9212FFB1C26EF926(L_0, L_1, L_2, Object_Instantiate_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_mBCEE23F2766908DD31711F4D9212FFB1C26EF926_RuntimeMethod_var);
		NullCheck(L_3);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_4;
		L_4 = Component_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m89205C40F433E0572A7B69422BE17AA26B72B7DB(L_3, Component_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m89205C40F433E0572A7B69422BE17AA26B72B7DB_RuntimeMethod_var);
		__this->___spawnedObject_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_9), (void*)L_4);
		// spawnedObject = null;
		__this->___spawnedObject_9 = (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_9), (void*)(SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D*)NULL);
		// objectToSpawn = null;
		__this->___objectToSpawn_7 = (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectToSpawn_7), (void*)(SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D*)NULL);
		// DisplaySelectedObject(spawnedObject);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_5 = __this->___spawnedObject_9;
		ARManager_DisplaySelectedObject_mDADFBF625BDE85EC90D6962EDD6D057ECFF6261C(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Boolean ARManager::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARManager_TryGetTouchPosition_m7904ED0662CB58D9E4EC55A74721132C9CC905E1 (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___touchPosition0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// touchPosition = Input.GetTouch(0).position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = ___touchPosition0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_3;
		L_3 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_1 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_2 = L_4;
		// return true;
		V_2 = (bool)1;
		goto IL_0031;
	}

IL_0026:
	{
		// touchPosition = default;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___touchPosition0;
		il2cpp_codegen_initobj(L_5, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// return false;
		V_2 = (bool)0;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Void ARManager::SelectPrefab(SelectionManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_SelectPrefab_mDF46619627532CA35E6F484067BA3216659D6A73 (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* ___prefabType0, const RuntimeMethod* method) 
{
	{
		// objectToSpawn = prefabType;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_0 = ___prefabType0;
		__this->___objectToSpawn_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectToSpawn_7), (void*)L_0);
		// DisplaySelectedObject(objectToSpawn);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_1 = __this->___objectToSpawn_7;
		ARManager_DisplaySelectedObject_mDADFBF625BDE85EC90D6962EDD6D057ECFF6261C(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARManager::popup(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_popup_mFFCAF84A851EBAE6933C027DA2AABE3B25FE6AFD (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* V_0 = NULL;
	int32_t V_1 = 0;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t G_B4_0 = 0;
	{
		// foreach (Canvas canvas in canvases)
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_0 = __this->___canvases_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_005c;
	}

IL_000d:
	{
		// foreach (Canvas canvas in canvases)
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (canvas.name == name || canvas.gameObject.layer.ToString() == name)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		String_t* L_7 = ___name0;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_9 = V_2;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_10, NULL);
		V_4 = L_11;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_13 = ___name0;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_12, L_13, NULL);
		G_B4_0 = ((int32_t)(L_14));
		goto IL_003d;
	}

IL_003c:
	{
		G_B4_0 = 1;
	}

IL_003d:
	{
		V_3 = (bool)G_B4_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_004d;
		}
	}
	{
		// canvas.enabled = true;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_16 = V_2;
		NullCheck(L_16);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_16, (bool)1, NULL);
		goto IL_0057;
	}

IL_004d:
	{
		// canvas.enabled = false;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_17 = V_2;
		NullCheck(L_17);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_17, (bool)0, NULL);
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005c:
	{
		// foreach (Canvas canvas in canvases)
		int32_t L_19 = V_1;
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ARManager::RotateXplus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_RotateXplus_m3E2C7759221DAE95E5A9F53C80EF78F5CBE7DA27 (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (spawnedObject != null)
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_0 = __this->___spawnedObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		// if (!spawnedObject.Selected) return;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_3 = __this->___spawnedObject_9;
		NullCheck(L_3);
		bool L_4;
		L_4 = SelectionManager_get_Selected_m3DEBFC71A78FC68F45C908ECE00525439837316E(L_3, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// if (!spawnedObject.Selected) return;
		goto IL_004b;
	}

IL_0026:
	{
		// spawnedObject.transform.Rotate(Vector3.down, rotationSpeed * Time.deltaTime);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_6 = __this->___spawnedObject_9;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		float L_9 = __this->___rotationSpeed_12;
		float L_10;
		L_10 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_7);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_7, L_8, ((float)il2cpp_codegen_multiply(L_9, L_10)), NULL);
	}

IL_0049:
	{
		// return;
		goto IL_004b;
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void ARManager::RotateXminus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_RotateXminus_m71C1FBF26E0B118DF45D777B10B8578CD3859E85 (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (spawnedObject != null)
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_0 = __this->___spawnedObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		// if (!spawnedObject.Selected) return;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_3 = __this->___spawnedObject_9;
		NullCheck(L_3);
		bool L_4;
		L_4 = SelectionManager_get_Selected_m3DEBFC71A78FC68F45C908ECE00525439837316E(L_3, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// if (!spawnedObject.Selected) return;
		goto IL_004b;
	}

IL_0026:
	{
		// spawnedObject.transform.Rotate(Vector3.up, rotationSpeed * Time.deltaTime);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_6 = __this->___spawnedObject_9;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_9 = __this->___rotationSpeed_12;
		float L_10;
		L_10 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_7);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_7, L_8, ((float)il2cpp_codegen_multiply(L_9, L_10)), NULL);
	}

IL_0049:
	{
		// return;
		goto IL_004b;
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void ARManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager__ctor_m53D041B8379A885E4596A2980F29676BC9BC5931 (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<ARRaycastHit> hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		__this->___hits_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hits_6), (void*)L_0);
		// private float rotationSpeed = 100f;
		__this->___rotationSpeed_12 = (100.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CubeHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeHandler_Awake_mFA3ED7A92CF66DA4B87EE93F7C3AE58717251345 (CubeHandler_tF4E3180843FA1F77EDD376EA590F67CFD9F0488F* __this, const RuntimeMethod* method) 
{
	{
		// coordinate = cube.transform.localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cube_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		__this->___coordinate_7 = L_2;
		// }
		return;
	}
}
// System.Void CubeHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeHandler_Update_m0583D6A8BC18506951F8EE6E8F1B82A500348279 (CubeHandler_tF4E3180843FA1F77EDD376EA590F67CFD9F0488F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// cube.transform.localScale += scaleChange;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cube_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___scaleChange_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_4, NULL);
		NullCheck(L_2);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_2, L_5, NULL);
		// CalculateDifference();
		CubeHandler_CalculateDifference_m1F04C637B5EA8CF76318299035F5223C8DBD35BA(__this, NULL);
		// if (Math.Abs(result) > difference)
		float L_6 = __this->___result_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_7;
		L_7 = fabsf(L_6);
		float L_8 = __this->___difference_6;
		V_0 = (bool)((((float)L_7) > ((float)L_8))? 1 : 0);
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		// scaleChange = -scaleChange;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___scaleChange_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_10, NULL);
		__this->___scaleChange_5 = L_11;
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void CubeHandler::CalculateDifference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeHandler_CalculateDifference_m1F04C637B5EA8CF76318299035F5223C8DBD35BA (CubeHandler_tF4E3180843FA1F77EDD376EA590F67CFD9F0488F* __this, const RuntimeMethod* method) 
{
	{
		// result = cube.transform.localScale.y - coordinate.y;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cube_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___coordinate_7);
		float L_5 = L_4->___y_3;
		__this->___result_8 = ((float)il2cpp_codegen_subtract(L_3, L_5));
		// }
		return;
	}
}
// System.Void CubeHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeHandler__ctor_m90F2DE5D7A84A64F12150D1CF04BFC7F3DEB2413 (CubeHandler_tF4E3180843FA1F77EDD376EA590F67CFD9F0488F* __this, const RuntimeMethod* method) 
{
	{
		// private float result = 0;
		__this->___result_8 = (0.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlacementManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_Awake_m3468EB272087B3C19E784D3D481BFB011288361D (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlacementManager_ConfirmPlace_m6572FFE0398F45142B9AD739D62CD16C3FF530A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aRRaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___aRRaycastManager_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aRRaycastManager_10), (void*)L_0);
		// confirmButton.onClick.AddListener(ConfirmPlace);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___confirmButton_6;
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)PlacementManager_ConfirmPlace_m6572FFE0398F45142B9AD739D62CD16C3FF530A2_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// placedPrefab = null;
		__this->___placedPrefab_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placedPrefab_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// lastSelectedObject = null;
		__this->___lastSelectedObject_12 = (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastSelectedObject_12), (void*)(SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D*)NULL);
		// }
		return;
	}
}
// System.Void PlacementManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_Update_mE2F96F79FBB7698C72DF9B4013577B201E14195D (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m89205C40F433E0572A7B69422BE17AA26B72B7DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m00A30A49C0E708B2A2ACA8D9AB9098C70A45F4C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_mBF707AD1CBD37486C3EB6FC5051FDA8E2FF0672B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* V_10 = NULL;
	SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* V_11 = NULL;
	int32_t V_12 = 0;
	SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_16;
	memset((&V_16), 0, sizeof(V_16));
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_17;
	memset((&V_17), 0, sizeof(V_17));
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool V_22 = false;
	bool V_23 = false;
	int32_t G_B24_0 = 0;
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_023c;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_1 = L_2;
		// touchPosition = touch.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		__this->___touchPosition_9 = L_3;
		// bool isOverUI = touchPosition.PositionOverUIElement();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___touchPosition_9;
		bool L_5;
		L_5 = Vector2Extentions_PositionOverUIElement_m46664C20A024BF2C8987C297A0F90A9D37957F51(L_4, NULL);
		V_2 = L_5;
		// if (isOverUI) return;
		bool L_6 = V_2;
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		// if (isOverUI) return;
		goto IL_023c;
	}

IL_003b:
	{
		// if (touch.phase == TouchPhase.Began)
		int32_t L_8;
		L_8 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0179;
		}
	}
	{
		// Ray ray = arCamera.ScreenPointToRay(Input.GetTouch(0).position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = __this->___arCamera_7;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_11;
		L_11 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_7 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_7), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_12, NULL);
		NullCheck(L_10);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_14;
		L_14 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_10, L_13, NULL);
		V_6 = L_14;
		// if (Physics.Raycast(ray, out hit))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_15 = V_6;
		bool L_16;
		L_16 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_15, (&V_5), NULL);
		V_8 = L_16;
		bool L_17 = V_8;
		if (!L_17)
		{
			goto IL_010b;
		}
	}
	{
		// lastSelectedObject = hit.transform.GetComponent<SelectionManager>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_5), NULL);
		NullCheck(L_18);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_19;
		L_19 = Component_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m89205C40F433E0572A7B69422BE17AA26B72B7DB(L_18, Component_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m89205C40F433E0572A7B69422BE17AA26B72B7DB_RuntimeMethod_var);
		__this->___lastSelectedObject_12 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastSelectedObject_12), (void*)L_19);
		// if (lastSelectedObject != null)
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_20 = __this->___lastSelectedObject_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_9 = L_21;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_010a;
		}
	}
	{
		// SelectionManager[] allOtherObjects = FindObjectsOfType<SelectionManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* L_23;
		L_23 = Object_FindObjectsOfType_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_mBF707AD1CBD37486C3EB6FC5051FDA8E2FF0672B(Object_FindObjectsOfType_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_mBF707AD1CBD37486C3EB6FC5051FDA8E2FF0672B_RuntimeMethod_var);
		V_10 = L_23;
		// foreach (SelectionManager placementObject in allOtherObjects)
		SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* L_24 = V_10;
		V_11 = L_24;
		V_12 = 0;
		goto IL_00f3;
	}

IL_00b9:
	{
		// foreach (SelectionManager placementObject in allOtherObjects)
		SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* L_25 = V_11;
		int32_t L_26 = V_12;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_13 = L_28;
		// if (placementObject != lastSelectedObject)
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_29 = V_13;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_30 = __this->___lastSelectedObject_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_29, L_30, NULL);
		V_14 = L_31;
		bool L_32 = V_14;
		if (!L_32)
		{
			goto IL_00e1;
		}
	}
	{
		// placementObject.Selected = false;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_33 = V_13;
		NullCheck(L_33);
		SelectionManager_set_Selected_m2B39DF08A91E539B1316947B904EBF29970DA06A(L_33, (bool)0, NULL);
		goto IL_00ec;
	}

IL_00e1:
	{
		// placementObject.Selected = true;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_34 = V_13;
		NullCheck(L_34);
		SelectionManager_set_Selected_m2B39DF08A91E539B1316947B904EBF29970DA06A(L_34, (bool)1, NULL);
	}

IL_00ec:
	{
		int32_t L_35 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00f3:
	{
		// foreach (SelectionManager placementObject in allOtherObjects)
		int32_t L_36 = V_12;
		SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* L_37 = V_11;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_00b9;
		}
	}
	{
		// ManageLastSelectedObject(lastSelectedObject, true);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_38 = __this->___lastSelectedObject_12;
		PlacementManager_ManageLastSelectedObject_mD27B317AE68290F4ED3B25CFEB56CB9E4BD54BFE(__this, L_38, (bool)1, NULL);
	}

IL_010a:
	{
	}

IL_010b:
	{
		// if (aRRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_39 = __this->___aRRaycastManager_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = __this->___touchPosition_9;
		il2cpp_codegen_runtime_class_init_inline(PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_41 = ((PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_StaticFields*)il2cpp_codegen_static_fields_for(PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_il2cpp_TypeInfo_var))->___hits_11;
		NullCheck(L_39);
		bool L_42;
		L_42 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_39, L_40, L_41, 1, NULL);
		V_15 = L_42;
		bool L_43 = V_15;
		if (!L_43)
		{
			goto IL_0178;
		}
	}
	{
		// Pose hitPose = hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_44 = ((PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_StaticFields*)il2cpp_codegen_static_fields_for(PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_il2cpp_TypeInfo_var))->___hits_11;
		NullCheck(L_44);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_45;
		L_45 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_44, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_17 = L_45;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_46;
		L_46 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_17), NULL);
		V_16 = L_46;
		// if (lastSelectedObject == null)
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_47 = __this->___lastSelectedObject_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_47, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_18 = L_48;
		bool L_49 = V_18;
		if (!L_49)
		{
			goto IL_0177;
		}
	}
	{
		// lastSelectedObject = Instantiate(placedPrefab, hitPose.position, hitPose.rotation).GetComponent<SelectionManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___placedPrefab_5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_51 = V_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = L_51.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_53 = V_16;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = L_53.___rotation_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_50, L_52, L_54, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_55);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_56;
		L_56 = GameObject_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m00A30A49C0E708B2A2ACA8D9AB9098C70A45F4C8(L_55, GameObject_GetComponent_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_m00A30A49C0E708B2A2ACA8D9AB9098C70A45F4C8_RuntimeMethod_var);
		__this->___lastSelectedObject_12 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastSelectedObject_12), (void*)L_56);
	}

IL_0177:
	{
	}

IL_0178:
	{
	}

IL_0179:
	{
		// if (touch.phase == TouchPhase.Moved)
		int32_t L_57;
		L_57 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		V_19 = (bool)((((int32_t)L_57) == ((int32_t)1))? 1 : 0);
		bool L_58 = V_19;
		if (!L_58)
		{
			goto IL_0222;
		}
	}
	{
		// if (aRRaycastManager.Raycast(touchPosition, hits, TrackableType.Planes))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_59 = __this->___aRRaycastManager_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = __this->___touchPosition_9;
		il2cpp_codegen_runtime_class_init_inline(PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_61 = ((PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_StaticFields*)il2cpp_codegen_static_fields_for(PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_il2cpp_TypeInfo_var))->___hits_11;
		NullCheck(L_59);
		bool L_62;
		L_62 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_59, L_60, L_61, ((int32_t)15), NULL);
		V_20 = L_62;
		bool L_63 = V_20;
		if (!L_63)
		{
			goto IL_0221;
		}
	}
	{
		// Pose hitPose = hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_64 = ((PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_StaticFields*)il2cpp_codegen_static_fields_for(PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_il2cpp_TypeInfo_var))->___hits_11;
		NullCheck(L_64);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_65;
		L_65 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_64, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_17 = L_65;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_66;
		L_66 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_17), NULL);
		V_21 = L_66;
		// if (lastSelectedObject != null && lastSelectedObject.Selected)
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_67 = __this->___lastSelectedObject_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_67, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_68)
		{
			goto IL_01dd;
		}
	}
	{
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_69 = __this->___lastSelectedObject_12;
		NullCheck(L_69);
		bool L_70;
		L_70 = SelectionManager_get_Selected_m3DEBFC71A78FC68F45C908ECE00525439837316E(L_69, NULL);
		G_B24_0 = ((int32_t)(L_70));
		goto IL_01de;
	}

IL_01dd:
	{
		G_B24_0 = 0;
	}

IL_01de:
	{
		V_22 = (bool)G_B24_0;
		bool L_71 = V_22;
		if (!L_71)
		{
			goto IL_0220;
		}
	}
	{
		// lastSelectedObject.transform.parent.position = hitPose.position;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_72 = __this->___lastSelectedObject_12;
		NullCheck(L_72);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_72, NULL);
		NullCheck(L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_73, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_75 = V_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		NullCheck(L_74);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_74, L_76, NULL);
		// lastSelectedObject.transform.parent.rotation = hitPose.rotation;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_77 = __this->___lastSelectedObject_12;
		NullCheck(L_77);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_77, NULL);
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_78, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_80 = V_21;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_81 = L_80.___rotation_1;
		NullCheck(L_79);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_79, L_81, NULL);
	}

IL_0220:
	{
	}

IL_0221:
	{
	}

IL_0222:
	{
		// if (touch.phase == TouchPhase.Moved)
		int32_t L_82;
		L_82 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		V_23 = (bool)((((int32_t)L_82) == ((int32_t)1))? 1 : 0);
		bool L_83 = V_23;
		if (!L_83)
		{
			goto IL_023b;
		}
	}
	{
		// placedPrefab = null;
		__this->___placedPrefab_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placedPrefab_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_023b:
	{
	}

IL_023c:
	{
		// }
		return;
	}
}
// System.Void PlacementManager::ManageLastSelectedObject(SelectionManager,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_ManageLastSelectedObject_mD27B317AE68290F4ED3B25CFEB56CB9E4BD54BFE (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* ___lastSelectedObject0, bool ___state1, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject child = lastSelectedObject.transform.GetChild(0).gameObject;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_0 = ___lastSelectedObject0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 0, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		V_0 = L_3;
		// child.SetActive(state);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		bool L_5 = ___state1;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void PlacementManager::ChangeSelectedObject(SelectionManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_ChangeSelectedObject_m24D25B2D86FE40E53A1BB89CC354194BE70DF3B6 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* ___selected0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_mBF707AD1CBD37486C3EB6FC5051FDA8E2FF0672B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* V_0 = NULL;
	SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* V_1 = NULL;
	int32_t V_2 = 0;
	SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* V_3 = NULL;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_4 = NULL;
	bool V_5 = false;
	{
		// SelectionManager[] allOtherObjects = FindObjectsOfType<SelectionManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* L_0;
		L_0 = Object_FindObjectsOfType_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_mBF707AD1CBD37486C3EB6FC5051FDA8E2FF0672B(Object_FindObjectsOfType_TisSelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D_mBF707AD1CBD37486C3EB6FC5051FDA8E2FF0672B_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (SelectionManager current in allOtherObjects)
		SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* L_1 = V_0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0067;
	}

IL_000e:
	{
		// foreach (SelectionManager current in allOtherObjects)
		SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// MeshRenderer meshRenderer = current.GetComponent<MeshRenderer>();
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_6 = V_3;
		NullCheck(L_6);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_7;
		L_7 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(L_6, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		V_4 = L_7;
		// if (selected != current)
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_8 = ___selected0;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_9 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, L_9, NULL);
		V_5 = L_10;
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0046;
		}
	}
	{
		// current.Selected = false;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_12 = V_3;
		NullCheck(L_12);
		SelectionManager_set_Selected_m2B39DF08A91E539B1316947B904EBF29970DA06A(L_12, (bool)0, NULL);
		// meshRenderer.material.color = Color.red;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_13 = V_4;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_13, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		NullCheck(L_14);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_14, L_15, NULL);
		goto IL_0062;
	}

IL_0046:
	{
		// current.Selected = true;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_16 = V_3;
		NullCheck(L_16);
		SelectionManager_set_Selected_m2B39DF08A91E539B1316947B904EBF29970DA06A(L_16, (bool)1, NULL);
		// meshRenderer.material.color = Color.white;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_17 = V_4;
		NullCheck(L_17);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18;
		L_18 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_17, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		NullCheck(L_18);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_18, L_19, NULL);
	}

IL_0062:
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0067:
	{
		// foreach (SelectionManager current in allOtherObjects)
		int32_t L_21 = V_2;
		SelectionManagerU5BU5D_t739B1318CB0E85494D2CCE2066713609FDB6BC8C* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PlacementManager::ConfirmPlace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_ConfirmPlace_m6572FFE0398F45142B9AD739D62CD16C3FF530A2 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (placedPrefab != null && lastSelectedObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___placedPrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_2 = __this->___lastSelectedObject_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0062;
		}
	}
	{
		// ManageLastSelectedObject(lastSelectedObject, false);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_5 = __this->___lastSelectedObject_12;
		PlacementManager_ManageLastSelectedObject_mD27B317AE68290F4ED3B25CFEB56CB9E4BD54BFE(__this, L_5, (bool)0, NULL);
		// string layerNumber = placedPrefab.layer.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___placedPrefab_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_6, NULL);
		V_2 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		V_1 = L_8;
		// lastSelectedObject.Selected = false;
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_9 = __this->___lastSelectedObject_12;
		NullCheck(L_9);
		SelectionManager_set_Selected_m2B39DF08A91E539B1316947B904EBF29970DA06A(L_9, (bool)0, NULL);
		// lastSelectedObject = null;
		__this->___lastSelectedObject_12 = (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastSelectedObject_12), (void*)(SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D*)NULL);
		// popup(layerNumber);
		String_t* L_10 = V_1;
		PlacementManager_popup_mF8B2687EB0920552EDA4BA938983DC6548DABCAC(__this, L_10, NULL);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void PlacementManager::SetPrefabType(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_SetPrefabType_m0635D501DD8187B44D3341985C3A0478EAAF9012 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB71620C733E44991BE845B6E0C4D9177EE70446D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// placedPrefab = prefabType;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___prefabType0;
		__this->___placedPrefab_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placedPrefab_5), (void*)L_0);
		// Debug.Log("selected");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralB71620C733E44991BE845B6E0C4D9177EE70446D, NULL);
		// }
		return;
	}
}
// System.Void PlacementManager::popup(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_popup_mF8B2687EB0920552EDA4BA938983DC6548DABCAC (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* V_0 = NULL;
	int32_t V_1 = 0;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t G_B4_0 = 0;
	{
		// foreach (Canvas canvas in canvases)
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_0 = __this->___canvases_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_005c;
	}

IL_000d:
	{
		// foreach (Canvas canvas in canvases)
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (canvas.name == name || canvas.gameObject.layer.ToString() == name)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		String_t* L_7 = ___name0;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_9 = V_2;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_10, NULL);
		V_4 = L_11;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_13 = ___name0;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_12, L_13, NULL);
		G_B4_0 = ((int32_t)(L_14));
		goto IL_003d;
	}

IL_003c:
	{
		G_B4_0 = 1;
	}

IL_003d:
	{
		V_3 = (bool)G_B4_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_004d;
		}
	}
	{
		// canvas.enabled = true;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_16 = V_2;
		NullCheck(L_16);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_16, (bool)1, NULL);
		goto IL_0057;
	}

IL_004d:
	{
		// canvas.enabled = false;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_17 = V_2;
		NullCheck(L_17);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_17, (bool)0, NULL);
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005c:
	{
		// foreach (Canvas canvas in canvases)
		int32_t L_19 = V_1;
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PlacementManager::RotateXplus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_RotateXplus_mFA17E11F803558AB7E1DD5692E7F69363F5C6134 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (lastSelectedObject.Selected && placedPrefab != null)
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_0 = __this->___lastSelectedObject_12;
		NullCheck(L_0);
		bool L_1;
		L_1 = SelectionManager_get_Selected_m3DEBFC71A78FC68F45C908ECE00525439837316E(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___placedPrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// lastSelectedObject.transform.Rotate(Vector3.down, rotationSpeed * Time.deltaTime);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_5 = __this->___lastSelectedObject_12;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		float L_8 = __this->___rotationSpeed_8;
		float L_9;
		L_9 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_6);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_6, L_7, ((float)il2cpp_codegen_multiply(L_8, L_9)), NULL);
	}

IL_0045:
	{
		// return;
		goto IL_0047;
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void PlacementManager::RotateXminus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager_RotateXminus_mD642DDB2F2A0090BA7AC53939E2ABBE6E64EBD1C (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (lastSelectedObject.Selected && placedPrefab != null)
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_0 = __this->___lastSelectedObject_12;
		NullCheck(L_0);
		bool L_1;
		L_1 = SelectionManager_get_Selected_m3DEBFC71A78FC68F45C908ECE00525439837316E(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___placedPrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// lastSelectedObject.transform.Rotate(Vector3.up, rotationSpeed * Time.deltaTime);
		SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* L_5 = __this->___lastSelectedObject_12;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_8 = __this->___rotationSpeed_8;
		float L_9;
		L_9 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_6);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_6, L_7, ((float)il2cpp_codegen_multiply(L_8, L_9)), NULL);
	}

IL_0045:
	{
		// return;
		goto IL_0047;
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void PlacementManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager__ctor_mD9CB28CCE5FC117220871AE96FB05439A48912C1 (PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD* __this, const RuntimeMethod* method) 
{
	{
		// private float rotationSpeed = 10f;
		__this->___rotationSpeed_8 = (10.0f);
		// private Vector2 touchPosition = default;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___touchPosition_9);
		il2cpp_codegen_initobj(L_0, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void PlacementManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementManager__cctor_m88F6ABB96BB741E1791D53727419E087552728E1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<ARRaycastHit> hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_StaticFields*)il2cpp_codegen_static_fields_for(PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_il2cpp_TypeInfo_var))->___hits_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_StaticFields*)il2cpp_codegen_static_fields_for(PlacementManager_tDC817585D405EDA5E954DCA154E5ADB32CA664CD_il2cpp_TypeInfo_var))->___hits_11), (void*)L_0);
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
// System.Boolean SelectionManager::get_IsSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SelectionManager_get_IsSelected_m505A70B244969795660A43D322FCC1BEA0FBCF1A (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, const RuntimeMethod* method) 
{
	{
		// private bool IsSelected { get; set; }
		bool L_0 = __this->___U3CIsSelectedU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SelectionManager::set_IsSelected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionManager_set_IsSelected_mC65B289D10394603A29257A4ABFE43EF1BC8404B (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private bool IsSelected { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsSelectedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean SelectionManager::get_Selected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SelectionManager_get_Selected_m3DEBFC71A78FC68F45C908ECE00525439837316E (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return this.IsSelected;
		bool L_0;
		L_0 = SelectionManager_get_IsSelected_m505A70B244969795660A43D322FCC1BEA0FBCF1A_inline(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void SelectionManager::set_Selected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionManager_set_Selected_m2B39DF08A91E539B1316947B904EBF29970DA06A (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// IsSelected = value;
		bool L_0 = ___value0;
		SelectionManager_set_IsSelected_mC65B289D10394603A29257A4ABFE43EF1BC8404B_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// UnityEngine.TextMesh SelectionManager::get_OverlayText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* SelectionManager_get_OverlayText_m3C7D9A6BAAD92963C7F5BC6ABA77B00FA96E244D (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, const RuntimeMethod* method) 
{
	{
		// private TextMesh OverlayText { get; set; }
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_0 = __this->___U3COverlayTextU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SelectionManager::set_OverlayText(UnityEngine.TextMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionManager_set_OverlayText_m77274C2C8A2D527785194E0459E31E392C81EF19 (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___value0, const RuntimeMethod* method) 
{
	{
		// private TextMesh OverlayText { get; set; }
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_0 = ___value0;
		__this->___U3COverlayTextU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COverlayTextU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void SelectionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionManager__ctor_mB63C19EF82E0D6901A11D7794718430F86DA8E44 (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void unityy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityy_Awake_m11FE0D2DD87E530D459FC14FDADA023D96E43EBA (unityy_t3A63DAC83FF92496D8532BC144F3E63611A42DCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aRRaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___aRRaycastManager_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aRRaycastManager_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void unityy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityy_Start_m7A7A218ED4D5861BE69B272FC8E7E0D3D312951B (unityy_t3A63DAC83FF92496D8532BC144F3E63611A42DCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DB1B6CF792E1BF1AED62392910B83816D9FC52);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnedObject = null;
		__this->___spawnedObject_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// arCam = GameObject.Find("AR Camera").GetComponent<Camera>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralE3DB1B6CF792E1BF1AED62392910B83816D9FC52, NULL);
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_0, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		__this->___arCam_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arCam_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void unityy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityy_Update_mA8D6F9571FEE67563EAAB40BDD78BA7E51CD0B2B (unityy_t3A63DAC83FF92496D8532BC144F3E63611A42DCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral987703431C77C5E98624964EF0E5B726F46C7E4F);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B16_0 = 0;
	{
		// if (!TryGetTouchPosition(out Vector2 touchPosition))
		bool L_0;
		L_0 = unityy_TryGetTouchPosition_m9E87F1B2A0D419AD722DC32110198EA61EAF3719(__this, (&V_0), NULL);
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		goto IL_017e;
	}

IL_0015:
	{
		// Ray ray = arCam.ScreenPointToRay(Input.GetTouch(0).position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___arCam_6;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_3;
		L_3 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_4 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_4), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		NullCheck(L_2);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_6;
		L_6 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_2, L_5, NULL);
		V_2 = L_6;
		// if (aRRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_7 = __this->___aRRaycastManager_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_9 = __this->___hits_4;
		NullCheck(L_7);
		bool L_10;
		L_10 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_7, L_8, L_9, 1, NULL);
		V_5 = L_10;
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_017e;
		}
	}
	{
		// if (Input.GetTouch(0).phase == TouchPhase.Began && spawnedObject == null)
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_12;
		L_12 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_4 = L_12;
		int32_t L_13;
		L_13 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_4), NULL);
		if (L_13)
		{
			goto IL_0071;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___spawnedObject_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0072;
	}

IL_0071:
	{
		G_B6_0 = 0;
	}

IL_0072:
	{
		V_6 = (bool)G_B6_0;
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_0101;
		}
	}
	{
		// if (Physics.Raycast(ray, out hit))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_17 = V_2;
		bool L_18;
		L_18 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_17, (&V_1), NULL);
		V_7 = L_18;
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_0100;
		}
	}
	{
		// if (hit.collider.gameObject.tag == "Spawnable")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_20;
		L_20 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_21, NULL);
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral987703431C77C5E98624964EF0E5B726F46C7E4F, NULL);
		V_8 = L_23;
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_00c2;
		}
	}
	{
		// spawnedObject = hit.collider.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_25;
		L_25 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		__this->___spawnedObject_7 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_7), (void*)L_26);
		goto IL_00ff;
	}

IL_00c2:
	{
		// SpawnPrefab(hits[0].pose.position, hits[0].pose.rotation);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_27 = __this->___hits_4;
		NullCheck(L_27);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_28;
		L_28 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_27, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_9 = L_28;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_29;
		L_29 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_9), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_31 = __this->___hits_4;
		NullCheck(L_31);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_32;
		L_32 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_31, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_9 = L_32;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_33;
		L_33 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_9), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = L_33.___rotation_1;
		unityy_SpawnPrefab_m35A63D3021D3E90CF53F329E50E8D8633102B837(__this, L_30, L_34, NULL);
	}

IL_00ff:
	{
	}

IL_0100:
	{
	}

IL_0101:
	{
		// if (Input.GetTouch(0).phase == TouchPhase.Moved && spawnedObject != null)
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_35;
		L_35 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_4 = L_35;
		int32_t L_36;
		L_36 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_4), NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)1))))
		{
			goto IL_0121;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___spawnedObject_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_37, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B16_0 = ((int32_t)(L_38));
		goto IL_0122;
	}

IL_0121:
	{
		G_B16_0 = 0;
	}

IL_0122:
	{
		V_10 = (bool)G_B16_0;
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_0155;
		}
	}
	{
		// spawnedObject.transform.position = hits[0].pose.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___spawnedObject_7;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_40, NULL);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_42 = __this->___hits_4;
		NullCheck(L_42);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_43;
		L_43 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_42, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_9 = L_43;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_44;
		L_44 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_9), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = L_44.___position_0;
		NullCheck(L_41);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_41, L_45, NULL);
	}

IL_0155:
	{
		// if (Input.GetTouch(0).phase == TouchPhase.Ended)
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_46;
		L_46 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_4 = L_46;
		int32_t L_47;
		L_47 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_4), NULL);
		V_11 = (bool)((((int32_t)L_47) == ((int32_t)3))? 1 : 0);
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_017d;
		}
	}
	{
		// spawnedObject = null;
		__this->___spawnedObject_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// spawnableObject = null;
		__this->___spawnableObject_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnableObject_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_017d:
	{
	}

IL_017e:
	{
		// }
		return;
	}
}
// System.Void unityy::MananageObjectPositionRotation(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityy_MananageObjectPositionRotation_mC57B372463DAA3F0A3D3768CE8D3CA724B0C180B (unityy_t3A63DAC83FF92496D8532BC144F3E63611A42DCA* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void unityy::SetPrefabType(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityy_SetPrefabType_m5B55E51CEAFA60D03FDD5E118C4C82CB9B87A3FC (unityy_t3A63DAC83FF92496D8532BC144F3E63611A42DCA* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB99532D5CEFED04D2DF63758274BBF69C89ACAC3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnableObject = prefabType;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___prefabType0;
		__this->___spawnableObject_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnableObject_5), (void*)L_0);
		// Debug.Log("prirazeno");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralB99532D5CEFED04D2DF63758274BBF69C89ACAC3, NULL);
		// }
		return;
	}
}
// System.Void unityy::SpawnPrefab(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityy_SpawnPrefab_m35A63D3021D3E90CF53F329E50E8D8633102B837 (unityy_t3A63DAC83FF92496D8532BC144F3E63611A42DCA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___spawnRotation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnedObject = Instantiate(spawnableObject, spawnPosition, spawnRotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___spawnableObject_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___spawnPosition0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___spawnRotation1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_1, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		__this->___spawnedObject_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_7), (void*)L_3);
		// }
		return;
	}
}
// System.Void unityy::RotateXplus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityy_RotateXplus_m8E4C864DEAF88539386AA184234878794A5195DE (unityy_t3A63DAC83FF92496D8532BC144F3E63611A42DCA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void unityy::RotateXminus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityy_RotateXminus_mE6E8E743492237CBC7C312BCBFDBEA7FC58749E1 (unityy_t3A63DAC83FF92496D8532BC144F3E63611A42DCA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean unityy::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool unityy_TryGetTouchPosition_m9E87F1B2A0D419AD722DC32110198EA61EAF3719 (unityy_t3A63DAC83FF92496D8532BC144F3E63611A42DCA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___touchPosition0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// touchPosition = Input.GetTouch(0).position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = ___touchPosition0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_3;
		L_3 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_1 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_2 = L_4;
		// return true;
		V_2 = (bool)1;
		goto IL_0031;
	}

IL_0026:
	{
		// touchPosition = default;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___touchPosition0;
		il2cpp_codegen_initobj(L_5, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// return false;
		V_2 = (bool)0;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Void unityy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityy__ctor_m8331A311ACB9C1C28EE2EEC8185F93D7701548E6 (unityy_t3A63DAC83FF92496D8532BC144F3E63611A42DCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<ARRaycastHit> hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		__this->___hits_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hits_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean Vector2Extentions::PositionOverUIElement(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2Extentions_PositionOverUIElement_m46664C20A024BF2C8987C297A0F90A9D37957F51 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (EventSystem.current.IsPointerOverGameObject())
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0056;
	}

IL_0014:
	{
		// PointerEventData eventPosition = new PointerEventData(EventSystem.current);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_3;
		L_3 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)il2cpp_codegen_object_new(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(L_4, L_3, NULL);
		V_0 = L_4;
		// eventPosition.position = new Vector2(pos.x, pos.y);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___pos0;
		float L_7 = L_6.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___pos0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_7, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_5, L_10, NULL);
		// List<RaycastResult> results = new List<RaycastResult>();
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_11 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446*)il2cpp_codegen_object_new(List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B(L_11, List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		V_1 = L_11;
		// EventSystem.current.RaycastAll(eventPosition, results);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_12;
		L_12 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_13 = V_0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_14 = V_1;
		NullCheck(L_12);
		EventSystem_RaycastAll_mE93CC75909438D20D17A0EF98348A064FBFEA528(L_12, L_13, L_14, NULL);
		// return results.Count > 0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline(L_15, List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_16) > ((int32_t)0))? 1 : 0);
		goto IL_0056;
	}

IL_0056:
	{
		// }
		bool L_17 = V_3;
		return L_17;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SelectionManager_get_IsSelected_m505A70B244969795660A43D322FCC1BEA0FBCF1A_inline (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, const RuntimeMethod* method) 
{
	{
		// private bool IsSelected { get; set; }
		bool L_0 = __this->___U3CIsSelectedU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectionManager_set_IsSelected_mC65B289D10394603A29257A4ABFE43EF1BC8404B_inline (SelectionManager_t03DFDB72964646E3F005DC6A1346AC5C319D471D* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private bool IsSelected { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsSelectedU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CpositionU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
