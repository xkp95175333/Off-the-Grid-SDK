#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoadoutSlots_List

#include "Basic.hpp"

#include "WBP_LoadoutSlots_List_classes.hpp"
#include "WBP_LoadoutSlots_List_parameters.hpp"


namespace SDK
{

// Function WBP_LoadoutSlots_List.WBP_LoadoutSlots_List_C.OnClear
// (Event, Protected, BlueprintEvent)

void UWBP_LoadoutSlots_List_C::OnClear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadoutSlots_List_C", "OnClear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LoadoutSlots_List.WBP_LoadoutSlots_List_C.OnButtonCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGzLoadoutSelectionButton*        NewButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadoutSlots_List_C::OnButtonCreated(class UGzLoadoutSelectionButton* NewButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadoutSlots_List_C", "OnButtonCreated");

	Params::WBP_LoadoutSlots_List_C_OnButtonCreated Parms{};

	Parms.NewButton = NewButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LoadoutSlots_List.WBP_LoadoutSlots_List_C.ExecuteUbergraph_WBP_LoadoutSlots_List
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadoutSlots_List_C::ExecuteUbergraph_WBP_LoadoutSlots_List(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadoutSlots_List_C", "ExecuteUbergraph_WBP_LoadoutSlots_List");

	Params::WBP_LoadoutSlots_List_C_ExecuteUbergraph_WBP_LoadoutSlots_List Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

