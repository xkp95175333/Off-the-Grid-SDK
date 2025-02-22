#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TTR_CompletedHexExtraction_Tracker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "G01_structs.hpp"
#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TTR_CompletedHexExtraction_Tracker.TTR_CompletedHexExtraction_Tracker_C
// 0x0008 (0x0040 - 0x0038)
class UTTR_CompletedHexExtraction_Tracker_C final : public UGzTrialTracker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_TTR_CompletedHexExtraction_Tracker(int32 EntryPoint);
	void OnHexExtractionCompleted(const class UGzGameMessage* Message);
	void OnTrackingStarted();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TTR_CompletedHexExtraction_Tracker_C">();
	}
	static class UTTR_CompletedHexExtraction_Tracker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTTR_CompletedHexExtraction_Tracker_C>();
	}
};
static_assert(alignof(UTTR_CompletedHexExtraction_Tracker_C) == 0x000008, "Wrong alignment on UTTR_CompletedHexExtraction_Tracker_C");
static_assert(sizeof(UTTR_CompletedHexExtraction_Tracker_C) == 0x000040, "Wrong size on UTTR_CompletedHexExtraction_Tracker_C");
static_assert(offsetof(UTTR_CompletedHexExtraction_Tracker_C, UberGraphFrame) == 0x000038, "Member 'UTTR_CompletedHexExtraction_Tracker_C::UberGraphFrame' has a wrong offset!");

}

