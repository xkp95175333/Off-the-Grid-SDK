#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StickyGooComponent

#include "Basic.hpp"

#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_StickyGooComponent.BP_StickyGooComponent_C.ExecuteUbergraph_BP_StickyGooComponent
// 0x0068 (0x0068 - 0x0000)
struct BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C5B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0030(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x0040(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C5C[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue_1;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent) == 0x000008, "Wrong alignment on BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent");
static_assert(sizeof(BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent) == 0x000068, "Wrong size on BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent");
static_assert(offsetof(BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent, EntryPoint) == 0x000000, "Member 'BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent, Temp_delegate_Variable) == 0x000030, "Member 'BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent, Temp_delegate_Variable_1) == 0x000040, "Member 'BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent, CallFunc_PostEvent_ReturnValue) == 0x000050, "Member 'BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent, CallFunc_GetOwner_ReturnValue_1) == 0x000058, "Member 'BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent, CallFunc_PostEvent_ReturnValue_1) == 0x000060, "Member 'BP_StickyGooComponent_C_ExecuteUbergraph_BP_StickyGooComponent::CallFunc_PostEvent_ReturnValue_1' has a wrong offset!");

}

