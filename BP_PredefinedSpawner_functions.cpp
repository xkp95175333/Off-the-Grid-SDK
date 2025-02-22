#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PredefinedSpawner

#include "Basic.hpp"

#include "BP_PredefinedSpawner_classes.hpp"
#include "BP_PredefinedSpawner_parameters.hpp"


namespace SDK
{

// Function BP_PredefinedSpawner.BP_PredefinedSpawner_C.SpawnItems
// (BlueprintCallable, BlueprintEvent)

void ABP_PredefinedSpawner_C::SpawnItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PredefinedSpawner_C", "SpawnItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PredefinedSpawner.BP_PredefinedSpawner_C.ExecuteUbergraph_BP_PredefinedSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PredefinedSpawner_C::ExecuteUbergraph_BP_PredefinedSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PredefinedSpawner_C", "ExecuteUbergraph_BP_PredefinedSpawner");

	Params::BP_PredefinedSpawner_C_ExecuteUbergraph_BP_PredefinedSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

