#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KineticShieldComponent

#include "Basic.hpp"

#include "BP_KineticShieldComponent_classes.hpp"
#include "BP_KineticShieldComponent_parameters.hpp"


namespace SDK
{

// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.ActivateBlast
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  BlastDamage                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_KineticShieldComponent_C::ActivateBlast(double* BlastDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "ActivateBlast");

	Params::BP_KineticShieldComponent_C_ActivateBlast Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BlastDamage != nullptr)
		*BlastDamage = Parms.BlastDamage;
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.ActivateShield
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsNewShield                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ActivationSuccess                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_KineticShieldComponent_C::ActivateShield(bool IsNewShield, bool* ActivationSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "ActivateShield");

	Params::BP_KineticShieldComponent_C_ActivateShield Parms{};

	Parms.IsNewShield = IsNewShield;

	UObject::ProcessEvent(Func, &Parms);

	if (ActivationSuccess != nullptr)
		*ActivationSuccess = Parms.ActivationSuccess;
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.BreakShield
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_KineticShieldComponent_C::BreakShield()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "BreakShield");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.CanActivateBlast
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    CanActivate                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_KineticShieldComponent_C::CanActivateBlast(bool* CanActivate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "CanActivateBlast");

	Params::BP_KineticShieldComponent_C_CanActivateBlast Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanActivate != nullptr)
		*CanActivate = Parms.CanActivate;
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.ClientForceKineticShieldRefUpdate
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_KineticShieldComponent_C::ClientForceKineticShieldRefUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "ClientForceKineticShieldRefUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.ClientOnBlastActivate
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_KineticShieldComponent_C::ClientOnBlastActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "ClientOnBlastActivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.CloseShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    DidBlast                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_KineticShieldComponent_C::CloseShield(bool DidBlast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "CloseShield");

	Params::BP_KineticShieldComponent_C_CloseShield Parms{};

	Parms.DidBlast = DidBlast;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.ExecuteUbergraph_BP_KineticShieldComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_KineticShieldComponent_C::ExecuteUbergraph_BP_KineticShieldComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "ExecuteUbergraph_BP_KineticShieldComponent");

	Params::BP_KineticShieldComponent_C_ExecuteUbergraph_BP_KineticShieldComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.InitializeShieldHealth
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_KineticShieldComponent_C::InitializeShieldHealth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "InitializeShieldHealth");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.OnHealthDamageUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  BlastDamage                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  BlastMaxDamage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_CurrentHealth                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_MaxHealth                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_KineticShieldComponent_C::OnHealthDamageUpdated__DelegateSignature(double BlastDamage, double BlastMaxDamage, double Param_CurrentHealth, double Param_MaxHealth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "OnHealthDamageUpdated__DelegateSignature");

	Params::BP_KineticShieldComponent_C_OnHealthDamageUpdated__DelegateSignature Parms{};

	Parms.BlastDamage = BlastDamage;
	Parms.BlastMaxDamage = BlastMaxDamage;
	Parms.Param_CurrentHealth = Param_CurrentHealth;
	Parms.Param_MaxHealth = Param_MaxHealth;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.OnRep_KineticShieldReference
// (BlueprintCallable, BlueprintEvent)

void UBP_KineticShieldComponent_C::OnRep_KineticShieldReference()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "OnRep_KineticShieldReference");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.OnShieldBlast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_KineticShieldComponent_C::OnShieldBlast__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "OnShieldBlast__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.OnShieldBlastReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_KineticShieldComponent_C::OnShieldBlastReady__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "OnShieldBlastReady__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.OnShieldBroken__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_KineticShieldComponent_C::OnShieldBroken__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "OnShieldBroken__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.OnShieldHealthUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewHealthValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_KineticShieldComponent_C::OnShieldHealthUpdated(double NewHealthValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "OnShieldHealthUpdated");

	Params::BP_KineticShieldComponent_C_OnShieldHealthUpdated Parms{};

	Parms.NewHealthValue = NewHealthValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.OnShieldRep__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_KineticShield_C*              Param_KineticShieldReference                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_KineticShieldComponent_C::OnShieldRep__DelegateSignature(class ABP_KineticShield_C* Param_KineticShieldReference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "OnShieldRep__DelegateSignature");

	Params::BP_KineticShieldComponent_C_OnShieldRep__DelegateSignature Parms{};

	Parms.Param_KineticShieldReference = Param_KineticShieldReference;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.PlayShieldHitCameraShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DamageInstanceValue                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_KineticShieldComponent_C::PlayShieldHitCameraShake(double DamageInstanceValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "PlayShieldHitCameraShake");

	Params::BP_KineticShieldComponent_C_PlayShieldHitCameraShake Parms{};

	Parms.DamageInstanceValue = DamageInstanceValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_KineticShieldComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "ReceiveEndPlay");

	Params::BP_KineticShieldComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_KineticShieldComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "ReceiveTick");

	Params::BP_KineticShieldComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.ResetDamageAndUI
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_KineticShieldComponent_C::ResetDamageAndUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "ResetDamageAndUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.SetKineticShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_KineticShield_C*              NewKineticShieldActor                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsNewShield                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_KineticShieldComponent_C::SetKineticShield(class ABP_KineticShield_C* NewKineticShieldActor, bool IsNewShield)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "SetKineticShield");

	Params::BP_KineticShieldComponent_C_SetKineticShield Parms{};

	Parms.NewKineticShieldActor = NewKineticShieldActor;
	Parms.IsNewShield = IsNewShield;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.SpawnShield
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsNewShield                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_KineticShieldComponent_C::SpawnShield(bool IsNewShield)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "SpawnShield");

	Params::BP_KineticShieldComponent_C_SpawnShield Parms{};

	Parms.IsNewShield = IsNewShield;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.StartCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Cooldown                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_KineticShieldComponent_C::StartCooldown(double Cooldown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "StartCooldown");

	Params::BP_KineticShieldComponent_C_StartCooldown Parms{};

	Parms.Cooldown = Cooldown;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.StartHealthRegen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_KineticShieldComponent_C::StartHealthRegen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "StartHealthRegen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.StopHealthRegen
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_KineticShieldComponent_C::StopHealthRegen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "StopHealthRegen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.UpdateBlastDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewHealthValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ReceivedDamage                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_KineticShieldComponent_C::UpdateBlastDamage(double NewHealthValue, double* ReceivedDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "UpdateBlastDamage");

	Params::BP_KineticShieldComponent_C_UpdateBlastDamage Parms{};

	Parms.NewHealthValue = NewHealthValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReceivedDamage != nullptr)
		*ReceivedDamage = Parms.ReceivedDamage;
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.UpdateCrosshairWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_KineticShieldComponent_C::UpdateCrosshairWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "UpdateCrosshairWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.GetAbilityChargePercentage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_KineticShieldComponent_C::GetAbilityChargePercentage() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "GetAbilityChargePercentage");

	Params::BP_KineticShieldComponent_C_GetAbilityChargePercentage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_KineticShieldComponent.BP_KineticShieldComponent_C.GetHealthPercentage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                                  HealthPercentage                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_KineticShieldComponent_C::GetHealthPercentage(double* HealthPercentage) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShieldComponent_C", "GetHealthPercentage");

	Params::BP_KineticShieldComponent_C_GetHealthPercentage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HealthPercentage != nullptr)
		*HealthPercentage = Parms.HealthPercentage;
}

}

