#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SquadScreen_Connection

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "G01_structs.hpp"
#include "G01_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SquadScreen_Connection.WBP_SquadScreen_Connection_C
// 0x0020 (0x1650 - 0x1630)
class UWBP_SquadScreen_Connection_C final : public UGzCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1630(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 StatusImage;                                       // 0x1638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AGzPlayerState*                         PS;                                                // 0x1640(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void SetLeftMatch();
	void SetDisconnected();
	void SetConnected();
	void OnConnectionChanged_Event(class AGzPlayerState* PlayerState);
	void Init(class AGzPlayerState* Param_PS);
	void ExecuteUbergraph_WBP_SquadScreen_Connection(int32 EntryPoint);
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SquadScreen_Connection_C">();
	}
	static class UWBP_SquadScreen_Connection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SquadScreen_Connection_C>();
	}
};
static_assert(alignof(UWBP_SquadScreen_Connection_C) == 0x000010, "Wrong alignment on UWBP_SquadScreen_Connection_C");
static_assert(sizeof(UWBP_SquadScreen_Connection_C) == 0x001650, "Wrong size on UWBP_SquadScreen_Connection_C");
static_assert(offsetof(UWBP_SquadScreen_Connection_C, UberGraphFrame) == 0x001630, "Member 'UWBP_SquadScreen_Connection_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SquadScreen_Connection_C, StatusImage) == 0x001638, "Member 'UWBP_SquadScreen_Connection_C::StatusImage' has a wrong offset!");
static_assert(offsetof(UWBP_SquadScreen_Connection_C, PS) == 0x001640, "Member 'UWBP_SquadScreen_Connection_C::PS' has a wrong offset!");

}

