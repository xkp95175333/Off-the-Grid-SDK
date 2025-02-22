#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PlayerVehicle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "G01_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ABP_PlayerVehicle.ABP_PlayerVehicle_C.ABPHumanData
// 0x0438 (0x0438 - 0x0000)
struct ABP_PlayerVehicle_C_ABPHumanData final
{
public:
	struct FAnimCache                             ReturnValue;                                       // 0x0000(0x0218)(Parm, OutParm, ReturnParm, NoDestructor)
	class UABP_Human_C*                           CallFunc_GetABPHuman_ReturnValue;                  // 0x0218(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimCache                             CallFunc_GetAnimCache_ReturnValue;                 // 0x0220(0x0218)(NoDestructor)
};
static_assert(alignof(ABP_PlayerVehicle_C_ABPHumanData) == 0x000008, "Wrong alignment on ABP_PlayerVehicle_C_ABPHumanData");
static_assert(sizeof(ABP_PlayerVehicle_C_ABPHumanData) == 0x000438, "Wrong size on ABP_PlayerVehicle_C_ABPHumanData");
static_assert(offsetof(ABP_PlayerVehicle_C_ABPHumanData, ReturnValue) == 0x000000, "Member 'ABP_PlayerVehicle_C_ABPHumanData::ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ABPHumanData, CallFunc_GetABPHuman_ReturnValue) == 0x000218, "Member 'ABP_PlayerVehicle_C_ABPHumanData::CallFunc_GetABPHuman_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ABPHumanData, CallFunc_GetAnimCache_ReturnValue) == 0x000220, "Member 'ABP_PlayerVehicle_C_ABPHumanData::CallFunc_GetAnimCache_ReturnValue' has a wrong offset!");

// Function ABP_PlayerVehicle.ABP_PlayerVehicle_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_PlayerVehicle_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_PlayerVehicle_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_PlayerVehicle_C_AnimGraph");
static_assert(sizeof(ABP_PlayerVehicle_C_AnimGraph) == 0x000010, "Wrong size on ABP_PlayerVehicle_C_AnimGraph");
static_assert(offsetof(ABP_PlayerVehicle_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_PlayerVehicle_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_PlayerVehicle.ABP_PlayerVehicle_C.BlueprintThreadSafeUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_PlayerVehicle_C_BlueprintThreadSafeUpdateAnimation final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_PlayerVehicle_C_BlueprintThreadSafeUpdateAnimation) == 0x000004, "Wrong alignment on ABP_PlayerVehicle_C_BlueprintThreadSafeUpdateAnimation");
static_assert(sizeof(ABP_PlayerVehicle_C_BlueprintThreadSafeUpdateAnimation) == 0x000004, "Wrong size on ABP_PlayerVehicle_C_BlueprintThreadSafeUpdateAnimation");
static_assert(offsetof(ABP_PlayerVehicle_C_BlueprintThreadSafeUpdateAnimation, DeltaTime) == 0x000000, "Member 'ABP_PlayerVehicle_C_BlueprintThreadSafeUpdateAnimation::DeltaTime' has a wrong offset!");

// Function ABP_PlayerVehicle.ABP_PlayerVehicle_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_PlayerVehicle_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_PlayerVehicle_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_PlayerVehicle_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_PlayerVehicle_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_PlayerVehicle_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_PlayerVehicle_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_PlayerVehicle_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_PlayerVehicle.ABP_PlayerVehicle_C.ComputeDriversHandsIK
// 0x0040 (0x0040 - 0x0000)
struct ABP_PlayerVehicle_C_ComputeDriversHandsIK final
{
public:
	class AGzVehicle*                             CallFunc_GetCurrentVehicle_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6068[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_1;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_PlayerVehicle_C_ComputeDriversHandsIK) == 0x000008, "Wrong alignment on ABP_PlayerVehicle_C_ComputeDriversHandsIK");
static_assert(sizeof(ABP_PlayerVehicle_C_ComputeDriversHandsIK) == 0x000040, "Wrong size on ABP_PlayerVehicle_C_ComputeDriversHandsIK");
static_assert(offsetof(ABP_PlayerVehicle_C_ComputeDriversHandsIK, CallFunc_GetCurrentVehicle_ReturnValue) == 0x000000, "Member 'ABP_PlayerVehicle_C_ComputeDriversHandsIK::CallFunc_GetCurrentVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ComputeDriversHandsIK, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ABP_PlayerVehicle_C_ComputeDriversHandsIK::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ComputeDriversHandsIK, CallFunc_GetSocketLocation_ReturnValue) == 0x000010, "Member 'ABP_PlayerVehicle_C_ComputeDriversHandsIK::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ComputeDriversHandsIK, CallFunc_GetSocketLocation_ReturnValue_1) == 0x000028, "Member 'ABP_PlayerVehicle_C_ComputeDriversHandsIK::CallFunc_GetSocketLocation_ReturnValue_1' has a wrong offset!");

// Function ABP_PlayerVehicle.ABP_PlayerVehicle_C.ComputeGunnerHandsIK
// 0x0058 (0x0058 - 0x0000)
struct ABP_PlayerVehicle_C_ComputeGunnerHandsIK final
{
public:
	class AGzVehicle*                             CallFunc_GetCurrentVehicle_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6069[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetSocketRotation_ReturnValue;            // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_1;          // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_PlayerVehicle_C_ComputeGunnerHandsIK) == 0x000008, "Wrong alignment on ABP_PlayerVehicle_C_ComputeGunnerHandsIK");
static_assert(sizeof(ABP_PlayerVehicle_C_ComputeGunnerHandsIK) == 0x000058, "Wrong size on ABP_PlayerVehicle_C_ComputeGunnerHandsIK");
static_assert(offsetof(ABP_PlayerVehicle_C_ComputeGunnerHandsIK, CallFunc_GetCurrentVehicle_ReturnValue) == 0x000000, "Member 'ABP_PlayerVehicle_C_ComputeGunnerHandsIK::CallFunc_GetCurrentVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ComputeGunnerHandsIK, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ABP_PlayerVehicle_C_ComputeGunnerHandsIK::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ComputeGunnerHandsIK, CallFunc_GetSocketRotation_ReturnValue) == 0x000010, "Member 'ABP_PlayerVehicle_C_ComputeGunnerHandsIK::CallFunc_GetSocketRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ComputeGunnerHandsIK, CallFunc_GetSocketLocation_ReturnValue) == 0x000028, "Member 'ABP_PlayerVehicle_C_ComputeGunnerHandsIK::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ComputeGunnerHandsIK, CallFunc_GetSocketLocation_ReturnValue_1) == 0x000040, "Member 'ABP_PlayerVehicle_C_ComputeGunnerHandsIK::CallFunc_GetSocketLocation_ReturnValue_1' has a wrong offset!");

// Function ABP_PlayerVehicle.ABP_PlayerVehicle_C.ComputeHandsIKs
// 0x0002 (0x0002 - 0x0000)
struct ABP_PlayerVehicle_C_ComputeHandsIKs final
{
public:
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_PlayerVehicle_C_ComputeHandsIKs) == 0x000001, "Wrong alignment on ABP_PlayerVehicle_C_ComputeHandsIKs");
static_assert(sizeof(ABP_PlayerVehicle_C_ComputeHandsIKs) == 0x000002, "Wrong size on ABP_PlayerVehicle_C_ComputeHandsIKs");
static_assert(offsetof(ABP_PlayerVehicle_C_ComputeHandsIKs, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000000, "Member 'ABP_PlayerVehicle_C_ComputeHandsIKs::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ComputeHandsIKs, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000001, "Member 'ABP_PlayerVehicle_C_ComputeHandsIKs::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function ABP_PlayerVehicle.ABP_PlayerVehicle_C.ExecuteUbergraph_ABP_PlayerVehicle
// 0x0040 (0x0040 - 0x0000)
struct ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_606A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzVehicle*                             K2Node_CustomEvent_VehicleRef;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EGzVehicleSeatType                            K2Node_CustomEvent_Seat;                           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_606B[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_OverlayOverride;                      // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELocomotionGroundedEntryState                 K2Node_Event_EntryState;                           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_606C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_606D[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzCharacter*                           K2Node_DynamicCast_AsGz_Character;                 // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_606E[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle) == 0x000008, "Wrong alignment on ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle");
static_assert(sizeof(ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle) == 0x000040, "Wrong size on ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle");
static_assert(offsetof(ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle, EntryPoint) == 0x000000, "Member 'ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle, K2Node_CustomEvent_VehicleRef) == 0x000008, "Member 'ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle::K2Node_CustomEvent_VehicleRef' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle, K2Node_CustomEvent_Seat) == 0x000010, "Member 'ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle::K2Node_CustomEvent_Seat' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle, K2Node_Event_OverlayOverride) == 0x000014, "Member 'ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle::K2Node_Event_OverlayOverride' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle, K2Node_Event_EntryState) == 0x000018, "Member 'ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle::K2Node_Event_EntryState' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000020, "Member 'ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle, K2Node_Event_DeltaTimeX) == 0x000028, "Member 'ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle, K2Node_DynamicCast_AsGz_Character) == 0x000030, "Member 'ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle::K2Node_DynamicCast_AsGz_Character' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00003C, "Member 'ABP_PlayerVehicle_C_ExecuteUbergraph_ABP_PlayerVehicle::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");

// Function ABP_PlayerVehicle.ABP_PlayerVehicle_C.GetABPHuman
// 0x0018 (0x0018 - 0x0000)
struct ABP_PlayerVehicle_C_GetABPHuman final
{
public:
	class UABP_Human_C*                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UABP_Human_C*                           K2Node_DynamicCast_AsABP_Human;                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_PlayerVehicle_C_GetABPHuman) == 0x000008, "Wrong alignment on ABP_PlayerVehicle_C_GetABPHuman");
static_assert(sizeof(ABP_PlayerVehicle_C_GetABPHuman) == 0x000018, "Wrong size on ABP_PlayerVehicle_C_GetABPHuman");
static_assert(offsetof(ABP_PlayerVehicle_C_GetABPHuman, ReturnValue) == 0x000000, "Member 'ABP_PlayerVehicle_C_GetABPHuman::ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_GetABPHuman, K2Node_DynamicCast_AsABP_Human) == 0x000008, "Member 'ABP_PlayerVehicle_C_GetABPHuman::K2Node_DynamicCast_AsABP_Human' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_GetABPHuman, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ABP_PlayerVehicle_C_GetABPHuman::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ABP_PlayerVehicle.ABP_PlayerVehicle_C.GetGZPlayerCharacter
// 0x0018 (0x0018 - 0x0000)
struct ABP_PlayerVehicle_C_GetGZPlayerCharacter final
{
public:
	class AGzPlayerCharacter*                     ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class AGzPlayerCharacter*                     K2Node_DynamicCast_AsGz_Player_Character;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_PlayerVehicle_C_GetGZPlayerCharacter) == 0x000008, "Wrong alignment on ABP_PlayerVehicle_C_GetGZPlayerCharacter");
static_assert(sizeof(ABP_PlayerVehicle_C_GetGZPlayerCharacter) == 0x000018, "Wrong size on ABP_PlayerVehicle_C_GetGZPlayerCharacter");
static_assert(offsetof(ABP_PlayerVehicle_C_GetGZPlayerCharacter, ReturnValue) == 0x000000, "Member 'ABP_PlayerVehicle_C_GetGZPlayerCharacter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_GetGZPlayerCharacter, K2Node_DynamicCast_AsGz_Player_Character) == 0x000008, "Member 'ABP_PlayerVehicle_C_GetGZPlayerCharacter::K2Node_DynamicCast_AsGz_Player_Character' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_GetGZPlayerCharacter, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ABP_PlayerVehicle_C_GetGZPlayerCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ABP_PlayerVehicle.ABP_PlayerVehicle_C.OnVehicleSeatChange
// 0x0010 (0x0010 - 0x0000)
struct ABP_PlayerVehicle_C_OnVehicleSeatChange final
{
public:
	class AGzVehicle*                             VehicleRef;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EGzVehicleSeatType                            Param_Seat;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_PlayerVehicle_C_OnVehicleSeatChange) == 0x000008, "Wrong alignment on ABP_PlayerVehicle_C_OnVehicleSeatChange");
static_assert(sizeof(ABP_PlayerVehicle_C_OnVehicleSeatChange) == 0x000010, "Wrong size on ABP_PlayerVehicle_C_OnVehicleSeatChange");
static_assert(offsetof(ABP_PlayerVehicle_C_OnVehicleSeatChange, VehicleRef) == 0x000000, "Member 'ABP_PlayerVehicle_C_OnVehicleSeatChange::VehicleRef' has a wrong offset!");
static_assert(offsetof(ABP_PlayerVehicle_C_OnVehicleSeatChange, Param_Seat) == 0x000008, "Member 'ABP_PlayerVehicle_C_OnVehicleSeatChange::Param_Seat' has a wrong offset!");

// Function ABP_PlayerVehicle.ABP_PlayerVehicle_C.SeatsPositionLayer
// 0x0010 (0x0010 - 0x0000)
struct ABP_PlayerVehicle_C_SeatsPositionLayer final
{
public:
	struct FPoseLink                              Param_SeatsPositionLayer;                          // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_PlayerVehicle_C_SeatsPositionLayer) == 0x000008, "Wrong alignment on ABP_PlayerVehicle_C_SeatsPositionLayer");
static_assert(sizeof(ABP_PlayerVehicle_C_SeatsPositionLayer) == 0x000010, "Wrong size on ABP_PlayerVehicle_C_SeatsPositionLayer");
static_assert(offsetof(ABP_PlayerVehicle_C_SeatsPositionLayer, Param_SeatsPositionLayer) == 0x000000, "Member 'ABP_PlayerVehicle_C_SeatsPositionLayer::Param_SeatsPositionLayer' has a wrong offset!");

// Function ABP_PlayerVehicle.ABP_PlayerVehicle_C.SetGroundedEntryState
// 0x0001 (0x0001 - 0x0000)
struct ABP_PlayerVehicle_C_SetGroundedEntryState final
{
public:
	ELocomotionGroundedEntryState                 EntryState;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_PlayerVehicle_C_SetGroundedEntryState) == 0x000001, "Wrong alignment on ABP_PlayerVehicle_C_SetGroundedEntryState");
static_assert(sizeof(ABP_PlayerVehicle_C_SetGroundedEntryState) == 0x000001, "Wrong size on ABP_PlayerVehicle_C_SetGroundedEntryState");
static_assert(offsetof(ABP_PlayerVehicle_C_SetGroundedEntryState, EntryState) == 0x000000, "Member 'ABP_PlayerVehicle_C_SetGroundedEntryState::EntryState' has a wrong offset!");

// Function ABP_PlayerVehicle.ABP_PlayerVehicle_C.SetOverlayOverrideState
// 0x0004 (0x0004 - 0x0000)
struct ABP_PlayerVehicle_C_SetOverlayOverrideState final
{
public:
	int32                                         OverlayOverride;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_PlayerVehicle_C_SetOverlayOverrideState) == 0x000004, "Wrong alignment on ABP_PlayerVehicle_C_SetOverlayOverrideState");
static_assert(sizeof(ABP_PlayerVehicle_C_SetOverlayOverrideState) == 0x000004, "Wrong size on ABP_PlayerVehicle_C_SetOverlayOverrideState");
static_assert(offsetof(ABP_PlayerVehicle_C_SetOverlayOverrideState, OverlayOverride) == 0x000000, "Member 'ABP_PlayerVehicle_C_SetOverlayOverrideState::OverlayOverride' has a wrong offset!");

}

