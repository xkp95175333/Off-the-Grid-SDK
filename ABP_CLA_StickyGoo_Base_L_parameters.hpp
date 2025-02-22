#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_CLA_StickyGoo_Base_L

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function ABP_CLA_StickyGoo_Base_L.ABP_CLA_StickyGoo_Base_L_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_CLA_StickyGoo_Base_L_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_CLA_StickyGoo_Base_L_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_CLA_StickyGoo_Base_L_C_AnimGraph");
static_assert(sizeof(ABP_CLA_StickyGoo_Base_L_C_AnimGraph) == 0x000010, "Wrong size on ABP_CLA_StickyGoo_Base_L_C_AnimGraph");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_CLA_StickyGoo_Base_L_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_CLA_StickyGoo_Base_L.ABP_CLA_StickyGoo_Base_L_C.ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L
// 0x00B0 (0x00B0 - 0x0000)
struct ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_Tag;                            // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x001C(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UAnimMontage* Montage, bool bInterrupted)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EB7[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGzCharacter*                           K2Node_DynamicCast_AsGz_Character;                 // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EB8[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           K2Node_CustomEvent_Montage;                        // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInterrupted;                   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EB9[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzAbilitySystemComponent*              CallFunc_GetGzAbilitySystemComponent_ReturnValue;  // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGzAsyncTaskGameplayTagAddedRemoved*    CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EBA[0x1];                                     // 0x0093(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_CustomEvent_Tag_1;                          // 0x0094(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EBB[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityAsync_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAddToActor_ReturnValue;    // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L) == 0x000008, "Wrong alignment on ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L");
static_assert(sizeof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L) == 0x0000B0, "Wrong size on ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, EntryPoint) == 0x000000, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, K2Node_CustomEvent_Tag) == 0x000004, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::K2Node_CustomEvent_Tag' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, Temp_struct_Variable) == 0x00001C, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, K2Node_CreateDelegate_OutputDelegate_2) == 0x000034, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000048, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, K2Node_CreateDelegate_OutputDelegate_3) == 0x000050, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, K2Node_DynamicCast_AsGz_Character) == 0x000060, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::K2Node_DynamicCast_AsGz_Character' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, K2Node_CustomEvent_Montage) == 0x000070, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::K2Node_CustomEvent_Montage' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, K2Node_CustomEvent_bInterrupted) == 0x000078, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::K2Node_CustomEvent_bInterrupted' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, CallFunc_GetGzAbilitySystemComponent_ReturnValue) == 0x000080, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::CallFunc_GetGzAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue) == 0x000088, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000090, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, CallFunc_IsValid_ReturnValue) == 0x000091, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, CallFunc_BooleanAND_ReturnValue) == 0x000092, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, K2Node_CustomEvent_Tag_1) == 0x000094, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::K2Node_CustomEvent_Tag_1' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, CallFunc_WaitGameplayTagAddToActor_ReturnValue) == 0x0000A0, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::CallFunc_WaitGameplayTagAddToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L, CallFunc_IsValid_ReturnValue_1) == 0x0000A8, "Member 'ABP_CLA_StickyGoo_Base_L_C_ExecuteUbergraph_ABP_CLA_StickyGoo_Base_L::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function ABP_CLA_StickyGoo_Base_L.ABP_CLA_StickyGoo_Base_L_C.MontageEnded
// 0x0010 (0x0010 - 0x0000)
struct ABP_CLA_StickyGoo_Base_L_C_MontageEnded final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bInterrupted;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_CLA_StickyGoo_Base_L_C_MontageEnded) == 0x000008, "Wrong alignment on ABP_CLA_StickyGoo_Base_L_C_MontageEnded");
static_assert(sizeof(ABP_CLA_StickyGoo_Base_L_C_MontageEnded) == 0x000010, "Wrong size on ABP_CLA_StickyGoo_Base_L_C_MontageEnded");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_MontageEnded, Montage) == 0x000000, "Member 'ABP_CLA_StickyGoo_Base_L_C_MontageEnded::Montage' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_MontageEnded, bInterrupted) == 0x000008, "Member 'ABP_CLA_StickyGoo_Base_L_C_MontageEnded::bInterrupted' has a wrong offset!");

