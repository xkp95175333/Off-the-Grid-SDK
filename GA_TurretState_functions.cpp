#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TurretState

#include "Basic.hpp"

#include "GA_TurretState_classes.hpp"
#include "GA_TurretState_parameters.hpp"


namespace SDK
{

// Function GA_TurretState.GA_TurretState_C.OnSeatChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGzCharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EGzVehicleSeatType                      NewSeat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGzVehicleSeatType                      OldSeat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TurretState_C::OnSeatChanged(class AGzCharacter* Character, EGzVehicleSeatType NewSeat, EGzVehicleSeatType OldSeat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TurretState_C", "OnSeatChanged");

	Params::GA_TurretState_C_OnSeatChanged Parms{};

	Parms.Character = Character;
	Parms.NewSeat = NewSeat;
	Parms.OldSeat = OldSeat;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TurretState.GA_TurretState_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_TurretState_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TurretState_C", "K2_ActivateAbilityFromEvent");

	Params::GA_TurretState_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_TurretState.GA_TurretState_C.ExecuteUbergraph_GA_TurretState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_TurretState_C::ExecuteUbergraph_GA_TurretState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_TurretState_C", "ExecuteUbergraph_GA_TurretState");

	Params::GA_TurretState_C_ExecuteUbergraph_GA_TurretState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

