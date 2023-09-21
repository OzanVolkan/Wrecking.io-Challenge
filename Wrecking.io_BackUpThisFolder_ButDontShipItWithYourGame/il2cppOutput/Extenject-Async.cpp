#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Action`2<Zenject.InjectContext,System.Object>
struct Action_2_t20926A7157B2D5B2B6F4BF888C981D913820761B;
// System.Collections.Generic.Dictionary`2<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.DiContainer/ProviderInfo>>
struct Dictionary_2_tE1E7B03BA3A829D21BE9A51E3FDD69A7E9DE2CDB;
// System.Collections.Generic.Dictionary`2<System.Type,Zenject.Internal.IDecoratorProvider>
struct Dictionary_2_tF2F41112522CE5A57537E0CBE39D292E419AAAAF;
// System.Collections.Generic.HashSet`1<Zenject.Internal.LookupId>
struct HashSet_1_t2A94EE3578F0CEAF25D43A0CDC9AD05C8D29F45C;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7;
// System.Collections.Generic.List`1<Zenject.BindInfo>
struct List_1_t17683DD3180C7DD880E34E71EA17CE44FE8201DE;
// System.Collections.Generic.List`1<Zenject.BindStatement>
struct List_1_t1DF267117DA969233BD90D3269D954E36CB0766A;
// System.Collections.Generic.List`1<Zenject.IValidatable>
struct List_1_t758D810E91F87AF6AF211875263F8E39E9597B16;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
// System.Collections.Generic.List`1<Zenject.TypeValuePair>
struct List_1_t1E7AA4CC047F4C8208FF72C5A5065D29301D999A;
// System.Collections.Generic.Queue`1<Zenject.BindStatement>
struct Queue_1_t7BBB9B5373202E4B52AAD47B4A9C0EBD4A75F990;
// Zenject.DiContainer[][]
struct DiContainerU5BU5DU5BU5D_t5E95526E0D7CC628F7C59565465CC3BC796A1FE8;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Zenject.AsyncFromBinderBase
struct AsyncFromBinderBase_t55AC1298D28D922FF3D2016F15D653C5F809605D;
// Zenject.BindInfo
struct BindInfo_t0799128A181D817F225511F62C23A96620EAE096;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Zenject.BindingCondition
struct BindingCondition_tD7AB15AF9B7B01299F6A1B6BFD0506D66044A1B8;
// Zenject.DiContainer
struct DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF;
// Zenject.LazyInstanceInjector
struct LazyInstanceInjector_tAAE8E448BE307EBE6949943C0B99C6E1C5B70E31;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
struct ScopeConcreteIdArgConditionCopyNonLazyBinder_tD40573754E63B9AFB1E3B5301644F37C9A0A6C15;
// Zenject.Internal.SingletonMarkRegistry
struct SingletonMarkRegistry_t1D412307FF53D76D077F9552496190F305427443;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Zenject.ZenjectSettings
struct ZenjectSettings_t94D3C549B1AF1BD9042AE75E05F8951A55B124FF;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t470CFFA5683E0FB808B4F6533A3EA099AA30605E 
{
};
struct Il2CppArrayBounds;

// Zenject.AsyncDiContainerExtensions
struct AsyncDiContainerExtensions_tD9E87024288EFD88C602BE95442E3D83C354CEFE  : public RuntimeObject
{
};

// Zenject.BindInfo
struct BindInfo_t0799128A181D817F225511F62C23A96620EAE096  : public RuntimeObject
{
	// System.Boolean Zenject.BindInfo::MarkAsCreationBinding
	bool ___MarkAsCreationBinding_0;
	// System.Boolean Zenject.BindInfo::MarkAsUniqueSingleton
	bool ___MarkAsUniqueSingleton_1;
	// System.Object Zenject.BindInfo::ConcreteIdentifier
	RuntimeObject* ___ConcreteIdentifier_2;
	// System.Boolean Zenject.BindInfo::SaveProvider
	bool ___SaveProvider_3;
	// System.Boolean Zenject.BindInfo::OnlyBindIfNotBound
	bool ___OnlyBindIfNotBound_4;
	// System.Boolean Zenject.BindInfo::RequireExplicitScope
	bool ___RequireExplicitScope_5;
	// System.Object Zenject.BindInfo::Identifier
	RuntimeObject* ___Identifier_6;
	// System.Collections.Generic.List`1<System.Type> Zenject.BindInfo::ContractTypes
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___ContractTypes_7;
	// Zenject.BindingInheritanceMethods Zenject.BindInfo::BindingInheritanceMethod
	int32_t ___BindingInheritanceMethod_8;
	// Zenject.InvalidBindResponses Zenject.BindInfo::InvalidBindResponse
	int32_t ___InvalidBindResponse_9;
	// System.Boolean Zenject.BindInfo::NonLazy
	bool ___NonLazy_10;
	// Zenject.BindingCondition Zenject.BindInfo::Condition
	BindingCondition_tD7AB15AF9B7B01299F6A1B6BFD0506D66044A1B8* ___Condition_11;
	// Zenject.ToChoices Zenject.BindInfo::ToChoice
	int32_t ___ToChoice_12;
	// System.String Zenject.BindInfo::ContextInfo
	String_t* ___ContextInfo_13;
	// System.Collections.Generic.List`1<System.Type> Zenject.BindInfo::ToTypes
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___ToTypes_14;
	// Zenject.ScopeTypes Zenject.BindInfo::Scope
	int32_t ___Scope_15;
	// System.Collections.Generic.List`1<Zenject.TypeValuePair> Zenject.BindInfo::Arguments
	List_1_t1E7AA4CC047F4C8208FF72C5A5065D29301D999A* ___Arguments_16;
	// System.Action`2<Zenject.InjectContext,System.Object> Zenject.BindInfo::InstantiatedCallback
	Action_2_t20926A7157B2D5B2B6F4BF888C981D913820761B* ___InstantiatedCallback_17;
};

