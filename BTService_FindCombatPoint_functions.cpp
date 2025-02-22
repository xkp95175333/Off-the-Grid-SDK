#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTService_FindCombatPoint

#include "Basic.hpp"

#include "BTService_FindCombatPoint_classes.hpp"
#include "BTService_FindCombatPoint_parameters.hpp"


namespace SDK
{

// Function BTService_FindCombatPoint.BTService_FindCombatPoint_C.ExecuteUbergraph_BTService_FindCombatPoint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTService_FindCombatPoint_C::ExecuteUbergraph_BTService_FindCombatPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTService_FindCombatPoint_C", "ExecuteUbergraph_BTService_FindCombatPoint");

	Params::BTService_FindCombatPoint_C_ExecuteUbergraph_BTService_FindCombatPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTService_FindCombatPoint.BTService_FindCombatPoint_C.ClearCoverData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            InPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTService_FindCombatPoint_C::ClearCoverData(class APawn* InPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTService_FindCombatPoint_C", "ClearCoverData");

	Params::BTService_FindCombatPoint_C_ClearCoverData Parms{};

	Parms.InPawn = InPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTService_FindCombatPoint.BTService_FindCombatPoint_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTService_FindCombatPoint_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTService_FindCombatPoint_C", "ReceiveTickAI");

	Params::BTService_FindCombatPoint_C_ReceiveTickAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

