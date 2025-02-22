#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MapMarker_Location_MortarTablet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "G01_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MapMarker_Location_MortarTablet.WBP_MapMarker_Location_MortarTablet_C
// 0x0020 (0x03C0 - 0x03A0)
class UWBP_MapMarker_Location_MortarTablet_C final : public UGzMapMarkerWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Placement;                                         // 0x03A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Rotation;                                          // 0x03B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 TargetMarker;                                      // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_MapMarker_Location_MortarTablet(int32 EntryPoint);
	void Finished_7621B59542BBBC744749D4AE23B44E92();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MapMarker_Location_MortarTablet_C">();
	}
	static class UWBP_MapMarker_Location_MortarTablet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MapMarker_Location_MortarTablet_C>();
	}
};
static_assert(alignof(UWBP_MapMarker_Location_MortarTablet_C) == 0x000008, "Wrong alignment on UWBP_MapMarker_Location_MortarTablet_C");
static_assert(sizeof(UWBP_MapMarker_Location_MortarTablet_C) == 0x0003C0, "Wrong size on UWBP_MapMarker_Location_MortarTablet_C");
static_assert(offsetof(UWBP_MapMarker_Location_MortarTablet_C, UberGraphFrame) == 0x0003A0, "Member 'UWBP_MapMarker_Location_MortarTablet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Location_MortarTablet_C, Placement) == 0x0003A8, "Member 'UWBP_MapMarker_Location_MortarTablet_C::Placement' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Location_MortarTablet_C, Rotation) == 0x0003B0, "Member 'UWBP_MapMarker_Location_MortarTablet_C::Rotation' has a wrong offset!");
static_assert(offsetof(UWBP_MapMarker_Location_MortarTablet_C, TargetMarker) == 0x0003B8, "Member 'UWBP_MapMarker_Location_MortarTablet_C::TargetMarker' has a wrong offset!");

}

