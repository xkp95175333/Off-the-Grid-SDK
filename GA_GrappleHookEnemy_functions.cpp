#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GrappleHookEnemy

#include "Basic.hpp"

#include "GA_GrappleHookEnemy_classes.hpp"
#include "GA_GrappleHookEnemy_parameters.hpp"


namespace SDK
{

// Function GA_GrappleHookEnemy.GA_GrappleHookEnemy_C.ExecuteUbergraph_GA_GrappleHookEnemy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_GrappleHookEnemy_C::ExecuteUbergraph_GA_GrappleHookEnemy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrappleHookEnemy_C", "ExecuteUbergraph_GA_GrappleHookEnemy");

	Params::GA_GrappleHookEnemy_C_ExecuteUbergraph_GA_GrappleHookEnemy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GrappleHookEnemy.GA_GrappleHookEnemy_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_GrappleHookEnemy_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrappleHookEnemy_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_GrappleHookEnemy.GA_GrappleHookEnemy_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_GrappleHookEnemy_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GrappleHookEnemy_C", "K2_OnEndAbility");

	Params::GA_GrappleHookEnemy_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}

