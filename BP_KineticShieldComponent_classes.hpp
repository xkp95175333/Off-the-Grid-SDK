#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KineticShieldComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "G01_structs.hpp"
#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_KineticShieldComponent.BP_KineticShieldComponent_C
// 0x00C0 (0x01B0 - 0x00F0)
class UBP_KineticShieldComponent_C final : public UGzLimbAbilityComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_KineticShield_C*                    KineticShieldReference;                            // 0x00F8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnShieldRep;                                       // 0x0100(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        CurrentHealth;                                     // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxBlastDamage;                                    // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentBlastDamage;                                // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DamageToBlastRatio;                                // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxHealth;                                         // 0x0130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE5[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveLinearColor*                      Color_Curve;                                       // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DamageShakeMultiplier;                             // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnHealthDamageUpdated;                             // 0x0148(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UGA_KineticShield_C*                    LimbAbilityRef;                                    // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnShieldBroken;                                    // 0x0160(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        SecondsTillFullHealthRegen;                        // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            HealthRegenEffectHandle;                           // 0x0178(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        BlastCooldown;                                     // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnShieldBlast;                                     // 0x0188(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnShieldBlastReady;                                // 0x0198(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FActiveGameplayEffectHandle            PassiveRegenEffectHandle;                          // 0x01A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateBlast(double* BlastDamage);
	void ActivateShield(bool IsNewShield, bool* ActivationSuccess);
	void BreakShield();
	void CanActivateBlast(bool* CanActivate);
	void ClientForceKineticShieldRefUpdate();
	void ClientOnBlastActivate();
	void CloseShield(bool DidBlast);
	void ExecuteUbergraph_BP_KineticShieldComponent(int32 EntryPoint);
	void InitializeShieldHealth();
	void OnHealthDamageUpdated__DelegateSignature(double BlastDamage, double BlastMaxDamage, double Param_CurrentHealth, double Param_MaxHealth);
	void OnRep_KineticShieldReference();
	void OnShieldBlast__DelegateSignature();
	void OnShieldBlastReady__DelegateSignature();
	void OnShieldBroken__DelegateSignature();
	void OnShieldHealthUpdated(double NewHealthValue);
	void OnShieldRep__DelegateSignature(class ABP_KineticShield_C* Param_KineticShieldReference);
	void PlayShieldHitCameraShake(double DamageInstanceValue);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ResetDamageAndUI();
	void SetKineticShield(class ABP_KineticShield_C* NewKineticShieldActor, bool IsNewShield);
	void SpawnShield(bool IsNewShield);
	void StartCooldown(double Cooldown);
	void StartHealthRegen();
	void StopHealthRegen();
	void UpdateBlastDamage(double NewHealthValue, double* ReceivedDamage);
	void UpdateCrosshairWidget();

	float GetAbilityChargePercentage() const;
	void GetHealthPercentage(double* HealthPercentage) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_KineticShieldComponent_C">();
	}
	static class UBP_KineticShieldComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_KineticShieldComponent_C>();
	}
};
static_assert(alignof(UBP_KineticShieldComponent_C) == 0x000008, "Wrong alignment on UBP_KineticShieldComponent_C");
static_assert(sizeof(UBP_KineticShieldComponent_C) == 0x0001B0, "Wrong size on UBP_KineticShieldComponent_C");
static_assert(offsetof(UBP_KineticShieldComponent_C, UberGraphFrame) == 0x0000F0, "Member 'UBP_KineticShieldComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, KineticShieldReference) == 0x0000F8, "Member 'UBP_KineticShieldComponent_C::KineticShieldReference' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, OnShieldRep) == 0x000100, "Member 'UBP_KineticShieldComponent_C::OnShieldRep' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, CurrentHealth) == 0x000110, "Member 'UBP_KineticShieldComponent_C::CurrentHealth' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, MaxBlastDamage) == 0x000118, "Member 'UBP_KineticShieldComponent_C::MaxBlastDamage' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, CurrentBlastDamage) == 0x000120, "Member 'UBP_KineticShieldComponent_C::CurrentBlastDamage' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, DamageToBlastRatio) == 0x000128, "Member 'UBP_KineticShieldComponent_C::DamageToBlastRatio' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, MaxHealth) == 0x000130, "Member 'UBP_KineticShieldComponent_C::MaxHealth' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, Color_Curve) == 0x000138, "Member 'UBP_KineticShieldComponent_C::Color_Curve' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, DamageShakeMultiplier) == 0x000140, "Member 'UBP_KineticShieldComponent_C::DamageShakeMultiplier' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, OnHealthDamageUpdated) == 0x000148, "Member 'UBP_KineticShieldComponent_C::OnHealthDamageUpdated' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, LimbAbilityRef) == 0x000158, "Member 'UBP_KineticShieldComponent_C::LimbAbilityRef' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, OnShieldBroken) == 0x000160, "Member 'UBP_KineticShieldComponent_C::OnShieldBroken' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, SecondsTillFullHealthRegen) == 0x000170, "Member 'UBP_KineticShieldComponent_C::SecondsTillFullHealthRegen' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, HealthRegenEffectHandle) == 0x000178, "Member 'UBP_KineticShieldComponent_C::HealthRegenEffectHandle' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, BlastCooldown) == 0x000180, "Member 'UBP_KineticShieldComponent_C::BlastCooldown' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, OnShieldBlast) == 0x000188, "Member 'UBP_KineticShieldComponent_C::OnShieldBlast' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, OnShieldBlastReady) == 0x000198, "Member 'UBP_KineticShieldComponent_C::OnShieldBlastReady' has a wrong offset!");
static_assert(offsetof(UBP_KineticShieldComponent_C, PassiveRegenEffectHandle) == 0x0001A8, "Member 'UBP_KineticShieldComponent_C::PassiveRegenEffectHandle' has a wrong offset!");

}

