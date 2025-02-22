#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_Gorilla_Targetable

#include "Basic.hpp"


namespace SDK::Params
{

// Function I_Gorilla_Targetable.I_Gorilla_Targetable_C.IsTargetable
// 0x0010 (0x0010 - 0x0000)
struct I_Gorilla_Targetable_C_IsTargetable final
{
public:
	class AActor*                                 GorillaOwner;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bTargetable;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_Gorilla_Targetable_C_IsTargetable) == 0x000008, "Wrong alignment on I_Gorilla_Targetable_C_IsTargetable");
static_assert(sizeof(I_Gorilla_Targetable_C_IsTargetable) == 0x000010, "Wrong size on I_Gorilla_Targetable_C_IsTargetable");
static_assert(offsetof(I_Gorilla_Targetable_C_IsTargetable, GorillaOwner) == 0x000000, "Member 'I_Gorilla_Targetable_C_IsTargetable::GorillaOwner' has a wrong offset!");
static_assert(offsetof(I_Gorilla_Targetable_C_IsTargetable, bTargetable) == 0x000008, "Member 'I_Gorilla_Targetable_C_IsTargetable::bTargetable' has a wrong offset!");

}

