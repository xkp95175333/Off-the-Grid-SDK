#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TetherPreviewComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "G01_structs.hpp"
#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TetherPreviewComponent.BP_TetherPreviewComponent_C
// 0x00E8 (0x01F0 - 0x0108)
class UBP_TetherPreviewComponent_C final : public UGzTetherPreviewComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0108(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                FirstLocation;                                     // 0x0110(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FirstNormal;                                       // 0x0128(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 FirstAttachedActor;                                // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          FirstIsValid;                                      // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E66[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SecondLocation;                                    // 0x0150(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SecondNormal;                                      // 0x0168(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 SecondAttachedActor;                               // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          HasNoConnectionObstacle;                           // 0x0188(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTetherDistanceValid;                             // 0x0189(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FirstTetherPlacement;                              // 0x018A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E67[0x5];                                     // 0x018B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_TetherEnd_Preview_C*                ValidLocationSphere;                               // 0x0190(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_TetherLink_Preview_C*               ValidConnectionLine;                               // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShowingPreview;                                  // 0x01A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E68[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_TetherEnd_Preview_C*                InvalidLocationSphere;                             // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_TetherLink_Preview_C*               InvalidConnectionLine;                             // 0x01B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_TetherEnd_C*                        FirstTetherEndRef;                                 // 0x01B8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_TetherLinkSphere_Preview_C*         MaxLinkDistancePreviewSphere;                      // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          HasValidLocationCache;                             // 0x01C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E69[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        VerticalTraceDistance;                             // 0x01D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ECollisionChannel>                     IgnoredObjectTypes;                                // 0x01D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UGzBodyPartAbilityData_Tether*          TetherAbilityData;                                 // 0x01E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ActivatePreview();
	void CanPlaceTether(bool* CanPlace, bool* IsFirstTether);
	void CheckForValidLocation(bool* HasHit, struct FVector* SourceLocation, struct FVector* HitLocation, struct FVector* HitNormal, class AActor** HitActor);
	void CreatePreviewActors();
	void DebugPrint();
	void DisablePreview();
	void ExecuteUbergraph_BP_TetherPreviewComponent(int32 EntryPoint);
	void GetFirstLocationData(struct FHitResult* LocationData);
	void GetFirstTetherLocation(struct FVector* Location);
	void GetSecondLocationData(struct FHitResult* LocationData);
	void GetTetherAbilityData(class UGzBodyPartAbilityData_Tether** Param_AbilityData);
	void IsConnectionInRange(const struct FVector& SecondLoc, bool* IsInRange);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ResetVariables();
	void ResetVariables_FirstTether();
	void ResetVariables_SecondTether();
	void SetFirstTetherPlacement(bool IsFirstPlacement);
	void SetFirstTetherRef(class AGzTetherEnd* FirstTetherEnd);
	void SetPreviewActive(bool Param_IsActive);
	void TraceForValidTarget(const struct FVector& StartLocation, const struct FVector& EndLocation, bool* IsValidTarget, struct FHitResult* TargetHitResult);
	void UpdateConnectionMesh();
	void UpdateConnectionVisibility();
	void UpdateFirstLocation();
	void UpdatePreviewGeometry();
	void UpdatePreviewSphere(const struct FVector& Location, const struct FVector& Normal);
	void UpdateRangeGauge(const struct FVector& TetherSpawnLocation);
	void UpdateSecondLocation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TetherPreviewComponent_C">();
	}
	static class UBP_TetherPreviewComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TetherPreviewComponent_C>();
	}
};
static_assert(alignof(UBP_TetherPreviewComponent_C) == 0x000008, "Wrong alignment on UBP_TetherPreviewComponent_C");
static_assert(sizeof(UBP_TetherPreviewComponent_C) == 0x0001F0, "Wrong size on UBP_TetherPreviewComponent_C");
static_assert(offsetof(UBP_TetherPreviewComponent_C, UberGraphFrame) == 0x000108, "Member 'UBP_TetherPreviewComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, FirstLocation) == 0x000110, "Member 'UBP_TetherPreviewComponent_C::FirstLocation' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, FirstNormal) == 0x000128, "Member 'UBP_TetherPreviewComponent_C::FirstNormal' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, FirstAttachedActor) == 0x000140, "Member 'UBP_TetherPreviewComponent_C::FirstAttachedActor' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, FirstIsValid) == 0x000148, "Member 'UBP_TetherPreviewComponent_C::FirstIsValid' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, SecondLocation) == 0x000150, "Member 'UBP_TetherPreviewComponent_C::SecondLocation' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, SecondNormal) == 0x000168, "Member 'UBP_TetherPreviewComponent_C::SecondNormal' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, SecondAttachedActor) == 0x000180, "Member 'UBP_TetherPreviewComponent_C::SecondAttachedActor' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, HasNoConnectionObstacle) == 0x000188, "Member 'UBP_TetherPreviewComponent_C::HasNoConnectionObstacle' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, IsTetherDistanceValid) == 0x000189, "Member 'UBP_TetherPreviewComponent_C::IsTetherDistanceValid' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, FirstTetherPlacement) == 0x00018A, "Member 'UBP_TetherPreviewComponent_C::FirstTetherPlacement' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, ValidLocationSphere) == 0x000190, "Member 'UBP_TetherPreviewComponent_C::ValidLocationSphere' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, ValidConnectionLine) == 0x000198, "Member 'UBP_TetherPreviewComponent_C::ValidConnectionLine' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, IsShowingPreview) == 0x0001A0, "Member 'UBP_TetherPreviewComponent_C::IsShowingPreview' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, InvalidLocationSphere) == 0x0001A8, "Member 'UBP_TetherPreviewComponent_C::InvalidLocationSphere' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, InvalidConnectionLine) == 0x0001B0, "Member 'UBP_TetherPreviewComponent_C::InvalidConnectionLine' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, FirstTetherEndRef) == 0x0001B8, "Member 'UBP_TetherPreviewComponent_C::FirstTetherEndRef' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, MaxLinkDistancePreviewSphere) == 0x0001C0, "Member 'UBP_TetherPreviewComponent_C::MaxLinkDistancePreviewSphere' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, HasValidLocationCache) == 0x0001C8, "Member 'UBP_TetherPreviewComponent_C::HasValidLocationCache' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, VerticalTraceDistance) == 0x0001D0, "Member 'UBP_TetherPreviewComponent_C::VerticalTraceDistance' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, IgnoredObjectTypes) == 0x0001D8, "Member 'UBP_TetherPreviewComponent_C::IgnoredObjectTypes' has a wrong offset!");
static_assert(offsetof(UBP_TetherPreviewComponent_C, TetherAbilityData) == 0x0001E8, "Member 'UBP_TetherPreviewComponent_C::TetherAbilityData' has a wrong offset!");

}

