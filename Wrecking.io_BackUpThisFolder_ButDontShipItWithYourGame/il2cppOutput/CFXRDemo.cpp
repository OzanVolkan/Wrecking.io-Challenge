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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// CartoonFX.CFXR_Effect[]
struct CFXR_EffectU5BU5D_t77DDA5EBA474FE690699DFECA868F462EFED87CD;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// CartoonFX.CFXR_Effect/AnimatedLight[]
struct AnimatedLightU5BU5D_t18D44AAF10E0A23939730E3057A03CE2E81E4879;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Kino.Bloom
struct Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237;
// CartoonFX.CFXR_Demo
struct CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C;
// CartoonFX.CFXR_Demo_RandomText
struct CFXR_Demo_RandomText_tB7CB0F92E3314B0191539364EDA60CAA9C39A163;
// CartoonFX.CFXR_Demo_Rotate
struct CFXR_Demo_Rotate_tC9BF71B92F879B0DC058EC49386E2B596A3021F2;
// CartoonFX.CFXR_Effect
struct CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A;
// CartoonFX.CFXR_ParticleTextFontAsset
struct CFXR_ParticleTextFontAsset_t19D1F73819A2F60E0FA1B17ECA99FB3FAAF756ED;
// CartoonFX.CFXR_ParticleText_Runtime
struct CFXR_ParticleText_Runtime_t4CEEE34F01C5DA42544BEFEDF4C913356A498EF3;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// CartoonFX.CFXR_Effect/CameraShake
struct CameraShake_tF662E3447A81E0F4B337C630E8DDF9758C02DFD0;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral207B3D9446F2D4167D3D15FA99BDA04AA93AD0A0;
IL2CPP_EXTERN_C String_t* _stringLiteral30245BC99B9312D571EE0A8F1703B93F992F1F66;
IL2CPP_EXTERN_C String_t* _stringLiteral3CB951C5C06E2A9CE696B22F5090A82016181ECD;
IL2CPP_EXTERN_C String_t* _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E;
IL2CPP_EXTERN_C String_t* _stringLiteral761ADE297935FA4E7A49DA2B3A4BB7191FC127FF;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteral87C43E0C533B5BE7D4EAEA9F762B4B033313B85F;
IL2CPP_EXTERN_C String_t* _stringLiteralD62D0620DCC59E7C5F2161A049F9FF6D888D2E74;
IL2CPP_EXTERN_C String_t* _stringLiteralDCDB0027A8D2E4AA1706349E5323E470B20312E4;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisCFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_m7298B4F90C049C78FED0FA41A2610C8268480135_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;

struct CFXR_EffectU5BU5D_t77DDA5EBA474FE690699DFECA868F462EFED87CD;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tACA7C44D47EE520DBE4B854B783CBE378B317C8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Kino.Bloom
struct Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Kino.Bloom::_threshold
	float ____threshold_4;
	// System.Single Kino.Bloom::_softKnee
	float ____softKnee_5;
	// System.Single Kino.Bloom::_radius
	float ____radius_6;
	// System.Single Kino.Bloom::_intensity
	float ____intensity_7;
	// System.Boolean Kino.Bloom::_highQuality
	bool ____highQuality_8;
	// System.Boolean Kino.Bloom::_antiFlicker
	bool ____antiFlicker_9;
	// UnityEngine.Shader Kino.Bloom::_shader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ____shader_10;
	// UnityEngine.Material Kino.Bloom::_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____material_11;
	// UnityEngine.RenderTexture[] Kino.Bloom::_blurBuffer1
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* ____blurBuffer1_13;
	// UnityEngine.RenderTexture[] Kino.Bloom::_blurBuffer2
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* ____blurBuffer2_14;
};

// CartoonFX.CFXR_Demo
struct CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image CartoonFX.CFXR_Demo::btnSlowMotion
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___btnSlowMotion_4;
	// UnityEngine.UI.Text CartoonFX.CFXR_Demo::lblSlowMotion
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___lblSlowMotion_5;
	// UnityEngine.UI.Image CartoonFX.CFXR_Demo::btnCameraRotation
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___btnCameraRotation_6;
	// UnityEngine.UI.Text CartoonFX.CFXR_Demo::lblCameraRotation
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___lblCameraRotation_7;
	// UnityEngine.UI.Image CartoonFX.CFXR_Demo::btnShowGround
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___btnShowGround_8;
	// UnityEngine.UI.Text CartoonFX.CFXR_Demo::lblShowGround
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___lblShowGround_9;
	// UnityEngine.UI.Image CartoonFX.CFXR_Demo::btnCamShake
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___btnCamShake_10;
	// UnityEngine.UI.Text CartoonFX.CFXR_Demo::lblCamShake
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___lblCamShake_11;
	// UnityEngine.UI.Image CartoonFX.CFXR_Demo::btnLights
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___btnLights_12;
	// UnityEngine.UI.Text CartoonFX.CFXR_Demo::lblLights
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___lblLights_13;
	// UnityEngine.UI.Image CartoonFX.CFXR_Demo::btnBloom
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___btnBloom_14;
	// UnityEngine.UI.Text CartoonFX.CFXR_Demo::lblBloom
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___lblBloom_15;
	// UnityEngine.UI.Text CartoonFX.CFXR_Demo::labelEffect
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___labelEffect_16;
	// UnityEngine.UI.Text CartoonFX.CFXR_Demo::labelIndex
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___labelIndex_17;
	// UnityEngine.GameObject CartoonFX.CFXR_Demo::ground
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ground_18;
	// UnityEngine.Collider CartoonFX.CFXR_Demo::groundCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___groundCollider_19;
	// UnityEngine.Transform CartoonFX.CFXR_Demo::demoCamera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___demoCamera_20;
	// UnityEngine.MonoBehaviour CartoonFX.CFXR_Demo::bloom
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___bloom_21;
	// System.Single CartoonFX.CFXR_Demo::rotationSpeed
	float ___rotationSpeed_22;
	// System.Boolean CartoonFX.CFXR_Demo::slowMotion
	bool ___slowMotion_23;
	// System.Boolean CartoonFX.CFXR_Demo::rotateCamera
	bool ___rotateCamera_24;
	// System.Boolean CartoonFX.CFXR_Demo::showGround
	bool ___showGround_25;
	// UnityEngine.GameObject CartoonFX.CFXR_Demo::currentEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentEffect_26;
	// UnityEngine.GameObject[] CartoonFX.CFXR_Demo::effectsList
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___effectsList_27;
	// System.Int32 CartoonFX.CFXR_Demo::index
	int32_t ___index_28;
	// UnityEngine.Vector3 CartoonFX.CFXR_Demo::camInitialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___camInitialPosition_29;
	// UnityEngine.Quaternion CartoonFX.CFXR_Demo::camInitialRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___camInitialRotation_30;
};

// CartoonFX.CFXR_Demo_RandomText
struct CFXR_Demo_RandomText_tB7CB0F92E3314B0191539364EDA60CAA9C39A163  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.ParticleSystem CartoonFX.CFXR_Demo_RandomText::partSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___partSystem_4;
	// CartoonFX.CFXR_ParticleText_Runtime CartoonFX.CFXR_Demo_RandomText::runtimeParticleText
	CFXR_ParticleText_Runtime_t4CEEE34F01C5DA42544BEFEDF4C913356A498EF3* ___runtimeParticleText_5;
};

// CartoonFX.CFXR_Demo_Rotate
struct CFXR_Demo_Rotate_tC9BF71B92F879B0DC058EC49386E2B596A3021F2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 CartoonFX.CFXR_Demo_Rotate::axis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis_4;
	// UnityEngine.Vector3 CartoonFX.CFXR_Demo_Rotate::center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center_5;
	// System.Single CartoonFX.CFXR_Demo_Rotate::speed
	float ___speed_6;
};

