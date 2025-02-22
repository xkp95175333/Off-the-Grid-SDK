#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LootContainer_Crate_Repeatable

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_LootContainer_Crate_Repeatable.BP_LootContainer_Crate_Repeatable_C.CacheGzGameState
// 0x0018 (0x0018 - 0x0000)
struct BP_LootContainer_Crate_Repeatable_C_CacheGzGameState final
{
public:
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGzGameState*                           K2Node_DynamicCast_AsGz_Game_State;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LootContainer_Crate_Repeatable_C_CacheGzGameState) == 0x000008, "Wrong alignment on BP_LootContainer_Crate_Repeatable_C_CacheGzGameState");
static_assert(sizeof(BP_LootContainer_Crate_Repeatable_C_CacheGzGameState) == 0x000018, "Wrong size on BP_LootContainer_Crate_Repeatable_C_CacheGzGameState");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_CacheGzGameState, CallFunc_GetGameState_ReturnValue) == 0x000000, "Member 'BP_LootContainer_Crate_Repeatable_C_CacheGzGameState::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_CacheGzGameState, K2Node_DynamicCast_AsGz_Game_State) == 0x000008, "Member 'BP_LootContainer_Crate_Repeatable_C_CacheGzGameState::K2Node_DynamicCast_AsGz_Game_State' has a wrong offset!");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_CacheGzGameState, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_LootContainer_Crate_Repeatable_C_CacheGzGameState::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_LootContainer_Crate_Repeatable.BP_LootContainer_Crate_Repeatable_C.CanScanOnAnyDistance
// 0x0001 (0x0001 - 0x0000)
struct BP_LootContainer_Crate_Repeatable_C_CanScanOnAnyDistance final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LootContainer_Crate_Repeatable_C_CanScanOnAnyDistance) == 0x000001, "Wrong alignment on BP_LootContainer_Crate_Repeatable_C_CanScanOnAnyDistance");
static_assert(sizeof(BP_LootContainer_Crate_Repeatable_C_CanScanOnAnyDistance) == 0x000001, "Wrong size on BP_LootContainer_Crate_Repeatable_C_CanScanOnAnyDistance");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_CanScanOnAnyDistance, ReturnValue) == 0x000000, "Member 'BP_LootContainer_Crate_Repeatable_C_CanScanOnAnyDistance::ReturnValue' has a wrong offset!");

// Function BP_LootContainer_Crate_Repeatable.BP_LootContainer_Crate_Repeatable_C.ExecuteUbergraph_BP_LootContainer_Crate_Repeatable
// 0x0004 (0x0004 - 0x0000)
struct BP_LootContainer_Crate_Repeatable_C_ExecuteUbergraph_BP_LootContainer_Crate_Repeatable final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LootContainer_Crate_Repeatable_C_ExecuteUbergraph_BP_LootContainer_Crate_Repeatable) == 0x000004, "Wrong alignment on BP_LootContainer_Crate_Repeatable_C_ExecuteUbergraph_BP_LootContainer_Crate_Repeatable");
static_assert(sizeof(BP_LootContainer_Crate_Repeatable_C_ExecuteUbergraph_BP_LootContainer_Crate_Repeatable) == 0x000004, "Wrong size on BP_LootContainer_Crate_Repeatable_C_ExecuteUbergraph_BP_LootContainer_Crate_Repeatable");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_ExecuteUbergraph_BP_LootContainer_Crate_Repeatable, EntryPoint) == 0x000000, "Member 'BP_LootContainer_Crate_Repeatable_C_ExecuteUbergraph_BP_LootContainer_Crate_Repeatable::EntryPoint' has a wrong offset!");

