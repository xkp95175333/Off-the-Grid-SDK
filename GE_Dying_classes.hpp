#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Dying

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Dying.GE_Dying_C
// 0x0000 (0x0A70 - 0x0A70)
class UGE_Dying_C final : public UGzGE_Dying
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Dying_C">();
	}
	static class UGE_Dying_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Dying_C>();
	}
};
static_assert(alignof(UGE_Dying_C) == 0x000008, "Wrong alignment on UGE_Dying_C");
static_assert(sizeof(UGE_Dying_C) == 0x000A70, "Wrong size on UGE_Dying_C");

}

