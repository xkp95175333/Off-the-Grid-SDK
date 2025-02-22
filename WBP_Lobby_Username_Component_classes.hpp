#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Lobby_Username_Component

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WBP_Lobby_Username_Component.WBP_Lobby_Username_Component_C
// 0x0010 (0x06B0 - 0x06A0)
class UWBP_Lobby_Username_Component_C final : public UWidgetComponent
{
public:
	uint8                                         Pad_60F0[0x8];                                     // 0x0698(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AGzSceneManager*                        SceneManager;                                      // 0x06A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Lobby_Username_Component(int32 EntryPoint);
	void OnSceneEnter(const struct FGameplayTag& SceneTag, const struct FGzSceneChangedEventData& EventData);
	void OnSceneLeave(const struct FGameplayTag& SceneTag, const struct FGzSceneChangedEventData& EventData);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Lobby_Username_Component_C">();
	}
	static class UWBP_Lobby_Username_Component_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Lobby_Username_Component_C>();
	}
};
static_assert(alignof(UWBP_Lobby_Username_Component_C) == 0x000010, "Wrong alignment on UWBP_Lobby_Username_Component_C");
static_assert(sizeof(UWBP_Lobby_Username_Component_C) == 0x0006B0, "Wrong size on UWBP_Lobby_Username_Component_C");
static_assert(offsetof(UWBP_Lobby_Username_Component_C, UberGraphFrame) == 0x0006A0, "Member 'UWBP_Lobby_Username_Component_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Lobby_Username_Component_C, SceneManager) == 0x0006A8, "Member 'UWBP_Lobby_Username_Component_C::SceneManager' has a wrong offset!");

}