// Zenject.DiContainer
struct DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,Zenject.Internal.IDecoratorProvider> Zenject.DiContainer::_decorators
	Dictionary_2_tF2F41112522CE5A57537E0CBE39D292E419AAAAF* ____decorators_0;
	// System.Collections.Generic.Dictionary`2<Zenject.BindingId,System.Collections.Generic.List`1<Zenject.DiContainer/ProviderInfo>> Zenject.DiContainer::_providers
	Dictionary_2_tE1E7B03BA3A829D21BE9A51E3FDD69A7E9DE2CDB* ____providers_1;
	// Zenject.DiContainer[][] Zenject.DiContainer::_containerLookups
	DiContainerU5BU5DU5BU5D_t5E95526E0D7CC628F7C59565465CC3BC796A1FE8* ____containerLookups_2;
	// System.Collections.Generic.HashSet`1<Zenject.Internal.LookupId> Zenject.DiContainer::_resolvesInProgress
	HashSet_1_t2A94EE3578F0CEAF25D43A0CDC9AD05C8D29F45C* ____resolvesInProgress_3;
	// System.Collections.Generic.HashSet`1<Zenject.Internal.LookupId> Zenject.DiContainer::_resolvesTwiceInProgress
	HashSet_1_t2A94EE3578F0CEAF25D43A0CDC9AD05C8D29F45C* ____resolvesTwiceInProgress_4;
	// Zenject.LazyInstanceInjector Zenject.DiContainer::_lazyInjector
	LazyInstanceInjector_tAAE8E448BE307EBE6949943C0B99C6E1C5B70E31* ____lazyInjector_5;
	// Zenject.Internal.SingletonMarkRegistry Zenject.DiContainer::_singletonMarkRegistry
	SingletonMarkRegistry_t1D412307FF53D76D077F9552496190F305427443* ____singletonMarkRegistry_6;
	// System.Collections.Generic.Queue`1<Zenject.BindStatement> Zenject.DiContainer::_currentBindings
	Queue_1_t7BBB9B5373202E4B52AAD47B4A9C0EBD4A75F990* ____currentBindings_7;
	// System.Collections.Generic.List`1<Zenject.BindStatement> Zenject.DiContainer::_childBindings
	List_1_t1DF267117DA969233BD90D3269D954E36CB0766A* ____childBindings_8;
	// System.Collections.Generic.HashSet`1<System.Type> Zenject.DiContainer::_validatedTypes
	HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* ____validatedTypes_9;
	// System.Collections.Generic.List`1<Zenject.IValidatable> Zenject.DiContainer::_validationQueue
	List_1_t758D810E91F87AF6AF211875263F8E39E9597B16* ____validationQueue_10;
	// UnityEngine.Transform Zenject.DiContainer::_contextTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____contextTransform_11;
	// System.Boolean Zenject.DiContainer::_hasLookedUpContextTransform
	bool ____hasLookedUpContextTransform_12;
	// UnityEngine.Transform Zenject.DiContainer::_inheritedDefaultParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____inheritedDefaultParent_13;
	// UnityEngine.Transform Zenject.DiContainer::_explicitDefaultParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____explicitDefaultParent_14;
	// System.Boolean Zenject.DiContainer::_hasExplicitDefaultParent
	bool ____hasExplicitDefaultParent_15;
	// Zenject.ZenjectSettings Zenject.DiContainer::_settings
	ZenjectSettings_t94D3C549B1AF1BD9042AE75E05F8951A55B124FF* ____settings_16;
	// System.Boolean Zenject.DiContainer::_hasResolvedRoots
	bool ____hasResolvedRoots_17;
	// System.Boolean Zenject.DiContainer::_isFinalizingBinding
	bool ____isFinalizingBinding_18;
	// System.Boolean Zenject.DiContainer::_isValidating
	bool ____isValidating_19;
	// System.Boolean Zenject.DiContainer::_isInstalling
	bool ____isInstalling_20;
	// System.Boolean Zenject.DiContainer::<AssertOnNewGameObjects>k__BackingField
	bool ___U3CAssertOnNewGameObjectsU3Ek__BackingField_21;
};

