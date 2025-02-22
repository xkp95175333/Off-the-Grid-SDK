#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LimbSlot

#include "Basic.hpp"

#include "WBP_LimbSlot_classes.hpp"
#include "WBP_LimbSlot_parameters.hpp"


namespace SDK
{

// Function WBP_LimbSlot.WBP_LimbSlot_C.BndEvt__WBP_WeaponSlot_PocketButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_LimbSlot_C::BndEvt__WBP_WeaponSlot_PocketButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LimbSlot_C", "BndEvt__WBP_WeaponSlot_PocketButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_LimbSlot_C_BndEvt__WBP_WeaponSlot_PocketButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LimbSlot.WBP_LimbSlot_C.BndEvt__WBP_WeaponSlot_PocketButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_LimbSlot_C::BndEvt__WBP_WeaponSlot_PocketButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LimbSlot_C", "BndEvt__WBP_WeaponSlot_PocketButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_LimbSlot_C_BndEvt__WBP_WeaponSlot_PocketButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LimbSlot.WBP_LimbSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LimbSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LimbSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LimbSlot.WBP_LimbSlot_C.ExecuteUbergraph_WBP_LimbSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LimbSlot_C::ExecuteUbergraph_WBP_LimbSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LimbSlot_C", "ExecuteUbergraph_WBP_LimbSlot");

	Params::WBP_LimbSlot_C_ExecuteUbergraph_WBP_LimbSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LimbSlot.WBP_LimbSlot_C.GetLimbAbility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGzGA_BaseLimbAbility*            Ability                                                (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_LimbSlot_C::GetLimbAbility(class UGzGA_BaseLimbAbility** Ability)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LimbSlot_C", "GetLimbAbility");

	Params::WBP_LimbSlot_C_GetLimbAbility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ability != nullptr)
		*Ability = Parms.Ability;
}


// Function WBP_LimbSlot.WBP_LimbSlot_C.HandleEmptyItem
// (BlueprintCallable, BlueprintEvent)

void UWBP_LimbSlot_C::HandleEmptyItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LimbSlot_C", "HandleEmptyItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LimbSlot.WBP_LimbSlot_C.HandleValidItem
// (HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGzInvItem                       Param_Item                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_LimbSlot_C::HandleValidItem(const struct FGzInvItem& Param_Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LimbSlot_C", "HandleValidItem");

	Params::WBP_LimbSlot_C_HandleValidItem Parms{};

	Parms.Param_Item = std::move(Param_Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LimbSlot.WBP_LimbSlot_C.InitAttributes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_LimbSlot_C::InitAttributes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LimbSlot_C", "InitAttributes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LimbSlot.WBP_LimbSlot_C.OnAttributeChanged_439C44584D077F0BCBB5A9B27D97E385
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute               Attribute                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LimbSlot_C::OnAttributeChanged_439C44584D077F0BCBB5A9B27D97E385(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LimbSlot_C", "OnAttributeChanged_439C44584D077F0BCBB5A9B27D97E385");

	Params::WBP_LimbSlot_C_OnAttributeChanged_439C44584D077F0BCBB5A9B27D97E385 Parms{};

	Parms.Attribute = std::move(Attribute);
	Parms.NewValue = NewValue;
	Parms.OldValue = OldValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LimbSlot.WBP_LimbSlot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LimbSlot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LimbSlot_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LimbSlot.WBP_LimbSlot_C.OnPocketChanged_BP
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGzInvItem                       NewItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_LimbSlot_C::OnPocketChanged_BP(const struct FGzInvItem& NewItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LimbSlot_C", "OnPocketChanged_BP");

	Params::WBP_LimbSlot_C_OnPocketChanged_BP Parms{};

	Parms.NewItem = std::move(NewItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LimbSlot.WBP_LimbSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LimbSlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LimbSlot_C", "PreConstruct");

	Params::WBP_LimbSlot_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LimbSlot.WBP_LimbSlot_C.UpdateLimbHealth
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_LimbSlot_C::UpdateLimbHealth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LimbSlot_C", "UpdateLimbHealth");

	UObject::ProcessEvent(Func, nullptr);
}

}

