#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoadingScreen_AssetLoading

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LoadingScreen_AssetLoading.WBP_LoadingScreen_AssetLoading_C
// 0x0018 (0x0348 - 0x0330)
class UWBP_LoadingScreen_AssetLoading_C final : public UGzLoadingScreenView
{
public:
	class UImage*                                 Background;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoadingSpinner_C*                  WBP_LoadingSpinner;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VoiceChatStateWidget_C*            WBP_VoiceChatStateWidget;                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LoadingScreen_AssetLoading_C">();
	}
	static class UWBP_LoadingScreen_AssetLoading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LoadingScreen_AssetLoading_C>();
	}
};
static_assert(alignof(UWBP_LoadingScreen_AssetLoading_C) == 0x000008, "Wrong alignment on UWBP_LoadingScreen_AssetLoading_C");
static_assert(sizeof(UWBP_LoadingScreen_AssetLoading_C) == 0x000348, "Wrong size on UWBP_LoadingScreen_AssetLoading_C");
static_assert(offsetof(UWBP_LoadingScreen_AssetLoading_C, Background) == 0x000330, "Member 'UWBP_LoadingScreen_AssetLoading_C::Background' has a wrong offset!");
static_assert(offsetof(UWBP_LoadingScreen_AssetLoading_C, WBP_LoadingSpinner) == 0x000338, "Member 'UWBP_LoadingScreen_AssetLoading_C::WBP_LoadingSpinner' has a wrong offset!");
static_assert(offsetof(UWBP_LoadingScreen_AssetLoading_C, WBP_VoiceChatStateWidget) == 0x000340, "Member 'UWBP_LoadingScreen_AssetLoading_C::WBP_VoiceChatStateWidget' has a wrong offset!");

}