// CartoonFX.CFXR_Effect
struct CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CartoonFX.CFXR_Effect/ClearBehavior CartoonFX.CFXR_Effect::clearBehavior
	int32_t ___clearBehavior_7;
	// CartoonFX.CFXR_Effect/CameraShake CartoonFX.CFXR_Effect::cameraShake
	CameraShake_tF662E3447A81E0F4B337C630E8DDF9758C02DFD0* ___cameraShake_8;
	// CartoonFX.CFXR_Effect/AnimatedLight[] CartoonFX.CFXR_Effect::animatedLights
	AnimatedLightU5BU5D_t18D44AAF10E0A23939730E3057A03CE2E81E4879* ___animatedLights_9;
	// UnityEngine.ParticleSystem CartoonFX.CFXR_Effect::fadeOutReference
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___fadeOutReference_10;
	// System.Single CartoonFX.CFXR_Effect::time
	float ___time_11;
	// UnityEngine.ParticleSystem CartoonFX.CFXR_Effect::rootParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___rootParticleSystem_12;
	// UnityEngine.MaterialPropertyBlock CartoonFX.CFXR_Effect::materialPropertyBlock
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___materialPropertyBlock_13;
	// UnityEngine.Renderer CartoonFX.CFXR_Effect::particleRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___particleRenderer_14;
	// System.Int32 CartoonFX.CFXR_Effect::startFrameOffset
	int32_t ___startFrameOffset_17;
	// System.Boolean CartoonFX.CFXR_Effect::isFadingOut
	bool ___isFadingOut_18;
	// System.Single CartoonFX.CFXR_Effect::fadingOutStartTime
	float ___fadingOutStartTime_19;
};

struct CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_StaticFields
{
	// System.Boolean CartoonFX.CFXR_Effect::GlobalDisableCameraShake
	bool ___GlobalDisableCameraShake_5;
	// System.Boolean CartoonFX.CFXR_Effect::GlobalDisableLights
	bool ___GlobalDisableLights_6;
	// System.Int32 CartoonFX.CFXR_Effect::GlobalStartFrameOffset
	int32_t ___GlobalStartFrameOffset_16;
};

