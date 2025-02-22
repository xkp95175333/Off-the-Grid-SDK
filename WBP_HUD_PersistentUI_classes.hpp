#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_PersistentUI

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HUD_PersistentUI.WBP_HUD_PersistentUI_C
// 0x0038 (0x0318 - 0x02E0)
class UWBP_HUD_PersistentUI_C final : public UUserWidget
{
public:
	class UWBP_DeploymentWidget_C*                WBP_DeploymentWidget;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EventLogHUD_C*                     WBP_EventLogHUD;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_EventStatus_C*                 WBP_HUD_EventStatus;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputActionCallDrone_C*            WBP_InputActionCallDrone;                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_JetpackAction_Wrapper_C*           WBP_JetpackAction_Wrapper_C_0;                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StatusEffect_Container_C*          WBP_StatusEffect_Container;                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TutorialLoadoutButton_C*           WBP_TutorialLoadoutButton_147;                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HUD_PersistentUI_C">();
	}
	static class UWBP_HUD_PersistentUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HUD_PersistentUI_C>();
	}
};
static_assert(alignof(UWBP_HUD_PersistentUI_C) == 0x000008, "Wrong alignment on UWBP_HUD_PersistentUI_C");
static_assert(sizeof(UWBP_HUD_PersistentUI_C) == 0x000318, "Wrong size on UWBP_HUD_PersistentUI_C");
static_assert(offsetof(UWBP_HUD_PersistentUI_C, WBP_DeploymentWidget) == 0x0002E0, "Member 'UWBP_HUD_PersistentUI_C::WBP_DeploymentWidget' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_PersistentUI_C, WBP_EventLogHUD) == 0x0002E8, "Member 'UWBP_HUD_PersistentUI_C::WBP_EventLogHUD' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_PersistentUI_C, WBP_HUD_EventStatus) == 0x0002F0, "Member 'UWBP_HUD_PersistentUI_C::WBP_HUD_EventStatus' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_PersistentUI_C, WBP_InputActionCallDrone) == 0x0002F8, "Member 'UWBP_HUD_PersistentUI_C::WBP_InputActionCallDrone' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_PersistentUI_C, WBP_JetpackAction_Wrapper_C_0) == 0x000300, "Member 'UWBP_HUD_PersistentUI_C::WBP_JetpackAction_Wrapper_C_0' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_PersistentUI_C, WBP_StatusEffect_Container) == 0x000308, "Member 'UWBP_HUD_PersistentUI_C::WBP_StatusEffect_Container' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_PersistentUI_C, WBP_TutorialLoadoutButton_147) == 0x000310, "Member 'UWBP_HUD_PersistentUI_C::WBP_TutorialLoadoutButton_147' has a wrong offset!");

}

