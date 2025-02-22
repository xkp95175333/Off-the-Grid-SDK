#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTService_CheckWeaponKind

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTService_CheckWeaponKind.BTService_CheckWeaponKind_C
// 0x0030 (0x00C8 - 0x0098)
class UBTService_CheckWeaponKind_C final : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 WeaponArchetype;                                   // 0x00A0(0x0028)(Edit, BlueprintVisible)

public:
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTService_CheckWeaponKind(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTService_CheckWeaponKind_C">();
	}
	static class UBTService_CheckWeaponKind_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTService_CheckWeaponKind_C>();
	}
};
static_assert(alignof(UBTService_CheckWeaponKind_C) == 0x000008, "Wrong alignment on UBTService_CheckWeaponKind_C");
static_assert(sizeof(UBTService_CheckWeaponKind_C) == 0x0000C8, "Wrong size on UBTService_CheckWeaponKind_C");
static_assert(offsetof(UBTService_CheckWeaponKind_C, UberGraphFrame) == 0x000098, "Member 'UBTService_CheckWeaponKind_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTService_CheckWeaponKind_C, WeaponArchetype) == 0x0000A0, "Member 'UBTService_CheckWeaponKind_C::WeaponArchetype' has a wrong offset!");

}