// CartoonFX.CFXR_ParticleText_Runtime
struct CFXR_ParticleText_Runtime_t4CEEE34F01C5DA42544BEFEDF4C913356A498EF3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String CartoonFX.CFXR_ParticleText_Runtime::text
	String_t* ___text_4;
	// System.Single CartoonFX.CFXR_ParticleText_Runtime::size
	float ___size_5;
	// System.Single CartoonFX.CFXR_ParticleText_Runtime::letterSpacing
	float ___letterSpacing_6;
	// UnityEngine.Color CartoonFX.CFXR_ParticleText_Runtime::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_7;
	// UnityEngine.Color CartoonFX.CFXR_ParticleText_Runtime::color1
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1_8;
	// UnityEngine.Color CartoonFX.CFXR_ParticleText_Runtime::color2
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2_9;
	// System.Single CartoonFX.CFXR_ParticleText_Runtime::delay
	float ___delay_10;
	// System.Boolean CartoonFX.CFXR_ParticleText_Runtime::cumulativeDelay
	bool ___cumulativeDelay_11;
	// System.Single CartoonFX.CFXR_ParticleText_Runtime::compensateLifetime
	float ___compensateLifetime_12;
	// System.Single CartoonFX.CFXR_ParticleText_Runtime::lifetimeMultiplier
	float ___lifetimeMultiplier_13;
	// System.Single CartoonFX.CFXR_ParticleText_Runtime::rotation
	float ___rotation_14;
	// System.Single CartoonFX.CFXR_ParticleText_Runtime::sortingFudgeOffset
	float ___sortingFudgeOffset_15;
	// CartoonFX.CFXR_ParticleTextFontAsset CartoonFX.CFXR_ParticleText_Runtime::font
	CFXR_ParticleTextFontAsset_t19D1F73819A2F60E0FA1B17ECA99FB3FAAF756ED* ___font_16;
	// System.Single CartoonFX.CFXR_ParticleText_Runtime::baseLifetime
	float ___baseLifetime_17;
	// System.Single CartoonFX.CFXR_ParticleText_Runtime::baseScaleX
	float ___baseScaleX_18;
	// System.Single CartoonFX.CFXR_ParticleText_Runtime::baseScaleY
	float ___baseScaleY_19;
	// System.Single CartoonFX.CFXR_ParticleText_Runtime::baseScaleZ
	float ___baseScaleZ_20;
	// UnityEngine.Vector3 CartoonFX.CFXR_ParticleText_Runtime::basePivot
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___basePivot_21;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
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
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6  : public RuntimeArray
{
	ALIGN_FIELD (8) RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* m_Items[1];

	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// CartoonFX.CFXR_Effect[]
struct CFXR_EffectU5BU5D_t77DDA5EBA474FE690699DFECA868F462EFED87CD  : public RuntimeArray
{
	ALIGN_FIELD (8) CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A* m_Items[1];

	inline CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single Kino.Bloom::get_thresholdGamma()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bloom_get_thresholdGamma_mB81BF211554C0DC8A3CF34D521CB3C6854F7D2CD (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, const RuntimeMethod* method) ;
// System.Single Kino.Bloom::GammaToLinear(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bloom_GammaToLinear_mE42DEF74889D7AE2D90FD074295763798921F984 (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, float ___x0, const RuntimeMethod* method) ;
// System.Single Kino.Bloom::LinearToGamma(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bloom_LinearToGamma_mE1353A0CF31DF9437519F2F1EF34B71C50A4CAA0 (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, float ___x0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::LinearToGammaSpace(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_LinearToGammaSpace_mB23054C857C5AE0E5E27B0EA00A35F82E024B430 (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::GammaToLinearSpace(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_GammaToLinearSpace_m4D758883DC92707BEB3D1774CE252B0233309DA6 (float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Log_m5AD7CD5F4DCE823F0D89CFFD817934769D73B2B7_inline (float ___f0, float ___p1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Single Kino.Bloom::get_thresholdLinear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bloom_get_thresholdLinear_m610C90BA92384BD177F34AC18FF85DC95BFDE95A (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Single Kino.Bloom::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bloom_get_intensity_m8E43D0B96519961DDEE91D024F2FE2FA9372EBDE (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, int32_t ___pass3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___temp0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void CartoonFX.CFXR_Demo::WrapIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_WrapIndex_m82B44BE735AEBAE58FC762F9638EDCD5F86CD648 (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) ;
// System.Void CartoonFX.CFXR_Demo::PlayAtIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_PlayAtIndex_m9015D10CB7D122067A50B951740F04A5B9BC1112 (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
inline GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void CartoonFX.CFXR_Demo::UpdateLabels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_UpdateLabels_mE424EDA24B9F0ACE70AA011E9966DDD6AC5C34D7 (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, float ___angle2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem::get_isEmitting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_get_isEmitting_mE3EC701A8C5DACA27FDA91D8956CCE1ABAC6A0D9 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m6CA855033D5CE2D3AF7927B6709BC65DBCD632DF (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___withChildren0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m4A59E0A2C7CA49EF75287A067305ABB314A16E62 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___withChildren0, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<CartoonFX.CFXR_Effect>()
inline CFXR_EffectU5BU5D_t77DDA5EBA474FE690699DFECA868F462EFED87CD* GameObject_GetComponentsInChildren_TisCFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_m7298B4F90C049C78FED0FA41A2610C8268480135 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CFXR_EffectU5BU5D_t77DDA5EBA474FE690699DFECA868F462EFED87CD* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Void CartoonFX.CFXR_Effect::ResetState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Effect_ResetState_m610E43E011438C9B8496202AC20150A8A296C1FF (CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A* __this, const RuntimeMethod* method) ;
// System.Void CartoonFX.CFXR_Demo::PreviousEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_PreviousEffect_m3CE1D987622FFB1BF325D8278D4A480764E4317C (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) ;
// System.Void CartoonFX.CFXR_Demo::NextEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_NextEffect_m94EF66A3322CB9B857A8217260CFCEDD06FC56D2 (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m1461ED9FFA5B4E83AA5F89436124F5FCF4D0714D (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, const RuntimeMethod* method) ;
// System.Void CartoonFX.CFXR_Demo::ResetCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_ResetCam_m7968B3A10B9F4D3FF40B670580884C1DA2CEAA0B (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Clear_m26F18A1A58006417A0F66688E3124CFD1E880E11 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___withChildren0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void CartoonFX.CFXR_ParticleText_Runtime::GenerateText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_ParticleText_Runtime_GenerateText_mA64B80225FE0A890F8AFEF31B4A611DEF5F4F098 (CFXR_ParticleText_Runtime_t4CEEE34F01C5DA42544BEFEDF4C913356A498EF3* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Double System.Math::Log(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Log_m00DE509EBC0F78461570ED4F104B3010EB203FD1 (double ___a0, double ___newBase1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
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
// System.Single Kino.Bloom::get_thresholdGamma()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bloom_get_thresholdGamma_mB81BF211554C0DC8A3CF34D521CB3C6854F7D2CD (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, const RuntimeMethod* method) 
{
	{
		// get { return Mathf.Max(_threshold, 0); }
		float L_0 = __this->____threshold_4;
		float L_1;
		L_1 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_0, (0.0f), NULL);
		return L_1;
	}
}
// System.Void Kino.Bloom::set_thresholdGamma(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_set_thresholdGamma_m983BAC756C2F7159615064377B67566D04F79648 (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { _threshold = value; }
		float L_0 = ___value0;
		__this->____threshold_4 = L_0;
		// set { _threshold = value; }
		return;
	}
}
// System.Single Kino.Bloom::get_thresholdLinear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bloom_get_thresholdLinear_m610C90BA92384BD177F34AC18FF85DC95BFDE95A (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, const RuntimeMethod* method) 
{
	{
		// get { return GammaToLinear(thresholdGamma); }
		float L_0;
		L_0 = Bloom_get_thresholdGamma_mB81BF211554C0DC8A3CF34D521CB3C6854F7D2CD(__this, NULL);
		float L_1;
		L_1 = Bloom_GammaToLinear_mE42DEF74889D7AE2D90FD074295763798921F984(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void Kino.Bloom::set_thresholdLinear(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_set_thresholdLinear_m8B0F8F523246B5265697213B78BEE34C88BD0C90 (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { _threshold = LinearToGamma(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = Bloom_LinearToGamma_mE1353A0CF31DF9437519F2F1EF34B71C50A4CAA0(__this, L_0, NULL);
		__this->____threshold_4 = L_1;
		// set { _threshold = LinearToGamma(value); }
		return;
	}
}
// System.Single Kino.Bloom::get_softKnee()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bloom_get_softKnee_m5EFB3F109E374A05DF18153535D740921BFCA573 (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, const RuntimeMethod* method) 
{
	{
		// get { return _softKnee; }
		float L_0 = __this->____softKnee_5;
		return L_0;
	}
}
// System.Void Kino.Bloom::set_softKnee(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_set_softKnee_m958FC6BD3666F2549D6BDF192832EC7438FF82F3 (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { _softKnee = value; }
		float L_0 = ___value0;
		__this->____softKnee_5 = L_0;
		// set { _softKnee = value; }
		return;
	}
}
// System.Single Kino.Bloom::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bloom_get_radius_mAFACC0563A1E9164E189F71333C41CFE4A673019 (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, const RuntimeMethod* method) 
{
	{
		// get { return _radius; }
		float L_0 = __this->____radius_6;
		return L_0;
	}
}
// System.Void Kino.Bloom::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_set_radius_m9B7C073943C8F3650F3D67080D2E9FEA37DDA593 (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { _radius = value; }
		float L_0 = ___value0;
		__this->____radius_6 = L_0;
		// set { _radius = value; }
		return;
	}
}
// System.Single Kino.Bloom::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bloom_get_intensity_m8E43D0B96519961DDEE91D024F2FE2FA9372EBDE (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, const RuntimeMethod* method) 
{
	{
		// get { return Mathf.Max(_intensity, 0); }
		float L_0 = __this->____intensity_7;
		float L_1;
		L_1 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_0, (0.0f), NULL);
		return L_1;
	}
}
// System.Void Kino.Bloom::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_set_intensity_m4D706BE5358ECE394515B7A4272BD2D1A49FE9AC (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { _intensity = value; }
		float L_0 = ___value0;
		__this->____intensity_7 = L_0;
		// set { _intensity = value; }
		return;
	}
}
// System.Boolean Kino.Bloom::get_highQuality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bloom_get_highQuality_mA9071FB03D5DEBA5ED8245D7CE6E15360F1FE5DC (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, const RuntimeMethod* method) 
{
	{
		// get { return _highQuality; }
		bool L_0 = __this->____highQuality_8;
		return L_0;
	}
}
// System.Void Kino.Bloom::set_highQuality(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_set_highQuality_m02C71228DBB6DD0D70E5EC16C43723868510AC86 (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { _highQuality = value; }
		bool L_0 = ___value0;
		__this->____highQuality_8 = L_0;
		// set { _highQuality = value; }
		return;
	}
}
// System.Boolean Kino.Bloom::get_antiFlicker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bloom_get_antiFlicker_mED140063E89EBDBE7D582AF31FD22CC487416154 (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, const RuntimeMethod* method) 
{
	{
		// get { return _antiFlicker; }
		bool L_0 = __this->____antiFlicker_9;
		return L_0;
	}
}
// System.Void Kino.Bloom::set_antiFlicker(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_set_antiFlicker_m3B9BEC96C75E20FDD82F0A8739DEAB2E12550417 (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { _antiFlicker = value; }
		bool L_0 = ___value0;
		__this->____antiFlicker_9 = L_0;
		// set { _antiFlicker = value; }
		return;
	}
}
// System.Single Kino.Bloom::LinearToGamma(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bloom_LinearToGamma_mE1353A0CF31DF9437519F2F1EF34B71C50A4CAA0 (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, float ___x0, const RuntimeMethod* method) 
{
	{
		// return Mathf.LinearToGammaSpace(x);
		float L_0 = ___x0;
		float L_1;
		L_1 = Mathf_LinearToGammaSpace_mB23054C857C5AE0E5E27B0EA00A35F82E024B430(L_0, NULL);
		return L_1;
	}
}
// System.Single Kino.Bloom::GammaToLinear(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Bloom_GammaToLinear_mE42DEF74889D7AE2D90FD074295763798921F984 (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, float ___x0, const RuntimeMethod* method) 
{
	{
		// return Mathf.GammaToLinearSpace(x);
		float L_0 = ___x0;
		float L_1;
		L_1 = Mathf_GammaToLinearSpace_m4D758883DC92707BEB3D1774CE252B0233309DA6(L_0, NULL);
		return L_1;
	}
}
// System.Void Kino.Bloom::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_OnEnable_m27F667690E78470F772B754049D369152BEEB5A5 (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30245BC99B9312D571EE0A8F1703B93F992F1F66);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* G_B3_0 = NULL;
	{
		// var shader = _shader ? _shader : Shader.Find("Hidden/Kino/Bloom");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = __this->____shader_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral30245BC99B9312D571EE0A8F1703B93F992F1F66, NULL);
		G_B3_0 = L_2;
		goto IL_001f;
	}

IL_0019:
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_3 = __this->____shader_10;
		G_B3_0 = L_3;
	}

