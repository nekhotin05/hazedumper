#pragma once
#include <cstddef>

// Offsets timestamp
// Fri,  9 Jun 2017 06:26:31 +0200

namespace hazedumper {
namespace netvars {
constexpr ::std::ptrdiff_t m_ArmorValue = 0xB248;
constexpr ::std::ptrdiff_t m_Collision = 0x318;
constexpr ::std::ptrdiff_t m_CollisionGroup = 0x470;
constexpr ::std::ptrdiff_t m_Local = 0x2FAC;
constexpr ::std::ptrdiff_t m_MoveType = 0x258;
constexpr ::std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x316C;
constexpr ::std::ptrdiff_t m_OriginalOwnerXuidLow = 0x3168;
constexpr ::std::ptrdiff_t m_aimPunchAngle = 0x301C;
constexpr ::std::ptrdiff_t m_aimPunchAngleVel = 0x3028;
constexpr ::std::ptrdiff_t m_bGunGameImmunity = 0x38B0;
constexpr ::std::ptrdiff_t m_bHasDefuser = 0xB258;
constexpr ::std::ptrdiff_t m_bHasHelmet = 0xB23C;
constexpr ::std::ptrdiff_t m_bInReload = 0x3245;
constexpr ::std::ptrdiff_t m_bIsDefusing = 0x38A4;
constexpr ::std::ptrdiff_t m_bIsScoped = 0x389C;
constexpr ::std::ptrdiff_t m_bSpotted = 0x939;
constexpr ::std::ptrdiff_t m_bSpottedByMask = 0x97C;
constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x2698;
constexpr ::std::ptrdiff_t m_fAccuracyPenalty = 0x32C0;
constexpr ::std::ptrdiff_t m_fFlags = 0x100;
constexpr ::std::ptrdiff_t m_flFallbackWear = 0x3178;
constexpr ::std::ptrdiff_t m_flFlashDuration = 0xA308;
constexpr ::std::ptrdiff_t m_flFlashMaxAlpha = 0xA304;
constexpr ::std::ptrdiff_t m_flNextPrimaryAttack = 0x31D8;
constexpr ::std::ptrdiff_t m_hActiveWeapon = 0x2EE8;
constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2DE8;
constexpr ::std::ptrdiff_t m_hObserverTarget = 0x3380;
constexpr ::std::ptrdiff_t m_hOwner = 0x29BC;
constexpr ::std::ptrdiff_t m_hOwnerEntity = 0x148;
constexpr ::std::ptrdiff_t m_iAccountID = 0x2FA8;
constexpr ::std::ptrdiff_t m_iClip1 = 0x3204;
constexpr ::std::ptrdiff_t m_iCompetitiveRanking = 0x1A44;
constexpr ::std::ptrdiff_t m_iCompetitiveWins = 0x1B48;
constexpr ::std::ptrdiff_t m_iCrosshairId = 0xB2B4;
constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2F8C;
constexpr ::std::ptrdiff_t m_iFOVStart = 0x31D8;
constexpr ::std::ptrdiff_t m_iGlowIndex = 0xA320;
constexpr ::std::ptrdiff_t m_iHealth = 0xFC;
constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2F88;
constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FA0;
constexpr ::std::ptrdiff_t m_iObserverMode = 0x336C;
constexpr ::std::ptrdiff_t m_iShotsFired = 0xA2C0;
constexpr ::std::ptrdiff_t m_iState = 0x31F8;
constexpr ::std::ptrdiff_t m_iTeamNum = 0xF0;
constexpr ::std::ptrdiff_t m_lifeState = 0x25B;
constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x3170;
constexpr ::std::ptrdiff_t m_nFallbackSeed = 0x3174;
constexpr ::std::ptrdiff_t m_nFallbackStatTrak = 0x317C;
constexpr ::std::ptrdiff_t m_nForceBone = 0x267C;
constexpr ::std::ptrdiff_t m_nTickBase = 0x3424;
constexpr ::std::ptrdiff_t m_rgflCoordinateFrame = 0x440;
constexpr ::std::ptrdiff_t m_szCustomName = 0x301C;
constexpr ::std::ptrdiff_t m_szLastPlaceName = 0x35A8;
constexpr ::std::ptrdiff_t m_vecOrigin = 0x134;
constexpr ::std::ptrdiff_t m_vecVelocity = 0x110;
constexpr ::std::ptrdiff_t m_vecViewOffset = 0x104;
constexpr ::std::ptrdiff_t m_viewPunchAngle = 0x3010;
} // namespace netvars
namespace signatures {
constexpr ::std::ptrdiff_t dwClientState = 0x59F21C;
constexpr ::std::ptrdiff_t dwClientState_GetLocalPlayer = 0x178;
constexpr ::std::ptrdiff_t dwClientState_Map = 0x284;
constexpr ::std::ptrdiff_t dwClientState_MapDirectory = 0x180;
constexpr ::std::ptrdiff_t dwClientState_MaxPlayer = 0x308;
constexpr ::std::ptrdiff_t dwClientState_PlayerInfo = 0x523C;
constexpr ::std::ptrdiff_t dwClientState_State = 0x100;
constexpr ::std::ptrdiff_t dwClientState_ViewAngles = 0x4D0C;
constexpr ::std::ptrdiff_t dwClientState_IsHLTV = 0x4CC4;
constexpr ::std::ptrdiff_t dwEntityList = 0x4A87504;
constexpr ::std::ptrdiff_t dwForceAttack = 0x2EC9898;
constexpr ::std::ptrdiff_t dwForceAttack2 = 0x2EC98A4;
constexpr ::std::ptrdiff_t dwForceBackward = 0x2EC991C;
constexpr ::std::ptrdiff_t dwForceForward = 0x2EC9910;
constexpr ::std::ptrdiff_t dwForceJump = 0x4F1E494;
constexpr ::std::ptrdiff_t dwForceLeft = 0x2EC98F8;
constexpr ::std::ptrdiff_t dwForceRight = 0x2EC9904;
constexpr ::std::ptrdiff_t dwGameDir = 0x63D7D0;
constexpr ::std::ptrdiff_t dwGameRulesProxy = 0x4F88DBC;
constexpr ::std::ptrdiff_t dwGetAllClasses = 0x4F88E8C;
constexpr ::std::ptrdiff_t dwGlobalVars = 0x59EF20;
constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x4FA44E0;
constexpr ::std::ptrdiff_t dwInput = 0x4ED2128;
constexpr ::std::ptrdiff_t dwInterfaceLinkList = 0x6E76D4;
constexpr ::std::ptrdiff_t dwLocalPlayer = 0xAAAFEC;
constexpr ::std::ptrdiff_t dwMouseEnable = 0xAB0850;
constexpr ::std::ptrdiff_t dwMouseEnablePtr = 0xAB0820;
constexpr ::std::ptrdiff_t dwPlayerResource = 0x2EC7C1C;
constexpr ::std::ptrdiff_t dwRadarBase = 0x4EBC1FC;
constexpr ::std::ptrdiff_t dwSensitivity = 0xAB06EC;
constexpr ::std::ptrdiff_t dwSensitivityPtr = 0xAB06C0;
constexpr ::std::ptrdiff_t dwViewMatrix = 0x4A78F74;
constexpr ::std::ptrdiff_t dwWeaponTable = 0x4ECE6C0;
constexpr ::std::ptrdiff_t dwWeaponTableIndex = 0x3270;
constexpr ::std::ptrdiff_t dwYawPtr = 0xAB04B0;
constexpr ::std::ptrdiff_t dwZoomSensitivityRatioPtr = 0xAB5518;
constexpr ::std::ptrdiff_t dwbSendPackets = 0xCC92A;
constexpr ::std::ptrdiff_t dwppDirect3DDevice9 = 0x9CF40;
constexpr ::std::ptrdiff_t dwSetClanTag = 0x87190;
constexpr ::std::ptrdiff_t m_pStudioHdr = 0x293C;
} // namespace signatures
} // namespace hazedumper
