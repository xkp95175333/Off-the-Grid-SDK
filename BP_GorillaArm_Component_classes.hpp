#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GorillaArm_Component

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "G01_structs.hpp"
#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GorillaArm_Component.BP_GorillaArm_Component_C
// 0x02A0 (0x0550 - 0x02B0)
class UBP_GorillaArm_Component_C final : public UGzGorillaArmComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FHitResult                             Player_Ground_Hit;                                 // 0x02B8(0x00F8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FPredictProjectilePathResult           Predict_Result;                                    // 0x03B0(0x0140)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ABP_GorillaArm_DashIndicator_C*         Dash_Indicator;                                    // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_GorillaArm_GroundPreview_C*         Ground_Preview;                                    // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_GorillaArm_GroundDecal_C*           GroundDecalActor;                                  // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        HeatValue;                                         // 0x0508(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ThrusterHeatingSpeed;                              // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ThrusterCoolingSpeed;                              // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ThrusterHeating;                                   // 0x0520(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65CC[0x7];                                     // 0x0521(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               ThrusterMaterial;                                  // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          HasCharge;                                         // 0x0530(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65CD[0x7];                                     // 0x0531(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      Exhaust;                                           // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGzLimbComponent*                       LimbComponent;                                     // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          PassiveCueActive;                                  // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CheckForAbilityCharges();
	void Cloak_RPC(bool Enable);
	void DestroyDecalPreview();
	void DestroyIndicator();
	void DestroyPreview();
	void ExecuteUbergraph_BP_GorillaArm_Component(int32 EntryPoint);
	void GetPathPredictionLocomotion(double Distance, float* Dash_Speed, double* DashDuration);
	void Listen_for_Cloaking();
	void OnAbilityEndEvent();
	void OnAttributeChanged_AE78796443AD23DE1C4B78B4D5ECE220(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue);
	void OnChargeStartEvent();
	void OnDashStartEvent();
	void OnDashStopEvent();
	void OnTagAdded_5B3E127F4744188661C3379F154C2C63(const struct FGameplayTag& Tag);
	void OnTagRemoved_5B3E127F4744188661C3379F154C2C63(const struct FGameplayTag& Tag);
	void PlayChargingFXCue();
	void PlayPassiveFXCue();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void RemoveChargeFXCue();
	void RemovePassiveFXCue();
	void SetIndicatorDashing();
	void SpawnDecalPreview();
	void SpawnIndicator();
	void SpawnPreview();
	void UpdateDecalPreview();

	void CalculateDistanceCoefficient(double* Distance_Coefficient) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GorillaArm_Component_C">();
	}
	static class UBP_GorillaArm_Component_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GorillaArm_Component_C>();
	}
};
static_assert(alignof(UBP_GorillaArm_Component_C) == 0x000008, "Wrong alignment on UBP_GorillaArm_Component_C");
static_assert(sizeof(UBP_GorillaArm_Component_C) == 0x000550, "Wrong size on UBP_GorillaArm_Component_C");
static_assert(offsetof(UBP_GorillaArm_Component_C, UberGraphFrame) == 0x0002B0, "Member 'UBP_GorillaArm_Component_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_GorillaArm_Component_C, Player_Ground_Hit) == 0x0002B8, "Member 'UBP_GorillaArm_Component_C::Player_Ground_Hit' has a wrong offset!");
static_assert(offsetof(UBP_GorillaArm_Component_C, Predict_Result) == 0x0003B0, "Member 'UBP_GorillaArm_Component_C::Predict_Result' has a wrong offset!");
static_assert(offsetof(UBP_GorillaArm_Component_C, Dash_Indicator) == 0x0004F0, "Member 'UBP_GorillaArm_Component_C::Dash_Indicator' has a wrong offset!");
static_assert(offsetof(UBP_GorillaArm_Component_C, Ground_Preview) == 0x0004F8, "Member 'UBP_GorillaArm_Component_C::Ground_Preview' has a wrong offset!");
static_assert(offsetof(UBP_GorillaArm_Component_C, GroundDecalActor) == 0x000500, "Member 'UBP_GorillaArm_Component_C::GroundDecalActor' has a wrong offset!");
static_assert(offsetof(UBP_GorillaArm_Component_C, HeatValue) == 0x000508, "Member 'UBP_GorillaArm_Component_C::HeatValue' has a wrong offset!");
static_assert(offsetof(UBP_GorillaArm_Component_C, ThrusterHeatingSpeed) == 0x000510, "Member 'UBP_GorillaArm_Component_C::ThrusterHeatingSpeed' has a wrong offset!");
static_assert(offsetof(UBP_GorillaArm_Component_C, ThrusterCoolingSpeed) == 0x000518, "Member 'UBP_GorillaArm_Component_C::ThrusterCoolingSpeed' has a wrong offset!");
static_assert(offsetof(UBP_GorillaArm_Component_C, ThrusterHeating) == 0x000520, "Member 'UBP_GorillaArm_Component_C::ThrusterHeating' has a wrong offset!");
static_assert(offsetof(UBP_GorillaArm_Component_C, ThrusterMaterial) == 0x000528, "Member 'UBP_GorillaArm_Component_C::ThrusterMaterial' has a wrong offset!");
static_assert(offsetof(UBP_GorillaArm_Component_C, HasCharge) == 0x000530, "Member 'UBP_GorillaArm_Component_C::HasCharge' has a wrong offset!");
static_assert(offsetof(UBP_GorillaArm_Component_C, Exhaust) == 0x000538, "Member 'UBP_GorillaArm_Component_C::Exhaust' has a wrong offset!");
static_assert(offsetof(UBP_GorillaArm_Component_C, LimbComponent) == 0x000540, "Member 'UBP_GorillaArm_Component_C::LimbComponent' has a wrong offset!");
static_assert(offsetof(UBP_GorillaArm_Component_C, PassiveCueActive) == 0x000548, "Member 'UBP_GorillaArm_Component_C::PassiveCueActive' has a wrong offset!");

}

