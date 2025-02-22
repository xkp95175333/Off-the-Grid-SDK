#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TeamRevealSystem

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TeamRevealSystem.BP_TeamRevealSystem_C
// 0x0000 (0x0300 - 0x0300)
class ABP_TeamRevealSystem_C final : public AGzTeamRevealSubsystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TeamRevealSystem_C">();
	}
	static class ABP_TeamRevealSystem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TeamRevealSystem_C>();
	}
};
static_assert(alignof(ABP_TeamRevealSystem_C) == 0x000008, "Wrong alignment on ABP_TeamRevealSystem_C");
static_assert(sizeof(ABP_TeamRevealSystem_C) == 0x000300, "Wrong size on ABP_TeamRevealSystem_C");

}

