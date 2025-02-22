#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Redepoyment_Terminal_01

#include "Basic.hpp"

#include "ABP_Redepoyment_Terminal_01_classes.hpp"
#include "ABP_Redepoyment_Terminal_01_parameters.hpp"


namespace SDK
{

// Function ABP_Redepoyment_Terminal_01.ABP_Redepoyment_Terminal_01_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_Redepoyment_Terminal_01_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Redepoyment_Terminal_01_C", "AnimGraph");

	Params::ABP_Redepoyment_Terminal_01_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_Redepoyment_Terminal_01.ABP_Redepoyment_Terminal_01_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Redepoyment_Terminal_01_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Redepoyment_Terminal_01_C", "BlueprintUpdateAnimation");

	Params::ABP_Redepoyment_Terminal_01_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Redepoyment_Terminal_01.ABP_Redepoyment_Terminal_01_C.ExecuteUbergraph_ABP_Redepoyment_Terminal_01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Redepoyment_Terminal_01_C::ExecuteUbergraph_ABP_Redepoyment_Terminal_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Redepoyment_Terminal_01_C", "ExecuteUbergraph_ABP_Redepoyment_Terminal_01");

	Params::ABP_Redepoyment_Terminal_01_C_ExecuteUbergraph_ABP_Redepoyment_Terminal_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

