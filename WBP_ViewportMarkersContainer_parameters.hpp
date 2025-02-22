#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ViewportMarkersContainer

#include "Basic.hpp"

#include "G01_structs.hpp"


namespace SDK::Params
{

// Function WBP_ViewportMarkersContainer.WBP_ViewportMarkersContainer_C.ExecuteUbergraph_WBP_ViewportMarkersContainer
// 0x0030 (0x0030 - 0x0000)
struct WBP_ViewportMarkersContainer_C_ExecuteUbergraph_WBP_ViewportMarkersContainer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59F0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzMarkerWidget*                        K2Node_Event_MarkerWidget;                         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGzMarkerComponent*                     K2Node_Event_MarkerComponent;                      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59F1[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGzViewportMarkerWidget*                K2Node_DynamicCast_AsGz_Viewport_Marker_Widget;    // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ViewportMarkersContainer_C_ExecuteUbergraph_WBP_ViewportMarkersContainer) == 0x000008, "Wrong alignment on WBP_ViewportMarkersContainer_C_ExecuteUbergraph_WBP_ViewportMarkersContainer");
static_assert(sizeof(WBP_ViewportMarkersContainer_C_ExecuteUbergraph_WBP_ViewportMarkersContainer) == 0x000030, "Wrong size on WBP_ViewportMarkersContainer_C_ExecuteUbergraph_WBP_ViewportMarkersContainer");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_ExecuteUbergraph_WBP_ViewportMarkersContainer, EntryPoint) == 0x000000, "Member 'WBP_ViewportMarkersContainer_C_ExecuteUbergraph_WBP_ViewportMarkersContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_ExecuteUbergraph_WBP_ViewportMarkersContainer, K2Node_Event_MarkerWidget) == 0x000008, "Member 'WBP_ViewportMarkersContainer_C_ExecuteUbergraph_WBP_ViewportMarkersContainer::K2Node_Event_MarkerWidget' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_ExecuteUbergraph_WBP_ViewportMarkersContainer, K2Node_Event_MarkerComponent) == 0x000010, "Member 'WBP_ViewportMarkersContainer_C_ExecuteUbergraph_WBP_ViewportMarkersContainer::K2Node_Event_MarkerComponent' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_ExecuteUbergraph_WBP_ViewportMarkersContainer, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_ViewportMarkersContainer_C_ExecuteUbergraph_WBP_ViewportMarkersContainer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_ExecuteUbergraph_WBP_ViewportMarkersContainer, K2Node_DynamicCast_AsGz_Viewport_Marker_Widget) == 0x000020, "Member 'WBP_ViewportMarkersContainer_C_ExecuteUbergraph_WBP_ViewportMarkersContainer::K2Node_DynamicCast_AsGz_Viewport_Marker_Widget' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_ExecuteUbergraph_WBP_ViewportMarkersContainer, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_ViewportMarkersContainer_C_ExecuteUbergraph_WBP_ViewportMarkersContainer::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_ViewportMarkersContainer.WBP_ViewportMarkersContainer_C.OnMarkerAdded
// 0x0010 (0x0010 - 0x0000)
struct WBP_ViewportMarkersContainer_C_OnMarkerAdded final
{
public:
	class UGzMarkerWidget*                        MarkerWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGzMarkerComponent*                     MarkerComponent;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ViewportMarkersContainer_C_OnMarkerAdded) == 0x000008, "Wrong alignment on WBP_ViewportMarkersContainer_C_OnMarkerAdded");
static_assert(sizeof(WBP_ViewportMarkersContainer_C_OnMarkerAdded) == 0x000010, "Wrong size on WBP_ViewportMarkersContainer_C_OnMarkerAdded");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_OnMarkerAdded, MarkerWidget) == 0x000000, "Member 'WBP_ViewportMarkersContainer_C_OnMarkerAdded::MarkerWidget' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_OnMarkerAdded, MarkerComponent) == 0x000008, "Member 'WBP_ViewportMarkersContainer_C_OnMarkerAdded::MarkerComponent' has a wrong offset!");

