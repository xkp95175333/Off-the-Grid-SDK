#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MusicVolume_DS

#include "Basic.hpp"

#include "BP_MusicVolume_DS_classes.hpp"
#include "BP_MusicVolume_DS_parameters.hpp"


namespace SDK
{

// Function BP_MusicVolume_DS.BP_MusicVolume_DS_C.ExecuteUbergraph_BP_MusicVolume_DS
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MusicVolume_DS_C::ExecuteUbergraph_BP_MusicVolume_DS(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MusicVolume_DS_C", "ExecuteUbergraph_BP_MusicVolume_DS");

	Params::BP_MusicVolume_DS_C_ExecuteUbergraph_BP_MusicVolume_DS Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MusicVolume_DS.BP_MusicVolume_DS_C.GetValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UBP_MusicVolume_DS_C::GetValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MusicVolume_DS_C", "GetValue");

	Params::BP_MusicVolume_DS_C_GetValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_MusicVolume_DS.BP_MusicVolume_DS_C.SetValue
// (Event, Public, BlueprintEvent)
// Parameters:
// double                                  NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MusicVolume_DS_C::SetValue(double NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MusicVolume_DS_C", "SetValue");

	Params::BP_MusicVolume_DS_C_SetValue Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

