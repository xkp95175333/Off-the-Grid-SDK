#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IsAbleToBeRevived_IC

#include "Basic.hpp"

#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function BP_IsAbleToBeRevived_IC.BP_IsAbleToBeRevived_IC_C.IsInteractionConditionPassed
// 0x0050 (0x0050 - 0x0000)
struct BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed final
{
public:
	const class AGzCharacter*                     InteractedBy;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           InteractableOwner;                                 // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E1C[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetOwnerASC_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETeamAttitude                                 CallFunc_GetTeamAttitude_ReturnValue;              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E1D[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed) == 0x000008, "Wrong alignment on BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed");
static_assert(sizeof(BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed) == 0x000050, "Wrong size on BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed");
static_assert(offsetof(BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed, InteractedBy) == 0x000000, "Member 'BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed::InteractedBy' has a wrong offset!");
static_assert(offsetof(BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed, InteractableOwner) == 0x000008, "Member 'BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed::InteractableOwner' has a wrong offset!");
static_assert(offsetof(BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed, ReturnValue) == 0x000010, "Member 'BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed, CallFunc_GetOwnerASC_ReturnValue) == 0x000020, "Member 'BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed::CallFunc_GetOwnerASC_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed, CallFunc_GetOwnerActor_ReturnValue) == 0x000028, "Member 'BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed::CallFunc_GetOwnerActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed, CallFunc_GetTeamAttitude_ReturnValue) == 0x000031, "Member 'BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed::CallFunc_GetTeamAttitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000032, "Member 'BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000038, "Member 'BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000048, "Member 'BP_IsAbleToBeRevived_IC_C_IsInteractionConditionPassed::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");

}

