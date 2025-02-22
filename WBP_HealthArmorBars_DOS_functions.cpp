#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HealthArmorBars_DOS

#include "Basic.hpp"

#include "WBP_HealthArmorBars_DOS_classes.hpp"
#include "WBP_HealthArmorBars_DOS_parameters.hpp"


namespace SDK
{

// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.Blocking Tag Change
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bLock                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthArmorBars_DOS_C::Blocking_Tag_Change(bool Param_bLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "Blocking Tag Change");

	Params::WBP_HealthArmorBars_DOS_C_Blocking_Tag_Change Parms{};

	Parms.Param_bLock = Param_bLock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HealthArmorBars_DOS_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.EstimateRegenValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UGameplayEffect*>          Effects                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayAttribute               BaseAttribute                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FGameplayAttribute               MaxAttribute                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UWBP_HealthArmorBars_DOS_C::EstimateRegenValue(const TArray<class UGameplayEffect*>& Effects, const struct FGameplayAttribute& BaseAttribute, const struct FGameplayAttribute& MaxAttribute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "EstimateRegenValue");

	Params::WBP_HealthArmorBars_DOS_C_EstimateRegenValue Parms{};

	Parms.Effects = std::move(Effects);
	Parms.BaseAttribute = std::move(BaseAttribute);
	Parms.MaxAttribute = std::move(MaxAttribute);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.ExecuteUbergraph_WBP_HealthArmorBars_DOS
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthArmorBars_DOS_C::ExecuteUbergraph_WBP_HealthArmorBars_DOS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "ExecuteUbergraph_WBP_HealthArmorBars_DOS");

	Params::WBP_HealthArmorBars_DOS_C_ExecuteUbergraph_WBP_HealthArmorBars_DOS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.GetIndexInTeam
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AGzTeam*                          Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   OutputPin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthArmorBars_DOS_C::GetIndexInTeam(class AGzTeam* Team, int32* OutputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "GetIndexInTeam");

	Params::WBP_HealthArmorBars_DOS_C_GetIndexInTeam Parms{};

	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.JetpackDamageVisibilityCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HealthArmorBars_DOS_C::JetpackDamageVisibilityCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "JetpackDamageVisibilityCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.OnArmorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthArmorBars_DOS_C::OnArmorChanged(float NewValue, float OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "OnArmorChanged");

	Params::WBP_HealthArmorBars_DOS_C_OnArmorChanged Parms{};

	Parms.NewValue = NewValue;
	Parms.OldValue = OldValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.OnAttributeChanged_4F031F774841FFD00A0C299E89399955
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute               Param_Attribute                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthArmorBars_DOS_C::OnAttributeChanged_4F031F774841FFD00A0C299E89399955(const struct FGameplayAttribute& Param_Attribute, float NewValue, float OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "OnAttributeChanged_4F031F774841FFD00A0C299E89399955");

	Params::WBP_HealthArmorBars_DOS_C_OnAttributeChanged_4F031F774841FFD00A0C299E89399955 Parms{};

	Parms.Param_Attribute = std::move(Param_Attribute);
	Parms.NewValue = NewValue;
	Parms.OldValue = OldValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.OnAttributeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute               Param_Attribute                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// double                                  Fraction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthArmorBars_DOS_C::OnAttributeChanged__DelegateSignature(const struct FGameplayAttribute& Param_Attribute, double Fraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "OnAttributeChanged__DelegateSignature");

	Params::WBP_HealthArmorBars_DOS_C_OnAttributeChanged__DelegateSignature Parms{};

	Parms.Param_Attribute = std::move(Param_Attribute);
	Parms.Fraction = Fraction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.OnDamageReceived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Damager                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EGzDamageIndicatorType                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bCrit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthArmorBars_DOS_C::OnDamageReceived(class AActor* Damager, EGzDamageIndicatorType Type, float Damage, bool bCrit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "OnDamageReceived");

	Params::WBP_HealthArmorBars_DOS_C_OnDamageReceived Parms{};

	Parms.Damager = Damager;
	Parms.Type = Type;
	Parms.Damage = Damage;
	Parms.bCrit = bCrit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.OnHealthChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthArmorBars_DOS_C::OnHealthChanged(float NewValue, float OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "OnHealthChanged");

	Params::WBP_HealthArmorBars_DOS_C_OnHealthChanged Parms{};

	Parms.NewValue = NewValue;
	Parms.OldValue = OldValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.OnReady_47DFD12B4462B4C1B4BE06841DD13C28
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGzGameModeSubsystem*             Subsystem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthArmorBars_DOS_C::OnReady_47DFD12B4462B4C1B4BE06841DD13C28(class AGzGameModeSubsystem* Subsystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "OnReady_47DFD12B4462B4C1B4BE06841DD13C28");

	Params::WBP_HealthArmorBars_DOS_C_OnReady_47DFD12B4462B4C1B4BE06841DD13C28 Parms{};

	Parms.Subsystem = Subsystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.OnRegenEnd
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGzGA_Consume*                    ConsumeAbility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UGameplayEffect*>          EndEffects                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_HealthArmorBars_DOS_C::OnRegenEnd(class UGzGA_Consume* ConsumeAbility, const TArray<class UGameplayEffect*>& EndEffects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "OnRegenEnd");

	Params::WBP_HealthArmorBars_DOS_C_OnRegenEnd Parms{};

	Parms.ConsumeAbility = ConsumeAbility;
	Parms.EndEffects = std::move(EndEffects);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.OnRegenStart
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGzGA_Consume*                    ConsumeAbility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UGameplayEffect*>          EndEffects                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_HealthArmorBars_DOS_C::OnRegenStart(class UGzGA_Consume* ConsumeAbility, const TArray<class UGameplayEffect*>& EndEffects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "OnRegenStart");

	Params::WBP_HealthArmorBars_DOS_C_OnRegenStart Parms{};

	Parms.ConsumeAbility = ConsumeAbility;
	Parms.EndEffects = std::move(EndEffects);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.OnTagAdded_0A81212E4B67B58A982165BC5CB35257
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthArmorBars_DOS_C::OnTagAdded_0A81212E4B67B58A982165BC5CB35257(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "OnTagAdded_0A81212E4B67B58A982165BC5CB35257");

	Params::WBP_HealthArmorBars_DOS_C_OnTagAdded_0A81212E4B67B58A982165BC5CB35257 Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.OnTagRemoved_0A81212E4B67B58A982165BC5CB35257
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthArmorBars_DOS_C::OnTagRemoved_0A81212E4B67B58A982165BC5CB35257(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "OnTagRemoved_0A81212E4B67B58A982165BC5CB35257");

	Params::WBP_HealthArmorBars_DOS_C_OnTagRemoved_0A81212E4B67B58A982165BC5CB35257 Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.OnViewTargetChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            ViewTarget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthArmorBars_DOS_C::OnViewTargetChanged(class APawn* ViewTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "OnViewTargetChanged");

	Params::WBP_HealthArmorBars_DOS_C_OnViewTargetChanged Parms{};

	Parms.ViewTarget = ViewTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.ReceiveBindEvents
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            NewViewTarget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthArmorBars_DOS_C::ReceiveBindEvents(class APawn* NewViewTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "ReceiveBindEvents");

	Params::WBP_HealthArmorBars_DOS_C_ReceiveBindEvents Parms{};

	Parms.NewViewTarget = NewViewTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.ReceiveUnbindEvents
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            OldViewTarget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthArmorBars_DOS_C::ReceiveUnbindEvents(class APawn* OldViewTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "ReceiveUnbindEvents");

	Params::WBP_HealthArmorBars_DOS_C_ReceiveUnbindEvents Parms{};

	Parms.OldViewTarget = OldViewTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.RegenHealthAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HealthArmorBars_DOS_C::RegenHealthAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "RegenHealthAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.SetupInitialState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_HealthArmorBars_DOS_C::SetupInitialState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "SetupInitialState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.SetViewTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          NewViewTarget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGzBaseCharacter*                 ViewTarget                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthArmorBars_DOS_C::SetViewTarget(class UObject* NewViewTarget, class AGzBaseCharacter** ViewTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "SetViewTarget");

	Params::WBP_HealthArmorBars_DOS_C_SetViewTarget Parms{};

	Parms.NewViewTarget = NewViewTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (ViewTarget != nullptr)
		*ViewTarget = Parms.ViewTarget;
}


// Function WBP_HealthArmorBars_DOS.WBP_HealthArmorBars_DOS_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HealthArmorBars_DOS_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HealthArmorBars_DOS_C", "Tick");

	Params::WBP_HealthArmorBars_DOS_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

