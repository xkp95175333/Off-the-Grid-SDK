#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_OceanDamage

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_OceanDamage.GE_OceanDamage_C
// 0x0000 (0x0BC8 - 0x0BC8)
class UGE_OceanDamage_C final : public UGzKillEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_OceanDamage_C">();
	}
	static class UGE_OceanDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_OceanDamage_C>();
	}
};
static_assert(alignof(UGE_OceanDamage_C) == 0x000008, "Wrong alignment on UGE_OceanDamage_C");
static_assert(sizeof(UGE_OceanDamage_C) == 0x000BC8, "Wrong size on UGE_OceanDamage_C");

}

