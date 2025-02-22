#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Vehicle

#include "Basic.hpp"

#include "G01_structs.hpp"


namespace SDK::Params
{

// Function WBP_Vehicle.WBP_Vehicle_C.Clear Callbacks
// 0x0050 (0x0050 - 0x0000)
struct WBP_Vehicle_C_Clear_Callbacks final
{
public:
	class APawn*                                  PlayerCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_581D[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AGzCharacter* Character, EGzVehicleSeatType NewSeat, EGzVehicleSeatType OldSeat)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_581E[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzCharacter*                           K2Node_DynamicCast_AsGz_Character;                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_581F[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AGzCharacter* Character, EGzVehicleSeatType NewSeat, EGzVehicleSeatType OldSeat)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Vehicle_C_Clear_Callbacks) == 0x000008, "Wrong alignment on WBP_Vehicle_C_Clear_Callbacks");
static_assert(sizeof(WBP_Vehicle_C_Clear_Callbacks) == 0x000050, "Wrong size on WBP_Vehicle_C_Clear_Callbacks");
static_assert(offsetof(WBP_Vehicle_C_Clear_Callbacks, PlayerCharacter) == 0x000000, "Member 'WBP_Vehicle_C_Clear_Callbacks::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_Clear_Callbacks, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_Vehicle_C_Clear_Callbacks::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_Clear_Callbacks, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'WBP_Vehicle_C_Clear_Callbacks::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_Clear_Callbacks, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'WBP_Vehicle_C_Clear_Callbacks::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_Clear_Callbacks, K2Node_DynamicCast_AsGz_Character) == 0x000020, "Member 'WBP_Vehicle_C_Clear_Callbacks::K2Node_DynamicCast_AsGz_Character' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_Clear_Callbacks, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_Vehicle_C_Clear_Callbacks::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_Clear_Callbacks, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'WBP_Vehicle_C_Clear_Callbacks::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_Clear_Callbacks, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'WBP_Vehicle_C_Clear_Callbacks::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function WBP_Vehicle.WBP_Vehicle_C.ExecuteUbergraph_WBP_Vehicle
// 0x0078 (0x0078 - 0x0000)
struct WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AGzCharacter* Character, EGzVehicleSeatType NewSeat, EGzVehicleSeatType OldSeat)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5820[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_Vehicle_Layout_C*                  CallFunc_GetVehicleLayout_AsWBP_Base_Vehicle_Seat_Position; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AGzCharacter* Character, EGzVehicleSeatType NewSeat, EGzVehicleSeatType OldSeat)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGzCharacter*                           K2Node_CustomEvent_Character;                      // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EGzVehicleSeatType                            K2Node_CustomEvent_NewSeat;                        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGzVehicleSeatType                            K2Node_CustomEvent_OldSeat;                        // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5821[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_OldViewTarget;                        // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalViewTarget_ReturnValue;            // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5822[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_NewViewTarget;                        // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGzCharacter*                           K2Node_DynamicCast_AsGz_Character;                 // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle) == 0x000008, "Wrong alignment on WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle");
static_assert(sizeof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle) == 0x000078, "Wrong size on WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle");
static_assert(offsetof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle, EntryPoint) == 0x000000, "Member 'WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle, CallFunc_GetVehicleLayout_AsWBP_Base_Vehicle_Seat_Position) == 0x000028, "Member 'WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle::CallFunc_GetVehicleLayout_AsWBP_Base_Vehicle_Seat_Position' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle, K2Node_CustomEvent_Character) == 0x000040, "Member 'WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle::K2Node_CustomEvent_Character' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle, K2Node_CustomEvent_NewSeat) == 0x000048, "Member 'WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle::K2Node_CustomEvent_NewSeat' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle, K2Node_CustomEvent_OldSeat) == 0x000049, "Member 'WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle::K2Node_CustomEvent_OldSeat' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle, K2Node_Event_OldViewTarget) == 0x000050, "Member 'WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle::K2Node_Event_OldViewTarget' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000058, "Member 'WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle, CallFunc_IsLocalViewTarget_ReturnValue) == 0x000059, "Member 'WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle::CallFunc_IsLocalViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle, K2Node_Event_NewViewTarget) == 0x000060, "Member 'WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle::K2Node_Event_NewViewTarget' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle, K2Node_DynamicCast_AsGz_Character) == 0x000068, "Member 'WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle::K2Node_DynamicCast_AsGz_Character' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle, CallFunc_IsValid_ReturnValue) == 0x000071, "Member 'WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle, CallFunc_IsValid_ReturnValue_1) == 0x000072, "Member 'WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_Vehicle.WBP_Vehicle_C.GetVehicleLayout
// 0x0038 (0x0038 - 0x0000)
struct WBP_Vehicle_C_GetVehicleLayout final
{
public:
	class AGzVehicle*                             Vehicle;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Vehicle_Layout_C*                  AsWBP_Base_Vehicle_Seat_Position;                  // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	const class UGzVehicleConfig*                 CallFunc_GetVehicleConfig_ReturnValue;             // 0x0010(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasSeat_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5823[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetWidgetAtIndex_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Vehicle_Layout_C*                  K2Node_DynamicCast_AsWBP_Vehicle_Layout;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Vehicle_C_GetVehicleLayout) == 0x000008, "Wrong alignment on WBP_Vehicle_C_GetVehicleLayout");
static_assert(sizeof(WBP_Vehicle_C_GetVehicleLayout) == 0x000038, "Wrong size on WBP_Vehicle_C_GetVehicleLayout");
static_assert(offsetof(WBP_Vehicle_C_GetVehicleLayout, Vehicle) == 0x000000, "Member 'WBP_Vehicle_C_GetVehicleLayout::Vehicle' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_GetVehicleLayout, AsWBP_Base_Vehicle_Seat_Position) == 0x000008, "Member 'WBP_Vehicle_C_GetVehicleLayout::AsWBP_Base_Vehicle_Seat_Position' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_GetVehicleLayout, CallFunc_GetVehicleConfig_ReturnValue) == 0x000010, "Member 'WBP_Vehicle_C_GetVehicleLayout::CallFunc_GetVehicleConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_GetVehicleLayout, CallFunc_HasSeat_ReturnValue) == 0x000018, "Member 'WBP_Vehicle_C_GetVehicleLayout::CallFunc_HasSeat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_GetVehicleLayout, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'WBP_Vehicle_C_GetVehicleLayout::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_GetVehicleLayout, CallFunc_SelectInt_ReturnValue) == 0x00001C, "Member 'WBP_Vehicle_C_GetVehicleLayout::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_GetVehicleLayout, CallFunc_GetWidgetAtIndex_ReturnValue) == 0x000020, "Member 'WBP_Vehicle_C_GetVehicleLayout::CallFunc_GetWidgetAtIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_GetVehicleLayout, K2Node_DynamicCast_AsWBP_Vehicle_Layout) == 0x000028, "Member 'WBP_Vehicle_C_GetVehicleLayout::K2Node_DynamicCast_AsWBP_Vehicle_Layout' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_GetVehicleLayout, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_Vehicle_C_GetVehicleLayout::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_Vehicle.WBP_Vehicle_C.OnSeatEvent
// 0x0010 (0x0010 - 0x0000)
struct WBP_Vehicle_C_OnSeatEvent final
{
public:
	class AGzCharacter*                           Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EGzVehicleSeatType                            NewSeat;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGzVehicleSeatType                            OldSeat;                                           // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Vehicle_C_OnSeatEvent) == 0x000008, "Wrong alignment on WBP_Vehicle_C_OnSeatEvent");
static_assert(sizeof(WBP_Vehicle_C_OnSeatEvent) == 0x000010, "Wrong size on WBP_Vehicle_C_OnSeatEvent");
static_assert(offsetof(WBP_Vehicle_C_OnSeatEvent, Character) == 0x000000, "Member 'WBP_Vehicle_C_OnSeatEvent::Character' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_OnSeatEvent, NewSeat) == 0x000008, "Member 'WBP_Vehicle_C_OnSeatEvent::NewSeat' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_OnSeatEvent, OldSeat) == 0x000009, "Member 'WBP_Vehicle_C_OnSeatEvent::OldSeat' has a wrong offset!");

