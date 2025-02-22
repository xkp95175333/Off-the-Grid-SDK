#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_BarrierLegs

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_BarrierLegs.GA_BarrierLegs_C
// 0x0180 (0x07F8 - 0x0678)
class UGA_BarrierLegs_C final : public UGzGA_BaseLimbAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FHitResult                             Hit;                                               // 0x0680(0x00F8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AGzMultiPartCharacter*                  As_Gz_Multi_Part_Character;                        // 0x0778(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        MaxFlyDist;                                        // 0x0780(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TargetPositionBufferArrea;                         // 0x0788(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGzBodyPartAbilityData_ADrone*          As_Gz_Body_Part_Ability_Data_ADrone;               // 0x0790(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                   NPCType_Tag;                                       // 0x0798(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   HandBoneName;                                      // 0x07A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PlayerPoint;                                       // 0x07B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CenterBarrierPoint;                                // 0x07C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxDistance;                                       // 0x07E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      Object_Types;                                      // 0x07E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_BarrierLegs(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnRelease_519A2D4442E88F21C8407DA5832B1F01(float TimeHeld);
	void SpawnBarrier(const struct FGameplayAbilityTargetDataHandle& HitResult);
	void ValidData_97D13F2F440307B3F6BE0FA4262F6A0A(const struct FGameplayAbilityTargetDataHandle& Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_BarrierLegs_C">();
	}
	static class UGA_BarrierLegs_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_BarrierLegs_C>();
	}
};
static_assert(alignof(UGA_BarrierLegs_C) == 0x000008, "Wrong alignment on UGA_BarrierLegs_C");
static_assert(sizeof(UGA_BarrierLegs_C) == 0x0007F8, "Wrong size on UGA_BarrierLegs_C");
static_assert(offsetof(UGA_BarrierLegs_C, UberGraphFrame) == 0x000678, "Member 'UGA_BarrierLegs_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_BarrierLegs_C, Hit) == 0x000680, "Member 'UGA_BarrierLegs_C::Hit' has a wrong offset!");
static_assert(offsetof(UGA_BarrierLegs_C, As_Gz_Multi_Part_Character) == 0x000778, "Member 'UGA_BarrierLegs_C::As_Gz_Multi_Part_Character' has a wrong offset!");
static_assert(offsetof(UGA_BarrierLegs_C, MaxFlyDist) == 0x000780, "Member 'UGA_BarrierLegs_C::MaxFlyDist' has a wrong offset!");
static_assert(offsetof(UGA_BarrierLegs_C, TargetPositionBufferArrea) == 0x000788, "Member 'UGA_BarrierLegs_C::TargetPositionBufferArrea' has a wrong offset!");
static_assert(offsetof(UGA_BarrierLegs_C, As_Gz_Body_Part_Ability_Data_ADrone) == 0x000790, "Member 'UGA_BarrierLegs_C::As_Gz_Body_Part_Ability_Data_ADrone' has a wrong offset!");
static_assert(offsetof(UGA_BarrierLegs_C, NPCType_Tag) == 0x000798, "Member 'UGA_BarrierLegs_C::NPCType_Tag' has a wrong offset!");
static_assert(offsetof(UGA_BarrierLegs_C, HandBoneName) == 0x0007A8, "Member 'UGA_BarrierLegs_C::HandBoneName' has a wrong offset!");
static_assert(offsetof(UGA_BarrierLegs_C, PlayerPoint) == 0x0007B0, "Member 'UGA_BarrierLegs_C::PlayerPoint' has a wrong offset!");
static_assert(offsetof(UGA_BarrierLegs_C, CenterBarrierPoint) == 0x0007C8, "Member 'UGA_BarrierLegs_C::CenterBarrierPoint' has a wrong offset!");
static_assert(offsetof(UGA_BarrierLegs_C, MaxDistance) == 0x0007E0, "Member 'UGA_BarrierLegs_C::MaxDistance' has a wrong offset!");
static_assert(offsetof(UGA_BarrierLegs_C, Object_Types) == 0x0007E8, "Member 'UGA_BarrierLegs_C::Object_Types' has a wrong offset!");

}

