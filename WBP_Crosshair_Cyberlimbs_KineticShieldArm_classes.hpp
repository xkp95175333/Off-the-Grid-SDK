#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Crosshair_Cyberlimbs_KineticShieldArm

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "G01_structs.hpp"
#include "G01_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Crosshair_Cyberlimbs_KineticShieldArm.WBP_Crosshair_Cyberlimbs_KineticShieldArm_C
// 0x00C0 (0x03B0 - 0x02F0)
class UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C final : public UGzLimbCrosshair
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DMG_MaxBlinking;                                   // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HP_DamageRecieve;                                  // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Crosshair;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGzTextBlock*                           Damage_Text;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DMG_Image;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           DMG_ProgressBar;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HP_Image;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           HP_ProgressBar;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGzTextBlock*                           HP_Text;                                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Crosshair_InputAction_C*           WBP_Crosshair_InputAction;                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGA_KineticShield_C*                    CachedLimbAbility;                                 // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            HP_BarBG_RED;                                      // 0x0350(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            HP_BarBG_White;                                    // 0x0364(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            DMG_BarBG_BLUE;                                    // 0x0378(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_5A86[0x4];                                     // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_KineticShieldComponent_C*           CachedKineticShieldComponent;                      // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            DMG_BarBG_White;                                   // 0x0398(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ChangeProgressBarBackgroundColor(class UProgressBar* Target, const struct FSlateColor& Background_Image_Tint, struct FProgressBarStyle* ProgressBarStyle);
	void ExecuteUbergraph_WBP_Crosshair_Cyberlimbs_KineticShieldArm(int32 EntryPoint);
	void HandleDMG(double Damage, double MaxDamage);
	void HandleHP(double Health_Value, double MaxHealthValue);
	void OnBlast();
	void OnBlastReady();
	void OnLimbActivated(EGzLimbType LimbType, const struct FGzLimbGaugeData& GaugeData);
	void OnLimbActivationEnded(EGzLimbType LimbType);
	void ResetWidget();
	void Set_UI_Health_and_Damage(double Damage, double MaxDamage, double Health, double MaxHealth);
	void ShieldSpawned(class ABP_KineticShield_C* KineticShieldReference);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Crosshair_Cyberlimbs_KineticShieldArm_C">();
	}
	static class UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C>();
	}
};
static_assert(alignof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C) == 0x000008, "Wrong alignment on UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C");
static_assert(sizeof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C) == 0x0003B0, "Wrong size on UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C, UberGraphFrame) == 0x0002F0, "Member 'UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C, DMG_MaxBlinking) == 0x0002F8, "Member 'UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C::DMG_MaxBlinking' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C, HP_DamageRecieve) == 0x000300, "Member 'UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C::HP_DamageRecieve' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C, Crosshair) == 0x000308, "Member 'UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C::Crosshair' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C, Damage_Text) == 0x000310, "Member 'UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C::Damage_Text' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C, DMG_Image) == 0x000318, "Member 'UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C::DMG_Image' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C, DMG_ProgressBar) == 0x000320, "Member 'UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C::DMG_ProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C, HP_Image) == 0x000328, "Member 'UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C::HP_Image' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C, HP_ProgressBar) == 0x000330, "Member 'UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C::HP_ProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C, HP_Text) == 0x000338, "Member 'UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C::HP_Text' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C, WBP_Crosshair_InputAction) == 0x000340, "Member 'UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C::WBP_Crosshair_InputAction' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C, CachedLimbAbility) == 0x000348, "Member 'UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C::CachedLimbAbility' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C, HP_BarBG_RED) == 0x000350, "Member 'UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C::HP_BarBG_RED' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C, HP_BarBG_White) == 0x000364, "Member 'UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C::HP_BarBG_White' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C, DMG_BarBG_BLUE) == 0x000378, "Member 'UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C::DMG_BarBG_BLUE' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C, CachedKineticShieldComponent) == 0x000390, "Member 'UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C::CachedKineticShieldComponent' has a wrong offset!");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C, DMG_BarBG_White) == 0x000398, "Member 'UWBP_Crosshair_Cyberlimbs_KineticShieldArm_C::DMG_BarBG_White' has a wrong offset!");

}

