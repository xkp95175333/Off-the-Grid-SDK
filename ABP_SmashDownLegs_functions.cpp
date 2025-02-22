#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_SmashDownLegs

#include "Basic.hpp"

#include "ABP_SmashDownLegs_classes.hpp"
#include "ABP_SmashDownLegs_parameters.hpp"


namespace SDK
{

// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.Aiming_Correction
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Aim_pose                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_Aiming_Correction                                (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::Aiming_Correction(const struct FPoseLink& Aim_pose, struct FPoseLink* Param_Aiming_Correction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "Aiming_Correction");

	Params::ABP_SmashDownLegs_C_Aiming_Correction Parms{};

	Parms.Aim_pose = std::move(Aim_pose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Aiming_Correction != nullptr)
		*Param_Aiming_Correction = std::move(Parms.Param_Aiming_Correction);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "AnimGraph");

	Params::ABP_SmashDownLegs_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_SmashDownLegs_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_SmashDownLegs_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "BlueprintUpdateAnimation");

	Params::ABP_SmashDownLegs_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.DamagedBody_CycleState
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_DamagedBody_CycleState                           (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::DamagedBody_CycleState(struct FPoseLink* Param_DamagedBody_CycleState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "DamagedBody_CycleState");

	Params::ABP_SmashDownLegs_C_DamagedBody_CycleState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_DamagedBody_CycleState != nullptr)
		*Param_DamagedBody_CycleState = std::move(Parms.Param_DamagedBody_CycleState);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.DamagedBody_EnterState
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_DamagedBody_EnterState                           (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::DamagedBody_EnterState(struct FPoseLink* Param_DamagedBody_EnterState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "DamagedBody_EnterState");

	Params::ABP_SmashDownLegs_C_DamagedBody_EnterState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_DamagedBody_EnterState != nullptr)
		*Param_DamagedBody_EnterState = std::move(Parms.Param_DamagedBody_EnterState);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.DamagedBody_ExitState
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_DamagedBody_ExitState                            (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::DamagedBody_ExitState(struct FPoseLink* Param_DamagedBody_ExitState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "DamagedBody_ExitState");

	Params::ABP_SmashDownLegs_C_DamagedBody_ExitState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_DamagedBody_ExitState != nullptr)
		*Param_DamagedBody_ExitState = std::move(Parms.Param_DamagedBody_ExitState);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.DamagedBody_IdleState
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_DamagedBody_IdleState                            (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::DamagedBody_IdleState(struct FPoseLink* Param_DamagedBody_IdleState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "DamagedBody_IdleState");

	Params::ABP_SmashDownLegs_C_DamagedBody_IdleState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_DamagedBody_IdleState != nullptr)
		*Param_DamagedBody_IdleState = std::move(Parms.Param_DamagedBody_IdleState);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_SequencePlayer_D985842449A1E14151FAD7B15C74534A
// (BlueprintEvent)

void UABP_SmashDownLegs_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_SequencePlayer_D985842449A1E14151FAD7B15C74534A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_SequencePlayer_D985842449A1E14151FAD7B15C74534A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_18D7D65348E7D4E45D9E7DAC6FBA8CD7
// (BlueprintEvent)

void UABP_SmashDownLegs_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_18D7D65348E7D4E45D9E7DAC6FBA8CD7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_18D7D65348E7D4E45D9E7DAC6FBA8CD7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_27F1B9EC48DE6D2EECBB2DB77FFE667F
// (BlueprintEvent)

void UABP_SmashDownLegs_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_27F1B9EC48DE6D2EECBB2DB77FFE667F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_27F1B9EC48DE6D2EECBB2DB77FFE667F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_2DCBBF78467769BB0FC44A8E8B1B3D19
// (BlueprintEvent)

void UABP_SmashDownLegs_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_2DCBBF78467769BB0FC44A8E8B1B3D19()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_2DCBBF78467769BB0FC44A8E8B1B3D19");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_52D03ECA4519337F3110459F4CE06BD0
// (BlueprintEvent)

void UABP_SmashDownLegs_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_52D03ECA4519337F3110459F4CE06BD0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_52D03ECA4519337F3110459F4CE06BD0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_6C3D05384B998FC4674991B2E876D1ED
// (BlueprintEvent)

void UABP_SmashDownLegs_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_6C3D05384B998FC4674991B2E876D1ED()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_6C3D05384B998FC4674991B2E876D1ED");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_89022C2E4048A3F123D8DAACB6EA4BF0
// (BlueprintEvent)

void UABP_SmashDownLegs_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_89022C2E4048A3F123D8DAACB6EA4BF0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_89022C2E4048A3F123D8DAACB6EA4BF0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_9B3458854C47D6A3C76C758EFF14DF45
// (BlueprintEvent)

