#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoadoutSelection_ScreenDescription

#include "Basic.hpp"

#include "WBP_LoadoutSelection_ScreenDescription_classes.hpp"
#include "WBP_LoadoutSelection_ScreenDescription_parameters.hpp"


namespace SDK
{

// Function WBP_LoadoutSelection_ScreenDescription.WBP_LoadoutSelection_ScreenDescription_C.OnLoadoutSlotReady_BP
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGzLoadoutSelectionInitializeDataLoadoutInitializeData                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_LoadoutSelection_ScreenDescription_C::OnLoadoutSlotReady_BP(const struct FGzLoadoutSelectionInitializeData& LoadoutInitializeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadoutSelection_ScreenDescription_C", "OnLoadoutSlotReady_BP");

	Params::WBP_LoadoutSelection_ScreenDescription_C_OnLoadoutSlotReady_BP Parms{};

	Parms.LoadoutInitializeData = std::move(LoadoutInitializeData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LoadoutSelection_ScreenDescription.WBP_LoadoutSelection_ScreenDescription_C.ExecuteUbergraph_WBP_LoadoutSelection_ScreenDescription
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadoutSelection_ScreenDescription_C::ExecuteUbergraph_WBP_LoadoutSelection_ScreenDescription(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadoutSelection_ScreenDescription_C", "ExecuteUbergraph_WBP_LoadoutSelection_ScreenDescription");

	Params::WBP_LoadoutSelection_ScreenDescription_C_ExecuteUbergraph_WBP_LoadoutSelection_ScreenDescription Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

