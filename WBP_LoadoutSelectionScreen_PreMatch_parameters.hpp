#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoadoutSelectionScreen_PreMatch

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "G01_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_LoadoutSelectionScreen_PreMatch.WBP_LoadoutSelectionScreen_PreMatch_C.OnConfirmed_BP
// 0x0078 (0x0078 - 0x0000)
struct WBP_LoadoutSelectionScreen_PreMatch_C_OnConfirmed_BP final
{
public:
	class AGzPlayerController*                    ConfirmedBy;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGzLoadoutDataConfig                   LoadoutConfig;                                     // 0x0008(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_LoadoutSelectionScreen_PreMatch_C_OnConfirmed_BP) == 0x000008, "Wrong alignment on WBP_LoadoutSelectionScreen_PreMatch_C_OnConfirmed_BP");
static_assert(sizeof(WBP_LoadoutSelectionScreen_PreMatch_C_OnConfirmed_BP) == 0x000078, "Wrong size on WBP_LoadoutSelectionScreen_PreMatch_C_OnConfirmed_BP");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_OnConfirmed_BP, ConfirmedBy) == 0x000000, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_OnConfirmed_BP::ConfirmedBy' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_OnConfirmed_BP, LoadoutConfig) == 0x000008, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_OnConfirmed_BP::LoadoutConfig' has a wrong offset!");

// Function WBP_LoadoutSelectionScreen_PreMatch.WBP_LoadoutSelectionScreen_PreMatch_C.Finish Loadout Selection
// 0x0010 (0x0010 - 0x0000)
struct WBP_LoadoutSelectionScreen_PreMatch_C_Finish_Loadout_Selection final
{
public:
	struct FGuid                                  LoadoutGuid;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LoadoutSelectionScreen_PreMatch_C_Finish_Loadout_Selection) == 0x000004, "Wrong alignment on WBP_LoadoutSelectionScreen_PreMatch_C_Finish_Loadout_Selection");
static_assert(sizeof(WBP_LoadoutSelectionScreen_PreMatch_C_Finish_Loadout_Selection) == 0x000010, "Wrong size on WBP_LoadoutSelectionScreen_PreMatch_C_Finish_Loadout_Selection");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_Finish_Loadout_Selection, LoadoutGuid) == 0x000000, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_Finish_Loadout_Selection::LoadoutGuid' has a wrong offset!");

// Function WBP_LoadoutSelectionScreen_PreMatch.WBP_LoadoutSelectionScreen_PreMatch_C.ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch
// 0x00F0 (0x00F0 - 0x0000)
struct WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_588E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ConfirmSelectionButton_C*          K2Node_DynamicCast_AsWBP_Confirm_Selection_Button; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_588F[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5890[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzPlayerController*                    K2Node_Event_ConfirmedBy;                          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGzLoadoutDataConfig                   K2Node_Event_LoadoutConfig;                        // 0x0028(0x0070)(ConstParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5891[0x2];                                     // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetServerWorldTimeSeconds_ReturnValue;    // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5892[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00D0(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SetCountDownWithText_Cooldown_ImplicitCast; // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch) == 0x000008, "Wrong alignment on WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch");
static_assert(sizeof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch) == 0x0000F0, "Wrong size on WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, EntryPoint) == 0x000000, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, K2Node_DynamicCast_AsWBP_Confirm_Selection_Button) == 0x000008, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::K2Node_DynamicCast_AsWBP_Confirm_Selection_Button' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, CallFunc_Array_Add_ReturnValue) == 0x000014, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, CallFunc_Array_Add_ReturnValue_1) == 0x000018, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, K2Node_Event_ConfirmedBy) == 0x000020, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::K2Node_Event_ConfirmedBy' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, K2Node_Event_LoadoutConfig) == 0x000028, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::K2Node_Event_LoadoutConfig' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, CallFunc_Array_Add_ReturnValue_2) == 0x000098, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x00009C, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, CallFunc_IsValid_ReturnValue) == 0x00009D, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, CallFunc_GetGameState_ReturnValue) == 0x0000A0, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, CallFunc_GetServerWorldTimeSeconds_ReturnValue) == 0x0000A8, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::CallFunc_GetServerWorldTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000B0, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000B8, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, K2Node_CreateDelegate_OutputDelegate) == 0x0000C0, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000D0, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000D8, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, CallFunc_SetCountDownWithText_Cooldown_ImplicitCast) == 0x0000E0, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::CallFunc_SetCountDownWithText_Cooldown_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x0000E8, "Member 'WBP_LoadoutSelectionScreen_PreMatch_C_ExecuteUbergraph_WBP_LoadoutSelectionScreen_PreMatch::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");

}

