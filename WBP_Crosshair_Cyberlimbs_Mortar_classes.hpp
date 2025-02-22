#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Crosshair_Cyberlimbs_Mortar

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Crosshair_Cyberlimbs_Mortar.WBP_Crosshair_Cyberlimbs_Mortar_C
// 0x0008 (0x02F8 - 0x02F0)
class UWBP_Crosshair_Cyberlimbs_Mortar_C final : public UGzLimbCrosshair
{
public:
	class UWBP_Crosshair_InputAction_C*           WBP_Crosshair_InputAction;                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Crosshair_Cyberlimbs_Mortar_C">();
	}
	static class UWBP_Crosshair_Cyberlimbs_Mortar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Crosshair_Cyberlimbs_Mortar_C>();
	}
};
static_assert(alignof(UWBP_Crosshair_Cyberlimbs_Mortar_C) == 0x000008, "Wrong alignment on UWBP_Crosshair_Cyberlimbs_Mortar_C");
static_assert(sizeof(UWBP_Crosshair_Cyberlimbs_Mortar_C) == 0x0002F8, "Wrong size on UWBP_Crosshair_Cyberlimbs_Mortar_C");
static_assert(offsetof(UWBP_Crosshair_Cyberlimbs_Mortar_C, WBP_Crosshair_InputAction) == 0x0002F0, "Member 'UWBP_Crosshair_Cyberlimbs_Mortar_C::WBP_Crosshair_InputAction' has a wrong offset!");

}

