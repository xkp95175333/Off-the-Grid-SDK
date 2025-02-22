#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DataLayerManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DataLayerManager.BP_DataLayerManager_C
// 0x0028 (0x02C8 - 0x02A0)
class ABP_DataLayerManager_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActorDataLayer>                Foliages;                                          // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bToggleFoliages_;                                  // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Recursive_;                                        // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void ExecuteUbergraph_BP_DataLayerManager(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DataLayerManager_C">();
	}
	static class ABP_DataLayerManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DataLayerManager_C>();
	}
};
static_assert(alignof(ABP_DataLayerManager_C) == 0x000008, "Wrong alignment on ABP_DataLayerManager_C");
static_assert(sizeof(ABP_DataLayerManager_C) == 0x0002C8, "Wrong size on ABP_DataLayerManager_C");
static_assert(offsetof(ABP_DataLayerManager_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_DataLayerManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DataLayerManager_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_DataLayerManager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DataLayerManager_C, Foliages) == 0x0002B0, "Member 'ABP_DataLayerManager_C::Foliages' has a wrong offset!");
static_assert(offsetof(ABP_DataLayerManager_C, bToggleFoliages_) == 0x0002C0, "Member 'ABP_DataLayerManager_C::bToggleFoliages_' has a wrong offset!");
static_assert(offsetof(ABP_DataLayerManager_C, Recursive_) == 0x0002C1, "Member 'ABP_DataLayerManager_C::Recursive_' has a wrong offset!");

}

