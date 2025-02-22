#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_StageTimer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StageTimer.WBP_StageTimer_C
// 0x0290 (0x0570 - 0x02E0)
class UWBP_StageTimer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BorderBackground;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DeploymentIcon;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                StageNumberBorder;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           StageTimer;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGzTextBlock*                           Timer_GzText;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGzTextBlock*                           ZoneNumber_GzText;                                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AGzPlayerState*                         PlayerState;                                       // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AGzMultiStageGameState*                 GameModeState;                                     // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         PrematchMatch_Start_Countdown_Duration;            // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BattleRoyaleOverloadStarted;                       // 0x0334(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E38[0x3];                                     // 0x0335(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           UpdateTimeTimer;                                   // 0x0338(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ShowBorderTimeMinute;                              // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableTimeBorder;                                 // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E39[0x3];                                     // 0x0349(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CurrentTimeState;                                  // 0x034C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E3A[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGameplayTag, struct FSlateBrush> IconState;                                         // 0x0358(0x0050)(Edit, BlueprintVisible)
	uint8                                         Pad_6E3B[0x8];                                     // 0x03A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            OverloadIsCloseBrush;                              // 0x03B0(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            CurrentStageNumberBrush;                           // 0x0480(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bShouldShowBorder;                                 // 0x0550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E3C[0x7];                                     // 0x0551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DeploymentPawn_C*                   As_BP_Deployment_Pawn;                             // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerCharacter_C*                  As_BP_Player_Character;                            // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ConvertTagToTimerState(const struct FGameplayTagContainer& TagContainer, struct FGameplayTag* Array_Element);
	void Destruct();
	void ExecuteUbergraph_WBP_StageTimer(int32 EntryPoint);
	double GetDeploymentTime();
	void IncrementStageNumber(class AGzGameModeSubsystem* Subsystem);
	void IsBorderVisibile(bool* Visible);
	void IsPreMatchActiveted(bool* Activeted);
	void OnGlobalOverloadActivated_Event(bool bActivated);
	void OnInitialized();
	void OnReady_74445F76405545A9179F5F9507DC42FC(class AGzGameModeSubsystem* Subsystem);
	void PreConstruct(bool IsDesignTime);
	void SetCurrentStateIcon();
	void SetCurrentTimeState(const struct FGameplayTag& Selection);
	void SetDeploymentImage(const struct FGameplayTag& A);
	void SetFontStyle(const class FText& Text, class FText* Result);
	void SetTimerText(double Value);
	void ShowBorder(bool Show);
	void UpdatePhaseTimer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StageTimer_C">();
	}
	static class UWBP_StageTimer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StageTimer_C>();
	}
};
static_assert(alignof(UWBP_StageTimer_C) == 0x000010, "Wrong alignment on UWBP_StageTimer_C");
static_assert(sizeof(UWBP_StageTimer_C) == 0x000570, "Wrong size on UWBP_StageTimer_C");
static_assert(offsetof(UWBP_StageTimer_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_StageTimer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, BorderBackground) == 0x0002E8, "Member 'UWBP_StageTimer_C::BorderBackground' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, DeploymentIcon) == 0x0002F0, "Member 'UWBP_StageTimer_C::DeploymentIcon' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, StageNumberBorder) == 0x0002F8, "Member 'UWBP_StageTimer_C::StageNumberBorder' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, StageTimer) == 0x000300, "Member 'UWBP_StageTimer_C::StageTimer' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, Timer_GzText) == 0x000308, "Member 'UWBP_StageTimer_C::Timer_GzText' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, WidgetSwitcher_0) == 0x000310, "Member 'UWBP_StageTimer_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, ZoneNumber_GzText) == 0x000318, "Member 'UWBP_StageTimer_C::ZoneNumber_GzText' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, PlayerState) == 0x000320, "Member 'UWBP_StageTimer_C::PlayerState' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, GameModeState) == 0x000328, "Member 'UWBP_StageTimer_C::GameModeState' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, PrematchMatch_Start_Countdown_Duration) == 0x000330, "Member 'UWBP_StageTimer_C::PrematchMatch_Start_Countdown_Duration' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, BattleRoyaleOverloadStarted) == 0x000334, "Member 'UWBP_StageTimer_C::BattleRoyaleOverloadStarted' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, UpdateTimeTimer) == 0x000338, "Member 'UWBP_StageTimer_C::UpdateTimeTimer' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, ShowBorderTimeMinute) == 0x000340, "Member 'UWBP_StageTimer_C::ShowBorderTimeMinute' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, bEnableTimeBorder) == 0x000348, "Member 'UWBP_StageTimer_C::bEnableTimeBorder' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, CurrentTimeState) == 0x00034C, "Member 'UWBP_StageTimer_C::CurrentTimeState' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, IconState) == 0x000358, "Member 'UWBP_StageTimer_C::IconState' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, OverloadIsCloseBrush) == 0x0003B0, "Member 'UWBP_StageTimer_C::OverloadIsCloseBrush' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, CurrentStageNumberBrush) == 0x000480, "Member 'UWBP_StageTimer_C::CurrentStageNumberBrush' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, bShouldShowBorder) == 0x000550, "Member 'UWBP_StageTimer_C::bShouldShowBorder' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, As_BP_Deployment_Pawn) == 0x000558, "Member 'UWBP_StageTimer_C::As_BP_Deployment_Pawn' has a wrong offset!");
static_assert(offsetof(UWBP_StageTimer_C, As_BP_Player_Character) == 0x000560, "Member 'UWBP_StageTimer_C::As_BP_Player_Character' has a wrong offset!");

}

