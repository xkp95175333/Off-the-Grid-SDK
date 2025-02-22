#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_JetpackAction

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function WBP_JetpackAction.WBP_JetpackAction_C.ExecuteUbergraph_WBP_JetpackAction
// 0x0160 (0x0160 - 0x0000)
struct WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1452[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzAsyncTaskGameplayTagAddedRemoved*    CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1453[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_CustomEvent_Tag_5;                          // 0x002C(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_Tag_4;                          // 0x0034(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x004C(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_Tag_3;                          // 0x0064(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_Tag_2;                          // 0x006C(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable_2;                            // 0x0084(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_Tag_1;                          // 0x009C(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_Tag;                            // 0x00A4(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable_3;                            // 0x00BC(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x00C4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1454[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzAsyncTaskGameplayTagAddedRemoved*    CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_1; // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1455[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzAsyncTaskGameplayTagAddedRemoved*    CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_2; // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_Tag_6;                          // 0x00F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1456[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x00FC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1457[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x0110(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1458[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzAsyncTaskGameplayTagAddedRemoved*    CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_3; // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_Tag_7;                          // 0x0130(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1459[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_CustomEvent_PawnRef;                        // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGzPlayerCharacter*                     K2Node_DynamicCast_AsGz_Player_Character;          // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_145A[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzAbilitySystemComponent*              CallFunc_GetGzAbilitySystemComponent_ReturnValue;  // 0x0158(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction) == 0x000008, "Wrong alignment on WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction");
static_assert(sizeof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction) == 0x000160, "Wrong size on WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, EntryPoint) == 0x000000, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, Temp_struct_Variable) == 0x000004, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue) == 0x000010, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_CustomEvent_Tag_5) == 0x00002C, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_CustomEvent_Tag_5' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_CustomEvent_Tag_4) == 0x000034, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_CustomEvent_Tag_4' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_CreateDelegate_OutputDelegate_1) == 0x00003C, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, Temp_struct_Variable_1) == 0x00004C, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_CreateDelegate_OutputDelegate_2) == 0x000054, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_CustomEvent_Tag_3) == 0x000064, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_CustomEvent_Tag_3' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_CustomEvent_Tag_2) == 0x00006C, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_CustomEvent_Tag_2' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_CreateDelegate_OutputDelegate_3) == 0x000074, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, Temp_struct_Variable_2) == 0x000084, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_CreateDelegate_OutputDelegate_4) == 0x00008C, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_CustomEvent_Tag_1) == 0x00009C, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_CustomEvent_Tag_1' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_CustomEvent_Tag) == 0x0000A4, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_CustomEvent_Tag' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000AC, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, Temp_struct_Variable_3) == 0x0000BC, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000C4, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_1) == 0x0000D8, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, CallFunc_IsValid_ReturnValue_1) == 0x0000E0, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_2) == 0x0000E8, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_CustomEvent_Tag_6) == 0x0000F0, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_CustomEvent_Tag_6' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, CallFunc_IsValid_ReturnValue_2) == 0x0000F8, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_CreateDelegate_OutputDelegate_7) == 0x0000FC, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000110, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000120, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_3) == 0x000128, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_CustomEvent_Tag_7) == 0x000130, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_CustomEvent_Tag_7' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, CallFunc_IsValid_ReturnValue_3) == 0x000138, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_CustomEvent_PawnRef) == 0x000140, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_CustomEvent_PawnRef' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_DynamicCast_AsGz_Player_Character) == 0x000148, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_DynamicCast_AsGz_Player_Character' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, K2Node_DynamicCast_bSuccess) == 0x000150, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, CallFunc_IsValid_ReturnValue_4) == 0x000151, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction, CallFunc_GetGzAbilitySystemComponent_ReturnValue) == 0x000158, "Member 'WBP_JetpackAction_C_ExecuteUbergraph_WBP_JetpackAction::CallFunc_GetGzAbilitySystemComponent_ReturnValue' has a wrong offset!");

// Function WBP_JetpackAction.WBP_JetpackAction_C.ListenForTags
// 0x0008 (0x0008 - 0x0000)
struct WBP_JetpackAction_C_ListenForTags final
{
public:
	class APawn*                                  Param_PawnRef;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_JetpackAction_C_ListenForTags) == 0x000008, "Wrong alignment on WBP_JetpackAction_C_ListenForTags");
static_assert(sizeof(WBP_JetpackAction_C_ListenForTags) == 0x000008, "Wrong size on WBP_JetpackAction_C_ListenForTags");
static_assert(offsetof(WBP_JetpackAction_C_ListenForTags, Param_PawnRef) == 0x000000, "Member 'WBP_JetpackAction_C_ListenForTags::Param_PawnRef' has a wrong offset!");

// Function WBP_JetpackAction.WBP_JetpackAction_C.OnTagAdded_11E66EFC4FB12EE9C4E82E9225AE2C6B
// 0x0008 (0x0008 - 0x0000)
struct WBP_JetpackAction_C_OnTagAdded_11E66EFC4FB12EE9C4E82E9225AE2C6B final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_JetpackAction_C_OnTagAdded_11E66EFC4FB12EE9C4E82E9225AE2C6B) == 0x000004, "Wrong alignment on WBP_JetpackAction_C_OnTagAdded_11E66EFC4FB12EE9C4E82E9225AE2C6B");
static_assert(sizeof(WBP_JetpackAction_C_OnTagAdded_11E66EFC4FB12EE9C4E82E9225AE2C6B) == 0x000008, "Wrong size on WBP_JetpackAction_C_OnTagAdded_11E66EFC4FB12EE9C4E82E9225AE2C6B");
static_assert(offsetof(WBP_JetpackAction_C_OnTagAdded_11E66EFC4FB12EE9C4E82E9225AE2C6B, Tag) == 0x000000, "Member 'WBP_JetpackAction_C_OnTagAdded_11E66EFC4FB12EE9C4E82E9225AE2C6B::Tag' has a wrong offset!");

