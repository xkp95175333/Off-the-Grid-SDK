#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cloak_Gadget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "G01_structs.hpp"
#include "G01_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Cloak_Gadget.BP_Cloak_Gadget_C
// 0x0110 (0x0500 - 0x03F0)
class ABP_Cloak_Gadget_C final : public AGzCloak_Gadget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   ClosedMesh;                                        // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak;                                                // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BeepMesh;                                          // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GadgetMovementComponent_C*          BP_GadgetMovementComponent;                        // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere1;                                           // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         BeepMaterilaTM_NewTrack_0_A22EBBAA433F99E9001213AD1C75AF1B; // 0x0430(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            BeepMaterilaTM__Direction_A22EBBAA433F99E9001213AD1C75AF1B; // 0x0434(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58C2[0x3];                                     // 0x0435(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     BeepMaterilaTM;                                    // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1_NewTrack_0_C0837B0E4AE78D202859799056A7448D; // 0x0440(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1__Direction_C0837B0E4AE78D202859799056A7448D; // 0x0444(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58C3[0x3];                                     // 0x0445(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        FlySpeed;                                          // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxTargetLocation;                                 // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGzAsyncTaskAttributeChanged*           ListenDamageTask;                                  // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGzCloak_Gadget_InitInfo               ExposeInitInfo;                                    // 0x0468(0x0058)(Edit, BlueprintVisible, Net, NoDestructor, ExposeOnSpawn)
	class UMaterialInstanceDynamic*               BeepDM;                                            // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          HitAudioEvent;                                     // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UGzProgressLogEntryWidget>  ProgressWidgetClass;                               // 0x04D0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash)
	int32                                         ProgressUIHandle;                                  // 0x04D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            GESpeedBoostHandle;                                // 0x04DC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58C4[0x4];                                     // 0x04E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Cloak_Field_C*                      CloakField;                                        // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         LaunchSpeed;                                       // 0x04F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOnPosition;                                       // 0x04F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddGESpeedBoost();
	void Beep();
	void BeepMaterilaTM__FinishedFunc();
	void BeepMaterilaTM__UpdateFunc();
	void CalculateTargetPos();
	void CancelProgressUI();
	bool CanScanOnAnyDistance();
	void DestroFX();
	void DestroyVisualField();
	void DetachParts();
	void ExecuteUbergraph_BP_Cloak_Gadget(int32 EntryPoint);
	void ExpandField();
	void ForceDeployAnimation();
	bool OnDefilerEffectApplied();
	bool OnDefilerEffectRemoved();
	void OnPosition_Event();
	void ProgressUI();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveTick(float DeltaSeconds);
	void RemoveGESpeedBoost();
	void SetupBeep();
	void SpawnCloakVisualField();
	void SpawnFX();
	void SpawnPartActorFromScene(class UStaticMesh* NewMesh, float X, double Y);
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();

	EGzDefilerTargetType GetDefilerTargetType() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Cloak_Gadget_C">();
	}
	static class ABP_Cloak_Gadget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Cloak_Gadget_C>();
	}
};
static_assert(alignof(ABP_Cloak_Gadget_C) == 0x000010, "Wrong alignment on ABP_Cloak_Gadget_C");
static_assert(sizeof(ABP_Cloak_Gadget_C) == 0x000500, "Wrong size on ABP_Cloak_Gadget_C");
static_assert(offsetof(ABP_Cloak_Gadget_C, UberGraphFrame) == 0x0003F0, "Member 'ABP_Cloak_Gadget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, ClosedMesh) == 0x0003F8, "Member 'ABP_Cloak_Gadget_C::ClosedMesh' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, SkeletalMesh) == 0x000400, "Member 'ABP_Cloak_Gadget_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, Ak) == 0x000408, "Member 'ABP_Cloak_Gadget_C::Ak' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, BeepMesh) == 0x000410, "Member 'ABP_Cloak_Gadget_C::BeepMesh' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, BP_GadgetMovementComponent) == 0x000418, "Member 'ABP_Cloak_Gadget_C::BP_GadgetMovementComponent' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, Scene) == 0x000420, "Member 'ABP_Cloak_Gadget_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, Sphere1) == 0x000428, "Member 'ABP_Cloak_Gadget_C::Sphere1' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, BeepMaterilaTM_NewTrack_0_A22EBBAA433F99E9001213AD1C75AF1B) == 0x000430, "Member 'ABP_Cloak_Gadget_C::BeepMaterilaTM_NewTrack_0_A22EBBAA433F99E9001213AD1C75AF1B' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, BeepMaterilaTM__Direction_A22EBBAA433F99E9001213AD1C75AF1B) == 0x000434, "Member 'ABP_Cloak_Gadget_C::BeepMaterilaTM__Direction_A22EBBAA433F99E9001213AD1C75AF1B' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, BeepMaterilaTM) == 0x000438, "Member 'ABP_Cloak_Gadget_C::BeepMaterilaTM' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, Timeline_1_NewTrack_0_C0837B0E4AE78D202859799056A7448D) == 0x000440, "Member 'ABP_Cloak_Gadget_C::Timeline_1_NewTrack_0_C0837B0E4AE78D202859799056A7448D' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, Timeline_1__Direction_C0837B0E4AE78D202859799056A7448D) == 0x000444, "Member 'ABP_Cloak_Gadget_C::Timeline_1__Direction_C0837B0E4AE78D202859799056A7448D' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, Timeline_1) == 0x000448, "Member 'ABP_Cloak_Gadget_C::Timeline_1' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, FlySpeed) == 0x000450, "Member 'ABP_Cloak_Gadget_C::FlySpeed' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, MaxTargetLocation) == 0x000458, "Member 'ABP_Cloak_Gadget_C::MaxTargetLocation' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, ListenDamageTask) == 0x000460, "Member 'ABP_Cloak_Gadget_C::ListenDamageTask' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, ExposeInitInfo) == 0x000468, "Member 'ABP_Cloak_Gadget_C::ExposeInitInfo' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, BeepDM) == 0x0004C0, "Member 'ABP_Cloak_Gadget_C::BeepDM' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, HitAudioEvent) == 0x0004C8, "Member 'ABP_Cloak_Gadget_C::HitAudioEvent' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, ProgressWidgetClass) == 0x0004D0, "Member 'ABP_Cloak_Gadget_C::ProgressWidgetClass' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, ProgressUIHandle) == 0x0004D8, "Member 'ABP_Cloak_Gadget_C::ProgressUIHandle' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, GESpeedBoostHandle) == 0x0004DC, "Member 'ABP_Cloak_Gadget_C::GESpeedBoostHandle' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, CloakField) == 0x0004E8, "Member 'ABP_Cloak_Gadget_C::CloakField' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, LaunchSpeed) == 0x0004F0, "Member 'ABP_Cloak_Gadget_C::LaunchSpeed' has a wrong offset!");
static_assert(offsetof(ABP_Cloak_Gadget_C, bOnPosition) == 0x0004F4, "Member 'ABP_Cloak_Gadget_C::bOnPosition' has a wrong offset!");

}

