#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_MortarLegs

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_MortarLegsAnimState_structs.hpp"
#include "G01_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_MortarLegs.ABP_MortarLegs_C
// 0x0920 (0x11D0 - 0x08B0)
class UABP_MortarLegs_C final : public UGzAbilityAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x08B8(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x08C0(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_21;                             // 0x08C8(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_20;                             // 0x08E8(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_19;                             // 0x0908(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_18;                             // 0x0928(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_17;                             // 0x0948(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0968(0x00B8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_16;                             // 0x0A20(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_15;                             // 0x0A40(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_14;                             // 0x0A60(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_13;                             // 0x0A80(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_12;                             // 0x0AA0(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_11;                             // 0x0AC0(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_10;                             // 0x0AE0(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_9;                              // 0x0B00(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_8;                              // 0x0B20(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_7;                              // 0x0B40(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0B60(0x00B8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_6;                              // 0x0C18(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_5;                              // 0x0C38(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_4;                              // 0x0C58(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_3;                              // 0x0C78(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x0C98(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0CB8(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x0CD8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0D00(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0D28(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0D50(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0D78(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0DA0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0DC8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0DF0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0E18(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0E40(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0E68(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0E90(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0ED8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0EF8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0F40(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0F60(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0FA8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0FC8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x1010(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1030(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1078(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1098(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1160(0x0020)()
	class UAnimInstance*                          K2Node_PropertyAccess_4;                           // 0x1180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_PropertyAccess_3;                           // 0x1188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGzAbilitySystemComponent*              K2Node_PropertyAccess_2;                           // 0x1190(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UABP_Human_C*                           K2Node_PropertyAccess_1;                           // 0x1198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGzAbilitySystemComponent*              K2Node_PropertyAccess;                             // 0x11A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ShootingStarted;                                   // 0x11A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F3D[0x7];                                     // 0x11A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                ASC;                                               // 0x11B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ShootingInProgress;                                // 0x11B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ProceedingToNextState;                             // 0x11B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShootingDone;                                      // 0x11BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsListeningToTags;                                 // 0x11BB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShootingCancelled;                                 // 0x11BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MortarLegsAnimState                         AnimStage;                                         // 0x11BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F3E[0x2];                                     // 0x11BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        BlendOutTime;                                      // 0x11C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Aiming_Correction(const struct FPoseLink& Aim_pose, struct FPoseLink* Param_Aiming_Correction);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void AnimNotify_EndMortarAbility();
	void AnimNotify_ShootingDone();
	void AnimNotify_TabletHided();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void CheckForExistingTags();
	void DamagedBody_CycleState(struct FPoseLink* Param_DamagedBody_CycleState);
	void DamagedBody_EnterState(struct FPoseLink* Param_DamagedBody_EnterState);
	void DamagedBody_ExitState(struct FPoseLink* Param_DamagedBody_ExitState);
	void DamagedBody_IdleState(struct FPoseLink* Param_DamagedBody_IdleState);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MortarLegs_AnimGraphNode_TransitionResult_0397DC644917C115A91C4BB340F4FFEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MortarLegs_AnimGraphNode_TransitionResult_0B06AD2446E7C6485C47EDB46EE9EBBF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MortarLegs_AnimGraphNode_TransitionResult_490D89C8458F648DE946ABB295E95978();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MortarLegs_AnimGraphNode_TransitionResult_7C69A105475B2C07B899328A92C5BE10();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MortarLegs_AnimGraphNode_TransitionResult_8E261CC74AAC06E33AA89DB39F38C917();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MortarLegs_AnimGraphNode_TransitionResult_BCA7C8D9449D1169B8E3B8B287C7FC0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MortarLegs_AnimGraphNode_TransitionResult_C2C9A73D429DFDC3F2745B8E6211DF66();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MortarLegs_AnimGraphNode_TransitionResult_EC31C2C84D20B780C8ABE2BB2BE617F8();
	void ExecuteUbergraph_ABP_MortarLegs(int32 EntryPoint);
	void FullBody_Aiming(const struct FPoseLink& PreAimPose, double AimYaw, double AimPitch, struct FPoseLink* Param_FullBody_Aiming);
	void FullBody_AnimAbility(struct FPoseLink* Param_FullBody_AnimAbility);
	void FullBody_CycleState(struct FPoseLink* Param_FullBody_CycleState);
	void FullBody_FallLandState(struct FPoseLink* Param_FullBody_FallLandState);
	void FullBody_FallLoopState(struct FPoseLink* Param_FullBody_FallLoopState);
	void FullBody_IdleState(struct FPoseLink* Param_FullBody_IdleState);
	void FullBody_JumpApexState(struct FPoseLink* Param_FullBody_JumpApexState);
	void FullBody_JumpStartLoopState(struct FPoseLink* Param_FullBody_JumpStartLoopState);
	void FullBody_JumpStartState(struct FPoseLink* Param_FullBody_JumpStartState);
	void FullBody_PivotState(struct FPoseLink* Param_FullBody_PivotState);
	void FullBody_StartState(struct FPoseLink* Param_FullBody_StartState);
	void FullBody_StopState(struct FPoseLink* Param_FullBody_StopState);
	void FullBodyAdditives(struct FPoseLink* Param_FullBodyAdditives);
	class AGzPlayerCharacter* GetCharacter();
	class UABP_Human_C* GetMainABP();
	void KneeSlide_State(struct FPoseLink* Param_KneeSlide_State);
	void Limbless_State(struct FPoseLink* Param_Limbless_State);
	void ListenForTags();
	void NPC_CoverState(struct FPoseLink* Param_NPC_CoverState);
	void OnEndEntry(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node);
	void OnHideEntry(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node);
	void OnIdleEntry(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node);
	void OnShootEntry(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node);
	void OnTagAdded_49AF8B32408B2809226D06B1FC07C109(const struct FGameplayTag& Tag);
	void OnTagAdded_72DF56D14AB7349F826C9FBF63AB42E4(const struct FGameplayTag& Tag);
	void OnTagAdded_73E49B0F4D7A0B431B9AF7B061243FEA(const struct FGameplayTag& Tag);
	void OnTagRemoved_49AF8B32408B2809226D06B1FC07C109(const struct FGameplayTag& Tag);
	void OnTagRemoved_72DF56D14AB7349F826C9FBF63AB42E4(const struct FGameplayTag& Tag);
	void OnTagRemoved_73E49B0F4D7A0B431B9AF7B061243FEA(const struct FGameplayTag& Tag);
	void TrigggerTagEvent(const struct FGameplayTag& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_MortarLegs_C">();
	}
	static class UABP_MortarLegs_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_MortarLegs_C>();
	}
};
static_assert(alignof(UABP_MortarLegs_C) == 0x000010, "Wrong alignment on UABP_MortarLegs_C");
static_assert(sizeof(UABP_MortarLegs_C) == 0x0011D0, "Wrong size on UABP_MortarLegs_C");
static_assert(offsetof(UABP_MortarLegs_C, UberGraphFrame) == 0x0008B0, "Member 'UABP_MortarLegs_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimBlueprintExtension_PropertyAccess) == 0x0008B8, "Member 'UABP_MortarLegs_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimBlueprintExtension_Base) == 0x0008C0, "Member 'UABP_MortarLegs_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_21) == 0x0008C8, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_21' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_20) == 0x0008E8, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_20' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_19) == 0x000908, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_19' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_18) == 0x000928, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_18' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_17) == 0x000948, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_17' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_LinkedInputPose_1) == 0x000968, "Member 'UABP_MortarLegs_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_16) == 0x000A20, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_16' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_15) == 0x000A40, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_15' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_14) == 0x000A60, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_14' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_13) == 0x000A80, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_13' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_12) == 0x000AA0, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_12' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_11) == 0x000AC0, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_11' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_10) == 0x000AE0, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_10' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_9) == 0x000B00, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_9' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_8) == 0x000B20, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_8' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_7) == 0x000B40, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_7' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_LinkedInputPose) == 0x000B60, "Member 'UABP_MortarLegs_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_6) == 0x000C18, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_6' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_5) == 0x000C38, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_5' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_4) == 0x000C58, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_4' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_3) == 0x000C78, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_3' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_2) == 0x000C98, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root_1) == 0x000CB8, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_TransitionResult_10) == 0x000CD8, "Member 'UABP_MortarLegs_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_TransitionResult_9) == 0x000D00, "Member 'UABP_MortarLegs_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_TransitionResult_8) == 0x000D28, "Member 'UABP_MortarLegs_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_TransitionResult_7) == 0x000D50, "Member 'UABP_MortarLegs_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_TransitionResult_6) == 0x000D78, "Member 'UABP_MortarLegs_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_TransitionResult_5) == 0x000DA0, "Member 'UABP_MortarLegs_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_TransitionResult_4) == 0x000DC8, "Member 'UABP_MortarLegs_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_TransitionResult_3) == 0x000DF0, "Member 'UABP_MortarLegs_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_TransitionResult_2) == 0x000E18, "Member 'UABP_MortarLegs_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_TransitionResult_1) == 0x000E40, "Member 'UABP_MortarLegs_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_TransitionResult) == 0x000E68, "Member 'UABP_MortarLegs_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_SequencePlayer_4) == 0x000E90, "Member 'UABP_MortarLegs_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_StateResult_4) == 0x000ED8, "Member 'UABP_MortarLegs_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_SequencePlayer_3) == 0x000EF8, "Member 'UABP_MortarLegs_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_StateResult_3) == 0x000F40, "Member 'UABP_MortarLegs_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_SequencePlayer_2) == 0x000F60, "Member 'UABP_MortarLegs_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_StateResult_2) == 0x000FA8, "Member 'UABP_MortarLegs_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_SequencePlayer_1) == 0x000FC8, "Member 'UABP_MortarLegs_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_StateResult_1) == 0x001010, "Member 'UABP_MortarLegs_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_SequencePlayer) == 0x001030, "Member 'UABP_MortarLegs_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_StateResult) == 0x001078, "Member 'UABP_MortarLegs_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_StateMachine) == 0x001098, "Member 'UABP_MortarLegs_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimGraphNode_Root) == 0x001160, "Member 'UABP_MortarLegs_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, K2Node_PropertyAccess_4) == 0x001180, "Member 'UABP_MortarLegs_C::K2Node_PropertyAccess_4' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, K2Node_PropertyAccess_3) == 0x001188, "Member 'UABP_MortarLegs_C::K2Node_PropertyAccess_3' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, K2Node_PropertyAccess_2) == 0x001190, "Member 'UABP_MortarLegs_C::K2Node_PropertyAccess_2' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, K2Node_PropertyAccess_1) == 0x001198, "Member 'UABP_MortarLegs_C::K2Node_PropertyAccess_1' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, K2Node_PropertyAccess) == 0x0011A0, "Member 'UABP_MortarLegs_C::K2Node_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, ShootingStarted) == 0x0011A8, "Member 'UABP_MortarLegs_C::ShootingStarted' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, ASC) == 0x0011B0, "Member 'UABP_MortarLegs_C::ASC' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, ShootingInProgress) == 0x0011B8, "Member 'UABP_MortarLegs_C::ShootingInProgress' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, ProceedingToNextState) == 0x0011B9, "Member 'UABP_MortarLegs_C::ProceedingToNextState' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, ShootingDone) == 0x0011BA, "Member 'UABP_MortarLegs_C::ShootingDone' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, IsListeningToTags) == 0x0011BB, "Member 'UABP_MortarLegs_C::IsListeningToTags' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, ShootingCancelled) == 0x0011BC, "Member 'UABP_MortarLegs_C::ShootingCancelled' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, AnimStage) == 0x0011BD, "Member 'UABP_MortarLegs_C::AnimStage' has a wrong offset!");
static_assert(offsetof(UABP_MortarLegs_C, BlendOutTime) == 0x0011C0, "Member 'UABP_MortarLegs_C::BlendOutTime' has a wrong offset!");

}