// Function WBP_JetpackAction.WBP_JetpackAction_C.OnTagAdded_22C0C9F94F740AEC05D15BB91A02153D
// 0x0008 (0x0008 - 0x0000)
struct WBP_JetpackAction_C_OnTagAdded_22C0C9F94F740AEC05D15BB91A02153D final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_JetpackAction_C_OnTagAdded_22C0C9F94F740AEC05D15BB91A02153D) == 0x000004, "Wrong alignment on WBP_JetpackAction_C_OnTagAdded_22C0C9F94F740AEC05D15BB91A02153D");
static_assert(sizeof(WBP_JetpackAction_C_OnTagAdded_22C0C9F94F740AEC05D15BB91A02153D) == 0x000008, "Wrong size on WBP_JetpackAction_C_OnTagAdded_22C0C9F94F740AEC05D15BB91A02153D");
static_assert(offsetof(WBP_JetpackAction_C_OnTagAdded_22C0C9F94F740AEC05D15BB91A02153D, Tag) == 0x000000, "Member 'WBP_JetpackAction_C_OnTagAdded_22C0C9F94F740AEC05D15BB91A02153D::Tag' has a wrong offset!");

// Function WBP_JetpackAction.WBP_JetpackAction_C.OnTagAdded_A99E8B3C420BA17DDDC4018076D8C71A
// 0x0008 (0x0008 - 0x0000)
struct WBP_JetpackAction_C_OnTagAdded_A99E8B3C420BA17DDDC4018076D8C71A final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_JetpackAction_C_OnTagAdded_A99E8B3C420BA17DDDC4018076D8C71A) == 0x000004, "Wrong alignment on WBP_JetpackAction_C_OnTagAdded_A99E8B3C420BA17DDDC4018076D8C71A");
static_assert(sizeof(WBP_JetpackAction_C_OnTagAdded_A99E8B3C420BA17DDDC4018076D8C71A) == 0x000008, "Wrong size on WBP_JetpackAction_C_OnTagAdded_A99E8B3C420BA17DDDC4018076D8C71A");
static_assert(offsetof(WBP_JetpackAction_C_OnTagAdded_A99E8B3C420BA17DDDC4018076D8C71A, Tag) == 0x000000, "Member 'WBP_JetpackAction_C_OnTagAdded_A99E8B3C420BA17DDDC4018076D8C71A::Tag' has a wrong offset!");