IL_001f:
	{
		V_0 = G_B3_0;
		// _material = new Material(shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_5, L_4, NULL);
		__this->____material_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____material_11), (void*)L_5);
		// _material.hideFlags = HideFlags.DontSave;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->____material_11;
		NullCheck(L_6);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_6, ((int32_t)52), NULL);
		// }
		return;
	}
}
// System.Void Kino.Bloom::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_OnDisable_mD55ADFFEBEFBA6F988AAC2D0BD1229400416F81B (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DestroyImmediate(_material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->____material_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_0, NULL);
		// }
		return;
	}
}
// System.Void Kino.Bloom::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom_OnRenderImage_mF2047288112F91209B8B96544576FF15BB71AFD3 (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral207B3D9446F2D4167D3D15FA99BDA04AA93AD0A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CB951C5C06E2A9CE696B22F5090A82016181ECD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87C43E0C533B5BE7D4EAEA9F762B4B033313B85F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD62D0620DCC59E7C5F2161A049F9FF6D888D2E74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCDB0027A8D2E4AA1706349E5323E470B20312E4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_10 = NULL;
	int32_t V_11 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_15 = NULL;
	int32_t V_16 = 0;
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	String_t* G_B10_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B10_1 = NULL;
	String_t* G_B9_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B9_1 = NULL;
	float G_B11_0 = 0.0f;
	String_t* G_B11_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B11_2 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B31_0 = 0;
	{
		// var useRGBM = Application.isMobilePlatform;
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		// var tw = source.width;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___source0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_1);
		V_0 = L_2;
		// var th = source.height;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___source0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_3);
		V_1 = L_4;
		// if (!_highQuality)
		bool L_5 = __this->____highQuality_8;
		G_B1_0 = L_0;
		if (L_5)
		{
			G_B2_0 = L_0;
			goto IL_0023;
		}
	}
	{
		// tw /= 2;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)(L_6/2));
		// th /= 2;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)(L_7/2));
		G_B2_0 = G_B1_0;
	}

IL_0023:
	{
		// var rtFormat = useRGBM ?
		//     RenderTextureFormat.Default : RenderTextureFormat.DefaultHDR;
		if (G_B2_0)
		{
			goto IL_0029;
		}
	}
	{
		G_B5_0 = ((int32_t)9);
		goto IL_002a;
	}

IL_0029:
	{
		G_B5_0 = 7;
	}

IL_002a:
	{
		V_2 = G_B5_0;
		// var logh = Mathf.Log(th, 2) + _radius - 8;
		int32_t L_8 = V_1;
		float L_9;
		L_9 = Mathf_Log_m5AD7CD5F4DCE823F0D89CFFD817934769D73B2B7_inline(((float)L_8), (2.0f), NULL);
		float L_10 = __this->____radius_6;
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_9, L_10)), (8.0f)));
		// var logh_i = (int)logh;
		float L_11 = V_3;
		V_4 = il2cpp_codegen_cast_double_to_int<int32_t>(L_11);
		// var iterations = Mathf.Clamp(logh_i, 1, kMaxIterations);
		int32_t L_12 = V_4;
		int32_t L_13;
		L_13 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_12, 1, ((int32_t)16), NULL);
		V_5 = L_13;
		// var lthresh = thresholdLinear;
		float L_14;
		L_14 = Bloom_get_thresholdLinear_m610C90BA92384BD177F34AC18FF85DC95BFDE95A(__this, NULL);
		V_6 = L_14;
		// _material.SetFloat("_Threshold", lthresh);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->____material_11;
		float L_16 = V_6;
		NullCheck(L_15);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_15, _stringLiteral207B3D9446F2D4167D3D15FA99BDA04AA93AD0A0, L_16, NULL);
		// var knee = lthresh * _softKnee + 1e-5f;
		float L_17 = V_6;
		float L_18 = __this->____softKnee_5;
		V_7 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_18)), (9.99999975E-06f)));
		// var curve = new Vector3(lthresh - knee, knee * 2, 0.25f / knee);
		float L_19 = V_6;
		float L_20 = V_7;
		float L_21 = V_7;
		float L_22 = V_7;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_8), ((float)il2cpp_codegen_subtract(L_19, L_20)), ((float)il2cpp_codegen_multiply(L_21, (2.0f))), ((float)((0.25f)/L_22)), NULL);
		// _material.SetVector("_Curve", curve);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = __this->____material_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_8;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25;
		L_25 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_24, NULL);
		NullCheck(L_23);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_23, _stringLiteral87C43E0C533B5BE7D4EAEA9F762B4B033313B85F, L_25, NULL);
		// var pfo = !_highQuality && _antiFlicker;
		bool L_26 = __this->____highQuality_8;
		if (L_26)
		{
			goto IL_00c3;
		}
	}
	{
		bool L_27 = __this->____antiFlicker_9;
		G_B8_0 = ((int32_t)(L_27));
		goto IL_00c4;
	}

IL_00c3:
	{
		G_B8_0 = 0;
	}

IL_00c4:
	{
		V_9 = (bool)G_B8_0;
		// _material.SetFloat("_PrefilterOffs", pfo ? -0.5f : 0.0f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->____material_11;
		bool L_29 = V_9;
		G_B9_0 = _stringLiteralDCDB0027A8D2E4AA1706349E5323E470B20312E4;
		G_B9_1 = L_28;
		if (L_29)
		{
			G_B10_0 = _stringLiteralDCDB0027A8D2E4AA1706349E5323E470B20312E4;
			G_B10_1 = L_28;
			goto IL_00dc;
		}
	}
	{
		G_B11_0 = (0.0f);
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_00e1;
	}

IL_00dc:
	{
		G_B11_0 = (-0.5f);
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_00e1:
	{
		NullCheck(G_B11_2);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(G_B11_2, G_B11_1, G_B11_0, NULL);
		// _material.SetFloat("_SampleScale", 0.5f + logh - logh_i);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = __this->____material_11;
		float L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_30);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_30, _stringLiteral3CB951C5C06E2A9CE696B22F5090A82016181ECD, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add((0.5f), L_31)), ((float)L_32))), NULL);
		// _material.SetFloat("_Intensity", intensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = __this->____material_11;
		float L_34;
		L_34 = Bloom_get_intensity_m8E43D0B96519961DDEE91D024F2FE2FA9372EBDE(__this, NULL);
		NullCheck(L_33);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_33, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_34, NULL);
		// var prefiltered = RenderTexture.GetTemporary(tw, th, 0, rtFormat);
		int32_t L_35 = V_0;
		int32_t L_36 = V_1;
		int32_t L_37 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38;
		L_38 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_35, L_36, 0, L_37, NULL);
		V_10 = L_38;
		// var pass = _antiFlicker ? 1 : 0;
		bool L_39 = __this->____antiFlicker_9;
		if (L_39)
		{
			goto IL_012d;
		}
	}
	{
		G_B14_0 = 0;
		goto IL_012e;
	}

IL_012d:
	{
		G_B14_0 = 1;
	}

IL_012e:
	{
		V_11 = G_B14_0;
		// Graphics.Blit(source, prefiltered, _material, pass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_40 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_41 = V_10;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42 = __this->____material_11;
		int32_t L_43 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_40, L_41, L_42, L_43, NULL);
		// var last = prefiltered;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = V_10;
		V_12 = L_44;
		// for (var level = 0; level < iterations; level++)
		V_13 = 0;
		goto IL_01a9;
	}

IL_0149:
	{
		// _blurBuffer1[level] = RenderTexture.GetTemporary(
		//     last.width / 2, last.height / 2, 0, rtFormat
		// );
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_45 = __this->____blurBuffer1_13;
		int32_t L_46 = V_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = V_12;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_47);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49 = V_12;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_49);
		int32_t L_51 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_52;
		L_52 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(((int32_t)(L_48/2)), ((int32_t)(L_50/2)), 0, L_51, NULL);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_52);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)L_52);
		// pass = (level == 0) ? (_antiFlicker ? 3 : 2) : 4;
		int32_t L_53 = V_13;
		if (!L_53)
		{
			goto IL_0172;
		}
	}
	{
		G_B20_0 = 4;
		goto IL_017e;
	}

IL_0172:
	{
		bool L_54 = __this->____antiFlicker_9;
		if (L_54)
		{
			goto IL_017d;
		}
	}
	{
		G_B20_0 = 2;
		goto IL_017e;
	}

IL_017d:
	{
		G_B20_0 = 3;
	}

