#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NavigationButton_NoPadding

#include "Basic.hpp"

#include "WBP_NavigationButton_NoPadding_classes.hpp"
#include "WBP_NavigationButton_NoPadding_parameters.hpp"


namespace SDK
{

// Function WBP_NavigationButton_NoPadding.WBP_NavigationButton_NoPadding_C.SetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_NavigationButton_NoPadding_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NavigationButton_NoPadding_C", "SetText");

	Params::WBP_NavigationButton_NoPadding_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NavigationButton_NoPadding.WBP_NavigationButton_NoPadding_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NavigationButton_NoPadding_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NavigationButton_NoPadding_C", "PreConstruct");

	Params::WBP_NavigationButton_NoPadding_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_NavigationButton_NoPadding.WBP_NavigationButton_NoPadding_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_NavigationButton_NoPadding_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NavigationButton_NoPadding_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_NavigationButton_NoPadding.WBP_NavigationButton_NoPadding_C.ExecuteUbergraph_WBP_NavigationButton_NoPadding
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NavigationButton_NoPadding_C::ExecuteUbergraph_WBP_NavigationButton_NoPadding(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NavigationButton_NoPadding_C", "ExecuteUbergraph_WBP_NavigationButton_NoPadding");

	Params::WBP_NavigationButton_NoPadding_C_ExecuteUbergraph_WBP_NavigationButton_NoPadding Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

