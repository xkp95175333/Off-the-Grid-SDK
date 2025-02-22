#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_ClearBBValue

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_ClearBBValue.BTTask_ClearBBValue_C
// 0x0030 (0x00D8 - 0x00A8)
class UBTTask_ClearBBValue_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 ValueToClear;                                      // 0x00B0(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BTTask_ClearBBValue(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_ClearBBValue_C">();
	}
	static class UBTTask_ClearBBValue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_ClearBBValue_C>();
	}
};
static_assert(alignof(UBTTask_ClearBBValue_C) == 0x000008, "Wrong alignment on UBTTask_ClearBBValue_C");
static_assert(sizeof(UBTTask_ClearBBValue_C) == 0x0000D8, "Wrong size on UBTTask_ClearBBValue_C");
static_assert(offsetof(UBTTask_ClearBBValue_C, UberGraphFrame) == 0x0000A8, "Member 'UBTTask_ClearBBValue_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTTask_ClearBBValue_C, ValueToClear) == 0x0000B0, "Member 'UBTTask_ClearBBValue_C::ValueToClear' has a wrong offset!");

}

