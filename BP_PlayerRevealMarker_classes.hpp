#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerRevealMarker

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerRevealMarker.BP_PlayerRevealMarker_C
// 0x0000 (0x0318 - 0x0318)
class ABP_PlayerRevealMarker_C final : public AGzMarkerSceneContainer
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerRevealMarker_C">();
	}
	static class ABP_PlayerRevealMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerRevealMarker_C>();
	}
};
static_assert(alignof(ABP_PlayerRevealMarker_C) == 0x000008, "Wrong alignment on ABP_PlayerRevealMarker_C");
static_assert(sizeof(ABP_PlayerRevealMarker_C) == 0x000318, "Wrong size on ABP_PlayerRevealMarker_C");

}

