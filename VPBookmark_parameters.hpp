#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VPBookmark

#include "Basic.hpp"


namespace SDK::Params
{

// Function VPBookmark.VPBookmarkProvider.OnBookmarkActivation
// 0x0010 (0x0010 - 0x0000)
struct VPBookmarkProvider_OnBookmarkActivation final
{
public:
	class UVPBookmark*                            BookMark;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bActivate;                                         // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4705[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(VPBookmarkProvider_OnBookmarkActivation) == 0x000008, "Wrong alignment on VPBookmarkProvider_OnBookmarkActivation");
static_assert(sizeof(VPBookmarkProvider_OnBookmarkActivation) == 0x000010, "Wrong size on VPBookmarkProvider_OnBookmarkActivation");
static_assert(offsetof(VPBookmarkProvider_OnBookmarkActivation, BookMark) == 0x000000, "Member 'VPBookmarkProvider_OnBookmarkActivation::BookMark' has a wrong offset!");
static_assert(offsetof(VPBookmarkProvider_OnBookmarkActivation, bActivate) == 0x000008, "Member 'VPBookmarkProvider_OnBookmarkActivation::bActivate' has a wrong offset!");

// Function VPBookmark.VPBookmarkProvider.OnBookmarkChanged
// 0x0008 (0x0008 - 0x0000)
struct VPBookmarkProvider_OnBookmarkChanged final
{
public:
	class UVPBookmark*                            BookMark;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VPBookmarkProvider_OnBookmarkChanged) == 0x000008, "Wrong alignment on VPBookmarkProvider_OnBookmarkChanged");
static_assert(sizeof(VPBookmarkProvider_OnBookmarkChanged) == 0x000008, "Wrong size on VPBookmarkProvider_OnBookmarkChanged");
static_assert(offsetof(VPBookmarkProvider_OnBookmarkChanged, BookMark) == 0x000000, "Member 'VPBookmarkProvider_OnBookmarkChanged::BookMark' has a wrong offset!");

// Function VPBookmark.VPBookmark.GetAssociatedBookmarkActor
// 0x0008 (0x0008 - 0x0000)
struct VPBookmark_GetAssociatedBookmarkActor final
{
public:
	class AActor*                                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VPBookmark_GetAssociatedBookmarkActor) == 0x000008, "Wrong alignment on VPBookmark_GetAssociatedBookmarkActor");
static_assert(sizeof(VPBookmark_GetAssociatedBookmarkActor) == 0x000008, "Wrong size on VPBookmark_GetAssociatedBookmarkActor");
static_assert(offsetof(VPBookmark_GetAssociatedBookmarkActor, ReturnValue) == 0x000000, "Member 'VPBookmark_GetAssociatedBookmarkActor::ReturnValue' has a wrong offset!");

// Function VPBookmark.VPBookmark.GetBookmarkIndex
// 0x0004 (0x0004 - 0x0000)
struct VPBookmark_GetBookmarkIndex final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VPBookmark_GetBookmarkIndex) == 0x000004, "Wrong alignment on VPBookmark_GetBookmarkIndex");
static_assert(sizeof(VPBookmark_GetBookmarkIndex) == 0x000004, "Wrong size on VPBookmark_GetBookmarkIndex");
static_assert(offsetof(VPBookmark_GetBookmarkIndex, ReturnValue) == 0x000000, "Member 'VPBookmark_GetBookmarkIndex::ReturnValue' has a wrong offset!");

// Function VPBookmark.VPBookmark.GetDisplayName
// 0x0010 (0x0010 - 0x0000)
struct VPBookmark_GetDisplayName final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(VPBookmark_GetDisplayName) == 0x000008, "Wrong alignment on VPBookmark_GetDisplayName");
static_assert(sizeof(VPBookmark_GetDisplayName) == 0x000010, "Wrong size on VPBookmark_GetDisplayName");
static_assert(offsetof(VPBookmark_GetDisplayName, ReturnValue) == 0x000000, "Member 'VPBookmark_GetDisplayName::ReturnValue' has a wrong offset!");

// Function VPBookmark.VPBookmark.IsActive
// 0x0001 (0x0001 - 0x0000)
struct VPBookmark_IsActive final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VPBookmark_IsActive) == 0x000001, "Wrong alignment on VPBookmark_IsActive");
static_assert(sizeof(VPBookmark_IsActive) == 0x000001, "Wrong size on VPBookmark_IsActive");
static_assert(offsetof(VPBookmark_IsActive, ReturnValue) == 0x000000, "Member 'VPBookmark_IsActive::ReturnValue' has a wrong offset!");

