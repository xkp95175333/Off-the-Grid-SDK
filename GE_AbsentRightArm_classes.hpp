#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_AbsentRightArm

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_AbsentRightArm.GE_AbsentRightArm_C
// 0x0000 (0x0AA0 - 0x0AA0)
class UGE_AbsentRightArm_C final : public UGzGE_AbsentLimb
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_AbsentRightArm_C">();
	}
	static class UGE_AbsentRightArm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_AbsentRightArm_C>();
	}
};
static_assert(alignof(UGE_AbsentRightArm_C) == 0x000008, "Wrong alignment on UGE_AbsentRightArm_C");
static_assert(sizeof(UGE_AbsentRightArm_C) == 0x000AA0, "Wrong size on UGE_AbsentRightArm_C");

}

