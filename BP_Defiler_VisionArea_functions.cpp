#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Defiler_VisionArea

#include "Basic.hpp"

#include "BP_Defiler_VisionArea_classes.hpp"
#include "BP_Defiler_VisionArea_parameters.hpp"


namespace SDK
{

// Function BP_Defiler_VisionArea.BP_Defiler_VisionArea_C.Add PPFaind Actor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ParentActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Defiler_PPFaid_C*             FaidActor                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Defiler_VisionArea_C::Add_PPFaind_Actor(class AActor* ParentActor, class ABP_Defiler_PPFaid_C** FaidActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Defiler_VisionArea_C", "Add PPFaind Actor");

	Params::BP_Defiler_VisionArea_C_Add_PPFaind_Actor Parms{};

	Parms.ParentActor = ParentActor;

	UObject::ProcessEvent(Func, &Parms);

	if (FaidActor != nullptr)
		*FaidActor = Parms.FaidActor;
}


// Function BP_Defiler_VisionArea.BP_Defiler_VisionArea_C.BndEvt__BP_Defiler_VisionArea_Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Defiler_VisionArea_C::BndEvt__BP_Defiler_VisionArea_Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Defiler_VisionArea_C", "BndEvt__BP_Defiler_VisionArea_Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_Defiler_VisionArea_C_BndEvt__BP_Defiler_VisionArea_Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Defiler_VisionArea.BP_Defiler_VisionArea_C.BndEvt__BP_Defiler_VisionArea_Capsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Defiler_VisionArea_C::BndEvt__BP_Defiler_VisionArea_Capsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Defiler_VisionArea_C", "BndEvt__BP_Defiler_VisionArea_Capsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_Defiler_VisionArea_C_BndEvt__BP_Defiler_VisionArea_Capsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Defiler_VisionArea.BP_Defiler_VisionArea_C.CalculateDistanceToScaned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           In_OtherActor                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    OutInRange                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OutDistanceToScaned                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  OutAlpha                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Defiler_VisionArea_C::CalculateDistanceToScaned(const class AActor* In_OtherActor, bool* OutInRange, float* OutDistanceToScaned, double* OutAlpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Defiler_VisionArea_C", "CalculateDistanceToScaned");

	Params::BP_Defiler_VisionArea_C_CalculateDistanceToScaned Parms{};

	Parms.In_OtherActor = In_OtherActor;

	UObject::ProcessEvent(Func, &Parms);

	if (OutInRange != nullptr)
		*OutInRange = Parms.OutInRange;

	if (OutDistanceToScaned != nullptr)
		*OutDistanceToScaned = Parms.OutDistanceToScaned;

	if (OutAlpha != nullptr)
		*OutAlpha = Parms.OutAlpha;
}


// Function BP_Defiler_VisionArea.BP_Defiler_VisionArea_C.DisableVIsion
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Defiler_VisionArea_C::DisableVIsion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Defiler_VisionArea_C", "DisableVIsion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Defiler_VisionArea.BP_Defiler_VisionArea_C.EnableVision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  InVisionTimeStart                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InVisionLocationStart                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  InRadius                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  InScanPeriod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Defiler_VisionArea_C::EnableVision(double InVisionTimeStart, const struct FVector& InVisionLocationStart, double InRadius, double InScanPeriod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Defiler_VisionArea_C", "EnableVision");

	Params::BP_Defiler_VisionArea_C_EnableVision Parms{};

	Parms.InVisionTimeStart = InVisionTimeStart;
	Parms.InVisionLocationStart = std::move(InVisionLocationStart);
	Parms.InRadius = InRadius;
	Parms.InScanPeriod = InScanPeriod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Defiler_VisionArea.BP_Defiler_VisionArea_C.ExecuteUbergraph_BP_Defiler_VisionArea
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Defiler_VisionArea_C::ExecuteUbergraph_BP_Defiler_VisionArea(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Defiler_VisionArea_C", "ExecuteUbergraph_BP_Defiler_VisionArea");

	Params::BP_Defiler_VisionArea_C_ExecuteUbergraph_BP_Defiler_VisionArea Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Defiler_VisionArea.BP_Defiler_VisionArea_C.GetCollisionComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*              Comp                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Defiler_VisionArea_C::GetCollisionComponent(class UPrimitiveComponent** Comp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Defiler_VisionArea_C", "GetCollisionComponent");

	Params::BP_Defiler_VisionArea_C_GetCollisionComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Comp != nullptr)
		*Comp = Parms.Comp;
}


// Function BP_Defiler_VisionArea.BP_Defiler_VisionArea_C.IsScanActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bActive                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Defiler_VisionArea_C::IsScanActive(bool* bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Defiler_VisionArea_C", "IsScanActive");

	Params::BP_Defiler_VisionArea_C_IsScanActive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bActive != nullptr)
		*bActive = Parms.bActive;
}


// Function BP_Defiler_VisionArea.BP_Defiler_VisionArea_C.OnScanStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Defiler_VisionArea_C::OnScanStarted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Defiler_VisionArea_C", "OnScanStarted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Defiler_VisionArea.BP_Defiler_VisionArea_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Defiler_VisionArea_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Defiler_VisionArea_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Defiler_VisionArea.BP_Defiler_VisionArea_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Defiler_VisionArea_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Defiler_VisionArea_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Defiler_VisionArea.BP_Defiler_VisionArea_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Defiler_VisionArea_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Defiler_VisionArea_C", "ReceiveTick");

	Params::BP_Defiler_VisionArea_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Defiler_VisionArea.BP_Defiler_VisionArea_C.SetScanRadius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  InRadius                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Defiler_VisionArea_C::SetScanRadius(double InRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Defiler_VisionArea_C", "SetScanRadius");

	Params::BP_Defiler_VisionArea_C_SetScanRadius Parms{};

	Parms.InRadius = InRadius;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Defiler_VisionArea.BP_Defiler_VisionArea_C.Update Scaned Actor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ScanedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           InBlendActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Defiler_VisionArea_C::Update_Scaned_Actor(class AActor* ScanedActor, class AActor* InBlendActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Defiler_VisionArea_C", "Update Scaned Actor");

	Params::BP_Defiler_VisionArea_C_Update_Scaned_Actor Parms{};

	Parms.ScanedActor = ScanedActor;
	Parms.InBlendActor = InBlendActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Defiler_VisionArea.BP_Defiler_VisionArea_C.UpdateActorsForScan
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Defiler_VisionArea_C::UpdateActorsForScan()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Defiler_VisionArea_C", "UpdateActorsForScan");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Defiler_VisionArea.BP_Defiler_VisionArea_C.UpdateScanedActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Defiler_VisionArea_C::UpdateScanedActors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Defiler_VisionArea_C", "UpdateScanedActors");

	UObject::ProcessEvent(Func, nullptr);
}

}

