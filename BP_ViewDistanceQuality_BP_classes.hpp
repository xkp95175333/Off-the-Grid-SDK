#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ViewDistanceQuality_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "G01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ViewDistanceQuality_BP.BP_ViewDistanceQuality_BP_C
// 0x0018 (0x0040 - 0x0028)
class UBP_ViewDistanceQuality_BP_C final : public UGzGameSettingDiscreteDataSourceBP
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FString>                         Qualities;                                         // 0x0030(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_ViewDistanceQuality_BP(int32 EntryPoint);
	class FString GetValue();
	void SetValue(const class FString& NewValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ViewDistanceQuality_BP_C">();
	}
	static class UBP_ViewDistanceQuality_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ViewDistanceQuality_BP_C>();
	}
};
static_assert(alignof(UBP_ViewDistanceQuality_BP_C) == 0x000008, "Wrong alignment on UBP_ViewDistanceQuality_BP_C");
static_assert(sizeof(UBP_ViewDistanceQuality_BP_C) == 0x000040, "Wrong size on UBP_ViewDistanceQuality_BP_C");
static_assert(offsetof(UBP_ViewDistanceQuality_BP_C, UberGraphFrame) == 0x000028, "Member 'UBP_ViewDistanceQuality_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ViewDistanceQuality_BP_C, Qualities) == 0x000030, "Member 'UBP_ViewDistanceQuality_BP_C::Qualities' has a wrong offset!");

}

