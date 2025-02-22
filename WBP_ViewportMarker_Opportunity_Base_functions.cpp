#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ViewportMarker_Opportunity_Base

#include "Basic.hpp"

#include "WBP_ViewportMarker_Opportunity_Base_classes.hpp"
#include "WBP_ViewportMarker_Opportunity_Base_parameters.hpp"


namespace SDK
{

// Function WBP_ViewportMarker_Opportunity_Base.WBP_ViewportMarker_Opportunity_Base_C.Change Visibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bVisible                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ViewportMarker_Opportunity_Base_C::Change_Visibility(bool Param_bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ViewportMarker_Opportunity_Base_C", "Change Visibility");

	Params::WBP_ViewportMarker_Opportunity_Base_C_Change_Visibility Parms{};

	Parms.Param_bVisible = Param_bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ViewportMarker_Opportunity_Base.WBP_ViewportMarker_Opportunity_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ViewportMarker_Opportunity_Base_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ViewportMarker_Opportunity_Base_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ViewportMarker_Opportunity_Base.WBP_ViewportMarker_Opportunity_Base_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ViewportMarker_Opportunity_Base_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ViewportMarker_Opportunity_Base_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ViewportMarker_Opportunity_Base.WBP_ViewportMarker_Opportunity_Base_C.ExecuteUbergraph_WBP_ViewportMarker_Opportunity_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ViewportMarker_Opportunity_Base_C::ExecuteUbergraph_WBP_ViewportMarker_Opportunity_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ViewportMarker_Opportunity_Base_C", "ExecuteUbergraph_WBP_ViewportMarker_Opportunity_Base");

	Params::WBP_ViewportMarker_Opportunity_Base_C_ExecuteUbergraph_WBP_ViewportMarker_Opportunity_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ViewportMarker_Opportunity_Base.WBP_ViewportMarker_Opportunity_Base_C.OnHideAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ViewportMarker_Opportunity_Base_C::OnHideAnimationFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ViewportMarker_Opportunity_Base_C", "OnHideAnimationFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ViewportMarker_Opportunity_Base.WBP_ViewportMarker_Opportunity_Base_C.OnMarkerStateChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGzMarkerComponent*               Param_MarkerComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            States                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ViewportMarker_Opportunity_Base_C::OnMarkerStateChanged(class UGzMarkerComponent* Param_MarkerComponent, const struct FGameplayTagContainer& States)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ViewportMarker_Opportunity_Base_C", "OnMarkerStateChanged");

	Params::WBP_ViewportMarker_Opportunity_Base_C_OnMarkerStateChanged Parms{};

	Parms.Param_MarkerComponent = Param_MarkerComponent;
	Parms.States = std::move(States);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ViewportMarker_Opportunity_Base.WBP_ViewportMarker_Opportunity_Base_C.OnStateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ViewportMarker_Opportunity_Base_C::OnStateChange__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ViewportMarker_Opportunity_Base_C", "OnStateChange__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ViewportMarker_Opportunity_Base.WBP_ViewportMarker_Opportunity_Base_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ViewportMarker_Opportunity_Base_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ViewportMarker_Opportunity_Base_C", "PreConstruct");

	Params::WBP_ViewportMarker_Opportunity_Base_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ViewportMarker_Opportunity_Base.WBP_ViewportMarker_Opportunity_Base_C.SetMarkerText
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ViewportMarker_Opportunity_Base_C::SetMarkerText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ViewportMarker_Opportunity_Base_C", "SetMarkerText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ViewportMarker_Opportunity_Base.WBP_ViewportMarker_Opportunity_Base_C.UpdateMarkerVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bVisible                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ViewportMarker_Opportunity_Base_C::UpdateMarkerVisibility(bool Param_bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ViewportMarker_Opportunity_Base_C", "UpdateMarkerVisibility");

	Params::WBP_ViewportMarker_Opportunity_Base_C_UpdateMarkerVisibility Parms{};

	Parms.Param_bVisible = Param_bVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

