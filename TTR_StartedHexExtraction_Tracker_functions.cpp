#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TTR_StartedHexExtraction_Tracker

#include "Basic.hpp"

#include "TTR_StartedHexExtraction_Tracker_classes.hpp"
#include "TTR_StartedHexExtraction_Tracker_parameters.hpp"


namespace SDK
{

// Function TTR_StartedHexExtraction_Tracker.TTR_StartedHexExtraction_Tracker_C.ExecuteUbergraph_TTR_StartedHexExtraction_Tracker
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTTR_StartedHexExtraction_Tracker_C::ExecuteUbergraph_TTR_StartedHexExtraction_Tracker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TTR_StartedHexExtraction_Tracker_C", "ExecuteUbergraph_TTR_StartedHexExtraction_Tracker");

	Params::TTR_StartedHexExtraction_Tracker_C_ExecuteUbergraph_TTR_StartedHexExtraction_Tracker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TTR_StartedHexExtraction_Tracker.TTR_StartedHexExtraction_Tracker_C.OnHexExtractionStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGzGameMessage*                   Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UTTR_StartedHexExtraction_Tracker_C::OnHexExtractionStarted(const class UGzGameMessage* Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TTR_StartedHexExtraction_Tracker_C", "OnHexExtractionStarted");

	Params::TTR_StartedHexExtraction_Tracker_C_OnHexExtractionStarted Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TTR_StartedHexExtraction_Tracker.TTR_StartedHexExtraction_Tracker_C.OnTrackingStarted
// (Event, Protected, BlueprintEvent)

void UTTR_StartedHexExtraction_Tracker_C::OnTrackingStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TTR_StartedHexExtraction_Tracker_C", "OnTrackingStarted");

	UObject::ProcessEvent(Func, nullptr);
}

}

