#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_MortarLegs_NoMovement

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_MortarLegs_NoMovement.GE_MortarLegs_NoMovement_C
// 0x0000 (0x0A70 - 0x0A70)
class UGE_MortarLegs_NoMovement_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_MortarLegs_NoMovement_C">();
	}
	static class UGE_MortarLegs_NoMovement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_MortarLegs_NoMovement_C>();
	}
};
static_assert(alignof(UGE_MortarLegs_NoMovement_C) == 0x000008, "Wrong alignment on UGE_MortarLegs_NoMovement_C");
static_assert(sizeof(UGE_MortarLegs_NoMovement_C) == 0x000A70, "Wrong size on UGE_MortarLegs_NoMovement_C");

}

