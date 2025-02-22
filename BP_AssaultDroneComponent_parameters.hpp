#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AssaultDroneComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "G01_structs.hpp"


namespace SDK::Params
{

// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.CacheNewDrone
// 0x0008 (0x0008 - 0x0000)
struct BP_AssaultDroneComponent_C_CacheNewDrone final
{
public:
	class AActor*                                 Param_AssaulteDroneCached;                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultDroneComponent_C_CacheNewDrone) == 0x000008, "Wrong alignment on BP_AssaultDroneComponent_C_CacheNewDrone");
static_assert(sizeof(BP_AssaultDroneComponent_C_CacheNewDrone) == 0x000008, "Wrong size on BP_AssaultDroneComponent_C_CacheNewDrone");
static_assert(offsetof(BP_AssaultDroneComponent_C_CacheNewDrone, Param_AssaulteDroneCached) == 0x000000, "Member 'BP_AssaultDroneComponent_C_CacheNewDrone::Param_AssaulteDroneCached' has a wrong offset!");

// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.Calculate Location and Redirect
// 0x01C0 (0x01C0 - 0x0000)
struct BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x00F8)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<class AActor*>                         IgnoreActors;                                      // 0x00F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<EObjectTypeQuery>                      LineTraceTypes;                                    // 0x0108(0x0010)(Edit, BlueprintVisible)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0118(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_GetRetargetPoint_Location;                // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetRetargetPoint_HitResultRotation;       // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_147D[0x8];                                     // 0x0158(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0160(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect) == 0x000010, "Wrong alignment on BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect");
static_assert(sizeof(BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect) == 0x0001C0, "Wrong size on BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect");
static_assert(offsetof(BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect, HitResult) == 0x000000, "Member 'BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect::HitResult' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect, IgnoreActors) == 0x0000F8, "Member 'BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect::IgnoreActors' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect, LineTraceTypes) == 0x000108, "Member 'BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect::LineTraceTypes' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect, K2Node_MakeArray_Array) == 0x000118, "Member 'BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect, CallFunc_GetRetargetPoint_Location) == 0x000128, "Member 'BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect::CallFunc_GetRetargetPoint_Location' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect, CallFunc_GetRetargetPoint_HitResultRotation) == 0x000140, "Member 'BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect::CallFunc_GetRetargetPoint_HitResultRotation' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect, CallFunc_MakeTransform_ReturnValue) == 0x000160, "Member 'BP_AssaultDroneComponent_C_Calculate_Location_and_Redirect::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");

// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.CheckValidMarker
// 0x0038 (0x0038 - 0x0000)
struct BP_AssaultDroneComponent_C_CheckValidMarker final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_147E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_147F[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultDroneComponent_C_CheckValidMarker) == 0x000008, "Wrong alignment on BP_AssaultDroneComponent_C_CheckValidMarker");
static_assert(sizeof(BP_AssaultDroneComponent_C_CheckValidMarker) == 0x000038, "Wrong size on BP_AssaultDroneComponent_C_CheckValidMarker");
static_assert(offsetof(BP_AssaultDroneComponent_C_CheckValidMarker, ReturnValue) == 0x000000, "Member 'BP_AssaultDroneComponent_C_CheckValidMarker::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_CheckValidMarker, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_AssaultDroneComponent_C_CheckValidMarker::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_CheckValidMarker, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_AssaultDroneComponent_C_CheckValidMarker::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_CheckValidMarker, CallFunc_Vector_Distance_ReturnValue) == 0x000028, "Member 'BP_AssaultDroneComponent_C_CheckValidMarker::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_CheckValidMarker, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_AssaultDroneComponent_C_CheckValidMarker::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_CheckValidMarker, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'BP_AssaultDroneComponent_C_CheckValidMarker::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.ExecuteUbergraph_BP_AssaultDroneComponent
// 0x01A0 (0x01A0 - 0x0000)
struct BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_AssaulteDroneCached;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGzAssaultDrone*                        K2Node_DynamicCast_AsGz_Assault_Drone;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1480[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1481[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_CustomEvent_HitResult;                      // 0x0030(0x00F8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_1482[0x8];                                     // 0x0128(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             K2Node_CustomEvent_Transform;                      // 0x0130(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckValidMarker_ReturnValue;             // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent) == 0x000010, "Wrong alignment on BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent");
static_assert(sizeof(BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent) == 0x0001A0, "Wrong size on BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent");
static_assert(offsetof(BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent, EntryPoint) == 0x000000, "Member 'BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent, K2Node_CustomEvent_AssaulteDroneCached) == 0x000008, "Member 'BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent::K2Node_CustomEvent_AssaulteDroneCached' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent, K2Node_DynamicCast_AsGz_Assault_Drone) == 0x000010, "Member 'BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent::K2Node_DynamicCast_AsGz_Assault_Drone' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent, K2Node_CustomEvent_HitResult) == 0x000030, "Member 'BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent::K2Node_CustomEvent_HitResult' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent, K2Node_CustomEvent_Transform) == 0x000130, "Member 'BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent::K2Node_CustomEvent_Transform' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent, K2Node_CustomEvent_DestroyedActor) == 0x000190, "Member 'BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent, CallFunc_IsValid_ReturnValue_1) == 0x000198, "Member 'BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent, CallFunc_CheckValidMarker_ReturnValue) == 0x000199, "Member 'BP_AssaultDroneComponent_C_ExecuteUbergraph_BP_AssaultDroneComponent::CallFunc_CheckValidMarker_ReturnValue' has a wrong offset!");

// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.GetRetargetPoint
// 0x02E0 (0x02E0 - 0x0000)
struct BP_AssaultDroneComponent_C_GetRetargetPoint final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x00F8)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                Location;                                          // 0x00F8(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               HitResultRotation;                                 // 0x0110(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        MaxRedirectDistance;                               // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DroneLocationLocal;                                // 0x0130(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetPointLocal;                                  // 0x0148(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1483[0x2];                                     // 0x0162(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1484[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1485[0x4];                                     // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0208(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0220(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x0238(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromZ_ReturnValue;                 // 0x0250(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0268(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1486[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0290(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_ClampVectorSize_ReturnValue;              // 0x02B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x02C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultDroneComponent_C_GetRetargetPoint) == 0x000008, "Wrong alignment on BP_AssaultDroneComponent_C_GetRetargetPoint");
static_assert(sizeof(BP_AssaultDroneComponent_C_GetRetargetPoint) == 0x0002E0, "Wrong size on BP_AssaultDroneComponent_C_GetRetargetPoint");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, HitResult) == 0x000000, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::HitResult' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, Location) == 0x0000F8, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::Location' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, HitResultRotation) == 0x000110, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::HitResultRotation' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, MaxRedirectDistance) == 0x000128, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::MaxRedirectDistance' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, DroneLocationLocal) == 0x000130, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::DroneLocationLocal' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, TargetPointLocal) == 0x000148, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::TargetPointLocal' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_bBlockingHit) == 0x000160, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_bInitialOverlap) == 0x000161, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_Time) == 0x000164, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_Distance) == 0x000168, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_Location) == 0x000170, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_ImpactPoint) == 0x000188, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_Normal) == 0x0001A0, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_ImpactNormal) == 0x0001B8, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_PhysMat) == 0x0001D0, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_HitActor) == 0x0001D8, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_HitComponent) == 0x0001E0, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_HitBoneName) == 0x0001E8, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_BoneName) == 0x0001F0, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_HitItem) == 0x0001F8, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_ElementIndex) == 0x0001FC, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_FaceIndex) == 0x000200, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_TraceStart) == 0x000208, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_BreakHitResult_TraceEnd) == 0x000220, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_SelectVector_ReturnValue) == 0x000238, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_MakeRotFromZ_ReturnValue) == 0x000250, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_MakeRotFromZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000268, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_IsValid_ReturnValue) == 0x000280, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_Vector_Distance_ReturnValue) == 0x000288, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000290, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_FMin_ReturnValue) == 0x0002A8, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_ClampVectorSize_ReturnValue) == 0x0002B0, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_ClampVectorSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_GetRetargetPoint, CallFunc_Add_VectorVector_ReturnValue) == 0x0002C8, "Member 'BP_AssaultDroneComponent_C_GetRetargetPoint::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.OnDestroyed_Event
// 0x0008 (0x0008 - 0x0000)
struct BP_AssaultDroneComponent_C_OnDestroyed_Event final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultDroneComponent_C_OnDestroyed_Event) == 0x000008, "Wrong alignment on BP_AssaultDroneComponent_C_OnDestroyed_Event");
static_assert(sizeof(BP_AssaultDroneComponent_C_OnDestroyed_Event) == 0x000008, "Wrong size on BP_AssaultDroneComponent_C_OnDestroyed_Event");
static_assert(offsetof(BP_AssaultDroneComponent_C_OnDestroyed_Event, DestroyedActor) == 0x000000, "Member 'BP_AssaultDroneComponent_C_OnDestroyed_Event::DestroyedActor' has a wrong offset!");

// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AssaultDroneComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultDroneComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_AssaultDroneComponent_C_ReceiveTick");
static_assert(sizeof(BP_AssaultDroneComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_AssaultDroneComponent_C_ReceiveTick");
static_assert(offsetof(BP_AssaultDroneComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_AssaultDroneComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.Redirect
// 0x00F8 (0x00F8 - 0x0000)
struct BP_AssaultDroneComponent_C_Redirect final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x00F8)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_AssaultDroneComponent_C_Redirect) == 0x000008, "Wrong alignment on BP_AssaultDroneComponent_C_Redirect");
static_assert(sizeof(BP_AssaultDroneComponent_C_Redirect) == 0x0000F8, "Wrong size on BP_AssaultDroneComponent_C_Redirect");
static_assert(offsetof(BP_AssaultDroneComponent_C_Redirect, HitResult) == 0x000000, "Member 'BP_AssaultDroneComponent_C_Redirect::HitResult' has a wrong offset!");

// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.SetMarkActor
// 0x0060 (0x0060 - 0x0000)
struct BP_AssaultDroneComponent_C_SetMarkActor final
{
public:
	struct FTransform                             Transform;                                         // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultDroneComponent_C_SetMarkActor) == 0x000010, "Wrong alignment on BP_AssaultDroneComponent_C_SetMarkActor");
static_assert(sizeof(BP_AssaultDroneComponent_C_SetMarkActor) == 0x000060, "Wrong size on BP_AssaultDroneComponent_C_SetMarkActor");
static_assert(offsetof(BP_AssaultDroneComponent_C_SetMarkActor, Transform) == 0x000000, "Member 'BP_AssaultDroneComponent_C_SetMarkActor::Transform' has a wrong offset!");

// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.SpawnMark
// 0x0080 (0x0080 - 0x0000)
struct BP_AssaultDroneComponent_C_SpawnMark final
{
public:
	struct FTransform                             Transform;                                         // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1487[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AssaultDrone_RedirectMarker_C*      CallFunc_FinishSpawningActor_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultDroneComponent_C_SpawnMark) == 0x000010, "Wrong alignment on BP_AssaultDroneComponent_C_SpawnMark");
static_assert(sizeof(BP_AssaultDroneComponent_C_SpawnMark) == 0x000080, "Wrong size on BP_AssaultDroneComponent_C_SpawnMark");
static_assert(offsetof(BP_AssaultDroneComponent_C_SpawnMark, Transform) == 0x000000, "Member 'BP_AssaultDroneComponent_C_SpawnMark::Transform' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_SpawnMark, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000060, "Member 'BP_AssaultDroneComponent_C_SpawnMark::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_SpawnMark, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'BP_AssaultDroneComponent_C_SpawnMark::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_SpawnMark, CallFunc_FinishSpawningActor_ReturnValue) == 0x000070, "Member 'BP_AssaultDroneComponent_C_SpawnMark::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BP_AssaultDroneComponent.BP_AssaultDroneComponent_C.IsRight
// 0x0003 (0x0003 - 0x0000)
struct BP_AssaultDroneComponent_C_IsRight final
{
public:
	bool                                          NewParam;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGzLimbType                                   CallFunc_GetLimbType_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AssaultDroneComponent_C_IsRight) == 0x000001, "Wrong alignment on BP_AssaultDroneComponent_C_IsRight");
static_assert(sizeof(BP_AssaultDroneComponent_C_IsRight) == 0x000003, "Wrong size on BP_AssaultDroneComponent_C_IsRight");
static_assert(offsetof(BP_AssaultDroneComponent_C_IsRight, NewParam) == 0x000000, "Member 'BP_AssaultDroneComponent_C_IsRight::NewParam' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_IsRight, CallFunc_GetLimbType_ReturnValue) == 0x000001, "Member 'BP_AssaultDroneComponent_C_IsRight::CallFunc_GetLimbType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AssaultDroneComponent_C_IsRight, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'BP_AssaultDroneComponent_C_IsRight::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

