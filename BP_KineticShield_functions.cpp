#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KineticShield

#include "Basic.hpp"

#include "BP_KineticShield_classes.hpp"
#include "BP_KineticShield_parameters.hpp"


namespace SDK
{

// Function BP_KineticShield.BP_KineticShield_C.ActivateBlast
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KineticShield_C::ActivateBlast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "ActivateBlast");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShield.BP_KineticShield_C.ActivateShield
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KineticShield_C::ActivateShield()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "ActivateShield");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShield.BP_KineticShield_C.BP_OnHealthChange
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   Health                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KineticShield_C::BP_OnHealthChange(float Health)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "BP_OnHealthChange");

	Params::BP_KineticShield_C_BP_OnHealthChange Parms{};

	Parms.Health = Health;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShield.BP_KineticShield_C.BreakShield
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KineticShield_C::BreakShield()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "BreakShield");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShield.BP_KineticShield_C.ClearBulletImpacts
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KineticShield_C::ClearBulletImpacts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "ClearBulletImpacts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShield.BP_KineticShield_C.CloseShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    DidBlast                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KineticShield_C::CloseShield(bool DidBlast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "CloseShield");

	Params::BP_KineticShield_C_CloseShield Parms{};

	Parms.DidBlast = DidBlast;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShield.BP_KineticShield_C.ExecuteUbergraph_BP_KineticShield
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KineticShield_C::ExecuteUbergraph_BP_KineticShield(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "ExecuteUbergraph_BP_KineticShield");

	Params::BP_KineticShield_C_ExecuteUbergraph_BP_KineticShield Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShield.BP_KineticShield_C.GetHealthPercentage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  HealthPercentage                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KineticShield_C::GetHealthPercentage(double* HealthPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "GetHealthPercentage");

	Params::BP_KineticShield_C_GetHealthPercentage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HealthPercentage != nullptr)
		*HealthPercentage = Parms.HealthPercentage;
}


// Function BP_KineticShield.BP_KineticShield_C.GetImpactColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ImpactColor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KineticShield_C::GetImpactColor(struct FLinearColor* ImpactColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "GetImpactColor");

	Params::BP_KineticShield_C_GetImpactColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ImpactColor != nullptr)
		*ImpactColor = std::move(Parms.ImpactColor);
}


// Function BP_KineticShield.BP_KineticShield_C.GetShieldColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ShieldColor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KineticShield_C::GetShieldColor(struct FLinearColor* ShieldColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "GetShieldColor");

	Params::BP_KineticShield_C_GetShieldColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ShieldColor != nullptr)
		*ShieldColor = std::move(Parms.ShieldColor);
}


// Function BP_KineticShield.BP_KineticShield_C.InitializeHealth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Param_MaxHealth                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_CurrentHealth                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KineticShield_C::InitializeHealth(double Param_MaxHealth, double Param_CurrentHealth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "InitializeHealth");

	Params::BP_KineticShield_C_InitializeHealth Parms{};

	Parms.Param_MaxHealth = Param_MaxHealth;
	Parms.Param_CurrentHealth = Param_CurrentHealth;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShield.BP_KineticShield_C.MulticastActivateBlast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         BlastRotation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_KineticShield_C::MulticastActivateBlast(const struct FRotator& BlastRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "MulticastActivateBlast");

	Params::BP_KineticShield_C_MulticastActivateBlast Parms{};

	Parms.BlastRotation = std::move(BlastRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShield.BP_KineticShield_C.OnHealthUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewHealthValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KineticShield_C::OnHealthUpdated__DelegateSignature(double NewHealthValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "OnHealthUpdated__DelegateSignature");

	Params::BP_KineticShield_C_OnHealthUpdated__DelegateSignature Parms{};

	Parms.NewHealthValue = NewHealthValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShield.BP_KineticShield_C.OnRep_State
// (BlueprintCallable, BlueprintEvent)

void ABP_KineticShield_C::OnRep_State()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "OnRep_State");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShield.BP_KineticShield_C.OnStateChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KineticShield_C::OnStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "OnStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShield.BP_KineticShield_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KineticShield_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "ReceiveTick");

	Params::BP_KineticShield_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShield.BP_KineticShield_C.ServerUpdateCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_KineticShield_C::ServerUpdateCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "ServerUpdateCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShield.BP_KineticShield_C.SetLimbAbilityComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_KineticShieldComponent_C*     KineticShieldAbilityComponent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_KineticShield_C::SetLimbAbilityComponent(class UBP_KineticShieldComponent_C* KineticShieldAbilityComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "SetLimbAbilityComponent");

	Params::BP_KineticShield_C_SetLimbAbilityComponent Parms{};

	Parms.KineticShieldAbilityComponent = KineticShieldAbilityComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShield.BP_KineticShield_C.SpawnBulletImpactVFX
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          HitLocation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_KineticShield_C::SpawnBulletImpactVFX(const struct FVector& HitLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "SpawnBulletImpactVFX");

	Params::BP_KineticShield_C_SpawnBulletImpactVFX Parms{};

	Parms.HitLocation = std::move(HitLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_KineticShield.BP_KineticShield_C.SpawnFallenBulletVFX
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KineticShield_C::SpawnFallenBulletVFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "SpawnFallenBulletVFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShield.BP_KineticShield_C.UpdateShieldColor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_KineticShield_C::UpdateShieldColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "UpdateShieldColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_KineticShield.BP_KineticShield_C.PlayDeploymentVFX
// (Protected, BlueprintCallable, BlueprintEvent, Const)

void ABP_KineticShield_C::PlayDeploymentVFX() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_KineticShield_C", "PlayDeploymentVFX");

	UObject::ProcessEvent(Func, nullptr);
}

}

