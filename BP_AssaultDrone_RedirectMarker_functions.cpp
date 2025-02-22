#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AssaultDrone_RedirectMarker

#include "Basic.hpp"

#include "BP_AssaultDrone_RedirectMarker_classes.hpp"
#include "BP_AssaultDrone_RedirectMarker_parameters.hpp"


namespace SDK
{

// Function BP_AssaultDrone_RedirectMarker.BP_AssaultDrone_RedirectMarker_C.ExecuteUbergraph_BP_AssaultDrone_RedirectMarker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultDrone_RedirectMarker_C::ExecuteUbergraph_BP_AssaultDrone_RedirectMarker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDrone_RedirectMarker_C", "ExecuteUbergraph_BP_AssaultDrone_RedirectMarker");

	Params::BP_AssaultDrone_RedirectMarker_C_ExecuteUbergraph_BP_AssaultDrone_RedirectMarker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AssaultDrone_RedirectMarker.BP_AssaultDrone_RedirectMarker_C.Finish
// (BlueprintCallable, BlueprintEvent)

void ABP_AssaultDrone_RedirectMarker_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDrone_RedirectMarker_C", "Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultDrone_RedirectMarker.BP_AssaultDrone_RedirectMarker_C.GetDistanceMultiplayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double ABP_AssaultDrone_RedirectMarker_C::GetDistanceMultiplayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDrone_RedirectMarker_C", "GetDistanceMultiplayer");

	Params::BP_AssaultDrone_RedirectMarker_C_GetDistanceMultiplayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AssaultDrone_RedirectMarker.BP_AssaultDrone_RedirectMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AssaultDrone_RedirectMarker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDrone_RedirectMarker_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultDrone_RedirectMarker.BP_AssaultDrone_RedirectMarker_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultDrone_RedirectMarker_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDrone_RedirectMarker_C", "ReceiveTick");

	Params::BP_AssaultDrone_RedirectMarker_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AssaultDrone_RedirectMarker.BP_AssaultDrone_RedirectMarker_C.StartSequence__FinishedFunc
// (BlueprintEvent)

void ABP_AssaultDrone_RedirectMarker_C::StartSequence__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDrone_RedirectMarker_C", "StartSequence__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultDrone_RedirectMarker.BP_AssaultDrone_RedirectMarker_C.StartSequence__UpdateFunc
// (BlueprintEvent)

void ABP_AssaultDrone_RedirectMarker_C::StartSequence__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDrone_RedirectMarker_C", "StartSequence__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultDrone_RedirectMarker.BP_AssaultDrone_RedirectMarker_C.UpdateFromDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AssaultDrone_RedirectMarker_C::UpdateFromDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDrone_RedirectMarker_C", "UpdateFromDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultDrone_RedirectMarker.BP_AssaultDrone_RedirectMarker_C.UpdateScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultDrone_RedirectMarker_C::UpdateScale(float InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultDrone_RedirectMarker_C", "UpdateScale");

	Params::BP_AssaultDrone_RedirectMarker_C_UpdateScale Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);
}

}

