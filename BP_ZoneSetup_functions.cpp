#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ZoneSetup

#include "Basic.hpp"

#include "BP_ZoneSetup_classes.hpp"
#include "BP_ZoneSetup_parameters.hpp"


namespace SDK
{

// Function BP_ZoneSetup.BP_ZoneSetup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneSetup_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZoneSetup_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

