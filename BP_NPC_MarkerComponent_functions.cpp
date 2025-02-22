#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC_MarkerComponent

#include "Basic.hpp"

#include "BP_NPC_MarkerComponent_classes.hpp"
#include "BP_NPC_MarkerComponent_parameters.hpp"


namespace SDK
{

// Function BP_NPC_MarkerComponent.BP_NPC_MarkerComponent_C.GetMarkerRotation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_NPC_MarkerComponent_C::GetMarkerRotation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_MarkerComponent_C", "GetMarkerRotation");

	Params::BP_NPC_MarkerComponent_C_GetMarkerRotation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

