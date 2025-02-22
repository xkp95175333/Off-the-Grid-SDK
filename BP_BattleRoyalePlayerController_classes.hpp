#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleRoyalePlayerController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "G01_structs.hpp"
#include "G01_classes.hpp"
#include "Enum_MatchScreens_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleRoyalePlayerController.BP_BattleRoyalePlayerController_C
// 0x07E8 (0x1700 - 0x0F18)
class ABP_BattleRoyalePlayerController_C final : public AGzBattleRoyalePlayerController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0F18(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGzGamepadFeedbackController*           GzGamepadFeedbackController;                       // 0x0F20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGzNavigationWidget*                    EscapeMenu;                                        // 0x0F28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGzSoundStateKey                       RedeploymentSoundState;                            // 0x0F30(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UGzNavigationWidget*                    InventoryScreen;                                   // 0x0F38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGzNavigationWidget*                    MapScreen;                                         // 0x0F40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGzNavigationWidget*                    QuickOrderScreen;                                  // 0x0F48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           PingWheelInputCheckTimer;                          // 0x0F50(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	Enum_MatchScreens                             LastRequestedMatchSCreen;                          // 0x0F58(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D1A[0x7];                                     // 0x0F59(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzNavigationWidget*                    ContainerLoadoutScreen;                            // 0x0F60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class APostProcessVolume*, struct FPostProcessSettings> SaveOriginalPPSettings;                            // 0x0F68(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class APostProcessVolume*                     MainPostProcess;                                   // 0x0FB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPostProcessSettings                   MainPP_OriginalSettings;                           // 0x0FC0(0x0720)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        PPValueStep;                                       // 0x16E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Gamma;                                             // 0x16E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Cotrast;                                           // 0x16F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Saturation;                                        // 0x16F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ToggleScreen(Enum_MatchScreens MatchScreen);
	void SelectLastActiveZone(class FName ZoneName, const int32 SelectedLastZoneIndex);
	void RespawnPlayerFromState(TArray<class AGzPlayerState*>& Teammates, const struct FTransform& SpawnTransform);
	void RemoveWidgetFromLayer(class UGzNavigationWidget* WidgetToRemove);
	void ReceiveBeginPlay();
	void OpenScreen(Enum_MatchScreens MatchScreen);
	void OpenPingWheel();
	void OnScreenLoaded(class UGzNavigationWidget* NavigationWidget);
	void OnCinematicModeChanged(bool bNewCinematicMode);
	void K2_DisplayDamage(const struct FDamageDisplayData& DamageData);
	void InpActEvt_IA_UI_VoiceChat_K2Node_EnhancedInputActionEvent_6(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_UI_VoiceChat_K2Node_EnhancedInputActionEvent_5(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_UI_QuickOrderMenu_K2Node_EnhancedInputActionEvent_9(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_DebugPPSaturationInc_K2Node_EnhancedInputActionEvent_13(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_DebugPPSaturationDec_K2Node_EnhancedInputActionEvent_14(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_DebugPPGammaInc_K2Node_EnhancedInputActionEvent_17(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_DebugPPGammaDec_K2Node_EnhancedInputActionEvent_18(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_DebugPPContrastInc_K2Node_EnhancedInputActionEvent_16(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_DebugPPContrastDec_K2Node_EnhancedInputActionEvent_15(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_UI_QuickOrderMenu_K2Node_EnhancedInputActionEvent_10(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_UI_MapScreen_K2Node_EnhancedInputActionEvent_11(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_UI_Inventory_K2Node_EnhancedInputActionEvent_12(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_UI_EscapeMenu_K2Node_EnhancedInputActionEvent_8(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_UI_EscapeMenu_K2Node_EnhancedInputActionEvent_7(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_PPMenu_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_DebugMenu_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_ConsumSlot2_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_CtrlAltPlusShiftPlus_R_K2Node_InputDebugKeyEvent_0(const struct FKey& Key, const struct FInputActionValue& ActionValue);
	void HasValidMapData(bool* DoesLevelHaveValidMapData);
	void InpActEvt_IA_Ping_Wheel_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_EmotionsWheel_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void ExecuteUbergraph_BP_BattleRoyalePlayerController(int32 EntryPoint);
	void CreateNewPing(const struct FGameplayTag& PingType);
	void CheckinputHoldForPingWheel();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleRoyalePlayerController_C">();
	}
	static class ABP_BattleRoyalePlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleRoyalePlayerController_C>();
	}
};
static_assert(alignof(ABP_BattleRoyalePlayerController_C) == 0x000010, "Wrong alignment on ABP_BattleRoyalePlayerController_C");
static_assert(sizeof(ABP_BattleRoyalePlayerController_C) == 0x001700, "Wrong size on ABP_BattleRoyalePlayerController_C");
static_assert(offsetof(ABP_BattleRoyalePlayerController_C, UberGraphFrame) == 0x000F18, "Member 'ABP_BattleRoyalePlayerController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BattleRoyalePlayerController_C, GzGamepadFeedbackController) == 0x000F20, "Member 'ABP_BattleRoyalePlayerController_C::GzGamepadFeedbackController' has a wrong offset!");
static_assert(offsetof(ABP_BattleRoyalePlayerController_C, EscapeMenu) == 0x000F28, "Member 'ABP_BattleRoyalePlayerController_C::EscapeMenu' has a wrong offset!");
static_assert(offsetof(ABP_BattleRoyalePlayerController_C, RedeploymentSoundState) == 0x000F30, "Member 'ABP_BattleRoyalePlayerController_C::RedeploymentSoundState' has a wrong offset!");
static_assert(offsetof(ABP_BattleRoyalePlayerController_C, InventoryScreen) == 0x000F38, "Member 'ABP_BattleRoyalePlayerController_C::InventoryScreen' has a wrong offset!");
static_assert(offsetof(ABP_BattleRoyalePlayerController_C, MapScreen) == 0x000F40, "Member 'ABP_BattleRoyalePlayerController_C::MapScreen' has a wrong offset!");
static_assert(offsetof(ABP_BattleRoyalePlayerController_C, QuickOrderScreen) == 0x000F48, "Member 'ABP_BattleRoyalePlayerController_C::QuickOrderScreen' has a wrong offset!");
static_assert(offsetof(ABP_BattleRoyalePlayerController_C, PingWheelInputCheckTimer) == 0x000F50, "Member 'ABP_BattleRoyalePlayerController_C::PingWheelInputCheckTimer' has a wrong offset!");
static_assert(offsetof(ABP_BattleRoyalePlayerController_C, LastRequestedMatchSCreen) == 0x000F58, "Member 'ABP_BattleRoyalePlayerController_C::LastRequestedMatchSCreen' has a wrong offset!");
static_assert(offsetof(ABP_BattleRoyalePlayerController_C, ContainerLoadoutScreen) == 0x000F60, "Member 'ABP_BattleRoyalePlayerController_C::ContainerLoadoutScreen' has a wrong offset!");
static_assert(offsetof(ABP_BattleRoyalePlayerController_C, SaveOriginalPPSettings) == 0x000F68, "Member 'ABP_BattleRoyalePlayerController_C::SaveOriginalPPSettings' has a wrong offset!");
static_assert(offsetof(ABP_BattleRoyalePlayerController_C, MainPostProcess) == 0x000FB8, "Member 'ABP_BattleRoyalePlayerController_C::MainPostProcess' has a wrong offset!");
static_assert(offsetof(ABP_BattleRoyalePlayerController_C, MainPP_OriginalSettings) == 0x000FC0, "Member 'ABP_BattleRoyalePlayerController_C::MainPP_OriginalSettings' has a wrong offset!");
static_assert(offsetof(ABP_BattleRoyalePlayerController_C, PPValueStep) == 0x0016E0, "Member 'ABP_BattleRoyalePlayerController_C::PPValueStep' has a wrong offset!");
static_assert(offsetof(ABP_BattleRoyalePlayerController_C, Gamma) == 0x0016E8, "Member 'ABP_BattleRoyalePlayerController_C::Gamma' has a wrong offset!");
static_assert(offsetof(ABP_BattleRoyalePlayerController_C, Cotrast) == 0x0016F0, "Member 'ABP_BattleRoyalePlayerController_C::Cotrast' has a wrong offset!");
static_assert(offsetof(ABP_BattleRoyalePlayerController_C, Saturation) == 0x0016F8, "Member 'ABP_BattleRoyalePlayerController_C::Saturation' has a wrong offset!");

}

