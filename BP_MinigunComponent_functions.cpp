#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MinigunComponent

#include "Basic.hpp"

#include "BP_MinigunComponent_classes.hpp"
#include "BP_MinigunComponent_parameters.hpp"


namespace SDK
{

// Function BP_MinigunComponent.BP_MinigunComponent_C.ExecuteUbergraph_BP_MinigunComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MinigunComponent_C::ExecuteUbergraph_BP_MinigunComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MinigunComponent_C", "ExecuteUbergraph_BP_MinigunComponent");

	Params::BP_MinigunComponent_C_ExecuteUbergraph_BP_MinigunComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MinigunComponent.BP_MinigunComponent_C.OnEndShooting_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOverheated                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MinigunComponent_C::OnEndShooting_Event(bool bOverheated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MinigunComponent_C", "OnEndShooting_Event");

	Params::BP_MinigunComponent_C_OnEndShooting_Event Parms{};

	Parms.bOverheated = bOverheated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MinigunComponent.BP_MinigunComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_MinigunComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MinigunComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

