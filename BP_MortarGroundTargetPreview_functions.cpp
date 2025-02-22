#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MortarGroundTargetPreview

#include "Basic.hpp"

#include "BP_MortarGroundTargetPreview_classes.hpp"
#include "BP_MortarGroundTargetPreview_parameters.hpp"


namespace SDK
{

// Function BP_MortarGroundTargetPreview.BP_MortarGroundTargetPreview_C.AddWarningFlare
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MortarGroundTargetPreview_C::AddWarningFlare(const struct FVector& Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarGroundTargetPreview_C", "AddWarningFlare");

	Params::BP_MortarGroundTargetPreview_C_AddWarningFlare Parms{};

	Parms.Offset = std::move(Offset);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MortarGroundTargetPreview.BP_MortarGroundTargetPreview_C.BndEvt__BP_MortarGroundTargetPreview_WarningCapsule_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_MortarGroundTargetPreview_C::BndEvt__BP_MortarGroundTargetPreview_WarningCapsule_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarGroundTargetPreview_C", "BndEvt__BP_MortarGroundTargetPreview_WarningCapsule_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_MortarGroundTargetPreview_C_BndEvt__BP_MortarGroundTargetPreview_WarningCapsule_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MortarGroundTargetPreview.BP_MortarGroundTargetPreview_C.BndEvt__BP_MortarGroundTargetPreview_WarningCapsule_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MortarGroundTargetPreview_C::BndEvt__BP_MortarGroundTargetPreview_WarningCapsule_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarGroundTargetPreview_C", "BndEvt__BP_MortarGroundTargetPreview_WarningCapsule_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_MortarGroundTargetPreview_C_BndEvt__BP_MortarGroundTargetPreview_WarningCapsule_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MortarGroundTargetPreview.BP_MortarGroundTargetPreview_C.EnableWarningVisualsAndOverlap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MortarGroundTargetPreview_C::EnableWarningVisualsAndOverlap(double Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarGroundTargetPreview_C", "EnableWarningVisualsAndOverlap");

	Params::BP_MortarGroundTargetPreview_C_EnableWarningVisualsAndOverlap Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MortarGroundTargetPreview.BP_MortarGroundTargetPreview_C.ExecuteUbergraph_BP_MortarGroundTargetPreview
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MortarGroundTargetPreview_C::ExecuteUbergraph_BP_MortarGroundTargetPreview(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarGroundTargetPreview_C", "ExecuteUbergraph_BP_MortarGroundTargetPreview");

	Params::BP_MortarGroundTargetPreview_C_ExecuteUbergraph_BP_MortarGroundTargetPreview Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MortarGroundTargetPreview.BP_MortarGroundTargetPreview_C.FlareUpdate__FinishedFunc
// (BlueprintEvent)

void ABP_MortarGroundTargetPreview_C::FlareUpdate__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarGroundTargetPreview_C", "FlareUpdate__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MortarGroundTargetPreview.BP_MortarGroundTargetPreview_C.FlareUpdate__UpdateFunc
// (BlueprintEvent)

void ABP_MortarGroundTargetPreview_C::FlareUpdate__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarGroundTargetPreview_C", "FlareUpdate__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MortarGroundTargetPreview.BP_MortarGroundTargetPreview_C.OnRep_FlareFallingProgress
// (BlueprintCallable, BlueprintEvent)

void ABP_MortarGroundTargetPreview_C::OnRep_FlareFallingProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarGroundTargetPreview_C", "OnRep_FlareFallingProgress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MortarGroundTargetPreview.BP_MortarGroundTargetPreview_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MortarGroundTargetPreview_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarGroundTargetPreview_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MortarGroundTargetPreview.BP_MortarGroundTargetPreview_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MortarGroundTargetPreview_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarGroundTargetPreview_C", "ReceiveEndPlay");

	Params::BP_MortarGroundTargetPreview_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MortarGroundTargetPreview.BP_MortarGroundTargetPreview_C.ShowProjectileWarnings
// (Event, Protected, BlueprintEvent)

void ABP_MortarGroundTargetPreview_C::ShowProjectileWarnings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarGroundTargetPreview_C", "ShowProjectileWarnings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MortarGroundTargetPreview.BP_MortarGroundTargetPreview_C.SpawnFlaresWithProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  FallingProgress                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MortarGroundTargetPreview_C::SpawnFlaresWithProgress(double FallingProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarGroundTargetPreview_C", "SpawnFlaresWithProgress");

	Params::BP_MortarGroundTargetPreview_C_SpawnFlaresWithProgress Parms{};

	Parms.FallingProgress = FallingProgress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MortarGroundTargetPreview.BP_MortarGroundTargetPreview_C.SpawnWarningFlareTrail
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          SpawnLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*                NiagaraComponent                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MortarGroundTargetPreview_C::SpawnWarningFlareTrail(const struct FVector& SpawnLocation, class UNiagaraComponent** NiagaraComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarGroundTargetPreview_C", "SpawnWarningFlareTrail");

	Params::BP_MortarGroundTargetPreview_C_SpawnWarningFlareTrail Parms{};

	Parms.SpawnLocation = std::move(SpawnLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (NiagaraComponent != nullptr)
		*NiagaraComponent = Parms.NiagaraComponent;
}


// Function BP_MortarGroundTargetPreview.BP_MortarGroundTargetPreview_C.SpawnWarningGroundFlare
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                TrailParticleSystem                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MortarGroundTargetPreview_C::SpawnWarningGroundFlare(class UNiagaraComponent* TrailParticleSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarGroundTargetPreview_C", "SpawnWarningGroundFlare");

	Params::BP_MortarGroundTargetPreview_C_SpawnWarningGroundFlare Parms{};

	Parms.TrailParticleSystem = TrailParticleSystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MortarGroundTargetPreview.BP_MortarGroundTargetPreview_C.TraceFlareTargetGroundLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          StartingLocation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HasHit                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  DropDistance                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          SpawnLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MortarGroundTargetPreview_C::TraceFlareTargetGroundLocation(const struct FVector& StartingLocation, bool* HasHit, double* DropDistance, struct FVector* SpawnLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarGroundTargetPreview_C", "TraceFlareTargetGroundLocation");

	Params::BP_MortarGroundTargetPreview_C_TraceFlareTargetGroundLocation Parms{};

	Parms.StartingLocation = std::move(StartingLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (HasHit != nullptr)
		*HasHit = Parms.HasHit;

	if (DropDistance != nullptr)
		*DropDistance = Parms.DropDistance;

	if (SpawnLocation != nullptr)
		*SpawnLocation = std::move(Parms.SpawnLocation);
}


// Function BP_MortarGroundTargetPreview.BP_MortarGroundTargetPreview_C.UpdateWarningFlareTrailLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                ParticleSystem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          SpawnLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  DropDistance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MortarGroundTargetPreview_C::UpdateWarningFlareTrailLocation(class UNiagaraComponent* ParticleSystem, const struct FVector& SpawnLocation, double Progress, double DropDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MortarGroundTargetPreview_C", "UpdateWarningFlareTrailLocation");

	Params::BP_MortarGroundTargetPreview_C_UpdateWarningFlareTrailLocation Parms{};

	Parms.ParticleSystem = ParticleSystem;
	Parms.SpawnLocation = std::move(SpawnLocation);
	Parms.Progress = Progress;
	Parms.DropDistance = DropDistance;

	UObject::ProcessEvent(Func, &Parms);
}

}

