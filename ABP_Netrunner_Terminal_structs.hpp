#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Netrunner_Terminal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_Netrunner_Terminal.ABP_Netrunner_Terminal_C.AnimBlueprintGeneratedConstantData
// 0x042F (0x0430 - 0x0001)
struct ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_6998[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_91;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_92;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_93;                                  // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      __AnimSequenceBase_94;                             // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FName                                   __NameProperty_95;                                 // 0x0020(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_96;                               // 0x0028(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimNodeFunctionRef                   __StructProperty_97;                               // 0x0048(0x0020)(BlueprintVisible, NoDestructor)
	int32                                         __IntProperty_98;                                  // 0x0068(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_99;                               // 0x006C(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_100;                               // 0x0098(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_101;                                // 0x009C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_102;                                 // 0x00A4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESequenceEvalReinit                           __ByteProperty_103;                                // 0x00A8(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_104;                                // 0x00A9(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6999[0x2];                                     // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_105;                               // 0x00AC(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      __AnimSequenceBase_106;                            // 0x00B0(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_107;                                // 0x00B8(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_108;                                // 0x00B9(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_109;                                // 0x00BA(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_699A[0x1];                                     // 0x00BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_110;                                // 0x00BC(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_111;                                // 0x00C4(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_112;                                // 0x00CC(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_113;                                 // 0x00D4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_114;                              // 0x00D8(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00F8(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0178(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                                // 0x0190(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_3;                  // 0x01C0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_2;                  // 0x01F0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_1;                  // 0x0220(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult;                    // 0x0250(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;                    // 0x0280(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_3;                       // 0x02B0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequenceEvaluator_1;                 // 0x02E0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_2;                       // 0x0310(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;                      // 0x0340(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_1;                       // 0x0370(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequenceEvaluator;                   // 0x03A0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult;                         // 0x03D0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine;                        // 0x0400(0x0030)()
};
static_assert(alignof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData) == 0x000430, "Wrong size on ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __NameProperty_91) == 0x000004, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__NameProperty_91' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __NameProperty_92) == 0x00000C, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__NameProperty_92' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __IntProperty_93) == 0x000014, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__IntProperty_93' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_94) == 0x000018, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_94' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __NameProperty_95) == 0x000020, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__NameProperty_95' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __StructProperty_96) == 0x000028, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__StructProperty_96' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __StructProperty_97) == 0x000048, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__StructProperty_97' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __IntProperty_98) == 0x000068, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__IntProperty_98' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __StructProperty_99) == 0x00006C, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__StructProperty_99' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __FloatProperty_100) == 0x000098, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__FloatProperty_100' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __NameProperty_101) == 0x00009C, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__NameProperty_101' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __IntProperty_102) == 0x0000A4, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__IntProperty_102' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __ByteProperty_103) == 0x0000A8, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__ByteProperty_103' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __BoolProperty_104) == 0x0000A9, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__BoolProperty_104' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __FloatProperty_105) == 0x0000AC, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__FloatProperty_105' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_106) == 0x0000B0, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_106' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __BoolProperty_107) == 0x0000B8, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__BoolProperty_107' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __EnumProperty_108) == 0x0000B9, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__EnumProperty_108' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __ByteProperty_109) == 0x0000BA, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__ByteProperty_109' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __NameProperty_110) == 0x0000BC, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__NameProperty_110' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __NameProperty_111) == 0x0000C4, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__NameProperty_111' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __NameProperty_112) == 0x0000CC, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__NameProperty_112' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __IntProperty_113) == 0x0000D4, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__IntProperty_113' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, __StructProperty_114) == 0x0000D8, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::__StructProperty_114' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000F8, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000178, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Root) == 0x000190, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_3) == 0x0001C0, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_2) == 0x0001F0, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_1) == 0x000220, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult) == 0x000250, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_1) == 0x000280, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_3) == 0x0002B0, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequenceEvaluator_1) == 0x0002E0, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequenceEvaluator_1' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_2) == 0x000310, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer) == 0x000340, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_1) == 0x000370, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequenceEvaluator) == 0x0003A0, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult) == 0x0003D0, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateMachine) == 0x000400, "Member 'ABP_Netrunner_Terminal::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateMachine' has a wrong offset!");

}

