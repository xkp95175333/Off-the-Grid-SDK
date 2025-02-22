#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Teammate_MarkerComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Teammate_MarkerComponent.BP_Teammate_MarkerComponent_C
// 0x0060 (0x04E0 - 0x0480)
class UBP_Teammate_MarkerComponent_C final : public UGzMarkerComponent
{
public:
	uint8                                         Pad_68F7[0x8];                                     // 0x0478(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0480(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                CrouchLocation;                                    // 0x0488(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BaseLocation;                                      // 0x04A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CrouchTimerHandle;                                 // 0x04B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetLocation;                                    // 0x04C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Teammate_MarkerComponent(int32 EntryPoint);
	void KillTimerIfValid();
	void OnTagAdded_5036DE45483E86B9AABD40B2D1B3170D(const struct FGameplayTag& Tag);
	void OnTagRemoved_5036DE45483E86B9AABD40B2D1B3170D(const struct FGameplayTag& Tag);
	void ReceiveBeginPlay();
	void UpdateLocation();

	double CalculatePlayerMarkerRotationForRemoteClient(class AActor* InActor) const;
	float GetMarkerRotation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Teammate_MarkerComponent_C">();
	}
	static class UBP_Teammate_MarkerComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Teammate_MarkerComponent_C>();
	}
};
static_assert(alignof(UBP_Teammate_MarkerComponent_C) == 0x000010, "Wrong alignment on UBP_Teammate_MarkerComponent_C");
static_assert(sizeof(UBP_Teammate_MarkerComponent_C) == 0x0004E0, "Wrong size on UBP_Teammate_MarkerComponent_C");
static_assert(offsetof(UBP_Teammate_MarkerComponent_C, UberGraphFrame) == 0x000480, "Member 'UBP_Teammate_MarkerComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Teammate_MarkerComponent_C, CrouchLocation) == 0x000488, "Member 'UBP_Teammate_MarkerComponent_C::CrouchLocation' has a wrong offset!");
static_assert(offsetof(UBP_Teammate_MarkerComponent_C, BaseLocation) == 0x0004A0, "Member 'UBP_Teammate_MarkerComponent_C::BaseLocation' has a wrong offset!");
static_assert(offsetof(UBP_Teammate_MarkerComponent_C, CrouchTimerHandle) == 0x0004B8, "Member 'UBP_Teammate_MarkerComponent_C::CrouchTimerHandle' has a wrong offset!");
static_assert(offsetof(UBP_Teammate_MarkerComponent_C, TargetLocation) == 0x0004C0, "Member 'UBP_Teammate_MarkerComponent_C::TargetLocation' has a wrong offset!");

}

