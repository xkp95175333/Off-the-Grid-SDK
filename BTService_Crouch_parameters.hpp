#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTService_Crouch

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTService_Crouch.BTService_Crouch_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTService_Crouch_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTService_Crouch_C_ReceiveTickAI) == 0x000008, "Wrong alignment on BTService_Crouch_C_ReceiveTickAI");
static_assert(sizeof(BTService_Crouch_C_ReceiveTickAI) == 0x000018, "Wrong size on BTService_Crouch_C_ReceiveTickAI");
static_assert(offsetof(BTService_Crouch_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'BTService_Crouch_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'BTService_Crouch_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'BTService_Crouch_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

// Function BTService_Crouch.BTService_Crouch_C.ExecuteUbergraph_BTService_Crouch
// 0x0078 (0x0078 - 0x0000)
struct BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A6B[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A6C[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A6D[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue_1;              // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_2;            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetValueAsBool_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValueAsEnum_ReturnValue;               // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValueAsEnum_ReturnValue_1;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;              // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0067(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A6E[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch) == 0x000008, "Wrong alignment on BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch");
static_assert(sizeof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch) == 0x000078, "Wrong size on BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, EntryPoint) == 0x000000, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_MakeLiteralName_ReturnValue) == 0x000004, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_MakeLiteralName_ReturnValue_1) == 0x00000C, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_RandomFloatInRange_ReturnValue) == 0x000018, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000020, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, K2Node_Event_OwnerController) == 0x000028, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, K2Node_Event_ControlledPawn) == 0x000030, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, K2Node_Event_DeltaSeconds) == 0x000038, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x00003C, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000040, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_GetBlackboard_ReturnValue) == 0x000048, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_GetBlackboard_ReturnValue_1) == 0x000050, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_GetBlackboard_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_MakeLiteralName_ReturnValue_2) == 0x000058, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_MakeLiteralName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_GetValueAsBool_ReturnValue) == 0x000060, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_GetValueAsEnum_ReturnValue) == 0x000061, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_GetValueAsEnum_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000062, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_GetValidValue_ReturnValue) == 0x000063, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_GetValueAsEnum_ReturnValue_1) == 0x000064, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_GetValueAsEnum_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_GetValidValue_ReturnValue_1) == 0x000065, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000066, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000067, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_BooleanAND_ReturnValue) == 0x000068, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_BooleanAND_ReturnValue_1) == 0x000069, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000070, "Member 'BTService_Crouch_C_ExecuteUbergraph_BTService_Crouch::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function BTService_Crouch.BTService_Crouch_C.DoCrouchAction
// 0x0020 (0x0020 - 0x0000)
struct BTService_Crouch_C_DoCrouchAction final
{
public:
	class APawn*                                  InPawn;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          InCrouch;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A6F[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanCrouch_ReturnValue;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCrouching_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTService_Crouch_C_DoCrouchAction) == 0x000008, "Wrong alignment on BTService_Crouch_C_DoCrouchAction");
static_assert(sizeof(BTService_Crouch_C_DoCrouchAction) == 0x000020, "Wrong size on BTService_Crouch_C_DoCrouchAction");
static_assert(offsetof(BTService_Crouch_C_DoCrouchAction, InPawn) == 0x000000, "Member 'BTService_Crouch_C_DoCrouchAction::InPawn' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_DoCrouchAction, InCrouch) == 0x000008, "Member 'BTService_Crouch_C_DoCrouchAction::InCrouch' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_DoCrouchAction, K2Node_DynamicCast_AsCharacter) == 0x000010, "Member 'BTService_Crouch_C_DoCrouchAction::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_DoCrouchAction, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BTService_Crouch_C_DoCrouchAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_DoCrouchAction, CallFunc_CanCrouch_ReturnValue) == 0x000019, "Member 'BTService_Crouch_C_DoCrouchAction::CallFunc_CanCrouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_DoCrouchAction, CallFunc_IsCrouching_ReturnValue) == 0x00001A, "Member 'BTService_Crouch_C_DoCrouchAction::CallFunc_IsCrouching_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_DoCrouchAction, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x00001B, "Member 'BTService_Crouch_C_DoCrouchAction::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function BTService_Crouch.BTService_Crouch_C.CalculateTimeToChangeCrouch
// 0x0018 (0x0018 - 0x0000)
struct BTService_Crouch_C_CalculateTimeToChangeCrouch final
{
public:
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTService_Crouch_C_CalculateTimeToChangeCrouch) == 0x000008, "Wrong alignment on BTService_Crouch_C_CalculateTimeToChangeCrouch");
static_assert(sizeof(BTService_Crouch_C_CalculateTimeToChangeCrouch) == 0x000018, "Wrong size on BTService_Crouch_C_CalculateTimeToChangeCrouch");
static_assert(offsetof(BTService_Crouch_C_CalculateTimeToChangeCrouch, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000000, "Member 'BTService_Crouch_C_CalculateTimeToChangeCrouch::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_CalculateTimeToChangeCrouch, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000008, "Member 'BTService_Crouch_C_CalculateTimeToChangeCrouch::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_Crouch_C_CalculateTimeToChangeCrouch, CallFunc_RandomFloatInRange_ReturnValue) == 0x000010, "Member 'BTService_Crouch_C_CalculateTimeToChangeCrouch::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");

}

