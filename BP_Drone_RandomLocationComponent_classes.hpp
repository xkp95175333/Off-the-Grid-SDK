#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Drone_RandomLocationComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "EReconDrone_ScanState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Drone_RandomLocationComponent.BP_Drone_RandomLocationComponent_C
// 0x00B0 (0x0158 - 0x00A8)
class UBP_Drone_RandomLocationComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        SphereRadius;                                      // 0x00B0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TimeToNextPoint;                                   // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLocation;                                     // 0x00C0(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               TargetRotation;                                    // 0x00D8(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         RotationSpeed;                                     // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EReconDrone_ScanState                         ScanState;                                         // 0x00F4(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_589E[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ScanRotationTarget;                                // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScanRadius;                                        // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ScanZOffset;                                       // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHorizontalScan;                                   // 0x0110(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_589F[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        ArrayRandomPoints;                                 // 0x0118(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        StartTime;                                         // 0x0128(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            MovementCurve;                                     // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SpawnLocation;                                     // 0x0138(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentTime;                                       // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CalculateMoveLocations(const struct FVector& MoveLocation);
	void CircleFMod(int32 Value, int32 Circle, int32* Return);
	void ExecuteUbergraph_BP_Drone_RandomLocationComponent(int32 EntryPoint);
	void GetRotationFromPoint(const struct FVector& Point, struct FRotator* Rotation);
	void OnRep_ScanState();
	void OnStateChanged();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetOwnerViewRotation(bool* Done);
	void SetState(EReconDrone_ScanState Param_ScanState);
	void SetViewTargetLocation(const struct FVector& ViewPointTargetLcoation);
	void Start(const struct FVector& Param_StartLocation);
	void Update();
	void Update_Current_Time_for_Client(double& TimeAfterStart);
	void UpdateOwnerLocation();
	void Vector_1D_Max(double Vector, double B, double* Max);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Drone_RandomLocationComponent_C">();
	}
	static class UBP_Drone_RandomLocationComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Drone_RandomLocationComponent_C>();
	}
};
static_assert(alignof(UBP_Drone_RandomLocationComponent_C) == 0x000008, "Wrong alignment on UBP_Drone_RandomLocationComponent_C");
static_assert(sizeof(UBP_Drone_RandomLocationComponent_C) == 0x000158, "Wrong size on UBP_Drone_RandomLocationComponent_C");
static_assert(offsetof(UBP_Drone_RandomLocationComponent_C, UberGraphFrame) == 0x0000A8, "Member 'UBP_Drone_RandomLocationComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Drone_RandomLocationComponent_C, SphereRadius) == 0x0000B0, "Member 'UBP_Drone_RandomLocationComponent_C::SphereRadius' has a wrong offset!");
static_assert(offsetof(UBP_Drone_RandomLocationComponent_C, TimeToNextPoint) == 0x0000B8, "Member 'UBP_Drone_RandomLocationComponent_C::TimeToNextPoint' has a wrong offset!");
static_assert(offsetof(UBP_Drone_RandomLocationComponent_C, StartLocation) == 0x0000C0, "Member 'UBP_Drone_RandomLocationComponent_C::StartLocation' has a wrong offset!");
static_assert(offsetof(UBP_Drone_RandomLocationComponent_C, TargetRotation) == 0x0000D8, "Member 'UBP_Drone_RandomLocationComponent_C::TargetRotation' has a wrong offset!");
static_assert(offsetof(UBP_Drone_RandomLocationComponent_C, RotationSpeed) == 0x0000F0, "Member 'UBP_Drone_RandomLocationComponent_C::RotationSpeed' has a wrong offset!");
static_assert(offsetof(UBP_Drone_RandomLocationComponent_C, ScanState) == 0x0000F4, "Member 'UBP_Drone_RandomLocationComponent_C::ScanState' has a wrong offset!");
static_assert(offsetof(UBP_Drone_RandomLocationComponent_C, ScanRotationTarget) == 0x0000F8, "Member 'UBP_Drone_RandomLocationComponent_C::ScanRotationTarget' has a wrong offset!");
static_assert(offsetof(UBP_Drone_RandomLocationComponent_C, ScanRadius) == 0x000100, "Member 'UBP_Drone_RandomLocationComponent_C::ScanRadius' has a wrong offset!");
static_assert(offsetof(UBP_Drone_RandomLocationComponent_C, ScanZOffset) == 0x000108, "Member 'UBP_Drone_RandomLocationComponent_C::ScanZOffset' has a wrong offset!");
static_assert(offsetof(UBP_Drone_RandomLocationComponent_C, bHorizontalScan) == 0x000110, "Member 'UBP_Drone_RandomLocationComponent_C::bHorizontalScan' has a wrong offset!");
static_assert(offsetof(UBP_Drone_RandomLocationComponent_C, ArrayRandomPoints) == 0x000118, "Member 'UBP_Drone_RandomLocationComponent_C::ArrayRandomPoints' has a wrong offset!");
static_assert(offsetof(UBP_Drone_RandomLocationComponent_C, StartTime) == 0x000128, "Member 'UBP_Drone_RandomLocationComponent_C::StartTime' has a wrong offset!");
static_assert(offsetof(UBP_Drone_RandomLocationComponent_C, MovementCurve) == 0x000130, "Member 'UBP_Drone_RandomLocationComponent_C::MovementCurve' has a wrong offset!");
static_assert(offsetof(UBP_Drone_RandomLocationComponent_C, SpawnLocation) == 0x000138, "Member 'UBP_Drone_RandomLocationComponent_C::SpawnLocation' has a wrong offset!");
static_assert(offsetof(UBP_Drone_RandomLocationComponent_C, CurrentTime) == 0x000150, "Member 'UBP_Drone_RandomLocationComponent_C::CurrentTime' has a wrong offset!");

}

