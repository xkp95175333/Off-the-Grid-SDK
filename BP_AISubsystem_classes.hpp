#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AISubsystem

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AISubsystem.BP_AISubsystem_C
// 0x0000 (0x0578 - 0x0578)
class ABP_AISubsystem_C final : public AGzAIManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AISubsystem_C">();
	}
	static class ABP_AISubsystem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AISubsystem_C>();
	}
};
static_assert(alignof(ABP_AISubsystem_C) == 0x000008, "Wrong alignment on ABP_AISubsystem_C");
static_assert(sizeof(ABP_AISubsystem_C) == 0x000578, "Wrong size on ABP_AISubsystem_C");

}

