#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExtractionRoyaleGameState

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ExtractionRoyaleGameState.BP_ExtractionRoyaleGameState_C
// 0x0008 (0x06E8 - 0x06E0)
class ABP_ExtractionRoyaleGameState_C final : public AGzExtractionRoyaleGameState
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x06E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ExtractionRoyaleGameState_C">();
	}
	static class ABP_ExtractionRoyaleGameState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ExtractionRoyaleGameState_C>();
	}
};
static_assert(alignof(ABP_ExtractionRoyaleGameState_C) == 0x000008, "Wrong alignment on ABP_ExtractionRoyaleGameState_C");
static_assert(sizeof(ABP_ExtractionRoyaleGameState_C) == 0x0006E8, "Wrong size on ABP_ExtractionRoyaleGameState_C");
static_assert(offsetof(ABP_ExtractionRoyaleGameState_C, DefaultSceneRoot) == 0x0006E0, "Member 'ABP_ExtractionRoyaleGameState_C::DefaultSceneRoot' has a wrong offset!");

}