// Function ABP_CLA_StickyGoo_Base_L.ABP_CLA_StickyGoo_Base_L_C.OnTagAdded_D1E4DDA74E8C3BFB627FECA6F17FA325
// 0x0008 (0x0008 - 0x0000)
struct ABP_CLA_StickyGoo_Base_L_C_OnTagAdded_D1E4DDA74E8C3BFB627FECA6F17FA325 final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_CLA_StickyGoo_Base_L_C_OnTagAdded_D1E4DDA74E8C3BFB627FECA6F17FA325) == 0x000004, "Wrong alignment on ABP_CLA_StickyGoo_Base_L_C_OnTagAdded_D1E4DDA74E8C3BFB627FECA6F17FA325");
static_assert(sizeof(ABP_CLA_StickyGoo_Base_L_C_OnTagAdded_D1E4DDA74E8C3BFB627FECA6F17FA325) == 0x000008, "Wrong size on ABP_CLA_StickyGoo_Base_L_C_OnTagAdded_D1E4DDA74E8C3BFB627FECA6F17FA325");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_OnTagAdded_D1E4DDA74E8C3BFB627FECA6F17FA325, Tag) == 0x000000, "Member 'ABP_CLA_StickyGoo_Base_L_C_OnTagAdded_D1E4DDA74E8C3BFB627FECA6F17FA325::Tag' has a wrong offset!");

// Function ABP_CLA_StickyGoo_Base_L.ABP_CLA_StickyGoo_Base_L_C.OnTagRemoved_D1E4DDA74E8C3BFB627FECA6F17FA325
// 0x0008 (0x0008 - 0x0000)
struct ABP_CLA_StickyGoo_Base_L_C_OnTagRemoved_D1E4DDA74E8C3BFB627FECA6F17FA325 final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_CLA_StickyGoo_Base_L_C_OnTagRemoved_D1E4DDA74E8C3BFB627FECA6F17FA325) == 0x000004, "Wrong alignment on ABP_CLA_StickyGoo_Base_L_C_OnTagRemoved_D1E4DDA74E8C3BFB627FECA6F17FA325");
static_assert(sizeof(ABP_CLA_StickyGoo_Base_L_C_OnTagRemoved_D1E4DDA74E8C3BFB627FECA6F17FA325) == 0x000008, "Wrong size on ABP_CLA_StickyGoo_Base_L_C_OnTagRemoved_D1E4DDA74E8C3BFB627FECA6F17FA325");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_OnTagRemoved_D1E4DDA74E8C3BFB627FECA6F17FA325, Tag) == 0x000000, "Member 'ABP_CLA_StickyGoo_Base_L_C_OnTagRemoved_D1E4DDA74E8C3BFB627FECA6F17FA325::Tag' has a wrong offset!");

// Function ABP_CLA_StickyGoo_Base_L.ABP_CLA_StickyGoo_Base_L_C.PlayActivationAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_CLA_StickyGoo_Base_L_C_PlayActivationAnimation final
{
public:
	float                                         CallFunc_Montage_Play_ReturnValue;                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_CLA_StickyGoo_Base_L_C_PlayActivationAnimation) == 0x000004, "Wrong alignment on ABP_CLA_StickyGoo_Base_L_C_PlayActivationAnimation");
static_assert(sizeof(ABP_CLA_StickyGoo_Base_L_C_PlayActivationAnimation) == 0x000004, "Wrong size on ABP_CLA_StickyGoo_Base_L_C_PlayActivationAnimation");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_PlayActivationAnimation, CallFunc_Montage_Play_ReturnValue) == 0x000000, "Member 'ABP_CLA_StickyGoo_Base_L_C_PlayActivationAnimation::CallFunc_Montage_Play_ReturnValue' has a wrong offset!");

