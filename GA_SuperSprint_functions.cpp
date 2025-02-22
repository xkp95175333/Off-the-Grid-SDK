#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SuperSprint

#include "Basic.hpp"

#include "GA_SuperSprint_classes.hpp"
#include "GA_SuperSprint_parameters.hpp"


namespace SDK
{

// Function GA_SuperSprint.GA_SuperSprint_C.BP_OnStartedSprint
// (Event, Protected, BlueprintEvent)

void UGA_SuperSprint_C::BP_OnStartedSprint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SuperSprint_C", "BP_OnStartedSprint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_SuperSprint.GA_SuperSprint_C.BP_OnStoppedSprint
// (Event, Protected, BlueprintEvent)

void UGA_SuperSprint_C::BP_OnStoppedSprint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SuperSprint_C", "BP_OnStoppedSprint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_SuperSprint.GA_SuperSprint_C.ExecuteUbergraph_GA_SuperSprint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SuperSprint_C::ExecuteUbergraph_GA_SuperSprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SuperSprint_C", "ExecuteUbergraph_GA_SuperSprint");

	Params::GA_SuperSprint_C_ExecuteUbergraph_GA_SuperSprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SuperSprint.GA_SuperSprint_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_SuperSprint_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SuperSprint_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

