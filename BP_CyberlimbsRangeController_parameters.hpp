#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CyberlimbsRangeController

#include "Basic.hpp"

#include "ECyberlimbsMoveStage_structs.hpp"


namespace SDK::Params
{

// Function BP_CyberlimbsRangeController.BP_CyberlimbsRangeController_C.ExecuteUbergraph_BP_CyberlimbsRangeController
// 0x0020 (0x0020 - 0x0000)
struct BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DummySpawner_C*                     CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_512B[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController) == 0x000008, "Wrong alignment on BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController");
static_assert(sizeof(BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController) == 0x000020, "Wrong size on BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController");
static_assert(offsetof(BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController, EntryPoint) == 0x000000, "Member 'BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController, CallFunc_Less_IntInt_ReturnValue) == 0x000019, "Member 'BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'BP_CyberlimbsRangeController_C_ExecuteUbergraph_BP_CyberlimbsRangeController::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_CyberlimbsRangeController.BP_CyberlimbsRangeController_C.GetSpeed
// 0x0010 (0x0010 - 0x0000)
struct BP_CyberlimbsRangeController_C_GetSpeed final
{
public:
	double                                        Speed;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CyberlimbsRangeController_C_GetSpeed) == 0x000008, "Wrong alignment on BP_CyberlimbsRangeController_C_GetSpeed");
static_assert(sizeof(BP_CyberlimbsRangeController_C_GetSpeed) == 0x000010, "Wrong size on BP_CyberlimbsRangeController_C_GetSpeed");
static_assert(offsetof(BP_CyberlimbsRangeController_C_GetSpeed, Speed) == 0x000000, "Member 'BP_CyberlimbsRangeController_C_GetSpeed::Speed' has a wrong offset!");
static_assert(offsetof(BP_CyberlimbsRangeController_C_GetSpeed, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'BP_CyberlimbsRangeController_C_GetSpeed::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");

// Function BP_CyberlimbsRangeController.BP_CyberlimbsRangeController_C.NextStage
// 0x0010 (0x0010 - 0x0000)
struct BP_CyberlimbsRangeController_C_NextStage final
{
public:
	int64                                         CallFunc_GetEnumMaxValue_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_Int64ToByte_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Add_ByteByte_ReturnValue;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Percent_ByteByte_ReturnValue;             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CyberlimbsRangeController_C_NextStage) == 0x000008, "Wrong alignment on BP_CyberlimbsRangeController_C_NextStage");
static_assert(sizeof(BP_CyberlimbsRangeController_C_NextStage) == 0x000010, "Wrong size on BP_CyberlimbsRangeController_C_NextStage");
static_assert(offsetof(BP_CyberlimbsRangeController_C_NextStage, CallFunc_GetEnumMaxValue_ReturnValue) == 0x000000, "Member 'BP_CyberlimbsRangeController_C_NextStage::CallFunc_GetEnumMaxValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CyberlimbsRangeController_C_NextStage, CallFunc_Conv_Int64ToByte_ReturnValue) == 0x000008, "Member 'BP_CyberlimbsRangeController_C_NextStage::CallFunc_Conv_Int64ToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CyberlimbsRangeController_C_NextStage, CallFunc_Add_ByteByte_ReturnValue) == 0x000009, "Member 'BP_CyberlimbsRangeController_C_NextStage::CallFunc_Add_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CyberlimbsRangeController_C_NextStage, CallFunc_Percent_ByteByte_ReturnValue) == 0x00000A, "Member 'BP_CyberlimbsRangeController_C_NextStage::CallFunc_Percent_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CyberlimbsRangeController_C_NextStage, CallFunc_GetValidValue_ReturnValue) == 0x00000B, "Member 'BP_CyberlimbsRangeController_C_NextStage::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");

// Function BP_CyberlimbsRangeController.BP_CyberlimbsRangeController_C.Notify
// 0x0001 (0x0001 - 0x0000)
struct BP_CyberlimbsRangeController_C_Notify final
{
public:
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CyberlimbsRangeController_C_Notify) == 0x000001, "Wrong alignment on BP_CyberlimbsRangeController_C_Notify");
static_assert(sizeof(BP_CyberlimbsRangeController_C_Notify) == 0x000001, "Wrong size on BP_CyberlimbsRangeController_C_Notify");
static_assert(offsetof(BP_CyberlimbsRangeController_C_Notify, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000000, "Member 'BP_CyberlimbsRangeController_C_Notify::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function BP_CyberlimbsRangeController.BP_CyberlimbsRangeController_C.OnHealthChanged__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_CyberlimbsRangeController_C_OnHealthChanged__DelegateSignature final
{
public:
	double                                        Health_Value;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CyberlimbsRangeController_C_OnHealthChanged__DelegateSignature) == 0x000008, "Wrong alignment on BP_CyberlimbsRangeController_C_OnHealthChanged__DelegateSignature");
static_assert(sizeof(BP_CyberlimbsRangeController_C_OnHealthChanged__DelegateSignature) == 0x000008, "Wrong size on BP_CyberlimbsRangeController_C_OnHealthChanged__DelegateSignature");
static_assert(offsetof(BP_CyberlimbsRangeController_C_OnHealthChanged__DelegateSignature, Health_Value) == 0x000000, "Member 'BP_CyberlimbsRangeController_C_OnHealthChanged__DelegateSignature::Health_Value' has a wrong offset!");

// Function BP_CyberlimbsRangeController.BP_CyberlimbsRangeController_C.OnMoveableChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_CyberlimbsRangeController_C_OnMoveableChanged__DelegateSignature final
{
public:
	bool                                          IsMoveable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CyberlimbsRangeController_C_OnMoveableChanged__DelegateSignature) == 0x000001, "Wrong alignment on BP_CyberlimbsRangeController_C_OnMoveableChanged__DelegateSignature");
