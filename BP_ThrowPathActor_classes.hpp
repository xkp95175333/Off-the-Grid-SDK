#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThrowPathActor

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ThrowPathActor.BP_ThrowPathActor_C
// 0x0000 (0x0590 - 0x0590)
class ABP_ThrowPathActor_C final : public AGzThrowPathActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ThrowPathActor_C">();
	}
	static class ABP_ThrowPathActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ThrowPathActor_C>();
	}
};
static_assert(alignof(ABP_ThrowPathActor_C) == 0x000008, "Wrong alignment on ABP_ThrowPathActor_C");
static_assert(sizeof(ABP_ThrowPathActor_C) == 0x000590, "Wrong size on ABP_ThrowPathActor_C");

}