// Function WBP_Vehicle.WBP_Vehicle_C.ReceiveBindEvents
// 0x0008 (0x0008 - 0x0000)
struct WBP_Vehicle_C_ReceiveBindEvents final
{
public:
	class APawn*                                  NewViewTarget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Vehicle_C_ReceiveBindEvents) == 0x000008, "Wrong alignment on WBP_Vehicle_C_ReceiveBindEvents");
static_assert(sizeof(WBP_Vehicle_C_ReceiveBindEvents) == 0x000008, "Wrong size on WBP_Vehicle_C_ReceiveBindEvents");
static_assert(offsetof(WBP_Vehicle_C_ReceiveBindEvents, NewViewTarget) == 0x000000, "Member 'WBP_Vehicle_C_ReceiveBindEvents::NewViewTarget' has a wrong offset!");

// Function WBP_Vehicle.WBP_Vehicle_C.ReceiveUnbindEvents
// 0x0008 (0x0008 - 0x0000)
struct WBP_Vehicle_C_ReceiveUnbindEvents final
{
public:
	class APawn*                                  OldViewTarget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Vehicle_C_ReceiveUnbindEvents) == 0x000008, "Wrong alignment on WBP_Vehicle_C_ReceiveUnbindEvents");
static_assert(sizeof(WBP_Vehicle_C_ReceiveUnbindEvents) == 0x000008, "Wrong size on WBP_Vehicle_C_ReceiveUnbindEvents");
static_assert(offsetof(WBP_Vehicle_C_ReceiveUnbindEvents, OldViewTarget) == 0x000000, "Member 'WBP_Vehicle_C_ReceiveUnbindEvents::OldViewTarget' has a wrong offset!");

