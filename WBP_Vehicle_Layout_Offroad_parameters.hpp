#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Vehicle_Layout_Offroad

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Vehicle_Layout_Offroad.WBP_Vehicle_Layout_Offroad_C.InitSeatType
// 0x0038 (0x0038 - 0x0000)
struct WBP_Vehicle_Layout_Offroad_C_InitSeatType final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D7D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D7E[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D7F[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D80[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Vehicle_Seat_C*                    K2Node_DynamicCast_AsWBP_Vehicle_Seat;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Vehicle_Layout_Offroad_C_InitSeatType) == 0x000008, "Wrong alignment on WBP_Vehicle_Layout_Offroad_C_InitSeatType");
static_assert(sizeof(WBP_Vehicle_Layout_Offroad_C_InitSeatType) == 0x000038, "Wrong size on WBP_Vehicle_Layout_Offroad_C_InitSeatType");
static_assert(offsetof(WBP_Vehicle_Layout_Offroad_C_InitSeatType, Temp_int_Variable) == 0x000000, "Member 'WBP_Vehicle_Layout_Offroad_C_InitSeatType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_Layout_Offroad_C_InitSeatType, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'WBP_Vehicle_Layout_Offroad_C_InitSeatType::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_Layout_Offroad_C_InitSeatType, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'WBP_Vehicle_Layout_Offroad_C_InitSeatType::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_Layout_Offroad_C_InitSeatType, CallFunc_Conv_IntToByte_ReturnValue) == 0x00000C, "Member 'WBP_Vehicle_Layout_Offroad_C_InitSeatType::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_Layout_Offroad_C_InitSeatType, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000010, "Member 'WBP_Vehicle_Layout_Offroad_C_InitSeatType::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_Layout_Offroad_C_InitSeatType, CallFunc_GetValidValue_ReturnValue) == 0x000014, "Member 'WBP_Vehicle_Layout_Offroad_C_InitSeatType::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_Layout_Offroad_C_InitSeatType, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000015, "Member 'WBP_Vehicle_Layout_Offroad_C_InitSeatType::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_Layout_Offroad_C_InitSeatType, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WBP_Vehicle_Layout_Offroad_C_InitSeatType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_Layout_Offroad_C_InitSeatType, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'WBP_Vehicle_Layout_Offroad_C_InitSeatType::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_Layout_Offroad_C_InitSeatType, K2Node_DynamicCast_AsWBP_Vehicle_Seat) == 0x000028, "Member 'WBP_Vehicle_Layout_Offroad_C_InitSeatType::K2Node_DynamicCast_AsWBP_Vehicle_Seat' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_Layout_Offroad_C_InitSeatType, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_Vehicle_Layout_Offroad_C_InitSeatType::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Vehicle_Layout_Offroad_C_InitSeatType, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'WBP_Vehicle_Layout_Offroad_C_InitSeatType::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