// Function WBP_ViewportMarkersContainer.WBP_ViewportMarkersContainer_C.SetupMissionMarkers
// 0x0028 (0x0028 - 0x0000)
struct WBP_ViewportMarkersContainer_C_SetupMissionMarkers final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_ViewportMarker_Mission_Base_C*     K2Node_DynamicCast_AsWBP_Viewport_Marker_Mission_Base; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59F2[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzMissionMarker*                       K2Node_DynamicCast_AsGz_Mission_Marker;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ViewportMarkersContainer_C_SetupMissionMarkers) == 0x000008, "Wrong alignment on WBP_ViewportMarkersContainer_C_SetupMissionMarkers");
static_assert(sizeof(WBP_ViewportMarkersContainer_C_SetupMissionMarkers) == 0x000028, "Wrong size on WBP_ViewportMarkersContainer_C_SetupMissionMarkers");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupMissionMarkers, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'WBP_ViewportMarkersContainer_C_SetupMissionMarkers::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupMissionMarkers, K2Node_DynamicCast_AsWBP_Viewport_Marker_Mission_Base) == 0x000008, "Member 'WBP_ViewportMarkersContainer_C_SetupMissionMarkers::K2Node_DynamicCast_AsWBP_Viewport_Marker_Mission_Base' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupMissionMarkers, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_ViewportMarkersContainer_C_SetupMissionMarkers::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupMissionMarkers, K2Node_DynamicCast_AsGz_Mission_Marker) == 0x000018, "Member 'WBP_ViewportMarkersContainer_C_SetupMissionMarkers::K2Node_DynamicCast_AsGz_Mission_Marker' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupMissionMarkers, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'WBP_ViewportMarkersContainer_C_SetupMissionMarkers::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function WBP_ViewportMarkersContainer.WBP_ViewportMarkersContainer_C.SetupMissionVehicleHealthbar
// 0x0028 (0x0028 - 0x0000)
struct WBP_ViewportMarkersContainer_C_SetupMissionVehicleHealthbar final
{
public:
	class WBP_Vehicle_Health::UWBP_Vehicle_Health_C* K2Node_DynamicCast_AsWBP_Vehicle_Health;           // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59F3[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_TrackTransport_ConvoyCar_JobZero_C* K2Node_DynamicCast_AsBP_Track_Transport_Convoy_Car_Job_Zero; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ViewportMarkersContainer_C_SetupMissionVehicleHealthbar) == 0x000008, "Wrong alignment on WBP_ViewportMarkersContainer_C_SetupMissionVehicleHealthbar");
static_assert(sizeof(WBP_ViewportMarkersContainer_C_SetupMissionVehicleHealthbar) == 0x000028, "Wrong size on WBP_ViewportMarkersContainer_C_SetupMissionVehicleHealthbar");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupMissionVehicleHealthbar, K2Node_DynamicCast_AsWBP_Vehicle_Health) == 0x000000, "Member 'WBP_ViewportMarkersContainer_C_SetupMissionVehicleHealthbar::K2Node_DynamicCast_AsWBP_Vehicle_Health' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupMissionVehicleHealthbar, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'WBP_ViewportMarkersContainer_C_SetupMissionVehicleHealthbar::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupMissionVehicleHealthbar, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'WBP_ViewportMarkersContainer_C_SetupMissionVehicleHealthbar::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupMissionVehicleHealthbar, K2Node_DynamicCast_AsBP_Track_Transport_Convoy_Car_Job_Zero) == 0x000018, "Member 'WBP_ViewportMarkersContainer_C_SetupMissionVehicleHealthbar::K2Node_DynamicCast_AsBP_Track_Transport_Convoy_Car_Job_Zero' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupMissionVehicleHealthbar, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'WBP_ViewportMarkersContainer_C_SetupMissionVehicleHealthbar::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function WBP_ViewportMarkersContainer.WBP_ViewportMarkersContainer_C.SetupNPCNames
// 0x0048 (0x0048 - 0x0000)
struct WBP_ViewportMarkersContainer_C_SetupNPCNames final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59F4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_NPCName_C*                         K2Node_DynamicCast_AsWBP_NPCName;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59F5[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGzAIPawnInterface>    K2Node_DynamicCast_AsGz_AIPawn_Interface;          // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59F6[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGzNonPlayerCharacter*                  K2Node_DynamicCast_AsGz_Non_Player_Character;      // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59F7[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAiId_ReturnValue;                      // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ViewportMarkersContainer_C_SetupNPCNames) == 0x000008, "Wrong alignment on WBP_ViewportMarkersContainer_C_SetupNPCNames");
static_assert(sizeof(WBP_ViewportMarkersContainer_C_SetupNPCNames) == 0x000048, "Wrong size on WBP_ViewportMarkersContainer_C_SetupNPCNames");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupNPCNames, Temp_int_Variable) == 0x000000, "Member 'WBP_ViewportMarkersContainer_C_SetupNPCNames::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupNPCNames, K2Node_DynamicCast_AsWBP_NPCName) == 0x000008, "Member 'WBP_ViewportMarkersContainer_C_SetupNPCNames::K2Node_DynamicCast_AsWBP_NPCName' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupNPCNames, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_ViewportMarkersContainer_C_SetupNPCNames::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupNPCNames, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'WBP_ViewportMarkersContainer_C_SetupNPCNames::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupNPCNames, K2Node_DynamicCast_AsGz_AIPawn_Interface) == 0x000020, "Member 'WBP_ViewportMarkersContainer_C_SetupNPCNames::K2Node_DynamicCast_AsGz_AIPawn_Interface' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupNPCNames, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'WBP_ViewportMarkersContainer_C_SetupNPCNames::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupNPCNames, K2Node_DynamicCast_AsGz_Non_Player_Character) == 0x000038, "Member 'WBP_ViewportMarkersContainer_C_SetupNPCNames::K2Node_DynamicCast_AsGz_Non_Player_Character' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupNPCNames, K2Node_DynamicCast_bSuccess_2) == 0x000040, "Member 'WBP_ViewportMarkersContainer_C_SetupNPCNames::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupNPCNames, CallFunc_GetAiId_ReturnValue) == 0x000044, "Member 'WBP_ViewportMarkersContainer_C_SetupNPCNames::CallFunc_GetAiId_ReturnValue' has a wrong offset!");