IL_017e:
	{
		V_11 = G_B20_0;
		// Graphics.Blit(last, _blurBuffer1[level], _material, pass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_55 = V_12;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_56 = __this->____blurBuffer1_13;
		int32_t L_57 = V_13;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60 = __this->____material_11;
		int32_t L_61 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_55, L_59, L_60, L_61, NULL);
		// last = _blurBuffer1[level];
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_62 = __this->____blurBuffer1_13;
		int32_t L_63 = V_13;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_12 = L_65;
		// for (var level = 0; level < iterations; level++)
		int32_t L_66 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_01a9:
	{
		// for (var level = 0; level < iterations; level++)
		int32_t L_67 = V_13;
		int32_t L_68 = V_5;
		if ((((int32_t)L_67) < ((int32_t)L_68)))
		{
			goto IL_0149;
		}
	}
	{
		// for (var level = iterations - 2; level >= 0; level--)
		int32_t L_69 = V_5;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_69, 2));
		goto IL_0229;
	}

IL_01b7:
	{
		// var basetex = _blurBuffer1[level];
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_70 = __this->____blurBuffer1_13;
		int32_t L_71 = V_14;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_15 = L_73;
		// _material.SetTexture("_BaseTex", basetex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74 = __this->____material_11;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_75 = V_15;
		NullCheck(L_74);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_74, _stringLiteralD62D0620DCC59E7C5F2161A049F9FF6D888D2E74, L_75, NULL);
		// _blurBuffer2[level] = RenderTexture.GetTemporary(
		//     basetex.width, basetex.height, 0, rtFormat
		// );
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_76 = __this->____blurBuffer2_14;
		int32_t L_77 = V_14;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_78 = V_15;
		NullCheck(L_78);
		int32_t L_79;
		L_79 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_78);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_80 = V_15;
		NullCheck(L_80);
		int32_t L_81;
		L_81 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_80);
		int32_t L_82 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_83;
		L_83 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_79, L_81, 0, L_82, NULL);
		NullCheck(L_76);
		ArrayElementTypeCheck (L_76, L_83);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(L_77), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)L_83);
		// pass = _highQuality ? 6 : 5;
		bool L_84 = __this->____highQuality_8;
		if (L_84)
		{
			goto IL_01fd;
		}
	}
	{
		G_B26_0 = 5;
		goto IL_01fe;
	}

IL_01fd:
	{
		G_B26_0 = 6;
	}

IL_01fe:
	{
		V_11 = G_B26_0;
		// Graphics.Blit(last, _blurBuffer2[level], _material, pass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_85 = V_12;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_86 = __this->____blurBuffer2_14;
		int32_t L_87 = V_14;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_90 = __this->____material_11;
		int32_t L_91 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_85, L_89, L_90, L_91, NULL);
		// last = _blurBuffer2[level];
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_92 = __this->____blurBuffer2_14;
		int32_t L_93 = V_14;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		V_12 = L_95;
		// for (var level = iterations - 2; level >= 0; level--)
		int32_t L_96 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_96, 1));
	}

IL_0229:
	{
		// for (var level = iterations - 2; level >= 0; level--)
		int32_t L_97 = V_14;
		if ((((int32_t)L_97) >= ((int32_t)0)))
		{
			goto IL_01b7;
		}
	}
	{
		// _material.SetTexture("_BaseTex", source);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_98 = __this->____material_11;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_99 = ___source0;
		NullCheck(L_98);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_98, _stringLiteralD62D0620DCC59E7C5F2161A049F9FF6D888D2E74, L_99, NULL);
		// pass = _highQuality ? 8 : 7;
		bool L_100 = __this->____highQuality_8;
		if (L_100)
		{
			goto IL_024a;
		}
	}
	{
		G_B31_0 = 7;
		goto IL_024b;
	}

IL_024a:
	{
		G_B31_0 = 8;
	}

IL_024b:
	{
		V_11 = G_B31_0;
		// Graphics.Blit(last, destination, _material, pass);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_101 = V_12;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_102 = ___destination1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103 = __this->____material_11;
		int32_t L_104 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m5A753341A113FB6501C64F73D62047F84F957E50(L_101, L_102, L_103, L_104, NULL);
		// for (var i = 0; i < kMaxIterations; i++)
		V_16 = 0;
		goto IL_02ba;
	}

IL_0262:
	{
		// if (_blurBuffer1[i] != null)
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_105 = __this->____blurBuffer1_13;
		int32_t L_106 = V_16;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_109;
		L_109 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_108, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_109)
		{
			goto IL_0281;
		}
	}
	{
		// RenderTexture.ReleaseTemporary(_blurBuffer1[i]);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_110 = __this->____blurBuffer1_13;
		int32_t L_111 = V_16;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_113, NULL);
	}

IL_0281:
	{
		// if (_blurBuffer2[i] != null)
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_114 = __this->____blurBuffer2_14;
		int32_t L_115 = V_16;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_118;
		L_118 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_117, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_118)
		{
			goto IL_02a0;
		}
	}
	{
		// RenderTexture.ReleaseTemporary(_blurBuffer2[i]);
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_119 = __this->____blurBuffer2_14;
		int32_t L_120 = V_16;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_122, NULL);
	}

IL_02a0:
	{
		// _blurBuffer1[i] = null;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_123 = __this->____blurBuffer1_13;
		int32_t L_124 = V_16;
		NullCheck(L_123);
		ArrayElementTypeCheck (L_123, NULL);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(L_124), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
		// _blurBuffer2[i] = null;
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_125 = __this->____blurBuffer2_14;
		int32_t L_126 = V_16;
		NullCheck(L_125);
		ArrayElementTypeCheck (L_125, NULL);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(L_126), (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL);
		// for (var i = 0; i < kMaxIterations; i++)
		int32_t L_127 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_127, 1));
	}

