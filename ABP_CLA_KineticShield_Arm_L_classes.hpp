#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_CLA_KineticShield_Arm_L

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ControlRig_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_CLA_KineticShield_Arm_L.ABP_CLA_KineticShield_Arm_L_C
// 0x0AE0 (0x0E50 - 0x0370)
class UABP_CLA_KineticShield_Arm_L_C final : public UAnimInstance
{
public:
	uint8                                         Pad_69A9[0x8];                                     // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0378(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0380(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0388(0x0020)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x03A8(0x0158)(ContainsInstancedReference)
	struct FAnimNode_ControlRig                   AnimGraphNode_ControlRig;                          // 0x0500(0x04D0)(ContainsInstancedReference)
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x09D0(0x00F0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0AC0(0x0048)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0B08(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0B30(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0B58(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0B80(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0BA8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0BF0(0x0020)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_1;                 // 0x0C10(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0C50(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0C70(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0CB8(0x0020)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x0CD8(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0D18(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0D38(0x00C8)()
	bool                                          TurnedOn;                                          // 0x0E00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69AA[0x7];                                     // 0x0E01(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzCharacter*                           OwnerCharacter;                                    // 0x0E08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  ActiveTag;                                         // 0x0E10(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 Mat_count;                                         // 0x0E30(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 LOD_count;                                         // 0x0E40(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void AnimNotify_ShieldActive();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_CLA_KineticShield_Arm_L(int32 EntryPoint);
	void OnTagAdded_307F32DD403063CDE6CEA981B22E133C(const struct FGameplayTag& Tag);
	void OnTagRemoved_307F32DD403063CDE6CEA981B22E133C(const struct FGameplayTag& Tag);
	void UnHideMaterialSlots(TArray<int32>& LODs, TArray<int32>& Materials);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_CLA_KineticShield_Arm_L_C">();
	}
	static class UABP_CLA_KineticShield_Arm_L_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_CLA_KineticShield_Arm_L_C>();
	}
};
static_assert(alignof(UABP_CLA_KineticShield_Arm_L_C) == 0x000010, "Wrong alignment on UABP_CLA_KineticShield_Arm_L_C");
static_assert(sizeof(UABP_CLA_KineticShield_Arm_L_C) == 0x000E50, "Wrong size on UABP_CLA_KineticShield_Arm_L_C");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, UberGraphFrame) == 0x000370, "Member 'UABP_CLA_KineticShield_Arm_L_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimBlueprintExtension_PropertyAccess) == 0x000378, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimBlueprintExtension_Base) == 0x000380, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_Root) == 0x000388, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_CopyPoseFromMesh) == 0x0003A8, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_ControlRig) == 0x000500, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_ControlRig' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_LayeredBoneBlend) == 0x0009D0, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_Slot) == 0x000AC0, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_TransitionResult_3) == 0x000B08, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_TransitionResult_2) == 0x000B30, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_TransitionResult_1) == 0x000B58, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_TransitionResult) == 0x000B80, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_SequencePlayer_1) == 0x000BA8, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_StateResult_3) == 0x000BF0, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_SequenceEvaluator_1) == 0x000C10, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_SequenceEvaluator_1' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_StateResult_2) == 0x000C50, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_SequencePlayer) == 0x000C70, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_StateResult_1) == 0x000CB8, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_SequenceEvaluator) == 0x000CD8, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_StateResult) == 0x000D18, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, AnimGraphNode_StateMachine) == 0x000D38, "Member 'UABP_CLA_KineticShield_Arm_L_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, TurnedOn) == 0x000E00, "Member 'UABP_CLA_KineticShield_Arm_L_C::TurnedOn' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, OwnerCharacter) == 0x000E08, "Member 'UABP_CLA_KineticShield_Arm_L_C::OwnerCharacter' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, ActiveTag) == 0x000E10, "Member 'UABP_CLA_KineticShield_Arm_L_C::ActiveTag' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, Mat_count) == 0x000E30, "Member 'UABP_CLA_KineticShield_Arm_L_C::Mat_count' has a wrong offset!");
static_assert(offsetof(UABP_CLA_KineticShield_Arm_L_C, LOD_count) == 0x000E40, "Member 'UABP_CLA_KineticShield_Arm_L_C::LOD_count' has a wrong offset!");

}

