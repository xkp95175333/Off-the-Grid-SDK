#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Limbs_DebuffContainer

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function WBP_Limbs_DebuffContainer.WBP_Limbs_DebuffContainer_C.ExecuteUbergraph_WBP_Limbs_DebuffContainer
// 0x0060 (0x0060 - 0x0000)
struct WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67EB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGzAsyncTaskGameplayTagAddedRemoved*    CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_Tag_1;                          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67EC[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_Tag;                            // 0x004C(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0054(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer) == 0x000008, "Wrong alignment on WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer");
static_assert(sizeof(WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer) == 0x000060, "Wrong size on WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer");
static_assert(offsetof(WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer, EntryPoint) == 0x000000, "Member 'WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000008, "Member 'WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000010, "Member 'WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer, CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue) == 0x000028, "Member 'WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer::CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer, K2Node_CustomEvent_Tag_1) == 0x000030, "Member 'WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer::K2Node_CustomEvent_Tag_1' has a wrong offset!");
static_assert(offsetof(WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer, K2Node_CreateDelegate_OutputDelegate_1) == 0x00003C, "Member 'WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer, K2Node_CustomEvent_Tag) == 0x00004C, "Member 'WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer::K2Node_CustomEvent_Tag' has a wrong offset!");
static_assert(offsetof(WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer, Temp_struct_Variable) == 0x000054, "Member 'WBP_Limbs_DebuffContainer_C_ExecuteUbergraph_WBP_Limbs_DebuffContainer::Temp_struct_Variable' has a wrong offset!");

// Function WBP_Limbs_DebuffContainer.WBP_Limbs_DebuffContainer_C.OnTagAdded_525530E248F7049BDB8C72B18AC39A5D
// 0x0008 (0x0008 - 0x0000)
struct WBP_Limbs_DebuffContainer_C_OnTagAdded_525530E248F7049BDB8C72B18AC39A5D final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Limbs_DebuffContainer_C_OnTagAdded_525530E248F7049BDB8C72B18AC39A5D) == 0x000004, "Wrong alignment on WBP_Limbs_DebuffContainer_C_OnTagAdded_525530E248F7049BDB8C72B18AC39A5D");
static_assert(sizeof(WBP_Limbs_DebuffContainer_C_OnTagAdded_525530E248F7049BDB8C72B18AC39A5D) == 0x000008, "Wrong size on WBP_Limbs_DebuffContainer_C_OnTagAdded_525530E248F7049BDB8C72B18AC39A5D");
static_assert(offsetof(WBP_Limbs_DebuffContainer_C_OnTagAdded_525530E248F7049BDB8C72B18AC39A5D, Tag) == 0x000000, "Member 'WBP_Limbs_DebuffContainer_C_OnTagAdded_525530E248F7049BDB8C72B18AC39A5D::Tag' has a wrong offset!");

// Function WBP_Limbs_DebuffContainer.WBP_Limbs_DebuffContainer_C.OnTagRemoved_525530E248F7049BDB8C72B18AC39A5D
// 0x0008 (0x0008 - 0x0000)
struct WBP_Limbs_DebuffContainer_C_OnTagRemoved_525530E248F7049BDB8C72B18AC39A5D final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Limbs_DebuffContainer_C_OnTagRemoved_525530E248F7049BDB8C72B18AC39A5D) == 0x000004, "Wrong alignment on WBP_Limbs_DebuffContainer_C_OnTagRemoved_525530E248F7049BDB8C72B18AC39A5D");
static_assert(sizeof(WBP_Limbs_DebuffContainer_C_OnTagRemoved_525530E248F7049BDB8C72B18AC39A5D) == 0x000008, "Wrong size on WBP_Limbs_DebuffContainer_C_OnTagRemoved_525530E248F7049BDB8C72B18AC39A5D");
static_assert(offsetof(WBP_Limbs_DebuffContainer_C_OnTagRemoved_525530E248F7049BDB8C72B18AC39A5D, Tag) == 0x000000, "Member 'WBP_Limbs_DebuffContainer_C_OnTagRemoved_525530E248F7049BDB8C72B18AC39A5D::Tag' has a wrong offset!");

}