// Function WBP_ViewportMarkersContainer.WBP_ViewportMarkersContainer_C.SetupPingData
// 0x0070 (0x0070 - 0x0000)
struct WBP_ViewportMarkersContainer_C_SetupPingData final
{
public:
	class UWBP_ViewportMarker_Ping_C*             K2Node_DynamicCast_AsWBP_Viewport_Marker_Ping;     // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59F8[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGzPingData                            CallFunc_GetPingData_ReturnValue;                  // 0x0010(0x0060)(HasGetValueTypeHash)
};
static_assert(alignof(WBP_ViewportMarkersContainer_C_SetupPingData) == 0x000008, "Wrong alignment on WBP_ViewportMarkersContainer_C_SetupPingData");
static_assert(sizeof(WBP_ViewportMarkersContainer_C_SetupPingData) == 0x000070, "Wrong size on WBP_ViewportMarkersContainer_C_SetupPingData");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupPingData, K2Node_DynamicCast_AsWBP_Viewport_Marker_Ping) == 0x000000, "Member 'WBP_ViewportMarkersContainer_C_SetupPingData::K2Node_DynamicCast_AsWBP_Viewport_Marker_Ping' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupPingData, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'WBP_ViewportMarkersContainer_C_SetupPingData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ViewportMarkersContainer_C_SetupPingData, CallFunc_GetPingData_ReturnValue) == 0x000010, "Member 'WBP_ViewportMarkersContainer_C_SetupPingData::CallFunc_GetPingData_ReturnValue' has a wrong offset!");

}

