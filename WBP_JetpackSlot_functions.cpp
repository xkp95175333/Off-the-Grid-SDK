#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_JetpackSlot

#include "Basic.hpp"

#include "WBP_JetpackSlot_classes.hpp"
#include "WBP_JetpackSlot_parameters.hpp"


namespace SDK
{

// Function WBP_JetpackSlot.WBP_JetpackSlot_C.BndEvt__WBP_WeaponSlot_PocketButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_JetpackSlot_C::BndEvt__WBP_WeaponSlot_PocketButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JetpackSlot_C", "BndEvt__WBP_WeaponSlot_PocketButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_JetpackSlot_C_BndEvt__WBP_WeaponSlot_PocketButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_JetpackSlot.WBP_JetpackSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_JetpackSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JetpackSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_JetpackSlot.WBP_JetpackSlot_C.ExecuteUbergraph_WBP_JetpackSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JetpackSlot_C::ExecuteUbergraph_WBP_JetpackSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JetpackSlot_C", "ExecuteUbergraph_WBP_JetpackSlot");

	Params::WBP_JetpackSlot_C_ExecuteUbergraph_WBP_JetpackSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_JetpackSlot.WBP_JetpackSlot_C.HandleEmptyItem
// (BlueprintCallable, BlueprintEvent)

void UWBP_JetpackSlot_C::HandleEmptyItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JetpackSlot_C", "HandleEmptyItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_JetpackSlot.WBP_JetpackSlot_C.HandleValidItem
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGzInvItem                       Item                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_JetpackSlot_C::HandleValidItem(const struct FGzInvItem& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JetpackSlot_C", "HandleValidItem");

	Params::WBP_JetpackSlot_C_HandleValidItem Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_JetpackSlot.WBP_JetpackSlot_C.IsJetpackEnabled
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_JetpackSlot_C::IsJetpackEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JetpackSlot_C", "IsJetpackEnabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_JetpackSlot.WBP_JetpackSlot_C.OnAttributeChanged_A3668B97403E351343CA609917C1CE33
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute               Attribute                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JetpackSlot_C::OnAttributeChanged_A3668B97403E351343CA609917C1CE33(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JetpackSlot_C", "OnAttributeChanged_A3668B97403E351343CA609917C1CE33");

	Params::WBP_JetpackSlot_C_OnAttributeChanged_A3668B97403E351343CA609917C1CE33 Parms{};

	Parms.Attribute = std::move(Attribute);
	Parms.NewValue = NewValue;
	Parms.OldValue = OldValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_JetpackSlot.WBP_JetpackSlot_C.OnHovered_Jetpack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ToShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JetpackSlot_C::OnHovered_Jetpack__DelegateSignature(bool ToShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JetpackSlot_C", "OnHovered_Jetpack__DelegateSignature");

	Params::WBP_JetpackSlot_C_OnHovered_Jetpack__DelegateSignature Parms{};

	Parms.ToShow = ToShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_JetpackSlot.WBP_JetpackSlot_C.OnJetpackStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    StateBroken                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JetpackSlot_C::OnJetpackStateChanged__DelegateSignature(bool StateBroken)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JetpackSlot_C", "OnJetpackStateChanged__DelegateSignature");

	Params::WBP_JetpackSlot_C_OnJetpackStateChanged__DelegateSignature Parms{};

	Parms.StateBroken = StateBroken;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_JetpackSlot.WBP_JetpackSlot_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_JetpackSlot_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JetpackSlot_C", "OnMouseEnter");

	Params::WBP_JetpackSlot_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_JetpackSlot.WBP_JetpackSlot_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_JetpackSlot_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JetpackSlot_C", "OnMouseLeave");

	Params::WBP_JetpackSlot_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_JetpackSlot.WBP_JetpackSlot_C.OnPocketChanged_BP
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGzInvItem                       NewItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_JetpackSlot_C::OnPocketChanged_BP(const struct FGzInvItem& NewItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JetpackSlot_C", "OnPocketChanged_BP");

	Params::WBP_JetpackSlot_C_OnPocketChanged_BP Parms{};

	Parms.NewItem = std::move(NewItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_JetpackSlot.WBP_JetpackSlot_C.UpdateJetpackState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsJetpackBroken                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InOpacity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JetpackSlot_C::UpdateJetpackState(bool Param_IsJetpackBroken, float InOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_JetpackSlot_C", "UpdateJetpackState");

	Params::WBP_JetpackSlot_C_UpdateJetpackState Parms{};

	Parms.Param_IsJetpackBroken = Param_IsJetpackBroken;
	Parms.InOpacity = InOpacity;

	UObject::ProcessEvent(Func, &Parms);
}

}

