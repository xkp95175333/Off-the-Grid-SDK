#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FireEffectPropagationActor

#include "Basic.hpp"

#include "BP_FireEffectPropagationActor_classes.hpp"
#include "BP_FireEffectPropagationActor_parameters.hpp"


namespace SDK
{

// Function BP_FireEffectPropagationActor.BP_FireEffectPropagationActor_C.ExecuteUbergraph_BP_FireEffectPropagationActor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FireEffectPropagationActor_C::ExecuteUbergraph_BP_FireEffectPropagationActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FireEffectPropagationActor_C", "ExecuteUbergraph_BP_FireEffectPropagationActor");

	Params::BP_FireEffectPropagationActor_C_ExecuteUbergraph_BP_FireEffectPropagationActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FireEffectPropagationActor.BP_FireEffectPropagationActor_C.OnPropagationPointActivated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// int32                                   PropagationPointID                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Normal                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   PointLifespan                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FireEffectPropagationActor_C::OnPropagationPointActivated(const int32 PropagationPointID, const struct FVector& Location, const struct FVector& Normal, const float PointLifespan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FireEffectPropagationActor_C", "OnPropagationPointActivated");

	Params::BP_FireEffectPropagationActor_C_OnPropagationPointActivated Parms{};

	Parms.PropagationPointID = PropagationPointID;
	Parms.Location = std::move(Location);
	Parms.Normal = std::move(Normal);
	Parms.PointLifespan = PointLifespan;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FireEffectPropagationActor.BP_FireEffectPropagationActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FireEffectPropagationActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FireEffectPropagationActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FireEffectPropagationActor.BP_FireEffectPropagationActor_C.SpawnFireVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          RelativeLocation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                                  PointLifespan                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FireEffectPropagationActor_C::SpawnFireVFX(const struct FVector& RelativeLocation, const struct FRotator& Rotation, double PointLifespan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FireEffectPropagationActor_C", "SpawnFireVFX");

	Params::BP_FireEffectPropagationActor_C_SpawnFireVFX Parms{};

	Parms.RelativeLocation = std::move(RelativeLocation);
	Parms.Rotation = std::move(Rotation);
	Parms.PointLifespan = PointLifespan;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FireEffectPropagationActor.BP_FireEffectPropagationActor_C.SpawnOverlap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PropagationPointID                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Relative_Location                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  PointLifespan                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FireEffectPropagationActor_C::SpawnOverlap(int32 PropagationPointID, const struct FVector& Relative_Location, double PointLifespan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FireEffectPropagationActor_C", "SpawnOverlap");

	Params::BP_FireEffectPropagationActor_C_SpawnOverlap Parms{};

	Parms.PropagationPointID = PropagationPointID;
	Parms.Relative_Location = std::move(Relative_Location);
	Parms.PointLifespan = PointLifespan;

	UObject::ProcessEvent(Func, &Parms);
}

}