// Function WBP_Vehicle.WBP_Vehicle_C.Vehicle Seat Changed
// 0x0020 (0x0020 - 0x0000)
struct WBP_Vehicle_C_Vehicle_Seat_Changed final
{
public:
	class AGzCharacter*                           Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EGzVehicleSeatType                            NewSeat;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGzVehicleSeatType                            OldSeat;                                           // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalViewTarget_ReturnValue;            // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5824[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzVehicle*                             CallFunc_GetCurrentVehicle_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Vehicle_C_Vehicle_Seat_Changed) == 0x000008, "Wrong alignment on WBP_Vehicle_C_Vehicle_Seat_Changed");
static_assert(sizeof(WBP_Vehicle_C_Vehicle_Seat_Changed) == 0x000020, "Wrong size on WBP_Vehicle_C_Vehicle_Seat_Changed");
static_assert(offsetof(WBP_Vehicle_C_Vehicle_Seat_Changed, Character) == 0x000000, "Member 'WBP_Vehicle_C_Vehicle_Seat_Changed::Character' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_Vehicle_Seat_Changed, NewSeat) == 0x000008, "Member 'WBP_Vehicle_C_Vehicle_Seat_Changed::NewSeat' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_Vehicle_Seat_Changed, OldSeat) == 0x000009, "Member 'WBP_Vehicle_C_Vehicle_Seat_Changed::OldSeat' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_Vehicle_Seat_Changed, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00000A, "Member 'WBP_Vehicle_C_Vehicle_Seat_Changed::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_Vehicle_Seat_Changed, CallFunc_IsLocalViewTarget_ReturnValue) == 0x00000B, "Member 'WBP_Vehicle_C_Vehicle_Seat_Changed::CallFunc_IsLocalViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_Vehicle_Seat_Changed, CallFunc_GetCurrentVehicle_ReturnValue) == 0x000010, "Member 'WBP_Vehicle_C_Vehicle_Seat_Changed::CallFunc_GetCurrentVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_C_Vehicle_Seat_Changed, CallFunc_BooleanAND_ReturnValue) == 0x000018, "Member 'WBP_Vehicle_C_Vehicle_Seat_Changed::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

