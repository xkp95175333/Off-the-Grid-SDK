#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Vehicle

#include "Basic.hpp"

#include "WBP_Vehicle_classes.hpp"
#include "WBP_Vehicle_parameters.hpp"


namespace SDK
{

// Function WBP_Vehicle.WBP_Vehicle_C.Clear Callbacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            PlayerCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Vehicle_C::Clear_Callbacks(class APawn* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Vehicle_C", "Clear Callbacks");

	Params::WBP_Vehicle_C_Clear_Callbacks Parms{};

	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Vehicle.WBP_Vehicle_C.ExecuteUbergraph_WBP_Vehicle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Vehicle_C::ExecuteUbergraph_WBP_Vehicle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Vehicle_C", "ExecuteUbergraph_WBP_Vehicle");

	Params::WBP_Vehicle_C_ExecuteUbergraph_WBP_Vehicle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Vehicle.WBP_Vehicle_C.GetVehicleLayout
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGzVehicle*                       Vehicle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Vehicle_Layout_C*            AsWBP_Base_Vehicle_Seat_Position                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Vehicle_C::GetVehicleLayout(class AGzVehicle* Vehicle, class UWBP_Vehicle_Layout_C** AsWBP_Base_Vehicle_Seat_Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Vehicle_C", "GetVehicleLayout");

	Params::WBP_Vehicle_C_GetVehicleLayout Parms{};

	Parms.Vehicle = Vehicle;

	UObject::ProcessEvent(Func, &Parms);

	if (AsWBP_Base_Vehicle_Seat_Position != nullptr)
		*AsWBP_Base_Vehicle_Seat_Position = Parms.AsWBP_Base_Vehicle_Seat_Position;
}


// Function WBP_Vehicle.WBP_Vehicle_C.OnSeatEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGzCharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EGzVehicleSeatType                      NewSeat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGzVehicleSeatType                      OldSeat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Vehicle_C::OnSeatEvent(class AGzCharacter* Character, EGzVehicleSeatType NewSeat, EGzVehicleSeatType OldSeat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Vehicle_C", "OnSeatEvent");

	Params::WBP_Vehicle_C_OnSeatEvent Parms{};

	Parms.Character = Character;
	Parms.NewSeat = NewSeat;
	Parms.OldSeat = OldSeat;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Vehicle.WBP_Vehicle_C.OnVehicleDestroyed
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Vehicle_C::OnVehicleDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Vehicle_C", "OnVehicleDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Vehicle.WBP_Vehicle_C.ReceiveBindEvents
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            NewViewTarget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Vehicle_C::ReceiveBindEvents(class APawn* NewViewTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Vehicle_C", "ReceiveBindEvents");

	Params::WBP_Vehicle_C_ReceiveBindEvents Parms{};

	Parms.NewViewTarget = NewViewTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Vehicle.WBP_Vehicle_C.ReceiveUnbindEvents
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            OldViewTarget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Vehicle_C::ReceiveUnbindEvents(class APawn* OldViewTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Vehicle_C", "ReceiveUnbindEvents");

	Params::WBP_Vehicle_C_ReceiveUnbindEvents Parms{};

	Parms.OldViewTarget = OldViewTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Vehicle.WBP_Vehicle_C.Vehicle Seat Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGzCharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EGzVehicleSeatType                      NewSeat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGzVehicleSeatType                      OldSeat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Vehicle_C::Vehicle_Seat_Changed(class AGzCharacter* Character, EGzVehicleSeatType NewSeat, EGzVehicleSeatType OldSeat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Vehicle_C", "Vehicle Seat Changed");

	Params::WBP_Vehicle_C_Vehicle_Seat_Changed Parms{};

	Parms.Character = Character;
	Parms.NewSeat = NewSeat;
	Parms.OldSeat = OldSeat;

	UObject::ProcessEvent(Func, &Parms);
}

}