// Function VPBookmark.VPBookmarkBlueprintLibrary.CreateVPBookmarkName
// 0x0040 (0x0040 - 0x0000)
struct VPBookmarkBlueprintLibrary_CreateVPBookmarkName final
{
public:
	class AActor*                                 BookMark;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FormatString;                                      // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 GeneratedNumber;                                   // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 GeneratedLetter;                                   // 0x0028(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4708[0x7];                                     // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(VPBookmarkBlueprintLibrary_CreateVPBookmarkName) == 0x000008, "Wrong alignment on VPBookmarkBlueprintLibrary_CreateVPBookmarkName");
static_assert(sizeof(VPBookmarkBlueprintLibrary_CreateVPBookmarkName) == 0x000040, "Wrong size on VPBookmarkBlueprintLibrary_CreateVPBookmarkName");
static_assert(offsetof(VPBookmarkBlueprintLibrary_CreateVPBookmarkName, BookMark) == 0x000000, "Member 'VPBookmarkBlueprintLibrary_CreateVPBookmarkName::BookMark' has a wrong offset!");
static_assert(offsetof(VPBookmarkBlueprintLibrary_CreateVPBookmarkName, FormatString) == 0x000008, "Member 'VPBookmarkBlueprintLibrary_CreateVPBookmarkName::FormatString' has a wrong offset!");
static_assert(offsetof(VPBookmarkBlueprintLibrary_CreateVPBookmarkName, GeneratedNumber) == 0x000018, "Member 'VPBookmarkBlueprintLibrary_CreateVPBookmarkName::GeneratedNumber' has a wrong offset!");
static_assert(offsetof(VPBookmarkBlueprintLibrary_CreateVPBookmarkName, GeneratedLetter) == 0x000028, "Member 'VPBookmarkBlueprintLibrary_CreateVPBookmarkName::GeneratedLetter' has a wrong offset!");
static_assert(offsetof(VPBookmarkBlueprintLibrary_CreateVPBookmarkName, ReturnValue) == 0x000038, "Member 'VPBookmarkBlueprintLibrary_CreateVPBookmarkName::ReturnValue' has a wrong offset!");

// Function VPBookmark.VPBookmarkBlueprintLibrary.FindVPBookmark
// 0x0010 (0x0010 - 0x0000)
struct VPBookmarkBlueprintLibrary_FindVPBookmark final
{
public:
	const class AActor*                           Actor;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVPBookmark*                            ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VPBookmarkBlueprintLibrary_FindVPBookmark) == 0x000008, "Wrong alignment on VPBookmarkBlueprintLibrary_FindVPBookmark");
static_assert(sizeof(VPBookmarkBlueprintLibrary_FindVPBookmark) == 0x000010, "Wrong size on VPBookmarkBlueprintLibrary_FindVPBookmark");
static_assert(offsetof(VPBookmarkBlueprintLibrary_FindVPBookmark, Actor) == 0x000000, "Member 'VPBookmarkBlueprintLibrary_FindVPBookmark::Actor' has a wrong offset!");
static_assert(offsetof(VPBookmarkBlueprintLibrary_FindVPBookmark, ReturnValue) == 0x000008, "Member 'VPBookmarkBlueprintLibrary_FindVPBookmark::ReturnValue' has a wrong offset!");

// Function VPBookmark.VPBookmarkBlueprintLibrary.GetAllVPBookmark
// 0x0018 (0x0018 - 0x0000)
struct VPBookmarkBlueprintLibrary_GetAllVPBookmark final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVPBookmark*>                    OutBookmarks;                                      // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(VPBookmarkBlueprintLibrary_GetAllVPBookmark) == 0x000008, "Wrong alignment on VPBookmarkBlueprintLibrary_GetAllVPBookmark");
static_assert(sizeof(VPBookmarkBlueprintLibrary_GetAllVPBookmark) == 0x000018, "Wrong size on VPBookmarkBlueprintLibrary_GetAllVPBookmark");
static_assert(offsetof(VPBookmarkBlueprintLibrary_GetAllVPBookmark, WorldContextObject) == 0x000000, "Member 'VPBookmarkBlueprintLibrary_GetAllVPBookmark::WorldContextObject' has a wrong offset!");
static_assert(offsetof(VPBookmarkBlueprintLibrary_GetAllVPBookmark, OutBookmarks) == 0x000008, "Member 'VPBookmarkBlueprintLibrary_GetAllVPBookmark::OutBookmarks' has a wrong offset!");

// Function VPBookmark.VPBookmarkBlueprintLibrary.GetAllVPBookmarkActors
// 0x0018 (0x0018 - 0x0000)
struct VPBookmarkBlueprintLibrary_GetAllVPBookmarkActors final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         OutActors;                                         // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(VPBookmarkBlueprintLibrary_GetAllVPBookmarkActors) == 0x000008, "Wrong alignment on VPBookmarkBlueprintLibrary_GetAllVPBookmarkActors");
static_assert(sizeof(VPBookmarkBlueprintLibrary_GetAllVPBookmarkActors) == 0x000018, "Wrong size on VPBookmarkBlueprintLibrary_GetAllVPBookmarkActors");
static_assert(offsetof(VPBookmarkBlueprintLibrary_GetAllVPBookmarkActors, WorldContextObject) == 0x000000, "Member 'VPBookmarkBlueprintLibrary_GetAllVPBookmarkActors::WorldContextObject' has a wrong offset!");
static_assert(offsetof(VPBookmarkBlueprintLibrary_GetAllVPBookmarkActors, OutActors) == 0x000008, "Member 'VPBookmarkBlueprintLibrary_GetAllVPBookmarkActors::OutActors' has a wrong offset!");

}