IL_02ba:
	{
		// for (var i = 0; i < kMaxIterations; i++)
		int32_t L_128 = V_16;
		if ((((int32_t)L_128) < ((int32_t)((int32_t)16))))
		{
			goto IL_0262;
		}
	}
	{
		// RenderTexture.ReleaseTemporary(prefiltered);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_129 = V_10;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_129, NULL);
		// }
		return;
	}
}
// System.Void Kino.Bloom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bloom__ctor_mDDB6D9D0D37709B667564B36191EEFDD5F6B4FC6 (Bloom_t5F75E5067BB2FAA866A0B632111286F1C5763237* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float _threshold = 0.8f;
		__this->____threshold_4 = (0.800000012f);
		// float _softKnee = 0.5f;
		__this->____softKnee_5 = (0.5f);
		// float _radius = 2.5f;
		__this->____radius_6 = (2.5f);
		// float _intensity = 0.8f;
		__this->____intensity_7 = (0.800000012f);
		// bool _highQuality = true;
		__this->____highQuality_8 = (bool)1;
		// bool _antiFlicker = true;
		__this->____antiFlicker_9 = (bool)1;
		// RenderTexture[] _blurBuffer1 = new RenderTexture[kMaxIterations];
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_0 = (RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)SZArrayNew(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->____blurBuffer1_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____blurBuffer1_13), (void*)L_0);
		// RenderTexture[] _blurBuffer2 = new RenderTexture[kMaxIterations];
		RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* L_1 = (RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6*)SZArrayNew(RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->____blurBuffer2_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____blurBuffer2_14), (void*)L_1);
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
// System.Void CartoonFX.CFXR_Demo::NextEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_NextEffect_m94EF66A3322CB9B857A8217260CFCEDD06FC56D2 (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) 
{
	{
		// index++;
		int32_t L_0 = __this->___index_28;
		__this->___index_28 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// WrapIndex();
		CFXR_Demo_WrapIndex_m82B44BE735AEBAE58FC762F9638EDCD5F86CD648(__this, NULL);
		// PlayAtIndex();
		CFXR_Demo_PlayAtIndex_m9015D10CB7D122067A50B951740F04A5B9BC1112(__this, NULL);
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo::PreviousEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_PreviousEffect_m3CE1D987622FFB1BF325D8278D4A480764E4317C (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) 
{
	{
		// index--;
		int32_t L_0 = __this->___index_28;
		__this->___index_28 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// WrapIndex();
		CFXR_Demo_WrapIndex_m82B44BE735AEBAE58FC762F9638EDCD5F86CD648(__this, NULL);
		// PlayAtIndex();
		CFXR_Demo_PlayAtIndex_m9015D10CB7D122067A50B951740F04A5B9BC1112(__this, NULL);
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo::ToggleSlowMo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_ToggleSlowMo_mE657E27920989DF0E13DB44CCC026A7AAF1A0083 (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B5_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B6_1 = NULL;
	{
		// slowMotion = !slowMotion;
		bool L_0 = __this->___slowMotion_23;
		__this->___slowMotion_23 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// Time.timeScale = slowMotion ? 0.33f : 1.0f;
		bool L_1 = __this->___slowMotion_23;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_0023;
	}

IL_001e:
	{
		G_B3_0 = (0.330000013f);
	}

IL_0023:
	{
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C(G_B3_0, NULL);
		// var color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		V_0 = L_2;
		// color.a = slowMotion ? 1f : 0.33f;
		bool L_3 = __this->___slowMotion_23;
		G_B4_0 = (&V_0);
		if (L_3)
		{
			G_B5_0 = (&V_0);
			goto IL_003f;
		}
	}
	{
		G_B6_0 = (0.330000013f);
		G_B6_1 = G_B4_0;
		goto IL_0044;
	}

IL_003f:
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B5_0;
	}

IL_0044:
	{
		G_B6_1->___a_3 = G_B6_0;
		// btnSlowMotion.color = color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___btnSlowMotion_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_0;
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// lblSlowMotion.color = color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___lblSlowMotion_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo::ToggleCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_ToggleCamera_mDF2E6E2EA9F515F46A3EB6E4D0B0CB4C98A6E09B (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	{
		// rotateCamera = !rotateCamera;
		bool L_0 = __this->___rotateCamera_24;
		__this->___rotateCamera_24 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// var color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		V_0 = L_1;
		// color.a = rotateCamera ? 1f : 0.33f;
		bool L_2 = __this->___rotateCamera_24;
		G_B1_0 = (&V_0);
		if (L_2)
		{
			G_B2_0 = (&V_0);
			goto IL_0026;
		}
	}
	{
		G_B3_0 = (0.330000013f);
		G_B3_1 = G_B1_0;
		goto IL_002b;
	}

IL_0026:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_002b:
	{
		G_B3_1->___a_3 = G_B3_0;
		// btnCameraRotation.color = color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___btnCameraRotation_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// lblCameraRotation.color = color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___lblCameraRotation_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo::ToggleGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_ToggleGround_m62681F628E827CFDE43E262B6FB8E3A12B310F10 (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	{
		// showGround = !showGround;
		bool L_0 = __this->___showGround_25;
		__this->___showGround_25 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// ground.SetActive(showGround);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___ground_18;
		bool L_2 = __this->___showGround_25;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		// var color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		V_0 = L_3;
		// color.a = showGround ? 1f : 0.33f;
		bool L_4 = __this->___showGround_25;
		G_B1_0 = (&V_0);
		if (L_4)
		{
			G_B2_0 = (&V_0);
			goto IL_0037;
		}
	}
	{
		G_B3_0 = (0.330000013f);
		G_B3_1 = G_B1_0;
		goto IL_003c;
	}

IL_0037:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
	}

IL_003c:
	{
		G_B3_1->___a_3 = G_B3_0;
		// btnShowGround.color = color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___btnShowGround_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// lblShowGround.color = color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___lblShowGround_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo::ToggleCameraShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_ToggleCameraShake_mDC6F268EB4FB616BEF0250B802883EEB74EFDEE1 (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	{
		// CFXR_Effect.GlobalDisableCameraShake = !CFXR_Effect.GlobalDisableCameraShake;
		bool L_0 = ((CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_StaticFields*)il2cpp_codegen_static_fields_for(CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_il2cpp_TypeInfo_var))->___GlobalDisableCameraShake_5;
		((CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_StaticFields*)il2cpp_codegen_static_fields_for(CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_il2cpp_TypeInfo_var))->___GlobalDisableCameraShake_5 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// var color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		V_0 = L_1;
		// color.a = CFXR_Effect.GlobalDisableCameraShake ? 0.33f : 1.0f;
		bool L_2 = ((CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_StaticFields*)il2cpp_codegen_static_fields_for(CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_il2cpp_TypeInfo_var))->___GlobalDisableCameraShake_5;
		G_B1_0 = (&V_0);
		if (L_2)
		{
			G_B2_0 = (&V_0);
			goto IL_0023;
		}
	}
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0023:
	{
		G_B3_0 = (0.330000013f);
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		G_B3_1->___a_3 = G_B3_0;
		// btnCamShake.color = color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___btnCamShake_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// lblCamShake.color = color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___lblCamShake_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo::ToggleEffectsLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_ToggleEffectsLights_mF9BB908B8FE3402630FB19DEBC1C954E9BC195F2 (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	{
		// CFXR_Effect.GlobalDisableLights = !CFXR_Effect.GlobalDisableLights;
		bool L_0 = ((CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_StaticFields*)il2cpp_codegen_static_fields_for(CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_il2cpp_TypeInfo_var))->___GlobalDisableLights_6;
		((CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_StaticFields*)il2cpp_codegen_static_fields_for(CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_il2cpp_TypeInfo_var))->___GlobalDisableLights_6 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// var color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		V_0 = L_1;
		// color.a = CFXR_Effect.GlobalDisableLights ? 0.33f : 1.0f;
		bool L_2 = ((CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_StaticFields*)il2cpp_codegen_static_fields_for(CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_il2cpp_TypeInfo_var))->___GlobalDisableLights_6;
		G_B1_0 = (&V_0);
		if (L_2)
		{
			G_B2_0 = (&V_0);
			goto IL_0023;
		}
	}
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0023:
	{
		G_B3_0 = (0.330000013f);
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		G_B3_1->___a_3 = G_B3_0;
		// btnLights.color = color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___btnLights_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// lblLights.color = color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___lblLights_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo::ToggleBloom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_ToggleBloom_m5AA98EF1D19188D31FC1132501037E5AC5A47194 (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	{
		// bloom.enabled = !bloom.enabled;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___bloom_21;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = __this->___bloom_21;
		NullCheck(L_1);
		bool L_2;
		L_2 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_1, NULL);
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// var color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		V_0 = L_3;
		// color.a = !bloom.enabled ? 0.33f : 1.0f;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_4 = __this->___bloom_21;
		NullCheck(L_4);
		bool L_5;
		L_5 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_4, NULL);
		G_B1_0 = (&V_0);
		if (!L_5)
		{
			G_B2_0 = (&V_0);
			goto IL_0035;
		}
	}
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B1_0;
		goto IL_003a;
	}

IL_0035:
	{
		G_B3_0 = (0.330000013f);
		G_B3_1 = G_B2_0;
	}

