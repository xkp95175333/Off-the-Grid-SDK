#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBE_MarkerHighlightAnimation

#include "Basic.hpp"

#include "WBE_MarkerHighlightAnimation_classes.hpp"
#include "WBE_MarkerHighlightAnimation_parameters.hpp"


namespace SDK
{

// Function WBE_MarkerHighlightAnimation.WBE_MarkerHighlightAnimation_C.ExecuteUbergraph_WBE_MarkerHighlightAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBE_MarkerHighlightAnimation_C::ExecuteUbergraph_WBE_MarkerHighlightAnimation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBE_MarkerHighlightAnimation_C", "ExecuteUbergraph_WBE_MarkerHighlightAnimation");

	Params::WBE_MarkerHighlightAnimation_C_ExecuteUbergraph_WBE_MarkerHighlightAnimation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBE_MarkerHighlightAnimation.WBE_MarkerHighlightAnimation_C.On Marker States Changed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGzMarkerComponent*               MarkerComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            States                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBE_MarkerHighlightAnimation_C::On_Marker_States_Changed(class UGzMarkerComponent* MarkerComponent, const struct FGameplayTagContainer& States)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBE_MarkerHighlightAnimation_C", "On Marker States Changed");

	Params::WBE_MarkerHighlightAnimation_C_On_Marker_States_Changed Parms{};

	Parms.MarkerComponent = MarkerComponent;
	Parms.States = std::move(States);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBE_MarkerHighlightAnimation.WBE_MarkerHighlightAnimation_C.OnConstruct
// (Event, Protected, BlueprintEvent)

void UWBE_MarkerHighlightAnimation_C::OnConstruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBE_MarkerHighlightAnimation_C", "OnConstruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBE_MarkerHighlightAnimation.WBE_MarkerHighlightAnimation_C.OnDestruct
// (Event, Protected, BlueprintEvent)

void UWBE_MarkerHighlightAnimation_C::OnDestruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBE_MarkerHighlightAnimation_C", "OnDestruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBE_MarkerHighlightAnimation.WBE_MarkerHighlightAnimation_C.RefreshAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBE_MarkerHighlightAnimation_C::RefreshAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBE_MarkerHighlightAnimation_C", "RefreshAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

