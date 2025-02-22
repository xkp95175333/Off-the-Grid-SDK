#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HexSlot

#include "Basic.hpp"

#include "WBP_HexSlot_classes.hpp"
#include "WBP_HexSlot_parameters.hpp"


namespace SDK
{

// Function WBP_HexSlot.WBP_HexSlot_C.BndEvt__WBP_BackpackSlot_PocketButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HexSlot_C::BndEvt__WBP_BackpackSlot_PocketButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HexSlot_C", "BndEvt__WBP_BackpackSlot_PocketButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_HexSlot_C_BndEvt__WBP_BackpackSlot_PocketButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HexSlot.WBP_HexSlot_C.ExecuteUbergraph_WBP_HexSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HexSlot_C::ExecuteUbergraph_WBP_HexSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HexSlot_C", "ExecuteUbergraph_WBP_HexSlot");

	Params::WBP_HexSlot_C_ExecuteUbergraph_WBP_HexSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HexSlot.WBP_HexSlot_C.HandleEmptyItem
// (BlueprintCallable, BlueprintEvent)

void UWBP_HexSlot_C::HandleEmptyItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HexSlot_C", "HandleEmptyItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HexSlot.WBP_HexSlot_C.HandleValidItem
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGzInvItem                       Item                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_HexSlot_C::HandleValidItem(const struct FGzInvItem& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HexSlot_C", "HandleValidItem");

	Params::WBP_HexSlot_C_HandleValidItem Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HexSlot.WBP_HexSlot_C.OnPocketChanged_BP
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGzInvItem                       NewItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_HexSlot_C::OnPocketChanged_BP(const struct FGzInvItem& NewItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HexSlot_C", "OnPocketChanged_BP");

	Params::WBP_HexSlot_C_OnPocketChanged_BP Parms{};

	Parms.NewItem = std::move(NewItem);

	UObject::ProcessEvent(Func, &Parms);
}

}

