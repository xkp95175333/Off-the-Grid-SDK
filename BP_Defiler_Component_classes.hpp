#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Defiler_Component

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Defiler_Component.BP_Defiler_Component_C
// 0x00C8 (0x01C8 - 0x0100)
class UBP_Defiler_Component_C : public UGzLimbDoubleAbilityComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0100(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AGzMultiPartCharacter*                  As_Gz_Multi_Part_Character;                        // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UGzAsyncTaskGameplayTagAddedRemoved*    ListenTagActiveTask;                               // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDurationEnd;                                     // 0x0118(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Charges;                                           // 0x0128(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int32                                         ChargesTotal;                                      // 0x012C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DurationTotal;                                     // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DurationCurrent;                                   // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChargesChanged;                                  // 0x0140(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        AbilityDataTapeRadius;                             // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AbilityDataTapePeriod;                             // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UGzProgressLogEntryWidget>  Progress_Widget_Class;                             // 0x0160(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         LaunchDelay;                                       // 0x0168(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FireRate;                                          // 0x016C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  BlockingTags;                                      // 0x0170(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ProgressUIHandle;                                  // 0x0190(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6569[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ReloadCurrent;                                     // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Defiler_VisionComponent_C*          VisionComponent;                                   // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGzBodyPartAbilityData_Defiler*         As_Gz_Body_Part_Ability_Data_Defiler;              // 0x01A8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   SocketName;                                        // 0x01B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            DefilerBuffEffect;                                 // 0x01B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVar;                                            // 0x01C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyDefilerBuffEffect();
	void CancelProgress();
	void CheckReload(bool* Reloaded);
	void Enable_Vision();
	void End();
	void EndOnClient();
	void ExecuteUbergraph_BP_Defiler_Component(int32 EntryPoint);
	void IsCharged(bool* NewParam);
	void OnChargesChanged__DelegateSignature(int32 Param_Charges);
	void OnDurationEnd__DelegateSignature();
	void OnRep_Charges();
	void OnTagAdded_E4CFBB254667CBC696E1509E34080D91(const struct FGameplayTag& Tag);
	void OnTagRemoved_E4CFBB254667CBC696E1509E34080D91(const struct FGameplayTag& Tag);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void RemoveDefilerBuffEffect();
	void Request_Spawn_Tape();
	void SetCurrentCharges(int32 Param_Charges);
	void SpawnTapeOnServer(const struct FVector& Spawn_Transform_Location, class AActor* Hit_Actor, const struct FVector& HandLocation, const struct FVector& InNormal);
	void SpendCharge(const struct FVector& Spawn_Transform_Location, class AActor* Hit_Actor, const struct FVector& HandLocation, const struct FVector& InNormal, bool* ChargesEnd);
	void Start();
	void StartOnClient();
	void UpdateDuration();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Defiler_Component_C">();
	}
	static class UBP_Defiler_Component_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Defiler_Component_C>();
	}
};
static_assert(alignof(UBP_Defiler_Component_C) == 0x000008, "Wrong alignment on UBP_Defiler_Component_C");
static_assert(sizeof(UBP_Defiler_Component_C) == 0x0001C8, "Wrong size on UBP_Defiler_Component_C");
static_assert(offsetof(UBP_Defiler_Component_C, UberGraphFrame) == 0x000100, "Member 'UBP_Defiler_Component_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, As_Gz_Multi_Part_Character) == 0x000108, "Member 'UBP_Defiler_Component_C::As_Gz_Multi_Part_Character' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, ListenTagActiveTask) == 0x000110, "Member 'UBP_Defiler_Component_C::ListenTagActiveTask' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, OnDurationEnd) == 0x000118, "Member 'UBP_Defiler_Component_C::OnDurationEnd' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, Charges) == 0x000128, "Member 'UBP_Defiler_Component_C::Charges' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, ChargesTotal) == 0x00012C, "Member 'UBP_Defiler_Component_C::ChargesTotal' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, DurationTotal) == 0x000130, "Member 'UBP_Defiler_Component_C::DurationTotal' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, DurationCurrent) == 0x000138, "Member 'UBP_Defiler_Component_C::DurationCurrent' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, OnChargesChanged) == 0x000140, "Member 'UBP_Defiler_Component_C::OnChargesChanged' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, AbilityDataTapeRadius) == 0x000150, "Member 'UBP_Defiler_Component_C::AbilityDataTapeRadius' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, AbilityDataTapePeriod) == 0x000158, "Member 'UBP_Defiler_Component_C::AbilityDataTapePeriod' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, Progress_Widget_Class) == 0x000160, "Member 'UBP_Defiler_Component_C::Progress_Widget_Class' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, LaunchDelay) == 0x000168, "Member 'UBP_Defiler_Component_C::LaunchDelay' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, FireRate) == 0x00016C, "Member 'UBP_Defiler_Component_C::FireRate' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, BlockingTags) == 0x000170, "Member 'UBP_Defiler_Component_C::BlockingTags' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, ProgressUIHandle) == 0x000190, "Member 'UBP_Defiler_Component_C::ProgressUIHandle' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, ReloadCurrent) == 0x000198, "Member 'UBP_Defiler_Component_C::ReloadCurrent' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, VisionComponent) == 0x0001A0, "Member 'UBP_Defiler_Component_C::VisionComponent' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, As_Gz_Body_Part_Ability_Data_Defiler) == 0x0001A8, "Member 'UBP_Defiler_Component_C::As_Gz_Body_Part_Ability_Data_Defiler' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, SocketName) == 0x0001B0, "Member 'UBP_Defiler_Component_C::SocketName' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, DefilerBuffEffect) == 0x0001B8, "Member 'UBP_Defiler_Component_C::DefilerBuffEffect' has a wrong offset!");
static_assert(offsetof(UBP_Defiler_Component_C, NewVar) == 0x0001C0, "Member 'UBP_Defiler_Component_C::NewVar' has a wrong offset!");

}

