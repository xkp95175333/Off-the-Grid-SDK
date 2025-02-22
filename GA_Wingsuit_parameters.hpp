#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Wingsuit

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function GA_Wingsuit.GA_Wingsuit_C.BP_DeactivateJetpack
// 0x0001 (0x0001 - 0x0000)
struct GA_Wingsuit_C_BP_DeactivateJetpack final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Wingsuit_C_BP_DeactivateJetpack) == 0x000001, "Wrong alignment on GA_Wingsuit_C_BP_DeactivateJetpack");
static_assert(sizeof(GA_Wingsuit_C_BP_DeactivateJetpack) == 0x000001, "Wrong size on GA_Wingsuit_C_BP_DeactivateJetpack");
static_assert(offsetof(GA_Wingsuit_C_BP_DeactivateJetpack, bWasCancelled) == 0x000000, "Member 'GA_Wingsuit_C_BP_DeactivateJetpack::bWasCancelled' has a wrong offset!");

// Function GA_Wingsuit.GA_Wingsuit_C.ExecuteUbergraph_GA_Wingsuit
// 0x0058 (0x0058 - 0x0000)
struct GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0008(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_DynamicCast_AsPawn;                         // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B7[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGzPostProcessFX*                       CallFunc_AddGenericMaterialPostProcess_Return_Value; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B8[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit) == 0x000008, "Wrong alignment on GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit");
static_assert(sizeof(GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit) == 0x000058, "Wrong size on GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit");
static_assert(offsetof(GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit, EntryPoint) == 0x000000, "Member 'GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit, K2Node_Event_bWasCancelled) == 0x000004, "Member 'GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit, Temp_delegate_Variable) == 0x000008, "Member 'GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000018, "Member 'GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit, K2Node_DynamicCast_AsPawn) == 0x000020, "Member 'GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit, CallFunc_IsLocallyControlled_ReturnValue) == 0x00002A, "Member 'GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000030, "Member 'GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit, CallFunc_AddGenericMaterialPostProcess_Return_Value) == 0x000038, "Member 'GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit::CallFunc_AddGenericMaterialPostProcess_Return_Value' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000048, "Member 'GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit, CallFunc_PostEvent_ReturnValue) == 0x000050, "Member 'GA_Wingsuit_C_ExecuteUbergraph_GA_Wingsuit::CallFunc_PostEvent_ReturnValue' has a wrong offset!");

// Function GA_Wingsuit.GA_Wingsuit_C.K2_CanActivateAbility
// 0x0098 (0x0098 - 0x0000)
struct GA_Wingsuit_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayAbilitySpecHandle             Handle;                                            // 0x0048(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B9[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  RelevantTags;                                      // 0x0050(0x0020)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0070(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61BA[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzCharacter*                           K2Node_DynamicCast_AsGz_Character;                 // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61BB[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzPlayerState*                         CallFunc_GetPersistentPlayerState_ReturnValue;     // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInComebackArena_ReturnValue;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Wingsuit_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GA_Wingsuit_C_K2_CanActivateAbility");
static_assert(sizeof(GA_Wingsuit_C_K2_CanActivateAbility) == 0x000098, "Wrong size on GA_Wingsuit_C_K2_CanActivateAbility");
static_assert(offsetof(GA_Wingsuit_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GA_Wingsuit_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_K2_CanActivateAbility, Handle) == 0x000048, "Member 'GA_Wingsuit_C_K2_CanActivateAbility::Handle' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_K2_CanActivateAbility, RelevantTags) == 0x000050, "Member 'GA_Wingsuit_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_K2_CanActivateAbility, ReturnValue) == 0x000070, "Member 'GA_Wingsuit_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_K2_CanActivateAbility, K2Node_DynamicCast_AsGz_Character) == 0x000078, "Member 'GA_Wingsuit_C_K2_CanActivateAbility::K2Node_DynamicCast_AsGz_Character' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'GA_Wingsuit_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_K2_CanActivateAbility, CallFunc_GetPersistentPlayerState_ReturnValue) == 0x000088, "Member 'GA_Wingsuit_C_K2_CanActivateAbility::CallFunc_GetPersistentPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_K2_CanActivateAbility, CallFunc_IsInComebackArena_ReturnValue) == 0x000090, "Member 'GA_Wingsuit_C_K2_CanActivateAbility::CallFunc_IsInComebackArena_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Wingsuit_C_K2_CanActivateAbility, CallFunc_Not_PreBool_ReturnValue) == 0x000091, "Member 'GA_Wingsuit_C_K2_CanActivateAbility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

