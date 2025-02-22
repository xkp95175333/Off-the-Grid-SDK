#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkyNavRoute_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SkyNavRoute_Base.BP_SkyNavRoute_Base_C
// 0x0240 (0x04E0 - 0x02A0)
class ABP_SkyNavRoute_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGzStreamableComponent*                 GzStreamable;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StartDirectionMarker;                              // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       PlayerDetectionSphere;                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGzMarkerComponent*                     GzMarker_Start;                                    // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   TextRender;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMissionResourceComponent*              MissionResource;                                   // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<int32, struct FVector>                   GatesDistanceInformation;                          // 0x02F0(0x0050)(Edit, BlueprintVisible)
	TMap<int32, struct FTransform>                GatesCustomTransform;                              // 0x0340(0x0050)(Edit, BlueprintVisible)
	TSet<int32>                                   ZiplineGates;                                      // 0x0390(0x0050)(Edit, BlueprintVisible)
	struct FTransform                             RouteSavedTransform;                               // 0x03E0(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RouteActivated;                                    // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B9F[0x7];                                     // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPlayerFlyThrough;                                // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class ABP_SkyNavGate_C*>               SkyNavGates;                                       // 0x0458(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         RouteProgress;                                     // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BA0[0x4];                                     // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CheckIfRunStartedTimer;                            // 0x0470(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnRouteDestroyed;                                  // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          GateConsumed;                                      // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BA1[0x7];                                     // 0x0489(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnGateConsumed;                                    // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsZiplineStart;                                    // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BA2[0x7];                                     // 0x04A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             MissionStartConsumed;                              // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Active;                                            // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BA3[0x3];                                     // 0x04B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumGatesPendingDestroy;                            // 0x04BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShortestGateConsumptionTime;                       // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEnoughGateConsumptionStarted;                    // 0x04C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void UserConstructionScript();
	void UpdateSplinePointsDetails();
	void SetTrajectoryValuesToGate(class ABP_SkyNavGate_C* GateActor);
	void SetActive(bool bActive, class UMissionObjective* Objective);
	void RouteActivation_SC(bool IsActive);
	void RotateStartEffectTowardsFirstGate();
	void ReceiveBeginPlay();
	void OnRouteDestroyed__DelegateSignature();
	void OnPlayerFlyThrough__DelegateSignature(int32 FlyGateSplinePoint, int32 PlayerId);
	void OnGatePendingDestroyStarted(double Duration);
	void OnGateConsumedEvent(class ABP_SkyNavGate_C* GateRef);
	void OnGateConsumed__DelegateSignature(int32 GateIndex);
	void OnEnoughGatesConsumed();
	void OnEnoughGateConsumptionStarted__DelegateSignature(double ShortestDuration);
	void MissionStartConsumed__DelegateSignature();
	void GetLocalPlayerID(int32* PlayerId);
	void ExecuteUbergraph_BP_SkyNavRoute_Base(int32 EntryPoint);
	void DispatchPlayerFlyThrough(int32 FlyGateSplinePoint, int32 PlayerId);
	void CheckNumberOfGates(int32 ArrayLength, bool* Correct);
	void CheckIfRunStarted();
	void ChangeMarkerVisibility_CO(bool NewVisibility);
	void CalculateSplinePointTransform(int32 PointIndex, ESplineCoordinateSpace CoordinateSpace, struct FTransform* Return);
	void BndEvt__BP_SkyNavRoute_Base_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_SkyNavRoute_Base_PlayerDetectionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_SkyNavRoute_Base_MissionResource_K2Node_ComponentBoundEvent_2_OnResourcePendingDestroyFinished__DelegateSignature(class UMissionResourceComponent* Resource);
	void B2_TeleportRouteToSavedWorldTransform();
	void B1_SaveRouteWorldTransform();
	void ActivateGateByProgress(int32 CurrentProgress);
	void A4_CalculateAndSetTrajectoryTangents();
	void A3_ApplySavedCustomGatesParameters();
	void A2_UpdateCustomGatesParameters();
	void A1_TeleportAllAssignedGatesToSplinePoints();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkyNavRoute_Base_C">();
	}
	static class ABP_SkyNavRoute_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkyNavRoute_Base_C>();
	}
};
static_assert(alignof(ABP_SkyNavRoute_Base_C) == 0x000010, "Wrong alignment on ABP_SkyNavRoute_Base_C");
static_assert(sizeof(ABP_SkyNavRoute_Base_C) == 0x0004E0, "Wrong size on ABP_SkyNavRoute_Base_C");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_SkyNavRoute_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, GzStreamable) == 0x0002A8, "Member 'ABP_SkyNavRoute_Base_C::GzStreamable' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, StartDirectionMarker) == 0x0002B0, "Member 'ABP_SkyNavRoute_Base_C::StartDirectionMarker' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, PlayerDetectionSphere) == 0x0002B8, "Member 'ABP_SkyNavRoute_Base_C::PlayerDetectionSphere' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, GzMarker_Start) == 0x0002C0, "Member 'ABP_SkyNavRoute_Base_C::GzMarker_Start' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, TextRender) == 0x0002C8, "Member 'ABP_SkyNavRoute_Base_C::TextRender' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, Billboard) == 0x0002D0, "Member 'ABP_SkyNavRoute_Base_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, MissionResource) == 0x0002D8, "Member 'ABP_SkyNavRoute_Base_C::MissionResource' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, Spline) == 0x0002E0, "Member 'ABP_SkyNavRoute_Base_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, DefaultSceneRoot) == 0x0002E8, "Member 'ABP_SkyNavRoute_Base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, GatesDistanceInformation) == 0x0002F0, "Member 'ABP_SkyNavRoute_Base_C::GatesDistanceInformation' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, GatesCustomTransform) == 0x000340, "Member 'ABP_SkyNavRoute_Base_C::GatesCustomTransform' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, ZiplineGates) == 0x000390, "Member 'ABP_SkyNavRoute_Base_C::ZiplineGates' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, RouteSavedTransform) == 0x0003E0, "Member 'ABP_SkyNavRoute_Base_C::RouteSavedTransform' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, RouteActivated) == 0x000440, "Member 'ABP_SkyNavRoute_Base_C::RouteActivated' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, OnPlayerFlyThrough) == 0x000448, "Member 'ABP_SkyNavRoute_Base_C::OnPlayerFlyThrough' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, SkyNavGates) == 0x000458, "Member 'ABP_SkyNavRoute_Base_C::SkyNavGates' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, RouteProgress) == 0x000468, "Member 'ABP_SkyNavRoute_Base_C::RouteProgress' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, CheckIfRunStartedTimer) == 0x000470, "Member 'ABP_SkyNavRoute_Base_C::CheckIfRunStartedTimer' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, OnRouteDestroyed) == 0x000478, "Member 'ABP_SkyNavRoute_Base_C::OnRouteDestroyed' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, GateConsumed) == 0x000488, "Member 'ABP_SkyNavRoute_Base_C::GateConsumed' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, OnGateConsumed) == 0x000490, "Member 'ABP_SkyNavRoute_Base_C::OnGateConsumed' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, IsZiplineStart) == 0x0004A0, "Member 'ABP_SkyNavRoute_Base_C::IsZiplineStart' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, MissionStartConsumed) == 0x0004A8, "Member 'ABP_SkyNavRoute_Base_C::MissionStartConsumed' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, Active) == 0x0004B8, "Member 'ABP_SkyNavRoute_Base_C::Active' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, NumGatesPendingDestroy) == 0x0004BC, "Member 'ABP_SkyNavRoute_Base_C::NumGatesPendingDestroy' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, ShortestGateConsumptionTime) == 0x0004C0, "Member 'ABP_SkyNavRoute_Base_C::ShortestGateConsumptionTime' has a wrong offset!");
static_assert(offsetof(ABP_SkyNavRoute_Base_C, OnEnoughGateConsumptionStarted) == 0x0004C8, "Member 'ABP_SkyNavRoute_Base_C::OnEnoughGateConsumptionStarted' has a wrong offset!");

}

