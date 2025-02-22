#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_KneeStrike

#include "Basic.hpp"

#include "GameplayCameras_structs.hpp"
#include "Engine_structs.hpp"
#include "G01_classes.hpp"
#include "AkAudio_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_KneeStrike.GA_KneeStrike_C
// 0x0098 (0x0710 - 0x0678)
class UGA_KneeStrike_C final : public UGzGA_BaseLimbAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGzCharacterMovementComponent*          MovementComponent;                                 // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Dashing_Max_Distance;                              // 0x0688(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Dashing_Max_Speed;                                 // 0x068C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Dashing_Stop_Max_Speed;                            // 0x0690(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DED[0x4];                                     // 0x0694(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      Hit_Object_Types;                                  // 0x0698(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         KneeDamage;                                        // 0x06A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DEE[0x4];                                     // 0x06AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzCharacter*                           OwningPlayer;                                      // 0x06B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_KneeStrikeCollisionSphere_C*        KneeStrikeCollisionSphereRef;                      // 0x06B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        KneeHorizontalImpulse;                             // 0x06C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        KneeVerticalImpulse;                               // 0x06C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BleedingDuration;                                  // 0x06D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BleedingDamage;                                    // 0x06D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_ApplyRootMotionConstantForce* DashTask;                                          // 0x06E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          HitConnected;                                      // 0x06E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DEF[0x1];                                     // 0x06E9(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCameraAnimationHandle                 CameraAnimationHandle;                             // 0x06EA(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DF0[0x2];                                     // 0x06EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraAnimationSequence*               DashSequenceRight;                                 // 0x06F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCameraAnimationSequence*               DashSequenceLeft;                                  // 0x06F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCameraAnimationSequence*               KneeHitSequenceRight;                              // 0x0700(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCameraAnimationSequence*               KneeHitSequenceLeft;                               // 0x0708(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyHitEffect(const struct FHitResult& Hit_Result);
	struct FVector CalculatePunchImpulse();
	void CreateDashingFX();
	void CreateHitFX(const struct FHitResult& Hit_Result);
	void DashStop();
	void DashWithParams__UNUSABLE_IN_BP_(float Param_Dashing_Max_Distance, float Param_Dashing_Max_Speed, float Param_Dashing_Stop_Max_Speed, class UCurveFloat* Dashing_Acceleration_Curve, const struct FVector& Direction, const TDelegate<void(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)>& OnDashStopped);
	void DestroyKneeCollisionSphere();
	void ExecuteUbergraph_GA_KneeStrike(int32 EntryPoint);
	class UCameraAnimationSequence* GetDashCameraSequence();
	class UCameraAnimationSequence* GetKneeHitCameraSequence();
	bool IsEnemy(class AActor* HitActor);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnDashHit(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnFinish_EEC839D448B9CD5C2E296FA02D85E4E2();
	void OnSync_891CD0C04024709967A19CBCC149CB77();
	void ReadAbilityConfig();
	void Set_Character_And_Movement_Component();
	void SpawnAndAttachKneeCollisionSphere(const TDelegate<void(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)>& Event);
	void StartCameraSequence(class UCameraAnimationSequence* Sequence);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_KneeStrike_C">();
	}
	static class UGA_KneeStrike_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_KneeStrike_C>();
	}
};
static_assert(alignof(UGA_KneeStrike_C) == 0x000008, "Wrong alignment on UGA_KneeStrike_C");
static_assert(sizeof(UGA_KneeStrike_C) == 0x000710, "Wrong size on UGA_KneeStrike_C");
static_assert(offsetof(UGA_KneeStrike_C, UberGraphFrame) == 0x000678, "Member 'UGA_KneeStrike_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, MovementComponent) == 0x000680, "Member 'UGA_KneeStrike_C::MovementComponent' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, Dashing_Max_Distance) == 0x000688, "Member 'UGA_KneeStrike_C::Dashing_Max_Distance' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, Dashing_Max_Speed) == 0x00068C, "Member 'UGA_KneeStrike_C::Dashing_Max_Speed' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, Dashing_Stop_Max_Speed) == 0x000690, "Member 'UGA_KneeStrike_C::Dashing_Stop_Max_Speed' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, Hit_Object_Types) == 0x000698, "Member 'UGA_KneeStrike_C::Hit_Object_Types' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, KneeDamage) == 0x0006A8, "Member 'UGA_KneeStrike_C::KneeDamage' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, OwningPlayer) == 0x0006B0, "Member 'UGA_KneeStrike_C::OwningPlayer' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, KneeStrikeCollisionSphereRef) == 0x0006B8, "Member 'UGA_KneeStrike_C::KneeStrikeCollisionSphereRef' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, KneeHorizontalImpulse) == 0x0006C0, "Member 'UGA_KneeStrike_C::KneeHorizontalImpulse' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, KneeVerticalImpulse) == 0x0006C8, "Member 'UGA_KneeStrike_C::KneeVerticalImpulse' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, BleedingDuration) == 0x0006D0, "Member 'UGA_KneeStrike_C::BleedingDuration' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, BleedingDamage) == 0x0006D8, "Member 'UGA_KneeStrike_C::BleedingDamage' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, DashTask) == 0x0006E0, "Member 'UGA_KneeStrike_C::DashTask' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, HitConnected) == 0x0006E8, "Member 'UGA_KneeStrike_C::HitConnected' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, CameraAnimationHandle) == 0x0006EA, "Member 'UGA_KneeStrike_C::CameraAnimationHandle' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, DashSequenceRight) == 0x0006F0, "Member 'UGA_KneeStrike_C::DashSequenceRight' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, DashSequenceLeft) == 0x0006F8, "Member 'UGA_KneeStrike_C::DashSequenceLeft' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, KneeHitSequenceRight) == 0x000700, "Member 'UGA_KneeStrike_C::KneeHitSequenceRight' has a wrong offset!");
static_assert(offsetof(UGA_KneeStrike_C, KneeHitSequenceLeft) == 0x000708, "Member 'UGA_KneeStrike_C::KneeHitSequenceLeft' has a wrong offset!");

}

