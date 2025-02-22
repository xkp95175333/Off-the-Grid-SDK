#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PreMatchCountdownOverlay

#include "Basic.hpp"

#include "WBP_PreMatchCountdownOverlay_classes.hpp"
#include "WBP_PreMatchCountdownOverlay_parameters.hpp"


namespace SDK
{

// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.UpdateCountdown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PreMatchCountdownOverlay_C::UpdateCountdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "UpdateCountdown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.Update_CountdownTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PreMatchCountdownOverlay_C::Update_CountdownTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "Update_CountdownTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.StartPrematch
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PreMatchCountdownOverlay_C::StartPrematch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "StartPrematch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.Start Countdown 
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PreMatchCountdownOverlay_C::Start_Countdown_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "Start Countdown ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.SetPrematchEndCountdownSoundState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PreMatchCountdownOverlay_C::SetPrematchEndCountdownSoundState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "SetPrematchEndCountdownSoundState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.Set Timer Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PreMatchCountdownOverlay_C::Set_Timer_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "Set Timer Text");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.Set Players In Match Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PreMatchCountdownOverlay_C::Set_Players_In_Match_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "Set Players In Match Text");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.OnViewTargetChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            ViewTarget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PreMatchCountdownOverlay_C::OnViewTargetChanged(class APawn* ViewTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "OnViewTargetChanged");

	Params::WBP_PreMatchCountdownOverlay_C_OnViewTargetChanged Parms{};

	Parms.ViewTarget = ViewTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.OnTagRemoved_543BBFC04C9F746B7EA3098A4D3E87C2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_PreMatchCountdownOverlay_C::OnTagRemoved_543BBFC04C9F746B7EA3098A4D3E87C2(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "OnTagRemoved_543BBFC04C9F746B7EA3098A4D3E87C2");

	Params::WBP_PreMatchCountdownOverlay_C_OnTagRemoved_543BBFC04C9F746B7EA3098A4D3E87C2 Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.OnTagAdded_543BBFC04C9F746B7EA3098A4D3E87C2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_PreMatchCountdownOverlay_C::OnTagAdded_543BBFC04C9F746B7EA3098A4D3E87C2(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "OnTagAdded_543BBFC04C9F746B7EA3098A4D3E87C2");

	Params::WBP_PreMatchCountdownOverlay_C_OnTagAdded_543BBFC04C9F746B7EA3098A4D3E87C2 Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.OnStageChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_PreMatchCountdownOverlay_C::OnStageChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "OnStageChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PreMatchCountdownOverlay_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.OnClosePreMatchWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PreMatchCountdownOverlay_C::OnClosePreMatchWidget__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "OnClosePreMatchWidget__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.HideWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PreMatchCountdownOverlay_C::HideWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "HideWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.HideAllContainers
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PreMatchCountdownOverlay_C::HideAllContainers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "HideAllContainers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.ExecuteUbergraph_WBP_PreMatchCountdownOverlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PreMatchCountdownOverlay_C::ExecuteUbergraph_WBP_PreMatchCountdownOverlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "ExecuteUbergraph_WBP_PreMatchCountdownOverlay");

	Params::WBP_PreMatchCountdownOverlay_C_ExecuteUbergraph_WBP_PreMatchCountdownOverlay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.CreateUpdateTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PreMatchCountdownOverlay_C::CreateUpdateTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "CreateUpdateTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.BuindPrematchKillNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            ViewTarget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PreMatchCountdownOverlay_C::BuindPrematchKillNotification(class APawn* ViewTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "BuindPrematchKillNotification");

	Params::WBP_PreMatchCountdownOverlay_C_BuindPrematchKillNotification Parms{};

	Parms.ViewTarget = ViewTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PreMatchCountdownOverlay.WBP_PreMatchCountdownOverlay_C.IsPrematch
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_PreMatchCountdownOverlay_C::IsPrematch() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PreMatchCountdownOverlay_C", "IsPrematch");

	Params::WBP_PreMatchCountdownOverlay_C_IsPrematch Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

