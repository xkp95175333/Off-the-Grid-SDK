#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Component_Triggerable

#include "Basic.hpp"

#include "BP_Component_Triggerable_classes.hpp"
#include "BP_Component_Triggerable_parameters.hpp"


namespace SDK
{

// Function BP_Component_Triggerable.BP_Component_Triggerable_C.VerifyTriggerActors
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class AActor*>                   VerifiedTriggerActors                                  (Parm, OutParm)

void UBP_Component_Triggerable_C::VerifyTriggerActors(TArray<class AActor*>& Array, TArray<class AActor*>* VerifiedTriggerActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Component_Triggerable_C", "VerifyTriggerActors");

	Params::BP_Component_Triggerable_C_VerifyTriggerActors Parms{};

	Parms.Array = std::move(Array);

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (VerifiedTriggerActors != nullptr)
		*VerifiedTriggerActors = std::move(Parms.VerifiedTriggerActors);
}


// Function BP_Component_Triggerable.BP_Component_Triggerable_C.Triggered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_Component_Triggerable_C::Triggered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Component_Triggerable_C", "Triggered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Component_Triggerable.BP_Component_Triggerable_C.Trigger
// (BlueprintCallable, BlueprintEvent)

void UBP_Component_Triggerable_C::Trigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Component_Triggerable_C", "Trigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Component_Triggerable.BP_Component_Triggerable_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_Component_Triggerable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Component_Triggerable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Component_Triggerable.BP_Component_Triggerable_C.OnTriggerStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Component_Trigger_C*          TriggerComp                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Triggered                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Component_Triggerable_C::OnTriggerStateChange(class UBP_Component_Trigger_C* TriggerComp, bool Param_Triggered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Component_Triggerable_C", "OnTriggerStateChange");

	Params::BP_Component_Triggerable_C_OnTriggerStateChange Parms{};

	Parms.TriggerComp = TriggerComp;
	Parms.Param_Triggered = Param_Triggered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Component_Triggerable.BP_Component_Triggerable_C.OnRep_HasTriggered
// (BlueprintCallable, BlueprintEvent)

void UBP_Component_Triggerable_C::OnRep_HasTriggered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Component_Triggerable_C", "OnRep_HasTriggered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Component_Triggerable.BP_Component_Triggerable_C.GetTriggeredState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_HasTriggered                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Component_Triggerable_C::GetTriggeredState(bool* Param_HasTriggered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Component_Triggerable_C", "GetTriggeredState");

	Params::BP_Component_Triggerable_C_GetTriggeredState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_HasTriggered != nullptr)
		*Param_HasTriggered = Parms.Param_HasTriggered;
}


// Function BP_Component_Triggerable.BP_Component_Triggerable_C.ExecuteUbergraph_BP_Component_Triggerable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Component_Triggerable_C::ExecuteUbergraph_BP_Component_Triggerable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Component_Triggerable_C", "ExecuteUbergraph_BP_Component_Triggerable");

	Params::BP_Component_Triggerable_C_ExecuteUbergraph_BP_Component_Triggerable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Component_Triggerable.BP_Component_Triggerable_C.EvaluateGateCondition
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Component_Triggerable_C::EvaluateGateCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Component_Triggerable_C", "EvaluateGateCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Component_Triggerable.BP_Component_Triggerable_C.AddTriggerActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TriggerActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Component_Triggerable_C::AddTriggerActor(class AActor* TriggerActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Component_Triggerable_C", "AddTriggerActor");

	Params::BP_Component_Triggerable_C_AddTriggerActor Parms{};

	Parms.TriggerActor = TriggerActor;

	UObject::ProcessEvent(Func, &Parms);
}

}