// Function WBP_JetpackAction.WBP_JetpackAction_C.OnTagAdded_E829D0734D069E45544C5AA8163A61C1
// 0x0008 (0x0008 - 0x0000)
struct WBP_JetpackAction_C_OnTagAdded_E829D0734D069E45544C5AA8163A61C1 final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_JetpackAction_C_OnTagAdded_E829D0734D069E45544C5AA8163A61C1) == 0x000004, "Wrong alignment on WBP_JetpackAction_C_OnTagAdded_E829D0734D069E45544C5AA8163A61C1");
static_assert(sizeof(WBP_JetpackAction_C_OnTagAdded_E829D0734D069E45544C5AA8163A61C1) == 0x000008, "Wrong size on WBP_JetpackAction_C_OnTagAdded_E829D0734D069E45544C5AA8163A61C1");
static_assert(offsetof(WBP_JetpackAction_C_OnTagAdded_E829D0734D069E45544C5AA8163A61C1, Tag) == 0x000000, "Member 'WBP_JetpackAction_C_OnTagAdded_E829D0734D069E45544C5AA8163A61C1::Tag' has a wrong offset!");

// Function WBP_JetpackAction.WBP_JetpackAction_C.OnTagRemoved_11E66EFC4FB12EE9C4E82E9225AE2C6B
// 0x0008 (0x0008 - 0x0000)
struct WBP_JetpackAction_C_OnTagRemoved_11E66EFC4FB12EE9C4E82E9225AE2C6B final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_JetpackAction_C_OnTagRemoved_11E66EFC4FB12EE9C4E82E9225AE2C6B) == 0x000004, "Wrong alignment on WBP_JetpackAction_C_OnTagRemoved_11E66EFC4FB12EE9C4E82E9225AE2C6B");
static_assert(sizeof(WBP_JetpackAction_C_OnTagRemoved_11E66EFC4FB12EE9C4E82E9225AE2C6B) == 0x000008, "Wrong size on WBP_JetpackAction_C_OnTagRemoved_11E66EFC4FB12EE9C4E82E9225AE2C6B");
static_assert(offsetof(WBP_JetpackAction_C_OnTagRemoved_11E66EFC4FB12EE9C4E82E9225AE2C6B, Tag) == 0x000000, "Member 'WBP_JetpackAction_C_OnTagRemoved_11E66EFC4FB12EE9C4E82E9225AE2C6B::Tag' has a wrong offset!");

// Function WBP_JetpackAction.WBP_JetpackAction_C.OnTagRemoved_22C0C9F94F740AEC05D15BB91A02153D
// 0x0008 (0x0008 - 0x0000)
struct WBP_JetpackAction_C_OnTagRemoved_22C0C9F94F740AEC05D15BB91A02153D final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_JetpackAction_C_OnTagRemoved_22C0C9F94F740AEC05D15BB91A02153D) == 0x000004, "Wrong alignment on WBP_JetpackAction_C_OnTagRemoved_22C0C9F94F740AEC05D15BB91A02153D");
static_assert(sizeof(WBP_JetpackAction_C_OnTagRemoved_22C0C9F94F740AEC05D15BB91A02153D) == 0x000008, "Wrong size on WBP_JetpackAction_C_OnTagRemoved_22C0C9F94F740AEC05D15BB91A02153D");
static_assert(offsetof(WBP_JetpackAction_C_OnTagRemoved_22C0C9F94F740AEC05D15BB91A02153D, Tag) == 0x000000, "Member 'WBP_JetpackAction_C_OnTagRemoved_22C0C9F94F740AEC05D15BB91A02153D::Tag' has a wrong offset!");

