#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTService_ChangeAssaultDroneAlertSpeed

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BTService_ChangeAssaultDroneAlertSpeed.BTService_ChangeAssaultDroneAlertSpeed_C.ReceiveActivationAI
// 0x0010 (0x0010 - 0x0000)
struct BTService_ChangeAssaultDroneAlertSpeed_C_ReceiveActivationAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTService_ChangeAssaultDroneAlertSpeed_C_ReceiveActivationAI) == 0x000008, "Wrong alignment on BTService_ChangeAssaultDroneAlertSpeed_C_ReceiveActivationAI");
static_assert(sizeof(BTService_ChangeAssaultDroneAlertSpeed_C_ReceiveActivationAI) == 0x000010, "Wrong size on BTService_ChangeAssaultDroneAlertSpeed_C_ReceiveActivationAI");
static_assert(offsetof(BTService_ChangeAssaultDroneAlertSpeed_C_ReceiveActivationAI, OwnerController) == 0x000000, "Member 'BTService_ChangeAssaultDroneAlertSpeed_C_ReceiveActivationAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTService_ChangeAssaultDroneAlertSpeed_C_ReceiveActivationAI, ControlledPawn) == 0x000008, "Member 'BTService_ChangeAssaultDroneAlertSpeed_C_ReceiveActivationAI::ControlledPawn' has a wrong offset!");

// Function BTService_ChangeAssaultDroneAlertSpeed.BTService_ChangeAssaultDroneAlertSpeed_C.ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed
// 0x0060 (0x0060 - 0x0000)
struct BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6753[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGzAssaultDrone*                        K2Node_DynamicCast_AsGz_Assault_Drone;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6754[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_GetOwningGameplayAITag_ReturnValue;       // 0x0024(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6755[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzAIController*                        K2Node_DynamicCast_AsGz_AIController;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6756[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzAIManager*                           CallFunc_GetAiManager_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6757[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzNPCData*                             CallFunc_GetNPCData_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6758[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_VariableSet_InterpSpeed_ImplicitCast;       // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed) == 0x000008, "Wrong alignment on BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed");
static_assert(sizeof(BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed) == 0x000060, "Wrong size on BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed");
static_assert(offsetof(BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed, EntryPoint) == 0x000000, "Member 'BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed, K2Node_Event_OwnerController) == 0x000008, "Member 'BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed, K2Node_Event_ControlledPawn) == 0x000010, "Member 'BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed, K2Node_DynamicCast_AsGz_Assault_Drone) == 0x000018, "Member 'BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed::K2Node_DynamicCast_AsGz_Assault_Drone' has a wrong offset!");
static_assert(offsetof(BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed, CallFunc_GetOwningGameplayAITag_ReturnValue) == 0x000024, "Member 'BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed::CallFunc_GetOwningGameplayAITag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed, K2Node_DynamicCast_AsGz_AIController) == 0x000030, "Member 'BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed::K2Node_DynamicCast_AsGz_AIController' has a wrong offset!");
static_assert(offsetof(BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed, CallFunc_GetAiManager_ReturnValue) == 0x000040, "Member 'BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed::CallFunc_GetAiManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed, CallFunc_GetNPCData_ReturnValue) == 0x000050, "Member 'BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed::CallFunc_GetNPCData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed, CallFunc_IsValid_ReturnValue_2) == 0x000059, "Member 'BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed, K2Node_VariableSet_InterpSpeed_ImplicitCast) == 0x00005C, "Member 'BTService_ChangeAssaultDroneAlertSpeed_C_ExecuteUbergraph_BTService_ChangeAssaultDroneAlertSpeed::K2Node_VariableSet_InterpSpeed_ImplicitCast' has a wrong offset!");

}