IL_003a:
	{
		G_B3_1->___a_3 = G_B3_0;
		// btnBloom.color = color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___btnBloom_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// lblBloom.color = color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___lblBloom_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo::ResetCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_ResetCam_m7968B3A10B9F4D3FF40B670580884C1DA2CEAA0B (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) 
{
	{
		// Camera.main.transform.position = camInitialPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___camInitialPosition_29;
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		// Camera.main.transform.rotation = camInitialRotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = __this->___camInitialRotation_30;
		NullCheck(L_4);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_Awake_m269164F22777A36B8368C605A3C7EFDCAB9BD0DF (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// camInitialPosition = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___camInitialPosition_29 = L_2;
		// camInitialRotation = Camera.main.transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		__this->___camInitialRotation_30 = L_5;
		// var list = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_6, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_0 = L_6;
		// for (int i = 0; i < this.transform.childCount; i++)
		V_1 = 0;
		goto IL_004f;
	}

IL_0034:
	{
		// list.Add(this.transform.GetChild(i).gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, L_9, NULL);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_7);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_7, L_11, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for (int i = 0; i < this.transform.childCount; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004f:
	{
		// for (int i = 0; i < this.transform.childCount; i++)
		int32_t L_13 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_14, NULL);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0034;
		}
	}
	{
		// effectsList = list.ToArray();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_16 = V_0;
		NullCheck(L_16);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17;
		L_17 = List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C(L_16, List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		__this->___effectsList_27 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectsList_27), (void*)L_17);
		// PlayAtIndex();
		CFXR_Demo_PlayAtIndex_m9015D10CB7D122067A50B951740F04A5B9BC1112(__this, NULL);
		// UpdateLabels();
		CFXR_Demo_UpdateLabels_mE424EDA24B9F0ACE70AA011E9966DDD6AC5C34D7(__this, NULL);
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_Update_m9A55C3BA95AAE759CC901A345356ADCC54E71DCD (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisCFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_m7298B4F90C049C78FED0FA41A2610C8268480135_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_1 = NULL;
	CFXR_EffectU5BU5D_t77DDA5EBA474FE690699DFECA868F462EFED87CD* V_2 = NULL;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B31_0;
	memset((&G_B31_0), 0, sizeof(G_B31_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B31_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B30_0;
	memset((&G_B30_0), 0, sizeof(G_B30_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B30_1 = NULL;
	float G_B32_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B32_1;
	memset((&G_B32_1), 0, sizeof(G_B32_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B32_2 = NULL;
	{
		// if (rotateCamera)
		bool L_0 = __this->___rotateCamera_24;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// demoCamera.RotateAround(Vector3.zero, Vector3.up, rotationSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___demoCamera_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_4 = __this->___rotationSpeed_22;
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_1);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_1, L_2, L_3, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
	}

IL_0029:
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_6;
		L_6 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)32), NULL);
		if (!L_6)
		{
			goto IL_00b0;
		}
	}
	{
		// if (currentEffect != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___currentEffect_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00b0;
		}
	}
	{
		// var ps = currentEffect.GetComponent<ParticleSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___currentEffect_26;
		NullCheck(L_9);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10;
		L_10 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_9, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		V_1 = L_10;
		// if (ps == null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		// return;
		return;
	}

IL_0056:
	{
		// if (ps.isEmitting)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_13 = V_1;
		NullCheck(L_13);
		bool L_14;
		L_14 = ParticleSystem_get_isEmitting_mE3EC701A8C5DACA27FDA91D8956CCE1ABAC6A0D9(L_13, NULL);
		if (!L_14)
		{
			goto IL_0067;
		}
	}
	{
		// ps.Stop(true);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_15 = V_1;
		NullCheck(L_15);
		ParticleSystem_Stop_m6CA855033D5CE2D3AF7927B6709BC65DBCD632DF(L_15, (bool)1, NULL);
		goto IL_00b0;
	}

IL_0067:
	{
		// if (!currentEffect.gameObject.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___currentEffect_26;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_16, NULL);
		NullCheck(L_17);
		bool L_18;
		L_18 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_17, NULL);
		if (L_18)
		{
			goto IL_0087;
		}
	}
	{
		// currentEffect.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___currentEffect_26;
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		goto IL_00b0;
	}

IL_0087:
	{
		// ps.Play(true);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_20 = V_1;
		NullCheck(L_20);
		ParticleSystem_Play_m4A59E0A2C7CA49EF75287A067305ABB314A16E62(L_20, (bool)1, NULL);
		// var cfxrEffects = currentEffect.GetComponentsInChildren<CFXR_Effect>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___currentEffect_26;
		NullCheck(L_21);
		CFXR_EffectU5BU5D_t77DDA5EBA474FE690699DFECA868F462EFED87CD* L_22;
		L_22 = GameObject_GetComponentsInChildren_TisCFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_m7298B4F90C049C78FED0FA41A2610C8268480135(L_21, GameObject_GetComponentsInChildren_TisCFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A_m7298B4F90C049C78FED0FA41A2610C8268480135_RuntimeMethod_var);
		// foreach (var cfxr in cfxrEffects)
		V_2 = L_22;
		V_3 = 0;
		goto IL_00aa;
	}

IL_009e:
	{
		// foreach (var cfxr in cfxrEffects)
		CFXR_EffectU5BU5D_t77DDA5EBA474FE690699DFECA868F462EFED87CD* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		CFXR_Effect_t3017EDCEABB0C70663A82AAA961EE597C0AF743A* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		// cfxr.ResetState();
		NullCheck(L_26);
		CFXR_Effect_ResetState_m610E43E011438C9B8496202AC20150A8A296C1FF(L_26, NULL);
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00aa:
	{
		// foreach (var cfxr in cfxrEffects)
		int32_t L_28 = V_3;
		CFXR_EffectU5BU5D_t77DDA5EBA474FE690699DFECA868F462EFED87CD* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_009e;
		}
	}

IL_00b0:
	{
		// if (Input.GetKeyDown(KeyCode.Delete) || Input.GetKeyDown(KeyCode.Backspace))
		bool L_30;
		L_30 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)127), NULL);
		if (L_30)
		{
			goto IL_00c1;
		}
	}
	{
		bool L_31;
		L_31 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(8, NULL);
		if (!L_31)
		{
			goto IL_00e7;
		}
	}

IL_00c1:
	{
		// if (currentEffect != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___currentEffect_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_00e7;
		}
	}
	{
		// currentEffect.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___currentEffect_26;
		NullCheck(L_34);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_34, (bool)0, NULL);
		// currentEffect.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___currentEffect_26;
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)1, NULL);
	}

IL_00e7:
	{
		// if (Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_36;
		L_36 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)276), NULL);
		if (!L_36)
		{
			goto IL_00f9;
		}
	}
	{
		// PreviousEffect();
		CFXR_Demo_PreviousEffect_m3CE1D987622FFB1BF325D8278D4A480764E4317C(__this, NULL);
	}

IL_00f9:
	{
		// if (Input.GetKeyDown(KeyCode.RightArrow))
		bool L_37;
		L_37 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)275), NULL);
		if (!L_37)
		{
			goto IL_010b;
		}
	}
	{
		// NextEffect();
		CFXR_Demo_NextEffect_m94EF66A3322CB9B857A8217260CFCEDD06FC56D2(__this, NULL);
	}

IL_010b:
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_38;
		L_38 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_38)
		{
			goto IL_0155;
		}
	}
	{
		// var ray = demoCamera.GetComponent<Camera>().ScreenPointToRay(Input.mousePosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = __this->___demoCamera_20;
		NullCheck(L_39);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_40;
		L_40 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(L_39, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_40);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_42;
		L_42 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_40, L_41, NULL);
		// if (Physics.Raycast(ray))
		bool L_43;
		L_43 = Physics_Raycast_m1461ED9FFA5B4E83AA5F89436124F5FCF4D0714D(L_42, NULL);
		if (!L_43)
		{
			goto IL_0155;
		}
	}
	{
		// if (currentEffect != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___currentEffect_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_44, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_45)
		{
			goto IL_0155;
		}
	}
	{
		// currentEffect.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___currentEffect_26;
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)0, NULL);
		// currentEffect.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___currentEffect_26;
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)1, NULL);
	}

IL_0155:
	{
		// if (Input.GetMouseButtonDown(1) || Input.GetMouseButtonDown(2))
		bool L_48;
		L_48 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(1, NULL);
		if (L_48)
		{
			goto IL_0165;
		}
	}
	{
		bool L_49;
		L_49 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(2, NULL);
		if (!L_49)
		{
			goto IL_016b;
		}
	}

IL_0165:
	{
		// ResetCam();
		CFXR_Demo_ResetCam_m7968B3A10B9F4D3FF40B670580884C1DA2CEAA0B(__this, NULL);
	}

