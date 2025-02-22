#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_XRS_InProgress

#include "Basic.hpp"

#include "BP_XRS_InProgress_classes.hpp"
#include "BP_XRS_InProgress_parameters.hpp"


namespace SDK
{

// Function BP_XRS_InProgress.BP_XRS_InProgress_C.StartTrials
// (BlueprintCallable, BlueprintEvent)

void UBP_XRS_InProgress_C::StartTrials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XRS_InProgress_C", "StartTrials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_XRS_InProgress.BP_XRS_InProgress_C.SpawnOpportunities
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_XRS_InProgress_C::SpawnOpportunities()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XRS_InProgress_C", "SpawnOpportunities");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_XRS_InProgress.BP_XRS_InProgress_C.RandBoolFromFloatRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_XRS_InProgress_C::RandBoolFromFloatRate(double Rate, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XRS_InProgress_C", "RandBoolFromFloatRate");

	Params::BP_XRS_InProgress_C_RandBoolFromFloatRate Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_XRS_InProgress.BP_XRS_InProgress_C.OnStartStage
// (Event, Protected, BlueprintEvent)

void UBP_XRS_InProgress_C::OnStartStage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XRS_InProgress_C", "OnStartStage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_XRS_InProgress.BP_XRS_InProgress_C.HandleZoneShrinkage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StageIndex                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_XRS_InProgress_C::HandleZoneShrinkage(const int32 StageIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XRS_InProgress_C", "HandleZoneShrinkage");

	Params::BP_XRS_InProgress_C_HandleZoneShrinkage Parms{};

	Parms.StageIndex = StageIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_XRS_InProgress.BP_XRS_InProgress_C.ExecuteUbergraph_BP_XRS_InProgress
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_XRS_InProgress_C::ExecuteUbergraph_BP_XRS_InProgress(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XRS_InProgress_C", "ExecuteUbergraph_BP_XRS_InProgress");

	Params::BP_XRS_InProgress_C_ExecuteUbergraph_BP_XRS_InProgress Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_XRS_InProgress.BP_XRS_InProgress_C.CalculateTimeToGetConsumed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGzShrinkingZoneManager*          ShrinkingZoneManager                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          WorldPosition                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OutTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_XRS_InProgress_C::CalculateTimeToGetConsumed(class AGzShrinkingZoneManager* ShrinkingZoneManager, const struct FVector& WorldPosition, float* OutTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_XRS_InProgress_C", "CalculateTimeToGetConsumed");

	Params::BP_XRS_InProgress_C_CalculateTimeToGetConsumed Parms{};

	Parms.ShrinkingZoneManager = ShrinkingZoneManager;
	Parms.WorldPosition = std::move(WorldPosition);

	UObject::ProcessEvent(Func, &Parms);

	if (OutTime != nullptr)
		*OutTime = Parms.OutTime;

	return Parms.ReturnValue;
}

}

