#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Turret

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ABP_Turret.ABP_Turret_C.UpdateTurretData
// 0x0090 (0x0090 - 0x0000)
struct ABP_Turret_C_UpdateTurretData final
{
public:
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B26[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B27[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_NormalizeToRange_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalculateDirection_ReturnValue;           // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B28[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_TurretAim_ImplicitCast;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_TurretHead_ImplicitCast;        // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Turret_C_UpdateTurretData) == 0x000008, "Wrong alignment on ABP_Turret_C_UpdateTurretData");
static_assert(sizeof(ABP_Turret_C_UpdateTurretData) == 0x000090, "Wrong size on ABP_Turret_C_UpdateTurretData");
static_assert(offsetof(ABP_Turret_C_UpdateTurretData, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000000, "Member 'ABP_Turret_C_UpdateTurretData::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_UpdateTurretData, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'ABP_Turret_C_UpdateTurretData::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_UpdateTurretData, CallFunc_FindLookAtRotation_ReturnValue) == 0x000020, "Member 'ABP_Turret_C_UpdateTurretData::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_UpdateTurretData, CallFunc_Vector_Distance_ReturnValue) == 0x000038, "Member 'ABP_Turret_C_UpdateTurretData::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_UpdateTurretData, CallFunc_BreakRotator_Roll) == 0x000040, "Member 'ABP_Turret_C_UpdateTurretData::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_UpdateTurretData, CallFunc_BreakRotator_Pitch) == 0x000044, "Member 'ABP_Turret_C_UpdateTurretData::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_UpdateTurretData, CallFunc_BreakRotator_Yaw) == 0x000048, "Member 'ABP_Turret_C_UpdateTurretData::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_UpdateTurretData, CallFunc_FClamp_ReturnValue) == 0x000050, "Member 'ABP_Turret_C_UpdateTurretData::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_UpdateTurretData, CallFunc_NormalizeToRange_ReturnValue) == 0x000058, "Member 'ABP_Turret_C_UpdateTurretData::CallFunc_NormalizeToRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_UpdateTurretData, CallFunc_CalculateDirection_ReturnValue) == 0x000060, "Member 'ABP_Turret_C_UpdateTurretData::CallFunc_CalculateDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_UpdateTurretData, CallFunc_Lerp_ReturnValue) == 0x000068, "Member 'ABP_Turret_C_UpdateTurretData::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_UpdateTurretData, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000070, "Member 'ABP_Turret_C_UpdateTurretData::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_UpdateTurretData, K2Node_VariableSet_TurretAim_ImplicitCast) == 0x000078, "Member 'ABP_Turret_C_UpdateTurretData::K2Node_VariableSet_TurretAim_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_UpdateTurretData, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000080, "Member 'ABP_Turret_C_UpdateTurretData::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_UpdateTurretData, K2Node_VariableSet_TurretHead_ImplicitCast) == 0x000088, "Member 'ABP_Turret_C_UpdateTurretData::K2Node_VariableSet_TurretHead_ImplicitCast' has a wrong offset!");

// Function ABP_Turret.ABP_Turret_C.GetOwnerData
// 0x0018 (0x0018 - 0x0000)
struct ABP_Turret_C_GetOwnerData final
{
public:
	class ABP_NPC_StandTurret_C*                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class ABP_NPC_StandTurret_C*                  K2Node_DynamicCast_AsBP_NPC_Stand_Turret;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Turret_C_GetOwnerData) == 0x000008, "Wrong alignment on ABP_Turret_C_GetOwnerData");
static_assert(sizeof(ABP_Turret_C_GetOwnerData) == 0x000018, "Wrong size on ABP_Turret_C_GetOwnerData");
static_assert(offsetof(ABP_Turret_C_GetOwnerData, ReturnValue) == 0x000000, "Member 'ABP_Turret_C_GetOwnerData::ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_GetOwnerData, K2Node_DynamicCast_AsBP_NPC_Stand_Turret) == 0x000008, "Member 'ABP_Turret_C_GetOwnerData::K2Node_DynamicCast_AsBP_NPC_Stand_Turret' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_GetOwnerData, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ABP_Turret_C_GetOwnerData::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ABP_Turret.ABP_Turret_C.ExecuteUbergraph_ABP_Turret
// 0x0048 (0x0048 - 0x0000)
struct ABP_Turret_C_ExecuteUbergraph_ABP_Turret final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B29[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetTargetEnemy_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B2A[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B2B[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B2C[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Turret_C_ExecuteUbergraph_ABP_Turret) == 0x000008, "Wrong alignment on ABP_Turret_C_ExecuteUbergraph_ABP_Turret");
static_assert(sizeof(ABP_Turret_C_ExecuteUbergraph_ABP_Turret) == 0x000048, "Wrong size on ABP_Turret_C_ExecuteUbergraph_ABP_Turret");
static_assert(offsetof(ABP_Turret_C_ExecuteUbergraph_ABP_Turret, EntryPoint) == 0x000000, "Member 'ABP_Turret_C_ExecuteUbergraph_ABP_Turret::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_ExecuteUbergraph_ABP_Turret, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'ABP_Turret_C_ExecuteUbergraph_ABP_Turret::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_ExecuteUbergraph_ABP_Turret, CallFunc_GetTargetEnemy_ReturnValue) == 0x000008, "Member 'ABP_Turret_C_ExecuteUbergraph_ABP_Turret::CallFunc_GetTargetEnemy_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_ExecuteUbergraph_ABP_Turret, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'ABP_Turret_C_ExecuteUbergraph_ABP_Turret::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_ExecuteUbergraph_ABP_Turret, K2Node_Event_DeltaTimeX) == 0x000014, "Member 'ABP_Turret_C_ExecuteUbergraph_ABP_Turret::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_ExecuteUbergraph_ABP_Turret, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'ABP_Turret_C_ExecuteUbergraph_ABP_Turret::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_ExecuteUbergraph_ABP_Turret, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'ABP_Turret_C_ExecuteUbergraph_ABP_Turret::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_ExecuteUbergraph_ABP_Turret, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'ABP_Turret_C_ExecuteUbergraph_ABP_Turret::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

// Function ABP_Turret.ABP_Turret_C.DrawDebug
// 0x0128 (0x0128 - 0x0000)
struct ABP_Turret_C_DrawDebug final
{
public:
	bool                                          EnableDebug_;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B2D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0048)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B2E[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_BoolToText_ReturnValue;              // 0x0058(0x0010)()
	class FText                                   CallFunc_Conv_BoolToText_ReturnValue_1;            // 0x0068(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0078(0x0048)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x00C0(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0108(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0118(0x0010)()
};
static_assert(alignof(ABP_Turret_C_DrawDebug) == 0x000008, "Wrong alignment on ABP_Turret_C_DrawDebug");
static_assert(sizeof(ABP_Turret_C_DrawDebug) == 0x000128, "Wrong size on ABP_Turret_C_DrawDebug");
static_assert(offsetof(ABP_Turret_C_DrawDebug, EnableDebug_) == 0x000000, "Member 'ABP_Turret_C_DrawDebug::EnableDebug_' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_DrawDebug, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'ABP_Turret_C_DrawDebug::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_DrawDebug, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'ABP_Turret_C_DrawDebug::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_DrawDebug, CallFunc_Conv_BoolToText_ReturnValue) == 0x000058, "Member 'ABP_Turret_C_DrawDebug::CallFunc_Conv_BoolToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_DrawDebug, CallFunc_Conv_BoolToText_ReturnValue_1) == 0x000068, "Member 'ABP_Turret_C_DrawDebug::CallFunc_Conv_BoolToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_DrawDebug, K2Node_MakeStruct_FormatArgumentData_1) == 0x000078, "Member 'ABP_Turret_C_DrawDebug::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_DrawDebug, K2Node_MakeStruct_FormatArgumentData_2) == 0x0000C0, "Member 'ABP_Turret_C_DrawDebug::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_DrawDebug, K2Node_MakeArray_Array) == 0x000108, "Member 'ABP_Turret_C_DrawDebug::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ABP_Turret_C_DrawDebug, CallFunc_Format_ReturnValue) == 0x000118, "Member 'ABP_Turret_C_DrawDebug::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function ABP_Turret.ABP_Turret_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_Turret_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Turret_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_Turret_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_Turret_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_Turret_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_Turret_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_Turret_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_Turret.ABP_Turret_C.BlueprintThreadSafeUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_Turret_C_BlueprintThreadSafeUpdateAnimation final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Turret_C_BlueprintThreadSafeUpdateAnimation) == 0x000004, "Wrong alignment on ABP_Turret_C_BlueprintThreadSafeUpdateAnimation");
static_assert(sizeof(ABP_Turret_C_BlueprintThreadSafeUpdateAnimation) == 0x000004, "Wrong size on ABP_Turret_C_BlueprintThreadSafeUpdateAnimation");
static_assert(offsetof(ABP_Turret_C_BlueprintThreadSafeUpdateAnimation, DeltaTime) == 0x000000, "Member 'ABP_Turret_C_BlueprintThreadSafeUpdateAnimation::DeltaTime' has a wrong offset!");

// Function ABP_Turret.ABP_Turret_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_Turret_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Turret_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Turret_C_AnimGraph");
static_assert(sizeof(ABP_Turret_C_AnimGraph) == 0x000010, "Wrong size on ABP_Turret_C_AnimGraph");
static_assert(offsetof(ABP_Turret_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_Turret_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}

