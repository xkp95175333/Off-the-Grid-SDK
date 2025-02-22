#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EscapeMenu_LeftVBox

#include "Basic.hpp"

#include "G01_structs.hpp"
#include "G01_classes.hpp"
#include "EscapeMenu_KindOfLeave_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_EscapeMenu_LeftVBox.WBP_EscapeMenu_LeftVBox_C
// 0x00C0 (0x05E8 - 0x0528)
class UWBP_EscapeMenu_LeftVBox_C final : public UGzNavigationWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0528(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Navigation_DarkBG_Button_C*        Back;                                              // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Navigation_DarkBG_Button_C*        LeaveMatch;                                        // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Navigation_DarkBG_Button_C*        LeaveMatch_1;                                      // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Navigation_DarkBG_Button_C*        Scoreboard;                                        // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Navigation_DarkBG_Button_C*        Settings;                                          // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_Scoreboard;                                 // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Navigation_DarkBG_Button_C*        SuicideButton;                                     // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Navigation_DarkBG_Button_C*        SwitchTutorial;                                    // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EscapeMenu_C*                      EscapeMenuREF;                                     // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGzNavigationWidget*                    NewVar;                                            // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ExitKind;                                          // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5090[0x7];                                     // 0x0581(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzNavigationWidget*                    Exit;                                              // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EscapeMenu_KindOfLeave                        Kind_Of_Leave;                                     // 0x0590(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5091[0x7];                                     // 0x0591(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGzTagVisibilitySettings               SuicideButtongTagVisibility;                       // 0x0598(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnCloseAction();
	void OnBackAction();
	void OnAliveStateChanged(class AGzPlayerState* PlayerState);
	void ExecuteUbergraph_WBP_EscapeMenu_LeftVBox(int32 EntryPoint);
	class UWidget* DoCustomNavigation(EUINavigation Param_Navigation);
	void Destruct();
	void Construct();
	void BP_OnActivated();
	void BndEvt__WBP_EscapeMenu_LeftVBox_SwitchTutorial_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_EscapeMenu_LeftVBox_SuicideButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_EscapeMenu_LeftVBox_Settings_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_EscapeMenu_LeftVBox_Scoreboard_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_EscapeMenu_LeftVBox_LeaveMatch_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_EscapeMenu_LeftVBox_LeaveMatch_1_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_EscapeMenu_LeftVBox_Back_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_EscapeMenu_LeftVBox_C">();
	}
	static class UWBP_EscapeMenu_LeftVBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EscapeMenu_LeftVBox_C>();
	}
};
static_assert(alignof(UWBP_EscapeMenu_LeftVBox_C) == 0x000008, "Wrong alignment on UWBP_EscapeMenu_LeftVBox_C");
static_assert(sizeof(UWBP_EscapeMenu_LeftVBox_C) == 0x0005E8, "Wrong size on UWBP_EscapeMenu_LeftVBox_C");
static_assert(offsetof(UWBP_EscapeMenu_LeftVBox_C, UberGraphFrame) == 0x000528, "Member 'UWBP_EscapeMenu_LeftVBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_EscapeMenu_LeftVBox_C, Back) == 0x000530, "Member 'UWBP_EscapeMenu_LeftVBox_C::Back' has a wrong offset!");
static_assert(offsetof(UWBP_EscapeMenu_LeftVBox_C, LeaveMatch) == 0x000538, "Member 'UWBP_EscapeMenu_LeftVBox_C::LeaveMatch' has a wrong offset!");
static_assert(offsetof(UWBP_EscapeMenu_LeftVBox_C, LeaveMatch_1) == 0x000540, "Member 'UWBP_EscapeMenu_LeftVBox_C::LeaveMatch_1' has a wrong offset!");
static_assert(offsetof(UWBP_EscapeMenu_LeftVBox_C, Scoreboard) == 0x000548, "Member 'UWBP_EscapeMenu_LeftVBox_C::Scoreboard' has a wrong offset!");
static_assert(offsetof(UWBP_EscapeMenu_LeftVBox_C, Settings) == 0x000550, "Member 'UWBP_EscapeMenu_LeftVBox_C::Settings' has a wrong offset!");
static_assert(offsetof(UWBP_EscapeMenu_LeftVBox_C, Spacer_Scoreboard) == 0x000558, "Member 'UWBP_EscapeMenu_LeftVBox_C::Spacer_Scoreboard' has a wrong offset!");
static_assert(offsetof(UWBP_EscapeMenu_LeftVBox_C, SuicideButton) == 0x000560, "Member 'UWBP_EscapeMenu_LeftVBox_C::SuicideButton' has a wrong offset!");
static_assert(offsetof(UWBP_EscapeMenu_LeftVBox_C, SwitchTutorial) == 0x000568, "Member 'UWBP_EscapeMenu_LeftVBox_C::SwitchTutorial' has a wrong offset!");
static_assert(offsetof(UWBP_EscapeMenu_LeftVBox_C, EscapeMenuREF) == 0x000570, "Member 'UWBP_EscapeMenu_LeftVBox_C::EscapeMenuREF' has a wrong offset!");
static_assert(offsetof(UWBP_EscapeMenu_LeftVBox_C, NewVar) == 0x000578, "Member 'UWBP_EscapeMenu_LeftVBox_C::NewVar' has a wrong offset!");
static_assert(offsetof(UWBP_EscapeMenu_LeftVBox_C, ExitKind) == 0x000580, "Member 'UWBP_EscapeMenu_LeftVBox_C::ExitKind' has a wrong offset!");
static_assert(offsetof(UWBP_EscapeMenu_LeftVBox_C, Exit) == 0x000588, "Member 'UWBP_EscapeMenu_LeftVBox_C::Exit' has a wrong offset!");
static_assert(offsetof(UWBP_EscapeMenu_LeftVBox_C, Kind_Of_Leave) == 0x000590, "Member 'UWBP_EscapeMenu_LeftVBox_C::Kind_Of_Leave' has a wrong offset!");
static_assert(offsetof(UWBP_EscapeMenu_LeftVBox_C, SuicideButtongTagVisibility) == 0x000598, "Member 'UWBP_EscapeMenu_LeftVBox_C::SuicideButtongTagVisibility' has a wrong offset!");

}