// Function WBP_JetpackAction.WBP_JetpackAction_C.OnTagRemoved_A99E8B3C420BA17DDDC4018076D8C71A
// 0x0008 (0x0008 - 0x0000)
struct WBP_JetpackAction_C_OnTagRemoved_A99E8B3C420BA17DDDC4018076D8C71A final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_JetpackAction_C_OnTagRemoved_A99E8B3C420BA17DDDC4018076D8C71A) == 0x000004, "Wrong alignment on WBP_JetpackAction_C_OnTagRemoved_A99E8B3C420BA17DDDC4018076D8C71A");
static_assert(sizeof(WBP_JetpackAction_C_OnTagRemoved_A99E8B3C420BA17DDDC4018076D8C71A) == 0x000008, "Wrong size on WBP_JetpackAction_C_OnTagRemoved_A99E8B3C420BA17DDDC4018076D8C71A");
static_assert(offsetof(WBP_JetpackAction_C_OnTagRemoved_A99E8B3C420BA17DDDC4018076D8C71A, Tag) == 0x000000, "Member 'WBP_JetpackAction_C_OnTagRemoved_A99E8B3C420BA17DDDC4018076D8C71A::Tag' has a wrong offset!");

// Function WBP_JetpackAction.WBP_JetpackAction_C.OnTagRemoved_E829D0734D069E45544C5AA8163A61C1
// 0x0008 (0x0008 - 0x0000)
struct WBP_JetpackAction_C_OnTagRemoved_E829D0734D069E45544C5AA8163A61C1 final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_JetpackAction_C_OnTagRemoved_E829D0734D069E45544C5AA8163A61C1) == 0x000004, "Wrong alignment on WBP_JetpackAction_C_OnTagRemoved_E829D0734D069E45544C5AA8163A61C1");
static_assert(sizeof(WBP_JetpackAction_C_OnTagRemoved_E829D0734D069E45544C5AA8163A61C1) == 0x000008, "Wrong size on WBP_JetpackAction_C_OnTagRemoved_E829D0734D069E45544C5AA8163A61C1");
static_assert(offsetof(WBP_JetpackAction_C_OnTagRemoved_E829D0734D069E45544C5AA8163A61C1, Tag) == 0x000000, "Member 'WBP_JetpackAction_C_OnTagRemoved_E829D0734D069E45544C5AA8163A61C1::Tag' has a wrong offset!");

// Function WBP_JetpackAction.WBP_JetpackAction_C.OnTagUpdated
// 0x0014 (0x0014 - 0x0000)
struct WBP_JetpackAction_C_OnTagUpdated final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_145B[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0004(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanActivateAbility_ReturnValue;           // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_JetpackAction_C_OnTagUpdated) == 0x000004, "Wrong alignment on WBP_JetpackAction_C_OnTagUpdated");
static_assert(sizeof(WBP_JetpackAction_C_OnTagUpdated) == 0x000014, "Wrong size on WBP_JetpackAction_C_OnTagUpdated");
static_assert(offsetof(WBP_JetpackAction_C_OnTagUpdated, Temp_byte_Variable) == 0x000000, "Member 'WBP_JetpackAction_C_OnTagUpdated::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_OnTagUpdated, Temp_byte_Variable_1) == 0x000001, "Member 'WBP_JetpackAction_C_OnTagUpdated::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_OnTagUpdated, Temp_struct_Variable) == 0x000004, "Member 'WBP_JetpackAction_C_OnTagUpdated::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_OnTagUpdated, Temp_bool_Variable) == 0x00000C, "Member 'WBP_JetpackAction_C_OnTagUpdated::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_OnTagUpdated, CallFunc_GetVisibility_ReturnValue) == 0x00000D, "Member 'WBP_JetpackAction_C_OnTagUpdated::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_OnTagUpdated, K2Node_Select_Default) == 0x00000E, "Member 'WBP_JetpackAction_C_OnTagUpdated::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_OnTagUpdated, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000F, "Member 'WBP_JetpackAction_C_OnTagUpdated::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_OnTagUpdated, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_JetpackAction_C_OnTagUpdated::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JetpackAction_C_OnTagUpdated, CallFunc_CanActivateAbility_ReturnValue) == 0x000011, "Member 'WBP_JetpackAction_C_OnTagUpdated::CallFunc_CanActivateAbility_ReturnValue' has a wrong offset!");

}

