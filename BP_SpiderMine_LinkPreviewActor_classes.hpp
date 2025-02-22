#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpiderMine_LinkPreviewActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SpiderMine_LinkPreviewActor.BP_SpiderMine_LinkPreviewActor_C
// 0x0020 (0x02C0 - 0x02A0)
class ABP_SpiderMine_LinkPreviewActor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cylinder;                                          // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ColorDMI;                                          // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SpiderMine_LinkPreviewActor(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UpdateColor(const struct FLinearColor& Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SpiderMine_LinkPreviewActor_C">();
	}
	static class ABP_SpiderMine_LinkPreviewActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SpiderMine_LinkPreviewActor_C>();
	}
};
static_assert(alignof(ABP_SpiderMine_LinkPreviewActor_C) == 0x000008, "Wrong alignment on ABP_SpiderMine_LinkPreviewActor_C");
static_assert(sizeof(ABP_SpiderMine_LinkPreviewActor_C) == 0x0002C0, "Wrong size on ABP_SpiderMine_LinkPreviewActor_C");
static_assert(offsetof(ABP_SpiderMine_LinkPreviewActor_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_SpiderMine_LinkPreviewActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SpiderMine_LinkPreviewActor_C, Cylinder) == 0x0002A8, "Member 'ABP_SpiderMine_LinkPreviewActor_C::Cylinder' has a wrong offset!");
static_assert(offsetof(ABP_SpiderMine_LinkPreviewActor_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_SpiderMine_LinkPreviewActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SpiderMine_LinkPreviewActor_C, ColorDMI) == 0x0002B8, "Member 'ABP_SpiderMine_LinkPreviewActor_C::ColorDMI' has a wrong offset!");

}

