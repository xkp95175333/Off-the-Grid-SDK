#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Defiler_PPFaid

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Defiler_PPFaid.BP_Defiler_PPFaid_C
// 0x0018 (0x02B8 - 0x02A0)
class ABP_Defiler_PPFaid_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Sphere;                                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DMIFaid;                                           // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Disable();
	void ExecuteUbergraph_BP_Defiler_PPFaid(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetAlpha(float Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Defiler_PPFaid_C">();
	}
	static class ABP_Defiler_PPFaid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Defiler_PPFaid_C>();
	}
};
static_assert(alignof(ABP_Defiler_PPFaid_C) == 0x000008, "Wrong alignment on ABP_Defiler_PPFaid_C");
static_assert(sizeof(ABP_Defiler_PPFaid_C) == 0x0002B8, "Wrong size on ABP_Defiler_PPFaid_C");
static_assert(offsetof(ABP_Defiler_PPFaid_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_Defiler_PPFaid_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Defiler_PPFaid_C, Sphere) == 0x0002A8, "Member 'ABP_Defiler_PPFaid_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_Defiler_PPFaid_C, DMIFaid) == 0x0002B0, "Member 'ABP_Defiler_PPFaid_C::DMIFaid' has a wrong offset!");

}