// Zenject.IfNotBoundBinder
struct IfNotBoundBinder_t79E8198CFD9343FBF7C7C2CCA52C408EAEE74FEF  : public RuntimeObject
{
	// Zenject.BindInfo Zenject.IfNotBoundBinder::<BindInfo>k__BackingField
	BindInfo_t0799128A181D817F225511F62C23A96620EAE096* ___U3CBindInfoU3Ek__BackingField_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// Zenject.NonLazyBinder
struct NonLazyBinder_t001E27F707B939C734274507B77AF18980D5796A  : public IfNotBoundBinder_t79E8198CFD9343FBF7C7C2CCA52C408EAEE74FEF
{
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

// Zenject.CopyNonLazyBinder
struct CopyNonLazyBinder_t5D5D5CE5CF4CABE5AA88742ABACA8BDCCA94E1BF  : public NonLazyBinder_t001E27F707B939C734274507B77AF18980D5796A
{
	// System.Collections.Generic.List`1<Zenject.BindInfo> Zenject.CopyNonLazyBinder::_secondaryBindInfos
	List_1_t17683DD3180C7DD880E34E71EA17CE44FE8201DE* ____secondaryBindInfos_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Zenject.ConditionCopyNonLazyBinder
struct ConditionCopyNonLazyBinder_t6999D5EDCFCAF781F58C55E53F9953B0EEEB3581  : public CopyNonLazyBinder_t5D5D5CE5CF4CABE5AA88742ABACA8BDCCA94E1BF
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

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

// Zenject.InstantiateCallbackConditionCopyNonLazyBinder
struct InstantiateCallbackConditionCopyNonLazyBinder_tE521FBBFBBECB8492844B056C3C2896C84FED7DE  : public ConditionCopyNonLazyBinder_t6999D5EDCFCAF781F58C55E53F9953B0EEEB3581
{
};

// Zenject.ArgConditionCopyNonLazyBinder
struct ArgConditionCopyNonLazyBinder_t14950039EFF2F2D7578B272C2771652B9A135238  : public InstantiateCallbackConditionCopyNonLazyBinder_tE521FBBFBBECB8492844B056C3C2896C84FED7DE
{
};

// Zenject.ConcreteIdArgConditionCopyNonLazyBinder
struct ConcreteIdArgConditionCopyNonLazyBinder_t5D0E62640C5D41009E000A911B3323C95EE61F48  : public ArgConditionCopyNonLazyBinder_t14950039EFF2F2D7578B272C2771652B9A135238
{
};

// Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
struct ScopeConcreteIdArgConditionCopyNonLazyBinder_tD40573754E63B9AFB1E3B5301644F37C9A0A6C15  : public ConcreteIdArgConditionCopyNonLazyBinder_t5D0E62640C5D41009E000A911B3323C95EE61F48
{
};

// Zenject.AsyncFromBinderBase
struct AsyncFromBinderBase_t55AC1298D28D922FF3D2016F15D653C5F809605D  : public ScopeConcreteIdArgConditionCopyNonLazyBinder_tD40573754E63B9AFB1E3B5301644F37C9A0A6C15
{
	// Zenject.DiContainer Zenject.AsyncFromBinderBase::<BindContainer>k__BackingField
	DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* ___U3CBindContainerU3Ek__BackingField_2;
	// System.Type Zenject.AsyncFromBinderBase::<ContractType>k__BackingField
	Type_t* ___U3CContractTypeU3Ek__BackingField_3;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeConcreteIdArgConditionCopyNonLazyBinder__ctor_m5D6ACE61D474D8D056824EEB17AAA14438D439EB (ScopeConcreteIdArgConditionCopyNonLazyBinder_tD40573754E63B9AFB1E3B5301644F37C9A0A6C15* __this, BindInfo_t0799128A181D817F225511F62C23A96620EAE096* ___bindInfo0, const RuntimeMethod* method) ;
// System.Void Zenject.AsyncFromBinderBase::set_BindContainer(Zenject.DiContainer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncFromBinderBase_set_BindContainer_m9F9B1D307DE8CDB5D0D4ECD78D74B473BFA38BE8_inline (AsyncFromBinderBase_t55AC1298D28D922FF3D2016F15D653C5F809605D* __this, DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* ___value0, const RuntimeMethod* method) ;
// System.Void Zenject.AsyncFromBinderBase::set_ContractType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncFromBinderBase_set_ContractType_m6C29A835E1E058ECA4474AD0B2EDE0B3780F648F_inline (AsyncFromBinderBase_t55AC1298D28D922FF3D2016F15D653C5F809605D* __this, Type_t* ___value0, const RuntimeMethod* method) ;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Zenject.AsyncFromBinderBase::.ctor(Zenject.DiContainer,System.Type,Zenject.BindInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncFromBinderBase__ctor_m8772911A99CB4B721FEB29D400904250C66EDDB3 (AsyncFromBinderBase_t55AC1298D28D922FF3D2016F15D653C5F809605D* __this, DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* ___bindContainer0, Type_t* ___contractType1, BindInfo_t0799128A181D817F225511F62C23A96620EAE096* ___bindInfo2, const RuntimeMethod* method) 
{
	{
		// : base(bindInfo)
		BindInfo_t0799128A181D817F225511F62C23A96620EAE096* L_0 = ___bindInfo2;
		ScopeConcreteIdArgConditionCopyNonLazyBinder__ctor_m5D6ACE61D474D8D056824EEB17AAA14438D439EB(__this, L_0, NULL);
		// BindContainer = bindContainer;
		DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* L_1 = ___bindContainer0;
		AsyncFromBinderBase_set_BindContainer_m9F9B1D307DE8CDB5D0D4ECD78D74B473BFA38BE8_inline(__this, L_1, NULL);
		// ContractType = contractType;
		Type_t* L_2 = ___contractType1;
		AsyncFromBinderBase_set_ContractType_m6C29A835E1E058ECA4474AD0B2EDE0B3780F648F_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// Zenject.DiContainer Zenject.AsyncFromBinderBase::get_BindContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* AsyncFromBinderBase_get_BindContainer_m2BBA55914D7A2E3D2DEFAFD5B696979B92B87762 (AsyncFromBinderBase_t55AC1298D28D922FF3D2016F15D653C5F809605D* __this, const RuntimeMethod* method) 
{
	{
		// get; private set;
		DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* L_0 = __this->___U3CBindContainerU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Zenject.AsyncFromBinderBase::set_BindContainer(Zenject.DiContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncFromBinderBase_set_BindContainer_m9F9B1D307DE8CDB5D0D4ECD78D74B473BFA38BE8 (AsyncFromBinderBase_t55AC1298D28D922FF3D2016F15D653C5F809605D* __this, DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* ___value0, const RuntimeMethod* method) 
{
	{
		// get; private set;
		DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* L_0 = ___value0;
		__this->___U3CBindContainerU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBindContainerU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Type Zenject.AsyncFromBinderBase::get_ContractType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AsyncFromBinderBase_get_ContractType_m44473BE2DFD410CB59E1EFDF687C5799F4F1D976 (AsyncFromBinderBase_t55AC1298D28D922FF3D2016F15D653C5F809605D* __this, const RuntimeMethod* method) 
{
	{
		// get; private set;
		Type_t* L_0 = __this->___U3CContractTypeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Zenject.AsyncFromBinderBase::set_ContractType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncFromBinderBase_set_ContractType_m6C29A835E1E058ECA4474AD0B2EDE0B3780F648F (AsyncFromBinderBase_t55AC1298D28D922FF3D2016F15D653C5F809605D* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// get; private set;
		Type_t* L_0 = ___value0;
		__this->___U3CContractTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContractTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncFromBinderBase_set_BindContainer_m9F9B1D307DE8CDB5D0D4ECD78D74B473BFA38BE8_inline (AsyncFromBinderBase_t55AC1298D28D922FF3D2016F15D653C5F809605D* __this, DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* ___value0, const RuntimeMethod* method) 
{
	{
		// get; private set;
		DiContainer_t7A4C5EECF8C5F117BF09D9B8CEA7E049E10513CF* L_0 = ___value0;
		__this->___U3CBindContainerU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBindContainerU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncFromBinderBase_set_ContractType_m6C29A835E1E058ECA4474AD0B2EDE0B3780F648F_inline (AsyncFromBinderBase_t55AC1298D28D922FF3D2016F15D653C5F809605D* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// get; private set;
		Type_t* L_0 = ___value0;
		__this->___U3CContractTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContractTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