// Function BP_LootContainer_Crate_Repeatable.BP_LootContainer_Crate_Repeatable_C.InitRepeatableTimer
// 0x0002 (0x0002 - 0x0000)
struct BP_LootContainer_Crate_Repeatable_C_InitRepeatableTimer final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LootContainer_Crate_Repeatable_C_InitRepeatableTimer) == 0x000001, "Wrong alignment on BP_LootContainer_Crate_Repeatable_C_InitRepeatableTimer");
static_assert(sizeof(BP_LootContainer_Crate_Repeatable_C_InitRepeatableTimer) == 0x000002, "Wrong size on BP_LootContainer_Crate_Repeatable_C_InitRepeatableTimer");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_InitRepeatableTimer, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'BP_LootContainer_Crate_Repeatable_C_InitRepeatableTimer::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_InitRepeatableTimer, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_LootContainer_Crate_Repeatable_C_InitRepeatableTimer::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_LootContainer_Crate_Repeatable.BP_LootContainer_Crate_Repeatable_C.InvalidateRepeatableTimer
// 0x0002 (0x0002 - 0x0000)
struct BP_LootContainer_Crate_Repeatable_C_InvalidateRepeatableTimer final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LootContainer_Crate_Repeatable_C_InvalidateRepeatableTimer) == 0x000001, "Wrong alignment on BP_LootContainer_Crate_Repeatable_C_InvalidateRepeatableTimer");
static_assert(sizeof(BP_LootContainer_Crate_Repeatable_C_InvalidateRepeatableTimer) == 0x000002, "Wrong size on BP_LootContainer_Crate_Repeatable_C_InvalidateRepeatableTimer");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_InvalidateRepeatableTimer, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'BP_LootContainer_Crate_Repeatable_C_InvalidateRepeatableTimer::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_InvalidateRepeatableTimer, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BP_LootContainer_Crate_Repeatable_C_InvalidateRepeatableTimer::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_LootContainer_Crate_Repeatable.BP_LootContainer_Crate_Repeatable_C.OnRep_ServerEndChestCooldown
// 0x0020 (0x0020 - 0x0000)
struct BP_LootContainer_Crate_Repeatable_C_OnRep_ServerEndChestCooldown final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66F1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66F2[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LootContainer_Crate_Repeatable_C_OnRep_ServerEndChestCooldown) == 0x000008, "Wrong alignment on BP_LootContainer_Crate_Repeatable_C_OnRep_ServerEndChestCooldown");
static_assert(sizeof(BP_LootContainer_Crate_Repeatable_C_OnRep_ServerEndChestCooldown) == 0x000020, "Wrong size on BP_LootContainer_Crate_Repeatable_C_OnRep_ServerEndChestCooldown");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_OnRep_ServerEndChestCooldown, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'BP_LootContainer_Crate_Repeatable_C_OnRep_ServerEndChestCooldown::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_OnRep_ServerEndChestCooldown, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_LootContainer_Crate_Repeatable_C_OnRep_ServerEndChestCooldown::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_OnRep_ServerEndChestCooldown, CallFunc_Not_PreBool_ReturnValue) == 0x000014, "Member 'BP_LootContainer_Crate_Repeatable_C_OnRep_ServerEndChestCooldown::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_OnRep_ServerEndChestCooldown, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BP_LootContainer_Crate_Repeatable_C_OnRep_ServerEndChestCooldown::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function BP_LootContainer_Crate_Repeatable.BP_LootContainer_Crate_Repeatable_C.SetEndCooldownServerTime
// 0x0020 (0x0020 - 0x0000)
struct BP_LootContainer_Crate_Repeatable_C_SetEndCooldownServerTime final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66F3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetServerWorldTimeSeconds_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LootContainer_Crate_Repeatable_C_SetEndCooldownServerTime) == 0x000008, "Wrong alignment on BP_LootContainer_Crate_Repeatable_C_SetEndCooldownServerTime");
static_assert(sizeof(BP_LootContainer_Crate_Repeatable_C_SetEndCooldownServerTime) == 0x000020, "Wrong size on BP_LootContainer_Crate_Repeatable_C_SetEndCooldownServerTime");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_SetEndCooldownServerTime, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'BP_LootContainer_Crate_Repeatable_C_SetEndCooldownServerTime::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_SetEndCooldownServerTime, CallFunc_GetServerWorldTimeSeconds_ReturnValue) == 0x000008, "Member 'BP_LootContainer_Crate_Repeatable_C_SetEndCooldownServerTime::CallFunc_GetServerWorldTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_SetEndCooldownServerTime, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_LootContainer_Crate_Repeatable_C_SetEndCooldownServerTime::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_SetEndCooldownServerTime, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000018, "Member 'BP_LootContainer_Crate_Repeatable_C_SetEndCooldownServerTime::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function BP_LootContainer_Crate_Repeatable.BP_LootContainer_Crate_Repeatable_C.UpdateRepeatableTimer
// 0x0018 (0x0018 - 0x0000)
struct BP_LootContainer_Crate_Repeatable_C_UpdateRepeatableTimer final
{
public:
	double                                        CallFunc_GetServerWorldTimeSeconds_ReturnValue;    // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66F4[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast; // 0x0014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LootContainer_Crate_Repeatable_C_UpdateRepeatableTimer) == 0x000008, "Wrong alignment on BP_LootContainer_Crate_Repeatable_C_UpdateRepeatableTimer");
static_assert(sizeof(BP_LootContainer_Crate_Repeatable_C_UpdateRepeatableTimer) == 0x000018, "Wrong size on BP_LootContainer_Crate_Repeatable_C_UpdateRepeatableTimer");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_UpdateRepeatableTimer, CallFunc_GetServerWorldTimeSeconds_ReturnValue) == 0x000000, "Member 'BP_LootContainer_Crate_Repeatable_C_UpdateRepeatableTimer::CallFunc_GetServerWorldTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_UpdateRepeatableTimer, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_LootContainer_Crate_Repeatable_C_UpdateRepeatableTimer::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_UpdateRepeatableTimer, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_LootContainer_Crate_Repeatable_C_UpdateRepeatableTimer::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootContainer_Crate_Repeatable_C_UpdateRepeatableTimer, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast) == 0x000014, "Member 'BP_LootContainer_Crate_Repeatable_C_UpdateRepeatableTimer::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast' has a wrong offset!");

}

