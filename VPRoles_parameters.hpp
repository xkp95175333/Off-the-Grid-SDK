#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VPRoles

#include "Basic.hpp"


namespace SDK::Params
{

// DelegateFunction VPRoles.VirtualProductionRolesSubsystem.OnRolesChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct VirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature final
{
public:
	TArray<class FString>                         EnabledRoles;                                      // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(VirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature) == 0x000008, "Wrong alignment on VirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature");
static_assert(sizeof(VirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature) == 0x000010, "Wrong size on VirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature");
static_assert(offsetof(VirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature, EnabledRoles) == 0x000000, "Member 'VirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature::EnabledRoles' has a wrong offset!");

// Function VPRoles.VirtualProductionRolesSubsystem.SetActiveRoles
// 0x0010 (0x0010 - 0x0000)
struct VirtualProductionRolesSubsystem_SetActiveRoles final
{
public:
	TArray<class FString>                         Roles;                                             // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(VirtualProductionRolesSubsystem_SetActiveRoles) == 0x000008, "Wrong alignment on VirtualProductionRolesSubsystem_SetActiveRoles");
static_assert(sizeof(VirtualProductionRolesSubsystem_SetActiveRoles) == 0x000010, "Wrong size on VirtualProductionRolesSubsystem_SetActiveRoles");
static_assert(offsetof(VirtualProductionRolesSubsystem_SetActiveRoles, Roles) == 0x000000, "Member 'VirtualProductionRolesSubsystem_SetActiveRoles::Roles' has a wrong offset!");

// Function VPRoles.VirtualProductionRolesSubsystem.GetActiveRoles
// 0x0010 (0x0010 - 0x0000)
struct VirtualProductionRolesSubsystem_GetActiveRoles final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(VirtualProductionRolesSubsystem_GetActiveRoles) == 0x000008, "Wrong alignment on VirtualProductionRolesSubsystem_GetActiveRoles");
static_assert(sizeof(VirtualProductionRolesSubsystem_GetActiveRoles) == 0x000010, "Wrong size on VirtualProductionRolesSubsystem_GetActiveRoles");
static_assert(offsetof(VirtualProductionRolesSubsystem_GetActiveRoles, ReturnValue) == 0x000000, "Member 'VirtualProductionRolesSubsystem_GetActiveRoles::ReturnValue' has a wrong offset!");

// Function VPRoles.VirtualProductionRolesSubsystem.GetActiveRolesString
// 0x0010 (0x0010 - 0x0000)
struct VirtualProductionRolesSubsystem_GetActiveRolesString final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VirtualProductionRolesSubsystem_GetActiveRolesString) == 0x000008, "Wrong alignment on VirtualProductionRolesSubsystem_GetActiveRolesString");
static_assert(sizeof(VirtualProductionRolesSubsystem_GetActiveRolesString) == 0x000010, "Wrong size on VirtualProductionRolesSubsystem_GetActiveRolesString");
static_assert(offsetof(VirtualProductionRolesSubsystem_GetActiveRolesString, ReturnValue) == 0x000000, "Member 'VirtualProductionRolesSubsystem_GetActiveRolesString::ReturnValue' has a wrong offset!");

// Function VPRoles.VirtualProductionRolesSubsystem.GetAllRoles
// 0x0010 (0x0010 - 0x0000)
struct VirtualProductionRolesSubsystem_GetAllRoles final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(VirtualProductionRolesSubsystem_GetAllRoles) == 0x000008, "Wrong alignment on VirtualProductionRolesSubsystem_GetAllRoles");
static_assert(sizeof(VirtualProductionRolesSubsystem_GetAllRoles) == 0x000010, "Wrong size on VirtualProductionRolesSubsystem_GetAllRoles");
static_assert(offsetof(VirtualProductionRolesSubsystem_GetAllRoles, ReturnValue) == 0x000000, "Member 'VirtualProductionRolesSubsystem_GetAllRoles::ReturnValue' has a wrong offset!");

// Function VPRoles.VirtualProductionRolesSubsystem.HasActiveRole
// 0x0018 (0x0018 - 0x0000)
struct VirtualProductionRolesSubsystem_HasActiveRole final
{
public:
	class FString                                 Role;                                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_46F4[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(VirtualProductionRolesSubsystem_HasActiveRole) == 0x000008, "Wrong alignment on VirtualProductionRolesSubsystem_HasActiveRole");
static_assert(sizeof(VirtualProductionRolesSubsystem_HasActiveRole) == 0x000018, "Wrong size on VirtualProductionRolesSubsystem_HasActiveRole");
static_assert(offsetof(VirtualProductionRolesSubsystem_HasActiveRole, Role) == 0x000000, "Member 'VirtualProductionRolesSubsystem_HasActiveRole::Role' has a wrong offset!");
static_assert(offsetof(VirtualProductionRolesSubsystem_HasActiveRole, ReturnValue) == 0x000010, "Member 'VirtualProductionRolesSubsystem_HasActiveRole::ReturnValue' has a wrong offset!");

}

