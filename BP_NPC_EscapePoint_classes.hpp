#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC_EscapePoint

#include "Basic.hpp"

#include "E_NPC_EscapePointsMovementType_structs.hpp"
#include "BP_AI_Point_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPC_EscapePoint.BP_NPC_EscapePoint_C
// 0x0028 (0x02E8 - 0x02C0)
class ABP_NPC_EscapePoint_C final : public ABP_AI_Point_C
{
public:
	class ABP_NPC_EscapePoint_C*                  NextPatrolPoint;                                   // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Event_PointMoved;                                  // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_NPC_EscapePoint_C*                  NotRelevantPatrolPoint;                            // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	E_NPC_EscapePointsMovementType                MovementType;                                      // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void Event_PointMoved__DelegateSignature(class AActor* NextPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPC_EscapePoint_C">();
	}
	static class ABP_NPC_EscapePoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPC_EscapePoint_C>();
	}
};
static_assert(alignof(ABP_NPC_EscapePoint_C) == 0x000008, "Wrong alignment on ABP_NPC_EscapePoint_C");
static_assert(sizeof(ABP_NPC_EscapePoint_C) == 0x0002E8, "Wrong size on ABP_NPC_EscapePoint_C");
static_assert(offsetof(ABP_NPC_EscapePoint_C, NextPatrolPoint) == 0x0002C0, "Member 'ABP_NPC_EscapePoint_C::NextPatrolPoint' has a wrong offset!");
static_assert(offsetof(ABP_NPC_EscapePoint_C, Event_PointMoved) == 0x0002C8, "Member 'ABP_NPC_EscapePoint_C::Event_PointMoved' has a wrong offset!");
static_assert(offsetof(ABP_NPC_EscapePoint_C, NotRelevantPatrolPoint) == 0x0002D8, "Member 'ABP_NPC_EscapePoint_C::NotRelevantPatrolPoint' has a wrong offset!");
static_assert(offsetof(ABP_NPC_EscapePoint_C, MovementType) == 0x0002E0, "Member 'ABP_NPC_EscapePoint_C::MovementType' has a wrong offset!");

}

