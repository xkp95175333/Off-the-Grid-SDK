#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainNotification_SecondaryElementText

#include "Basic.hpp"

#include "G01_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MainNotification_SecondaryElementText.WBP_MainNotification_SecondaryElementText_C
// 0x0008 (0x0310 - 0x0308)
class UWBP_MainNotification_SecondaryElementText_C final : public UGzGameNotificationHeader
{
public:
	class UGzTextBlock*                           SecondaryMessage_GzText;                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UGzTextBlock* GetNotificationText();
	bool UpdateHeaderNotification(const class UGzGameNotificationDisplayData* InNotificationData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MainNotification_SecondaryElementText_C">();
	}
	static class UWBP_MainNotification_SecondaryElementText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MainNotification_SecondaryElementText_C>();
	}
};
static_assert(alignof(UWBP_MainNotification_SecondaryElementText_C) == 0x000008, "Wrong alignment on UWBP_MainNotification_SecondaryElementText_C");
static_assert(sizeof(UWBP_MainNotification_SecondaryElementText_C) == 0x000310, "Wrong size on UWBP_MainNotification_SecondaryElementText_C");
static_assert(offsetof(UWBP_MainNotification_SecondaryElementText_C, SecondaryMessage_GzText) == 0x000308, "Member 'UWBP_MainNotification_SecondaryElementText_C::SecondaryMessage_GzText' has a wrong offset!");

}

