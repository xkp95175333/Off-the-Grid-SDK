#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PredefinedSpawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "G01_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PredefinedSpawner.BP_PredefinedSpawner_C
// 0x0060 (0x0300 - 0x02A0)
class ABP_PredefinedSpawner_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGzInventoryItemContent                ItemToSpawn;                                       // 0x02B0(0x0048)(Edit, BlueprintVisible)
	EGzPickablePhysicsType                        Pickable_Physics_Type;                             // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58BF[0x3];                                     // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SpawnDelay;                                        // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SpawnItems();
	void ExecuteUbergraph_BP_PredefinedSpawner(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PredefinedSpawner_C">();
	}
	static class ABP_PredefinedSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PredefinedSpawner_C>();
	}
};
static_assert(alignof(ABP_PredefinedSpawner_C) == 0x000008, "Wrong alignment on ABP_PredefinedSpawner_C");
static_assert(sizeof(ABP_PredefinedSpawner_C) == 0x000300, "Wrong size on ABP_PredefinedSpawner_C");
static_assert(offsetof(ABP_PredefinedSpawner_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_PredefinedSpawner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PredefinedSpawner_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_PredefinedSpawner_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PredefinedSpawner_C, ItemToSpawn) == 0x0002B0, "Member 'ABP_PredefinedSpawner_C::ItemToSpawn' has a wrong offset!");
static_assert(offsetof(ABP_PredefinedSpawner_C, Pickable_Physics_Type) == 0x0002F8, "Member 'ABP_PredefinedSpawner_C::Pickable_Physics_Type' has a wrong offset!");
static_assert(offsetof(ABP_PredefinedSpawner_C, SpawnDelay) == 0x0002FC, "Member 'ABP_PredefinedSpawner_C::SpawnDelay' has a wrong offset!");

}

