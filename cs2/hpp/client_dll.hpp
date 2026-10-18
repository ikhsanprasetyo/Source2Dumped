// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-10-18 21:52:13.031739700 +07:00

#pragma once

#include <cstddef>
#include <cstdint>

namespace source2_dumper {
    namespace schemas {
        // Module: client.dll
        // Class count: 390
        // Enum count: 14
        namespace client_dll {
            // Alignment: 4
            // Member count: 5
            enum class C_BaseCombatCharacter__WaterWakeMode_t : uint32_t {
                WATER_WAKE_NONE = 0x0,
                WATER_WAKE_IDLE = 0x1,
                WATER_WAKE_WALKING = 0x2,
                WATER_WAKE_RUNNING = 0x3,
                WATER_WAKE_WATER_OVERHEAD = 0x4
            };
            // Alignment: 4
            // Member count: 2
            enum class PulseBestOutflowRules_t : uint32_t {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class PulseCursorCancelPriority_t : uint32_t {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            };
            // Alignment: 4
            // Member count: 2
            enum class PulseMethodCallMode_t : uint32_t {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class PulseCursorWakePriority_t : uint32_t {
                WakeElegantly = 0x0,
                WakeImmediate = 0x1
            };
            // Alignment: 4
            // Member count: 15
            enum class CompositeMaterialInputLooseVariableType_t : uint32_t {
                LOOSE_VARIABLE_TYPE_BOOLEAN = 0x0,
                LOOSE_VARIABLE_TYPE_INTEGER1 = 0x1,
                LOOSE_VARIABLE_TYPE_INTEGER2 = 0x2,
                LOOSE_VARIABLE_TYPE_INTEGER3 = 0x3,
                LOOSE_VARIABLE_TYPE_INTEGER4 = 0x4,
                LOOSE_VARIABLE_TYPE_FLOAT1 = 0x5,
                LOOSE_VARIABLE_TYPE_FLOAT2 = 0x6,
                LOOSE_VARIABLE_TYPE_FLOAT3 = 0x7,
                LOOSE_VARIABLE_TYPE_FLOAT4 = 0x8,
                LOOSE_VARIABLE_TYPE_COLOR4 = 0x9,
                LOOSE_VARIABLE_TYPE_STRING = 0xA,
                LOOSE_VARIABLE_TYPE_SYSTEMVAR = 0xB,
                LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL = 0xC,
                LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE = 0xD,
                LOOSE_VARIABLE_TYPE_PANORAMA_RENDER = 0xE
            };
            // Alignment: 4
            // Member count: 8
            enum class CompositeMaterialInputTextureType_t : uint32_t {
                INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
                INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
                INPUT_TEXTURE_TYPE_COLOR = 0x2,
                INPUT_TEXTURE_TYPE_MASKS = 0x3,
                INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
                INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
                INPUT_TEXTURE_TYPE_AO = 0x6,
                INPUT_TEXTURE_TYPE_POSITION = 0x7
            };
            // Alignment: 4
            // Member count: 9
            enum class InventoryNodeType_t : uint32_t {
                NODE_TYPE_INVALID = 0x0,
                VIRTUAL_NODE_SCHEMA_PREFAB = 0x1,
                VIRTUAL_NODE_SCHEMA_ITEMDEF = 0x2,
                VIRTUAL_NODE_SCHEMA_STICKER = 0x3,
                VIRTUAL_NODE_SCHEMA_KEYCHAIN = 0x4,
                CONCRETE_NODE_SCHEMA_PREFAB = 0x5,
                CONCRETE_NODE_SCHEMA_ITEMDEF = 0x6,
                CONCRETE_NODE_SCHEMA_STICKER = 0x7,
                CONCRETE_NODE_SCHEMA_KEYCHAIN = 0x8
            };
            // Alignment: 4
            // Member count: 6
            enum class CompositeMaterialInputContainerSourceType_t : uint32_t {
                CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
                CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
                CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
                CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
                CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
                CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
            };
            // Alignment: 4
            // Member count: 10
            enum class CompMatPropertyMutatorType_t : uint32_t {
                COMP_MAT_PROPERTY_MUTATOR_INIT = 0x0,
                COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS = 0x1,
                COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX = 0x2,
                COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY = 0x3,
                COMP_MAT_PROPERTY_MUTATOR_SET_VALUE = 0x4,
                COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE = 0x5,
                COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS = 0x6,
                COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE = 0x7,
                COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT = 0x8,
                COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES = 0x9
            };
            // Alignment: 4
            // Member count: 2
            enum class CompositeMaterialVarSystemVar_t : uint32_t {
                COMPMATSYSVAR_COMPOSITETIME = 0x0,
                COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
            };
            // Alignment: 4
            // Member count: 7
            enum class P2P_Messages : uint32_t {
                p2p_TextMessage = 0x100,
                p2p_Voice = 0x101,
                p2p_Ping = 0x102,
                p2p_VRAvatarPosition = 0x103,
                p2p_WatchSynchronization = 0x104,
                p2p_FightingGame_GameData = 0x105,
                p2p_FightingGame_Connection = 0x106
            };
            // Alignment: 4
            // Member count: 6
            enum class CompositeMaterialMatchFilterType_t : uint32_t {
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
                MATCH_FILTER_MATERIAL_SHADER = 0x1,
                MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
                MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
                MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
            };
            // Alignment: 4
            // Member count: 3
            enum class CompMatPropertyMutatorConditionType_t : uint32_t {
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
            };
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamIntroCharacterPosition {
            }
            // Parent: None
            // Field count: 0
            namespace C_FireCrackerBlast {
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_WingmanIntroCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 1
            namespace C_SceneEntity__QueuedEvents_t {
                constexpr std::ptrdiff_t starttime = 0x0; // float32
            }
            // Parent: None
            // Field count: 1
            namespace CCSPlayer_PingServices {
                constexpr std::ptrdiff_t m_hPlayerPing = 0x48; // CHandle<C_PlayerPing>
            }
            // Parent: None
            // Field count: 5
            namespace CEconItemAttribute {
                constexpr std::ptrdiff_t m_iAttributeDefinitionIndex = 0x30; // uint16
                constexpr std::ptrdiff_t m_flValue = 0x34; // float32
                constexpr std::ptrdiff_t m_flInitialValue = 0x38; // float32
                constexpr std::ptrdiff_t m_nRefundableCurrency = 0x3C; // int32
                constexpr std::ptrdiff_t m_bSetBonus = 0x40; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CFuncRetakeBarrier {
            }
            // Parent: C_BaseEntity
            // Field count: 4
            namespace C_SkyCamera {
                constexpr std::ptrdiff_t m_skyboxData = 0x600; // sky3dparams_t
                constexpr std::ptrdiff_t m_skyboxSlotToken = 0x690; // CUtlStringToken
                constexpr std::ptrdiff_t m_bUseAngles = 0x694; // bool
                constexpr std::ptrdiff_t m_pNext = 0x698; // C_SkyCamera*
            }
            // Parent: None
            // Field count: 0
            namespace C_FuncRotating {
            }
            // Parent: C_BaseEntity
            // Field count: 6
            namespace C_SoundOpvarSetPointBase {
                constexpr std::ptrdiff_t m_iszStackName = 0x600; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iOpvarIndex = 0x618; // int32
                constexpr std::ptrdiff_t m_bUseAutoCompare = 0x61C; // bool
                constexpr std::ptrdiff_t m_bFastRefresh = 0x61D; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 24
            namespace C_EnvCubemapFog {
                constexpr std::ptrdiff_t m_flEndDistance = 0x600; // float32
                constexpr std::ptrdiff_t m_flStartDistance = 0x604; // float32
                constexpr std::ptrdiff_t m_flFogFalloffExponent = 0x608; // float32
                constexpr std::ptrdiff_t m_bHeightFogEnabled = 0x60C; // bool
                constexpr std::ptrdiff_t m_flFogHeightWidth = 0x610; // float32
                constexpr std::ptrdiff_t m_flFogHeightEnd = 0x614; // float32
                constexpr std::ptrdiff_t m_flFogHeightStart = 0x618; // float32
                constexpr std::ptrdiff_t m_flFogHeightExponent = 0x61C; // float32
                constexpr std::ptrdiff_t m_flLODBias = 0x620; // float32
                constexpr std::ptrdiff_t m_bActive = 0x624; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x625; // bool
                constexpr std::ptrdiff_t m_flFogMaxOpacity = 0x628; // float32
                constexpr std::ptrdiff_t m_nCubemapSourceType = 0x62C; // int32
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x630; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_iszSkyEntity = 0x638; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nHeightFogType = 0x640; // int32
                constexpr std::ptrdiff_t m_nFogHeightBlendMode = 0x644; // int32
                constexpr std::ptrdiff_t m_nFogHeightCoordinateSpace = 0x648; // int32
                constexpr std::ptrdiff_t m_nDistanceFogType = 0x64C; // int32
                constexpr std::ptrdiff_t m_DistanceFogCurveString = 0x650; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_HeightFogCurveString = 0x658; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFogCubemapTexture = 0x6F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_bHasHeightFogEnd = 0x6F8; // bool
                constexpr std::ptrdiff_t m_bFirstTime = 0x6F9; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamSelectTerroristPosition {
            }
            // Parent: C_ParticleSystem
            // Field count: 5
            namespace C_EnvParticleGlow {
                constexpr std::ptrdiff_t m_flAlphaScale = 0x1668; // float32
                constexpr std::ptrdiff_t m_flRadiusScale = 0x166C; // float32
                constexpr std::ptrdiff_t m_flSelfIllumScale = 0x1670; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x1674; // Color
                constexpr std::ptrdiff_t m_hTextureOverride = 0x1678; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: None
            // Field count: 0
            namespace CCS_PortraitWorldCallbackHandler {
            }
            // Parent: None
            // Field count: 9
            namespace CCSPlayerController_InventoryServices {
                constexpr std::ptrdiff_t m_vecNetworkableLoadout = 0x40; // CUtlVector<CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t>
                constexpr std::ptrdiff_t m_unMusicID = 0x58; // uint16
                constexpr std::ptrdiff_t m_rank = 0x5C; // MedalRank_t[6]
                constexpr std::ptrdiff_t m_nPersonaDataPublicLevel = 0x74; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsLeader = 0x78; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsTeacher = 0x7C; // int32
                constexpr std::ptrdiff_t m_nPersonaDataPublicCommendsFriendly = 0x80; // int32
                constexpr std::ptrdiff_t m_nPersonaDataXpTrailLevel = 0x84; // int32
                constexpr std::ptrdiff_t m_vecServerAuthoritativeWeaponSlots = 0x88; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
            }
            // Parent: None
            // Field count: 9
            namespace CCSPlayerModernJump {
                constexpr std::ptrdiff_t m_nLastActualJumpPressTick = 0x10; // GameTick_t
                constexpr std::ptrdiff_t m_flLastActualJumpPressFrac = 0x14; // float32
                constexpr std::ptrdiff_t m_nLastUsableJumpPressTick = 0x18; // GameTick_t
                constexpr std::ptrdiff_t m_flLastUsableJumpPressFrac = 0x1C; // float32
                constexpr std::ptrdiff_t m_nLastLandedTick = 0x20; // GameTick_t
                constexpr std::ptrdiff_t m_flLastLandedFrac = 0x24; // float32
                constexpr std::ptrdiff_t m_flLastLandedVelocityX = 0x28; // float32
                constexpr std::ptrdiff_t m_flLastLandedVelocityY = 0x2C; // float32
                constexpr std::ptrdiff_t m_flLastLandedVelocityZ = 0x30; // float32
            }
            // Parent: None
            // Field count: 1
            namespace C_EconEntity__AttachedModelData_t {
                constexpr std::ptrdiff_t m_iModelDisplayFlags = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            namespace CPulse_ResumePoint {
            }
            // Parent: C_BaseTrigger
            // Field count: 9
            namespace CTriggerFan {
                constexpr std::ptrdiff_t m_vFanOriginOffset = 0x1180; // Vector
                constexpr std::ptrdiff_t m_vDirection = 0x118C; // Vector
                constexpr std::ptrdiff_t m_bPushTowardsInfoTarget = 0x1198; // bool
                constexpr std::ptrdiff_t m_bPushAwayFromInfoTarget = 0x1199; // bool
                constexpr std::ptrdiff_t m_qNoiseDelta = 0x11A0; // Quaternion
                constexpr std::ptrdiff_t m_hInfoFan = 0x11B0; // CHandle<CInfoFan>
                constexpr std::ptrdiff_t m_flForce = 0x11B4; // float32
                constexpr std::ptrdiff_t m_bFalloff = 0x11B8; // bool
                constexpr std::ptrdiff_t m_RampTimer = 0x11C0; // CountdownTimer
            }
            // Parent: None
            // Field count: 0
            namespace C_HostageCarriableProp {
            }
            // Parent: None
            // Field count: 6
            namespace C_BulletHitModel {
                constexpr std::ptrdiff_t m_matLocal = 0x1268; // matrix3x4_t
                constexpr std::ptrdiff_t m_iBoneIndex = 0x1298; // int32
                constexpr std::ptrdiff_t m_hPlayerParent = 0x129C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bIsHit = 0x12A0; // bool
                constexpr std::ptrdiff_t m_flTimeCreated = 0x12A4; // float32
                constexpr std::ptrdiff_t m_vecStartPos = 0x12A8; // VectorWS
            }
            // Parent: None
            // Field count: 3
            namespace C_FuncElectrifiedVolume {
                constexpr std::ptrdiff_t m_nAmbientEffect = 0x1098; // ParticleIndex_t
                constexpr std::ptrdiff_t m_EffectName = 0x10A0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bState = 0x10A8; // bool
            }
            // Parent: None
            // Field count: 17
            namespace C_MapVetoPickController {
                constexpr std::ptrdiff_t m_nDraftType = 0x610; // int32
                constexpr std::ptrdiff_t m_nTeamWinningCoinToss = 0x614; // int32
                constexpr std::ptrdiff_t m_nTeamWithFirstChoice = 0x618; // int32[64]
                constexpr std::ptrdiff_t m_nVoteMapIdsList = 0x718; // int32[7]
                constexpr std::ptrdiff_t m_nAccountIDs = 0x734; // int32[64]
                constexpr std::ptrdiff_t m_nMapId0 = 0x834; // int32[64]
                constexpr std::ptrdiff_t m_nMapId1 = 0x934; // int32[64]
                constexpr std::ptrdiff_t m_nMapId2 = 0xA34; // int32[64]
                constexpr std::ptrdiff_t m_nMapId3 = 0xB34; // int32[64]
                constexpr std::ptrdiff_t m_nMapId4 = 0xC34; // int32[64]
                constexpr std::ptrdiff_t m_nMapId5 = 0xD34; // int32[64]
                constexpr std::ptrdiff_t m_nStartingSide0 = 0xE34; // int32[64]
                constexpr std::ptrdiff_t m_nCurrentPhase = 0xF34; // int32
                constexpr std::ptrdiff_t m_nPhaseStartTick = 0xF38; // int32
                constexpr std::ptrdiff_t m_nPhaseDurationTicks = 0xF3C; // int32
                constexpr std::ptrdiff_t m_nPostDataUpdateTick = 0xF40; // int32
                constexpr std::ptrdiff_t m_bDisabledHud = 0xF44; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_EndOfMatchCharacterPosition {
            }
            // Parent: None
            // Field count: 4
            namespace CPointOffScreenIndicatorUi {
                constexpr std::ptrdiff_t m_bBeenEnabled = 0x1300; // bool
                constexpr std::ptrdiff_t m_bHide = 0x1301; // bool
                constexpr std::ptrdiff_t m_flSeenTargetTime = 0x1304; // float32
                constexpr std::ptrdiff_t m_pTargetPanel = 0x1308; // C_PointClientUIWorldPanel*
            }
            // Parent: None
            // Field count: 0
            namespace CCSObserver_UseServices {
            }
            // Parent: C_BaseTrigger
            // Field count: 1
            namespace CCSMinimapVolume {
                constexpr std::ptrdiff_t m_strMinimapName = 0x1198; // CUtlString
            }
            // Parent: None
            // Field count: 0
            namespace CCSPlayer_UseServices {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_CounterTerroristWingmanIntroCamera {
            }
            // Parent: C_PointEntity
            // Field count: 4
            namespace CInfoFan {
                constexpr std::ptrdiff_t m_fFanForceMaxRadius = 0x640; // float32
                constexpr std::ptrdiff_t m_fFanForceMinRadius = 0x644; // float32
                constexpr std::ptrdiff_t m_flCurveDistRange = 0x648; // float32
                constexpr std::ptrdiff_t m_FanForceCurveString = 0x650; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 7
            namespace C_VoteController {
                constexpr std::ptrdiff_t m_iActiveIssueIndex = 0x610; // int32
                constexpr std::ptrdiff_t m_iOnlyTeamToVote = 0x614; // int32
                constexpr std::ptrdiff_t m_nVoteOptionCount = 0x618; // int32[5]
                constexpr std::ptrdiff_t m_nPotentialVotes = 0x62C; // int32
                constexpr std::ptrdiff_t m_bVotesDirty = 0x630; // bool
                constexpr std::ptrdiff_t m_bTypeDirty = 0x631; // bool
                constexpr std::ptrdiff_t m_bIsYesNoVote = 0x632; // bool
            }
            // Parent: None
            // Field count: 10
            namespace C_C4 {
                constexpr std::ptrdiff_t m_activeLightParticleIndex = 0x1F20; // ParticleIndex_t
                constexpr std::ptrdiff_t m_eActiveLightEffect = 0x1F24; // C4LightEffect_t
                constexpr std::ptrdiff_t m_bStartedArming = 0x1F28; // bool
                constexpr std::ptrdiff_t m_fArmedTime = 0x1F2C; // GameTime_t
                constexpr std::ptrdiff_t m_bBombPlacedAnimation = 0x1F30; // bool
                constexpr std::ptrdiff_t m_bIsPlantingViaUse = 0x1F31; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1F38; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_nSpotRules = 0x1F50; // int32
                constexpr std::ptrdiff_t m_bPlayedArmingBeeps = 0x1F54; // bool[7]
                constexpr std::ptrdiff_t m_bBombPlanted = 0x1F5B; // bool
            }
            // Parent: C_BasePlayerPawn
            // Field count: 26
            namespace C_CSPlayerPawnBase {
                constexpr std::ptrdiff_t m_pPingServices = 0x14D8; // CCSPlayer_PingServices*
                constexpr std::ptrdiff_t m_previousPlayerState = 0x14E0; // CSPlayerState
                constexpr std::ptrdiff_t m_iPlayerState = 0x14E4; // CSPlayerState
                constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0x14E8; // bool
                constexpr std::ptrdiff_t m_flLastSpawnTimeIndex = 0x14EC; // GameTime_t
                constexpr std::ptrdiff_t m_iProgressBarDuration = 0x14F0; // int32
                constexpr std::ptrdiff_t m_flProgressBarStartTime = 0x14F4; // float32
                constexpr std::ptrdiff_t m_flClientDeathTime = 0x14F8; // GameTime_t
                constexpr std::ptrdiff_t m_flFlashBangTime = 0x14FC; // float32
                constexpr std::ptrdiff_t m_flFlashScreenshotAlpha = 0x1500; // float32
                constexpr std::ptrdiff_t m_flFlashOverlayAlpha = 0x1504; // float32
                constexpr std::ptrdiff_t m_bFlashBuildUp = 0x1508; // bool
                constexpr std::ptrdiff_t m_bFlashDspHasBeenCleared = 0x1509; // bool
                constexpr std::ptrdiff_t m_bFlashScreenshotHasBeenGrabbed = 0x150A; // bool
                constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x150C; // float32
                constexpr std::ptrdiff_t m_flFlashDuration = 0x1510; // float32
                constexpr std::ptrdiff_t m_flClientHealthFadeChangeTimestamp = 0x1514; // GameTime_t
                constexpr std::ptrdiff_t m_nClientHealthFadeParityValue = 0x1518; // int32
                constexpr std::ptrdiff_t m_fNextThinkPushAway = 0x151C; // float32
                constexpr std::ptrdiff_t m_flCurrentMusicStartTime = 0x1524; // float32
                constexpr std::ptrdiff_t m_flMusicRoundStartTime = 0x1528; // float32
                constexpr std::ptrdiff_t m_bDeferStartMusicOnWarmup = 0x152C; // bool
                constexpr std::ptrdiff_t m_flLastSmokeOverlayAlpha = 0x1530; // float32
                constexpr std::ptrdiff_t m_flLastSmokeAge = 0x1534; // float32
                constexpr std::ptrdiff_t m_vLastSmokeOverlayColor = 0x1538; // Vector
                constexpr std::ptrdiff_t m_hOriginalController = 0x1560; // CHandle<CCSPlayerController>
            }
            // Parent: CBaseProp
            // Field count: 29
            namespace C_BreakableProp {
                constexpr std::ptrdiff_t m_CPropDataComponent = 0x12A0; // CPropDataComponent
                constexpr std::ptrdiff_t m_OnStartDeath = 0x12E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnBreak = 0x12F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnHealthChanged = 0x1310; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnTakeDamage = 0x1330; // CEntityIOOutput
                constexpr std::ptrdiff_t m_impactEnergyScale = 0x1348; // float32
                constexpr std::ptrdiff_t m_iMinHealthDmg = 0x134C; // int32
                constexpr std::ptrdiff_t m_flPressureDelay = 0x1350; // float32
                constexpr std::ptrdiff_t m_flDefBurstScale = 0x1354; // float32
                constexpr std::ptrdiff_t m_vDefBurstOffset = 0x1358; // Vector
                constexpr std::ptrdiff_t m_hBreaker = 0x1364; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_PerformanceMode = 0x1368; // PerformanceMode_t
                constexpr std::ptrdiff_t m_flPreventDamageBeforeTime = 0x136C; // GameTime_t
                constexpr std::ptrdiff_t m_BreakableContentsType = 0x1370; // BreakableContentsType_t
                constexpr std::ptrdiff_t m_strBreakableContentsPropGroupOverride = 0x1378; // CUtlString
                constexpr std::ptrdiff_t m_strBreakableContentsParticleOverride = 0x1380; // CUtlString
                constexpr std::ptrdiff_t m_bHasBreakPiecesOrCommands = 0x1388; // bool
                constexpr std::ptrdiff_t m_explodeDamage = 0x138C; // float32
                constexpr std::ptrdiff_t m_explodeRadius = 0x1390; // float32
                constexpr std::ptrdiff_t m_sExplosionType = 0x1398; // CGlobalSymbol
                constexpr std::ptrdiff_t m_explosionDelay = 0x13A0; // float32
                constexpr std::ptrdiff_t m_explosionBuildupSound = 0x13A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomEffect = 0x13B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionCustomSound = 0x13B8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_explosionModifier = 0x13C0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hPhysicsAttacker = 0x13C8; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_flLastPhysicsInfluenceTime = 0x13CC; // GameTime_t
                constexpr std::ptrdiff_t m_flDefaultFadeScale = 0x13D0; // float32
                constexpr std::ptrdiff_t m_hLastAttacker = 0x13D4; // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 6
            namespace C_RetakeGameRules {
                constexpr std::ptrdiff_t m_nMatchSeed = 0x138; // int32
                constexpr std::ptrdiff_t m_bBlockersPresent = 0x13C; // bool
                constexpr std::ptrdiff_t m_bRoundInProgress = 0x13D; // bool
                constexpr std::ptrdiff_t m_iFirstSecondHalfRound = 0x140; // int32
                constexpr std::ptrdiff_t m_iBombSite = 0x144; // int32
                constexpr std::ptrdiff_t m_hBombPlanter = 0x148; // CHandle<C_CSPlayerPawn>
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace C_SoundOpvarSetDomeEntity {
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 1
            namespace C_SoundAreaEntitySphere {
                constexpr std::ptrdiff_t m_flRadius = 0x628; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponAWP {
            }
            // Parent: C_BaseModelEntity
            // Field count: 3
            namespace C_BaseButton {
                constexpr std::ptrdiff_t m_glowEntity = 0x1098; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_usable = 0x109C; // bool
                constexpr std::ptrdiff_t m_szDisplayText = 0x10A0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            namespace CCSObserver_ObserverServices {
                constexpr std::ptrdiff_t m_obsInterpState = 0x70; // ObserverInterpState_t
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace C_SoundEventBoxHelper {
                constexpr std::ptrdiff_t m_vMins = 0x600; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x60C; // Vector
            }
            // Parent: C_SoundEventMultiPointEntity
            // Field count: 1
            namespace C_SoundEventBoxEntity {
                constexpr std::ptrdiff_t m_vecBoxHelpersNetworked = 0x6C0; // C_NetworkUtlVectorBase<SoundeventBoxHelperNetworked_t>
            }
            // Parent: None
            // Field count: 3
            namespace ServerAuthoritativeWeaponSlot_t {
                constexpr std::ptrdiff_t unClass = 0x30; // uint16
                constexpr std::ptrdiff_t unSlot = 0x32; // uint16
                constexpr std::ptrdiff_t unItemDefIdx = 0x34; // uint16
            }
            // Parent: None
            // Field count: 0
            namespace C_CSMinimapBoundary {
            }
            // Parent: None
            // Field count: 8
            namespace C_Precipitation {
                constexpr std::ptrdiff_t m_flDensity = 0x1180; // float32
                constexpr std::ptrdiff_t m_flParticleInnerDist = 0x1190; // float32
                constexpr std::ptrdiff_t m_pParticleDef = 0x1198; // char*
                constexpr std::ptrdiff_t m_tParticlePrecipTraceTimer = 0x11AC; // TimedEvent[1]
                constexpr std::ptrdiff_t m_bActiveParticlePrecipEmitter = 0x11B4; // bool[1]
                constexpr std::ptrdiff_t m_bParticlePrecipInitialized = 0x11B5; // bool
                constexpr std::ptrdiff_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0x11B6; // bool
                constexpr std::ptrdiff_t m_nAvailableSheetSequencesMaxIndex = 0x11B8; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 7
            namespace CLogicRelay {
                constexpr std::ptrdiff_t m_OnSpawn = 0x600; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTrigger = 0x618; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bDisabled = 0x630; // bool
                constexpr std::ptrdiff_t m_bWaitForRefire = 0x631; // bool
                constexpr std::ptrdiff_t m_bTriggerOnce = 0x632; // bool
                constexpr std::ptrdiff_t m_bFastRetrigger = 0x633; // bool
                constexpr std::ptrdiff_t m_bPassthoughCaller = 0x634; // bool
            }
            // Parent: None
            // Field count: 6
            namespace SequenceHistory_t {
                constexpr std::ptrdiff_t m_hSequence = 0x0; // HSequence
                constexpr std::ptrdiff_t m_flSeqStartTime = 0x4; // GameTime_t
                constexpr std::ptrdiff_t m_flSeqFixedCycle = 0x8; // float32
                constexpr std::ptrdiff_t m_nSeqLoopMode = 0xC; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flPlaybackRate = 0x10; // float32
                constexpr std::ptrdiff_t m_flCyclesPerSecond = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CPlayer_ItemServices {
            }
            // Parent: None
            // Field count: 4
            namespace CPulse_OutflowConnection {
                constexpr std::ptrdiff_t m_SourceOutflowName = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nInstruction = 0x14; // int32
                constexpr std::ptrdiff_t m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponUMP45 {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponG3SG1 {
            }
            // Parent: None
            // Field count: 2
            namespace C_SpotlightEnd {
                constexpr std::ptrdiff_t m_flLightScale = 0x1098; // float32
                constexpr std::ptrdiff_t m_Radius = 0x109C; // float32
            }
            // Parent: None
            // Field count: 23
            namespace C_Fish {
                constexpr std::ptrdiff_t m_pos = 0x1268; // VectorWS
                constexpr std::ptrdiff_t m_vel = 0x1274; // Vector
                constexpr std::ptrdiff_t m_angles = 0x1280; // QAngle
                constexpr std::ptrdiff_t m_localLifeState = 0x128C; // int32
                constexpr std::ptrdiff_t m_deathDepth = 0x1290; // float32
                constexpr std::ptrdiff_t m_deathAngle = 0x1294; // float32
                constexpr std::ptrdiff_t m_buoyancy = 0x1298; // float32
                constexpr std::ptrdiff_t m_wiggleTimer = 0x12A0; // CountdownTimer
                constexpr std::ptrdiff_t m_wigglePhase = 0x12B8; // float32
                constexpr std::ptrdiff_t m_wiggleRate = 0x12BC; // float32
                constexpr std::ptrdiff_t m_actualPos = 0x12C0; // VectorWS
                constexpr std::ptrdiff_t m_actualAngles = 0x12CC; // QAngle
                constexpr std::ptrdiff_t m_poolOrigin = 0x12D8; // VectorWS
                constexpr std::ptrdiff_t m_waterLevel = 0x12E4; // float32
                constexpr std::ptrdiff_t m_gotUpdate = 0x12E8; // bool
                constexpr std::ptrdiff_t m_x = 0x12EC; // float32
                constexpr std::ptrdiff_t m_y = 0x12F0; // float32
                constexpr std::ptrdiff_t m_z = 0x12F4; // float32
                constexpr std::ptrdiff_t m_angle = 0x12F8; // float32
                constexpr std::ptrdiff_t m_errorHistory = 0x12FC; // float32[20]
                constexpr std::ptrdiff_t m_errorHistoryIndex = 0x134C; // int32
                constexpr std::ptrdiff_t m_errorHistoryCount = 0x1350; // int32
                constexpr std::ptrdiff_t m_averageError = 0x1354; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponFamas {
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace C_EnvDetailController {
                constexpr std::ptrdiff_t m_flFadeStartDist = 0x600; // float32
                constexpr std::ptrdiff_t m_flFadeEndDist = 0x604; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CHostageRescueZoneShim {
            }
            // Parent: None
            // Field count: 0
            namespace CEnvSoundscapeAlias_snd_soundscape {
            }
            // Parent: None
            // Field count: 2
            namespace CCSPlayer_HostageServices {
                constexpr std::ptrdiff_t m_hCarriedHostage = 0x48; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hCarriedHostageProp = 0x4C; // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 0
            namespace C_GameRulesProxy {
            }
            // Parent: C_BaseEntity
            // Field count: 4
            namespace C_Team {
                constexpr std::ptrdiff_t m_aPlayerControllers = 0x600; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_aPlayers = 0x618; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                constexpr std::ptrdiff_t m_iScore = 0x630; // int32
                constexpr std::ptrdiff_t m_szTeamname = 0x634; // char[129]
            }
            // Parent: None
            // Field count: 0
            namespace C_PathParticleRopeAlias_path_particle_rope_clientside {
            }
            // Parent: C_PointEntity
            // Field count: 1
            namespace CPointChildModifier {
                constexpr std::ptrdiff_t m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x600; // bool
            }
            // Parent: None
            // Field count: 2
            namespace CCSPlayerLegacyJump {
                constexpr std::ptrdiff_t m_bOldJumpPressed = 0x10; // bool
                constexpr std::ptrdiff_t m_flJumpPressedTime = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponNOVA {
            }
            // Parent: None
            // Field count: 0
            namespace C_CS2HudModelAddon {
            }
            // Parent: None
            // Field count: 0
            namespace C_DEagle {
            }
            // Parent: None
            // Field count: 0
            namespace C_TriggerMultiple {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TerroristRushIntroCamera {
            }
            // Parent: C_CSGO_MapPreviewCameraPath
            // Field count: 1
            namespace C_CSGO_TeamPreviewCamera {
                constexpr std::ptrdiff_t m_nVariant = 0x688; // int32
            }
            // Parent: None
            // Field count: 9
            namespace C_ColorCorrectionVolume {
                constexpr std::ptrdiff_t m_LastEnterWeight = 0x1180; // float32
                constexpr std::ptrdiff_t m_LastEnterTime = 0x1184; // GameTime_t
                constexpr std::ptrdiff_t m_LastExitWeight = 0x1188; // float32
                constexpr std::ptrdiff_t m_LastExitTime = 0x118C; // GameTime_t
                constexpr std::ptrdiff_t m_bEnabled = 0x1190; // bool
                constexpr std::ptrdiff_t m_MaxWeight = 0x1194; // float32
                constexpr std::ptrdiff_t m_FadeDuration = 0x1198; // float32
                constexpr std::ptrdiff_t m_Weight = 0x119C; // float32
                constexpr std::ptrdiff_t m_lookupFilename = 0x11A0; // char[512]
            }
            // Parent: None
            // Field count: 18
            namespace CPlayer_MovementServices {
                constexpr std::ptrdiff_t m_nImpulse = 0x48; // int32
                constexpr std::ptrdiff_t m_nButtons = 0x50; // CInButtonState
                constexpr std::ptrdiff_t m_nQueuedButtonDownMask = 0x70; // uint64
                constexpr std::ptrdiff_t m_nQueuedButtonChangeMask = 0x78; // uint64
                constexpr std::ptrdiff_t m_nButtonDoublePressed = 0x80; // uint64
                constexpr std::ptrdiff_t m_pButtonPressedCmdNumber = 0x88; // uint32[64]
                constexpr std::ptrdiff_t m_nLastCommandNumberProcessed = 0x188; // uint32
                constexpr std::ptrdiff_t m_nToggleButtonDownMask = 0x190; // uint64
                constexpr std::ptrdiff_t m_flCmdForwardMove = 0x1A0; // float32
                constexpr std::ptrdiff_t m_flCmdLeftMove = 0x1A4; // float32
                constexpr std::ptrdiff_t m_flCmdUpMove = 0x1A8; // float32
                constexpr std::ptrdiff_t m_flMaxspeed = 0x1AC; // float32
                constexpr std::ptrdiff_t m_arrForceSubtickMoveWhen = 0x1B0; // float32[4]
                constexpr std::ptrdiff_t m_flForwardMove = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flLeftMove = 0x1C4; // float32
                constexpr std::ptrdiff_t m_flUpMove = 0x1C8; // float32
                constexpr std::ptrdiff_t m_vecLastMovementImpulses = 0x1CC; // Vector
                constexpr std::ptrdiff_t m_vecOldViewAngles = 0x240; // QAngle
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            namespace CInfoDynamicShadowHintBox {
                constexpr std::ptrdiff_t m_vBoxMins = 0x618; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x624; // Vector
            }
            // Parent: None
            // Field count: 18
            namespace C_ColorCorrection {
                constexpr std::ptrdiff_t m_vecOrigin = 0x600; // VectorWS
                constexpr std::ptrdiff_t m_MinFalloff = 0x60C; // float32
                constexpr std::ptrdiff_t m_MaxFalloff = 0x610; // float32
                constexpr std::ptrdiff_t m_flFadeInDuration = 0x614; // float32
                constexpr std::ptrdiff_t m_flFadeOutDuration = 0x618; // float32
                constexpr std::ptrdiff_t m_flMaxWeight = 0x61C; // float32
                constexpr std::ptrdiff_t m_flCurWeight = 0x620; // float32
                constexpr std::ptrdiff_t m_netlookupFilename = 0x624; // char[512]
                constexpr std::ptrdiff_t m_bEnabled = 0x824; // bool
                constexpr std::ptrdiff_t m_bMaster = 0x825; // bool
                constexpr std::ptrdiff_t m_bClientSide = 0x826; // bool
                constexpr std::ptrdiff_t m_bExclusive = 0x827; // bool
                constexpr std::ptrdiff_t m_bEnabledOnClient = 0x828; // bool[1]
                constexpr std::ptrdiff_t m_flCurWeightOnClient = 0x82C; // float32[1]
                constexpr std::ptrdiff_t m_bFadingIn = 0x830; // bool[1]
                constexpr std::ptrdiff_t m_flFadeStartWeight = 0x834; // float32[1]
                constexpr std::ptrdiff_t m_flFadeStartTime = 0x838; // float32[1]
                constexpr std::ptrdiff_t m_flFadeDuration = 0x83C; // float32[1]
            }
            // Parent: None
            // Field count: 1
            namespace AnimGraph2SerializedPoseRecipeSlot_t {
                constexpr std::ptrdiff_t m_topology = 0x30; // CUtlBinaryBlock
            }
            // Parent: None
            // Field count: 0
            namespace C_PhysBox {
            }
            // Parent: None
            // Field count: 4
            namespace CCSPlayer_CameraServices {
                constexpr std::ptrdiff_t m_flDeathCamTilt = 0x2B0; // float32
                constexpr std::ptrdiff_t m_hDeathCamBounds = 0x2B4; // CHandle<C_PointDeathcamBounds>
                constexpr std::ptrdiff_t m_bDeathCamBoundsSearched = 0x2B8; // bool
                constexpr std::ptrdiff_t m_vClientScopeInaccuracy = 0x2C0; // Vector
            }
            // Parent: CBaseFilter
            // Field count: 3
            namespace CFilterMultiple {
                constexpr std::ptrdiff_t m_nFilterType = 0x638; // filter_t
                constexpr std::ptrdiff_t m_iFilterName = 0x640; // CUtlSymbolLarge[10]
                constexpr std::ptrdiff_t m_hFilter = 0x690; // CHandle<C_BaseEntity>[10]
            }
            // Parent: C_BaseEntity
            // Field count: 11
            namespace CEnvSoundscape {
                constexpr std::ptrdiff_t m_OnPlay = 0x600; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flRadius = 0x618; // float32
                constexpr std::ptrdiff_t m_soundEventName = 0x620; // CGameSoundEventName
                constexpr std::ptrdiff_t m_bOverrideWithEvent = 0x628; // bool
                constexpr std::ptrdiff_t m_soundscapeIndex = 0x62C; // int32
                constexpr std::ptrdiff_t m_soundscapeEntityListId = 0x630; // int32
                constexpr std::ptrdiff_t m_positionNames = 0x638; // CUtlSymbolLarge[8]
                constexpr std::ptrdiff_t m_hProxySoundscape = 0x678; // CHandle<CEnvSoundscape>
                constexpr std::ptrdiff_t m_bDisabled = 0x67C; // bool
                constexpr std::ptrdiff_t m_soundscapeName = 0x680; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_soundEventHash = 0x688; // uint32
            }
            // Parent: None
            // Field count: 0
            namespace C_SoundEventEntityAlias_snd_event_point {
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            namespace C_SoundOpvarSetOBBWindEntity {
            }
            // Parent: None
            // Field count: 0
            namespace C_MolotovGrenade {
            }
            // Parent: None
            // Field count: 0
            namespace C_NetTestBaseCombatCharacter {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponM4A1Silencer {
            }
            // Parent: C_BaseEntity
            // Field count: 11
            namespace C_SkyCameraVolume {
                constexpr std::ptrdiff_t m_vBoxMins = 0x618; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x624; // Vector
                constexpr std::ptrdiff_t m_hTarget = 0x630; // CHandle<C_SkyCameraVolumeTarget>
                constexpr std::ptrdiff_t m_nPriority = 0x634; // int32
                constexpr std::ptrdiff_t m_bIsEnabled = 0x638; // bool
                constexpr std::ptrdiff_t m_bSkyboxBlurEffect = 0x639; // bool
                constexpr std::ptrdiff_t m_vBlurOrigin = 0x63C; // Vector
                constexpr std::ptrdiff_t m_bSkyboxReceivesWorldCsm = 0x648; // bool
                constexpr std::ptrdiff_t m_bWorldReceivesSkyboxCsm = 0x649; // bool
                constexpr std::ptrdiff_t m_bStartDisabled = 0x64A; // bool
                constexpr std::ptrdiff_t m_iszTargetName = 0x650; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 31
            namespace C_EconItemView {
                constexpr std::ptrdiff_t m_bInventoryImageRgbaRequested = 0x60; // bool
                constexpr std::ptrdiff_t m_bInventoryImageTriedCache = 0x61; // bool
                constexpr std::ptrdiff_t m_nInventoryImageRgbaWidth = 0x80; // int32
                constexpr std::ptrdiff_t m_nInventoryImageRgbaHeight = 0x84; // int32
                constexpr std::ptrdiff_t m_szCurrentLoadCachedFileName = 0x88; // char[260]
                constexpr std::ptrdiff_t m_bRestoreCustomMaterialAfterPrecache = 0x1B8; // bool
                constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x1BA; // uint16
                constexpr std::ptrdiff_t m_iEntityQuality = 0x1BC; // int32
                constexpr std::ptrdiff_t m_iEntityLevel = 0x1C0; // uint32
                constexpr std::ptrdiff_t m_iItemID = 0x1C8; // uint64
                constexpr std::ptrdiff_t m_iItemIDHigh = 0x1D0; // uint32
                constexpr std::ptrdiff_t m_iItemIDLow = 0x1D4; // uint32
                constexpr std::ptrdiff_t m_iAccountID = 0x1D8; // uint32
                constexpr std::ptrdiff_t m_iInventoryPosition = 0x1DC; // uint32
                constexpr std::ptrdiff_t m_bInitialized = 0x1E8; // bool
                constexpr std::ptrdiff_t m_bDisallowSOC = 0x1E9; // bool
                constexpr std::ptrdiff_t m_bIsStoreItem = 0x1EA; // bool
                constexpr std::ptrdiff_t m_bIsTradeItem = 0x1EB; // bool
                constexpr std::ptrdiff_t m_iEntityQuantity = 0x1EC; // int32
                constexpr std::ptrdiff_t m_iRarityOverride = 0x1F0; // int32
                constexpr std::ptrdiff_t m_iQualityOverride = 0x1F4; // int32
                constexpr std::ptrdiff_t m_iOriginOverride = 0x1F8; // int32
                constexpr std::ptrdiff_t m_ubStyleOverride = 0x1FC; // uint8
                constexpr std::ptrdiff_t m_unClientFlags = 0x1FD; // uint8
                constexpr std::ptrdiff_t m_AttributeList = 0x208; // CAttributeList
                constexpr std::ptrdiff_t m_NetworkedDynamicAttributes = 0x280; // CAttributeList
                constexpr std::ptrdiff_t m_szCustomName = 0x2F8; // char[161]
                constexpr std::ptrdiff_t m_szCustomNameOverride = 0x399; // char[161]
                constexpr std::ptrdiff_t m_szCustomNameOverride2 = 0x43A; // char[161]
                constexpr std::ptrdiff_t m_szCustomNameOverride3 = 0x4DB; // char[161]
                constexpr std::ptrdiff_t m_bInitializedTags = 0x5A8; // bool
            }
            // Parent: C_SoundEventMultiPointEntity
            // Field count: 1
            namespace C_SoundEventPathCornerEntity {
                constexpr std::ptrdiff_t m_vecCornerPairsNetworked = 0x6C0; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace C_InfoVisibilityBox {
                constexpr std::ptrdiff_t m_nMode = 0x604; // int32
                constexpr std::ptrdiff_t m_vBoxSize = 0x608; // Vector
                constexpr std::ptrdiff_t m_bEnabled = 0x614; // bool
            }
            // Parent: None
            // Field count: 2
            namespace CCSPlayer_ItemServices {
                constexpr std::ptrdiff_t m_bHasDefuser = 0x48; // bool
                constexpr std::ptrdiff_t m_bHasHelmet = 0x49; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 16
            namespace C_PathParticleRope {
                constexpr std::ptrdiff_t m_bStartActive = 0x608; // bool
                constexpr std::ptrdiff_t m_flMaxSimulationTime = 0x60C; // float32
                constexpr std::ptrdiff_t m_iszEffectName = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PathNodes_Name = 0x618; // CUtlVector<CUtlSymbolLarge>
                constexpr std::ptrdiff_t m_flParticleSpacing = 0x630; // float32
                constexpr std::ptrdiff_t m_flSlack = 0x634; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x638; // float32
                constexpr std::ptrdiff_t m_ColorTint = 0x63C; // Color
                constexpr std::ptrdiff_t m_nEffectState = 0x640; // int32
                constexpr std::ptrdiff_t m_iEffectIndex = 0x648; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_PathNodes_Position = 0x650; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentIn = 0x668; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_TangentOut = 0x680; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_Color = 0x698; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_PathNodes_PinEnabled = 0x6B0; // C_NetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_PathNodes_RadiusScale = 0x6C8; // C_NetworkUtlVectorBase<float32>
            }
            // Parent: None
            // Field count: 3
            namespace C_DecoyProjectile {
                constexpr std::ptrdiff_t m_nDecoyShotTick = 0x1348; // int32
                constexpr std::ptrdiff_t m_nClientLastKnownDecoyShotTick = 0x134C; // int32
                constexpr std::ptrdiff_t m_flTimeParticleEffectSpawn = 0x1370; // GameTime_t
            }
            // Parent: None
            // Field count: 3
            namespace C_AttributeContainer {
                constexpr std::ptrdiff_t m_Item = 0x50; // C_EconItemView
                constexpr std::ptrdiff_t m_iExternalItemProviderRegisteredToken = 0x600; // int32
                constexpr std::ptrdiff_t m_ullRegisteredAsItemID = 0x608; // uint64
            }
            // Parent: C_BasePlayerWeapon
            // Field count: 57
            namespace C_CSWeaponBase {
                constexpr std::ptrdiff_t m_iWeaponGameplayAnimState = 0x19A8; // WeaponGameplayAnimState
                constexpr std::ptrdiff_t m_flWeaponGameplayAnimStateTimestamp = 0x19AC; // GameTime_t
                constexpr std::ptrdiff_t m_flInspectCancelCompleteTime = 0x19B0; // GameTime_t
                constexpr std::ptrdiff_t m_bInspectPending = 0x19B4; // bool
                constexpr std::ptrdiff_t m_bInspectShouldLoop = 0x19B5; // bool
                constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0x19E0; // int32
                constexpr std::ptrdiff_t m_bFireOnEmpty = 0x19E4; // bool
                constexpr std::ptrdiff_t m_OnPlayerPickup = 0x19E8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_weaponMode = 0x1A00; // CSWeaponMode
                constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0x1A04; // float32
                constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0x1A08; // Vector
                constexpr std::ptrdiff_t m_flTurningInaccuracy = 0x1A14; // float32
                constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x1A18; // float32
                constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0x1A1C; // GameTime_t
                constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0x1A20; // float32
                constexpr std::ptrdiff_t m_iRecoilIndex = 0x1A24; // int32
                constexpr std::ptrdiff_t m_flRecoilIndex = 0x1A28; // float32
                constexpr std::ptrdiff_t m_bBurstMode = 0x1A2C; // bool
                constexpr std::ptrdiff_t m_flLastBurstModeChangeTime = 0x1A30; // GameTime_t
                constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0x1A34; // GameTick_t
                constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0x1A38; // float32
                constexpr std::ptrdiff_t m_bInReload = 0x1A3C; // bool
                constexpr std::ptrdiff_t m_nDeployTick = 0x1A40; // GameTick_t
                constexpr std::ptrdiff_t m_flAttackHoldStartTime = 0x1A44; // GameTime_t
                constexpr std::ptrdiff_t m_flDroppedAtTime = 0x1A48; // GameTime_t
                constexpr std::ptrdiff_t m_bIsHauledBack = 0x1A50; // bool
                constexpr std::ptrdiff_t m_bSilencerOn = 0x1A51; // bool
                constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0x1A54; // GameTime_t
                constexpr std::ptrdiff_t m_bStealthy = 0x1A58; // bool
                constexpr std::ptrdiff_t m_bInSilentReloadSection = 0x1A59; // bool
                constexpr std::ptrdiff_t m_flStealthHoldStartTime = 0x1A5C; // GameTime_t
                constexpr std::ptrdiff_t m_bReloadHeldSinceStart = 0x1A60; // bool
                constexpr std::ptrdiff_t m_flWeaponActionPlaybackRate = 0x1A64; // float32
                constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0x1A68; // int32
                constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0x1A6C; // int32
                constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0x1A70; // bool
                constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0x1A74; // float32
                constexpr std::ptrdiff_t m_bClearWeaponIdentifyingUGC = 0x1B20; // bool
                constexpr std::ptrdiff_t m_bVisualsDataSet = 0x1B21; // bool
                constexpr std::ptrdiff_t m_bUIWeapon = 0x1B22; // bool
                constexpr std::ptrdiff_t m_nCustomEconReloadEventId = 0x1B24; // int32
                constexpr std::ptrdiff_t m_bCanBePickedUp = 0x1B30; // bool
                constexpr std::ptrdiff_t m_nextPrevOwnerUseTime = 0x1B34; // GameTime_t
                constexpr std::ptrdiff_t m_hPrevOwner = 0x1B38; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_nDropTick = 0x1B3C; // GameTick_t
                constexpr std::ptrdiff_t m_bWasActiveWeaponWhenDropped = 0x1B40; // bool
                constexpr std::ptrdiff_t m_donated = 0x1B64; // bool
                constexpr std::ptrdiff_t m_fLastShotTime = 0x1B68; // GameTime_t
                constexpr std::ptrdiff_t m_bWasOwnedByCT = 0x1B6C; // bool
                constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0x1B6D; // bool
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime = 0x1B70; // float32
                constexpr std::ptrdiff_t m_flNextClientFireBulletTime_Repredict = 0x1B74; // float32
                constexpr std::ptrdiff_t m_IronSightController = 0x1BD0; // C_IronSightController
                constexpr std::ptrdiff_t m_iIronSightMode = 0x1C80; // int32
                constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x1CF8; // GameTime_t
                constexpr std::ptrdiff_t m_flWatTickOffset = 0x1D58; // float32
                constexpr std::ptrdiff_t m_flLastShakeTime = 0x1D6C; // GameTime_t
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponMag7 {
            }
            // Parent: None
            // Field count: 2
            namespace WeaponPurchaseCount_t {
                constexpr std::ptrdiff_t m_nItemDefIndex = 0x30; // uint16
                constexpr std::ptrdiff_t m_nCount = 0x32; // uint16
            }
            // Parent: None
            // Field count: 0
            namespace CBasePulseGraphInstance {
            }
            // Parent: CBaseFilter
            // Field count: 3
            namespace FilterHealth {
                constexpr std::ptrdiff_t m_bAdrenalineActive = 0x638; // bool
                constexpr std::ptrdiff_t m_iHealthMin = 0x63C; // int32
                constexpr std::ptrdiff_t m_iHealthMax = 0x640; // int32
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 13
            namespace C_PointClientUIHUD {
                constexpr std::ptrdiff_t m_bCheckCSSClasses = 0x10D0; // bool
                constexpr std::ptrdiff_t m_bIgnoreInput = 0x1248; // bool
                constexpr std::ptrdiff_t m_flWidth = 0x124C; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x1250; // float32
                constexpr std::ptrdiff_t m_flDPI = 0x1254; // float32
                constexpr std::ptrdiff_t m_flInteractDistance = 0x1258; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x125C; // float32
                constexpr std::ptrdiff_t m_unOwnerContext = 0x1260; // uint32
                constexpr std::ptrdiff_t m_unHorizontalAlign = 0x1264; // uint32
                constexpr std::ptrdiff_t m_unVerticalAlign = 0x1268; // uint32
                constexpr std::ptrdiff_t m_unOrientation = 0x126C; // uint32
                constexpr std::ptrdiff_t m_bAllowInteractionFromAllSceneWorlds = 0x1270; // bool
                constexpr std::ptrdiff_t m_vecCSSClasses = 0x1278; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: None
            // Field count: 0
            namespace SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 0
            namespace C_InfoLadderDismount {
            }
            // Parent: None
            // Field count: 14
            namespace C_PointCommentaryNode {
                constexpr std::ptrdiff_t m_bActive = 0x1280; // bool
                constexpr std::ptrdiff_t m_bWasActive = 0x1281; // bool
                constexpr std::ptrdiff_t m_flEndTime = 0x1284; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTime = 0x1288; // GameTime_t
                constexpr std::ptrdiff_t m_flStartTimeInCommentary = 0x128C; // float32
                constexpr std::ptrdiff_t m_iszCommentaryFile = 0x1290; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszTitle = 0x1298; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSpeakers = 0x12A0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iNodeNumber = 0x12A8; // int32
                constexpr std::ptrdiff_t m_iNodeNumberMax = 0x12AC; // int32
                constexpr std::ptrdiff_t m_bListenedTo = 0x12B0; // bool
                constexpr std::ptrdiff_t m_sndCommentary = 0x12B8; // CSoundPatch*
                constexpr std::ptrdiff_t m_hViewPosition = 0x12C0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bRestartAfterRestore = 0x12C4; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CSpriteOriented {
            }
            // Parent: None
            // Field count: 13
            namespace shard_model_desc_t {
                constexpr std::ptrdiff_t m_nModelID = 0x8; // int32
                constexpr std::ptrdiff_t m_hMaterialBase = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hMaterialDamageOverlay = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_solid = 0x20; // ShardSolid_t
                constexpr std::ptrdiff_t m_vecPanelSize = 0x24; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionA = 0x2C; // Vector2D
                constexpr std::ptrdiff_t m_vecStressPositionB = 0x34; // Vector2D
                constexpr std::ptrdiff_t m_vecPanelVertices = 0x40; // C_NetworkUtlVectorBase<Vector2D>
                constexpr std::ptrdiff_t m_vInitialPanelVertices = 0x58; // C_NetworkUtlVectorBase<Vector4D>
                constexpr std::ptrdiff_t m_flGlassHalfThickness = 0x70; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0x74; // bool
                constexpr std::ptrdiff_t m_bParentFrozen = 0x75; // bool
                constexpr std::ptrdiff_t m_SurfacePropStringToken = 0x78; // CUtlStringToken
            }
            // Parent: None
            // Field count: 2
            namespace C_KeychainModule {
                constexpr std::ptrdiff_t m_nKeychainDefID = 0x1270; // uint32
                constexpr std::ptrdiff_t m_nKeychainSeed = 0x1274; // uint32
            }
            // Parent: None
            // Field count: 1
            namespace CFuncWater {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0x1098; // CBuoyancyHelper
            }
            // Parent: None
            // Field count: 0
            namespace CCSPlayer_GlowServices {
            }
            // Parent: None
            // Field count: 1
            namespace CCSGameModeRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 0
            namespace C_Flashbang {
            }
            // Parent: C_PointClientUIWorldPanel
            // Field count: 1
            namespace C_PointClientUIWorldTextPanel {
                constexpr std::ptrdiff_t m_messageText = 0x1300; // char[512]
            }
            // Parent: None
            // Field count: 3
            namespace CCSPlayer_WaterServices {
                constexpr std::ptrdiff_t m_flWaterJumpTime = 0x48; // float32
                constexpr std::ptrdiff_t m_vecWaterJumpVel = 0x4C; // Vector
                constexpr std::ptrdiff_t m_flSwimSoundTime = 0x58; // float32
            }
            // Parent: C_CSPlayerPawnBase
            // Field count: 1
            namespace C_CSObserverPawn {
                constexpr std::ptrdiff_t m_hDetectParentChange = 0x1568; // CEntityHandle
            }
            // Parent: None
            // Field count: 3
            namespace ViewAngleServerChange_t {
                constexpr std::ptrdiff_t nType = 0x30; // FixAngleSet_t
                constexpr std::ptrdiff_t qAngle = 0x34; // QAngle
                constexpr std::ptrdiff_t nIndex = 0x40; // uint32
            }
            // Parent: C_BaseModelEntity
            // Field count: 9
            namespace C_FuncLadder {
                constexpr std::ptrdiff_t m_vecLadderDir = 0x1098; // Vector
                constexpr std::ptrdiff_t m_Dismounts = 0x10A8; // CUtlVector<CHandle<C_InfoLadderDismount>>
                constexpr std::ptrdiff_t m_vecLocalTop = 0x10C0; // Vector
                constexpr std::ptrdiff_t m_vecPlayerMountPositionTop = 0x10CC; // VectorWS
                constexpr std::ptrdiff_t m_vecPlayerMountPositionBottom = 0x10D8; // VectorWS
                constexpr std::ptrdiff_t m_flAutoRideSpeed = 0x10E4; // float32
                constexpr std::ptrdiff_t m_bDisabled = 0x10E8; // bool
                constexpr std::ptrdiff_t m_bFakeLadder = 0x10E9; // bool
                constexpr std::ptrdiff_t m_bHasSlack = 0x10EA; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponMP5SD {
            }
            // Parent: None
            // Field count: 0
            namespace C_World {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponGalilAR {
            }
            // Parent: None
            // Field count: 6
            namespace CCSPlayerBase_CameraServices {
                constexpr std::ptrdiff_t m_iFOV = 0x298; // uint32
                constexpr std::ptrdiff_t m_iFOVStart = 0x29C; // uint32
                constexpr std::ptrdiff_t m_flFOVTime = 0x2A0; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVRate = 0x2A4; // float32
                constexpr std::ptrdiff_t m_hZoomOwner = 0x2A8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flLastShotFOV = 0x2AC; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_TeamplayRules {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponSG556 {
            }
            // Parent: C_CSPlayerPawnBase
            // Field count: 105
            namespace C_CSPlayerPawn {
                constexpr std::ptrdiff_t m_pBulletServices = 0x1570; // CCSPlayer_BulletServices*
                constexpr std::ptrdiff_t m_pHostageServices = 0x1578; // CCSPlayer_HostageServices*
                constexpr std::ptrdiff_t m_pBuyServices = 0x1580; // CCSPlayer_BuyServices*
                constexpr std::ptrdiff_t m_pGlowServices = 0x1588; // CCSPlayer_GlowServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x1590; // CCSPlayer_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pAimPunchServices = 0x1598; // CCSPlayer_AimPunchServices*
                constexpr std::ptrdiff_t m_pDamageReactServices = 0x15A0; // CCSPlayer_DamageReactServices*
                constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x15A8; // GameTime_t
                constexpr std::ptrdiff_t m_flLastFiredWeaponTime = 0x15AC; // GameTime_t
                constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x15B0; // bool
                constexpr std::ptrdiff_t m_flLandingTimeSeconds = 0x15B4; // float32
                constexpr std::ptrdiff_t m_flOldFallVelocity = 0x15B8; // float32
                constexpr std::ptrdiff_t m_szLastPlaceName = 0x15BC; // char[18]
                constexpr std::ptrdiff_t m_bPrevDefuser = 0x15CE; // bool
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x15CF; // bool
                constexpr std::ptrdiff_t m_nPrevArmorVal = 0x15D0; // int32
                constexpr std::ptrdiff_t m_nPrevGrenadeAmmoCount = 0x15D4; // int32
                constexpr std::ptrdiff_t m_unPreviousWeaponHash = 0x15D8; // uint32
                constexpr std::ptrdiff_t m_unWeaponHash = 0x15DC; // uint32
                constexpr std::ptrdiff_t m_bInBuyZone = 0x15E0; // bool
                constexpr std::ptrdiff_t m_bPreviouslyInBuyZone = 0x15E1; // bool
                constexpr std::ptrdiff_t m_bInLanding = 0x15E2; // bool
                constexpr std::ptrdiff_t m_flLandingStartTime = 0x15E4; // float32
                constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x15E8; // bool
                constexpr std::ptrdiff_t m_bInBombZone = 0x15E9; // bool
                constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x15EA; // bool
                constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x15EC; // GameTime_t
                constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x15F0; // GameTime_t
                constexpr std::ptrdiff_t m_iRetakesOffering = 0x1758; // int32
                constexpr std::ptrdiff_t m_iRetakesOfferingCard = 0x175C; // int32
                constexpr std::ptrdiff_t m_bRetakesHasDefuseKit = 0x1760; // bool
                constexpr std::ptrdiff_t m_bRetakesMVPLastRound = 0x1761; // bool
                constexpr std::ptrdiff_t m_iRetakesMVPBoostItem = 0x1764; // int32
                constexpr std::ptrdiff_t m_RetakesMVPBoostExtraUtility = 0x1768; // loadout_slot_t
                constexpr std::ptrdiff_t m_bNeedToReApplyGloves = 0x176D; // bool
                constexpr std::ptrdiff_t m_EconGloves = 0x1770; // C_EconItemView
                constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x1D20; // uint8
                constexpr std::ptrdiff_t m_bMustSyncRagdollState = 0x1D21; // bool
                constexpr std::ptrdiff_t m_nRagdollDamageBone = 0x1D24; // int32
                constexpr std::ptrdiff_t m_vRagdollDamageForce = 0x1D28; // Vector
                constexpr std::ptrdiff_t m_szRagdollDamageWeaponName = 0x1D34; // char[64]
                constexpr std::ptrdiff_t m_bRagdollDamageHeadshot = 0x1D74; // bool
                constexpr std::ptrdiff_t m_vRagdollServerOrigin = 0x1D78; // VectorWS
                constexpr std::ptrdiff_t m_lastLandTime = 0x1D84; // GameTime_t
                constexpr std::ptrdiff_t m_bOnGroundLastTick = 0x1D88; // bool
                constexpr std::ptrdiff_t m_hHudModelArms = 0x1DA4; // CHandle<C_CS2HudModelArms>
                constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x1DA8; // QAngle
                constexpr std::ptrdiff_t m_bLeftHanded = 0x1DB4; // bool
                constexpr std::ptrdiff_t m_fSwitchedHandednessTime = 0x1DB8; // GameTime_t
                constexpr std::ptrdiff_t m_flViewmodelOffsetX = 0x1DBC; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetY = 0x1DC0; // float32
                constexpr std::ptrdiff_t m_flViewmodelOffsetZ = 0x1DC4; // float32
                constexpr std::ptrdiff_t m_flViewmodelFOV = 0x1DC8; // float32
                constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x1DCC; // uint32[5]
                constexpr std::ptrdiff_t m_GunGameImmunityColor = 0x1E10; // Color
                constexpr std::ptrdiff_t m_vecBulletHitModels = 0x1E60; // CUtlVector<C_BulletHitModel*>
                constexpr std::ptrdiff_t m_bIsWalking = 0x1E78; // bool
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1E80; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_bIsScoped = 0x1E98; // bool
                constexpr std::ptrdiff_t m_bResumeZoom = 0x1E99; // bool
                constexpr std::ptrdiff_t m_bIsDefusing = 0x1E9A; // bool
                constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x1E9B; // bool
                constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x1E9C; // CSPlayerBlockingUseAction_t
                constexpr std::ptrdiff_t m_flEmitSoundTime = 0x1EA0; // GameTime_t
                constexpr std::ptrdiff_t m_flEmitSoundTime_Client = 0x1EA4; // GameTime_t
                constexpr std::ptrdiff_t m_bInNoDefuseArea = 0x1EA8; // bool
                constexpr std::ptrdiff_t m_nWhichBombZone = 0x1EAC; // int32
                constexpr std::ptrdiff_t m_iShotsFired = 0x1EB0; // int32
                constexpr std::ptrdiff_t m_flFlinchStack = 0x1EB4; // float32
                constexpr std::ptrdiff_t m_flVelocityModifier = 0x1EB8; // float32
                constexpr std::ptrdiff_t m_bWaitForNoAttack = 0x1EBC; // bool
                constexpr std::ptrdiff_t m_ignoreLadderJumpTime = 0x1EC0; // float32
                constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x1EC5; // bool
                constexpr std::ptrdiff_t m_ArmorValue = 0x1EC8; // int32
                constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x1ECC; // uint16
                constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x1ECE; // uint16
                constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x1ED0; // uint16
                constexpr std::ptrdiff_t m_nLastKillerIndex = 0x1ED4; // CEntityIndex
                constexpr std::ptrdiff_t m_bOldIsScoped = 0x1ED8; // bool
                constexpr std::ptrdiff_t m_bHasDeathInfo = 0x1ED9; // bool
                constexpr std::ptrdiff_t m_flDeathInfoTime = 0x1EDC; // float32
                constexpr std::ptrdiff_t m_vecDeathInfoOrigin = 0x1EE0; // VectorWS
                constexpr std::ptrdiff_t m_grenadeParameterStashTime = 0x1F18; // GameTime_t
                constexpr std::ptrdiff_t m_bGrenadeParametersStashed = 0x1F1C; // bool
                constexpr std::ptrdiff_t m_angStashedShootAngles = 0x1F20; // QAngle
                constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPosition = 0x1F2C; // VectorWS
                constexpr std::ptrdiff_t m_vecStashedGrenadeThrowPawnCenter = 0x1F38; // VectorWS
                constexpr std::ptrdiff_t m_vecStashedVelocity = 0x1F44; // Vector
                constexpr std::ptrdiff_t m_flInterpolatedInaccuracy = 0x1F50; // float32
                constexpr std::ptrdiff_t m_bShouldAutobuyDMWeapons = 0x3500; // bool
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTime = 0x3504; // GameTime_t
                constexpr std::ptrdiff_t m_bGunGameImmunity = 0x3508; // bool
                constexpr std::ptrdiff_t m_fImmuneToGunGameDamageTimeLast = 0x350C; // GameTime_t
                constexpr std::ptrdiff_t m_flModifier0 = 0x3510; // float32
                constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x3514; // float32
                constexpr std::ptrdiff_t m_nPlayerInfernoBodyFx = 0x3580; // ParticleIndex_t
                constexpr std::ptrdiff_t m_angEyeAngles = 0x3600; // QAngle
                constexpr std::ptrdiff_t m_arrOldEyeAnglesTimes = 0x3690; // GameTime_t[4]
                constexpr std::ptrdiff_t m_arrOldEyeAngles = 0x36A0; // QAngle[4]
                constexpr std::ptrdiff_t m_angEyeAnglesVelocity = 0x36D0; // QAngle
                constexpr std::ptrdiff_t m_iIDEntIndex = 0x36DC; // CEntityIndex
                constexpr std::ptrdiff_t m_delayTargetIDTimer = 0x36E0; // CountdownTimer
                constexpr std::ptrdiff_t m_iTargetItemEntIdx = 0x36F8; // CEntityIndex
                constexpr std::ptrdiff_t m_iOldIDEntIndex = 0x36FC; // CEntityIndex
                constexpr std::ptrdiff_t m_holdTargetIDTimer = 0x3700; // CountdownTimer
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 23
            namespace C_Hostage {
                constexpr std::ptrdiff_t m_entitySpottedState = 0x12F0; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_leader = 0x1308; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_reuseTimer = 0x1310; // CountdownTimer
                constexpr std::ptrdiff_t m_vel = 0x1328; // Vector
                constexpr std::ptrdiff_t m_isRescued = 0x1334; // bool
                constexpr std::ptrdiff_t m_jumpedThisFrame = 0x1335; // bool
                constexpr std::ptrdiff_t m_nHostageState = 0x1338; // int32
                constexpr std::ptrdiff_t m_bHandsHaveBeenCut = 0x133C; // bool
                constexpr std::ptrdiff_t m_hHostageGrabber = 0x1340; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastGrabTime = 0x1344; // GameTime_t
                constexpr std::ptrdiff_t m_vecGrabbedPos = 0x1348; // VectorWS
                constexpr std::ptrdiff_t m_flRescueStartTime = 0x1354; // GameTime_t
                constexpr std::ptrdiff_t m_flGrabSuccessTime = 0x1358; // GameTime_t
                constexpr std::ptrdiff_t m_flDropStartTime = 0x135C; // GameTime_t
                constexpr std::ptrdiff_t m_flDeadOrRescuedTime = 0x1360; // GameTime_t
                constexpr std::ptrdiff_t m_blinkTimer = 0x1368; // CountdownTimer
                constexpr std::ptrdiff_t m_lookAt = 0x1380; // VectorWS
                constexpr std::ptrdiff_t m_lookAroundTimer = 0x1390; // CountdownTimer
                constexpr std::ptrdiff_t m_isInit = 0x13A8; // bool
                constexpr std::ptrdiff_t m_eyeAttachment = 0x13A9; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_chestAttachment = 0x13AA; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_pPredictionOwner = 0x13B0; // CBasePlayerController*
                constexpr std::ptrdiff_t m_fNewestAlphaThinkTime = 0x13B8; // GameTime_t
            }
            // Parent: None
            // Field count: 6
            namespace CPlayer_ObserverServices {
                constexpr std::ptrdiff_t m_iObserverMode = 0x48; // uint8
                constexpr std::ptrdiff_t m_hObserverTarget = 0x4C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iObserverLastMode = 0x50; // ObserverMode_t
                constexpr std::ptrdiff_t m_bForcedObserverMode = 0x54; // bool
                constexpr std::ptrdiff_t m_flObserverChaseDistance = 0x58; // float32
                constexpr std::ptrdiff_t m_flObserverChaseDistanceCalcTime = 0x5C; // GameTime_t
            }
            // Parent: None
            // Field count: 1
            namespace CCashStack {
                constexpr std::ptrdiff_t m_nCashStackValue = 0x1098; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 4
            namespace C_SoundAreaEntityBase {
                constexpr std::ptrdiff_t m_bDisabled = 0x600; // bool
                constexpr std::ptrdiff_t m_bWasEnabled = 0x608; // bool
                constexpr std::ptrdiff_t m_iszSoundAreaType = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vPos = 0x618; // Vector
            }
            // Parent: C_BaseEntity
            // Field count: 6
            namespace C_PlayerVisibility {
                constexpr std::ptrdiff_t m_flVisibilityStrength = 0x600; // float32
                constexpr std::ptrdiff_t m_flFogDistanceMultiplier = 0x604; // float32
                constexpr std::ptrdiff_t m_flFogMaxDensityMultiplier = 0x608; // float32
                constexpr std::ptrdiff_t m_flFadeTime = 0x60C; // float32
                constexpr std::ptrdiff_t m_bStartDisabled = 0x610; // bool
                constexpr std::ptrdiff_t m_bIsEnabled = 0x611; // bool
            }
            // Parent: None
            // Field count: 3
            namespace CAttributeManager__cached_attribute_float_t {
                constexpr std::ptrdiff_t flIn = 0x0; // float32
                constexpr std::ptrdiff_t iAttribHook = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t flOut = 0x10; // float32
            }
            // Parent: CBaseAnimGraph
            // Field count: 7
            namespace C_BasePlayerWeapon {
                constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0x1918; // GameTick_t
                constexpr std::ptrdiff_t m_flNextPrimaryAttackTickRatio = 0x191C; // float32
                constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0x1920; // GameTick_t
                constexpr std::ptrdiff_t m_flNextSecondaryAttackTickRatio = 0x1924; // float32
                constexpr std::ptrdiff_t m_iClip1 = 0x1928; // int32
                constexpr std::ptrdiff_t m_iClip2 = 0x192C; // int32
                constexpr std::ptrdiff_t m_pReserveAmmo = 0x1930; // int32[2]
            }
            // Parent: C_BaseEntity
            // Field count: 1
            namespace CRagdollManager {
                constexpr std::ptrdiff_t m_iCurrentMaxRagdollCount = 0x600; // int8
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace CSoundOpvarSetBoxEntity {
            }
            // Parent: None
            // Field count: 0
            namespace C_HEGrenade {
            }
            // Parent: None
            // Field count: 4
            namespace C_GameRules {
                constexpr std::ptrdiff_t __m_pChainEntity = 0x8; // CNetworkVarChainer
                constexpr std::ptrdiff_t m_nTotalPausedTicks = 0x30; // int32
                constexpr std::ptrdiff_t m_nPauseStartTick = 0x34; // int32
                constexpr std::ptrdiff_t m_bGamePaused = 0x38; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponMAC10 {
            }
            // Parent: C_BaseEntity
            // Field count: 14
            namespace C_CSGO_MapPreviewCameraPath {
                constexpr std::ptrdiff_t m_flZFar = 0x600; // float32
                constexpr std::ptrdiff_t m_flZNear = 0x604; // float32
                constexpr std::ptrdiff_t m_bLoop = 0x608; // bool
                constexpr std::ptrdiff_t m_bVerticalFOV = 0x609; // bool
                constexpr std::ptrdiff_t m_bConstantSpeed = 0x60A; // bool
                constexpr std::ptrdiff_t m_flDuration = 0x60C; // float32
                constexpr std::ptrdiff_t m_flPathLength = 0x650; // float32
                constexpr std::ptrdiff_t m_flPathDuration = 0x654; // float32
                constexpr std::ptrdiff_t m_bDofEnabled = 0x66C; // bool
                constexpr std::ptrdiff_t m_flDofNearBlurry = 0x670; // float32
                constexpr std::ptrdiff_t m_flDofNearCrisp = 0x674; // float32
                constexpr std::ptrdiff_t m_flDofFarCrisp = 0x678; // float32
                constexpr std::ptrdiff_t m_flDofFarBlurry = 0x67C; // float32
                constexpr std::ptrdiff_t m_flDofTiltToGround = 0x680; // float32
            }
            // Parent: C_BaseModelEntity
            // Field count: 19
            namespace C_PointWorldText {
                constexpr std::ptrdiff_t m_bForceRecreateNextUpdate = 0x10A0; // bool
                constexpr std::ptrdiff_t m_nTextWidthPx = 0x10B8; // int32
                constexpr std::ptrdiff_t m_nTextHeightPx = 0x10BC; // int32
                constexpr std::ptrdiff_t m_messageText = 0x10C0; // char[512]
                constexpr std::ptrdiff_t m_FontName = 0x12C0; // char[64]
                constexpr std::ptrdiff_t m_BackgroundMaterialName = 0x1300; // char[64]
                constexpr std::ptrdiff_t m_bEnabled = 0x1340; // bool
                constexpr std::ptrdiff_t m_bFullbright = 0x1341; // bool
                constexpr std::ptrdiff_t m_flWorldUnitsPerPx = 0x1344; // float32
                constexpr std::ptrdiff_t m_flFontSize = 0x1348; // float32
                constexpr std::ptrdiff_t m_flDepthOffset = 0x134C; // float32
                constexpr std::ptrdiff_t m_bDrawBackground = 0x1350; // bool
                constexpr std::ptrdiff_t m_flBackgroundBorderWidth = 0x1354; // float32
                constexpr std::ptrdiff_t m_flBackgroundBorderHeight = 0x1358; // float32
                constexpr std::ptrdiff_t m_flBackgroundWorldToUV = 0x135C; // float32
                constexpr std::ptrdiff_t m_Color = 0x1360; // Color
                constexpr std::ptrdiff_t m_nJustifyHorizontal = 0x1364; // PointWorldTextJustifyHorizontal_t
                constexpr std::ptrdiff_t m_nJustifyVertical = 0x1368; // PointWorldTextJustifyVertical_t
                constexpr std::ptrdiff_t m_nReorientMode = 0x136C; // PointWorldTextReorientMode_t
            }
            // Parent: None
            // Field count: 40
            namespace C_RopeKeyframe {
                constexpr std::ptrdiff_t m_LinksTouchingSomething = 0x10A0; // CBitVec<10>
                constexpr std::ptrdiff_t m_nLinksTouchingSomething = 0x10A4; // int32
                constexpr std::ptrdiff_t m_bApplyWind = 0x10A8; // bool
                constexpr std::ptrdiff_t m_fPrevLockedPoints = 0x10AC; // int32
                constexpr std::ptrdiff_t m_iForcePointMoveCounter = 0x10B0; // int32
                constexpr std::ptrdiff_t m_bPrevEndPointPos = 0x10B4; // bool[2]
                constexpr std::ptrdiff_t m_vPrevEndPointPos = 0x10B8; // VectorWS[2]
                constexpr std::ptrdiff_t m_flCurScroll = 0x10D0; // float32
                constexpr std::ptrdiff_t m_flScrollSpeed = 0x10D4; // float32
                constexpr std::ptrdiff_t m_RopeFlags = 0x10D8; // uint16
                constexpr std::ptrdiff_t m_iRopeMaterialModelIndex = 0x10E0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nSegments = 0x1358; // uint8
                constexpr std::ptrdiff_t m_hStartPoint = 0x135C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hEndPoint = 0x1360; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iStartAttachment = 0x1364; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_iEndAttachment = 0x1365; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_Subdiv = 0x1366; // uint8
                constexpr std::ptrdiff_t m_RopeLength = 0x1368; // int16
                constexpr std::ptrdiff_t m_Slack = 0x136A; // int16
                constexpr std::ptrdiff_t m_TextureScale = 0x136C; // float32
                constexpr std::ptrdiff_t m_fLockedPoints = 0x1370; // uint8
                constexpr std::ptrdiff_t m_nChangeCount = 0x1371; // uint8
                constexpr std::ptrdiff_t m_Width = 0x1374; // float32
                constexpr std::ptrdiff_t m_PhysicsDelegate = 0x1378; // C_RopeKeyframe::CPhysicsDelegate
                constexpr std::ptrdiff_t m_hMaterial = 0x1388; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_TextureHeight = 0x1390; // int32
                constexpr std::ptrdiff_t m_vecImpulse = 0x1394; // Vector
                constexpr std::ptrdiff_t m_vecPreviousImpulse = 0x13A0; // Vector
                constexpr std::ptrdiff_t m_flCurrentGustTimer = 0x13AC; // float32
                constexpr std::ptrdiff_t m_flCurrentGustLifetime = 0x13B0; // float32
                constexpr std::ptrdiff_t m_flTimeToNextGust = 0x13B4; // float32
                constexpr std::ptrdiff_t m_vWindDir = 0x13B8; // Vector
                constexpr std::ptrdiff_t m_vColorMod = 0x13C4; // Vector
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentPos = 0x13D0; // VectorWS[2]
                constexpr std::ptrdiff_t m_vCachedEndPointAttachmentAngle = 0x13E8; // QAngle[2]
                constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x1400; // bool
                constexpr std::ptrdiff_t m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bNewDataThisFrame = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bPhysicsInitted = 0x0; // bitfield:1
            }
            // Parent: None
            // Field count: 0
            namespace C_BaseToggle {
            }
            // Parent: None
            // Field count: 0
            namespace C_EnvCubemapBox {
            }
            // Parent: None
            // Field count: 0
            namespace C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
            }
            // Parent: None
            // Field count: 1
            namespace C_RopeKeyframe__CPhysicsDelegate {
                constexpr std::ptrdiff_t m_pKeyframe = 0x8; // C_RopeKeyframe*
            }
            // Parent: C_PointEntity
            // Field count: 5
            namespace CInfoDynamicShadowHint {
                constexpr std::ptrdiff_t m_bDisabled = 0x600; // bool
                constexpr std::ptrdiff_t m_flRange = 0x604; // float32
                constexpr std::ptrdiff_t m_nImportance = 0x608; // int32
                constexpr std::ptrdiff_t m_nLightChoice = 0x60C; // int32
                constexpr std::ptrdiff_t m_hLight = 0x610; // CHandle<C_BaseEntity>
            }
            // Parent: C_PointEntity
            // Field count: 6
            namespace CPathNode {
                constexpr std::ptrdiff_t m_vInTangentLocal = 0x600; // Vector
                constexpr std::ptrdiff_t m_vOutTangentLocal = 0x60C; // Vector
                constexpr std::ptrdiff_t m_strParentPathUniqueID = 0x618; // CUtlString
                constexpr std::ptrdiff_t m_strPathNodeParameter = 0x620; // CUtlString
                constexpr std::ptrdiff_t m_xWSPrevParent = 0x630; // CTransformWS
                constexpr std::ptrdiff_t m_hPath = 0x650; // CHandle<CPathWithDynamicNodes>
            }
            // Parent: None
            // Field count: 0
            namespace C_FuncMoveLinear {
            }
            // Parent: C_BaseEntity
            // Field count: 6
            namespace C_EnvShakeVolume {
                constexpr std::ptrdiff_t m_vBoxMins = 0x618; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x624; // Vector
                constexpr std::ptrdiff_t m_flAmplitude = 0x630; // float32
                constexpr std::ptrdiff_t m_flFrequency = 0x634; // float32
                constexpr std::ptrdiff_t m_flFalloffDistance = 0x638; // float32
                constexpr std::ptrdiff_t m_flRollScale = 0x63C; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CServerOnlyModelEntity {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamSelectCamera {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponXM1014 {
            }
            // Parent: None
            // Field count: 0
            namespace C_WorldModelGloves {
            }
            // Parent: None
            // Field count: 0
            namespace C_PhysicsPropMultiplayer {
            }
            // Parent: C_SoundEventEntity
            // Field count: 2
            namespace C_SoundEventOBBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x6C0; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x6CC; // Vector
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponAug {
            }
            // Parent: None
            // Field count: 8
            namespace C_BasePropDoor {
                constexpr std::ptrdiff_t m_eDoorState = 0x14C0; // DoorState_t
                constexpr std::ptrdiff_t m_modelChanged = 0x14C4; // bool
                constexpr std::ptrdiff_t m_bLocked = 0x14C5; // bool
                constexpr std::ptrdiff_t m_bNoNPCs = 0x14C6; // bool
                constexpr std::ptrdiff_t m_closedPosition = 0x14C8; // VectorWS
                constexpr std::ptrdiff_t m_closedAngles = 0x14D4; // QAngle
                constexpr std::ptrdiff_t m_hMaster = 0x14E0; // CHandle<C_BasePropDoor>
                constexpr std::ptrdiff_t m_vWhereToSetLightingOrigin = 0x14E4; // VectorWS
            }
            // Parent: None
            // Field count: 0
            namespace CChoreoInfoTarget {
            }
            // Parent: None
            // Field count: 0
            namespace C_Item_Healthshot {
            }
            // Parent: C_BaseEntity
            // Field count: 7
            namespace CCSCustomHudLayout {
                constexpr std::ptrdiff_t m_strLayout = 0x618; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bObservable = 0x620; // bool
                constexpr std::ptrdiff_t m_vecPlayerLayoutStates = 0x628; // C_UtlVectorEmbeddedNetworkVar<CCSCustomHudLayoutState>
                constexpr std::ptrdiff_t m_globalLayoutState = 0x690; // CCSCustomHudLayoutState
                constexpr std::ptrdiff_t m_vecPanelIds = 0x798; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_vecClassNames = 0x7B0; // C_NetworkUtlVectorBase<CUtlString>
                constexpr std::ptrdiff_t m_vecDialogVariableNames = 0x7C8; // C_NetworkUtlVectorBase<CUtlString>
            }
            // Parent: None
            // Field count: 3
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
            }
            // Parent: C_BaseEntity
            // Field count: 47
            namespace C_BaseModelEntity {
                constexpr std::ptrdiff_t m_CRenderComponent = 0xAF8; // CRenderComponent*
                constexpr std::ptrdiff_t m_CHitboxComponent = 0xB00; // CHitboxComponent
                constexpr std::ptrdiff_t m_pChoreoComponent = 0xB18; // CChoreoComponent*
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0 = 0xB20; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1 = 0xB24; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2 = 0xB28; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3 = 0xB2C; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4 = 0xB30; // HitGroup_t
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed0_PartIndex = 0xB34; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed1_PartIndex = 0xB38; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed2_PartIndex = 0xB3C; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed3_PartIndex = 0xB40; // int32
                constexpr std::ptrdiff_t m_nDestructiblePartInitialStateDestructed4_PartIndex = 0xB44; // int32
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces = 0xB48; // bool
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces = 0xB49; // bool
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces = 0xB4A; // bool
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces = 0xB4B; // bool
                constexpr std::ptrdiff_t m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces = 0xB4C; // bool
                constexpr std::ptrdiff_t m_pDestructiblePartsSystemComponent = 0xB50; // CDestructiblePartsComponent*
                constexpr std::ptrdiff_t m_bInitModelEffects = 0xC78; // bool
                constexpr std::ptrdiff_t m_bDoingModelEffects = 0xC79; // bool
                constexpr std::ptrdiff_t m_iOldHealth = 0xC7C; // int32
                constexpr std::ptrdiff_t m_nRenderMode = 0xC80; // RenderMode_t
                constexpr std::ptrdiff_t m_nRenderFX = 0xC81; // RenderFx_t
                constexpr std::ptrdiff_t m_bAllowFadeInView = 0xC82; // bool
                constexpr std::ptrdiff_t m_clrRender = 0xCA0; // Color
                constexpr std::ptrdiff_t m_vecRenderAttributes = 0xCA8; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                constexpr std::ptrdiff_t m_bRenderToCubemaps = 0xD28; // bool
                constexpr std::ptrdiff_t m_bExpandRenderBoundsToIncludeCloth = 0xD29; // bool
                constexpr std::ptrdiff_t m_bNoInterpolate = 0xD2A; // bool
                constexpr std::ptrdiff_t m_Collision = 0xD30; // CCollisionProperty
                constexpr std::ptrdiff_t m_Glow = 0xDE8; // CGlowProperty
                constexpr std::ptrdiff_t m_flGlowBackfaceMult = 0xE40; // float32
                constexpr std::ptrdiff_t m_fadeMinDist = 0xE44; // float32
                constexpr std::ptrdiff_t m_fadeMaxDist = 0xE48; // float32
                constexpr std::ptrdiff_t m_flFadeScale = 0xE4C; // float32
                constexpr std::ptrdiff_t m_flShadowStrength = 0xE50; // float32
                constexpr std::ptrdiff_t m_nObjectCulling = 0xE54; // uint8
                constexpr std::ptrdiff_t m_nRequiredDecalRtEncoding = 0xE55; // DecalRtEncoding_t
                constexpr std::ptrdiff_t m_bodyGroupTotalRequestCount = 0xE58; // uint32
                constexpr std::ptrdiff_t m_bodyGroupRequests = 0xE60; // CUtlVectorFixedGrowable<C_BaseModelEntity::BodyGroupRequest_t,8>
                constexpr std::ptrdiff_t m_bodyGroupChoices = 0xF38; // CUtlOrderedMap<CGlobalSymbol,int32>
                constexpr std::ptrdiff_t m_vecViewOffset = 0xF60; // CNetworkViewOffsetVector
                constexpr std::ptrdiff_t m_pClientAlphaProperty = 0x1040; // CClientAlphaProperty*
                constexpr std::ptrdiff_t m_ClientOverrideTint = 0x1048; // Color
                constexpr std::ptrdiff_t m_bUseClientOverrideTint = 0x104C; // bool
                constexpr std::ptrdiff_t m_bvDisabledHitGroups = 0x1088; // uint32[1]
            }
            // Parent: None
            // Field count: 1
            namespace CCSPlayer_BulletServices {
                constexpr std::ptrdiff_t m_totalHitsOnServer = 0x48; // int32
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace C_SoundOpvarSetAutoRoomEntity {
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_EndOfMatchLineupEnd {
            }
            // Parent: None
            // Field count: 0
            namespace C_MultiplayRules {
            }
            // Parent: None
            // Field count: 0
            namespace CPlayer_AutoaimServices {
            }
            // Parent: None
            // Field count: 0
            namespace C_LightDirectionalEntity {
            }
            // Parent: None
            // Field count: 82
            namespace C_BaseEntity {
                constexpr std::ptrdiff_t m_CBodyComponent = 0x30; // CBodyComponent*
                constexpr std::ptrdiff_t m_NetworkTransmitComponent = 0x38; // CNetworkTransmitComponent
                constexpr std::ptrdiff_t m_nLastThinkTick = 0x328; // GameTick_t
                constexpr std::ptrdiff_t m_pGameSceneNode = 0x330; // CGameSceneNode*
                constexpr std::ptrdiff_t m_pRenderComponent = 0x338; // CRenderComponent*
                constexpr std::ptrdiff_t m_pCollision = 0x340; // CCollisionProperty*
                constexpr std::ptrdiff_t m_iMaxHealth = 0x348; // int32
                constexpr std::ptrdiff_t m_iHealth = 0x34C; // int32
                constexpr std::ptrdiff_t m_flDamageAccumulator = 0x350; // float32
                constexpr std::ptrdiff_t m_lifeState = 0x354; // uint8
                constexpr std::ptrdiff_t m_bTakesDamage = 0x355; // bool
                constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x358; // TakeDamageFlags_t
                constexpr std::ptrdiff_t m_nPlatformType = 0x360; // EntityPlatformTypes_t
                constexpr std::ptrdiff_t m_ubInterpolationFrame = 0x361; // uint8
                constexpr std::ptrdiff_t m_hSceneObjectController = 0x364; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nNoInterpolationTick = 0x368; // int32
                constexpr std::ptrdiff_t m_nVisibilityNoInterpolationTick = 0x36C; // int32
                constexpr std::ptrdiff_t m_flProxyRandomValue = 0x370; // float32
                constexpr std::ptrdiff_t m_iEFlags = 0x374; // int32
                constexpr std::ptrdiff_t m_nWaterType = 0x378; // uint8
                constexpr std::ptrdiff_t m_bInterpolateEvenWithNoModel = 0x379; // bool
                constexpr std::ptrdiff_t m_bPredictionEligible = 0x37A; // bool
                constexpr std::ptrdiff_t m_bApplyLayerMatchIDToModel = 0x37B; // bool
                constexpr std::ptrdiff_t m_tokLayerMatchID = 0x37C; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSubclassID = 0x380; // CUtlStringToken
                constexpr std::ptrdiff_t m_nSimulationTick = 0x390; // int32
                constexpr std::ptrdiff_t m_iCurrentThinkContext = 0x394; // int32
                constexpr std::ptrdiff_t m_aThinkFunctions = 0x398; // CUtlVector<thinkfunc_t>
                constexpr std::ptrdiff_t m_bDisabledContextThinks = 0x3B0; // bool
                constexpr std::ptrdiff_t m_flAnimTime = 0x3B4; // float32
                constexpr std::ptrdiff_t m_flSimulationTime = 0x3B8; // float32
                constexpr std::ptrdiff_t m_nSceneObjectOverrideFlags = 0x3BC; // uint8
                constexpr std::ptrdiff_t m_bHasSuccessfullyInterpolated = 0x3BD; // bool
                constexpr std::ptrdiff_t m_bHasAddedVarsToInterpolation = 0x3BE; // bool
                constexpr std::ptrdiff_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x3BF; // bool
                constexpr std::ptrdiff_t m_nInterpolationLatchDirtyFlags = 0x3C0; // int32[2]
                constexpr std::ptrdiff_t m_ListEntry = 0x3C8; // uint16[11]
                constexpr std::ptrdiff_t m_flCreateTime = 0x3E0; // GameTime_t
                constexpr std::ptrdiff_t m_EntClientFlags = 0x3E4; // uint16
                constexpr std::ptrdiff_t m_bClientSideRagdoll = 0x3E6; // bool
                constexpr std::ptrdiff_t m_iTeamNum = 0x3E7; // uint8
                constexpr std::ptrdiff_t m_spawnflags = 0x3E8; // uint32
                constexpr std::ptrdiff_t m_nNextThinkTick = 0x3EC; // GameTick_t
                constexpr std::ptrdiff_t m_fFlags = 0x3F4; // uint32
                constexpr std::ptrdiff_t m_vecAbsVelocity = 0x3F8; // Vector
                constexpr std::ptrdiff_t m_vecServerVelocity = 0x404; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecVelocity = 0x430; // CNetworkVelocityVector
                constexpr std::ptrdiff_t m_vecBaseVelocity = 0x510; // Vector
                constexpr std::ptrdiff_t m_hEffectEntity = 0x51C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOwnerEntity = 0x520; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_MoveCollide = 0x524; // MoveCollide_t
                constexpr std::ptrdiff_t m_MoveType = 0x525; // MoveType_t
                constexpr std::ptrdiff_t m_nActualMoveType = 0x526; // MoveType_t
                constexpr std::ptrdiff_t m_flWaterLevel = 0x528; // float32
                constexpr std::ptrdiff_t m_fEffects = 0x52C; // uint32
                constexpr std::ptrdiff_t m_hGroundEntity = 0x530; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nGroundBodyIndex = 0x534; // int32
                constexpr std::ptrdiff_t m_flFriction = 0x538; // float32
                constexpr std::ptrdiff_t m_flElasticity = 0x53C; // float32
                constexpr std::ptrdiff_t m_flGravityScale = 0x540; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x544; // float32
                constexpr std::ptrdiff_t m_bAnimatedEveryTick = 0x548; // bool
                constexpr std::ptrdiff_t m_bGravityDisabled = 0x549; // bool
                constexpr std::ptrdiff_t m_flNavIgnoreUntilTime = 0x54C; // GameTime_t
                constexpr std::ptrdiff_t m_hThink = 0x550; // uint16
                constexpr std::ptrdiff_t m_fBBoxVisFlags = 0x560; // uint8
                constexpr std::ptrdiff_t m_flActualGravityScale = 0x564; // float32
                constexpr std::ptrdiff_t m_bGravityActuallyDisabled = 0x568; // bool
                constexpr std::ptrdiff_t m_bPredictable = 0x569; // bool
                constexpr std::ptrdiff_t m_bRenderWithViewModels = 0x56A; // bool
                constexpr std::ptrdiff_t m_nFirstPredictableCommand = 0x56C; // int32
                constexpr std::ptrdiff_t m_nLastPredictableCommand = 0x570; // int32
                constexpr std::ptrdiff_t m_hOldMoveParent = 0x574; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_Particles = 0x578; // CParticleProperty
                constexpr std::ptrdiff_t m_vecAngVelocity = 0x5A8; // QAngle
                constexpr std::ptrdiff_t m_DataChangeEventRef = 0x5B4; // int32
                constexpr std::ptrdiff_t m_dependencies = 0x5B8; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_nCreationTick = 0x5D0; // int32
                constexpr std::ptrdiff_t m_bAnimTimeChanged = 0x5E1; // bool
                constexpr std::ptrdiff_t m_bSimulationTimeChanged = 0x5E2; // bool
                constexpr std::ptrdiff_t m_sUniqueHammerID = 0x5F0; // CUtlString
                constexpr std::ptrdiff_t m_nBloodType = 0x5F8; // BloodType
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponSSG08 {
            }
            // Parent: None
            // Field count: 7
            namespace C_Chicken {
                constexpr std::ptrdiff_t m_leader = 0x14C0; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_owner = 0x14C4; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_AttributeManager = 0x14C8; // C_AttributeContainer
                constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1AD8; // bool
                constexpr std::ptrdiff_t m_hWaterWakeParticles = 0x1ADC; // ParticleIndex_t
                constexpr std::ptrdiff_t m_bIsPreviewModel = 0x1AE0; // bool
                constexpr std::ptrdiff_t m_bSpawnDyingParticles = 0x1B68; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 28
            namespace C_BasePlayerPawn {
                constexpr std::ptrdiff_t m_pWeaponServices = 0x12F0; // CPlayer_WeaponServices*
                constexpr std::ptrdiff_t m_pItemServices = 0x12F8; // CPlayer_ItemServices*
                constexpr std::ptrdiff_t m_pAutoaimServices = 0x1300; // CPlayer_AutoaimServices*
                constexpr std::ptrdiff_t m_pObserverServices = 0x1308; // CPlayer_ObserverServices*
                constexpr std::ptrdiff_t m_pWaterServices = 0x1310; // CPlayer_WaterServices*
                constexpr std::ptrdiff_t m_pUseServices = 0x1318; // CPlayer_UseServices*
                constexpr std::ptrdiff_t m_pFlashlightServices = 0x1320; // CPlayer_FlashlightServices*
                constexpr std::ptrdiff_t m_pCameraServices = 0x1328; // CPlayer_CameraServices*
                constexpr std::ptrdiff_t m_pMovementServices = 0x1330; // CPlayer_MovementServices*
                constexpr std::ptrdiff_t m_ServerViewAngleChanges = 0x1340; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                constexpr std::ptrdiff_t v_angle = 0x13A8; // QAngle
                constexpr std::ptrdiff_t v_anglePrevious = 0x13B4; // QAngle
                constexpr std::ptrdiff_t m_iHideHUD = 0x13C0; // uint32
                constexpr std::ptrdiff_t m_skybox3d = 0x13C8; // sky3dparams_t
                constexpr std::ptrdiff_t m_flDeathTime = 0x1458; // GameTime_t
                constexpr std::ptrdiff_t m_vecPredictionError = 0x1460; // Vector
                constexpr std::ptrdiff_t m_flPredictionErrorTime = 0x146C; // GameTime_t
                constexpr std::ptrdiff_t m_vecLastCameraSetupLocalOrigin = 0x148C; // Vector
                constexpr std::ptrdiff_t m_flLastCameraSetupTime = 0x1498; // GameTime_t
                constexpr std::ptrdiff_t m_flFOVSensitivityAdjust = 0x149C; // float32
                constexpr std::ptrdiff_t m_flMouseSensitivity = 0x14A0; // float32
                constexpr std::ptrdiff_t m_vOldOrigin = 0x14A4; // Vector
                constexpr std::ptrdiff_t m_flOldSimulationTime = 0x14B0; // float32
                constexpr std::ptrdiff_t m_nLastExecutedCommandNumber = 0x14B4; // int32
                constexpr std::ptrdiff_t m_nLastExecutedCommandTick = 0x14B8; // int32
                constexpr std::ptrdiff_t m_hController = 0x14BC; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hDefaultController = 0x14C0; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_bIsSwappingToPredictableController = 0x14C4; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_SoundOpvarSetAABBEntity {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponBizon {
            }
            // Parent: None
            // Field count: 1
            namespace C_StattrakModule {
                constexpr std::ptrdiff_t m_bKnife = 0x1270; // bool
            }
            // Parent: None
            // Field count: 1
            namespace CCSObserver_CameraServices {
                constexpr std::ptrdiff_t m_hPrevPostProcessingVolume = 0x2B0; // CHandle<C_PostProcessingVolume>
            }
            // Parent: CEnvSoundscape
            // Field count: 1
            namespace CEnvSoundscapeProxy {
                constexpr std::ptrdiff_t m_MainSoundscapeName = 0x690; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 15
            namespace C_SoundEventEntity {
                constexpr std::ptrdiff_t m_bStartOnSpawn = 0x600; // bool
                constexpr std::ptrdiff_t m_bToLocalPlayer = 0x601; // bool
                constexpr std::ptrdiff_t m_bStopOnNew = 0x602; // bool
                constexpr std::ptrdiff_t m_bSaveRestore = 0x603; // bool
                constexpr std::ptrdiff_t m_bSavedIsPlaying = 0x604; // bool
                constexpr std::ptrdiff_t m_flSavedElapsedTime = 0x608; // float32
                constexpr std::ptrdiff_t m_iszSourceEntityName = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszAttachmentName = 0x618; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_onGUIDChanged = 0x620; // CEntityOutputTemplate<SndOpEventGuid_t>
                constexpr std::ptrdiff_t m_onSoundFinished = 0x650; // CEntityIOOutput
                constexpr std::ptrdiff_t m_flClientCullRadius = 0x668; // float32
                constexpr std::ptrdiff_t m_iszSoundName = 0x698; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hSource = 0x6B4; // CEntityHandle
                constexpr std::ptrdiff_t m_nEntityIndexSelection = 0x6B8; // int32
                constexpr std::ptrdiff_t m_bClientSideOnly = 0x0; // bitfield:1
            }
            // Parent: None
            // Field count: 0
            namespace C_LightOrthoEntity {
            }
            // Parent: C_BaseTrigger
            // Field count: 1
            namespace CBombTarget {
                constexpr std::ptrdiff_t m_bBombPlantedHere = 0x1180; // bool
            }
            // Parent: None
            // Field count: 1
            namespace C_Knife {
                constexpr std::ptrdiff_t m_bFirstAttack = 0x1F20; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TerroristWingmanIntroCamera {
            }
            // Parent: None
            // Field count: 0
            namespace CEntityComponent {
            }
            // Parent: None
            // Field count: 2
            namespace C_ItemDogtags {
                constexpr std::ptrdiff_t m_OwningPlayer = 0x1A18; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_KillingPlayer = 0x1A1C; // CHandle<C_CSPlayerPawn>
            }
            // Parent: None
            // Field count: 0
            namespace C_LateUpdatedAnimating {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamPreviewCameraBone {
            }
            // Parent: C_BaseModelEntity
            // Field count: 4
            namespace C_BaseClientUIEntity {
                constexpr std::ptrdiff_t m_bEnabled = 0x10A0; // bool
                constexpr std::ptrdiff_t m_DialogXMLName = 0x10A8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelClassName = 0x10B0; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_PanelID = 0x10B8; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponUSPSilencer {
            }
            // Parent: None
            // Field count: 1
            namespace C_MolotovProjectile {
                constexpr std::ptrdiff_t m_bIsIncGrenade = 0x1348; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_TriggerLerpObject {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponRevolver {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponElite {
            }
            // Parent: None
            // Field count: 0
            namespace C_DynamicPropAlias_cable_dynamic {
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            namespace CBaseProp {
                constexpr std::ptrdiff_t m_bModelOverrodeBlockLOS = 0x1268; // bool
                constexpr std::ptrdiff_t m_iShapeType = 0x126C; // int32
                constexpr std::ptrdiff_t m_bConformToCollisionBounds = 0x1270; // bool
                constexpr std::ptrdiff_t m_mPreferredCatchTransform = 0x1280; // CTransform
            }
            // Parent: None
            // Field count: 6
            namespace CAttributeManager {
                constexpr std::ptrdiff_t m_Providers = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_iReapplyProvisionParity = 0x20; // int32
                constexpr std::ptrdiff_t m_hOuter = 0x24; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bPreventLoopback = 0x28; // bool
                constexpr std::ptrdiff_t m_ProviderType = 0x2C; // attributeprovidertypes_t
                constexpr std::ptrdiff_t m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
            }
            // Parent: None
            // Field count: 0
            namespace SignatureOutflow_Continue {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 20
            namespace CPlayer_CameraServices {
                constexpr std::ptrdiff_t m_vecCsViewPunchAngle = 0x48; // QAngle
                constexpr std::ptrdiff_t m_nCsViewPunchAngleTick = 0x54; // GameTick_t
                constexpr std::ptrdiff_t m_flCsViewPunchAngleTickRatio = 0x58; // float32
                constexpr std::ptrdiff_t m_PlayerFog = 0x60; // C_fogplayerparams_t
                constexpr std::ptrdiff_t m_hColorCorrectionCtrl = 0xA0; // CHandle<C_ColorCorrection>
                constexpr std::ptrdiff_t m_hViewEntity = 0xA4; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hTonemapController = 0xA8; // CHandle<C_TonemapController2>
                constexpr std::ptrdiff_t m_audio = 0xB0; // audioparams_t
                constexpr std::ptrdiff_t m_PostProcessingVolumes = 0x128; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
                constexpr std::ptrdiff_t m_flOldPlayerZ = 0x140; // float32
                constexpr std::ptrdiff_t m_flOldPlayerViewOffsetZ = 0x144; // float32
                constexpr std::ptrdiff_t m_CurrentFog = 0x148; // fogparams_t
                constexpr std::ptrdiff_t m_hOldFogController = 0x1B0; // CHandle<C_FogController>
                constexpr std::ptrdiff_t m_bOverrideFogColor = 0x1B4; // bool[5]
                constexpr std::ptrdiff_t m_OverrideFogColor = 0x1BC; // Color[5]
                constexpr std::ptrdiff_t m_bOverrideFogStartEnd = 0x1D0; // bool[5]
                constexpr std::ptrdiff_t m_fOverrideFogStart = 0x1D8; // float32[5]
                constexpr std::ptrdiff_t m_fOverrideFogEnd = 0x1EC; // float32[5]
                constexpr std::ptrdiff_t m_hActivePostProcessingVolume = 0x200; // CHandle<C_PostProcessingVolume>
                constexpr std::ptrdiff_t m_angDemoViewAngles = 0x208; // QAngle
            }
            // Parent: None
            // Field count: 14
            namespace C_BaseCSGrenade {
                constexpr std::ptrdiff_t m_bClientPredictDelete = 0x1F20; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x1F21; // bool
                constexpr std::ptrdiff_t m_bIsHeldByPlayer = 0x1F22; // bool
                constexpr std::ptrdiff_t m_bPinPulled = 0x1F23; // bool
                constexpr std::ptrdiff_t m_bJumpThrow = 0x1F24; // bool
                constexpr std::ptrdiff_t m_bThrowAnimating = 0x1F25; // bool
                constexpr std::ptrdiff_t m_fThrowTime = 0x1F28; // GameTime_t
                constexpr std::ptrdiff_t m_flThrowStrength = 0x1F30; // float32
                constexpr std::ptrdiff_t m_fDropTime = 0x1FA8; // GameTime_t
                constexpr std::ptrdiff_t m_fPinPullTime = 0x1FAC; // GameTime_t
                constexpr std::ptrdiff_t m_bJustPulledPin = 0x1FB0; // bool
                constexpr std::ptrdiff_t m_nNextHoldTick = 0x1FB4; // GameTick_t
                constexpr std::ptrdiff_t m_flNextHoldFrac = 0x1FB8; // float32
                constexpr std::ptrdiff_t m_hSwitchToWeaponAfterThrow = 0x1FBC; // CHandle<C_CSWeaponBase>
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterAttributeInt {
                constexpr std::ptrdiff_t m_sAttributeName = 0x638; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 12
            namespace CPointTemplate {
                constexpr std::ptrdiff_t m_iszWorldName = 0x600; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszSource2EntityLumpName = 0x608; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszEntityFilterName = 0x610; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flTimeoutInterval = 0x618; // float32
                constexpr std::ptrdiff_t m_bAsynchronouslySpawnEntities = 0x61C; // bool
                constexpr std::ptrdiff_t m_clientOnlyEntityBehavior = 0x620; // PointTemplateClientOnlyEntityBehavior_t
                constexpr std::ptrdiff_t m_ownerSpawnGroupType = 0x624; // PointTemplateOwnerSpawnGroupType_t
                constexpr std::ptrdiff_t m_createdSpawnGroupHandles = 0x628; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_SpawnedEntityHandles = 0x640; // CUtlVector<CEntityHandle>
                constexpr std::ptrdiff_t m_ScriptSpawnCallback = 0x658; // HSCRIPT
                constexpr std::ptrdiff_t m_ScriptCallbackScope = 0x660; // HSCRIPT
                constexpr std::ptrdiff_t m_OnEntitySpawned = 0x668; // CEntityOutputTemplate<CUtlVector<CEntityHandle>>
            }
            // Parent: None
            // Field count: 0
            namespace CPlayer_FlashlightServices {
            }
            // Parent: CBasePlayerController
            // Field count: 70
            namespace CCSPlayerController {
                constexpr std::ptrdiff_t m_pInGameMoneyServices = 0x818; // CCSPlayerController_InGameMoneyServices*
                constexpr std::ptrdiff_t m_pInventoryServices = 0x820; // CCSPlayerController_InventoryServices*
                constexpr std::ptrdiff_t m_pActionTrackingServices = 0x828; // CCSPlayerController_ActionTrackingServices*
                constexpr std::ptrdiff_t m_pDamageServices = 0x830; // CCSPlayerController_DamageServices*
                constexpr std::ptrdiff_t m_iPing = 0x838; // uint32
                constexpr std::ptrdiff_t m_bHasCommunicationAbuseMute = 0x83C; // bool
                constexpr std::ptrdiff_t m_uiCommunicationMuteFlags = 0x840; // uint32
                constexpr std::ptrdiff_t m_szCrosshairCodes = 0x848; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iPendingTeamNum = 0x850; // uint8
                constexpr std::ptrdiff_t m_flForceTeamTime = 0x854; // GameTime_t
                constexpr std::ptrdiff_t m_iCompTeammateColor = 0x858; // int32
                constexpr std::ptrdiff_t m_bEverPlayedOnTeam = 0x85C; // bool
                constexpr std::ptrdiff_t m_flPreviousForceJoinTeamTime = 0x860; // GameTime_t
                constexpr std::ptrdiff_t m_szClan = 0x868; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_unClanId32bit = 0x870; // uint32
                constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x878; // CUtlString
                constexpr std::ptrdiff_t m_sSanitizedClanTag = 0x880; // CUtlString
                constexpr std::ptrdiff_t m_iCoachingTeam = 0x888; // int32
                constexpr std::ptrdiff_t m_nPlayerDominated = 0x890; // uint64
                constexpr std::ptrdiff_t m_nPlayerDominatingMe = 0x898; // uint64
                constexpr std::ptrdiff_t m_iCompetitiveRanking = 0x8A0; // int32
                constexpr std::ptrdiff_t m_iCompetitiveWins = 0x8A4; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankType = 0x8A8; // int8
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Win = 0x8AC; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Loss = 0x8B0; // int32
                constexpr std::ptrdiff_t m_iCompetitiveRankingPredicted_Tie = 0x8B4; // int32
                constexpr std::ptrdiff_t m_nEndMatchNextMapVote = 0x8B8; // int32
                constexpr std::ptrdiff_t m_unActiveQuestId = 0x8BC; // uint16
                constexpr std::ptrdiff_t m_rtActiveMissionPeriod = 0x8C0; // uint32
                constexpr std::ptrdiff_t m_nQuestProgressReason = 0x8C4; // QuestProgress::Reason
                constexpr std::ptrdiff_t m_unPlayerTvControlFlags = 0x8C8; // uint32
                constexpr std::ptrdiff_t m_iDraftIndex = 0x8F8; // int32
                constexpr std::ptrdiff_t m_msQueuedModeDisconnectionTimestamp = 0x8FC; // uint32
                constexpr std::ptrdiff_t m_uiAbandonRecordedReason = 0x900; // uint32
                constexpr std::ptrdiff_t m_eNetworkDisconnectionReason = 0x904; // uint32
                constexpr std::ptrdiff_t m_bCannotBeKicked = 0x908; // bool
                constexpr std::ptrdiff_t m_bEverFullyConnected = 0x909; // bool
                constexpr std::ptrdiff_t m_bAbandonAllowsSurrender = 0x90A; // bool
                constexpr std::ptrdiff_t m_bAbandonOffersInstantSurrender = 0x90B; // bool
                constexpr std::ptrdiff_t m_bDisconnection1MinWarningPrinted = 0x90C; // bool
                constexpr std::ptrdiff_t m_bScoreReported = 0x90D; // bool
                constexpr std::ptrdiff_t m_nDisconnectionTick = 0x910; // int32
                constexpr std::ptrdiff_t m_bControllingBot = 0x920; // bool
                constexpr std::ptrdiff_t m_bHasControlledBotThisRound = 0x921; // bool
                constexpr std::ptrdiff_t m_bHasBeenControlledByPlayerThisRound = 0x922; // bool
                constexpr std::ptrdiff_t m_nBotsControlledThisRound = 0x924; // int32
                constexpr std::ptrdiff_t m_bCanControlObservedBot = 0x928; // bool
                constexpr std::ptrdiff_t m_hPlayerPawn = 0x92C; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hObserverPawn = 0x930; // CHandle<C_CSObserverPawn>
                constexpr std::ptrdiff_t m_bPawnIsAlive = 0x934; // bool
                constexpr std::ptrdiff_t m_iPawnHealth = 0x938; // uint32
                constexpr std::ptrdiff_t m_iPawnArmor = 0x93C; // int32
                constexpr std::ptrdiff_t m_bPawnHasDefuser = 0x940; // bool
                constexpr std::ptrdiff_t m_bPawnHasHelmet = 0x941; // bool
                constexpr std::ptrdiff_t m_nPawnCharacterDefIndex = 0x942; // uint16
                constexpr std::ptrdiff_t m_iPawnLifetimeStart = 0x944; // int32
                constexpr std::ptrdiff_t m_iPawnLifetimeEnd = 0x948; // int32
                constexpr std::ptrdiff_t m_iPawnBotDifficulty = 0x94C; // int32
                constexpr std::ptrdiff_t m_hOriginalControllerOfCurrentPawn = 0x950; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_iScore = 0x954; // int32
                constexpr std::ptrdiff_t m_recentKillQueue = 0x958; // uint8[8]
                constexpr std::ptrdiff_t m_nFirstKill = 0x960; // uint8
                constexpr std::ptrdiff_t m_nKillCount = 0x961; // uint8
                constexpr std::ptrdiff_t m_bMvpNoMusic = 0x962; // bool
                constexpr std::ptrdiff_t m_eMvpReason = 0x964; // int32
                constexpr std::ptrdiff_t m_iMusicKitID = 0x968; // int32
                constexpr std::ptrdiff_t m_iMusicKitMVPs = 0x96C; // int32
                constexpr std::ptrdiff_t m_iMVPs = 0x970; // int32
                constexpr std::ptrdiff_t m_bIsPlayerNameDirty = 0x974; // bool
                constexpr std::ptrdiff_t m_bFireBulletsSeedSynchronized = 0x97C; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_CounterTerroristRushIntroCamera {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamIntroCounterTerroristPosition {
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            namespace C_CSGO_PreviewModel {
                constexpr std::ptrdiff_t m_defaultAnim = 0x1268; // CUtlString
                constexpr std::ptrdiff_t m_nDefaultAnimLoopMode = 0x1270; // AnimLoopMode_t
                constexpr std::ptrdiff_t m_flInitialModelScale = 0x1274; // float32
                constexpr std::ptrdiff_t m_sInitialWeaponState = 0x1278; // CUtlString
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamSelectCharacterPosition {
            }
            // Parent: C_BaseEntity
            // Field count: 4
            namespace CCSObservableElement {
                constexpr std::ptrdiff_t m_iszObservableModelEntity = 0x618; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hObservableModelEntity = 0x620; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hObservableModelEntity2 = 0x624; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nTeamFilter = 0x628; // uint32
            }
            // Parent: C_SoundEventEntity
            // Field count: 2
            namespace C_SoundEventAABBEntity {
                constexpr std::ptrdiff_t m_vMins = 0x6C0; // Vector
                constexpr std::ptrdiff_t m_vMaxs = 0x6CC; // Vector
            }
            // Parent: None
            // Field count: 49
            namespace CCSPlayer_MovementServices {
                constexpr std::ptrdiff_t m_AnimationState = 0x310; // CCSPlayerAnimationState
                constexpr std::ptrdiff_t m_bUsingGroundTopologyOffset = 0x3F0; // bool
                constexpr std::ptrdiff_t m_flUsingGroundTopologyOffsetTransitionSmoothing = 0x3F4; // float32
                constexpr std::ptrdiff_t m_vecLadderNormal = 0x3F8; // Vector
                constexpr std::ptrdiff_t m_nLadderSurfacePropIndex = 0x404; // int32
                constexpr std::ptrdiff_t m_bDucked = 0x408; // bool
                constexpr std::ptrdiff_t m_flDuckAmount = 0x40C; // float32
                constexpr std::ptrdiff_t m_flDuckSpeed = 0x410; // float32
                constexpr std::ptrdiff_t m_bDuckOverride = 0x414; // bool
                constexpr std::ptrdiff_t m_bDesiresDuck = 0x415; // bool
                constexpr std::ptrdiff_t m_bDucking = 0x416; // bool
                constexpr std::ptrdiff_t m_flDuckRootOffset = 0x418; // float32
                constexpr std::ptrdiff_t m_flDuckViewOffset = 0x41C; // float32
                constexpr std::ptrdiff_t m_flLastDuckTime = 0x420; // float32
                constexpr std::ptrdiff_t m_flBombPlantViewOffset = 0x424; // float32
                constexpr std::ptrdiff_t m_vecLastPositionAtFullCrouchSpeed = 0x430; // Vector2D
                constexpr std::ptrdiff_t m_duckUntilOnGround = 0x438; // bool
                constexpr std::ptrdiff_t m_bHasWalkMovedSinceLastJump = 0x439; // bool
                constexpr std::ptrdiff_t m_bInStuckTest = 0x43A; // bool
                constexpr std::ptrdiff_t m_nTraceCount = 0x648; // int32
                constexpr std::ptrdiff_t m_StuckLast = 0x64C; // int32
                constexpr std::ptrdiff_t m_bSpeedCropped = 0x650; // bool
                constexpr std::ptrdiff_t m_nOldWaterLevel = 0x654; // int32
                constexpr std::ptrdiff_t m_flWaterEntryTime = 0x658; // float32
                constexpr std::ptrdiff_t m_vecForward = 0x65C; // Vector
                constexpr std::ptrdiff_t m_vecLeft = 0x668; // Vector
                constexpr std::ptrdiff_t m_vecUp = 0x674; // Vector
                constexpr std::ptrdiff_t m_nGameCodeHasMovedPlayerAfterCommand = 0x680; // int32
                constexpr std::ptrdiff_t m_fStashGrenadeParameterWhen = 0x684; // GameTime_t
                constexpr std::ptrdiff_t m_bUseFrictionStashedSpeed = 0x688; // bool
                constexpr std::ptrdiff_t m_flUseFrictionStashedSpeedUntilFrac = 0x68C; // float32
                constexpr std::ptrdiff_t m_flFrictionStashedSpeed = 0x690; // float32
                constexpr std::ptrdiff_t m_flStamina = 0x694; // float32
                constexpr std::ptrdiff_t m_flHeightAtJumpStart = 0x698; // float32
                constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x69C; // float32
                constexpr std::ptrdiff_t m_flMaxJumpHeightLastJump = 0x6A0; // float32
                constexpr std::ptrdiff_t m_flStaminaAtJumpStart = 0x6A4; // float32
                constexpr std::ptrdiff_t m_flVelMulAtJumpStart = 0x6A8; // float32
                constexpr std::ptrdiff_t m_flAccumulatedJumpError = 0x6AC; // float32
                constexpr std::ptrdiff_t m_LegacyJump = 0x6B0; // CCSPlayerLegacyJump
                constexpr std::ptrdiff_t m_ModernJump = 0x6C8; // CCSPlayerModernJump
                constexpr std::ptrdiff_t m_nLastJumpTick = 0x700; // GameTick_t
                constexpr std::ptrdiff_t m_flLastJumpFrac = 0x704; // float32
                constexpr std::ptrdiff_t m_flLastJumpVelocityZ = 0x708; // float32
                constexpr std::ptrdiff_t m_bJumpApexPending = 0x70C; // bool
                constexpr std::ptrdiff_t m_flTicksSinceLastSurfingDetected = 0x710; // float32
                constexpr std::ptrdiff_t m_bWasSurfing = 0x714; // bool
                constexpr std::ptrdiff_t m_vecWalkWishVel = 0x7A4; // Vector2D
                constexpr std::ptrdiff_t m_bHasEverProcessedCommand = 0xFD0; // bool
            }
            // Parent: None
            // Field count: 5
            namespace SellbackPurchaseEntry_t {
                constexpr std::ptrdiff_t m_unDefIdx = 0x30; // uint16
                constexpr std::ptrdiff_t m_nCost = 0x34; // int32
                constexpr std::ptrdiff_t m_nPrevArmor = 0x38; // int32
                constexpr std::ptrdiff_t m_bPrevHelmet = 0x3C; // bool
                constexpr std::ptrdiff_t m_hItem = 0x40; // CEntityHandle
            }
            // Parent: None
            // Field count: 0
            namespace C_TintController {
            }
            // Parent: None
            // Field count: 2
            namespace C_WeaponBaseItem {
                constexpr std::ptrdiff_t m_bSequenceInProgress = 0x1F20; // bool
                constexpr std::ptrdiff_t m_bRedraw = 0x1F21; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CWaterSplasher {
            }
            // Parent: None
            // Field count: 0
            namespace C_FuncBrush {
            }
            // Parent: None
            // Field count: 1
            namespace C_WeaponCZ75a {
                constexpr std::ptrdiff_t m_bMagazineRemoved = 0x1F50; // bool
            }
            // Parent: None
            // Field count: 7
            namespace C_DynamicLight {
                constexpr std::ptrdiff_t m_Flags = 0x1098; // uint8
                constexpr std::ptrdiff_t m_LightStyle = 0x1099; // uint8
                constexpr std::ptrdiff_t m_Radius = 0x109C; // float32
                constexpr std::ptrdiff_t m_Exponent = 0x10A0; // int32
                constexpr std::ptrdiff_t m_InnerAngle = 0x10A4; // float32
                constexpr std::ptrdiff_t m_OuterAngle = 0x10A8; // float32
                constexpr std::ptrdiff_t m_SpotRadius = 0x10AC; // float32
            }
            // Parent: C_SoundEventEntity
            // Field count: 1
            namespace C_SoundEventSphereEntity {
                constexpr std::ptrdiff_t m_flRadius = 0x6C0; // float32
            }
            // Parent: None
            // Field count: 2
            namespace CCSPlayerController_DamageServices {
                constexpr std::ptrdiff_t m_nSendUpdate = 0x40; // int32
                constexpr std::ptrdiff_t m_DamageList = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TeamPreviewModel {
            }
            // Parent: None
            // Field count: 0
            namespace C_TonemapController2Alias_env_tonemap_controller2 {
            }
            // Parent: None
            // Field count: 24
            namespace C_Inferno {
                constexpr std::ptrdiff_t m_nfxFireDamageEffect = 0x10D8; // ParticleIndex_t
                constexpr std::ptrdiff_t m_hInfernoPointsSnapshot = 0x10E0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoFillerPointsSnapshot = 0x10E8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoOutlinePointsSnapshot = 0x10F0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoClimbingOutlinePointsSnapshot = 0x10F8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_hInfernoDecalsSnapshot = 0x1100; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_firePositions = 0x1108; // VectorWS[64]
                constexpr std::ptrdiff_t m_fireParentPositions = 0x1408; // VectorWS[64]
                constexpr std::ptrdiff_t m_bFireIsBurning = 0x1708; // bool[64]
                constexpr std::ptrdiff_t m_BurnNormal = 0x1748; // Vector[64]
                constexpr std::ptrdiff_t m_fireCount = 0x1A48; // int32
                constexpr std::ptrdiff_t m_nInfernoType = 0x1A4C; // int32
                constexpr std::ptrdiff_t m_nFireLifetime = 0x1A50; // float32
                constexpr std::ptrdiff_t m_bInPostEffectTime = 0x1A54; // bool
                constexpr std::ptrdiff_t m_lastFireCount = 0x1A58; // int32
                constexpr std::ptrdiff_t m_nFireEffectTickBegin = 0x1A5C; // int32
                constexpr std::ptrdiff_t m_drawableCount = 0x8660; // int32
                constexpr std::ptrdiff_t m_blosCheck = 0x8664; // bool
                constexpr std::ptrdiff_t m_nlosperiod = 0x8668; // int32
                constexpr std::ptrdiff_t m_maxFireHalfWidth = 0x866C; // float32
                constexpr std::ptrdiff_t m_maxFireHeight = 0x8670; // float32
                constexpr std::ptrdiff_t m_minBounds = 0x8674; // VectorWS
                constexpr std::ptrdiff_t m_maxBounds = 0x8680; // VectorWS
                constexpr std::ptrdiff_t m_flLastGrassBurnThink = 0x868C; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CFilterLOS {
            }
            // Parent: C_BaseEntity
            // Field count: 1
            namespace C_EnvWindClientside {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x600; // C_EnvWindShared
            }
            // Parent: C_BaseGrenade
            // Field count: 0
            namespace C_FlashbangProjectile {
            }
            // Parent: C_SoundEventEntity
            // Field count: 5
            namespace C_SoundEventConeEntity {
                constexpr std::ptrdiff_t m_flEmitterAngle = 0x6C0; // float32
                constexpr std::ptrdiff_t m_flSweetSpotAngle = 0x6C4; // float32
                constexpr std::ptrdiff_t m_flAttenMin = 0x6C8; // float32
                constexpr std::ptrdiff_t m_flAttenMax = 0x6CC; // float32
                constexpr std::ptrdiff_t m_iszParameterName = 0x6D0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponP90 {
            }
            // Parent: C_BaseEntity
            // Field count: 1
            namespace C_EnvWind {
                constexpr std::ptrdiff_t m_EnvWindShared = 0x600; // C_EnvWindShared
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_TerroristTeamIntroCamera {
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace C_PointDeathcamBounds {
                constexpr std::ptrdiff_t m_vBoxMins = 0x600; // Vector
                constexpr std::ptrdiff_t m_vBoxMaxs = 0x60C; // Vector
                constexpr std::ptrdiff_t m_flLerpDistance = 0x618; // float32
            }
            // Parent: None
            // Field count: 5
            namespace CCSPlayerController_ActionTrackingServices {
                constexpr std::ptrdiff_t m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                constexpr std::ptrdiff_t m_matchStats = 0xA8; // CSMatchStats_t
                constexpr std::ptrdiff_t m_iNumRoundKills = 0x128; // int32
                constexpr std::ptrdiff_t m_iNumRoundKillsHeadshots = 0x12C; // int32
                constexpr std::ptrdiff_t m_flTotalRoundDamageDealt = 0x130; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
            }
            // Parent: None
            // Field count: 0
            namespace C_InfoInstructorHintHostageRescueZone {
            }
            // Parent: C_BaseTrigger
            // Field count: 2
            namespace C_TriggerBuoyancy {
                constexpr std::ptrdiff_t m_BuoyancyHelper = 0x1180; // CBuoyancyHelper
                constexpr std::ptrdiff_t m_flFluidDensity = 0x1298; // float32
            }
            // Parent: None
            // Field count: 6
            namespace CPlayer_MovementServices_Humanoid {
                constexpr std::ptrdiff_t m_flStepSoundTime = 0x258; // float32
                constexpr std::ptrdiff_t m_flFallVelocity = 0x25C; // float32
                constexpr std::ptrdiff_t m_groundNormal = 0x260; // Vector
                constexpr std::ptrdiff_t m_flSurfaceFriction = 0x26C; // float32
                constexpr std::ptrdiff_t m_surfaceProps = 0x270; // CUtlStringToken
                constexpr std::ptrdiff_t m_nStepside = 0x280; // int32
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_IsRequirementValid__Criteria_t {
                constexpr std::ptrdiff_t m_bIsValid = 0x0; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponTec9 {
            }
            // Parent: C_BreakableProp
            // Field count: 5
            namespace C_PhysPropClientside {
                constexpr std::ptrdiff_t m_flTouchDelta = 0x13E0; // GameTime_t
                constexpr std::ptrdiff_t m_fDeathTime = 0x13E4; // GameTime_t
                constexpr std::ptrdiff_t m_vecDamagePosition = 0x13E8; // VectorWS
                constexpr std::ptrdiff_t m_vecDamageDirection = 0x13F4; // Vector
                constexpr std::ptrdiff_t m_nDamageType = 0x1400; // DamageTypes_t
            }
            // Parent: None
            // Field count: 1
            namespace C_BaseDoor {
                constexpr std::ptrdiff_t m_bIsUsable = 0x1098; // bool
            }
            // Parent: None
            // Field count: 5
            namespace CSMatchStats_t {
                constexpr std::ptrdiff_t m_iEnemy5Ks = 0x68; // int32
                constexpr std::ptrdiff_t m_iEnemy4Ks = 0x6C; // int32
                constexpr std::ptrdiff_t m_iEnemy3Ks = 0x70; // int32
                constexpr std::ptrdiff_t m_iEnemyKnifeKills = 0x74; // int32
                constexpr std::ptrdiff_t m_iEnemyTaserKills = 0x78; // int32
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_RushIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            namespace CHostageRescueZone {
            }
            // Parent: None
            // Field count: 7
            namespace C_CSWeaponBaseGun {
                constexpr std::ptrdiff_t m_zoomLevel = 0x1F20; // int32
                constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x1F24; // int32
                constexpr std::ptrdiff_t m_iSilencerBodygroup = 0x1F28; // int32
                constexpr std::ptrdiff_t m_silencedModelIndex = 0x1F38; // int32
                constexpr std::ptrdiff_t m_inPrecache = 0x1F3C; // bool
                constexpr std::ptrdiff_t m_bNeedsBoltAction = 0x1F3D; // bool
                constexpr std::ptrdiff_t m_nRevolverCylinderIdx = 0x1F40; // int32
            }
            // Parent: None
            // Field count: 1
            namespace C_CSGameRulesProxy {
                constexpr std::ptrdiff_t m_pGameRules = 0x600; // C_CSGameRules*
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponP250 {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterMassGreater {
                constexpr std::ptrdiff_t m_fFilterMass = 0x638; // float32
            }
            // Parent: None
            // Field count: 1
            namespace C_ShatterGlassShardPhysics {
                constexpr std::ptrdiff_t m_ShardDesc = 0x10A0; // shard_model_desc_t
            }
            // Parent: None
            // Field count: 13
            namespace C_EntityDissolve {
                constexpr std::ptrdiff_t m_flStartTime = 0x10A0; // GameTime_t
                constexpr std::ptrdiff_t m_flFadeInStart = 0x10A4; // float32
                constexpr std::ptrdiff_t m_flFadeInLength = 0x10A8; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelStart = 0x10AC; // float32
                constexpr std::ptrdiff_t m_flFadeOutModelLength = 0x10B0; // float32
                constexpr std::ptrdiff_t m_flFadeOutStart = 0x10B4; // float32
                constexpr std::ptrdiff_t m_flFadeOutLength = 0x10B8; // float32
                constexpr std::ptrdiff_t m_nDissolveType = 0x10BC; // EntityDissolveType_t
                constexpr std::ptrdiff_t m_nMagnitude = 0x10C0; // uint32
                constexpr std::ptrdiff_t m_vDissolverOrigin = 0x10C4; // VectorWS
                constexpr std::ptrdiff_t m_flNextSparkTime = 0x10D0; // GameTime_t
                constexpr std::ptrdiff_t m_bCoreExplode = 0x10D4; // bool
                constexpr std::ptrdiff_t m_bLinkedToServerEnt = 0x10D5; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_SoundOpvarSetOBBEntity {
            }
            // Parent: None
            // Field count: 8
            namespace CCSCustomPlayerCamera {
                constexpr std::ptrdiff_t m_hPawn = 0x600; // CHandle<C_CSPlayerPawnBase>
                constexpr std::ptrdiff_t m_nCameraMode = 0x604; // CustomCameraMode_t
                constexpr std::ptrdiff_t m_hFollowEntity = 0x608; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bFollowEyes = 0x60C; // bool
                constexpr std::ptrdiff_t m_vecFollowOffset = 0x610; // Vector
                constexpr std::ptrdiff_t m_vecCameraOffset = 0x61C; // Vector
                constexpr std::ptrdiff_t m_bClipCameraOffset = 0x628; // bool
                constexpr std::ptrdiff_t m_flCameraOffsetReturnStrength = 0x62C; // float32
            }
            // Parent: None
            // Field count: 1
            namespace CCSGameModeRules_ArmsRace {
                constexpr std::ptrdiff_t m_WeaponSequence = 0x30; // C_NetworkUtlVectorBase<CUtlString>
            }
            // Parent: C_BaseModelEntity
            // Field count: 8
            namespace C_FuncMonitor {
                constexpr std::ptrdiff_t m_targetCamera = 0x1098; // CUtlString
                constexpr std::ptrdiff_t m_nResolutionEnum = 0x10A0; // int32
                constexpr std::ptrdiff_t m_bRenderShadows = 0x10A4; // bool
                constexpr std::ptrdiff_t m_bUseUniqueColorTarget = 0x10A5; // bool
                constexpr std::ptrdiff_t m_brushModelName = 0x10A8; // CUtlString
                constexpr std::ptrdiff_t m_hTargetCamera = 0x10B0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bEnabled = 0x10B4; // bool
                constexpr std::ptrdiff_t m_bDraw3DSkybox = 0x10B5; // bool
            }
            // Parent: None
            // Field count: 14
            namespace C_ClientRagdoll {
                constexpr std::ptrdiff_t m_bFadeOut = 0x1268; // bool
                constexpr std::ptrdiff_t m_bImportant = 0x1269; // bool
                constexpr std::ptrdiff_t m_flEffectTime = 0x126C; // GameTime_t
                constexpr std::ptrdiff_t m_gibDespawnTime = 0x1270; // GameTime_t
                constexpr std::ptrdiff_t m_iCurrentFriction = 0x1274; // int32
                constexpr std::ptrdiff_t m_iMinFriction = 0x1278; // int32
                constexpr std::ptrdiff_t m_iMaxFriction = 0x127C; // int32
                constexpr std::ptrdiff_t m_iFrictionAnimState = 0x1280; // int32
                constexpr std::ptrdiff_t m_bReleaseRagdoll = 0x1284; // bool
                constexpr std::ptrdiff_t m_iEyeAttachment = 0x1285; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_bFadingOut = 0x1286; // bool
                constexpr std::ptrdiff_t m_flScaleEnd = 0x1288; // float32[10]
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x12B0; // GameTime_t[10]
                constexpr std::ptrdiff_t m_flScaleTimeEnd = 0x12D8; // GameTime_t[10]
            }
            // Parent: None
            // Field count: 0
            namespace C_CS2WeaponModuleBase {
            }
            // Parent: C_BaseEntity
            // Field count: 9
            namespace C_CSGO_TeamPreviewCharacterPosition {
                constexpr std::ptrdiff_t m_nVariant = 0x600; // int32
                constexpr std::ptrdiff_t m_nRandom = 0x604; // int32
                constexpr std::ptrdiff_t m_nOrdinal = 0x608; // int32
                constexpr std::ptrdiff_t m_sWeaponName = 0x610; // CUtlString
                constexpr std::ptrdiff_t m_xuid = 0x618; // uint64
                constexpr std::ptrdiff_t m_agentItem = 0x620; // C_EconItemView
                constexpr std::ptrdiff_t m_glovesItem = 0xBD0; // C_EconItemView
                constexpr std::ptrdiff_t m_weaponItem = 0x1180; // C_EconItemView
                constexpr std::ptrdiff_t m_petItem = 0x1730; // C_EconItemView
            }
            // Parent: None
            // Field count: 11
            namespace C_SmokeGrenadeProjectile {
                constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0x1360; // int32
                constexpr std::ptrdiff_t m_bDidSmokeEffect = 0x1364; // bool
                constexpr std::ptrdiff_t m_nRandomSeed = 0x1368; // int32
                constexpr std::ptrdiff_t m_vSmokeColor = 0x136C; // Vector
                constexpr std::ptrdiff_t m_vSmokeDetonationPos = 0x1378; // VectorWS
                constexpr std::ptrdiff_t m_VoxelFrameData = 0x1388; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_nVoxelFrameDataSize = 0x13A0; // int32
                constexpr std::ptrdiff_t m_nVoxelUpdate = 0x13A4; // int32
                constexpr std::ptrdiff_t m_nSmokeLightProbeRegen = 0x13A8; // uint8
                constexpr std::ptrdiff_t m_bSmokeVolumeDataReceived = 0x13A9; // bool
                constexpr std::ptrdiff_t m_bSmokeEffectSpawned = 0x13AA; // bool
            }
            // Parent: None
            // Field count: 1
            namespace CCSPlayer_BuyServices {
                constexpr std::ptrdiff_t m_vecSellbackPurchaseEntries = 0x48; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace C_SkyCameraVolumeTarget {
                constexpr std::ptrdiff_t m_nSkyboxScale = 0x600; // int16
                constexpr std::ptrdiff_t m_hSkyMaterial = 0x608; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 10
            namespace C_CSTeam {
                constexpr std::ptrdiff_t m_szTeamMatchStat = 0x6B8; // char[512]
                constexpr std::ptrdiff_t m_numMapVictories = 0x8B8; // int32
                constexpr std::ptrdiff_t m_bSurrendered = 0x8BC; // bool
                constexpr std::ptrdiff_t m_scoreFirstHalf = 0x8C0; // int32
                constexpr std::ptrdiff_t m_scoreSecondHalf = 0x8C4; // int32
                constexpr std::ptrdiff_t m_scoreOvertime = 0x8C8; // int32
                constexpr std::ptrdiff_t m_szClanTeamname = 0x8CC; // char[129]
                constexpr std::ptrdiff_t m_iClanID = 0x950; // uint32
                constexpr std::ptrdiff_t m_szTeamFlagImage = 0x954; // char[8]
                constexpr std::ptrdiff_t m_szTeamLogoImage = 0x95C; // char[8]
            }
            // Parent: None
            // Field count: 0
            namespace C_CS2HudModelWeapon {
            }
            // Parent: C_BaseModelEntity
            // Field count: 8
            namespace C_TextureBasedAnimatable {
                constexpr std::ptrdiff_t m_bLoop = 0x1098; // bool
                constexpr std::ptrdiff_t m_flFPS = 0x109C; // float32
                constexpr std::ptrdiff_t m_hPositionKeys = 0x10A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_hRotationKeys = 0x10A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_vAnimationBoundsMin = 0x10B0; // Vector
                constexpr std::ptrdiff_t m_vAnimationBoundsMax = 0x10BC; // Vector
                constexpr std::ptrdiff_t m_flStartTime = 0x10C8; // float32
                constexpr std::ptrdiff_t m_flStartFrame = 0x10CC; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_LightEnvironmentEntity {
            }
            // Parent: C_BaseTrigger
            // Field count: 14
            namespace C_TriggerPhysics {
                constexpr std::ptrdiff_t m_gravityScale = 0x1180; // float32
                constexpr std::ptrdiff_t m_linearLimit = 0x1184; // float32
                constexpr std::ptrdiff_t m_linearDamping = 0x1188; // float32
                constexpr std::ptrdiff_t m_angularLimit = 0x118C; // float32
                constexpr std::ptrdiff_t m_angularDamping = 0x1190; // float32
                constexpr std::ptrdiff_t m_linearForce = 0x1194; // float32
                constexpr std::ptrdiff_t m_flFrequency = 0x1198; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0x119C; // float32
                constexpr std::ptrdiff_t m_vecLinearForcePointAt = 0x11A0; // Vector
                constexpr std::ptrdiff_t m_bCollapseToForcePoint = 0x11AC; // bool
                constexpr std::ptrdiff_t m_vecLinearForcePointAtWorld = 0x11B0; // VectorWS
                constexpr std::ptrdiff_t m_vecLinearForceDirection = 0x11BC; // Vector
                constexpr std::ptrdiff_t m_bForceDirectionIsInLocalSpace = 0x11C8; // bool
                constexpr std::ptrdiff_t m_bConvertToDebrisWhenPossible = 0x11C9; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_PropDoorRotating {
            }
            // Parent: None
            // Field count: 2
            namespace C_HandleTest {
                constexpr std::ptrdiff_t m_Handle = 0x600; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bSendHandle = 0x604; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 8
            namespace CInfoWorldLayer {
                constexpr std::ptrdiff_t m_pOutputOnEntitiesSpawned = 0x600; // CEntityIOOutput
                constexpr std::ptrdiff_t m_worldName = 0x618; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_layerName = 0x620; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_bWorldLayerVisible = 0x628; // bool
                constexpr std::ptrdiff_t m_bEntitiesSpawned = 0x629; // bool
                constexpr std::ptrdiff_t m_bCreateAsChildSpawnGroup = 0x62A; // bool
                constexpr std::ptrdiff_t m_hLayerSpawnGroup = 0x62C; // uint32
                constexpr std::ptrdiff_t m_bWorldLayerActuallyVisible = 0x630; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CBodyComponentBaseModelEntity {
            }
            // Parent: None
            // Field count: 1
            namespace C_Multimeter {
                constexpr std::ptrdiff_t m_hTargetC4 = 0x1268; // CHandle<C_PlantedC4>
            }
            // Parent: C_BaseModelEntity
            // Field count: 12
            namespace C_BaseTrigger {
                constexpr std::ptrdiff_t m_OnStartTouch = 0x1098; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnStartTouchAll = 0x10B0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouch = 0x10C8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnEndTouchAll = 0x10E0; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouching = 0x10F8; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouchingEachEntity = 0x1110; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnNotTouching = 0x1128; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnTouchingChanged = 0x1140; // CEntityIOOutput
                constexpr std::ptrdiff_t m_hTouchingEntities = 0x1158; // CUtlVector<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_iFilterName = 0x1170; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hFilter = 0x1178; // CHandle<CBaseFilter>
                constexpr std::ptrdiff_t m_bDisabled = 0x117C; // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace FilterDamageType {
                constexpr std::ptrdiff_t m_iDamageType = 0x638; // int32
            }
            // Parent: None
            // Field count: 2
            namespace CAttributeList {
                constexpr std::ptrdiff_t m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                constexpr std::ptrdiff_t m_pManager = 0x70; // CAttributeManager*
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterProximity {
                constexpr std::ptrdiff_t m_flRadius = 0x638; // float32
            }
            // Parent: None
            // Field count: 20
            namespace CEffectData {
                constexpr std::ptrdiff_t m_vOrigin = 0x8; // VectorWS
                constexpr std::ptrdiff_t m_vStart = 0x14; // VectorWS
                constexpr std::ptrdiff_t m_vNormal = 0x20; // Vector
                constexpr std::ptrdiff_t m_vAngles = 0x2C; // QAngle
                constexpr std::ptrdiff_t m_hEntity = 0x38; // CEntityHandle
                constexpr std::ptrdiff_t m_hOtherEntity = 0x3C; // CEntityHandle
                constexpr std::ptrdiff_t m_flScale = 0x40; // float32
                constexpr std::ptrdiff_t m_flMagnitude = 0x44; // float32
                constexpr std::ptrdiff_t m_flRadius = 0x48; // float32
                constexpr std::ptrdiff_t m_nSurfaceProp = 0x4C; // CUtlStringToken
                constexpr std::ptrdiff_t m_nEffectIndex = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nDamageType = 0x58; // uint32
                constexpr std::ptrdiff_t m_nPenetrate = 0x5C; // uint8
                constexpr std::ptrdiff_t m_nMaterial = 0x5E; // uint16
                constexpr std::ptrdiff_t m_nHitBox = 0x60; // int16
                constexpr std::ptrdiff_t m_nColor = 0x62; // uint8
                constexpr std::ptrdiff_t m_fFlags = 0x63; // uint8
                constexpr std::ptrdiff_t m_nAttachmentIndex = 0x64; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_nAttachmentName = 0x68; // CUtlStringToken
                constexpr std::ptrdiff_t m_iEffectName = 0x6C; // uint16
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponSCAR20 {
            }
            // Parent: None
            // Field count: 0
            namespace C_FuncMover {
            }
            // Parent: None
            // Field count: 3
            namespace CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
                constexpr std::ptrdiff_t pItem = 0x0; // C_EconItemView*
                constexpr std::ptrdiff_t team = 0x8; // uint16
                constexpr std::ptrdiff_t slot = 0xA; // uint16
            }
            // Parent: None
            // Field count: 0
            namespace C_DecoyGrenade {
            }
            // Parent: None
            // Field count: 0
            namespace C_WaterBullet {
            }
            // Parent: None
            // Field count: 5
            namespace CCSPlayer_ActionTrackingServices {
                constexpr std::ptrdiff_t m_hLastWeaponBeforeC4AutoSwitch = 0x48; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_bIsRescuing = 0x4C; // bool
                constexpr std::ptrdiff_t m_weaponPurchasesThisMatch = 0x50; // WeaponPurchaseTracker_t
                constexpr std::ptrdiff_t m_weaponPurchasesThisRound = 0xC0; // WeaponPurchaseTracker_t
                constexpr std::ptrdiff_t m_weaponCarryOverIntoThisRound = 0x130; // WeaponPurchaseTracker_t
            }
            // Parent: None
            // Field count: 0
            namespace CBrokenGlassTrap {
            }
            // Parent: None
            // Field count: 0
            namespace CCSObserver_MovementServices {
            }
            // Parent: None
            // Field count: 6
            namespace C_BaseCombatCharacter {
                constexpr std::ptrdiff_t m_hMyWearables = 0x1268; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
                constexpr std::ptrdiff_t m_leftFootAttachment = 0x1280; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_rightFootAttachment = 0x1281; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_nWaterWakeMode = 0x1284; // C_BaseCombatCharacter::WaterWakeMode_t
                constexpr std::ptrdiff_t m_flWaterWorldZ = 0x1288; // float32
                constexpr std::ptrdiff_t m_flWaterNextTraceTime = 0x128C; // float32
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 2
            namespace C_PointClientUIDialog {
                constexpr std::ptrdiff_t m_hActivator = 0x10C8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bStartEnabled = 0x10CC; // bool
            }
            // Parent: C_SoundEventEntity
            // Field count: 0
            namespace C_SoundEventMultiPointEntity {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponHKP2000 {
            }
            // Parent: C_BaseTrigger
            // Field count: 2
            namespace C_FootstepControl {
                constexpr std::ptrdiff_t m_source = 0x1180; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_destination = 0x1188; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 8
            namespace CCitadelSoundOpvarSetOBB {
                constexpr std::ptrdiff_t m_iszStackName = 0x618; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOperatorName = 0x620; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_iszOpvarName = 0x628; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_vDistanceInnerMins = 0x630; // Vector
                constexpr std::ptrdiff_t m_vDistanceInnerMaxs = 0x63C; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMins = 0x648; // Vector
                constexpr std::ptrdiff_t m_vDistanceOuterMaxs = 0x654; // Vector
                constexpr std::ptrdiff_t m_nAABBDirection = 0x660; // int32
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_EndOfMatchLineupStart {
            }
            // Parent: None
            // Field count: 0
            namespace CPlayer_WaterServices {
            }
            // Parent: None
            // Field count: 15
            namespace CDamageRecord {
                constexpr std::ptrdiff_t m_PlayerDamager = 0x30; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_PlayerRecipient = 0x34; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hPlayerControllerDamager = 0x38; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_hPlayerControllerRecipient = 0x3C; // CHandle<CCSPlayerController>
                constexpr std::ptrdiff_t m_szPlayerDamagerName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_szPlayerRecipientName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_DamagerXuid = 0x50; // uint64
                constexpr std::ptrdiff_t m_RecipientXuid = 0x58; // uint64
                constexpr std::ptrdiff_t m_flBulletsDamage = 0x60; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x64; // float32
                constexpr std::ptrdiff_t m_flActualHealthRemoved = 0x68; // float32
                constexpr std::ptrdiff_t m_iNumHits = 0x6C; // int32
                constexpr std::ptrdiff_t m_iLastBulletUpdate = 0x70; // int32
                constexpr std::ptrdiff_t m_bIsOtherEnemy = 0x74; // bool
                constexpr std::ptrdiff_t m_killType = 0x75; // EKillTypes_t
            }
            // Parent: None
            // Field count: 0
            namespace C_DynamicPropAlias_dynamic_prop {
            }
            // Parent: None
            // Field count: 0
            namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
            }
            // Parent: C_BarnLight
            // Field count: 3
            namespace C_OmniLight {
                constexpr std::ptrdiff_t m_flInnerAngle = 0x13A8; // float32
                constexpr std::ptrdiff_t m_flOuterAngle = 0x13AC; // float32
                constexpr std::ptrdiff_t m_bShowLight = 0x13B0; // bool
            }
            // Parent: None
            // Field count: 13
            namespace C_SceneEntity {
                constexpr std::ptrdiff_t m_bIsPlayingBack = 0x608; // bool
                constexpr std::ptrdiff_t m_bPaused = 0x609; // bool
                constexpr std::ptrdiff_t m_bMultiplayer = 0x60A; // bool
                constexpr std::ptrdiff_t m_bAutogenerated = 0x60B; // bool
                constexpr std::ptrdiff_t m_bAllRequirementsComplete = 0x60C; // bool
                constexpr std::ptrdiff_t m_flForceClientTime = 0x610; // float32
                constexpr std::ptrdiff_t m_nSceneStringIndex = 0x614; // uint16
                constexpr std::ptrdiff_t m_bClientOnly = 0x616; // bool
                constexpr std::ptrdiff_t m_hOwner = 0x618; // CHandle<C_BaseModelEntity>
                constexpr std::ptrdiff_t m_hActorList = 0x620; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                constexpr std::ptrdiff_t m_bWasPlaying = 0x638; // bool
                constexpr std::ptrdiff_t m_QueuedEvents = 0x648; // CUtlVector<C_SceneEntity::QueuedEvents_t>
                constexpr std::ptrdiff_t m_flCurrentTime = 0x660; // float32
            }
            // Parent: None
            // Field count: 1
            namespace C_NametagModule {
                constexpr std::ptrdiff_t m_strNametagString = 0x1270; // CUtlString
            }
            // Parent: None
            // Field count: 20
            namespace C_EconEntity {
                constexpr std::ptrdiff_t m_flFlexDelayTime = 0x1278; // float32
                constexpr std::ptrdiff_t m_flFlexDelayedWeight = 0x1280; // float32*
                constexpr std::ptrdiff_t m_bAttributesInitialized = 0x1288; // bool
                constexpr std::ptrdiff_t m_AttributeManager = 0x1290; // C_AttributeContainer
                constexpr std::ptrdiff_t m_OriginalOwnerXuidLow = 0x18A0; // uint32
                constexpr std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x18A4; // uint32
                constexpr std::ptrdiff_t m_nFallbackPaintKit = 0x18A8; // int32
                constexpr std::ptrdiff_t m_nFallbackSeed = 0x18AC; // int32
                constexpr std::ptrdiff_t m_flFallbackWear = 0x18B0; // float32
                constexpr std::ptrdiff_t m_nFallbackStatTrak = 0x18B4; // int32
                constexpr std::ptrdiff_t m_bClientside = 0x18B8; // bool
                constexpr std::ptrdiff_t m_bParticleSystemsCreated = 0x18B9; // bool
                constexpr std::ptrdiff_t m_vecAttachedParticles = 0x18C0; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_hViewmodelAttachment = 0x18D8; // CHandle<CBaseAnimGraph>
                constexpr std::ptrdiff_t m_iOldTeam = 0x18DC; // int32
                constexpr std::ptrdiff_t m_bAttachmentDirty = 0x18E0; // bool
                constexpr std::ptrdiff_t m_nUnloadedModelIndex = 0x18E4; // int32
                constexpr std::ptrdiff_t m_iNumOwnerValidationRetries = 0x18E8; // int32
                constexpr std::ptrdiff_t m_hOldProvidee = 0x18F8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_vecAttachedModels = 0x1900; // CUtlVector<C_EconEntity::AttachedModelData_t>
            }
            // Parent: None
            // Field count: 0
            namespace CPlayer_UseServices {
            }
            // Parent: C_BaseEntity
            // Field count: 25
            namespace C_PointValueRemapper {
                constexpr std::ptrdiff_t m_bDisabled = 0x600; // bool
                constexpr std::ptrdiff_t m_bDisabledOld = 0x601; // bool
                constexpr std::ptrdiff_t m_bUpdateOnClient = 0x602; // bool
                constexpr std::ptrdiff_t m_nInputType = 0x604; // ValueRemapperInputType_t
                constexpr std::ptrdiff_t m_hRemapLineStart = 0x608; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hRemapLineEnd = 0x60C; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_flMaximumChangePerSecond = 0x610; // float32
                constexpr std::ptrdiff_t m_flDisengageDistance = 0x614; // float32
                constexpr std::ptrdiff_t m_flEngageDistance = 0x618; // float32
                constexpr std::ptrdiff_t m_bRequiresUseKey = 0x61C; // bool
                constexpr std::ptrdiff_t m_nOutputType = 0x620; // ValueRemapperOutputType_t
                constexpr std::ptrdiff_t m_hOutputEntities = 0x628; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_nHapticsType = 0x640; // ValueRemapperHapticsType_t
                constexpr std::ptrdiff_t m_nMomentumType = 0x644; // ValueRemapperMomentumType_t
                constexpr std::ptrdiff_t m_flMomentumModifier = 0x648; // float32
                constexpr std::ptrdiff_t m_flSnapValue = 0x64C; // float32
                constexpr std::ptrdiff_t m_flCurrentMomentum = 0x650; // float32
                constexpr std::ptrdiff_t m_nRatchetType = 0x654; // ValueRemapperRatchetType_t
                constexpr std::ptrdiff_t m_flRatchetOffset = 0x658; // float32
                constexpr std::ptrdiff_t m_flInputOffset = 0x65C; // float32
                constexpr std::ptrdiff_t m_bEngaged = 0x660; // bool
                constexpr std::ptrdiff_t m_bFirstUpdate = 0x661; // bool
                constexpr std::ptrdiff_t m_flPreviousValue = 0x664; // float32
                constexpr std::ptrdiff_t m_flPreviousUpdateTickTime = 0x668; // GameTime_t
                constexpr std::ptrdiff_t m_vecPreviousTestPoint = 0x66C; // VectorWS
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_Unknown {
                constexpr std::ptrdiff_t m_UnknownKeys = 0x48; // KeyValues3
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponMP7 {
            }
            // Parent: None
            // Field count: 13
            namespace CSPerRoundStats_t {
                constexpr std::ptrdiff_t m_iKills = 0x30; // int32
                constexpr std::ptrdiff_t m_iDeaths = 0x34; // int32
                constexpr std::ptrdiff_t m_iAssists = 0x38; // int32
                constexpr std::ptrdiff_t m_iDamage = 0x3C; // int32
                constexpr std::ptrdiff_t m_iEquipmentValue = 0x40; // int32
                constexpr std::ptrdiff_t m_iMoneySaved = 0x44; // int32
                constexpr std::ptrdiff_t m_iKillReward = 0x48; // int32
                constexpr std::ptrdiff_t m_iLiveTime = 0x4C; // int32
                constexpr std::ptrdiff_t m_iHeadShotKills = 0x50; // int32
                constexpr std::ptrdiff_t m_iObjective = 0x54; // int32
                constexpr std::ptrdiff_t m_iCashEarned = 0x58; // int32
                constexpr std::ptrdiff_t m_iUtilityDamage = 0x5C; // int32
                constexpr std::ptrdiff_t m_iEnemiesFlashed = 0x60; // int32
            }
            // Parent: None
            // Field count: 0
            namespace C_CS2HudModelBase {
            }
            // Parent: None
            // Field count: 98
            namespace C_CSGameRules {
                constexpr std::ptrdiff_t m_bFreezePeriod = 0x40; // bool
                constexpr std::ptrdiff_t m_bWarmupPeriod = 0x41; // bool
                constexpr std::ptrdiff_t m_fWarmupPeriodEnd = 0x44; // GameTime_t
                constexpr std::ptrdiff_t m_fWarmupPeriodStart = 0x48; // GameTime_t
                constexpr std::ptrdiff_t m_bTerroristTimeOutActive = 0x4C; // bool
                constexpr std::ptrdiff_t m_bCTTimeOutActive = 0x4D; // bool
                constexpr std::ptrdiff_t m_flTerroristTimeOutRemaining = 0x50; // float32
                constexpr std::ptrdiff_t m_flCTTimeOutRemaining = 0x54; // float32
                constexpr std::ptrdiff_t m_nTerroristTimeOuts = 0x58; // int32
                constexpr std::ptrdiff_t m_nCTTimeOuts = 0x5C; // int32
                constexpr std::ptrdiff_t m_bTechnicalTimeOut = 0x60; // bool
                constexpr std::ptrdiff_t m_bMatchWaitingForResume = 0x61; // bool
                constexpr std::ptrdiff_t m_iFreezeTime = 0x64; // int32
                constexpr std::ptrdiff_t m_iRoundTime = 0x68; // int32
                constexpr std::ptrdiff_t m_fMatchStartTime = 0x6C; // float32
                constexpr std::ptrdiff_t m_fRoundStartTime = 0x70; // GameTime_t
                constexpr std::ptrdiff_t m_flRestartRoundTime = 0x74; // GameTime_t
                constexpr std::ptrdiff_t m_bGameRestart = 0x78; // bool
                constexpr std::ptrdiff_t m_flGameStartTime = 0x7C; // float32
                constexpr std::ptrdiff_t m_timeUntilNextPhaseStarts = 0x80; // float32
                constexpr std::ptrdiff_t m_gamePhase = 0x84; // int32
                constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x88; // int32
                constexpr std::ptrdiff_t m_nRoundsPlayedThisPhase = 0x8C; // int32
                constexpr std::ptrdiff_t m_nOvertimePlaying = 0x90; // int32
                constexpr std::ptrdiff_t m_iHostagesRemaining = 0x94; // int32
                constexpr std::ptrdiff_t m_bAnyHostageReached = 0x98; // bool
                constexpr std::ptrdiff_t m_bMapHasBombTarget = 0x99; // bool
                constexpr std::ptrdiff_t m_bMapHasRescueZone = 0x9A; // bool
                constexpr std::ptrdiff_t m_bMapHasBuyZone = 0x9B; // bool
                constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x9C; // bool
                constexpr std::ptrdiff_t m_nQueuedMatchmakingMode = 0xA0; // int32
                constexpr std::ptrdiff_t m_bIsValveDS = 0xA4; // bool
                constexpr std::ptrdiff_t m_bLogoMap = 0xA5; // bool
                constexpr std::ptrdiff_t m_bPlayAllStepSoundsOnServer = 0xA6; // bool
                constexpr std::ptrdiff_t m_iSpectatorSlotCount = 0xA8; // int32
                constexpr std::ptrdiff_t m_MatchDevice = 0xAC; // int32
                constexpr std::ptrdiff_t m_bHasMatchStarted = 0xB0; // bool
                constexpr std::ptrdiff_t m_nNextMapInMapgroup = 0xB4; // int32
                constexpr std::ptrdiff_t m_szTournamentEventName = 0xB8; // char[512]
                constexpr std::ptrdiff_t m_szTournamentEventStage = 0x2B8; // char[512]
                constexpr std::ptrdiff_t m_szMatchStatTxt = 0x4B8; // char[512]
                constexpr std::ptrdiff_t m_szTournamentPredictionsTxt = 0x6B8; // char[512]
                constexpr std::ptrdiff_t m_nTournamentPredictionsPct = 0x8B8; // int32
                constexpr std::ptrdiff_t m_flCMMItemDropRevealStartTime = 0x8BC; // GameTime_t
                constexpr std::ptrdiff_t m_flCMMItemDropRevealEndTime = 0x8C0; // GameTime_t
                constexpr std::ptrdiff_t m_bIsDroppingItems = 0x8C4; // bool
                constexpr std::ptrdiff_t m_bIsQuestEligible = 0x8C5; // bool
                constexpr std::ptrdiff_t m_bIsHltvActive = 0x8C6; // bool
                constexpr std::ptrdiff_t m_bBombPlanted = 0x8C7; // bool
                constexpr std::ptrdiff_t m_arrProhibitedItemIndices = 0x8C8; // uint16[100]
                constexpr std::ptrdiff_t m_arrTournamentActiveCasterAccounts = 0x990; // uint32[4]
                constexpr std::ptrdiff_t m_numBestOfMaps = 0x9A0; // int32
                constexpr std::ptrdiff_t m_nHalloweenMaskListSeed = 0x9A4; // int32
                constexpr std::ptrdiff_t m_bBombDropped = 0x9A8; // bool
                constexpr std::ptrdiff_t m_iRoundWinStatus = 0x9AC; // int32
                constexpr std::ptrdiff_t m_eRoundWinReason = 0x9B0; // int32
                constexpr std::ptrdiff_t m_bTCantBuy = 0x9B4; // bool
                constexpr std::ptrdiff_t m_bCTCantBuy = 0x9B5; // bool
                constexpr std::ptrdiff_t m_iMatchStats_RoundResults = 0x9B8; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_CT = 0xA30; // int32[30]
                constexpr std::ptrdiff_t m_iMatchStats_PlayersAlive_T = 0xAA8; // int32[30]
                constexpr std::ptrdiff_t m_TeamRespawnWaveTimes = 0xB20; // float32[32]
                constexpr std::ptrdiff_t m_flNextRespawnWave = 0xBA0; // GameTime_t[32]
                constexpr std::ptrdiff_t m_vMinimapMins = 0xC20; // VectorWS
                constexpr std::ptrdiff_t m_vMinimapMaxs = 0xC2C; // VectorWS
                constexpr std::ptrdiff_t m_MinimapVerticalSectionHeights = 0xC38; // float32[8]
                constexpr std::ptrdiff_t m_ullLocalMatchID = 0xC58; // uint64
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteTypes = 0xC60; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapGroupVoteOptions = 0xC88; // int32[10]
                constexpr std::ptrdiff_t m_nEndMatchMapVoteWinner = 0xCB0; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveCTLoses = 0xCB4; // int32
                constexpr std::ptrdiff_t m_iNumConsecutiveTerroristLoses = 0xCB8; // int32
                constexpr std::ptrdiff_t m_nMatchAbortedEarlyReason = 0xD78; // int32
                constexpr std::ptrdiff_t m_bHasTriggeredRoundStartMusic = 0xD7C; // bool
                constexpr std::ptrdiff_t m_bSwitchingTeamsAtRoundReset = 0xD7D; // bool
                constexpr std::ptrdiff_t m_pGameModeRules = 0xD98; // CCSGameModeRules*
                constexpr std::ptrdiff_t m_RetakeRules = 0xDA0; // C_RetakeGameRules
                constexpr std::ptrdiff_t m_nMatchEndCount = 0xEF8; // uint8
                constexpr std::ptrdiff_t m_nTTeamIntroVariant = 0xEFC; // int32
                constexpr std::ptrdiff_t m_nCTTeamIntroVariant = 0xF00; // int32
                constexpr std::ptrdiff_t m_bTeamIntroPeriod = 0xF04; // bool
                constexpr std::ptrdiff_t m_iRoundEndWinnerTeam = 0xF08; // int32
                constexpr std::ptrdiff_t m_eRoundEndReason = 0xF0C; // int32
                constexpr std::ptrdiff_t m_bRoundEndShowTimerDefend = 0xF10; // bool
                constexpr std::ptrdiff_t m_iRoundEndTimerTime = 0xF14; // int32
                constexpr std::ptrdiff_t m_sRoundEndFunFactToken = 0xF18; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndFunFactPlayerSlot = 0xF20; // CPlayerSlot
                constexpr std::ptrdiff_t m_iRoundEndFunFactData1 = 0xF24; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData2 = 0xF28; // int32
                constexpr std::ptrdiff_t m_iRoundEndFunFactData3 = 0xF2C; // int32
                constexpr std::ptrdiff_t m_sRoundEndMessage = 0xF30; // CUtlString
                constexpr std::ptrdiff_t m_iRoundEndPlayerCount = 0xF38; // int32
                constexpr std::ptrdiff_t m_bRoundEndNoMusic = 0xF3C; // bool
                constexpr std::ptrdiff_t m_iRoundEndLegacy = 0xF40; // int32
                constexpr std::ptrdiff_t m_nRoundEndCount = 0xF44; // uint8
                constexpr std::ptrdiff_t m_iRoundStartRoundNumber = 0xF48; // int32
                constexpr std::ptrdiff_t m_nRoundStartCount = 0xF4C; // uint8
                constexpr std::ptrdiff_t m_flLastPerfSampleTime = 0x4F58; // float64
            }
            // Parent: C_BaseModelEntity
            // Field count: 2
            namespace CGrenadeTracer {
                constexpr std::ptrdiff_t m_flTracerDuration = 0x10B0; // float32
                constexpr std::ptrdiff_t m_nType = 0x10B4; // GrenadeType_t
            }
            // Parent: None
            // Field count: 0
            namespace CCSGameModeRules_Noop {
            }
            // Parent: None
            // Field count: 16
            namespace C_BaseCSGrenadeProjectile {
                constexpr std::ptrdiff_t m_vInitialPosition = 0x12B0; // VectorWS
                constexpr std::ptrdiff_t m_vInitialVelocity = 0x12BC; // Vector
                constexpr std::ptrdiff_t m_nBounces = 0x12C8; // int32
                constexpr std::ptrdiff_t m_nExplodeEffectIndex = 0x12D0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_nExplodeEffectTickBegin = 0x12D8; // int32
                constexpr std::ptrdiff_t m_vecExplodeEffectOrigin = 0x12DC; // VectorWS
                constexpr std::ptrdiff_t m_flSpawnTime = 0x12E8; // GameTime_t
                constexpr std::ptrdiff_t vecLastTrailLinePos = 0x12EC; // Vector
                constexpr std::ptrdiff_t flNextTrailLineTime = 0x12F8; // GameTime_t
                constexpr std::ptrdiff_t m_bExplodeEffectBegan = 0x12FC; // bool
                constexpr std::ptrdiff_t m_bCanCreateGrenadeTrail = 0x12FD; // bool
                constexpr std::ptrdiff_t m_nSnapshotTrajectoryEffectIndex = 0x1300; // ParticleIndex_t
                constexpr std::ptrdiff_t m_hSnapshotTrajectoryParticleSnapshot = 0x1308; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                constexpr std::ptrdiff_t m_arrTrajectoryTrailPoints = 0x1310; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_arrTrajectoryTrailPointCreationTimes = 0x1328; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flTrajectoryTrailEffectCreationTime = 0x1340; // float32
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_RushIntroCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 4
            namespace CCSPlayerController_InGameMoneyServices {
                constexpr std::ptrdiff_t m_iAccount = 0x40; // int32
                constexpr std::ptrdiff_t m_iStartAccount = 0x44; // int32
                constexpr std::ptrdiff_t m_iTotalCashSpent = 0x48; // int32
                constexpr std::ptrdiff_t m_iCashSpentThisRound = 0x4C; // int32
            }
            // Parent: None
            // Field count: 6
            namespace CCSPlayer_AimPunchServices {
                constexpr std::ptrdiff_t m_predictableBaseTick = 0x48; // GameTick_t
                constexpr std::ptrdiff_t m_predictableBaseTickInterpAmount = 0x4C; // float32
                constexpr std::ptrdiff_t m_predictableBaseAngle = 0x50; // QAngle
                constexpr std::ptrdiff_t m_predictableBaseAngleVel = 0x5C; // QAngle
                constexpr std::ptrdiff_t m_unpredictableBaseTick = 0xA0; // GameTick_t
                constexpr std::ptrdiff_t m_unpredictableBaseAngle = 0xA4; // QAngle
            }
            // Parent: None
            // Field count: 0
            namespace C_HEGrenadeProjectile {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterModel {
                constexpr std::ptrdiff_t m_iFilterModel = 0x638; // CUtlSymbolLarge
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 2
            namespace C_SoundAreaEntityOrientedBox {
                constexpr std::ptrdiff_t m_vMin = 0x628; // Vector
                constexpr std::ptrdiff_t m_vMax = 0x634; // Vector
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            namespace C_SoundOpvarSetPointEntity {
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace CPulseGameBlackboard {
                constexpr std::ptrdiff_t m_strGraphName = 0x608; // CUtlString
                constexpr std::ptrdiff_t m_strStateBlob = 0x610; // CUtlString
            }
            // Parent: None
            // Field count: 0
            namespace C_CSWeaponBaseShotgun {
            }
            // Parent: None
            // Field count: 7
            namespace C_RagdollPropAttached {
                constexpr std::ptrdiff_t m_boneIndexAttached = 0x12F0; // uint32
                constexpr std::ptrdiff_t m_ragdollAttachedObjectIndex = 0x12F4; // uint32
                constexpr std::ptrdiff_t m_attachmentPointBoneSpace = 0x12F8; // Vector
                constexpr std::ptrdiff_t m_attachmentPointRagdollSpace = 0x1304; // Vector
                constexpr std::ptrdiff_t m_vecOffset = 0x1310; // Vector
                constexpr std::ptrdiff_t m_parentTime = 0x131C; // float32
                constexpr std::ptrdiff_t m_bHasParent = 0x1320; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_ModelPointEntity {
            }
            // Parent: C_CSPlayerPawn
            // Field count: 2
            namespace C_CSGO_PreviewPlayer {
                constexpr std::ptrdiff_t m_animgraphCharacterModeString = 0x3720; // CGlobalSymbol
                constexpr std::ptrdiff_t m_flInitialModelScale = 0x3728; // float32
            }
            // Parent: C_BarnLight
            // Field count: 1
            namespace C_RectLight {
                constexpr std::ptrdiff_t m_bShowLight = 0x13A8; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace CCSRadarElement {
                constexpr std::ptrdiff_t m_nElementType = 0x618; // uint32
                constexpr std::ptrdiff_t m_nElementColor = 0x61C; // uint32
                constexpr std::ptrdiff_t m_nTeamFilter = 0x620; // uint32
            }
            // Parent: None
            // Field count: 3
            namespace C_FuncTrackTrain {
                constexpr std::ptrdiff_t m_nLongAxis = 0x1098; // int32
                constexpr std::ptrdiff_t m_flRadius = 0x109C; // float32
                constexpr std::ptrdiff_t m_flLineLength = 0x10A0; // float32
            }
            // Parent: None
            // Field count: 2
            namespace C_EconWearable {
                constexpr std::ptrdiff_t m_nForceSkin = 0x1918; // int32
                constexpr std::ptrdiff_t m_bAlwaysAllow = 0x191C; // bool
            }
            // Parent: None
            // Field count: 2
            namespace EntitySpottedState_t {
                constexpr std::ptrdiff_t m_bSpotted = 0x8; // bool
                constexpr std::ptrdiff_t m_bSpottedByMask = 0xC; // uint32[2]
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponM4A1 {
            }
            // Parent: None
            // Field count: 1
            namespace C_Item {
                constexpr std::ptrdiff_t m_pReticleHintTextName = 0x1918; // char[256]
            }
            // Parent: None
            // Field count: 0
            namespace C_CSPetPlacement {
            }
            // Parent: C_BaseModelEntity
            // Field count: 23
            namespace C_Beam {
                constexpr std::ptrdiff_t m_flFrameRate = 0x1098; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x109C; // float32
                constexpr std::ptrdiff_t m_flFireTime = 0x10A0; // GameTime_t
                constexpr std::ptrdiff_t m_flDamage = 0x10A4; // float32
                constexpr std::ptrdiff_t m_nNumBeamEnts = 0x10A8; // uint8
                constexpr std::ptrdiff_t m_queryHandleHalo = 0x10AC; // int32
                constexpr std::ptrdiff_t m_hBaseMaterial = 0x10D0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nHaloIndex = 0x10D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_nBeamType = 0x10E0; // BeamType_t
                constexpr std::ptrdiff_t m_nBeamFlags = 0x10E4; // uint32
                constexpr std::ptrdiff_t m_hAttachEntity = 0x10E8; // CHandle<C_BaseEntity>[10]
                constexpr std::ptrdiff_t m_nAttachIndex = 0x1110; // AttachmentHandle_t[10]
                constexpr std::ptrdiff_t m_fWidth = 0x111C; // float32
                constexpr std::ptrdiff_t m_fEndWidth = 0x1120; // float32
                constexpr std::ptrdiff_t m_fFadeLength = 0x1124; // float32
                constexpr std::ptrdiff_t m_fHaloScale = 0x1128; // float32
                constexpr std::ptrdiff_t m_fAmplitude = 0x112C; // float32
                constexpr std::ptrdiff_t m_fStartFrame = 0x1130; // float32
                constexpr std::ptrdiff_t m_fSpeed = 0x1134; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x1138; // float32
                constexpr std::ptrdiff_t m_bTurnedOff = 0x113C; // bool
                constexpr std::ptrdiff_t m_vecEndPos = 0x1140; // VectorWS
                constexpr std::ptrdiff_t m_hEndEntity = 0x114C; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 20
            namespace C_EnvLightProbeVolume {
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_AmbientCube = 0x698; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SDF = 0x6A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_DC = 0x6A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeTexture_SH2_L1 = 0x6B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x6B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x6C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x6C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_Entity_vBoxMins = 0x6D0; // Vector
                constexpr std::ptrdiff_t m_Entity_vBoxMaxs = 0x6DC; // Vector
                constexpr std::ptrdiff_t m_Entity_bMoveable = 0x6E8; // bool
                constexpr std::ptrdiff_t m_Entity_nHandshake = 0x6EC; // int32
                constexpr std::ptrdiff_t m_Entity_nPriority = 0x6F0; // int32
                constexpr std::ptrdiff_t m_Entity_bStartDisabled = 0x6F4; // bool
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeX = 0x6F8; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeY = 0x6FC; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeSizeZ = 0x700; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasX = 0x704; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasY = 0x708; // int32
                constexpr std::ptrdiff_t m_Entity_nLightProbeAtlasZ = 0x70C; // int32
                constexpr std::ptrdiff_t m_Entity_bEnabled = 0x719; // bool
            }
            // Parent: None
            // Field count: 9
            namespace C_FuncConveyor {
                constexpr std::ptrdiff_t m_vecMoveDirEntitySpace = 0x10A0; // Vector
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x10AC; // float32
                constexpr std::ptrdiff_t m_nTransitionStartTick = 0x10B0; // GameTick_t
                constexpr std::ptrdiff_t m_nTransitionDurationTicks = 0x10B4; // int32
                constexpr std::ptrdiff_t m_flTransitionStartSpeed = 0x10B8; // float32
                constexpr std::ptrdiff_t m_flFrictionScale = 0x10BC; // float32
                constexpr std::ptrdiff_t m_hConveyorModels = 0x10C0; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                constexpr std::ptrdiff_t m_flCurrentConveyorOffset = 0x10D8; // float32
                constexpr std::ptrdiff_t m_flCurrentConveyorSpeed = 0x10DC; // float32
            }
            // Parent: None
            // Field count: 5
            namespace CCSPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_flNextAttack = 0xD0; // GameTime_t
                constexpr std::ptrdiff_t m_nOldTotalShootPositionHistoryCount = 0xD4; // uint32
                constexpr std::ptrdiff_t m_nOldTotalInputHistoryCount = 0x370; // uint32
                constexpr std::ptrdiff_t m_networkAnimTiming = 0x15C0; // C_NetworkUtlVectorBase<uint8>
                constexpr std::ptrdiff_t m_bBlockInspectUntilNextGraphUpdate = 0x15D8; // bool
            }
            // Parent: None
            // Field count: 2
            namespace C_PhysMagnet {
                constexpr std::ptrdiff_t m_aAttachedObjectsFromServer = 0x1268; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_aAttachedObjects = 0x1280; // CUtlVector<CHandle<C_BaseEntity>>
            }
            // Parent: None
            // Field count: 0
            namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
            }
            // Parent: None
            // Field count: 0
            namespace C_Breakable {
            }
            // Parent: None
            // Field count: 29
            namespace C_PlantedC4 {
                constexpr std::ptrdiff_t m_bBombTicking = 0x1288; // bool
                constexpr std::ptrdiff_t m_nBombSite = 0x128C; // int32
                constexpr std::ptrdiff_t m_nSourceSoundscapeHash = 0x1290; // int32
                constexpr std::ptrdiff_t m_entitySpottedState = 0x1298; // EntitySpottedState_t
                constexpr std::ptrdiff_t m_flNextGlow = 0x12B0; // GameTime_t
                constexpr std::ptrdiff_t m_flNextBeep = 0x12B4; // GameTime_t
                constexpr std::ptrdiff_t m_flC4Blow = 0x12B8; // GameTime_t
                constexpr std::ptrdiff_t m_bCannotBeDefused = 0x12BC; // bool
                constexpr std::ptrdiff_t m_bHasExploded = 0x12BD; // bool
                constexpr std::ptrdiff_t m_flTimerLength = 0x12C0; // float32
                constexpr std::ptrdiff_t m_bBeingDefused = 0x12C4; // bool
                constexpr std::ptrdiff_t m_bTriggerWarning = 0x12C8; // float32
                constexpr std::ptrdiff_t m_bExplodeWarning = 0x12CC; // float32
                constexpr std::ptrdiff_t m_bC4Activated = 0x12D0; // bool
                constexpr std::ptrdiff_t m_bTenSecWarning = 0x12D1; // bool
                constexpr std::ptrdiff_t m_flDefuseLength = 0x12D4; // float32
                constexpr std::ptrdiff_t m_flDefuseCountDown = 0x12D8; // GameTime_t
                constexpr std::ptrdiff_t m_bBombDefused = 0x12DC; // bool
                constexpr std::ptrdiff_t m_hBombDefuser = 0x12E0; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_AttributeManager = 0x12E8; // C_AttributeContainer
                constexpr std::ptrdiff_t m_hDefuserMultimeter = 0x18F8; // CHandle<C_Multimeter>
                constexpr std::ptrdiff_t m_flNextRadarFlashTime = 0x18FC; // GameTime_t
                constexpr std::ptrdiff_t m_bRadarFlash = 0x1900; // bool
                constexpr std::ptrdiff_t m_pBombDefuser = 0x1904; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_fLastDefuseTime = 0x1908; // GameTime_t
                constexpr std::ptrdiff_t m_pPredictionOwner = 0x1910; // CBasePlayerController*
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectatePos = 0x1918; // VectorWS
                constexpr std::ptrdiff_t m_vecC4ExplodeSpectateAng = 0x1924; // QAngle
                constexpr std::ptrdiff_t m_flC4ExplodeSpectateDuration = 0x1930; // float32
            }
            // Parent: None
            // Field count: 4
            namespace CCSCustomHudLayoutState {
                constexpr std::ptrdiff_t m_playerSlot = 0x30; // CPlayerSlot
                constexpr std::ptrdiff_t m_bInputCaptureEnabled = 0x34; // bool
                constexpr std::ptrdiff_t m_vecHasClasses = 0x38; // C_NetworkUtlVectorBase<HUDPanelHasClass_t>
                constexpr std::ptrdiff_t m_vecDialogVariableStrings = 0x50; // C_NetworkUtlVectorBase<HUDPanelDialogVariableString_t>
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterName {
                constexpr std::ptrdiff_t m_iFilterName = 0x638; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 9
            namespace C_RagdollProp {
                constexpr std::ptrdiff_t m_ragEnabled = 0x1268; // C_NetworkUtlVectorBase<bool>
                constexpr std::ptrdiff_t m_ragPos = 0x1280; // C_NetworkUtlVectorBase<Vector>
                constexpr std::ptrdiff_t m_ragAngles = 0x1298; // C_NetworkUtlVectorBase<QAngle>
                constexpr std::ptrdiff_t m_flBlendWeight = 0x12B0; // float32
                constexpr std::ptrdiff_t m_hRagdollSource = 0x12B4; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iEyeAttachment = 0x12B8; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flBlendWeightCurrent = 0x12BC; // float32
                constexpr std::ptrdiff_t m_parentPhysicsBoneIndices = 0x12C0; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_worldSpaceBoneComputationOrder = 0x12D8; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 0
            namespace C_MapPreviewParticleSystem {
            }
            // Parent: C_BaseModelEntity
            // Field count: 18
            namespace CBaseAnimGraph {
                constexpr std::ptrdiff_t m_graphControllerManager = 0x1098; // CAnimGraphControllerManager
                constexpr std::ptrdiff_t m_pMainGraphController = 0x1130; // CAnimGraphControllerPtr
                constexpr std::ptrdiff_t m_bInitiallyPopulateInterpHistory = 0x1138; // bool
                constexpr std::ptrdiff_t m_bSuppressAnimEventSounds = 0x113A; // bool
                constexpr std::ptrdiff_t m_OnLayerCycleUpdated = 0x1140; // CEntityOutputTemplate<float32>
                constexpr std::ptrdiff_t m_OnExternalChoreoGraphChanged = 0x1160; // CEntityIOOutput
                constexpr std::ptrdiff_t m_bAnimGraphUpdateEnabled = 0x1180; // bool
                constexpr std::ptrdiff_t m_bAnimationUpdateScheduled = 0x1181; // bool
                constexpr std::ptrdiff_t m_vecForce = 0x1184; // Vector
                constexpr std::ptrdiff_t m_nForceBone = 0x1190; // int32
                constexpr std::ptrdiff_t m_pClientsideRagdoll = 0x1198; // CBaseAnimGraph*
                constexpr std::ptrdiff_t m_bBuiltRagdoll = 0x11A0; // bool
                constexpr std::ptrdiff_t m_pRagdollControl = 0x11B0; // IPhysicsRagdollControl*
                constexpr std::ptrdiff_t m_RagdollPose = 0x11B8; // PhysicsRagdollPose_t
                constexpr std::ptrdiff_t m_bRagdollEnabled = 0x1200; // bool
                constexpr std::ptrdiff_t m_bRagdollClientSide = 0x1201; // bool
                constexpr std::ptrdiff_t m_bShouldUpdateTransformations = 0x1202; // bool
                constexpr std::ptrdiff_t m_bHasAnimatedMaterialAttributes = 0x1210; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponM249 {
            }
            // Parent: None
            // Field count: 25
            namespace C_LocalTempEntity {
                constexpr std::ptrdiff_t flags = 0x1268; // int32
                constexpr std::ptrdiff_t die = 0x126C; // GameTime_t
                constexpr std::ptrdiff_t m_flFrameMax = 0x1270; // float32
                constexpr std::ptrdiff_t x = 0x1274; // float32
                constexpr std::ptrdiff_t y = 0x1278; // float32
                constexpr std::ptrdiff_t fadeSpeed = 0x127C; // float32
                constexpr std::ptrdiff_t bounceFactor = 0x1280; // float32
                constexpr std::ptrdiff_t hitSound = 0x1284; // int32
                constexpr std::ptrdiff_t priority = 0x1288; // int32
                constexpr std::ptrdiff_t tentOffset = 0x128C; // Vector
                constexpr std::ptrdiff_t m_vecTempEntAngVelocity = 0x1298; // QAngle
                constexpr std::ptrdiff_t tempent_renderamt = 0x12A4; // int32
                constexpr std::ptrdiff_t m_vecNormal = 0x12A8; // Vector
                constexpr std::ptrdiff_t m_flSpriteScale = 0x12B4; // float32
                constexpr std::ptrdiff_t m_nFlickerFrame = 0x12B8; // int32
                constexpr std::ptrdiff_t m_flFrameRate = 0x12BC; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x12C0; // float32
                constexpr std::ptrdiff_t m_pszImpactEffect = 0x12C8; // char*
                constexpr std::ptrdiff_t m_pszParticleEffect = 0x12D0; // char*
                constexpr std::ptrdiff_t m_bParticleCollision = 0x12D8; // bool
                constexpr std::ptrdiff_t m_iLastCollisionFrame = 0x12DC; // int32
                constexpr std::ptrdiff_t m_vLastCollisionOrigin = 0x12E0; // VectorWS
                constexpr std::ptrdiff_t m_vecTempEntVelocity = 0x12EC; // Vector
                constexpr std::ptrdiff_t m_vecPrevAbsOrigin = 0x12F8; // VectorWS
                constexpr std::ptrdiff_t m_vecTempEntAcceleration = 0x1304; // Vector
            }
            // Parent: None
            // Field count: 2
            namespace C_WeaponTaser {
                constexpr std::ptrdiff_t m_fFireTime = 0x1F50; // GameTime_t
                constexpr std::ptrdiff_t m_nLastAttackTick = 0x1F54; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 0
            namespace C_PointEntity {
            }
            // Parent: None
            // Field count: 0
            namespace C_SingleplayRules {
            }
            // Parent: None
            // Field count: 0
            namespace C_PrecipitationBlocker {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_CounterTerroristTeamIntroCamera {
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            namespace C_SoundOpvarSetPathCornerEntity {
            }
            // Parent: None
            // Field count: 4
            namespace CPlayer_WeaponServices {
                constexpr std::ptrdiff_t m_hMyWeapons = 0x48; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
                constexpr std::ptrdiff_t m_hActiveWeapon = 0x60; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_hLastWeapon = 0x64; // CHandle<C_BasePlayerWeapon>
                constexpr std::ptrdiff_t m_iAmmo = 0x68; // uint16[32]
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponNegev {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponFiveSeven {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponSawedoff {
            }
            // Parent: None
            // Field count: 0
            namespace C_TriggerVolume {
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponMP9 {
            }
            // Parent: None
            // Field count: 0
            namespace C_DynamicPropAlias_prop_dynamic_override {
            }
            // Parent: None
            // Field count: 0
            namespace CEnvSoundscapeTriggerable {
            }
            // Parent: None
            // Field count: 5
            namespace C_PlayerPing {
                constexpr std::ptrdiff_t m_hPlayer = 0x630; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_hPingedEntity = 0x634; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_iType = 0x638; // int32
                constexpr std::ptrdiff_t m_bUrgent = 0x63C; // bool
                constexpr std::ptrdiff_t m_szPlaceName = 0x63D; // char[18]
            }
            // Parent: None
            // Field count: 0
            namespace C_AK47 {
            }
            // Parent: C_BaseEntity
            // Field count: 10
            namespace C_CSGO_MapPreviewCameraPathNode {
                constexpr std::ptrdiff_t m_szParentPathUniqueID = 0x600; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_nPathIndex = 0x608; // int32
                constexpr std::ptrdiff_t m_vInTangentLocal = 0x60C; // Vector
                constexpr std::ptrdiff_t m_vOutTangentLocal = 0x618; // Vector
                constexpr std::ptrdiff_t m_flFOV = 0x624; // float32
                constexpr std::ptrdiff_t m_flCameraSpeed = 0x628; // float32
                constexpr std::ptrdiff_t m_flEaseIn = 0x62C; // float32
                constexpr std::ptrdiff_t m_flEaseOut = 0x630; // float32
                constexpr std::ptrdiff_t m_vInTangentWorld = 0x634; // Vector
                constexpr std::ptrdiff_t m_vOutTangentWorld = 0x640; // Vector
            }
            // Parent: None
            // Field count: 10
            namespace C_CSPlayerResource {
                constexpr std::ptrdiff_t m_bHostageAlive = 0x600; // bool[12]
                constexpr std::ptrdiff_t m_isHostageFollowingSomeone = 0x60C; // bool[12]
                constexpr std::ptrdiff_t m_iHostageEntityIDs = 0x618; // CEntityIndex[12]
                constexpr std::ptrdiff_t m_bombsiteCenterA = 0x648; // VectorWS
                constexpr std::ptrdiff_t m_bombsiteCenterB = 0x654; // VectorWS
                constexpr std::ptrdiff_t m_hostageRescueX = 0x660; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueY = 0x670; // int32[4]
                constexpr std::ptrdiff_t m_hostageRescueZ = 0x680; // int32[4]
                constexpr std::ptrdiff_t m_bEndMatchNextMapAllVoted = 0x690; // bool
                constexpr std::ptrdiff_t m_foundGoalPositions = 0x691; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace CSkyboxReference {
                constexpr std::ptrdiff_t m_worldGroupId = 0x600; // WorldGroupId_t
                constexpr std::ptrdiff_t m_hSkyCamera = 0x604; // CHandle<C_SkyCamera>
            }
            // Parent: None
            // Field count: 0
            namespace C_IncendiaryGrenade {
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterClass {
                constexpr std::ptrdiff_t m_iFilterClass = 0x638; // CUtlSymbolLarge
            }
            // Parent: C_PointCamera
            // Field count: 1
            namespace C_PointCameraVFOV {
                constexpr std::ptrdiff_t m_flVerticalFOV = 0x660; // float32
            }
            // Parent: CPathSimple
            // Field count: 4
            namespace CPathWithDynamicNodes {
                constexpr std::ptrdiff_t m_vecPathNodes = 0x710; // C_NetworkUtlVectorBase<CHandle<CPathNode>>
                constexpr std::ptrdiff_t m_xInitialPathWorldToLocal = 0x730; // CTransform
                constexpr std::ptrdiff_t m_eDesiredDirection = 0x750; // DirectionAlongSimplePath_t
                constexpr std::ptrdiff_t m_bIgnoreParentRotation = 0x754; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace CBaseFilter {
                constexpr std::ptrdiff_t m_bNegated = 0x600; // bool
                constexpr std::ptrdiff_t m_OnPass = 0x608; // CEntityIOOutput
                constexpr std::ptrdiff_t m_OnFail = 0x620; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            namespace WeaponPurchaseTracker_t {
                constexpr std::ptrdiff_t m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: C_PointEntity
            // Field count: 15
            namespace CMapInfo {
                constexpr std::ptrdiff_t m_iBuyingStatus = 0x600; // int32
                constexpr std::ptrdiff_t m_flBombRadius = 0x604; // float32
                constexpr std::ptrdiff_t m_iPetPopulation = 0x608; // int32
                constexpr std::ptrdiff_t m_bUseNormalSpawnsForDM = 0x60C; // bool
                constexpr std::ptrdiff_t m_bDisableAutoGeneratedDMSpawns = 0x60D; // bool
                constexpr std::ptrdiff_t m_flBotMaxVisionDistance = 0x610; // float32
                constexpr std::ptrdiff_t m_iHostageCount = 0x614; // int32
                constexpr std::ptrdiff_t m_bFadePlayerVisibilityFarZ = 0x618; // bool
                constexpr std::ptrdiff_t m_bRainTraceToSkyEnabled = 0x619; // bool
                constexpr std::ptrdiff_t m_bGPUCullSkybox = 0x61A; // bool
                constexpr std::ptrdiff_t m_flEnvRainStrength = 0x61C; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleStrength = 0x620; // float32
                constexpr std::ptrdiff_t m_flEnvPuddleRippleDirection = 0x624; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessCoverage = 0x628; // float32
                constexpr std::ptrdiff_t m_flEnvWetnessDryingAmount = 0x62C; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_EndOfMatchCamera {
            }
            // Parent: CBaseAnimGraph
            // Field count: 12
            namespace C_BaseGrenade {
                constexpr std::ptrdiff_t m_bHasWarnedAI = 0x1268; // bool
                constexpr std::ptrdiff_t m_bIsSmokeGrenade = 0x1269; // bool
                constexpr std::ptrdiff_t m_bIsLive = 0x126A; // bool
                constexpr std::ptrdiff_t m_DmgRadius = 0x126C; // float32
                constexpr std::ptrdiff_t m_flDetonateTime = 0x1270; // GameTime_t
                constexpr std::ptrdiff_t m_flWarnAITime = 0x1274; // float32
                constexpr std::ptrdiff_t m_flDamage = 0x1278; // float32
                constexpr std::ptrdiff_t m_iszBounceSound = 0x1280; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_ExplosionSound = 0x1288; // CUtlString
                constexpr std::ptrdiff_t m_hThrower = 0x1290; // CHandle<C_CSPlayerPawn>
                constexpr std::ptrdiff_t m_flNextAttack = 0x12A8; // GameTime_t
                constexpr std::ptrdiff_t m_hOriginalThrower = 0x12AC; // CHandle<C_CSPlayerPawn>
            }
            // Parent: None
            // Field count: 16
            namespace C_PlayerSprayDecal {
                constexpr std::ptrdiff_t m_nUniqueID = 0x1098; // int32
                constexpr std::ptrdiff_t m_unAccountID = 0x109C; // uint32
                constexpr std::ptrdiff_t m_unTraceID = 0x10A0; // uint32
                constexpr std::ptrdiff_t m_rtGcTime = 0x10A4; // uint32
                constexpr std::ptrdiff_t m_vecEndPos = 0x10A8; // VectorWS
                constexpr std::ptrdiff_t m_vecStart = 0x10B4; // VectorWS
                constexpr std::ptrdiff_t m_vecLeft = 0x10C0; // Vector
                constexpr std::ptrdiff_t m_vecNormal = 0x10CC; // Vector
                constexpr std::ptrdiff_t m_nPlayer = 0x10D8; // int32
                constexpr std::ptrdiff_t m_nEntity = 0x10DC; // int32
                constexpr std::ptrdiff_t m_nHitbox = 0x10E0; // int32
                constexpr std::ptrdiff_t m_flCreationTime = 0x10E4; // float32
                constexpr std::ptrdiff_t m_nTintID = 0x10E8; // int32
                constexpr std::ptrdiff_t m_nVersion = 0x10EC; // uint8
                constexpr std::ptrdiff_t m_ubSignature = 0x10ED; // uint8[128]
                constexpr std::ptrdiff_t m_SprayRenderHelper = 0x1178; // CPlayerSprayDecalRenderHelper
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_LimitCount__Criteria_t {
                constexpr std::ptrdiff_t m_bLimitCountPasses = 0x0; // bool
            }
            // Parent: None
            // Field count: 0
            namespace C_CS2HudModelArms {
            }
            // Parent: None
            // Field count: 0
            namespace C_LightSpotEntity {
            }
            // Parent: None
            // Field count: 3
            namespace CCSGameModeRules_Deathmatch {
                constexpr std::ptrdiff_t m_flDMBonusStartTime = 0x30; // GameTime_t
                constexpr std::ptrdiff_t m_flDMBonusTimeLength = 0x34; // float32
                constexpr std::ptrdiff_t m_sDMBonusWeapon = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 0
            namespace CPulseExecCursor {
            }
            // Parent: C_BaseModelEntity
            // Field count: 24
            namespace C_Sprite {
                constexpr std::ptrdiff_t m_hSpriteMaterial = 0x1098; // CStrongHandle<InfoForResourceTypeIMaterial2>
                constexpr std::ptrdiff_t m_hAttachedToEntity = 0x10A0; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_nAttachment = 0x10A4; // AttachmentHandle_t
                constexpr std::ptrdiff_t m_flSpriteFramerate = 0x10A8; // float32
                constexpr std::ptrdiff_t m_flFrame = 0x10AC; // float32
                constexpr std::ptrdiff_t m_flDieTime = 0x10B0; // GameTime_t
                constexpr std::ptrdiff_t m_nBrightness = 0x10C0; // uint32
                constexpr std::ptrdiff_t m_flBrightnessDuration = 0x10C4; // float32
                constexpr std::ptrdiff_t m_flSpriteScale = 0x10C8; // float32
                constexpr std::ptrdiff_t m_flScaleDuration = 0x10CC; // float32
                constexpr std::ptrdiff_t m_bWorldSpaceScale = 0x10D0; // bool
                constexpr std::ptrdiff_t m_flGlowProxySize = 0x10D4; // float32
                constexpr std::ptrdiff_t m_flHDRColorScale = 0x10D8; // float32
                constexpr std::ptrdiff_t m_flLastTime = 0x10DC; // GameTime_t
                constexpr std::ptrdiff_t m_flMaxFrame = 0x10E0; // float32
                constexpr std::ptrdiff_t m_flStartScale = 0x10E4; // float32
                constexpr std::ptrdiff_t m_flDestScale = 0x10E8; // float32
                constexpr std::ptrdiff_t m_flScaleTimeStart = 0x10EC; // GameTime_t
                constexpr std::ptrdiff_t m_nStartBrightness = 0x10F0; // int32
                constexpr std::ptrdiff_t m_nDestBrightness = 0x10F4; // int32
                constexpr std::ptrdiff_t m_flBrightnessTimeStart = 0x10F8; // GameTime_t
                constexpr std::ptrdiff_t m_nSpriteWidth = 0x1108; // int32
                constexpr std::ptrdiff_t m_nSpriteHeight = 0x110C; // int32
                constexpr std::ptrdiff_t m_flSpeed = 0x1110; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 2
            namespace C_CsmFovOverride {
                constexpr std::ptrdiff_t m_cameraName = 0x600; // CUtlString
                constexpr std::ptrdiff_t m_flCsmFovOverrideValue = 0x608; // float32
            }
            // Parent: None
            // Field count: 0
            namespace C_WeaponGlock {
            }
            // Parent: None
            // Field count: 1
            namespace C_PhysicsProp {
                constexpr std::ptrdiff_t m_bAwake = 0x13E0; // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            namespace CFilterTeam {
                constexpr std::ptrdiff_t m_iFilterTeam = 0x638; // int32
            }
            // Parent: None
            // Field count: 0
            namespace C_SmokeGrenade {
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
            }
            // Parent: None
            // Field count: 0
            namespace CCSGO_RushIntroCharacterPosition {
            }
            // Parent: None
            // Field count: 0
            namespace CCSPlayer_DamageReactServices {
            }
            // Parent: C_BaseEntity
            // Field count: 3
            namespace C_EntityFlame {
                constexpr std::ptrdiff_t m_hEntAttached = 0x600; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hOldAttached = 0x628; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_bCheapEffect = 0x62C; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CBaseAnimGraphAlias_baseanimating {
            }
            // Parent: C_BaseEntity
            // Field count: 17
            namespace CBasePlayerController {
                constexpr std::ptrdiff_t m_CommandContext = 0x608; // C_CommandContext
                constexpr std::ptrdiff_t m_nInButtonsWhichAreToggles = 0x6B0; // uint64
                constexpr std::ptrdiff_t m_nTickBase = 0x6B8; // uint32
                constexpr std::ptrdiff_t m_hPawn = 0x6BC; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_bKnownTeamMismatch = 0x6C0; // bool
                constexpr std::ptrdiff_t m_hPredictedPawn = 0x6C4; // CHandle<C_BasePlayerPawn>
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x6CC; // CSplitScreenSlot
                constexpr std::ptrdiff_t m_hSplitOwner = 0x6D0; // CHandle<CBasePlayerController>
                constexpr std::ptrdiff_t m_hSplitScreenPlayers = 0x6D8; // CUtlVector<CHandle<CBasePlayerController>>
                constexpr std::ptrdiff_t m_bIsHLTV = 0x6F0; // bool
                constexpr std::ptrdiff_t m_iConnected = 0x6F4; // PlayerConnectedState
                constexpr std::ptrdiff_t m_iMostConnected = 0x6F8; // PlayerConnectedState
                constexpr std::ptrdiff_t m_iszPlayerName = 0x6FC; // char[128]
                constexpr std::ptrdiff_t m_steamID = 0x788; // uint64
                constexpr std::ptrdiff_t m_bIsLocalPlayerController = 0x790; // bool
                constexpr std::ptrdiff_t m_bNoClipEnabled = 0x791; // bool
                constexpr std::ptrdiff_t m_iDesiredFOV = 0x794; // uint32
            }
            // Parent: None
            // Field count: 0
            namespace C_CSGO_EndOfMatchLineupEndpoint {
            }
            // Parent: None
            // Field count: 5
            namespace CInterpolatedValue {
                constexpr std::ptrdiff_t m_flStartTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x4; // float32
                constexpr std::ptrdiff_t m_flStartValue = 0x8; // float32
                constexpr std::ptrdiff_t m_flEndValue = 0xC; // float32
                constexpr std::ptrdiff_t m_nInterpType = 0x10; // int32
            }
            // Parent: None
            // Field count: 13
            namespace CFlashlightEffect {
                constexpr std::ptrdiff_t m_bIsOn = 0x10; // bool
                constexpr std::ptrdiff_t m_bMuzzleFlashEnabled = 0x20; // bool
                constexpr std::ptrdiff_t m_flMuzzleFlashBrightness = 0x24; // float32
                constexpr std::ptrdiff_t m_quatMuzzleFlashOrientation = 0x30; // Quaternion
                constexpr std::ptrdiff_t m_vecMuzzleFlashOrigin = 0x40; // VectorWS
                constexpr std::ptrdiff_t m_flFov = 0x4C; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x50; // float32
                constexpr std::ptrdiff_t m_flLinearAtten = 0x54; // float32
                constexpr std::ptrdiff_t m_bCastsShadows = 0x58; // bool
                constexpr std::ptrdiff_t m_flCurrentPullBackDist = 0x5C; // float32
                constexpr std::ptrdiff_t m_FlashlightTexture = 0x60; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_MuzzleFlashTexture = 0x68; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_textureName = 0x70; // char[64]
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOutlinerDetailExpr
            // MVDataOverlayType
            // MVDataPreviewWidget
            // MVDataOutlinerLeafNameFn
            // MVDataOutlinerLeafColorFn
            namespace CInventoryImageData {
                constexpr std::ptrdiff_t m_nNodeType = 0x0; // InventoryNodeType_t
                constexpr std::ptrdiff_t name = 0x8; // CUtlString
                constexpr std::ptrdiff_t inventory_image_data = 0x10; // inv_image_data_t
            }
            // Parent: None
            // Field count: 0
            namespace CPlayerSprayDecalRenderHelper {
            }
            // Parent: None
            // Field count: 13
            namespace C_IronSightController {
                constexpr std::ptrdiff_t m_bIronSightAvailable = 0x10; // bool
                constexpr std::ptrdiff_t m_flIronSightAmount = 0x14; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountGained = 0x18; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountBiased = 0x1C; // float32
                constexpr std::ptrdiff_t m_flIronSightAmount_Interpolated = 0x20; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountGained_Interpolated = 0x24; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountBiased_Interpolated = 0x28; // float32
                constexpr std::ptrdiff_t m_flInterpolationLastUpdated = 0x2C; // float32
                constexpr std::ptrdiff_t m_angDeltaAverage = 0x30; // QAngle[8]
                constexpr std::ptrdiff_t m_angViewLast = 0x90; // QAngle
                constexpr std::ptrdiff_t m_vecDotCoords = 0x9C; // Vector2D
                constexpr std::ptrdiff_t m_flFiringInaccuracyExtraWidthMultiplier = 0xA4; // float32
                constexpr std::ptrdiff_t m_flSpeedRatio = 0xA8; // float32
            }
            // Parent: None
            // Field count: 43
            namespace CGlobalLightBase {
                constexpr std::ptrdiff_t m_bSpotLight = 0x10; // bool
                constexpr std::ptrdiff_t m_SpotLightOrigin = 0x14; // VectorWS
                constexpr std::ptrdiff_t m_SpotLightAngles = 0x20; // QAngle
                constexpr std::ptrdiff_t m_ShadowDirection = 0x2C; // Vector
                constexpr std::ptrdiff_t m_AmbientDirection = 0x38; // Vector
                constexpr std::ptrdiff_t m_SpecularDirection = 0x44; // Vector
                constexpr std::ptrdiff_t m_InspectorSpecularDirection = 0x50; // Vector
                constexpr std::ptrdiff_t m_flSpecularPower = 0x5C; // float32
                constexpr std::ptrdiff_t m_flSpecularIndependence = 0x60; // float32
                constexpr std::ptrdiff_t m_SpecularColor = 0x64; // Color
                constexpr std::ptrdiff_t m_bStartDisabled = 0x68; // bool
                constexpr std::ptrdiff_t m_bEnabled = 0x69; // bool
                constexpr std::ptrdiff_t m_LightColor = 0x6C; // Color
                constexpr std::ptrdiff_t m_AmbientColor1 = 0x70; // Color
                constexpr std::ptrdiff_t m_AmbientColor2 = 0x74; // Color
                constexpr std::ptrdiff_t m_AmbientColor3 = 0x78; // Color
                constexpr std::ptrdiff_t m_flSunDistance = 0x7C; // float32
                constexpr std::ptrdiff_t m_flFOV = 0x80; // float32
                constexpr std::ptrdiff_t m_flNearZ = 0x84; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x88; // float32
                constexpr std::ptrdiff_t m_bEnableShadows = 0x8C; // bool
                constexpr std::ptrdiff_t m_bOldEnableShadows = 0x8D; // bool
                constexpr std::ptrdiff_t m_bBackgroundClearNotRequired = 0x8E; // bool
                constexpr std::ptrdiff_t m_flCloudScale = 0x90; // float32
                constexpr std::ptrdiff_t m_flCloud1Speed = 0x94; // float32
                constexpr std::ptrdiff_t m_flCloud1Direction = 0x98; // float32
                constexpr std::ptrdiff_t m_flCloud2Speed = 0x9C; // float32
                constexpr std::ptrdiff_t m_flCloud2Direction = 0xA0; // float32
                constexpr std::ptrdiff_t m_flAmbientScale1 = 0xB0; // float32
                constexpr std::ptrdiff_t m_flAmbientScale2 = 0xB4; // float32
                constexpr std::ptrdiff_t m_flGroundScale = 0xB8; // float32
                constexpr std::ptrdiff_t m_flLightScale = 0xBC; // float32
                constexpr std::ptrdiff_t m_flFoWDarkness = 0xC0; // float32
                constexpr std::ptrdiff_t m_bEnableSeparateSkyboxFog = 0xC4; // bool
                constexpr std::ptrdiff_t m_vFowColor = 0xC8; // Vector
                constexpr std::ptrdiff_t m_ViewOrigin = 0xD4; // VectorWS
                constexpr std::ptrdiff_t m_ViewAngles = 0xE0; // QAngle
                constexpr std::ptrdiff_t m_flViewFoV = 0xEC; // float32
                constexpr std::ptrdiff_t m_WorldPoints = 0xF0; // VectorWS[8]
                constexpr std::ptrdiff_t m_vFogOffsetLayer0 = 0x4A8; // Vector2D
                constexpr std::ptrdiff_t m_vFogOffsetLayer1 = 0x4B0; // Vector2D
                constexpr std::ptrdiff_t m_hEnvWind = 0x4B8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hEnvSky = 0x4BC; // CHandle<C_BaseEntity>
            }
        }
    }
}
