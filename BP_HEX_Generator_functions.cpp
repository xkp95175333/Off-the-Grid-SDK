#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HEX_Generator

#include "Basic.hpp"

#include "BP_HEX_Generator_classes.hpp"
#include "BP_HEX_Generator_parameters.hpp"


namespace SDK
{

// Function BP_HEX_Generator.BP_HEX_Generator_C.CollectHeatSinks
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AGzDestructibleHeatSink*>  ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class AGzDestructibleHeatSink*> ABP_HEX_Generator_C::CollectHeatSinks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HEX_Generator_C", "CollectHeatSinks");

	Params::BP_HEX_Generator_C_CollectHeatSinks Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_HEX_Generator.BP_HEX_Generator_C.ExecuteUbergraph_BP_HEX_Generator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HEX_Generator_C::ExecuteUbergraph_BP_HEX_Generator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HEX_Generator_C", "ExecuteUbergraph_BP_HEX_Generator");

	Params::BP_HEX_Generator_C_ExecuteUbergraph_BP_HEX_Generator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HEX_Generator.BP_HEX_Generator_C.HexDataChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGzExtractionData                Current                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_HEX_Generator_C::HexDataChanged(const struct FGzExtractionData& Current)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HEX_Generator_C", "HexDataChanged");

	Params::BP_HEX_Generator_C_HexDataChanged Parms{};

	Parms.Current = std::move(Current);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HEX_Generator.BP_HEX_Generator_C.InitializeAnchors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HEX_Generator_C::InitializeAnchors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HEX_Generator_C", "InitializeAnchors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HEX_Generator.BP_HEX_Generator_C.InitializeFriendlyFire
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HEX_Generator_C::InitializeFriendlyFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HEX_Generator_C", "InitializeFriendlyFire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HEX_Generator.BP_HEX_Generator_C.IsLocalPlayerInExtractingTeam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsInTeam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HEX_Generator_C::IsLocalPlayerInExtractingTeam(bool* IsInTeam, bool* Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HEX_Generator_C", "IsLocalPlayerInExtractingTeam");

	Params::BP_HEX_Generator_C_IsLocalPlayerInExtractingTeam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsInTeam != nullptr)
		*IsInTeam = Parms.IsInTeam;

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}


// Function BP_HEX_Generator.BP_HEX_Generator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HEX_Generator_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HEX_Generator_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HEX_Generator.BP_HEX_Generator_C.ReceiveProtectionDownChanged
// (Event, Protected, BlueprintEvent)

void ABP_HEX_Generator_C::ReceiveProtectionDownChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HEX_Generator_C", "ReceiveProtectionDownChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HEX_Generator.BP_HEX_Generator_C.ReceiveRequiredHeatSinksDestroyed
// (Event, Protected, BlueprintEvent)

void ABP_HEX_Generator_C::ReceiveRequiredHeatSinksDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HEX_Generator_C", "ReceiveRequiredHeatSinksDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HEX_Generator.BP_HEX_Generator_C.Reprint
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    On                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HEX_Generator_C::Reprint(bool On)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HEX_Generator_C", "Reprint");

	Params::BP_HEX_Generator_C_Reprint Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HEX_Generator.BP_HEX_Generator_C.ReprintPlatesPosition__FinishedFunc
// (BlueprintEvent)

void ABP_HEX_Generator_C::ReprintPlatesPosition__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HEX_Generator_C", "ReprintPlatesPosition__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HEX_Generator.BP_HEX_Generator_C.ReprintPlatesPosition__UpdateFunc
// (BlueprintEvent)

void ABP_HEX_Generator_C::ReprintPlatesPosition__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HEX_Generator_C", "ReprintPlatesPosition__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HEX_Generator.BP_HEX_Generator_C.SetHeatingEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HEX_Generator_C::SetHeatingEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HEX_Generator_C", "SetHeatingEnabled");

	Params::BP_HEX_Generator_C_SetHeatingEnabled Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}

