#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Phosphorous_Dart_PreviewActor_Arc

#include "Basic.hpp"

#include "BP_Phosphorous_Dart_PreviewActor_Arc_classes.hpp"
#include "BP_Phosphorous_Dart_PreviewActor_Arc_parameters.hpp"


namespace SDK
{

// Function BP_Phosphorous_Dart_PreviewActor_Arc.BP_Phosphorous_Dart_PreviewActor_Arc_C.ExecuteUbergraph_BP_Phosphorous_Dart_PreviewActor_Arc
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Phosphorous_Dart_PreviewActor_Arc_C::ExecuteUbergraph_BP_Phosphorous_Dart_PreviewActor_Arc(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Phosphorous_Dart_PreviewActor_Arc_C", "ExecuteUbergraph_BP_Phosphorous_Dart_PreviewActor_Arc");

	Params::BP_Phosphorous_Dart_PreviewActor_Arc_C_ExecuteUbergraph_BP_Phosphorous_Dart_PreviewActor_Arc Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Phosphorous_Dart_PreviewActor_Arc.BP_Phosphorous_Dart_PreviewActor_Arc_C.UpdatePredictedProjectilePath
// (Event, Protected, BlueprintEvent)

void ABP_Phosphorous_Dart_PreviewActor_Arc_C::UpdatePredictedProjectilePath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Phosphorous_Dart_PreviewActor_Arc_C", "UpdatePredictedProjectilePath");

	UObject::ProcessEvent(Func, nullptr);
}

}

