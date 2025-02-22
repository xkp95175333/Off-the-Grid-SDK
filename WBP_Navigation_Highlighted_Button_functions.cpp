#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Navigation_Highlighted_Button

#include "Basic.hpp"

#include "WBP_Navigation_Highlighted_Button_classes.hpp"
#include "WBP_Navigation_Highlighted_Button_parameters.hpp"


namespace SDK
{

// Function WBP_Navigation_Highlighted_Button.WBP_Navigation_Highlighted_Button_C.SetWhiteTextStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Navigation_Highlighted_Button_C::SetWhiteTextStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Navigation_Highlighted_Button_C", "SetWhiteTextStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Navigation_Highlighted_Button.WBP_Navigation_Highlighted_Button_C.SetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Navigation_Highlighted_Button_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Navigation_Highlighted_Button_C", "SetText");

	Params::WBP_Navigation_Highlighted_Button_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Navigation_Highlighted_Button.WBP_Navigation_Highlighted_Button_C.SetGrayTextStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Navigation_Highlighted_Button_C::SetGrayTextStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Navigation_Highlighted_Button_C", "SetGrayTextStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Navigation_Highlighted_Button.WBP_Navigation_Highlighted_Button_C.SetDefaultText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Navigation_Highlighted_Button_C::SetDefaultText(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Navigation_Highlighted_Button_C", "SetDefaultText");

	Params::WBP_Navigation_Highlighted_Button_C_SetDefaultText Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Navigation_Highlighted_Button.WBP_Navigation_Highlighted_Button_C.SetBlueTextStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Navigation_Highlighted_Button_C::SetBlueTextStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Navigation_Highlighted_Button_C", "SetBlueTextStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Navigation_Highlighted_Button.WBP_Navigation_Highlighted_Button_C.Set TextStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Navigation_Highlighted_Button_C::Set_TextStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Navigation_Highlighted_Button_C", "Set TextStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Navigation_Highlighted_Button.WBP_Navigation_Highlighted_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Navigation_Highlighted_Button_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Navigation_Highlighted_Button_C", "PreConstruct");

	Params::WBP_Navigation_Highlighted_Button_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Navigation_Highlighted_Button.WBP_Navigation_Highlighted_Button_C.ExecuteUbergraph_WBP_Navigation_Highlighted_Button
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Navigation_Highlighted_Button_C::ExecuteUbergraph_WBP_Navigation_Highlighted_Button(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Navigation_Highlighted_Button_C", "ExecuteUbergraph_WBP_Navigation_Highlighted_Button");

	Params::WBP_Navigation_Highlighted_Button_C_ExecuteUbergraph_WBP_Navigation_Highlighted_Button Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Navigation_Highlighted_Button.WBP_Navigation_Highlighted_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Navigation_Highlighted_Button_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Navigation_Highlighted_Button_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Navigation_Highlighted_Button.WBP_Navigation_Highlighted_Button_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UWBP_Navigation_Highlighted_Button_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Navigation_Highlighted_Button_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Navigation_Highlighted_Button.WBP_Navigation_Highlighted_Button_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UWBP_Navigation_Highlighted_Button_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Navigation_Highlighted_Button_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Navigation_Highlighted_Button.WBP_Navigation_Highlighted_Button_C.BP_OnReleased
// (Event, Protected, BlueprintEvent)

void UWBP_Navigation_Highlighted_Button_C::BP_OnReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Navigation_Highlighted_Button_C", "BP_OnReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Navigation_Highlighted_Button.WBP_Navigation_Highlighted_Button_C.BP_OnPressed
// (Event, Protected, BlueprintEvent)

void UWBP_Navigation_Highlighted_Button_C::BP_OnPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Navigation_Highlighted_Button_C", "BP_OnPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Navigation_Highlighted_Button.WBP_Navigation_Highlighted_Button_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UWBP_Navigation_Highlighted_Button_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Navigation_Highlighted_Button_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

}

