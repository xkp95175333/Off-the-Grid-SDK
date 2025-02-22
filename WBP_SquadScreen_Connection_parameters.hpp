#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SquadScreen_Connection

#include "Basic.hpp"

#include "G01_structs.hpp"


namespace SDK::Params
{

// Function WBP_SquadScreen_Connection.WBP_SquadScreen_Connection_C.OnConnectionChanged_Event
// 0x0008 (0x0008 - 0x0000)
struct WBP_SquadScreen_Connection_C_OnConnectionChanged_Event final
{
public:
	class AGzPlayerState*                         PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SquadScreen_Connection_C_OnConnectionChanged_Event) == 0x000008, "Wrong alignment on WBP_SquadScreen_Connection_C_OnConnectionChanged_Event");
static_assert(sizeof(WBP_SquadScreen_Connection_C_OnConnectionChanged_Event) == 0x000008, "Wrong size on WBP_SquadScreen_Connection_C_OnConnectionChanged_Event");
static_assert(offsetof(WBP_SquadScreen_Connection_C_OnConnectionChanged_Event, PlayerState) == 0x000000, "Member 'WBP_SquadScreen_Connection_C_OnConnectionChanged_Event::PlayerState' has a wrong offset!");

// Function WBP_SquadScreen_Connection.WBP_SquadScreen_Connection_C.Init
// 0x0008 (0x0008 - 0x0000)
struct WBP_SquadScreen_Connection_C_Init final
{
public:
	class AGzPlayerState*                         Param_PS;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SquadScreen_Connection_C_Init) == 0x000008, "Wrong alignment on WBP_SquadScreen_Connection_C_Init");
static_assert(sizeof(WBP_SquadScreen_Connection_C_Init) == 0x000008, "Wrong size on WBP_SquadScreen_Connection_C_Init");
static_assert(offsetof(WBP_SquadScreen_Connection_C_Init, Param_PS) == 0x000000, "Member 'WBP_SquadScreen_Connection_C_Init::Param_PS' has a wrong offset!");

// Function WBP_SquadScreen_Connection.WBP_SquadScreen_Connection_C.ExecuteUbergraph_WBP_SquadScreen_Connection
// 0x0030 (0x0030 - 0x0000)
struct WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AGzPlayerState* PlayerState)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6773[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzPlayerState*                         K2Node_CustomEvent_PS;                             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGzConnectionState                            CallFunc_GetConnectionState_ReturnValue;           // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6774[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzPlayerState*                         K2Node_CustomEvent_PlayerState;                    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection) == 0x000008, "Wrong alignment on WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection");
static_assert(sizeof(WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection) == 0x000030, "Wrong size on WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection");
static_assert(offsetof(WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection, EntryPoint) == 0x000000, "Member 'WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection, K2Node_CustomEvent_PS) == 0x000018, "Member 'WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection::K2Node_CustomEvent_PS' has a wrong offset!");
static_assert(offsetof(WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection, CallFunc_GetConnectionState_ReturnValue) == 0x000021, "Member 'WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection::CallFunc_GetConnectionState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection, K2Node_SwitchEnum_CmpSuccess) == 0x000022, "Member 'WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection, K2Node_CustomEvent_PlayerState) == 0x000028, "Member 'WBP_SquadScreen_Connection_C_ExecuteUbergraph_WBP_SquadScreen_Connection::K2Node_CustomEvent_PlayerState' has a wrong offset!");

}

