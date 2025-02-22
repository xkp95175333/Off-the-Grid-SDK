#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MatchStateAnnouncer

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MatchStateAnnouncer.BP_MatchStateAnnouncer_C
// 0x0000 (0x0440 - 0x0440)
class ABP_MatchStateAnnouncer_C final : public AGzMatchStateAnnouncer
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MatchStateAnnouncer_C">();
	}
	static class ABP_MatchStateAnnouncer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MatchStateAnnouncer_C>();
	}
};
static_assert(alignof(ABP_MatchStateAnnouncer_C) == 0x000008, "Wrong alignment on ABP_MatchStateAnnouncer_C");
static_assert(sizeof(ABP_MatchStateAnnouncer_C) == 0x000440, "Wrong size on ABP_MatchStateAnnouncer_C");

}

