#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_BaseJump

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_BaseJump.GA_BaseJump_C
// 0x0000 (0x0550 - 0x0550)
class UGA_BaseJump_C final : public UGzGA_Jump
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_BaseJump_C">();
	}
	static class UGA_BaseJump_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_BaseJump_C>();
	}
};
static_assert(alignof(UGA_BaseJump_C) == 0x000008, "Wrong alignment on UGA_BaseJump_C");
static_assert(sizeof(UGA_BaseJump_C) == 0x000550, "Wrong size on UGA_BaseJump_C");

}