// Function ABP_CLA_StickyGoo_Base_L.ABP_CLA_StickyGoo_Base_L_C.PlayDeactivationAnimation
// 0x0008 (0x0008 - 0x0000)
struct ABP_CLA_StickyGoo_Base_L_C_PlayDeactivationAnimation final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EBC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Montage_Play_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_CLA_StickyGoo_Base_L_C_PlayDeactivationAnimation) == 0x000004, "Wrong alignment on ABP_CLA_StickyGoo_Base_L_C_PlayDeactivationAnimation");
static_assert(sizeof(ABP_CLA_StickyGoo_Base_L_C_PlayDeactivationAnimation) == 0x000008, "Wrong size on ABP_CLA_StickyGoo_Base_L_C_PlayDeactivationAnimation");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_PlayDeactivationAnimation, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'ABP_CLA_StickyGoo_Base_L_C_PlayDeactivationAnimation::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_PlayDeactivationAnimation, CallFunc_Montage_Play_ReturnValue) == 0x000004, "Member 'ABP_CLA_StickyGoo_Base_L_C_PlayDeactivationAnimation::CallFunc_Montage_Play_ReturnValue' has a wrong offset!");

// Function ABP_CLA_StickyGoo_Base_L.ABP_CLA_StickyGoo_Base_L_C.PlayFireAnimation
// 0x0070 (0x0070 - 0x0000)
struct ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EBD[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0004(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EBE[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzAbilitySystemComponent*              CallFunc_GetGzAbilitySystemComponent_ReturnValue;  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput;      // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_GetOwnedGameplayTags_TagContainer;        // 0x0028(0x0020)()
	TArray<struct FGameplayTag>                   CallFunc_BreakGameplayTagContainer_GameplayTags;   // 0x0048(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EBF[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           K2Node_Select_Default;                             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Montage_Play_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation) == 0x000008, "Wrong alignment on ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation");
static_assert(sizeof(ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation) == 0x000070, "Wrong size on ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation, Temp_bool_Variable) == 0x000000, "Member 'ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation, Temp_struct_Variable) == 0x000004, "Member 'ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation, CallFunc_GetGzAbilitySystemComponent_ReturnValue) == 0x000010, "Member 'ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation::CallFunc_GetGzAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation, CallFunc_GetOwnedGameplayTags_self_CastInput) == 0x000018, "Member 'ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation::CallFunc_GetOwnedGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation, CallFunc_GetOwnedGameplayTags_TagContainer) == 0x000028, "Member 'ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation::CallFunc_GetOwnedGameplayTags_TagContainer' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation, CallFunc_BreakGameplayTagContainer_GameplayTags) == 0x000048, "Member 'ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation::CallFunc_BreakGameplayTagContainer_GameplayTags' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation, CallFunc_Array_Contains_ReturnValue) == 0x000058, "Member 'ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation, K2Node_Select_Default) == 0x000060, "Member 'ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation, CallFunc_Montage_Play_ReturnValue) == 0x000068, "Member 'ABP_CLA_StickyGoo_Base_L_C_PlayFireAnimation::CallFunc_Montage_Play_ReturnValue' has a wrong offset!");

// Function ABP_CLA_StickyGoo_Base_L.ABP_CLA_StickyGoo_Base_L_C.UnHideMaterialSlots
// 0x0058 (0x0058 - 0x0000)
struct ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots final
{
public:
	TArray<int32>                                 LODs;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                 Materials;                                         // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EC0[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetOwningComponent_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EC1[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots) == 0x000008, "Wrong alignment on ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots");
static_assert(sizeof(ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots) == 0x000058, "Wrong size on ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots, LODs) == 0x000000, "Member 'ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots::LODs' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots, Materials) == 0x000010, "Member 'ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots::Materials' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots, Temp_int_Array_Index_Variable) == 0x000020, "Member 'ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots, CallFunc_Array_Get_Item) == 0x000028, "Member 'ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots, CallFunc_Array_Length_ReturnValue_1) == 0x00002C, "Member 'ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots, Temp_int_Array_Index_Variable_1) == 0x00003C, "Member 'ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots, Temp_int_Loop_Counter_Variable_1) == 0x000044, "Member 'ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots, CallFunc_GetOwningComponent_ReturnValue) == 0x000048, "Member 'ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots::CallFunc_GetOwningComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots, CallFunc_Less_IntInt_ReturnValue_1) == 0x000050, "Member 'ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots, CallFunc_Add_IntInt_ReturnValue_1) == 0x000054, "Member 'ABP_CLA_StickyGoo_Base_L_C_UnHideMaterialSlots::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

}

