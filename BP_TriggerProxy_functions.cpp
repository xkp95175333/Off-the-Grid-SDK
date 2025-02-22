#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TriggerProxy

#include "Basic.hpp"

#include "BP_TriggerProxy_classes.hpp"
#include "BP_TriggerProxy_parameters.hpp"


namespace SDK
{

// Function BP_TriggerProxy.BP_TriggerProxy_C.ExecuteUbergraph_BP_TriggerProxy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TriggerProxy_C::ExecuteUbergraph_BP_TriggerProxy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TriggerProxy_C", "ExecuteUbergraph_BP_TriggerProxy");

	Params::BP_TriggerProxy_C_ExecuteUbergraph_BP_TriggerProxy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TriggerProxy.BP_TriggerProxy_C.ActivateTrigger
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TriggerProxy_C::ActivateTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TriggerProxy_C", "ActivateTrigger");

	UObject::ProcessEvent(Func, nullptr);
}

}

