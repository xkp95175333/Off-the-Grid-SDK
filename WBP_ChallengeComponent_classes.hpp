#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ChallengeComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ChallengeComponent.WBP_ChallengeComponent_C
// 0x0070 (0x0350 - 0x02E0)
class UWBP_ChallengeComponent_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_NavigationButton_NoPadding_C*      Daily_Button;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        DailyWeeklyChallenges_Switcher;                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NavigationButton_NoPadding_C*      Monthly_Button;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_ClientRegisteredTrialsDaily;                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_ClientRegisteredTrialsMonthly;                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_ClientRegisteredTrialsWeekly;                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NavigationButton_NoPadding_C*      Weekly_Button;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGzTrialsControllerComponent*           LocalTrialsComponent;                              // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UGzTrialTemplate*>               RegisteredTrials;                                  // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWBP_ChallengeEntry_C*>          RegisteredTrialEntries;                            // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void OnChallengeProgressed(const struct FGzGameplayTrial& ProgresseddChallenge);
	void OnChallengeCompleted(const class UGzChallengeTemplate* CompletedChallengeTemplate);
	void OnChallengeAdded(const struct FGzGameplayTrial& AddedChallenge);
	void OnAchievementStageCompleted(const class UGzAchievementTemplate* CompletedAchievementTemplate, int32 CompletedStageIdx);
	void ExecuteUbergraph_WBP_ChallengeComponent(int32 EntryPoint);
	void Destruct();
	void Construct();
	void BndEvt__WBP_ChallengeComponent_Weekly_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ChallengeComponent_Monthly_Button_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ChallengeComponent_Daily_Button_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void AddOrUpdateTrialEntry(struct FGzGameplayTrial& TrialToProcess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ChallengeComponent_C">();
	}
	static class UWBP_ChallengeComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ChallengeComponent_C>();
	}
};
static_assert(alignof(UWBP_ChallengeComponent_C) == 0x000008, "Wrong alignment on UWBP_ChallengeComponent_C");
static_assert(sizeof(UWBP_ChallengeComponent_C) == 0x000350, "Wrong size on UWBP_ChallengeComponent_C");
static_assert(offsetof(UWBP_ChallengeComponent_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_ChallengeComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengeComponent_C, Daily_Button) == 0x0002E8, "Member 'UWBP_ChallengeComponent_C::Daily_Button' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengeComponent_C, DailyWeeklyChallenges_Switcher) == 0x0002F0, "Member 'UWBP_ChallengeComponent_C::DailyWeeklyChallenges_Switcher' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengeComponent_C, Monthly_Button) == 0x0002F8, "Member 'UWBP_ChallengeComponent_C::Monthly_Button' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengeComponent_C, VB_ClientRegisteredTrialsDaily) == 0x000300, "Member 'UWBP_ChallengeComponent_C::VB_ClientRegisteredTrialsDaily' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengeComponent_C, VB_ClientRegisteredTrialsMonthly) == 0x000308, "Member 'UWBP_ChallengeComponent_C::VB_ClientRegisteredTrialsMonthly' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengeComponent_C, VB_ClientRegisteredTrialsWeekly) == 0x000310, "Member 'UWBP_ChallengeComponent_C::VB_ClientRegisteredTrialsWeekly' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengeComponent_C, VerticalBox_0) == 0x000318, "Member 'UWBP_ChallengeComponent_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengeComponent_C, Weekly_Button) == 0x000320, "Member 'UWBP_ChallengeComponent_C::Weekly_Button' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengeComponent_C, LocalTrialsComponent) == 0x000328, "Member 'UWBP_ChallengeComponent_C::LocalTrialsComponent' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengeComponent_C, RegisteredTrials) == 0x000330, "Member 'UWBP_ChallengeComponent_C::RegisteredTrials' has a wrong offset!");
static_assert(offsetof(UWBP_ChallengeComponent_C, RegisteredTrialEntries) == 0x000340, "Member 'UWBP_ChallengeComponent_C::RegisteredTrialEntries' has a wrong offset!");

}

