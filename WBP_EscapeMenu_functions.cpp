#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EscapeMenu

#include "Basic.hpp"

#include "WBP_EscapeMenu_classes.hpp"
#include "WBP_EscapeMenu_parameters.hpp"


namespace SDK
{

// Function WBP_EscapeMenu.WBP_EscapeMenu_C.ShouldFlushInputOnOpening
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_EscapeMenu_C::ShouldFlushInputOnOpening()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "ShouldFlushInputOnOpening");

	Params::WBP_EscapeMenu_C_ShouldFlushInputOnOpening Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.SaveSettings
// (BlueprintCallable, BlueprintEvent)

void UWBP_EscapeMenu_C::SaveSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "SaveSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.ResetToCurrentSettings
// (BlueprintCallable, BlueprintEvent)

void UWBP_EscapeMenu_C::ResetToCurrentSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "ResetToCurrentSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.ResetSettings
// (BlueprintCallable, BlueprintEvent)

void UWBP_EscapeMenu_C::ResetSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "ResetSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.OnSettingsResolved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_EscapeMenu_C::OnSettingsResolved__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "OnSettingsResolved__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.OnGameStateStageChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_EscapeMenu_C::OnGameStateStageChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "OnGameStateStageChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.OnCloseAction
// (Event, Protected, BlueprintEvent)

void UWBP_EscapeMenu_C::OnCloseAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "OnCloseAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.OnBackAction
// (Event, Protected, BlueprintEvent)

void UWBP_EscapeMenu_C::OnBackAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "OnBackAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.InitVideoSettingsChangedWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGzNavigationWidget*              NavigationWidget                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_EscapeMenu_C::InitVideoSettingsChangedWarning(class UGzNavigationWidget* NavigationWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "InitVideoSettingsChangedWarning");

	Params::WBP_EscapeMenu_C_InitVideoSettingsChangedWarning Parms{};

	Parms.NavigationWidget = NavigationWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.InitSettingsChangedWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGzNavigationWidget*              NavigationWidget                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_EscapeMenu_C::InitSettingsChangedWarning(class UGzNavigationWidget* NavigationWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "InitSettingsChangedWarning");

	Params::WBP_EscapeMenu_C_InitSettingsChangedWarning Parms{};

	Parms.NavigationWidget = NavigationWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.ExecuteUbergraph_WBP_EscapeMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EscapeMenu_C::ExecuteUbergraph_WBP_EscapeMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "ExecuteUbergraph_WBP_EscapeMenu");

	Params::WBP_EscapeMenu_C_ExecuteUbergraph_WBP_EscapeMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_EscapeMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_EscapeMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.CloseAction
// (BlueprintCallable, BlueprintEvent)

void UWBP_EscapeMenu_C::CloseAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "CloseAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.BndEvt__WBP_EscapeMenu_BackScoreboard_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_EscapeMenu_C::BndEvt__WBP_EscapeMenu_BackScoreboard_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "BndEvt__WBP_EscapeMenu_BackScoreboard_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_EscapeMenu_C_BndEvt__WBP_EscapeMenu_BackScoreboard_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.BackAction
// (BlueprintCallable, BlueprintEvent)

void UWBP_EscapeMenu_C::BackAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "BackAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.ApplySettings
// (BlueprintCallable, BlueprintEvent)

void UWBP_EscapeMenu_C::ApplySettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "ApplySettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.TryApplySettings
// (BlueprintCallable, BlueprintEvent)

void UWBP_EscapeMenu_C::TryApplySettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "TryApplySettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EscapeMenu.WBP_EscapeMenu_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_EscapeMenu_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EscapeMenu_C", "BP_GetDesiredFocusTarget");

	Params::WBP_EscapeMenu_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

