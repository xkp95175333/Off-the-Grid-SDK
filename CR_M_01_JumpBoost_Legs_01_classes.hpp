#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CR_M_01_JumpBoost_Legs_01

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ControlRig_classes.hpp"


namespace SDK
{

// ControlRigBlueprintGeneratedClass CR_M_01_JumpBoost_Legs_01.CR_M_01_JumpBoost_Legs_01_C
// 0x0030 (0x0AD8 - 0x0AA8)
class UCR_M_01_JumpBoost_Legs_01_C final : public UControlRig
{
public:
	struct FVector                                LocalVelocity;                                     // 0x0AA8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocalVelocityNormalized;                           // 0x0AC0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CR_M_01_JumpBoost_Legs_01_C">();
	}
	static class UCR_M_01_JumpBoost_Legs_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCR_M_01_JumpBoost_Legs_01_C>();
	}
};
static_assert(alignof(UCR_M_01_JumpBoost_Legs_01_C) == 0x000008, "Wrong alignment on UCR_M_01_JumpBoost_Legs_01_C");
static_assert(sizeof(UCR_M_01_JumpBoost_Legs_01_C) == 0x000AD8, "Wrong size on UCR_M_01_JumpBoost_Legs_01_C");
static_assert(offsetof(UCR_M_01_JumpBoost_Legs_01_C, LocalVelocity) == 0x000AA8, "Member 'UCR_M_01_JumpBoost_Legs_01_C::LocalVelocity' has a wrong offset!");
static_assert(offsetof(UCR_M_01_JumpBoost_Legs_01_C, LocalVelocityNormalized) == 0x000AC0, "Member 'UCR_M_01_JumpBoost_Legs_01_C::LocalVelocityNormalized' has a wrong offset!");

}

