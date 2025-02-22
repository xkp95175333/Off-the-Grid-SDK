#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_QuickMelee

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AN_QuickMelee.AN_QuickMelee_C
// 0x0000 (0x0040 - 0x0040)
class UAN_QuickMelee_C final : public UGzNamedMontageNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AN_QuickMelee_C">();
	}
	static class UAN_QuickMelee_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAN_QuickMelee_C>();
	}
};
static_assert(alignof(UAN_QuickMelee_C) == 0x000008, "Wrong alignment on UAN_QuickMelee_C");
static_assert(sizeof(UAN_QuickMelee_C) == 0x000040, "Wrong size on UAN_QuickMelee_C");

}

