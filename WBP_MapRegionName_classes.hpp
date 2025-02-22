#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MapRegionName

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "G01_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MapRegionName.WBP_MapRegionName_C
// 0x0010 (0x0318 - 0x0308)
class UWBP_MapRegionName_C final : public UGzMapTextDecoration
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGzTextBlock*                           MapRegionName;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_MapRegionName(int32 EntryPoint);
	void OnTextSet(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MapRegionName_C">();
	}
	static class UWBP_MapRegionName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MapRegionName_C>();
	}
};
static_assert(alignof(UWBP_MapRegionName_C) == 0x000008, "Wrong alignment on UWBP_MapRegionName_C");
static_assert(sizeof(UWBP_MapRegionName_C) == 0x000318, "Wrong size on UWBP_MapRegionName_C");
static_assert(offsetof(UWBP_MapRegionName_C, UberGraphFrame) == 0x000308, "Member 'UWBP_MapRegionName_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MapRegionName_C, MapRegionName) == 0x000310, "Member 'UWBP_MapRegionName_C::MapRegionName' has a wrong offset!");

}

