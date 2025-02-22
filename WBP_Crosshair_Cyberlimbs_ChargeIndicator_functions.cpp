#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Crosshair_Cyberlimbs_ChargeIndicator

#include "Basic.hpp"

#include "WBP_Crosshair_Cyberlimbs_ChargeIndicator_classes.hpp"
#include "WBP_Crosshair_Cyberlimbs_ChargeIndicator_parameters.hpp"


namespace SDK
{

// Function WBP_Crosshair_Cyberlimbs_ChargeIndicator.WBP_Crosshair_Cyberlimbs_ChargeIndicator_C.ExecuteUbergraph_WBP_Crosshair_Cyberlimbs_ChargeIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crosshair_Cyberlimbs_ChargeIndicator_C::ExecuteUbergraph_WBP_Crosshair_Cyberlimbs_ChargeIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crosshair_Cyberlimbs_ChargeIndicator_C", "ExecuteUbergraph_WBP_Crosshair_Cyberlimbs_ChargeIndicator");

	Params::WBP_Crosshair_Cyberlimbs_ChargeIndicator_C_ExecuteUbergraph_WBP_Crosshair_Cyberlimbs_ChargeIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Crosshair_Cyberlimbs_ChargeIndicator.WBP_Crosshair_Cyberlimbs_ChargeIndicator_C.MakeChargeAvailable
// (BlueprintCallable, BlueprintEvent)

void UWBP_Crosshair_Cyberlimbs_ChargeIndicator_C::MakeChargeAvailable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crosshair_Cyberlimbs_ChargeIndicator_C", "MakeChargeAvailable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Crosshair_Cyberlimbs_ChargeIndicator.WBP_Crosshair_Cyberlimbs_ChargeIndicator_C.MakeChargeDisabled
// (BlueprintCallable, BlueprintEvent)

void UWBP_Crosshair_Cyberlimbs_ChargeIndicator_C::MakeChargeDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crosshair_Cyberlimbs_ChargeIndicator_C", "MakeChargeDisabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Crosshair_Cyberlimbs_ChargeIndicator.WBP_Crosshair_Cyberlimbs_ChargeIndicator_C.MakeChargeLocked
// (BlueprintCallable, BlueprintEvent)

void UWBP_Crosshair_Cyberlimbs_ChargeIndicator_C::MakeChargeLocked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crosshair_Cyberlimbs_ChargeIndicator_C", "MakeChargeLocked");

	UObject::ProcessEvent(Func, nullptr);
}

}

