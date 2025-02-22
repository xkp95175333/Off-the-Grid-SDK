#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_Idle

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTTask_Idle.BTTask_Idle_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTTask_Idle_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_Idle_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTTask_Idle_C_ReceiveExecuteAI");
static_assert(sizeof(BTTask_Idle_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTTask_Idle_C_ReceiveExecuteAI");
static_assert(offsetof(BTTask_Idle_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTTask_Idle_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_Idle_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTTask_Idle_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

// Function BTTask_Idle.BTTask_Idle_C.ReceiveAbortAI
// 0x0010 (0x0010 - 0x0000)
struct BTTask_Idle_C_ReceiveAbortAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_Idle_C_ReceiveAbortAI) == 0x000008, "Wrong alignment on BTTask_Idle_C_ReceiveAbortAI");
static_assert(sizeof(BTTask_Idle_C_ReceiveAbortAI) == 0x000010, "Wrong size on BTTask_Idle_C_ReceiveAbortAI");
static_assert(offsetof(BTTask_Idle_C_ReceiveAbortAI, OwnerController) == 0x000000, "Member 'BTTask_Idle_C_ReceiveAbortAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_Idle_C_ReceiveAbortAI, ControlledPawn) == 0x000008, "Member 'BTTask_Idle_C_ReceiveAbortAI::ControlledPawn' has a wrong offset!");

// Function BTTask_Idle.BTTask_Idle_C.FinishIdle
// 0x0001 (0x0001 - 0x0000)
struct BTTask_Idle_C_FinishIdle final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_Idle_C_FinishIdle) == 0x000001, "Wrong alignment on BTTask_Idle_C_FinishIdle");
static_assert(sizeof(BTTask_Idle_C_FinishIdle) == 0x000001, "Wrong size on BTTask_Idle_C_FinishIdle");
static_assert(offsetof(BTTask_Idle_C_FinishIdle, Success) == 0x000000, "Member 'BTTask_Idle_C_FinishIdle::Success' has a wrong offset!");

// Function BTTask_Idle.BTTask_Idle_C.ExecuteUbergraph_BTTask_Idle
// 0x0050 (0x0050 - 0x0000)
struct BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Success)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DB1[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController_1;                    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABPC_NPC_Enemy_C*                       K2Node_DynamicCast_AsBPC_NPC_Enemy;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Success;                        // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DB2[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle) == 0x000008, "Wrong alignment on BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle");
static_assert(sizeof(BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle) == 0x000050, "Wrong size on BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle");
static_assert(offsetof(BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle, EntryPoint) == 0x000000, "Member 'BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle, K2Node_Event_OwnerController_1) == 0x000018, "Member 'BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle::K2Node_Event_OwnerController_1' has a wrong offset!");
static_assert(offsetof(BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle, K2Node_Event_ControlledPawn_1) == 0x000020, "Member 'BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle, K2Node_DynamicCast_AsBPC_NPC_Enemy) == 0x000028, "Member 'BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle::K2Node_DynamicCast_AsBPC_NPC_Enemy' has a wrong offset!");
static_assert(offsetof(BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle, K2Node_CustomEvent_Success) == 0x000031, "Member 'BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle::K2Node_CustomEvent_Success' has a wrong offset!");
static_assert(offsetof(BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle, K2Node_Event_OwnerController) == 0x000038, "Member 'BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle, K2Node_Event_ControlledPawn) == 0x000040, "Member 'BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BTTask_Idle_C_ExecuteUbergraph_BTTask_Idle::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