void UABP_SmashDownLegs_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_9B3458854C47D6A3C76C758EFF14DF45()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SmashDownLegs_AnimGraphNode_TransitionResult_9B3458854C47D6A3C76C758EFF14DF45");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.ExecuteUbergraph_ABP_SmashDownLegs
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_SmashDownLegs_C::ExecuteUbergraph_ABP_SmashDownLegs(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "ExecuteUbergraph_ABP_SmashDownLegs");

	Params::ABP_SmashDownLegs_C_ExecuteUbergraph_ABP_SmashDownLegs Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.FullBody_Aiming
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        PreAimPose                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                                  AimYaw                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  AimPitch                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                        Param_FullBody_Aiming                                  (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::FullBody_Aiming(const struct FPoseLink& PreAimPose, double AimYaw, double AimPitch, struct FPoseLink* Param_FullBody_Aiming)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "FullBody_Aiming");

	Params::ABP_SmashDownLegs_C_FullBody_Aiming Parms{};

	Parms.PreAimPose = std::move(PreAimPose);
	Parms.AimYaw = AimYaw;
	Parms.AimPitch = AimPitch;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FullBody_Aiming != nullptr)
		*Param_FullBody_Aiming = std::move(Parms.Param_FullBody_Aiming);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.FullBody_AnimAbility
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_FullBody_AnimAbility                             (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::FullBody_AnimAbility(struct FPoseLink* Param_FullBody_AnimAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "FullBody_AnimAbility");

	Params::ABP_SmashDownLegs_C_FullBody_AnimAbility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FullBody_AnimAbility != nullptr)
		*Param_FullBody_AnimAbility = std::move(Parms.Param_FullBody_AnimAbility);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.FullBody_CycleState
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_FullBody_CycleState                              (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::FullBody_CycleState(struct FPoseLink* Param_FullBody_CycleState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "FullBody_CycleState");

	Params::ABP_SmashDownLegs_C_FullBody_CycleState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FullBody_CycleState != nullptr)
		*Param_FullBody_CycleState = std::move(Parms.Param_FullBody_CycleState);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.FullBody_FallLandState
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_FullBody_FallLandState                           (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::FullBody_FallLandState(struct FPoseLink* Param_FullBody_FallLandState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "FullBody_FallLandState");

	Params::ABP_SmashDownLegs_C_FullBody_FallLandState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FullBody_FallLandState != nullptr)
		*Param_FullBody_FallLandState = std::move(Parms.Param_FullBody_FallLandState);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.FullBody_FallLoopState
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_FullBody_FallLoopState                           (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::FullBody_FallLoopState(struct FPoseLink* Param_FullBody_FallLoopState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "FullBody_FallLoopState");

	Params::ABP_SmashDownLegs_C_FullBody_FallLoopState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FullBody_FallLoopState != nullptr)
		*Param_FullBody_FallLoopState = std::move(Parms.Param_FullBody_FallLoopState);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.FullBody_IdleState
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_FullBody_IdleState                               (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::FullBody_IdleState(struct FPoseLink* Param_FullBody_IdleState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "FullBody_IdleState");

	Params::ABP_SmashDownLegs_C_FullBody_IdleState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FullBody_IdleState != nullptr)
		*Param_FullBody_IdleState = std::move(Parms.Param_FullBody_IdleState);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.FullBody_JumpApexState
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_FullBody_JumpApexState                           (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::FullBody_JumpApexState(struct FPoseLink* Param_FullBody_JumpApexState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "FullBody_JumpApexState");

	Params::ABP_SmashDownLegs_C_FullBody_JumpApexState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FullBody_JumpApexState != nullptr)
		*Param_FullBody_JumpApexState = std::move(Parms.Param_FullBody_JumpApexState);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.FullBody_JumpStartLoopState
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_FullBody_JumpStartLoopState                      (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::FullBody_JumpStartLoopState(struct FPoseLink* Param_FullBody_JumpStartLoopState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "FullBody_JumpStartLoopState");

	Params::ABP_SmashDownLegs_C_FullBody_JumpStartLoopState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FullBody_JumpStartLoopState != nullptr)
		*Param_FullBody_JumpStartLoopState = std::move(Parms.Param_FullBody_JumpStartLoopState);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.FullBody_JumpStartState
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_FullBody_JumpStartState                          (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::FullBody_JumpStartState(struct FPoseLink* Param_FullBody_JumpStartState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "FullBody_JumpStartState");

	Params::ABP_SmashDownLegs_C_FullBody_JumpStartState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FullBody_JumpStartState != nullptr)
		*Param_FullBody_JumpStartState = std::move(Parms.Param_FullBody_JumpStartState);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.FullBody_PivotState
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_FullBody_PivotState                              (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::FullBody_PivotState(struct FPoseLink* Param_FullBody_PivotState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "FullBody_PivotState");

	Params::ABP_SmashDownLegs_C_FullBody_PivotState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FullBody_PivotState != nullptr)
		*Param_FullBody_PivotState = std::move(Parms.Param_FullBody_PivotState);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.FullBody_SkeletalControls
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_FullBody_SkeletalControls                        (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::FullBody_SkeletalControls(const struct FPoseLink& InPose, struct FPoseLink* Param_FullBody_SkeletalControls)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "FullBody_SkeletalControls");

	Params::ABP_SmashDownLegs_C_FullBody_SkeletalControls Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FullBody_SkeletalControls != nullptr)
		*Param_FullBody_SkeletalControls = std::move(Parms.Param_FullBody_SkeletalControls);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.FullBody_StartState
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_FullBody_StartState                              (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::FullBody_StartState(struct FPoseLink* Param_FullBody_StartState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "FullBody_StartState");

	Params::ABP_SmashDownLegs_C_FullBody_StartState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FullBody_StartState != nullptr)
		*Param_FullBody_StartState = std::move(Parms.Param_FullBody_StartState);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.FullBody_StopState
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_FullBody_StopState                               (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::FullBody_StopState(struct FPoseLink* Param_FullBody_StopState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "FullBody_StopState");

	Params::ABP_SmashDownLegs_C_FullBody_StopState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FullBody_StopState != nullptr)
		*Param_FullBody_StopState = std::move(Parms.Param_FullBody_StopState);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.FullBodyAdditives
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_FullBodyAdditives                                (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::FullBodyAdditives(struct FPoseLink* Param_FullBodyAdditives)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "FullBodyAdditives");

	Params::ABP_SmashDownLegs_C_FullBodyAdditives Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_FullBodyAdditives != nullptr)
		*Param_FullBodyAdditives = std::move(Parms.Param_FullBodyAdditives);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.KneeSlide_State
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_KneeSlide_State                                  (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::KneeSlide_State(struct FPoseLink* Param_KneeSlide_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "KneeSlide_State");

	Params::ABP_SmashDownLegs_C_KneeSlide_State Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_KneeSlide_State != nullptr)
		*Param_KneeSlide_State = std::move(Parms.Param_KneeSlide_State);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.LeftHandPose_OverrideState
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InputPose                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_LeftHandPose_OverrideState                       (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::LeftHandPose_OverrideState(const struct FPoseLink& InputPose, struct FPoseLink* Param_LeftHandPose_OverrideState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "LeftHandPose_OverrideState");

	Params::ABP_SmashDownLegs_C_LeftHandPose_OverrideState Parms{};

	Parms.InputPose = std::move(InputPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_LeftHandPose_OverrideState != nullptr)
		*Param_LeftHandPose_OverrideState = std::move(Parms.Param_LeftHandPose_OverrideState);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.Limbless_State
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_Limbless_State                                   (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::Limbless_State(struct FPoseLink* Param_Limbless_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "Limbless_State");

	Params::ABP_SmashDownLegs_C_Limbless_State Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Limbless_State != nullptr)
		*Param_Limbless_State = std::move(Parms.Param_Limbless_State);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.NPC_CoverState
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        Param_NPC_CoverState                                   (Parm, OutParm, NoDestructor)

void UABP_SmashDownLegs_C::NPC_CoverState(struct FPoseLink* Param_NPC_CoverState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "NPC_CoverState");

	Params::ABP_SmashDownLegs_C_NPC_CoverState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_NPC_CoverState != nullptr)
		*Param_NPC_CoverState = std::move(Parms.Param_NPC_CoverState);
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.SPX_GetBaseAnimBP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UABP_Human_C*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UABP_Human_C* UABP_SmashDownLegs_C::SPX_GetBaseAnimBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "SPX_GetBaseAnimBP");

	Params::ABP_SmashDownLegs_C_SPX_GetBaseAnimBP Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.SPX_GetCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacter*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class ACharacter* UABP_SmashDownLegs_C::SPX_GetCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "SPX_GetCharacter");

	Params::ABP_SmashDownLegs_C_SPX_GetCharacter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ABP_SmashDownLegs.ABP_SmashDownLegs_C.UpdateAnimState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTag>             Param_Tag_Container_Gameplay_Tags                      (Parm, OutParm)

void UABP_SmashDownLegs_C::UpdateAnimState(TArray<struct FGameplayTag>* Param_Tag_Container_Gameplay_Tags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SmashDownLegs_C", "UpdateAnimState");

	Params::ABP_SmashDownLegs_C_UpdateAnimState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Tag_Container_Gameplay_Tags != nullptr)
		*Param_Tag_Container_Gameplay_Tags = std::move(Parms.Param_Tag_Container_Gameplay_Tags);
}

}