IL_016b:
	{
		// float scroll = Input.GetAxis("Mouse ScrollWheel");
		float L_50;
		L_50 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		V_0 = L_50;
		// if (scroll != 0f)
		float L_51 = V_0;
		if ((((float)L_51) == ((float)(0.0f))))
		{
			goto IL_01ac;
		}
	}
	{
		// Camera.main.transform.Translate(Vector3.forward * (scroll < 0f ? -1f : 1f), Space.Self);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_52;
		L_52 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		float L_55 = V_0;
		G_B30_0 = L_54;
		G_B30_1 = L_53;
		if ((((float)L_55) < ((float)(0.0f))))
		{
			G_B31_0 = L_54;
			G_B31_1 = L_53;
			goto IL_019c;
		}
	}
	{
		G_B32_0 = (1.0f);
		G_B32_1 = G_B30_0;
		G_B32_2 = G_B30_1;
		goto IL_01a1;
	}

IL_019c:
	{
		G_B32_0 = (-1.0f);
		G_B32_1 = G_B31_0;
		G_B32_2 = G_B31_1;
	}

IL_01a1:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(G_B32_1, G_B32_0, NULL);
		NullCheck(G_B32_2);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(G_B32_2, L_56, 1, NULL);
	}

IL_01ac:
	{
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo::PlayAtIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_PlayAtIndex_m9015D10CB7D122067A50B951740F04A5B9BC1112 (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentEffect != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___currentEffect_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// currentEffect.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___currentEffect_26;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_001a:
	{
		// currentEffect = effectsList[index];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___effectsList_27;
		int32_t L_4 = __this->___index_28;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->___currentEffect_26 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentEffect_26), (void*)L_6);
		// currentEffect.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___currentEffect_26;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// UpdateLabels();
		CFXR_Demo_UpdateLabels_mE424EDA24B9F0ACE70AA011E9966DDD6AC5C34D7(__this, NULL);
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo::WrapIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_WrapIndex_m82B44BE735AEBAE58FC762F9638EDCD5F86CD648 (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) 
{
	{
		// if (index < 0) index = effectsList.Length - 1;
		int32_t L_0 = __this->___index_28;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// if (index < 0) index = effectsList.Length - 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___effectsList_27;
		NullCheck(L_1);
		__this->___index_28 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1));
	}

IL_0019:
	{
		// if (index >= effectsList.Length) index = 0;
		int32_t L_2 = __this->___index_28;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___effectsList_27;
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0030;
		}
	}
	{
		// if (index >= effectsList.Length) index = 0;
		__this->___index_28 = 0;
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo::UpdateLabels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_UpdateLabels_mE424EDA24B9F0ACE70AA011E9966DDD6AC5C34D7 (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// labelEffect.text = currentEffect.name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___labelEffect_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___currentEffect_26;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// labelIndex.text = string.Format("{0}/{1}", (index+1), effectsList.Length);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___labelIndex_17;
		int32_t L_4 = __this->___index_28;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___effectsList_27;
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_6, L_9, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_10);
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo__ctor_mEF21647C89A2F37F19A4260FE182AF7CF93210F8 (CFXR_Demo_tC798392D488F2E202DFEB3464B0A5EFEC019BE6C* __this, const RuntimeMethod* method) 
{
	{
		// public float rotationSpeed = 10f;
		__this->___rotationSpeed_22 = (10.0f);
		// bool showGround = true;
		__this->___showGround_25 = (bool)1;
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
// System.Void CartoonFX.CFXR_Demo_RandomText::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_RandomText_OnEnable_mC06DD5667D3AE1B9277E74BFFD36BF4F6E64028C (CFXR_Demo_RandomText_tB7CB0F92E3314B0191539364EDA60CAA9C39A163* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral761ADE297935FA4E7A49DA2B3A4BB7191FC127FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating("SetRandomText", 0f, 1.5f);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral761ADE297935FA4E7A49DA2B3A4BB7191FC127FF, (0.0f), (1.5f), NULL);
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo_RandomText::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_RandomText_OnDisable_m44AA8E7D1D8324B12234EB3CF539CDCF96092DC0 (CFXR_Demo_RandomText_tB7CB0F92E3314B0191539364EDA60CAA9C39A163* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral761ADE297935FA4E7A49DA2B3A4BB7191FC127FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CancelInvoke("SetRandomText");
		MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01(__this, _stringLiteral761ADE297935FA4E7A49DA2B3A4BB7191FC127FF, NULL);
		// partSystem.Clear(true);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___partSystem_4;
		NullCheck(L_0);
		ParticleSystem_Clear_m26F18A1A58006417A0F66688E3124CFD1E880E11(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo_RandomText::SetRandomText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_RandomText_SetRandomText_m4DBC05A09A3B90941162D5043B15664F8E0C2D1E (CFXR_Demo_RandomText_tB7CB0F92E3314B0191539364EDA60CAA9C39A163* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// int damage = Random.Range(10, 1000);
		int32_t L_0;
		L_0 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)10), ((int32_t)1000), NULL);
		V_0 = L_0;
		// runtimeParticleText.size = Mathf.Lerp(0.8f, 1.3f, damage / 1000f);
		CFXR_ParticleText_Runtime_t4CEEE34F01C5DA42544BEFEDF4C913356A498EF3* L_1 = __this->___runtimeParticleText_5;
		int32_t L_2 = V_0;
		float L_3;
		L_3 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((0.800000012f), (1.29999995f), ((float)(((float)L_2)/(1000.0f))), NULL);
		NullCheck(L_1);
		L_1->___size_5 = L_3;
		// string text = damage.ToString();
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		V_1 = L_4;
		// runtimeParticleText.GenerateText(text);
		CFXR_ParticleText_Runtime_t4CEEE34F01C5DA42544BEFEDF4C913356A498EF3* L_5 = __this->___runtimeParticleText_5;
		String_t* L_6 = V_1;
		NullCheck(L_5);
		CFXR_ParticleText_Runtime_GenerateText_mA64B80225FE0A890F8AFEF31B4A611DEF5F4F098(L_5, L_6, NULL);
		// partSystem.Play(true);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_7 = __this->___partSystem_4;
		NullCheck(L_7);
		ParticleSystem_Play_m4A59E0A2C7CA49EF75287A067305ABB314A16E62(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo_RandomText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_RandomText__ctor_mB6FB55A76038D88E5BBF54B1E8A1430529C933E7 (CFXR_Demo_RandomText_tB7CB0F92E3314B0191539364EDA60CAA9C39A163* __this, const RuntimeMethod* method) 
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
// System.Void CartoonFX.CFXR_Demo_Rotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_Rotate_Update_m75A2742B1AA849A4A8A23A116B47D7BFAAF42346 (CFXR_Demo_Rotate_tC9BF71B92F879B0DC058EC49386E2B596A3021F2* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.RotateAround(center, axis, speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___center_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___axis_4;
		float L_3 = __this->___speed_6;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_0);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_0, L_1, L_2, ((float)il2cpp_codegen_multiply(L_3, L_4)), NULL);
		// }
		return;
	}
}
// System.Void CartoonFX.CFXR_Demo_Rotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CFXR_Demo_Rotate__ctor_mB669EB6BEC9244C858AFE4D8739184771161DCDD (CFXR_Demo_Rotate_tC9BF71B92F879B0DC058EC49386E2B596A3021F2* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 axis = new Vector3(0,1,0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___axis_4 = L_0;
		// public float speed = 1.0f;
		__this->___speed_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Log_m5AD7CD5F4DCE823F0D89CFFD817934769D73B2B7_inline (float ___f0, float ___p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___f0;
		float L_1 = ___p1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Log_m00DE509EBC0F78461570ED4F104B3010EB203FD1(((double)L_0), ((double)L_1), NULL);
		V_0 = ((float)L_2);
		goto IL_000e;
	}

IL_000e:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v0;
		float L_5 = L_4.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