static_assert(sizeof(BP_CyberlimbsRangeController_C_OnMoveableChanged__DelegateSignature) == 0x000001, "Wrong size on BP_CyberlimbsRangeController_C_OnMoveableChanged__DelegateSignature");
static_assert(offsetof(BP_CyberlimbsRangeController_C_OnMoveableChanged__DelegateSignature, IsMoveable) == 0x000000, "Member 'BP_CyberlimbsRangeController_C_OnMoveableChanged__DelegateSignature::IsMoveable' has a wrong offset!");

// Function BP_CyberlimbsRangeController.BP_CyberlimbsRangeController_C.OnSpeedChanged__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_CyberlimbsRangeController_C_OnSpeedChanged__DelegateSignature final
{
public:
	double                                        Speed;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CyberlimbsRangeController_C_OnSpeedChanged__DelegateSignature) == 0x000008, "Wrong alignment on BP_CyberlimbsRangeController_C_OnSpeedChanged__DelegateSignature");
static_assert(sizeof(BP_CyberlimbsRangeController_C_OnSpeedChanged__DelegateSignature) == 0x000008, "Wrong size on BP_CyberlimbsRangeController_C_OnSpeedChanged__DelegateSignature");
static_assert(offsetof(BP_CyberlimbsRangeController_C_OnSpeedChanged__DelegateSignature, Speed) == 0x000000, "Member 'BP_CyberlimbsRangeController_C_OnSpeedChanged__DelegateSignature::Speed' has a wrong offset!");

// Function BP_CyberlimbsRangeController.BP_CyberlimbsRangeController_C.Update Speed
// 0x0002 (0x0002 - 0x0000)
struct BP_CyberlimbsRangeController_C_Update_Speed final
{
public:
	ECyberlimbsMoveStage                          Stage;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CyberlimbsRangeController_C_Update_Speed) == 0x000001, "Wrong alignment on BP_CyberlimbsRangeController_C_Update_Speed");
static_assert(sizeof(BP_CyberlimbsRangeController_C_Update_Speed) == 0x000002, "Wrong size on BP_CyberlimbsRangeController_C_Update_Speed");
static_assert(offsetof(BP_CyberlimbsRangeController_C_Update_Speed, Stage) == 0x000000, "Member 'BP_CyberlimbsRangeController_C_Update_Speed::Stage' has a wrong offset!");
static_assert(offsetof(BP_CyberlimbsRangeController_C_Update_Speed, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'BP_CyberlimbsRangeController_C_Update_Speed::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

