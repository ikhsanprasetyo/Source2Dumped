// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-10-29 22:21:55.473931 +07:00

namespace Source2Dumper.Schemas {
    // Module: client.dll
    // Class count: 391
    // Enum count: 14
    public static class ClientDll {
        // Alignment: 4
        // Member count: 5
        public enum C_BaseCombatCharacter__WaterWakeMode_t : uint {
            WATER_WAKE_NONE = 0x0,
            WATER_WAKE_IDLE = 0x1,
            WATER_WAKE_WALKING = 0x2,
            WATER_WAKE_RUNNING = 0x3,
            WATER_WAKE_WATER_OVERHEAD = 0x4
        }
        // Alignment: 4
        // Member count: 2
        public enum PulseBestOutflowRules_t : uint {
            SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
            SORT_BY_OUTFLOW_INDEX = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum PulseCursorCancelPriority_t : uint {
            None = 0x0,
            CancelOnSucceeded = 0x1,
            SoftCancel = 0x2,
            HardCancel = 0x3
        }
        // Alignment: 4
        // Member count: 2
        public enum PulseMethodCallMode_t : uint {
            SYNC_WAIT_FOR_COMPLETION = 0x0,
            ASYNC_FIRE_AND_FORGET = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum PulseCursorWakePriority_t : uint {
            WakeElegantly = 0x0,
            WakeImmediate = 0x1
        }
        // Alignment: 4
        // Member count: 15
        public enum CompositeMaterialInputLooseVariableType_t : uint {
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
        }
        // Alignment: 4
        // Member count: 8
        public enum CompositeMaterialInputTextureType_t : uint {
            INPUT_TEXTURE_TYPE_DEFAULT = 0x0,
            INPUT_TEXTURE_TYPE_NORMALMAP = 0x1,
            INPUT_TEXTURE_TYPE_COLOR = 0x2,
            INPUT_TEXTURE_TYPE_MASKS = 0x3,
            INPUT_TEXTURE_TYPE_ROUGHNESS = 0x4,
            INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK = 0x5,
            INPUT_TEXTURE_TYPE_AO = 0x6,
            INPUT_TEXTURE_TYPE_POSITION = 0x7
        }
        // Alignment: 4
        // Member count: 9
        public enum InventoryNodeType_t : uint {
            NODE_TYPE_INVALID = 0x0,
            VIRTUAL_NODE_SCHEMA_PREFAB = 0x1,
            VIRTUAL_NODE_SCHEMA_ITEMDEF = 0x2,
            VIRTUAL_NODE_SCHEMA_STICKER = 0x3,
            VIRTUAL_NODE_SCHEMA_KEYCHAIN = 0x4,
            CONCRETE_NODE_SCHEMA_PREFAB = 0x5,
            CONCRETE_NODE_SCHEMA_ITEMDEF = 0x6,
            CONCRETE_NODE_SCHEMA_STICKER = 0x7,
            CONCRETE_NODE_SCHEMA_KEYCHAIN = 0x8
        }
        // Alignment: 4
        // Member count: 6
        public enum CompositeMaterialInputContainerSourceType_t : uint {
            CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
            CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
            CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
            CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
            CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
            CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
        }
        // Alignment: 4
        // Member count: 10
        public enum CompMatPropertyMutatorType_t : uint {
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
        }
        // Alignment: 4
        // Member count: 2
        public enum CompositeMaterialVarSystemVar_t : uint {
            COMPMATSYSVAR_COMPOSITETIME = 0x0,
            COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
        }
        // Alignment: 4
        // Member count: 7
        public enum P2P_Messages : uint {
            p2p_TextMessage = 0x100,
            p2p_Voice = 0x101,
            p2p_Ping = 0x102,
            p2p_VRAvatarPosition = 0x103,
            p2p_WatchSynchronization = 0x104,
            p2p_FightingGame_GameData = 0x105,
            p2p_FightingGame_Connection = 0x106
        }
        // Alignment: 4
        // Member count: 6
        public enum CompositeMaterialMatchFilterType_t : uint {
            MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
            MATCH_FILTER_MATERIAL_SHADER = 0x1,
            MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
            MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
            MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
            MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
        }
        // Alignment: 4
        // Member count: 3
        public enum CompMatPropertyMutatorConditionType_t : uint {
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_TeamIntroCharacterPosition {
        }
        // Parent: None
        // Field count: 0
        public static class C_FireCrackerBlast {
        }
        // Parent: None
        // Field count: 0
        public static class CCSGO_WingmanIntroCounterTerroristPosition {
        }
        // Parent: None
        // Field count: 1
        public static class C_SceneEntity__QueuedEvents_t {
            public const nint starttime = 0x0; // float32
        }
        // Parent: None
        // Field count: 1
        public static class CCSPlayer_PingServices {
            public const nint m_hPlayerPing = 0x48; // CHandle<C_PlayerPing>
        }
        // Parent: None
        // Field count: 5
        public static class CEconItemAttribute {
            public const nint m_iAttributeDefinitionIndex = 0x30; // uint16
            public const nint m_flValue = 0x34; // float32
            public const nint m_flInitialValue = 0x38; // float32
            public const nint m_nRefundableCurrency = 0x3C; // int32
            public const nint m_bSetBonus = 0x40; // bool
        }
        // Parent: None
        // Field count: 0
        public static class CFuncRetakeBarrier {
        }
        // Parent: C_BaseEntity
        // Field count: 4
        public static class C_SkyCamera {
            public const nint m_skyboxData = 0x600; // sky3dparams_t
            public const nint m_skyboxSlotToken = 0x690; // CUtlStringToken
            public const nint m_bUseAngles = 0x694; // bool
            public const nint m_pNext = 0x698; // C_SkyCamera*
        }
        // Parent: None
        // Field count: 0
        public static class C_FuncRotating {
        }
        // Parent: C_BaseEntity
        // Field count: 6
        public static class C_SoundOpvarSetPointBase {
            public const nint m_iszStackName = 0x600; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x608; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x610; // CUtlSymbolLarge
            public const nint m_iOpvarIndex = 0x618; // int32
            public const nint m_bUseAutoCompare = 0x61C; // bool
            public const nint m_bFastRefresh = 0x61D; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 24
        public static class C_EnvCubemapFog {
            public const nint m_flEndDistance = 0x600; // float32
            public const nint m_flStartDistance = 0x604; // float32
            public const nint m_flFogFalloffExponent = 0x608; // float32
            public const nint m_bHeightFogEnabled = 0x60C; // bool
            public const nint m_flFogHeightWidth = 0x610; // float32
            public const nint m_flFogHeightEnd = 0x614; // float32
            public const nint m_flFogHeightStart = 0x618; // float32
            public const nint m_flFogHeightExponent = 0x61C; // float32
            public const nint m_flLODBias = 0x620; // float32
            public const nint m_bActive = 0x624; // bool
            public const nint m_bStartDisabled = 0x625; // bool
            public const nint m_flFogMaxOpacity = 0x628; // float32
            public const nint m_nCubemapSourceType = 0x62C; // int32
            public const nint m_hSkyMaterial = 0x630; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_iszSkyEntity = 0x638; // CUtlSymbolLarge
            public const nint m_nHeightFogType = 0x640; // int32
            public const nint m_nFogHeightBlendMode = 0x644; // int32
            public const nint m_nFogHeightCoordinateSpace = 0x648; // int32
            public const nint m_nDistanceFogType = 0x64C; // int32
            public const nint m_DistanceFogCurveString = 0x650; // CUtlSymbolLarge
            public const nint m_HeightFogCurveString = 0x658; // CUtlSymbolLarge
            public const nint m_hFogCubemapTexture = 0x6F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_bHasHeightFogEnd = 0x6F8; // bool
            public const nint m_bFirstTime = 0x6F9; // bool
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_TeamSelectTerroristPosition {
        }
        // Parent: C_ParticleSystem
        // Field count: 5
        public static class C_EnvParticleGlow {
            public const nint m_flAlphaScale = 0x1668; // float32
            public const nint m_flRadiusScale = 0x166C; // float32
            public const nint m_flSelfIllumScale = 0x1670; // float32
            public const nint m_ColorTint = 0x1674; // Color
            public const nint m_hTextureOverride = 0x1678; // CStrongHandle<InfoForResourceTypeCTextureBase>
        }
        // Parent: None
        // Field count: 0
        public static class CCS_PortraitWorldCallbackHandler {
        }
        // Parent: None
        // Field count: 9
        public static class CCSPlayerController_InventoryServices {
            public const nint m_vecNetworkableLoadout = 0x40; // CUtlVector<CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t>
            public const nint m_unMusicID = 0x58; // uint16
            public const nint m_rank = 0x5C; // MedalRank_t[6]
            public const nint m_nPersonaDataPublicLevel = 0x74; // int32
            public const nint m_nPersonaDataPublicCommendsLeader = 0x78; // int32
            public const nint m_nPersonaDataPublicCommendsTeacher = 0x7C; // int32
            public const nint m_nPersonaDataPublicCommendsFriendly = 0x80; // int32
            public const nint m_nPersonaDataXpTrailLevel = 0x84; // int32
            public const nint m_vecServerAuthoritativeWeaponSlots = 0x88; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
        }
        // Parent: None
        // Field count: 9
        public static class CCSPlayerModernJump {
            public const nint m_nLastActualJumpPressTick = 0x10; // GameTick_t
            public const nint m_flLastActualJumpPressFrac = 0x14; // float32
            public const nint m_nLastUsableJumpPressTick = 0x18; // GameTick_t
            public const nint m_flLastUsableJumpPressFrac = 0x1C; // float32
            public const nint m_nLastLandedTick = 0x20; // GameTick_t
            public const nint m_flLastLandedFrac = 0x24; // float32
            public const nint m_flLastLandedVelocityX = 0x28; // float32
            public const nint m_flLastLandedVelocityY = 0x2C; // float32
            public const nint m_flLastLandedVelocityZ = 0x30; // float32
        }
        // Parent: None
        // Field count: 1
        public static class C_EconEntity__AttachedModelData_t {
            public const nint m_iModelDisplayFlags = 0x0; // int32
        }
        // Parent: None
        // Field count: 0
        public static class CPulse_ResumePoint {
        }
        // Parent: C_BaseTrigger
        // Field count: 9
        public static class CTriggerFan {
            public const nint m_vFanOriginOffset = 0x1180; // Vector
            public const nint m_vDirection = 0x118C; // Vector
            public const nint m_bPushTowardsInfoTarget = 0x1198; // bool
            public const nint m_bPushAwayFromInfoTarget = 0x1199; // bool
            public const nint m_qNoiseDelta = 0x11A0; // Quaternion
            public const nint m_hInfoFan = 0x11B0; // CHandle<CInfoFan>
            public const nint m_flForce = 0x11B4; // float32
            public const nint m_bFalloff = 0x11B8; // bool
            public const nint m_RampTimer = 0x11C0; // CountdownTimer
        }
        // Parent: None
        // Field count: 0
        public static class C_HostageCarriableProp {
        }
        // Parent: None
        // Field count: 6
        public static class C_BulletHitModel {
            public const nint m_matLocal = 0x1268; // matrix3x4_t
            public const nint m_iBoneIndex = 0x1298; // int32
            public const nint m_hPlayerParent = 0x129C; // CHandle<C_BaseEntity>
            public const nint m_bIsHit = 0x12A0; // bool
            public const nint m_flTimeCreated = 0x12A4; // float32
            public const nint m_vecStartPos = 0x12A8; // VectorWS
        }
        // Parent: None
        // Field count: 3
        public static class C_FuncElectrifiedVolume {
            public const nint m_nAmbientEffect = 0x1098; // ParticleIndex_t
            public const nint m_EffectName = 0x10A0; // CUtlSymbolLarge
            public const nint m_bState = 0x10A8; // bool
        }
        // Parent: None
        // Field count: 17
        public static class C_MapVetoPickController {
            public const nint m_nDraftType = 0x610; // int32
            public const nint m_nTeamWinningCoinToss = 0x614; // int32
            public const nint m_nTeamWithFirstChoice = 0x618; // int32[64]
            public const nint m_nVoteMapIdsList = 0x718; // int32[7]
            public const nint m_nAccountIDs = 0x734; // int32[64]
            public const nint m_nMapId0 = 0x834; // int32[64]
            public const nint m_nMapId1 = 0x934; // int32[64]
            public const nint m_nMapId2 = 0xA34; // int32[64]
            public const nint m_nMapId3 = 0xB34; // int32[64]
            public const nint m_nMapId4 = 0xC34; // int32[64]
            public const nint m_nMapId5 = 0xD34; // int32[64]
            public const nint m_nStartingSide0 = 0xE34; // int32[64]
            public const nint m_nCurrentPhase = 0xF34; // int32
            public const nint m_nPhaseStartTick = 0xF38; // int32
            public const nint m_nPhaseDurationTicks = 0xF3C; // int32
            public const nint m_nPostDataUpdateTick = 0xF40; // int32
            public const nint m_bDisabledHud = 0xF44; // bool
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_EndOfMatchCharacterPosition {
        }
        // Parent: None
        // Field count: 4
        public static class CPointOffScreenIndicatorUi {
            public const nint m_bBeenEnabled = 0x1300; // bool
            public const nint m_bHide = 0x1301; // bool
            public const nint m_flSeenTargetTime = 0x1304; // float32
            public const nint m_pTargetPanel = 0x1308; // C_PointClientUIWorldPanel*
        }
        // Parent: None
        // Field count: 0
        public static class CCSObserver_UseServices {
        }
        // Parent: C_BaseTrigger
        // Field count: 1
        public static class CCSMinimapVolume {
            public const nint m_strMinimapName = 0x1198; // CUtlString
        }
        // Parent: None
        // Field count: 0
        public static class CCSPlayer_UseServices {
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_CounterTerroristWingmanIntroCamera {
        }
        // Parent: C_PointEntity
        // Field count: 4
        public static class CInfoFan {
            public const nint m_fFanForceMaxRadius = 0x640; // float32
            public const nint m_fFanForceMinRadius = 0x644; // float32
            public const nint m_flCurveDistRange = 0x648; // float32
            public const nint m_FanForceCurveString = 0x650; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 7
        public static class C_VoteController {
            public const nint m_iActiveIssueIndex = 0x610; // int32
            public const nint m_iOnlyTeamToVote = 0x614; // int32
            public const nint m_nVoteOptionCount = 0x618; // int32[5]
            public const nint m_nPotentialVotes = 0x62C; // int32
            public const nint m_bVotesDirty = 0x630; // bool
            public const nint m_bTypeDirty = 0x631; // bool
            public const nint m_bIsYesNoVote = 0x632; // bool
        }
        // Parent: None
        // Field count: 10
        public static class C_C4 {
            public const nint m_activeLightParticleIndex = 0x1F20; // ParticleIndex_t
            public const nint m_eActiveLightEffect = 0x1F24; // C4LightEffect_t
            public const nint m_bStartedArming = 0x1F28; // bool
            public const nint m_fArmedTime = 0x1F2C; // GameTime_t
            public const nint m_bBombPlacedAnimation = 0x1F30; // bool
            public const nint m_bIsPlantingViaUse = 0x1F31; // bool
            public const nint m_entitySpottedState = 0x1F38; // EntitySpottedState_t
            public const nint m_nSpotRules = 0x1F50; // int32
            public const nint m_bPlayedArmingBeeps = 0x1F54; // bool[7]
            public const nint m_bBombPlanted = 0x1F5B; // bool
        }
        // Parent: C_BasePlayerPawn
        // Field count: 26
        public static class C_CSPlayerPawnBase {
            public const nint m_pPingServices = 0x14D8; // CCSPlayer_PingServices*
            public const nint m_previousPlayerState = 0x14E0; // CSPlayerState
            public const nint m_iPlayerState = 0x14E4; // CSPlayerState
            public const nint m_bHasMovedSinceSpawn = 0x14E8; // bool
            public const nint m_flLastSpawnTimeIndex = 0x14EC; // GameTime_t
            public const nint m_iProgressBarDuration = 0x14F0; // int32
            public const nint m_flProgressBarStartTime = 0x14F4; // float32
            public const nint m_flClientDeathTime = 0x14F8; // GameTime_t
            public const nint m_flFlashBangTime = 0x14FC; // float32
            public const nint m_flFlashScreenshotAlpha = 0x1500; // float32
            public const nint m_flFlashOverlayAlpha = 0x1504; // float32
            public const nint m_bFlashBuildUp = 0x1508; // bool
            public const nint m_bFlashDspHasBeenCleared = 0x1509; // bool
            public const nint m_bFlashScreenshotHasBeenGrabbed = 0x150A; // bool
            public const nint m_flFlashMaxAlpha = 0x150C; // float32
            public const nint m_flFlashDuration = 0x1510; // float32
            public const nint m_flClientHealthFadeChangeTimestamp = 0x1514; // GameTime_t
            public const nint m_nClientHealthFadeParityValue = 0x1518; // int32
            public const nint m_fNextThinkPushAway = 0x151C; // float32
            public const nint m_flCurrentMusicStartTime = 0x1524; // float32
            public const nint m_flMusicRoundStartTime = 0x1528; // float32
            public const nint m_bDeferStartMusicOnWarmup = 0x152C; // bool
            public const nint m_flLastSmokeOverlayAlpha = 0x1530; // float32
            public const nint m_flLastSmokeAge = 0x1534; // float32
            public const nint m_vLastSmokeOverlayColor = 0x1538; // Vector
            public const nint m_hOriginalController = 0x1560; // CHandle<CCSPlayerController>
        }
        // Parent: CBaseProp
        // Field count: 29
        public static class C_BreakableProp {
            public const nint m_CPropDataComponent = 0x12A0; // CPropDataComponent
            public const nint m_OnStartDeath = 0x12E0; // CEntityIOOutput
            public const nint m_OnBreak = 0x12F8; // CEntityIOOutput
            public const nint m_OnHealthChanged = 0x1310; // CEntityOutputTemplate<float32>
            public const nint m_OnTakeDamage = 0x1330; // CEntityIOOutput
            public const nint m_impactEnergyScale = 0x1348; // float32
            public const nint m_iMinHealthDmg = 0x134C; // int32
            public const nint m_flPressureDelay = 0x1350; // float32
            public const nint m_flDefBurstScale = 0x1354; // float32
            public const nint m_vDefBurstOffset = 0x1358; // Vector
            public const nint m_hBreaker = 0x1364; // CHandle<C_BaseEntity>
            public const nint m_PerformanceMode = 0x1368; // PerformanceMode_t
            public const nint m_flPreventDamageBeforeTime = 0x136C; // GameTime_t
            public const nint m_BreakableContentsType = 0x1370; // BreakableContentsType_t
            public const nint m_strBreakableContentsPropGroupOverride = 0x1378; // CUtlString
            public const nint m_strBreakableContentsParticleOverride = 0x1380; // CUtlString
            public const nint m_bHasBreakPiecesOrCommands = 0x1388; // bool
            public const nint m_explodeDamage = 0x138C; // float32
            public const nint m_explodeRadius = 0x1390; // float32
            public const nint m_sExplosionType = 0x1398; // CGlobalSymbol
            public const nint m_explosionDelay = 0x13A0; // float32
            public const nint m_explosionBuildupSound = 0x13A8; // CUtlSymbolLarge
            public const nint m_explosionCustomEffect = 0x13B0; // CUtlSymbolLarge
            public const nint m_explosionCustomSound = 0x13B8; // CUtlSymbolLarge
            public const nint m_explosionModifier = 0x13C0; // CUtlSymbolLarge
            public const nint m_hPhysicsAttacker = 0x13C8; // CHandle<C_BasePlayerPawn>
            public const nint m_flLastPhysicsInfluenceTime = 0x13CC; // GameTime_t
            public const nint m_flDefaultFadeScale = 0x13D0; // float32
            public const nint m_hLastAttacker = 0x13D4; // CHandle<C_BaseEntity>
        }
        // Parent: None
        // Field count: 0
        public static class CCSGO_WingmanIntroTerroristPosition {
        }
        // Parent: None
        // Field count: 6
        public static class C_RetakeGameRules {
            public const nint m_nMatchSeed = 0x138; // int32
            public const nint m_bBlockersPresent = 0x13C; // bool
            public const nint m_bRoundInProgress = 0x13D; // bool
            public const nint m_iFirstSecondHalfRound = 0x140; // int32
            public const nint m_iBombSite = 0x144; // int32
            public const nint m_hBombPlanter = 0x148; // CHandle<C_CSPlayerPawn>
        }
        // Parent: C_SoundOpvarSetPointEntity
        // Field count: 0
        public static class C_SoundOpvarSetDomeEntity {
        }
        // Parent: C_SoundAreaEntityBase
        // Field count: 1
        public static class C_SoundAreaEntitySphere {
            public const nint m_flRadius = 0x628; // float32
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponAWP {
        }
        // Parent: C_BaseModelEntity
        // Field count: 3
        public static class C_BaseButton {
            public const nint m_glowEntity = 0x1098; // CHandle<C_BaseModelEntity>
            public const nint m_usable = 0x109C; // bool
            public const nint m_szDisplayText = 0x10A0; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 1
        public static class CCSObserver_ObserverServices {
            public const nint m_obsInterpState = 0x70; // ObserverInterpState_t
        }
        // Parent: C_BaseEntity
        // Field count: 2
        public static class C_SoundEventBoxHelper {
            public const nint m_vMins = 0x600; // Vector
            public const nint m_vMaxs = 0x60C; // Vector
        }
        // Parent: C_SoundEventMultiPointEntity
        // Field count: 1
        public static class C_SoundEventBoxEntity {
            public const nint m_vecBoxHelpersNetworked = 0x6C0; // C_NetworkUtlVectorBase<SoundeventBoxHelperNetworked_t>
        }
        // Parent: None
        // Field count: 3
        public static class ServerAuthoritativeWeaponSlot_t {
            public const nint unClass = 0x30; // uint16
            public const nint unSlot = 0x32; // uint16
            public const nint unItemDefIdx = 0x34; // uint16
        }
        // Parent: None
        // Field count: 0
        public static class C_CSMinimapBoundary {
        }
        // Parent: None
        // Field count: 8
        public static class C_Precipitation {
            public const nint m_flDensity = 0x1180; // float32
            public const nint m_flParticleInnerDist = 0x1190; // float32
            public const nint m_pParticleDef = 0x1198; // char*
            public const nint m_tParticlePrecipTraceTimer = 0x11AC; // TimedEvent[1]
            public const nint m_bActiveParticlePrecipEmitter = 0x11B4; // bool[1]
            public const nint m_bParticlePrecipInitialized = 0x11B5; // bool
            public const nint m_bHasSimulatedSinceLastSceneObjectUpdate = 0x11B6; // bool
            public const nint m_nAvailableSheetSequencesMaxIndex = 0x11B8; // int32
        }
        // Parent: C_BaseEntity
        // Field count: 7
        public static class CLogicRelay {
            public const nint m_OnSpawn = 0x600; // CEntityIOOutput
            public const nint m_OnTrigger = 0x618; // CEntityIOOutput
            public const nint m_bDisabled = 0x630; // bool
            public const nint m_bWaitForRefire = 0x631; // bool
            public const nint m_bTriggerOnce = 0x632; // bool
            public const nint m_bFastRetrigger = 0x633; // bool
            public const nint m_bPassthoughCaller = 0x634; // bool
        }
        // Parent: None
        // Field count: 6
        public static class SequenceHistory_t {
            public const nint m_hSequence = 0x0; // HSequence
            public const nint m_flSeqStartTime = 0x4; // GameTime_t
            public const nint m_flSeqFixedCycle = 0x8; // float32
            public const nint m_nSeqLoopMode = 0xC; // AnimLoopMode_t
            public const nint m_flPlaybackRate = 0x10; // float32
            public const nint m_flCyclesPerSecond = 0x14; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CPlayer_ItemServices {
        }
        // Parent: None
        // Field count: 4
        public static class CPulse_OutflowConnection {
            public const nint m_SourceOutflowName = 0x0; // PulseSymbol_t
            public const nint m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
            public const nint m_nInstruction = 0x14; // int32
            public const nint m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponUMP45 {
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponG3SG1 {
        }
        // Parent: None
        // Field count: 2
        public static class C_SpotlightEnd {
            public const nint m_flLightScale = 0x1098; // float32
            public const nint m_Radius = 0x109C; // float32
        }
        // Parent: None
        // Field count: 23
        public static class C_Fish {
            public const nint m_pos = 0x1268; // VectorWS
            public const nint m_vel = 0x1274; // Vector
            public const nint m_angles = 0x1280; // QAngle
            public const nint m_localLifeState = 0x128C; // int32
            public const nint m_deathDepth = 0x1290; // float32
            public const nint m_deathAngle = 0x1294; // float32
            public const nint m_buoyancy = 0x1298; // float32
            public const nint m_wiggleTimer = 0x12A0; // CountdownTimer
            public const nint m_wigglePhase = 0x12B8; // float32
            public const nint m_wiggleRate = 0x12BC; // float32
            public const nint m_actualPos = 0x12C0; // VectorWS
            public const nint m_actualAngles = 0x12CC; // QAngle
            public const nint m_poolOrigin = 0x12D8; // VectorWS
            public const nint m_waterLevel = 0x12E4; // float32
            public const nint m_gotUpdate = 0x12E8; // bool
            public const nint m_x = 0x12EC; // float32
            public const nint m_y = 0x12F0; // float32
            public const nint m_z = 0x12F4; // float32
            public const nint m_angle = 0x12F8; // float32
            public const nint m_errorHistory = 0x12FC; // float32[20]
            public const nint m_errorHistoryIndex = 0x134C; // int32
            public const nint m_errorHistoryCount = 0x1350; // int32
            public const nint m_averageError = 0x1354; // float32
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponFamas {
        }
        // Parent: C_BaseEntity
        // Field count: 2
        public static class C_EnvDetailController {
            public const nint m_flFadeStartDist = 0x600; // float32
            public const nint m_flFadeEndDist = 0x604; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CHostageRescueZoneShim {
        }
        // Parent: None
        // Field count: 0
        public static class CEnvSoundscapeAlias_snd_soundscape {
        }
        // Parent: None
        // Field count: 2
        public static class CCSPlayer_HostageServices {
            public const nint m_hCarriedHostage = 0x48; // CHandle<C_BaseEntity>
            public const nint m_hCarriedHostageProp = 0x4C; // CHandle<C_BaseEntity>
        }
        // Parent: None
        // Field count: 0
        public static class C_GameRulesProxy {
        }
        // Parent: C_BaseEntity
        // Field count: 4
        public static class C_Team {
            public const nint m_aPlayerControllers = 0x600; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
            public const nint m_aPlayers = 0x618; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
            public const nint m_iScore = 0x630; // int32
            public const nint m_szTeamname = 0x634; // char[129]
        }
        // Parent: None
        // Field count: 0
        public static class C_PathParticleRopeAlias_path_particle_rope_clientside {
        }
        // Parent: C_PointEntity
        // Field count: 1
        public static class CPointChildModifier {
            public const nint m_bOrphanInsteadOfDeletingChildrenOnRemove = 0x600; // bool
        }
        // Parent: None
        // Field count: 2
        public static class CCSPlayerLegacyJump {
            public const nint m_bOldJumpPressed = 0x10; // bool
            public const nint m_flJumpPressedTime = 0x14; // float32
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponNOVA {
        }
        // Parent: None
        // Field count: 0
        public static class C_CS2HudModelAddon {
        }
        // Parent: None
        // Field count: 0
        public static class C_DEagle {
        }
        // Parent: None
        // Field count: 0
        public static class C_TriggerMultiple {
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_TerroristRushIntroCamera {
        }
        // Parent: C_CSGO_MapPreviewCameraPath
        // Field count: 1
        public static class C_CSGO_TeamPreviewCamera {
            public const nint m_nVariant = 0x688; // int32
        }
        // Parent: None
        // Field count: 9
        public static class C_ColorCorrectionVolume {
            public const nint m_LastEnterWeight = 0x1180; // float32
            public const nint m_LastEnterTime = 0x1184; // GameTime_t
            public const nint m_LastExitWeight = 0x1188; // float32
            public const nint m_LastExitTime = 0x118C; // GameTime_t
            public const nint m_bEnabled = 0x1190; // bool
            public const nint m_MaxWeight = 0x1194; // float32
            public const nint m_FadeDuration = 0x1198; // float32
            public const nint m_Weight = 0x119C; // float32
            public const nint m_lookupFilename = 0x11A0; // char[512]
        }
        // Parent: None
        // Field count: 18
        public static class CPlayer_MovementServices {
            public const nint m_nImpulse = 0x48; // int32
            public const nint m_nButtons = 0x50; // CInButtonState
            public const nint m_nQueuedButtonDownMask = 0x70; // uint64
            public const nint m_nQueuedButtonChangeMask = 0x78; // uint64
            public const nint m_nButtonDoublePressed = 0x80; // uint64
            public const nint m_pButtonPressedCmdNumber = 0x88; // uint32[64]
            public const nint m_nLastCommandNumberProcessed = 0x188; // uint32
            public const nint m_nToggleButtonDownMask = 0x190; // uint64
            public const nint m_flCmdForwardMove = 0x1A0; // float32
            public const nint m_flCmdLeftMove = 0x1A4; // float32
            public const nint m_flCmdUpMove = 0x1A8; // float32
            public const nint m_flMaxspeed = 0x1AC; // float32
            public const nint m_arrForceSubtickMoveWhen = 0x1B0; // float32[4]
            public const nint m_flForwardMove = 0x1C0; // float32
            public const nint m_flLeftMove = 0x1C4; // float32
            public const nint m_flUpMove = 0x1C8; // float32
            public const nint m_vecLastMovementImpulses = 0x1CC; // Vector
            public const nint m_vecOldViewAngles = 0x240; // QAngle
        }
        // Parent: CInfoDynamicShadowHint
        // Field count: 2
        public static class CInfoDynamicShadowHintBox {
            public const nint m_vBoxMins = 0x618; // Vector
            public const nint m_vBoxMaxs = 0x624; // Vector
        }
        // Parent: None
        // Field count: 18
        public static class C_ColorCorrection {
            public const nint m_vecOrigin = 0x600; // VectorWS
            public const nint m_MinFalloff = 0x60C; // float32
            public const nint m_MaxFalloff = 0x610; // float32
            public const nint m_flFadeInDuration = 0x614; // float32
            public const nint m_flFadeOutDuration = 0x618; // float32
            public const nint m_flMaxWeight = 0x61C; // float32
            public const nint m_flCurWeight = 0x620; // float32
            public const nint m_netlookupFilename = 0x624; // char[512]
            public const nint m_bEnabled = 0x824; // bool
            public const nint m_bMaster = 0x825; // bool
            public const nint m_bClientSide = 0x826; // bool
            public const nint m_bExclusive = 0x827; // bool
            public const nint m_bEnabledOnClient = 0x828; // bool[1]
            public const nint m_flCurWeightOnClient = 0x82C; // float32[1]
            public const nint m_bFadingIn = 0x830; // bool[1]
            public const nint m_flFadeStartWeight = 0x834; // float32[1]
            public const nint m_flFadeStartTime = 0x838; // float32[1]
            public const nint m_flFadeDuration = 0x83C; // float32[1]
        }
        // Parent: None
        // Field count: 1
        public static class AnimGraph2SerializedPoseRecipeSlot_t {
            public const nint m_topology = 0x30; // CUtlBinaryBlock
        }
        // Parent: None
        // Field count: 0
        public static class C_PhysBox {
        }
        // Parent: None
        // Field count: 4
        public static class CCSPlayer_CameraServices {
            public const nint m_flDeathCamTilt = 0x2B0; // float32
            public const nint m_hDeathCamBounds = 0x2B4; // CHandle<C_PointDeathcamBounds>
            public const nint m_bDeathCamBoundsSearched = 0x2B8; // bool
            public const nint m_vClientScopeInaccuracy = 0x2C0; // Vector
        }
        // Parent: CBaseFilter
        // Field count: 3
        public static class CFilterMultiple {
            public const nint m_nFilterType = 0x638; // filter_t
            public const nint m_iFilterName = 0x640; // CUtlSymbolLarge[10]
            public const nint m_hFilter = 0x690; // CHandle<C_BaseEntity>[10]
        }
        // Parent: C_BaseEntity
        // Field count: 11
        public static class CEnvSoundscape {
            public const nint m_OnPlay = 0x600; // CEntityIOOutput
            public const nint m_flRadius = 0x618; // float32
            public const nint m_soundEventName = 0x620; // CGameSoundEventName
            public const nint m_bOverrideWithEvent = 0x628; // bool
            public const nint m_soundscapeIndex = 0x62C; // int32
            public const nint m_soundscapeEntityListId = 0x630; // int32
            public const nint m_positionNames = 0x638; // CUtlSymbolLarge[8]
            public const nint m_hProxySoundscape = 0x678; // CHandle<CEnvSoundscape>
            public const nint m_bDisabled = 0x67C; // bool
            public const nint m_soundscapeName = 0x680; // CUtlSymbolLarge
            public const nint m_soundEventHash = 0x688; // uint32
        }
        // Parent: None
        // Field count: 0
        public static class C_SoundEventEntityAlias_snd_event_point {
        }
        // Parent: C_SoundOpvarSetPointBase
        // Field count: 0
        public static class C_SoundOpvarSetOBBWindEntity {
        }
        // Parent: None
        // Field count: 0
        public static class C_MolotovGrenade {
        }
        // Parent: None
        // Field count: 0
        public static class C_NetTestBaseCombatCharacter {
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponM4A1Silencer {
        }
        // Parent: C_BaseEntity
        // Field count: 11
        public static class C_SkyCameraVolume {
            public const nint m_vBoxMins = 0x618; // Vector
            public const nint m_vBoxMaxs = 0x624; // Vector
            public const nint m_hTarget = 0x630; // CHandle<C_SkyCameraVolumeTarget>
            public const nint m_nPriority = 0x634; // int32
            public const nint m_bIsEnabled = 0x638; // bool
            public const nint m_bSkyboxBlurEffect = 0x639; // bool
            public const nint m_vBlurOrigin = 0x63C; // Vector
            public const nint m_bSkyboxReceivesWorldCsm = 0x648; // bool
            public const nint m_bWorldReceivesSkyboxCsm = 0x649; // bool
            public const nint m_bStartDisabled = 0x64A; // bool
            public const nint m_iszTargetName = 0x650; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 31
        public static class C_EconItemView {
            public const nint m_bInventoryImageRgbaRequested = 0x60; // bool
            public const nint m_bInventoryImageTriedCache = 0x61; // bool
            public const nint m_nInventoryImageRgbaWidth = 0x80; // int32
            public const nint m_nInventoryImageRgbaHeight = 0x84; // int32
            public const nint m_szCurrentLoadCachedFileName = 0x88; // char[260]
            public const nint m_bRestoreCustomMaterialAfterPrecache = 0x1B8; // bool
            public const nint m_iItemDefinitionIndex = 0x1BA; // uint16
            public const nint m_iEntityQuality = 0x1BC; // int32
            public const nint m_iEntityLevel = 0x1C0; // uint32
            public const nint m_iItemID = 0x1C8; // uint64
            public const nint m_iItemIDHigh = 0x1D0; // uint32
            public const nint m_iItemIDLow = 0x1D4; // uint32
            public const nint m_iAccountID = 0x1D8; // uint32
            public const nint m_iInventoryPosition = 0x1DC; // uint32
            public const nint m_bInitialized = 0x1E8; // bool
            public const nint m_bDisallowSOC = 0x1E9; // bool
            public const nint m_bIsStoreItem = 0x1EA; // bool
            public const nint m_bIsTradeItem = 0x1EB; // bool
            public const nint m_iEntityQuantity = 0x1EC; // int32
            public const nint m_iRarityOverride = 0x1F0; // int32
            public const nint m_iQualityOverride = 0x1F4; // int32
            public const nint m_iOriginOverride = 0x1F8; // int32
            public const nint m_ubStyleOverride = 0x1FC; // uint8
            public const nint m_unClientFlags = 0x1FD; // uint8
            public const nint m_AttributeList = 0x208; // CAttributeList
            public const nint m_NetworkedDynamicAttributes = 0x280; // CAttributeList
            public const nint m_szCustomName = 0x2F8; // char[161]
            public const nint m_szCustomNameOverride = 0x399; // char[161]
            public const nint m_szCustomNameOverride2 = 0x43A; // char[161]
            public const nint m_szCustomNameOverride3 = 0x4DB; // char[161]
            public const nint m_bInitializedTags = 0x5A8; // bool
        }
        // Parent: C_SoundEventMultiPointEntity
        // Field count: 1
        public static class C_SoundEventPathCornerEntity {
            public const nint m_vecCornerPairsNetworked = 0x6C0; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
        }
        // Parent: C_BaseEntity
        // Field count: 3
        public static class C_InfoVisibilityBox {
            public const nint m_nMode = 0x604; // int32
            public const nint m_vBoxSize = 0x608; // Vector
            public const nint m_bEnabled = 0x614; // bool
        }
        // Parent: None
        // Field count: 2
        public static class CCSPlayer_ItemServices {
            public const nint m_bHasDefuser = 0x48; // bool
            public const nint m_bHasHelmet = 0x49; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 16
        public static class C_PathParticleRope {
            public const nint m_bStartActive = 0x608; // bool
            public const nint m_flMaxSimulationTime = 0x60C; // float32
            public const nint m_iszEffectName = 0x610; // CUtlSymbolLarge
            public const nint m_PathNodes_Name = 0x618; // CUtlVector<CUtlSymbolLarge>
            public const nint m_flParticleSpacing = 0x630; // float32
            public const nint m_flSlack = 0x634; // float32
            public const nint m_flRadius = 0x638; // float32
            public const nint m_ColorTint = 0x63C; // Color
            public const nint m_nEffectState = 0x640; // int32
            public const nint m_iEffectIndex = 0x648; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_PathNodes_Position = 0x650; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentIn = 0x668; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_TangentOut = 0x680; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_Color = 0x698; // C_NetworkUtlVectorBase<Vector>
            public const nint m_PathNodes_PinEnabled = 0x6B0; // C_NetworkUtlVectorBase<bool>
            public const nint m_PathNodes_RadiusScale = 0x6C8; // C_NetworkUtlVectorBase<float32>
        }
        // Parent: None
        // Field count: 3
        public static class C_DecoyProjectile {
            public const nint m_nDecoyShotTick = 0x1348; // int32
            public const nint m_nClientLastKnownDecoyShotTick = 0x134C; // int32
            public const nint m_flTimeParticleEffectSpawn = 0x1370; // GameTime_t
        }
        // Parent: None
        // Field count: 3
        public static class C_AttributeContainer {
            public const nint m_Item = 0x50; // C_EconItemView
            public const nint m_iExternalItemProviderRegisteredToken = 0x600; // int32
            public const nint m_ullRegisteredAsItemID = 0x608; // uint64
        }
        // Parent: C_BasePlayerWeapon
        // Field count: 57
        public static class C_CSWeaponBase {
            public const nint m_iWeaponGameplayAnimState = 0x19A8; // WeaponGameplayAnimState
            public const nint m_flWeaponGameplayAnimStateTimestamp = 0x19AC; // GameTime_t
            public const nint m_flInspectCancelCompleteTime = 0x19B0; // GameTime_t
            public const nint m_bInspectPending = 0x19B4; // bool
            public const nint m_bInspectShouldLoop = 0x19B5; // bool
            public const nint m_nLastEmptySoundCmdNum = 0x19E0; // int32
            public const nint m_bFireOnEmpty = 0x19E4; // bool
            public const nint m_OnPlayerPickup = 0x19E8; // CEntityIOOutput
            public const nint m_weaponMode = 0x1A00; // CSWeaponMode
            public const nint m_flTurningInaccuracyDelta = 0x1A04; // float32
            public const nint m_vecTurningInaccuracyEyeDirLast = 0x1A08; // Vector
            public const nint m_flTurningInaccuracy = 0x1A14; // float32
            public const nint m_fAccuracyPenalty = 0x1A18; // float32
            public const nint m_flLastAccuracyUpdateTime = 0x1A1C; // GameTime_t
            public const nint m_fAccuracySmoothedForZoom = 0x1A20; // float32
            public const nint m_iRecoilIndex = 0x1A24; // int32
            public const nint m_flRecoilIndex = 0x1A28; // float32
            public const nint m_bBurstMode = 0x1A2C; // bool
            public const nint m_flLastBurstModeChangeTime = 0x1A30; // GameTime_t
            public const nint m_nPostponeFireReadyTicks = 0x1A34; // GameTick_t
            public const nint m_flPostponeFireReadyFrac = 0x1A38; // float32
            public const nint m_bInReload = 0x1A3C; // bool
            public const nint m_nDeployTick = 0x1A40; // GameTick_t
            public const nint m_flAttackHoldStartTime = 0x1A44; // GameTime_t
            public const nint m_flDroppedAtTime = 0x1A48; // GameTime_t
            public const nint m_bIsHauledBack = 0x1A50; // bool
            public const nint m_bSilencerOn = 0x1A51; // bool
            public const nint m_flTimeSilencerSwitchComplete = 0x1A54; // GameTime_t
            public const nint m_bIsInStealthReload = 0x1A58; // bool
            public const nint m_bInSilentReloadSection = 0x1A59; // bool
            public const nint m_flStealthReloadHoldStartTime = 0x1A5C; // GameTime_t
            public const nint m_bReloadHeldSinceStart = 0x1A60; // bool
            public const nint m_flWeaponActionPlaybackRate = 0x1A64; // float32
            public const nint m_iOriginalTeamNumber = 0x1A68; // int32
            public const nint m_iMostRecentTeamNumber = 0x1A6C; // int32
            public const nint m_bDroppedNearBuyZone = 0x1A70; // bool
            public const nint m_flNextAttackRenderTimeOffset = 0x1A74; // float32
            public const nint m_bClearWeaponIdentifyingUGC = 0x1B20; // bool
            public const nint m_bVisualsDataSet = 0x1B21; // bool
            public const nint m_bUIWeapon = 0x1B22; // bool
            public const nint m_nCustomEconReloadEventId = 0x1B24; // int32
            public const nint m_bCanBePickedUp = 0x1B30; // bool
            public const nint m_nextPrevOwnerUseTime = 0x1B34; // GameTime_t
            public const nint m_hPrevOwner = 0x1B38; // CHandle<C_CSPlayerPawn>
            public const nint m_nDropTick = 0x1B3C; // GameTick_t
            public const nint m_bWasActiveWeaponWhenDropped = 0x1B40; // bool
            public const nint m_donated = 0x1B64; // bool
            public const nint m_fLastShotTime = 0x1B68; // GameTime_t
            public const nint m_bWasOwnedByCT = 0x1B6C; // bool
            public const nint m_bWasOwnedByTerrorist = 0x1B6D; // bool
            public const nint m_flNextClientFireBulletTime = 0x1B70; // float32
            public const nint m_flNextClientFireBulletTime_Repredict = 0x1B74; // float32
            public const nint m_IronSightController = 0x1BD0; // C_IronSightController
            public const nint m_iIronSightMode = 0x1C80; // int32
            public const nint m_flLastLOSTraceFailureTime = 0x1CF8; // GameTime_t
            public const nint m_flWatTickOffset = 0x1D58; // float32
            public const nint m_flLastShakeTime = 0x1D6C; // GameTime_t
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponMag7 {
        }
        // Parent: None
        // Field count: 2
        public static class WeaponPurchaseCount_t {
            public const nint m_nItemDefIndex = 0x30; // uint16
            public const nint m_nCount = 0x32; // uint16
        }
        // Parent: None
        // Field count: 0
        public static class CBasePulseGraphInstance {
        }
        // Parent: CBaseFilter
        // Field count: 3
        public static class FilterHealth {
            public const nint m_bAdrenalineActive = 0x638; // bool
            public const nint m_iHealthMin = 0x63C; // int32
            public const nint m_iHealthMax = 0x640; // int32
        }
        // Parent: C_BaseClientUIEntity
        // Field count: 13
        public static class C_PointClientUIHUD {
            public const nint m_bCheckCSSClasses = 0x10D0; // bool
            public const nint m_bIgnoreInput = 0x1248; // bool
            public const nint m_flWidth = 0x124C; // float32
            public const nint m_flHeight = 0x1250; // float32
            public const nint m_flDPI = 0x1254; // float32
            public const nint m_flInteractDistance = 0x1258; // float32
            public const nint m_flDepthOffset = 0x125C; // float32
            public const nint m_unOwnerContext = 0x1260; // uint32
            public const nint m_unHorizontalAlign = 0x1264; // uint32
            public const nint m_unVerticalAlign = 0x1268; // uint32
            public const nint m_unOrientation = 0x126C; // uint32
            public const nint m_bAllowInteractionFromAllSceneWorlds = 0x1270; // bool
            public const nint m_vecCSSClasses = 0x1278; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
        }
        // Parent: None
        // Field count: 0
        public static class SignatureOutflow_Resume {
        }
        // Parent: None
        // Field count: 0
        public static class C_InfoLadderDismount {
        }
        // Parent: None
        // Field count: 14
        public static class C_PointCommentaryNode {
            public const nint m_bActive = 0x1280; // bool
            public const nint m_bWasActive = 0x1281; // bool
            public const nint m_flEndTime = 0x1284; // GameTime_t
            public const nint m_flStartTime = 0x1288; // GameTime_t
            public const nint m_flStartTimeInCommentary = 0x128C; // float32
            public const nint m_iszCommentaryFile = 0x1290; // CUtlSymbolLarge
            public const nint m_iszTitle = 0x1298; // CUtlSymbolLarge
            public const nint m_iszSpeakers = 0x12A0; // CUtlSymbolLarge
            public const nint m_iNodeNumber = 0x12A8; // int32
            public const nint m_iNodeNumberMax = 0x12AC; // int32
            public const nint m_bListenedTo = 0x12B0; // bool
            public const nint m_sndCommentary = 0x12B8; // CSoundPatch*
            public const nint m_hViewPosition = 0x12C0; // CHandle<C_BaseEntity>
            public const nint m_bRestartAfterRestore = 0x12C4; // bool
        }
        // Parent: None
        // Field count: 0
        public static class CSpriteOriented {
        }
        // Parent: None
        // Field count: 13
        public static class shard_model_desc_t {
            public const nint m_nModelID = 0x8; // int32
            public const nint m_hMaterialBase = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hMaterialDamageOverlay = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_solid = 0x20; // ShardSolid_t
            public const nint m_vecPanelSize = 0x24; // Vector2D
            public const nint m_vecStressPositionA = 0x2C; // Vector2D
            public const nint m_vecStressPositionB = 0x34; // Vector2D
            public const nint m_vecPanelVertices = 0x40; // C_NetworkUtlVectorBase<Vector2D>
            public const nint m_vInitialPanelVertices = 0x58; // C_NetworkUtlVectorBase<Vector4D>
            public const nint m_flGlassHalfThickness = 0x70; // float32
            public const nint m_bHasParent = 0x74; // bool
            public const nint m_bParentFrozen = 0x75; // bool
            public const nint m_SurfacePropStringToken = 0x78; // CUtlStringToken
        }
        // Parent: None
        // Field count: 2
        public static class C_KeychainModule {
            public const nint m_nKeychainDefID = 0x1270; // uint32
            public const nint m_nKeychainSeed = 0x1274; // uint32
        }
        // Parent: None
        // Field count: 1
        public static class CFuncWater {
            public const nint m_BuoyancyHelper = 0x1098; // CBuoyancyHelper
        }
        // Parent: None
        // Field count: 0
        public static class CCSPlayer_GlowServices {
        }
        // Parent: None
        // Field count: 1
        public static class CCSGameModeRules {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
        }
        // Parent: None
        // Field count: 0
        public static class C_Flashbang {
        }
        // Parent: C_PointClientUIWorldPanel
        // Field count: 1
        public static class C_PointClientUIWorldTextPanel {
            public const nint m_messageText = 0x1300; // char[512]
        }
        // Parent: None
        // Field count: 3
        public static class CCSPlayer_WaterServices {
            public const nint m_flWaterJumpTime = 0x48; // float32
            public const nint m_vecWaterJumpVel = 0x4C; // Vector
            public const nint m_flSwimSoundTime = 0x58; // float32
        }
        // Parent: C_CSPlayerPawnBase
        // Field count: 1
        public static class C_CSObserverPawn {
            public const nint m_hDetectParentChange = 0x1568; // CEntityHandle
        }
        // Parent: None
        // Field count: 3
        public static class ViewAngleServerChange_t {
            public const nint nType = 0x30; // FixAngleSet_t
            public const nint qAngle = 0x34; // QAngle
            public const nint nIndex = 0x40; // uint32
        }
        // Parent: C_BaseModelEntity
        // Field count: 9
        public static class C_FuncLadder {
            public const nint m_vecLadderDir = 0x1098; // Vector
            public const nint m_Dismounts = 0x10A8; // CUtlVector<CHandle<C_InfoLadderDismount>>
            public const nint m_vecLocalTop = 0x10C0; // Vector
            public const nint m_vecPlayerMountPositionTop = 0x10CC; // VectorWS
            public const nint m_vecPlayerMountPositionBottom = 0x10D8; // VectorWS
            public const nint m_flAutoRideSpeed = 0x10E4; // float32
            public const nint m_bDisabled = 0x10E8; // bool
            public const nint m_bFakeLadder = 0x10E9; // bool
            public const nint m_bHasSlack = 0x10EA; // bool
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponMP5SD {
        }
        // Parent: None
        // Field count: 0
        public static class C_World {
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_TeamSelectCounterTerroristPosition {
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponGalilAR {
        }
        // Parent: None
        // Field count: 6
        public static class CCSPlayerBase_CameraServices {
            public const nint m_iFOV = 0x298; // uint32
            public const nint m_iFOVStart = 0x29C; // uint32
            public const nint m_flFOVTime = 0x2A0; // GameTime_t
            public const nint m_flFOVRate = 0x2A4; // float32
            public const nint m_hZoomOwner = 0x2A8; // CHandle<C_BaseEntity>
            public const nint m_flLastShotFOV = 0x2AC; // float32
        }
        // Parent: None
        // Field count: 0
        public static class C_TeamplayRules {
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponSG556 {
        }
        // Parent: C_CSPlayerPawnBase
        // Field count: 105
        public static class C_CSPlayerPawn {
            public const nint m_pBulletServices = 0x1570; // CCSPlayer_BulletServices*
            public const nint m_pHostageServices = 0x1578; // CCSPlayer_HostageServices*
            public const nint m_pBuyServices = 0x1580; // CCSPlayer_BuyServices*
            public const nint m_pGlowServices = 0x1588; // CCSPlayer_GlowServices*
            public const nint m_pActionTrackingServices = 0x1590; // CCSPlayer_ActionTrackingServices*
            public const nint m_pAimPunchServices = 0x1598; // CCSPlayer_AimPunchServices*
            public const nint m_pDamageReactServices = 0x15A0; // CCSPlayer_DamageReactServices*
            public const nint m_flHealthShotBoostExpirationTime = 0x15A8; // GameTime_t
            public const nint m_flLastFiredWeaponTime = 0x15AC; // GameTime_t
            public const nint m_bHasFemaleVoice = 0x15B0; // bool
            public const nint m_flLandingTimeSeconds = 0x15B4; // float32
            public const nint m_flOldFallVelocity = 0x15B8; // float32
            public const nint m_szLastPlaceName = 0x15BC; // char[18]
            public const nint m_bPrevDefuser = 0x15CE; // bool
            public const nint m_bPrevHelmet = 0x15CF; // bool
            public const nint m_nPrevArmorVal = 0x15D0; // int32
            public const nint m_nPrevGrenadeAmmoCount = 0x15D4; // int32
            public const nint m_unPreviousWeaponHash = 0x15D8; // uint32
            public const nint m_unWeaponHash = 0x15DC; // uint32
            public const nint m_bInBuyZone = 0x15E0; // bool
            public const nint m_bPreviouslyInBuyZone = 0x15E1; // bool
            public const nint m_bInLanding = 0x15E2; // bool
            public const nint m_flLandingStartTime = 0x15E4; // float32
            public const nint m_bInHostageRescueZone = 0x15E8; // bool
            public const nint m_bInBombZone = 0x15E9; // bool
            public const nint m_bIsBuyMenuOpen = 0x15EA; // bool
            public const nint m_flTimeOfLastInjury = 0x15EC; // GameTime_t
            public const nint m_flNextSprayDecalTime = 0x15F0; // GameTime_t
            public const nint m_iRetakesOffering = 0x1758; // int32
            public const nint m_iRetakesOfferingCard = 0x175C; // int32
            public const nint m_bRetakesHasDefuseKit = 0x1760; // bool
            public const nint m_bRetakesMVPLastRound = 0x1761; // bool
            public const nint m_iRetakesMVPBoostItem = 0x1764; // int32
            public const nint m_RetakesMVPBoostExtraUtility = 0x1768; // loadout_slot_t
            public const nint m_bNeedToReApplyGloves = 0x176D; // bool
            public const nint m_EconGloves = 0x1770; // C_EconItemView
            public const nint m_nEconGlovesChanged = 0x1D20; // uint8
            public const nint m_bMustSyncRagdollState = 0x1D21; // bool
            public const nint m_nRagdollDamageBone = 0x1D24; // int32
            public const nint m_vRagdollDamageForce = 0x1D28; // Vector
            public const nint m_szRagdollDamageWeaponName = 0x1D34; // char[64]
            public const nint m_bRagdollDamageHeadshot = 0x1D74; // bool
            public const nint m_vRagdollServerOrigin = 0x1D78; // VectorWS
            public const nint m_lastLandTime = 0x1D84; // GameTime_t
            public const nint m_bOnGroundLastTick = 0x1D88; // bool
            public const nint m_hHudModelArms = 0x1DA8; // CHandle<C_CS2HudModelArms>
            public const nint m_qDeathEyeAngles = 0x1DAC; // QAngle
            public const nint m_bLeftHanded = 0x1DB8; // bool
            public const nint m_fSwitchedHandednessTime = 0x1DBC; // GameTime_t
            public const nint m_flViewmodelOffsetX = 0x1DC0; // float32
            public const nint m_flViewmodelOffsetY = 0x1DC4; // float32
            public const nint m_flViewmodelOffsetZ = 0x1DC8; // float32
            public const nint m_flViewmodelFOV = 0x1DCC; // float32
            public const nint m_vecPlayerPatchEconIndices = 0x1DD0; // uint32[5]
            public const nint m_GunGameImmunityColor = 0x1E18; // Color
            public const nint m_vecBulletHitModels = 0x1E68; // CUtlVector<C_BulletHitModel*>
            public const nint m_bIsWalking = 0x1E80; // bool
            public const nint m_entitySpottedState = 0x1E88; // EntitySpottedState_t
            public const nint m_bIsScoped = 0x1EA0; // bool
            public const nint m_bResumeZoom = 0x1EA1; // bool
            public const nint m_bIsDefusing = 0x1EA2; // bool
            public const nint m_bIsGrabbingHostage = 0x1EA3; // bool
            public const nint m_iBlockingUseActionInProgress = 0x1EA4; // CSPlayerBlockingUseAction_t
            public const nint m_flEmitSoundTime = 0x1EA8; // GameTime_t
            public const nint m_flEmitSoundTime_Client = 0x1EAC; // GameTime_t
            public const nint m_bInNoDefuseArea = 0x1EB0; // bool
            public const nint m_nWhichBombZone = 0x1EB4; // int32
            public const nint m_iShotsFired = 0x1EB8; // int32
            public const nint m_flFlinchStack = 0x1EBC; // float32
            public const nint m_flVelocityModifier = 0x1EC0; // float32
            public const nint m_bWaitForNoAttack = 0x1EC4; // bool
            public const nint m_ignoreLadderJumpTime = 0x1EC8; // float32
            public const nint m_bKilledByHeadshot = 0x1ECD; // bool
            public const nint m_ArmorValue = 0x1ED0; // int32
            public const nint m_unCurrentEquipmentValue = 0x1ED4; // uint16
            public const nint m_unRoundStartEquipmentValue = 0x1ED6; // uint16
            public const nint m_unFreezetimeEndEquipmentValue = 0x1ED8; // uint16
            public const nint m_nLastKillerIndex = 0x1EDC; // CEntityIndex
            public const nint m_bOldIsScoped = 0x1EE0; // bool
            public const nint m_bHasDeathInfo = 0x1EE1; // bool
            public const nint m_flDeathInfoTime = 0x1EE4; // float32
            public const nint m_vecDeathInfoOrigin = 0x1EE8; // VectorWS
            public const nint m_grenadeParameterStashTime = 0x1F20; // GameTime_t
            public const nint m_bGrenadeParametersStashed = 0x1F24; // bool
            public const nint m_angStashedShootAngles = 0x1F28; // QAngle
            public const nint m_vecStashedGrenadeThrowPosition = 0x1F34; // VectorWS
            public const nint m_vecStashedGrenadeThrowPawnCenter = 0x1F40; // VectorWS
            public const nint m_vecStashedVelocity = 0x1F4C; // Vector
            public const nint m_flInterpolatedInaccuracy = 0x1F58; // float32
            public const nint m_bShouldAutobuyDMWeapons = 0x3500; // bool
            public const nint m_fImmuneToGunGameDamageTime = 0x3504; // GameTime_t
            public const nint m_bGunGameImmunity = 0x3508; // bool
            public const nint m_fImmuneToGunGameDamageTimeLast = 0x350C; // GameTime_t
            public const nint m_flBigHeadScale = 0x3510; // float32
            public const nint m_fMolotovDamageTime = 0x3514; // float32
            public const nint m_nPlayerInfernoBodyFx = 0x3588; // ParticleIndex_t
            public const nint m_angEyeAngles = 0x3600; // QAngle
            public const nint m_arrOldEyeAnglesTimes = 0x3690; // GameTime_t[4]
            public const nint m_arrOldEyeAngles = 0x36A0; // QAngle[4]
            public const nint m_angEyeAnglesVelocity = 0x36D0; // QAngle
            public const nint m_iIDEntIndex = 0x36DC; // CEntityIndex
            public const nint m_delayTargetIDTimer = 0x36E0; // CountdownTimer
            public const nint m_iTargetItemEntIdx = 0x36F8; // CEntityIndex
            public const nint m_iOldIDEntIndex = 0x36FC; // CEntityIndex
            public const nint m_holdTargetIDTimer = 0x3700; // CountdownTimer
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_TeamIntroTerroristPosition {
        }
        // Parent: None
        // Field count: 23
        public static class C_Hostage {
            public const nint m_entitySpottedState = 0x12F0; // EntitySpottedState_t
            public const nint m_leader = 0x1308; // CHandle<C_BaseEntity>
            public const nint m_reuseTimer = 0x1310; // CountdownTimer
            public const nint m_vel = 0x1328; // Vector
            public const nint m_isRescued = 0x1334; // bool
            public const nint m_jumpedThisFrame = 0x1335; // bool
            public const nint m_nHostageState = 0x1338; // int32
            public const nint m_bHandsHaveBeenCut = 0x133C; // bool
            public const nint m_hHostageGrabber = 0x1340; // CHandle<C_CSPlayerPawn>
            public const nint m_fLastGrabTime = 0x1344; // GameTime_t
            public const nint m_vecGrabbedPos = 0x1348; // VectorWS
            public const nint m_flRescueStartTime = 0x1354; // GameTime_t
            public const nint m_flGrabSuccessTime = 0x1358; // GameTime_t
            public const nint m_flDropStartTime = 0x135C; // GameTime_t
            public const nint m_flDeadOrRescuedTime = 0x1360; // GameTime_t
            public const nint m_blinkTimer = 0x1368; // CountdownTimer
            public const nint m_lookAt = 0x1380; // VectorWS
            public const nint m_lookAroundTimer = 0x1390; // CountdownTimer
            public const nint m_isInit = 0x13A8; // bool
            public const nint m_eyeAttachment = 0x13A9; // AttachmentHandle_t
            public const nint m_chestAttachment = 0x13AA; // AttachmentHandle_t
            public const nint m_pPredictionOwner = 0x13B0; // CBasePlayerController*
            public const nint m_fNewestAlphaThinkTime = 0x13B8; // GameTime_t
        }
        // Parent: None
        // Field count: 6
        public static class CPlayer_ObserverServices {
            public const nint m_iObserverMode = 0x48; // uint8
            public const nint m_hObserverTarget = 0x4C; // CHandle<C_BaseEntity>
            public const nint m_iObserverLastMode = 0x50; // ObserverMode_t
            public const nint m_bForcedObserverMode = 0x54; // bool
            public const nint m_flObserverChaseDistance = 0x58; // float32
            public const nint m_flObserverChaseDistanceCalcTime = 0x5C; // GameTime_t
        }
        // Parent: None
        // Field count: 1
        public static class CCashStack {
            public const nint m_nCashStackValue = 0x1098; // int32
        }
        // Parent: C_BaseEntity
        // Field count: 4
        public static class C_SoundAreaEntityBase {
            public const nint m_bDisabled = 0x600; // bool
            public const nint m_bWasEnabled = 0x608; // bool
            public const nint m_iszSoundAreaType = 0x610; // CUtlSymbolLarge
            public const nint m_vPos = 0x618; // Vector
        }
        // Parent: C_BaseEntity
        // Field count: 6
        public static class C_PlayerVisibility {
            public const nint m_flVisibilityStrength = 0x600; // float32
            public const nint m_flFogDistanceMultiplier = 0x604; // float32
            public const nint m_flFogMaxDensityMultiplier = 0x608; // float32
            public const nint m_flFadeTime = 0x60C; // float32
            public const nint m_bStartDisabled = 0x610; // bool
            public const nint m_bIsEnabled = 0x611; // bool
        }
        // Parent: None
        // Field count: 3
        public static class CAttributeManager__cached_attribute_float_t {
            public const nint flIn = 0x0; // float32
            public const nint iAttribHook = 0x8; // CUtlSymbolLarge
            public const nint flOut = 0x10; // float32
        }
        // Parent: CBaseAnimGraph
        // Field count: 7
        public static class C_BasePlayerWeapon {
            public const nint m_nNextPrimaryAttackTick = 0x1918; // GameTick_t
            public const nint m_flNextPrimaryAttackTickRatio = 0x191C; // float32
            public const nint m_nNextSecondaryAttackTick = 0x1920; // GameTick_t
            public const nint m_flNextSecondaryAttackTickRatio = 0x1924; // float32
            public const nint m_iClip1 = 0x1928; // int32
            public const nint m_iClip2 = 0x192C; // int32
            public const nint m_pReserveAmmo = 0x1930; // int32[2]
        }
        // Parent: C_BaseEntity
        // Field count: 1
        public static class CRagdollManager {
            public const nint m_iCurrentMaxRagdollCount = 0x600; // int8
        }
        // Parent: C_SoundOpvarSetPointEntity
        // Field count: 0
        public static class CSoundOpvarSetBoxEntity {
        }
        // Parent: None
        // Field count: 0
        public static class C_HEGrenade {
        }
        // Parent: None
        // Field count: 4
        public static class C_GameRules {
            public const nint __m_pChainEntity = 0x8; // CNetworkVarChainer
            public const nint m_nTotalPausedTicks = 0x30; // int32
            public const nint m_nPauseStartTick = 0x34; // int32
            public const nint m_bGamePaused = 0x38; // bool
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponMAC10 {
        }
        // Parent: C_BaseEntity
        // Field count: 14
        public static class C_CSGO_MapPreviewCameraPath {
            public const nint m_flZFar = 0x600; // float32
            public const nint m_flZNear = 0x604; // float32
            public const nint m_bLoop = 0x608; // bool
            public const nint m_bVerticalFOV = 0x609; // bool
            public const nint m_bConstantSpeed = 0x60A; // bool
            public const nint m_flDuration = 0x60C; // float32
            public const nint m_flPathLength = 0x650; // float32
            public const nint m_flPathDuration = 0x654; // float32
            public const nint m_bDofEnabled = 0x66C; // bool
            public const nint m_flDofNearBlurry = 0x670; // float32
            public const nint m_flDofNearCrisp = 0x674; // float32
            public const nint m_flDofFarCrisp = 0x678; // float32
            public const nint m_flDofFarBlurry = 0x67C; // float32
            public const nint m_flDofTiltToGround = 0x680; // float32
        }
        // Parent: C_BaseModelEntity
        // Field count: 19
        public static class C_PointWorldText {
            public const nint m_bForceRecreateNextUpdate = 0x10A0; // bool
            public const nint m_nTextWidthPx = 0x10B8; // int32
            public const nint m_nTextHeightPx = 0x10BC; // int32
            public const nint m_messageText = 0x10C0; // char[512]
            public const nint m_FontName = 0x12C0; // char[64]
            public const nint m_BackgroundMaterialName = 0x1300; // char[64]
            public const nint m_bEnabled = 0x1340; // bool
            public const nint m_bFullbright = 0x1341; // bool
            public const nint m_flWorldUnitsPerPx = 0x1344; // float32
            public const nint m_flFontSize = 0x1348; // float32
            public const nint m_flDepthOffset = 0x134C; // float32
            public const nint m_bDrawBackground = 0x1350; // bool
            public const nint m_flBackgroundBorderWidth = 0x1354; // float32
            public const nint m_flBackgroundBorderHeight = 0x1358; // float32
            public const nint m_flBackgroundWorldToUV = 0x135C; // float32
            public const nint m_Color = 0x1360; // Color
            public const nint m_nJustifyHorizontal = 0x1364; // PointWorldTextJustifyHorizontal_t
            public const nint m_nJustifyVertical = 0x1368; // PointWorldTextJustifyVertical_t
            public const nint m_nReorientMode = 0x136C; // PointWorldTextReorientMode_t
        }
        // Parent: None
        // Field count: 40
        public static class C_RopeKeyframe {
            public const nint m_LinksTouchingSomething = 0x10A0; // CBitVec<10>
            public const nint m_nLinksTouchingSomething = 0x10A4; // int32
            public const nint m_bApplyWind = 0x10A8; // bool
            public const nint m_fPrevLockedPoints = 0x10AC; // int32
            public const nint m_iForcePointMoveCounter = 0x10B0; // int32
            public const nint m_bPrevEndPointPos = 0x10B4; // bool[2]
            public const nint m_vPrevEndPointPos = 0x10B8; // VectorWS[2]
            public const nint m_flCurScroll = 0x10D0; // float32
            public const nint m_flScrollSpeed = 0x10D4; // float32
            public const nint m_RopeFlags = 0x10D8; // uint16
            public const nint m_iRopeMaterialModelIndex = 0x10E0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nSegments = 0x1358; // uint8
            public const nint m_hStartPoint = 0x135C; // CHandle<C_BaseEntity>
            public const nint m_hEndPoint = 0x1360; // CHandle<C_BaseEntity>
            public const nint m_iStartAttachment = 0x1364; // AttachmentHandle_t
            public const nint m_iEndAttachment = 0x1365; // AttachmentHandle_t
            public const nint m_Subdiv = 0x1366; // uint8
            public const nint m_RopeLength = 0x1368; // int16
            public const nint m_Slack = 0x136A; // int16
            public const nint m_TextureScale = 0x136C; // float32
            public const nint m_fLockedPoints = 0x1370; // uint8
            public const nint m_nChangeCount = 0x1371; // uint8
            public const nint m_Width = 0x1374; // float32
            public const nint m_PhysicsDelegate = 0x1378; // C_RopeKeyframe::CPhysicsDelegate
            public const nint m_hMaterial = 0x1388; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_TextureHeight = 0x1390; // int32
            public const nint m_vecImpulse = 0x1394; // Vector
            public const nint m_vecPreviousImpulse = 0x13A0; // Vector
            public const nint m_flCurrentGustTimer = 0x13AC; // float32
            public const nint m_flCurrentGustLifetime = 0x13B0; // float32
            public const nint m_flTimeToNextGust = 0x13B4; // float32
            public const nint m_vWindDir = 0x13B8; // Vector
            public const nint m_vColorMod = 0x13C4; // Vector
            public const nint m_vCachedEndPointAttachmentPos = 0x13D0; // VectorWS[2]
            public const nint m_vCachedEndPointAttachmentAngle = 0x13E8; // QAngle[2]
            public const nint m_bConstrainBetweenEndpoints = 0x1400; // bool
            public const nint m_bEndPointAttachmentPositionsDirty = 0x0; // bitfield:1
            public const nint m_bEndPointAttachmentAnglesDirty = 0x0; // bitfield:1
            public const nint m_bNewDataThisFrame = 0x0; // bitfield:1
            public const nint m_bPhysicsInitted = 0x0; // bitfield:1
        }
        // Parent: None
        // Field count: 0
        public static class C_BaseToggle {
        }
        // Parent: None
        // Field count: 0
        public static class C_EnvCubemapBox {
        }
        // Parent: None
        // Field count: 0
        public static class C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
        }
        // Parent: None
        // Field count: 1
        public static class C_RopeKeyframe__CPhysicsDelegate {
            public const nint m_pKeyframe = 0x8; // C_RopeKeyframe*
        }
        // Parent: C_PointEntity
        // Field count: 5
        public static class CInfoDynamicShadowHint {
            public const nint m_bDisabled = 0x600; // bool
            public const nint m_flRange = 0x604; // float32
            public const nint m_nImportance = 0x608; // int32
            public const nint m_nLightChoice = 0x60C; // int32
            public const nint m_hLight = 0x610; // CHandle<C_BaseEntity>
        }
        // Parent: C_PointEntity
        // Field count: 6
        public static class CPathNode {
            public const nint m_vInTangentLocal = 0x600; // Vector
            public const nint m_vOutTangentLocal = 0x60C; // Vector
            public const nint m_strParentPathUniqueID = 0x618; // CUtlString
            public const nint m_strPathNodeParameter = 0x620; // CUtlString
            public const nint m_xWSPrevParent = 0x630; // CTransformWS
            public const nint m_hPath = 0x650; // CHandle<CPathWithDynamicNodes>
        }
        // Parent: None
        // Field count: 0
        public static class C_FuncMoveLinear {
        }
        // Parent: C_BaseEntity
        // Field count: 6
        public static class C_EnvShakeVolume {
            public const nint m_vBoxMins = 0x618; // Vector
            public const nint m_vBoxMaxs = 0x624; // Vector
            public const nint m_flAmplitude = 0x630; // float32
            public const nint m_flFrequency = 0x634; // float32
            public const nint m_flFalloffDistance = 0x638; // float32
            public const nint m_flRollScale = 0x63C; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CServerOnlyModelEntity {
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_TeamSelectCamera {
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponXM1014 {
        }
        // Parent: None
        // Field count: 0
        public static class C_WorldModelGloves {
        }
        // Parent: None
        // Field count: 0
        public static class C_PhysicsPropMultiplayer {
        }
        // Parent: C_SoundEventEntity
        // Field count: 2
        public static class C_SoundEventOBBEntity {
            public const nint m_vMins = 0x6C0; // Vector
            public const nint m_vMaxs = 0x6CC; // Vector
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponAug {
        }
        // Parent: None
        // Field count: 8
        public static class C_BasePropDoor {
            public const nint m_eDoorState = 0x14C0; // DoorState_t
            public const nint m_modelChanged = 0x14C4; // bool
            public const nint m_bLocked = 0x14C5; // bool
            public const nint m_bNoNPCs = 0x14C6; // bool
            public const nint m_closedPosition = 0x14C8; // VectorWS
            public const nint m_closedAngles = 0x14D4; // QAngle
            public const nint m_hMaster = 0x14E0; // CHandle<C_BasePropDoor>
            public const nint m_vWhereToSetLightingOrigin = 0x14E4; // VectorWS
        }
        // Parent: None
        // Field count: 0
        public static class CChoreoInfoTarget {
        }
        // Parent: None
        // Field count: 0
        public static class C_Item_Healthshot {
        }
        // Parent: C_BaseEntity
        // Field count: 7
        public static class CCSCustomHudLayout {
            public const nint m_strLayout = 0x618; // CUtlSymbolLarge
            public const nint m_bObservable = 0x620; // bool
            public const nint m_vecPlayerLayoutStates = 0x628; // C_UtlVectorEmbeddedNetworkVar<CCSCustomHudLayoutState>
            public const nint m_globalLayoutState = 0x690; // CCSCustomHudLayoutState
            public const nint m_vecPanelIds = 0x798; // C_NetworkUtlVectorBase<CUtlString>
            public const nint m_vecClassNames = 0x7B0; // C_NetworkUtlVectorBase<CUtlString>
            public const nint m_vecDialogVariableNames = 0x7C8; // C_NetworkUtlVectorBase<CUtlString>
        }
        // Parent: None
        // Field count: 3
        public static class CEntityInstance {
            public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint m_pEntity = 0x10; // CEntityIdentity*
            public const nint m_CScriptComponent = 0x28; // CScriptComponent*
        }
        // Parent: C_BaseEntity
        // Field count: 47
        public static class C_BaseModelEntity {
            public const nint m_CRenderComponent = 0xAF8; // CRenderComponent*
            public const nint m_CHitboxComponent = 0xB00; // CHitboxComponent
            public const nint m_pChoreoComponent = 0xB18; // CChoreoComponent*
            public const nint m_nDestructiblePartInitialStateDestructed0 = 0xB20; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed1 = 0xB24; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed2 = 0xB28; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed3 = 0xB2C; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed4 = 0xB30; // HitGroup_t
            public const nint m_nDestructiblePartInitialStateDestructed0_PartIndex = 0xB34; // int32
            public const nint m_nDestructiblePartInitialStateDestructed1_PartIndex = 0xB38; // int32
            public const nint m_nDestructiblePartInitialStateDestructed2_PartIndex = 0xB3C; // int32
            public const nint m_nDestructiblePartInitialStateDestructed3_PartIndex = 0xB40; // int32
            public const nint m_nDestructiblePartInitialStateDestructed4_PartIndex = 0xB44; // int32
            public const nint m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces = 0xB48; // bool
            public const nint m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces = 0xB49; // bool
            public const nint m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces = 0xB4A; // bool
            public const nint m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces = 0xB4B; // bool
            public const nint m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces = 0xB4C; // bool
            public const nint m_pDestructiblePartsSystemComponent = 0xB50; // CDestructiblePartsComponent*
            public const nint m_bInitModelEffects = 0xC78; // bool
            public const nint m_bDoingModelEffects = 0xC79; // bool
            public const nint m_iOldHealth = 0xC7C; // int32
            public const nint m_nRenderMode = 0xC80; // RenderMode_t
            public const nint m_nRenderFX = 0xC81; // RenderFx_t
            public const nint m_bAllowFadeInView = 0xC82; // bool
            public const nint m_clrRender = 0xCA0; // Color
            public const nint m_vecRenderAttributes = 0xCA8; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
            public const nint m_bRenderToCubemaps = 0xD28; // bool
            public const nint m_bExpandRenderBoundsToIncludeCloth = 0xD29; // bool
            public const nint m_bNoInterpolate = 0xD2A; // bool
            public const nint m_Collision = 0xD30; // CCollisionProperty
            public const nint m_Glow = 0xDE8; // CGlowProperty
            public const nint m_flGlowBackfaceMult = 0xE40; // float32
            public const nint m_fadeMinDist = 0xE44; // float32
            public const nint m_fadeMaxDist = 0xE48; // float32
            public const nint m_flFadeScale = 0xE4C; // float32
            public const nint m_flShadowStrength = 0xE50; // float32
            public const nint m_nObjectCulling = 0xE54; // uint8
            public const nint m_nRequiredDecalRtEncoding = 0xE55; // DecalRtEncoding_t
            public const nint m_bodyGroupTotalRequestCount = 0xE58; // uint32
            public const nint m_bodyGroupRequests = 0xE60; // CUtlVectorFixedGrowable<C_BaseModelEntity::BodyGroupRequest_t,8>
            public const nint m_bodyGroupChoices = 0xF38; // CUtlOrderedMap<CGlobalSymbol,int32>
            public const nint m_vecViewOffset = 0xF60; // CNetworkViewOffsetVector
            public const nint m_pClientAlphaProperty = 0x1040; // CClientAlphaProperty*
            public const nint m_ClientOverrideTint = 0x1048; // Color
            public const nint m_bUseClientOverrideTint = 0x104C; // bool
            public const nint m_bvDisabledHitGroups = 0x1088; // uint32[1]
        }
        // Parent: None
        // Field count: 1
        public static class CCSPlayer_BulletServices {
            public const nint m_totalHitsOnServer = 0x48; // int32
        }
        // Parent: C_SoundOpvarSetPointEntity
        // Field count: 0
        public static class C_SoundOpvarSetAutoRoomEntity {
        }
        // Parent: None
        // Field count: 0
        public static class CCSGO_EndOfMatchLineupEnd {
        }
        // Parent: None
        // Field count: 0
        public static class C_MultiplayRules {
        }
        // Parent: None
        // Field count: 0
        public static class CPlayer_AutoaimServices {
        }
        // Parent: None
        // Field count: 0
        public static class C_LightDirectionalEntity {
        }
        // Parent: None
        // Field count: 82
        public static class C_BaseEntity {
            public const nint m_CBodyComponent = 0x30; // CBodyComponent*
            public const nint m_NetworkTransmitComponent = 0x38; // CNetworkTransmitComponent
            public const nint m_nLastThinkTick = 0x328; // GameTick_t
            public const nint m_pGameSceneNode = 0x330; // CGameSceneNode*
            public const nint m_pRenderComponent = 0x338; // CRenderComponent*
            public const nint m_pCollision = 0x340; // CCollisionProperty*
            public const nint m_iMaxHealth = 0x348; // int32
            public const nint m_iHealth = 0x34C; // int32
            public const nint m_flDamageAccumulator = 0x350; // float32
            public const nint m_lifeState = 0x354; // uint8
            public const nint m_bTakesDamage = 0x355; // bool
            public const nint m_nTakeDamageFlags = 0x358; // TakeDamageFlags_t
            public const nint m_nPlatformType = 0x360; // EntityPlatformTypes_t
            public const nint m_ubInterpolationFrame = 0x361; // uint8
            public const nint m_hSceneObjectController = 0x364; // CHandle<C_BaseEntity>
            public const nint m_nNoInterpolationTick = 0x368; // int32
            public const nint m_nVisibilityNoInterpolationTick = 0x36C; // int32
            public const nint m_flProxyRandomValue = 0x370; // float32
            public const nint m_iEFlags = 0x374; // int32
            public const nint m_nWaterType = 0x378; // uint8
            public const nint m_bInterpolateEvenWithNoModel = 0x379; // bool
            public const nint m_bPredictionEligible = 0x37A; // bool
            public const nint m_bApplyLayerMatchIDToModel = 0x37B; // bool
            public const nint m_tokLayerMatchID = 0x37C; // CUtlStringToken
            public const nint m_nSubclassID = 0x380; // CUtlStringToken
            public const nint m_nSimulationTick = 0x390; // int32
            public const nint m_iCurrentThinkContext = 0x394; // int32
            public const nint m_aThinkFunctions = 0x398; // CUtlVector<thinkfunc_t>
            public const nint m_bDisabledContextThinks = 0x3B0; // bool
            public const nint m_flAnimTime = 0x3B4; // float32
            public const nint m_flSimulationTime = 0x3B8; // float32
            public const nint m_nSceneObjectOverrideFlags = 0x3BC; // uint8
            public const nint m_bHasSuccessfullyInterpolated = 0x3BD; // bool
            public const nint m_bHasAddedVarsToInterpolation = 0x3BE; // bool
            public const nint m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x3BF; // bool
            public const nint m_nInterpolationLatchDirtyFlags = 0x3C0; // int32[2]
            public const nint m_ListEntry = 0x3C8; // uint16[11]
            public const nint m_flCreateTime = 0x3E0; // GameTime_t
            public const nint m_EntClientFlags = 0x3E4; // uint16
            public const nint m_bClientSideRagdoll = 0x3E6; // bool
            public const nint m_iTeamNum = 0x3E7; // uint8
            public const nint m_spawnflags = 0x3E8; // uint32
            public const nint m_nNextThinkTick = 0x3EC; // GameTick_t
            public const nint m_fFlags = 0x3F4; // uint32
            public const nint m_vecAbsVelocity = 0x3F8; // Vector
            public const nint m_vecServerVelocity = 0x404; // CNetworkVelocityVector
            public const nint m_vecVelocity = 0x430; // CNetworkVelocityVector
            public const nint m_vecBaseVelocity = 0x510; // Vector
            public const nint m_hEffectEntity = 0x51C; // CHandle<C_BaseEntity>
            public const nint m_hOwnerEntity = 0x520; // CHandle<C_BaseEntity>
            public const nint m_MoveCollide = 0x524; // MoveCollide_t
            public const nint m_MoveType = 0x525; // MoveType_t
            public const nint m_nActualMoveType = 0x526; // MoveType_t
            public const nint m_flWaterLevel = 0x528; // float32
            public const nint m_fEffects = 0x52C; // uint32
            public const nint m_hGroundEntity = 0x530; // CHandle<C_BaseEntity>
            public const nint m_nGroundBodyIndex = 0x534; // int32
            public const nint m_flFriction = 0x538; // float32
            public const nint m_flElasticity = 0x53C; // float32
            public const nint m_flGravityScale = 0x540; // float32
            public const nint m_flTimeScale = 0x544; // float32
            public const nint m_bAnimatedEveryTick = 0x548; // bool
            public const nint m_bGravityDisabled = 0x549; // bool
            public const nint m_flNavIgnoreUntilTime = 0x54C; // GameTime_t
            public const nint m_hThink = 0x550; // uint16
            public const nint m_fBBoxVisFlags = 0x560; // uint8
            public const nint m_flActualGravityScale = 0x564; // float32
            public const nint m_bGravityActuallyDisabled = 0x568; // bool
            public const nint m_bPredictable = 0x569; // bool
            public const nint m_bRenderWithViewModels = 0x56A; // bool
            public const nint m_nFirstPredictableCommand = 0x56C; // int32
            public const nint m_nLastPredictableCommand = 0x570; // int32
            public const nint m_hOldMoveParent = 0x574; // CHandle<C_BaseEntity>
            public const nint m_Particles = 0x578; // CParticleProperty
            public const nint m_vecAngVelocity = 0x5A8; // QAngle
            public const nint m_DataChangeEventRef = 0x5B4; // int32
            public const nint m_dependencies = 0x5B8; // CUtlVector<CEntityHandle>
            public const nint m_nCreationTick = 0x5D0; // int32
            public const nint m_bAnimTimeChanged = 0x5E1; // bool
            public const nint m_bSimulationTimeChanged = 0x5E2; // bool
            public const nint m_sUniqueHammerID = 0x5F0; // CUtlString
            public const nint m_nBloodType = 0x5F8; // BloodType
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponSSG08 {
        }
        // Parent: None
        // Field count: 7
        public static class C_Chicken {
            public const nint m_leader = 0x14C0; // CHandle<C_CSPlayerPawn>
            public const nint m_owner = 0x14C4; // CHandle<CCSPlayerController>
            public const nint m_AttributeManager = 0x14C8; // C_AttributeContainer
            public const nint m_bAttributesInitialized = 0x1AD8; // bool
            public const nint m_hWaterWakeParticles = 0x1ADC; // ParticleIndex_t
            public const nint m_bIsPreviewModel = 0x1AE0; // bool
            public const nint m_bSpawnDyingParticles = 0x1B68; // bool
        }
        // Parent: CBaseAnimGraph
        // Field count: 28
        public static class C_BasePlayerPawn {
            public const nint m_pWeaponServices = 0x12F0; // CPlayer_WeaponServices*
            public const nint m_pItemServices = 0x12F8; // CPlayer_ItemServices*
            public const nint m_pAutoaimServices = 0x1300; // CPlayer_AutoaimServices*
            public const nint m_pObserverServices = 0x1308; // CPlayer_ObserverServices*
            public const nint m_pWaterServices = 0x1310; // CPlayer_WaterServices*
            public const nint m_pUseServices = 0x1318; // CPlayer_UseServices*
            public const nint m_pFlashlightServices = 0x1320; // CPlayer_FlashlightServices*
            public const nint m_pCameraServices = 0x1328; // CPlayer_CameraServices*
            public const nint m_pMovementServices = 0x1330; // CPlayer_MovementServices*
            public const nint m_ServerViewAngleChanges = 0x1340; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
            public const nint v_angle = 0x13A8; // QAngle
            public const nint v_anglePrevious = 0x13B4; // QAngle
            public const nint m_iHideHUD = 0x13C0; // uint32
            public const nint m_skybox3d = 0x13C8; // sky3dparams_t
            public const nint m_flDeathTime = 0x1458; // GameTime_t
            public const nint m_vecPredictionError = 0x1460; // Vector
            public const nint m_flPredictionErrorTime = 0x146C; // GameTime_t
            public const nint m_vecLastCameraSetupLocalOrigin = 0x148C; // Vector
            public const nint m_flLastCameraSetupTime = 0x1498; // GameTime_t
            public const nint m_flFOVSensitivityAdjust = 0x149C; // float32
            public const nint m_flMouseSensitivity = 0x14A0; // float32
            public const nint m_vOldOrigin = 0x14A4; // Vector
            public const nint m_flOldSimulationTime = 0x14B0; // float32
            public const nint m_nLastExecutedCommandNumber = 0x14B4; // int32
            public const nint m_nLastExecutedCommandTick = 0x14B8; // int32
            public const nint m_hController = 0x14BC; // CHandle<CBasePlayerController>
            public const nint m_hDefaultController = 0x14C0; // CHandle<CBasePlayerController>
            public const nint m_bIsSwappingToPredictableController = 0x14C4; // bool
        }
        // Parent: None
        // Field count: 0
        public static class C_SoundOpvarSetAABBEntity {
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponBizon {
        }
        // Parent: None
        // Field count: 1
        public static class C_StattrakModule {
            public const nint m_bKnife = 0x1270; // bool
        }
        // Parent: None
        // Field count: 1
        public static class CCSObserver_CameraServices {
            public const nint m_hPrevPostProcessingVolume = 0x2B0; // CHandle<C_PostProcessingVolume>
        }
        // Parent: CEnvSoundscape
        // Field count: 1
        public static class CEnvSoundscapeProxy {
            public const nint m_MainSoundscapeName = 0x690; // CUtlSymbolLarge
        }
        // Parent: C_BaseEntity
        // Field count: 15
        public static class C_SoundEventEntity {
            public const nint m_bStartOnSpawn = 0x600; // bool
            public const nint m_bToLocalPlayer = 0x601; // bool
            public const nint m_bStopOnNew = 0x602; // bool
            public const nint m_bSaveRestore = 0x603; // bool
            public const nint m_bSavedIsPlaying = 0x604; // bool
            public const nint m_flSavedElapsedTime = 0x608; // float32
            public const nint m_iszSourceEntityName = 0x610; // CUtlSymbolLarge
            public const nint m_iszAttachmentName = 0x618; // CUtlSymbolLarge
            public const nint m_onGUIDChanged = 0x620; // CEntityOutputTemplate<SndOpEventGuid_t>
            public const nint m_onSoundFinished = 0x650; // CEntityIOOutput
            public const nint m_flClientCullRadius = 0x668; // float32
            public const nint m_iszSoundName = 0x698; // CUtlSymbolLarge
            public const nint m_hSource = 0x6B4; // CEntityHandle
            public const nint m_nEntityIndexSelection = 0x6B8; // int32
            public const nint m_bClientSideOnly = 0x0; // bitfield:1
        }
        // Parent: None
        // Field count: 0
        public static class C_LightOrthoEntity {
        }
        // Parent: C_BaseTrigger
        // Field count: 1
        public static class CBombTarget {
            public const nint m_bBombPlantedHere = 0x1180; // bool
        }
        // Parent: None
        // Field count: 1
        public static class C_Knife {
            public const nint m_bFirstAttack = 0x1F20; // bool
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_TerroristWingmanIntroCamera {
        }
        // Parent: None
        // Field count: 0
        public static class CEntityComponent {
        }
        // Parent: None
        // Field count: 2
        public static class C_ItemDogtags {
            public const nint m_OwningPlayer = 0x1A18; // CHandle<C_CSPlayerPawn>
            public const nint m_KillingPlayer = 0x1A1C; // CHandle<C_CSPlayerPawn>
        }
        // Parent: None
        // Field count: 0
        public static class C_LateUpdatedAnimating {
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_TeamPreviewCameraBone {
        }
        // Parent: C_BaseModelEntity
        // Field count: 4
        public static class C_BaseClientUIEntity {
            public const nint m_bEnabled = 0x10A0; // bool
            public const nint m_DialogXMLName = 0x10A8; // CUtlSymbolLarge
            public const nint m_PanelClassName = 0x10B0; // CUtlSymbolLarge
            public const nint m_PanelID = 0x10B8; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponUSPSilencer {
        }
        // Parent: None
        // Field count: 1
        public static class C_MolotovProjectile {
            public const nint m_bIsIncGrenade = 0x1348; // bool
        }
        // Parent: None
        // Field count: 0
        public static class C_TriggerLerpObject {
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponRevolver {
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponElite {
        }
        // Parent: None
        // Field count: 0
        public static class C_DynamicPropAlias_cable_dynamic {
        }
        // Parent: CBaseAnimGraph
        // Field count: 4
        public static class CBaseProp {
            public const nint m_bModelOverrodeBlockLOS = 0x1268; // bool
            public const nint m_iShapeType = 0x126C; // int32
            public const nint m_bConformToCollisionBounds = 0x1270; // bool
            public const nint m_mPreferredCatchTransform = 0x1280; // CTransform
        }
        // Parent: None
        // Field count: 6
        public static class CAttributeManager {
            public const nint m_Providers = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
            public const nint m_iReapplyProvisionParity = 0x20; // int32
            public const nint m_hOuter = 0x24; // CHandle<C_BaseEntity>
            public const nint m_bPreventLoopback = 0x28; // bool
            public const nint m_ProviderType = 0x2C; // attributeprovidertypes_t
            public const nint m_CachedResults = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
        }
        // Parent: None
        // Field count: 0
        public static class SignatureOutflow_Continue {
        }
        // Parent: CPlayerPawnComponent
        // Field count: 20
        public static class CPlayer_CameraServices {
            public const nint m_vecCsViewPunchAngle = 0x48; // QAngle
            public const nint m_nCsViewPunchAngleTick = 0x54; // GameTick_t
            public const nint m_flCsViewPunchAngleTickRatio = 0x58; // float32
            public const nint m_PlayerFog = 0x60; // C_fogplayerparams_t
            public const nint m_hColorCorrectionCtrl = 0xA0; // CHandle<C_ColorCorrection>
            public const nint m_hViewEntity = 0xA4; // CHandle<C_BaseEntity>
            public const nint m_hTonemapController = 0xA8; // CHandle<C_TonemapController2>
            public const nint m_audio = 0xB0; // audioparams_t
            public const nint m_PostProcessingVolumes = 0x128; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
            public const nint m_flOldPlayerZ = 0x140; // float32
            public const nint m_flOldPlayerViewOffsetZ = 0x144; // float32
            public const nint m_CurrentFog = 0x148; // fogparams_t
            public const nint m_hOldFogController = 0x1B0; // CHandle<C_FogController>
            public const nint m_bOverrideFogColor = 0x1B4; // bool[5]
            public const nint m_OverrideFogColor = 0x1BC; // Color[5]
            public const nint m_bOverrideFogStartEnd = 0x1D0; // bool[5]
            public const nint m_fOverrideFogStart = 0x1D8; // float32[5]
            public const nint m_fOverrideFogEnd = 0x1EC; // float32[5]
            public const nint m_hActivePostProcessingVolume = 0x200; // CHandle<C_PostProcessingVolume>
            public const nint m_angDemoViewAngles = 0x208; // QAngle
        }
        // Parent: None
        // Field count: 14
        public static class C_BaseCSGrenade {
            public const nint m_bClientPredictDelete = 0x1F20; // bool
            public const nint m_bRedraw = 0x1F21; // bool
            public const nint m_bIsHeldByPlayer = 0x1F22; // bool
            public const nint m_bPinPulled = 0x1F23; // bool
            public const nint m_bJumpThrow = 0x1F24; // bool
            public const nint m_bThrowAnimating = 0x1F25; // bool
            public const nint m_fThrowTime = 0x1F28; // GameTime_t
            public const nint m_flThrowStrength = 0x1F30; // float32
            public const nint m_fDropTime = 0x1FA8; // GameTime_t
            public const nint m_fPinPullTime = 0x1FAC; // GameTime_t
            public const nint m_bJustPulledPin = 0x1FB0; // bool
            public const nint m_nNextHoldTick = 0x1FB4; // GameTick_t
            public const nint m_flNextHoldFrac = 0x1FB8; // float32
            public const nint m_hSwitchToWeaponAfterThrow = 0x1FBC; // CHandle<C_CSWeaponBase>
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterAttributeInt {
            public const nint m_sAttributeName = 0x638; // CUtlSymbolLarge
        }
        // Parent: C_BaseEntity
        // Field count: 12
        public static class CPointTemplate {
            public const nint m_iszWorldName = 0x600; // CUtlSymbolLarge
            public const nint m_iszSource2EntityLumpName = 0x608; // CUtlSymbolLarge
            public const nint m_iszEntityFilterName = 0x610; // CUtlSymbolLarge
            public const nint m_flTimeoutInterval = 0x618; // float32
            public const nint m_bAsynchronouslySpawnEntities = 0x61C; // bool
            public const nint m_clientOnlyEntityBehavior = 0x620; // PointTemplateClientOnlyEntityBehavior_t
            public const nint m_ownerSpawnGroupType = 0x624; // PointTemplateOwnerSpawnGroupType_t
            public const nint m_createdSpawnGroupHandles = 0x628; // CUtlVector<uint32>
            public const nint m_SpawnedEntityHandles = 0x640; // CUtlVector<CEntityHandle>
            public const nint m_ScriptSpawnCallback = 0x658; // HSCRIPT
            public const nint m_ScriptCallbackScope = 0x660; // HSCRIPT
            public const nint m_OnEntitySpawned = 0x668; // CEntityOutputTemplate<CUtlVector<CEntityHandle>>
        }
        // Parent: None
        // Field count: 0
        public static class CPlayer_FlashlightServices {
        }
        // Parent: CBasePlayerController
        // Field count: 70
        public static class CCSPlayerController {
            public const nint m_pInGameMoneyServices = 0x818; // CCSPlayerController_InGameMoneyServices*
            public const nint m_pInventoryServices = 0x820; // CCSPlayerController_InventoryServices*
            public const nint m_pActionTrackingServices = 0x828; // CCSPlayerController_ActionTrackingServices*
            public const nint m_pDamageServices = 0x830; // CCSPlayerController_DamageServices*
            public const nint m_iPing = 0x838; // uint32
            public const nint m_bHasCommunicationAbuseMute = 0x83C; // bool
            public const nint m_uiCommunicationMuteFlags = 0x840; // uint32
            public const nint m_szCrosshairCodes = 0x848; // CUtlSymbolLarge
            public const nint m_iPendingTeamNum = 0x850; // uint8
            public const nint m_flForceTeamTime = 0x854; // GameTime_t
            public const nint m_iCompTeammateColor = 0x858; // int32
            public const nint m_bEverPlayedOnTeam = 0x85C; // bool
            public const nint m_flPreviousForceJoinTeamTime = 0x860; // GameTime_t
            public const nint m_szClan = 0x868; // CUtlSymbolLarge
            public const nint m_unClanId32bit = 0x870; // uint32
            public const nint m_sSanitizedPlayerName = 0x878; // CUtlString
            public const nint m_sSanitizedClanTag = 0x880; // CUtlString
            public const nint m_iCoachingTeam = 0x888; // int32
            public const nint m_nPlayerDominated = 0x890; // uint64
            public const nint m_nPlayerDominatingMe = 0x898; // uint64
            public const nint m_iCompetitiveRanking = 0x8A0; // int32
            public const nint m_iCompetitiveWins = 0x8A4; // int32
            public const nint m_iCompetitiveRankType = 0x8A8; // int8
            public const nint m_iCompetitiveRankingPredicted_Win = 0x8AC; // int32
            public const nint m_iCompetitiveRankingPredicted_Loss = 0x8B0; // int32
            public const nint m_iCompetitiveRankingPredicted_Tie = 0x8B4; // int32
            public const nint m_nEndMatchNextMapVote = 0x8B8; // int32
            public const nint m_unActiveQuestId = 0x8BC; // uint16
            public const nint m_rtActiveMissionPeriod = 0x8C0; // uint32
            public const nint m_nQuestProgressReason = 0x8C4; // QuestProgress::Reason
            public const nint m_unPlayerTvControlFlags = 0x8C8; // uint32
            public const nint m_iDraftIndex = 0x8F8; // int32
            public const nint m_msQueuedModeDisconnectionTimestamp = 0x8FC; // uint32
            public const nint m_uiAbandonRecordedReason = 0x900; // uint32
            public const nint m_eNetworkDisconnectionReason = 0x904; // uint32
            public const nint m_bCannotBeKicked = 0x908; // bool
            public const nint m_bEverFullyConnected = 0x909; // bool
            public const nint m_bAbandonAllowsSurrender = 0x90A; // bool
            public const nint m_bAbandonOffersInstantSurrender = 0x90B; // bool
            public const nint m_bDisconnection1MinWarningPrinted = 0x90C; // bool
            public const nint m_bScoreReported = 0x90D; // bool
            public const nint m_nDisconnectionTick = 0x910; // int32
            public const nint m_bControllingBot = 0x920; // bool
            public const nint m_bHasControlledBotThisRound = 0x921; // bool
            public const nint m_bHasBeenControlledByPlayerThisRound = 0x922; // bool
            public const nint m_nBotsControlledThisRound = 0x924; // int32
            public const nint m_bCanControlObservedBot = 0x928; // bool
            public const nint m_hPlayerPawn = 0x92C; // CHandle<C_CSPlayerPawn>
            public const nint m_hObserverPawn = 0x930; // CHandle<C_CSObserverPawn>
            public const nint m_bPawnIsAlive = 0x934; // bool
            public const nint m_iPawnHealth = 0x938; // uint32
            public const nint m_iPawnArmor = 0x93C; // int32
            public const nint m_bPawnHasDefuser = 0x940; // bool
            public const nint m_bPawnHasHelmet = 0x941; // bool
            public const nint m_nPawnCharacterDefIndex = 0x942; // uint16
            public const nint m_iPawnLifetimeStart = 0x944; // int32
            public const nint m_iPawnLifetimeEnd = 0x948; // int32
            public const nint m_iPawnBotDifficulty = 0x94C; // int32
            public const nint m_hOriginalControllerOfCurrentPawn = 0x950; // CHandle<CCSPlayerController>
            public const nint m_iScore = 0x954; // int32
            public const nint m_recentKillQueue = 0x958; // uint8[8]
            public const nint m_nFirstKill = 0x960; // uint8
            public const nint m_nKillCount = 0x961; // uint8
            public const nint m_bMvpNoMusic = 0x962; // bool
            public const nint m_eMvpReason = 0x964; // int32
            public const nint m_iMusicKitID = 0x968; // int32
            public const nint m_iMusicKitMVPs = 0x96C; // int32
            public const nint m_iMVPs = 0x970; // int32
            public const nint m_bIsPlayerNameDirty = 0x974; // bool
            public const nint m_bFireBulletsSeedSynchronized = 0x97C; // bool
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_CounterTerroristRushIntroCamera {
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_TeamIntroCounterTerroristPosition {
        }
        // Parent: CBaseAnimGraph
        // Field count: 4
        public static class C_CSGO_PreviewModel {
            public const nint m_defaultAnim = 0x1268; // CUtlString
            public const nint m_nDefaultAnimLoopMode = 0x1270; // AnimLoopMode_t
            public const nint m_flInitialModelScale = 0x1274; // float32
            public const nint m_sInitialWeaponState = 0x1278; // CUtlString
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_TeamSelectCharacterPosition {
        }
        // Parent: C_BaseEntity
        // Field count: 4
        public static class CCSObservableElement {
            public const nint m_iszObservableModelEntity = 0x618; // CUtlSymbolLarge
            public const nint m_hObservableModelEntity = 0x620; // CHandle<C_BaseEntity>
            public const nint m_hObservableModelEntity2 = 0x624; // CHandle<C_BaseEntity>
            public const nint m_nTeamFilter = 0x628; // uint32
        }
        // Parent: C_SoundEventEntity
        // Field count: 2
        public static class C_SoundEventAABBEntity {
            public const nint m_vMins = 0x6C0; // Vector
            public const nint m_vMaxs = 0x6CC; // Vector
        }
        // Parent: None
        // Field count: 49
        public static class CCSPlayer_MovementServices {
            public const nint m_AnimationState = 0x310; // CCSPlayerAnimationState
            public const nint m_bUsingGroundTopologyOffset = 0x3F0; // bool
            public const nint m_flUsingGroundTopologyOffsetTransitionSmoothing = 0x3F4; // float32
            public const nint m_vecLadderNormal = 0x3F8; // Vector
            public const nint m_nLadderSurfacePropIndex = 0x404; // int32
            public const nint m_bDucked = 0x408; // bool
            public const nint m_flDuckAmount = 0x40C; // float32
            public const nint m_flDuckSpeed = 0x410; // float32
            public const nint m_bDuckOverride = 0x414; // bool
            public const nint m_bDesiresDuck = 0x415; // bool
            public const nint m_bDucking = 0x416; // bool
            public const nint m_flDuckRootOffset = 0x418; // float32
            public const nint m_flDuckViewOffset = 0x41C; // float32
            public const nint m_flLastDuckTime = 0x420; // float32
            public const nint m_flBombPlantViewOffset = 0x424; // float32
            public const nint m_vecLastPositionAtFullCrouchSpeed = 0x430; // Vector2D
            public const nint m_duckUntilOnGround = 0x438; // bool
            public const nint m_bHasWalkMovedSinceLastJump = 0x439; // bool
            public const nint m_bInStuckTest = 0x43A; // bool
            public const nint m_nTraceCount = 0x648; // int32
            public const nint m_StuckLast = 0x64C; // int32
            public const nint m_bSpeedCropped = 0x650; // bool
            public const nint m_nOldWaterLevel = 0x654; // int32
            public const nint m_flWaterEntryTime = 0x658; // float32
            public const nint m_vecForward = 0x65C; // Vector
            public const nint m_vecLeft = 0x668; // Vector
            public const nint m_vecUp = 0x674; // Vector
            public const nint m_nGameCodeHasMovedPlayerAfterCommand = 0x680; // int32
            public const nint m_fStashGrenadeParameterWhen = 0x684; // GameTime_t
            public const nint m_bUseFrictionStashedSpeed = 0x688; // bool
            public const nint m_flUseFrictionStashedSpeedUntilFrac = 0x68C; // float32
            public const nint m_flFrictionStashedSpeed = 0x690; // float32
            public const nint m_flStamina = 0x694; // float32
            public const nint m_flHeightAtJumpStart = 0x698; // float32
            public const nint m_flMaxJumpHeightThisJump = 0x69C; // float32
            public const nint m_flMaxJumpHeightLastJump = 0x6A0; // float32
            public const nint m_flStaminaAtJumpStart = 0x6A4; // float32
            public const nint m_flVelMulAtJumpStart = 0x6A8; // float32
            public const nint m_flAccumulatedJumpError = 0x6AC; // float32
            public const nint m_LegacyJump = 0x6B0; // CCSPlayerLegacyJump
            public const nint m_ModernJump = 0x6C8; // CCSPlayerModernJump
            public const nint m_nLastJumpTick = 0x700; // GameTick_t
            public const nint m_flLastJumpFrac = 0x704; // float32
            public const nint m_flLastJumpVelocityZ = 0x708; // float32
            public const nint m_bJumpApexPending = 0x70C; // bool
            public const nint m_flTicksSinceLastSurfingDetected = 0x710; // float32
            public const nint m_bWasSurfing = 0x714; // bool
            public const nint m_vecWalkWishVel = 0x7A4; // Vector2D
            public const nint m_bHasEverProcessedCommand = 0xFD0; // bool
        }
        // Parent: None
        // Field count: 5
        public static class SellbackPurchaseEntry_t {
            public const nint m_unDefIdx = 0x30; // uint16
            public const nint m_nCost = 0x34; // int32
            public const nint m_nPrevArmor = 0x38; // int32
            public const nint m_bPrevHelmet = 0x3C; // bool
            public const nint m_hItem = 0x40; // CEntityHandle
        }
        // Parent: None
        // Field count: 0
        public static class C_TintController {
        }
        // Parent: None
        // Field count: 2
        public static class C_WeaponBaseItem {
            public const nint m_bSequenceInProgress = 0x1F20; // bool
            public const nint m_bRedraw = 0x1F21; // bool
        }
        // Parent: None
        // Field count: 0
        public static class CWaterSplasher {
        }
        // Parent: None
        // Field count: 0
        public static class C_FuncBrush {
        }
        // Parent: None
        // Field count: 1
        public static class C_WeaponCZ75a {
            public const nint m_bMagazineRemoved = 0x1F50; // bool
        }
        // Parent: None
        // Field count: 7
        public static class C_DynamicLight {
            public const nint m_Flags = 0x1098; // uint8
            public const nint m_LightStyle = 0x1099; // uint8
            public const nint m_Radius = 0x109C; // float32
            public const nint m_Exponent = 0x10A0; // int32
            public const nint m_InnerAngle = 0x10A4; // float32
            public const nint m_OuterAngle = 0x10A8; // float32
            public const nint m_SpotRadius = 0x10AC; // float32
        }
        // Parent: C_SoundEventEntity
        // Field count: 1
        public static class C_SoundEventSphereEntity {
            public const nint m_flRadius = 0x6C0; // float32
        }
        // Parent: None
        // Field count: 2
        public static class CCSPlayerController_DamageServices {
            public const nint m_nSendUpdate = 0x40; // int32
            public const nint m_DamageList = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_TeamPreviewModel {
        }
        // Parent: None
        // Field count: 0
        public static class C_TonemapController2Alias_env_tonemap_controller2 {
        }
        // Parent: None
        // Field count: 24
        public static class C_Inferno {
            public const nint m_nfxFireDamageEffect = 0x10D8; // ParticleIndex_t
            public const nint m_hInfernoPointsSnapshot = 0x10E0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoFillerPointsSnapshot = 0x10E8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoOutlinePointsSnapshot = 0x10F0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoClimbingOutlinePointsSnapshot = 0x10F8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_hInfernoDecalsSnapshot = 0x1100; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_firePositions = 0x1108; // VectorWS[64]
            public const nint m_fireParentPositions = 0x1408; // VectorWS[64]
            public const nint m_bFireIsBurning = 0x1708; // bool[64]
            public const nint m_BurnNormal = 0x1748; // Vector[64]
            public const nint m_fireCount = 0x1A48; // int32
            public const nint m_nInfernoType = 0x1A4C; // int32
            public const nint m_nFireLifetime = 0x1A50; // float32
            public const nint m_bInPostEffectTime = 0x1A54; // bool
            public const nint m_lastFireCount = 0x1A58; // int32
            public const nint m_nFireEffectTickBegin = 0x1A5C; // int32
            public const nint m_drawableCount = 0x8660; // int32
            public const nint m_blosCheck = 0x8664; // bool
            public const nint m_nlosperiod = 0x8668; // int32
            public const nint m_maxFireHalfWidth = 0x866C; // float32
            public const nint m_maxFireHeight = 0x8670; // float32
            public const nint m_minBounds = 0x8674; // VectorWS
            public const nint m_maxBounds = 0x8680; // VectorWS
            public const nint m_flLastGrassBurnThink = 0x868C; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CFilterLOS {
        }
        // Parent: C_BaseEntity
        // Field count: 1
        public static class C_EnvWindClientside {
            public const nint m_EnvWindShared = 0x600; // C_EnvWindShared
        }
        // Parent: C_BaseGrenade
        // Field count: 0
        public static class C_FlashbangProjectile {
        }
        // Parent: C_SoundEventEntity
        // Field count: 5
        public static class C_SoundEventConeEntity {
            public const nint m_flEmitterAngle = 0x6C0; // float32
            public const nint m_flSweetSpotAngle = 0x6C4; // float32
            public const nint m_flAttenMin = 0x6C8; // float32
            public const nint m_flAttenMax = 0x6CC; // float32
            public const nint m_iszParameterName = 0x6D0; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponP90 {
        }
        // Parent: C_BaseEntity
        // Field count: 1
        public static class C_EnvWind {
            public const nint m_EnvWindShared = 0x600; // C_EnvWindShared
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_TerroristTeamIntroCamera {
        }
        // Parent: C_BaseEntity
        // Field count: 3
        public static class C_PointDeathcamBounds {
            public const nint m_vBoxMins = 0x600; // Vector
            public const nint m_vBoxMaxs = 0x60C; // Vector
            public const nint m_flLerpDistance = 0x618; // float32
        }
        // Parent: None
        // Field count: 5
        public static class CCSPlayerController_ActionTrackingServices {
            public const nint m_perRoundStats = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
            public const nint m_matchStats = 0xA8; // CSMatchStats_t
            public const nint m_iNumRoundKills = 0x128; // int32
            public const nint m_iNumRoundKillsHeadshots = 0x12C; // int32
            public const nint m_flTotalRoundDamageDealt = 0x130; // float32
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
        }
        // Parent: None
        // Field count: 0
        public static class C_InfoInstructorHintHostageRescueZone {
        }
        // Parent: C_BaseTrigger
        // Field count: 2
        public static class C_TriggerBuoyancy {
            public const nint m_BuoyancyHelper = 0x1180; // CBuoyancyHelper
            public const nint m_flFluidDensity = 0x1298; // float32
        }
        // Parent: None
        // Field count: 6
        public static class CPlayer_MovementServices_Humanoid {
            public const nint m_flStepSoundTime = 0x258; // float32
            public const nint m_flFallVelocity = 0x25C; // float32
            public const nint m_groundNormal = 0x260; // Vector
            public const nint m_flSurfaceFriction = 0x26C; // float32
            public const nint m_surfaceProps = 0x270; // CUtlStringToken
            public const nint m_nStepside = 0x280; // int32
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_IsRequirementValid__Criteria_t {
            public const nint m_bIsValid = 0x0; // bool
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponTec9 {
        }
        // Parent: C_BreakableProp
        // Field count: 5
        public static class C_PhysPropClientside {
            public const nint m_flTouchDelta = 0x13E0; // GameTime_t
            public const nint m_fDeathTime = 0x13E4; // GameTime_t
            public const nint m_vecDamagePosition = 0x13E8; // VectorWS
            public const nint m_vecDamageDirection = 0x13F4; // Vector
            public const nint m_nDamageType = 0x1400; // DamageTypes_t
        }
        // Parent: None
        // Field count: 1
        public static class C_BaseDoor {
            public const nint m_bIsUsable = 0x1098; // bool
        }
        // Parent: None
        // Field count: 5
        public static class CSMatchStats_t {
            public const nint m_iEnemy5Ks = 0x68; // int32
            public const nint m_iEnemy4Ks = 0x6C; // int32
            public const nint m_iEnemy3Ks = 0x70; // int32
            public const nint m_iEnemyKnifeKills = 0x74; // int32
            public const nint m_iEnemyTaserKills = 0x78; // int32
        }
        // Parent: None
        // Field count: 0
        public static class CCSGO_RushIntroTerroristPosition {
        }
        // Parent: None
        // Field count: 0
        public static class CHostageRescueZone {
        }
        // Parent: None
        // Field count: 7
        public static class C_CSWeaponBaseGun {
            public const nint m_zoomLevel = 0x1F20; // int32
            public const nint m_iBurstShotsRemaining = 0x1F24; // int32
            public const nint m_iSilencerBodygroup = 0x1F28; // int32
            public const nint m_silencedModelIndex = 0x1F38; // int32
            public const nint m_inPrecache = 0x1F3C; // bool
            public const nint m_bNeedsBoltAction = 0x1F3D; // bool
            public const nint m_nRevolverCylinderIdx = 0x1F40; // int32
        }
        // Parent: None
        // Field count: 1
        public static class C_CSGameRulesProxy {
            public const nint m_pGameRules = 0x600; // C_CSGameRules*
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponP250 {
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterMassGreater {
            public const nint m_fFilterMass = 0x638; // float32
        }
        // Parent: None
        // Field count: 1
        public static class C_ShatterGlassShardPhysics {
            public const nint m_ShardDesc = 0x10A0; // shard_model_desc_t
        }
        // Parent: None
        // Field count: 13
        public static class C_EntityDissolve {
            public const nint m_flStartTime = 0x10A0; // GameTime_t
            public const nint m_flFadeInStart = 0x10A4; // float32
            public const nint m_flFadeInLength = 0x10A8; // float32
            public const nint m_flFadeOutModelStart = 0x10AC; // float32
            public const nint m_flFadeOutModelLength = 0x10B0; // float32
            public const nint m_flFadeOutStart = 0x10B4; // float32
            public const nint m_flFadeOutLength = 0x10B8; // float32
            public const nint m_nDissolveType = 0x10BC; // EntityDissolveType_t
            public const nint m_nMagnitude = 0x10C0; // uint32
            public const nint m_vDissolverOrigin = 0x10C4; // VectorWS
            public const nint m_flNextSparkTime = 0x10D0; // GameTime_t
            public const nint m_bCoreExplode = 0x10D4; // bool
            public const nint m_bLinkedToServerEnt = 0x10D5; // bool
        }
        // Parent: None
        // Field count: 0
        public static class C_SoundOpvarSetOBBEntity {
        }
        // Parent: None
        // Field count: 8
        public static class CCSCustomPlayerCamera {
            public const nint m_hPawn = 0x600; // CHandle<C_CSPlayerPawnBase>
            public const nint m_nCameraMode = 0x604; // CustomCameraMode_t
            public const nint m_hFollowEntity = 0x608; // CHandle<C_BaseEntity>
            public const nint m_bFollowEyes = 0x60C; // bool
            public const nint m_vecFollowOffset = 0x610; // Vector
            public const nint m_vecCameraOffset = 0x61C; // Vector
            public const nint m_bClipCameraOffset = 0x628; // bool
            public const nint m_flCameraOffsetReturnStrength = 0x62C; // float32
        }
        // Parent: None
        // Field count: 1
        public static class CCSGameModeRules_ArmsRace {
            public const nint m_WeaponSequence = 0x30; // C_NetworkUtlVectorBase<CUtlString>
        }
        // Parent: C_BaseModelEntity
        // Field count: 8
        public static class C_FuncMonitor {
            public const nint m_targetCamera = 0x1098; // CUtlString
            public const nint m_nResolutionEnum = 0x10A0; // int32
            public const nint m_bRenderShadows = 0x10A4; // bool
            public const nint m_bUseUniqueColorTarget = 0x10A5; // bool
            public const nint m_brushModelName = 0x10A8; // CUtlString
            public const nint m_hTargetCamera = 0x10B0; // CHandle<C_BaseEntity>
            public const nint m_bEnabled = 0x10B4; // bool
            public const nint m_bDraw3DSkybox = 0x10B5; // bool
        }
        // Parent: None
        // Field count: 14
        public static class C_ClientRagdoll {
            public const nint m_bFadeOut = 0x1268; // bool
            public const nint m_bImportant = 0x1269; // bool
            public const nint m_flEffectTime = 0x126C; // GameTime_t
            public const nint m_gibDespawnTime = 0x1270; // GameTime_t
            public const nint m_iCurrentFriction = 0x1274; // int32
            public const nint m_iMinFriction = 0x1278; // int32
            public const nint m_iMaxFriction = 0x127C; // int32
            public const nint m_iFrictionAnimState = 0x1280; // int32
            public const nint m_bReleaseRagdoll = 0x1284; // bool
            public const nint m_iEyeAttachment = 0x1285; // AttachmentHandle_t
            public const nint m_bFadingOut = 0x1286; // bool
            public const nint m_flScaleEnd = 0x1288; // float32[10]
            public const nint m_flScaleTimeStart = 0x12B0; // GameTime_t[10]
            public const nint m_flScaleTimeEnd = 0x12D8; // GameTime_t[10]
        }
        // Parent: None
        // Field count: 0
        public static class C_CS2WeaponModuleBase {
        }
        // Parent: C_BaseEntity
        // Field count: 9
        public static class C_CSGO_TeamPreviewCharacterPosition {
            public const nint m_nVariant = 0x600; // int32
            public const nint m_nRandom = 0x604; // int32
            public const nint m_nOrdinal = 0x608; // int32
            public const nint m_sWeaponName = 0x610; // CUtlString
            public const nint m_xuid = 0x618; // uint64
            public const nint m_agentItem = 0x620; // C_EconItemView
            public const nint m_glovesItem = 0xBD0; // C_EconItemView
            public const nint m_weaponItem = 0x1180; // C_EconItemView
            public const nint m_petItem = 0x1730; // C_EconItemView
        }
        // Parent: None
        // Field count: 11
        public static class C_SmokeGrenadeProjectile {
            public const nint m_nSmokeEffectTickBegin = 0x1360; // int32
            public const nint m_bDidSmokeEffect = 0x1364; // bool
            public const nint m_nRandomSeed = 0x1368; // int32
            public const nint m_vSmokeColor = 0x136C; // Vector
            public const nint m_vSmokeDetonationPos = 0x1378; // VectorWS
            public const nint m_VoxelFrameData = 0x1388; // C_NetworkUtlVectorBase<uint8>
            public const nint m_nVoxelFrameDataSize = 0x13A0; // int32
            public const nint m_nVoxelUpdate = 0x13A4; // int32
            public const nint m_nSmokeLightProbeRegen = 0x13A8; // uint8
            public const nint m_bSmokeVolumeDataReceived = 0x13A9; // bool
            public const nint m_bSmokeEffectSpawned = 0x13AA; // bool
        }
        // Parent: None
        // Field count: 1
        public static class CCSPlayer_BuyServices {
            public const nint m_vecSellbackPurchaseEntries = 0x48; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
        }
        // Parent: C_BaseEntity
        // Field count: 2
        public static class C_SkyCameraVolumeTarget {
            public const nint m_nSkyboxScale = 0x600; // int16
            public const nint m_hSkyMaterial = 0x608; // CStrongHandle<InfoForResourceTypeIMaterial2>
        }
        // Parent: None
        // Field count: 10
        public static class C_CSTeam {
            public const nint m_szTeamMatchStat = 0x6B8; // char[512]
            public const nint m_numMapVictories = 0x8B8; // int32
            public const nint m_bSurrendered = 0x8BC; // bool
            public const nint m_scoreFirstHalf = 0x8C0; // int32
            public const nint m_scoreSecondHalf = 0x8C4; // int32
            public const nint m_scoreOvertime = 0x8C8; // int32
            public const nint m_szClanTeamname = 0x8CC; // char[129]
            public const nint m_iClanID = 0x950; // uint32
            public const nint m_szTeamFlagImage = 0x954; // char[8]
            public const nint m_szTeamLogoImage = 0x95C; // char[8]
        }
        // Parent: None
        // Field count: 0
        public static class C_CS2HudModelWeapon {
        }
        // Parent: C_BaseModelEntity
        // Field count: 8
        public static class C_TextureBasedAnimatable {
            public const nint m_bLoop = 0x1098; // bool
            public const nint m_flFPS = 0x109C; // float32
            public const nint m_hPositionKeys = 0x10A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_hRotationKeys = 0x10A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_vAnimationBoundsMin = 0x10B0; // Vector
            public const nint m_vAnimationBoundsMax = 0x10BC; // Vector
            public const nint m_flStartTime = 0x10C8; // float32
            public const nint m_flStartFrame = 0x10CC; // float32
        }
        // Parent: None
        // Field count: 0
        public static class C_LightEnvironmentEntity {
        }
        // Parent: C_BaseTrigger
        // Field count: 14
        public static class C_TriggerPhysics {
            public const nint m_gravityScale = 0x1180; // float32
            public const nint m_linearLimit = 0x1184; // float32
            public const nint m_linearDamping = 0x1188; // float32
            public const nint m_angularLimit = 0x118C; // float32
            public const nint m_angularDamping = 0x1190; // float32
            public const nint m_linearForce = 0x1194; // float32
            public const nint m_flFrequency = 0x1198; // float32
            public const nint m_flDampingRatio = 0x119C; // float32
            public const nint m_vecLinearForcePointAt = 0x11A0; // Vector
            public const nint m_bCollapseToForcePoint = 0x11AC; // bool
            public const nint m_vecLinearForcePointAtWorld = 0x11B0; // VectorWS
            public const nint m_vecLinearForceDirection = 0x11BC; // Vector
            public const nint m_bForceDirectionIsInLocalSpace = 0x11C8; // bool
            public const nint m_bConvertToDebrisWhenPossible = 0x11C9; // bool
        }
        // Parent: None
        // Field count: 0
        public static class C_PropDoorRotating {
        }
        // Parent: None
        // Field count: 2
        public static class C_HandleTest {
            public const nint m_Handle = 0x600; // CHandle<C_BaseEntity>
            public const nint m_bSendHandle = 0x604; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 8
        public static class CInfoWorldLayer {
            public const nint m_pOutputOnEntitiesSpawned = 0x600; // CEntityIOOutput
            public const nint m_worldName = 0x618; // CUtlSymbolLarge
            public const nint m_layerName = 0x620; // CUtlSymbolLarge
            public const nint m_bWorldLayerVisible = 0x628; // bool
            public const nint m_bEntitiesSpawned = 0x629; // bool
            public const nint m_bCreateAsChildSpawnGroup = 0x62A; // bool
            public const nint m_hLayerSpawnGroup = 0x62C; // uint32
            public const nint m_bWorldLayerActuallyVisible = 0x630; // bool
        }
        // Parent: None
        // Field count: 0
        public static class CBodyComponentBaseModelEntity {
        }
        // Parent: None
        // Field count: 1
        public static class C_Multimeter {
            public const nint m_hTargetC4 = 0x1268; // CHandle<C_PlantedC4>
        }
        // Parent: C_BaseModelEntity
        // Field count: 12
        public static class C_BaseTrigger {
            public const nint m_OnStartTouch = 0x1098; // CEntityIOOutput
            public const nint m_OnStartTouchAll = 0x10B0; // CEntityIOOutput
            public const nint m_OnEndTouch = 0x10C8; // CEntityIOOutput
            public const nint m_OnEndTouchAll = 0x10E0; // CEntityIOOutput
            public const nint m_OnTouching = 0x10F8; // CEntityIOOutput
            public const nint m_OnTouchingEachEntity = 0x1110; // CEntityIOOutput
            public const nint m_OnNotTouching = 0x1128; // CEntityIOOutput
            public const nint m_OnTouchingChanged = 0x1140; // CEntityIOOutput
            public const nint m_hTouchingEntities = 0x1158; // CUtlVector<CHandle<C_BaseEntity>>
            public const nint m_iFilterName = 0x1170; // CUtlSymbolLarge
            public const nint m_hFilter = 0x1178; // CHandle<CBaseFilter>
            public const nint m_bDisabled = 0x117C; // bool
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class FilterDamageType {
            public const nint m_iDamageType = 0x638; // int32
        }
        // Parent: None
        // Field count: 2
        public static class CAttributeList {
            public const nint m_Attributes = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
            public const nint m_pManager = 0x70; // CAttributeManager*
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterProximity {
            public const nint m_flRadius = 0x638; // float32
        }
        // Parent: None
        // Field count: 20
        public static class CEffectData {
            public const nint m_vOrigin = 0x8; // VectorWS
            public const nint m_vStart = 0x14; // VectorWS
            public const nint m_vNormal = 0x20; // Vector
            public const nint m_vAngles = 0x2C; // QAngle
            public const nint m_hEntity = 0x38; // CEntityHandle
            public const nint m_hOtherEntity = 0x3C; // CEntityHandle
            public const nint m_flScale = 0x40; // float32
            public const nint m_flMagnitude = 0x44; // float32
            public const nint m_flRadius = 0x48; // float32
            public const nint m_nSurfaceProp = 0x4C; // CUtlStringToken
            public const nint m_nEffectIndex = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nDamageType = 0x58; // uint32
            public const nint m_nPenetrate = 0x5C; // uint8
            public const nint m_nMaterial = 0x5E; // uint16
            public const nint m_nHitBox = 0x60; // int16
            public const nint m_nColor = 0x62; // uint8
            public const nint m_fFlags = 0x63; // uint8
            public const nint m_nAttachmentIndex = 0x64; // AttachmentHandle_t
            public const nint m_nAttachmentName = 0x68; // CUtlStringToken
            public const nint m_iEffectName = 0x6C; // uint16
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponSCAR20 {
        }
        // Parent: None
        // Field count: 0
        public static class C_FuncMover {
        }
        // Parent: None
        // Field count: 3
        public static class CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
            public const nint pItem = 0x0; // C_EconItemView*
            public const nint team = 0x8; // uint16
            public const nint slot = 0xA; // uint16
        }
        // Parent: None
        // Field count: 0
        public static class C_DecoyGrenade {
        }
        // Parent: None
        // Field count: 0
        public static class C_WaterBullet {
        }
        // Parent: None
        // Field count: 5
        public static class CCSPlayer_ActionTrackingServices {
            public const nint m_hLastWeaponBeforeC4AutoSwitch = 0x48; // CHandle<C_BasePlayerWeapon>
            public const nint m_bIsRescuing = 0x4C; // bool
            public const nint m_weaponPurchasesThisMatch = 0x50; // WeaponPurchaseTracker_t
            public const nint m_weaponPurchasesThisRound = 0xC0; // WeaponPurchaseTracker_t
            public const nint m_weaponCarryOverIntoThisRound = 0x130; // WeaponPurchaseTracker_t
        }
        // Parent: None
        // Field count: 0
        public static class CBrokenGlassTrap {
        }
        // Parent: None
        // Field count: 0
        public static class CCSObserver_MovementServices {
        }
        // Parent: None
        // Field count: 6
        public static class C_BaseCombatCharacter {
            public const nint m_hMyWearables = 0x1268; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
            public const nint m_leftFootAttachment = 0x1280; // AttachmentHandle_t
            public const nint m_rightFootAttachment = 0x1281; // AttachmentHandle_t
            public const nint m_nWaterWakeMode = 0x1284; // C_BaseCombatCharacter::WaterWakeMode_t
            public const nint m_flWaterWorldZ = 0x1288; // float32
            public const nint m_flWaterNextTraceTime = 0x128C; // float32
        }
        // Parent: C_BaseClientUIEntity
        // Field count: 2
        public static class C_PointClientUIDialog {
            public const nint m_hActivator = 0x10C8; // CHandle<C_BaseEntity>
            public const nint m_bStartEnabled = 0x10CC; // bool
        }
        // Parent: C_SoundEventEntity
        // Field count: 0
        public static class C_SoundEventMultiPointEntity {
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponHKP2000 {
        }
        // Parent: C_BaseTrigger
        // Field count: 2
        public static class C_FootstepControl {
            public const nint m_source = 0x1180; // CUtlSymbolLarge
            public const nint m_destination = 0x1188; // CUtlSymbolLarge
        }
        // Parent: C_BaseEntity
        // Field count: 8
        public static class CCitadelSoundOpvarSetOBB {
            public const nint m_iszStackName = 0x618; // CUtlSymbolLarge
            public const nint m_iszOperatorName = 0x620; // CUtlSymbolLarge
            public const nint m_iszOpvarName = 0x628; // CUtlSymbolLarge
            public const nint m_vDistanceInnerMins = 0x630; // Vector
            public const nint m_vDistanceInnerMaxs = 0x63C; // Vector
            public const nint m_vDistanceOuterMins = 0x648; // Vector
            public const nint m_vDistanceOuterMaxs = 0x654; // Vector
            public const nint m_nAABBDirection = 0x660; // int32
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_EndOfMatchLineupStart {
        }
        // Parent: None
        // Field count: 0
        public static class CPlayer_WaterServices {
        }
        // Parent: None
        // Field count: 15
        public static class CDamageRecord {
            public const nint m_PlayerDamager = 0x30; // CHandle<C_CSPlayerPawn>
            public const nint m_PlayerRecipient = 0x34; // CHandle<C_CSPlayerPawn>
            public const nint m_hPlayerControllerDamager = 0x38; // CHandle<CCSPlayerController>
            public const nint m_hPlayerControllerRecipient = 0x3C; // CHandle<CCSPlayerController>
            public const nint m_szPlayerDamagerName = 0x40; // CUtlString
            public const nint m_szPlayerRecipientName = 0x48; // CUtlString
            public const nint m_DamagerXuid = 0x50; // uint64
            public const nint m_RecipientXuid = 0x58; // uint64
            public const nint m_flBulletsDamage = 0x60; // float32
            public const nint m_flDamage = 0x64; // float32
            public const nint m_flActualHealthRemoved = 0x68; // float32
            public const nint m_iNumHits = 0x6C; // int32
            public const nint m_iLastBulletUpdate = 0x70; // int32
            public const nint m_bIsOtherEnemy = 0x74; // bool
            public const nint m_killType = 0x75; // EKillTypes_t
        }
        // Parent: None
        // Field count: 0
        public static class C_DynamicPropAlias_dynamic_prop {
        }
        // Parent: None
        // Field count: 0
        public static class CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
        }
        // Parent: C_BarnLight
        // Field count: 3
        public static class C_OmniLight {
            public const nint m_flInnerAngle = 0x13A8; // float32
            public const nint m_flOuterAngle = 0x13AC; // float32
            public const nint m_bShowLight = 0x13B0; // bool
        }
        // Parent: None
        // Field count: 13
        public static class C_SceneEntity {
            public const nint m_bIsPlayingBack = 0x608; // bool
            public const nint m_bPaused = 0x609; // bool
            public const nint m_bMultiplayer = 0x60A; // bool
            public const nint m_bAutogenerated = 0x60B; // bool
            public const nint m_bAllRequirementsComplete = 0x60C; // bool
            public const nint m_flForceClientTime = 0x610; // float32
            public const nint m_nSceneStringIndex = 0x614; // uint16
            public const nint m_bClientOnly = 0x616; // bool
            public const nint m_hOwner = 0x618; // CHandle<C_BaseModelEntity>
            public const nint m_hActorList = 0x620; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            public const nint m_bWasPlaying = 0x638; // bool
            public const nint m_QueuedEvents = 0x648; // CUtlVector<C_SceneEntity::QueuedEvents_t>
            public const nint m_flCurrentTime = 0x660; // float32
        }
        // Parent: None
        // Field count: 1
        public static class C_NametagModule {
            public const nint m_strNametagString = 0x1270; // CUtlString
        }
        // Parent: None
        // Field count: 20
        public static class C_EconEntity {
            public const nint m_flFlexDelayTime = 0x1278; // float32
            public const nint m_flFlexDelayedWeight = 0x1280; // float32*
            public const nint m_bAttributesInitialized = 0x1288; // bool
            public const nint m_AttributeManager = 0x1290; // C_AttributeContainer
            public const nint m_OriginalOwnerXuidLow = 0x18A0; // uint32
            public const nint m_OriginalOwnerXuidHigh = 0x18A4; // uint32
            public const nint m_nFallbackPaintKit = 0x18A8; // int32
            public const nint m_nFallbackSeed = 0x18AC; // int32
            public const nint m_flFallbackWear = 0x18B0; // float32
            public const nint m_nFallbackStatTrak = 0x18B4; // int32
            public const nint m_bClientside = 0x18B8; // bool
            public const nint m_bParticleSystemsCreated = 0x18B9; // bool
            public const nint m_vecAttachedParticles = 0x18C0; // CUtlVector<int32>
            public const nint m_hViewmodelAttachment = 0x18D8; // CHandle<CBaseAnimGraph>
            public const nint m_iOldTeam = 0x18DC; // int32
            public const nint m_bAttachmentDirty = 0x18E0; // bool
            public const nint m_nUnloadedModelIndex = 0x18E4; // int32
            public const nint m_iNumOwnerValidationRetries = 0x18E8; // int32
            public const nint m_hOldProvidee = 0x18F8; // CHandle<C_BaseEntity>
            public const nint m_vecAttachedModels = 0x1900; // CUtlVector<C_EconEntity::AttachedModelData_t>
        }
        // Parent: None
        // Field count: 0
        public static class CPlayer_UseServices {
        }
        // Parent: C_BaseEntity
        // Field count: 25
        public static class C_PointValueRemapper {
            public const nint m_bDisabled = 0x600; // bool
            public const nint m_bDisabledOld = 0x601; // bool
            public const nint m_bUpdateOnClient = 0x602; // bool
            public const nint m_nInputType = 0x604; // ValueRemapperInputType_t
            public const nint m_hRemapLineStart = 0x608; // CHandle<C_BaseEntity>
            public const nint m_hRemapLineEnd = 0x60C; // CHandle<C_BaseEntity>
            public const nint m_flMaximumChangePerSecond = 0x610; // float32
            public const nint m_flDisengageDistance = 0x614; // float32
            public const nint m_flEngageDistance = 0x618; // float32
            public const nint m_bRequiresUseKey = 0x61C; // bool
            public const nint m_nOutputType = 0x620; // ValueRemapperOutputType_t
            public const nint m_hOutputEntities = 0x628; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            public const nint m_nHapticsType = 0x640; // ValueRemapperHapticsType_t
            public const nint m_nMomentumType = 0x644; // ValueRemapperMomentumType_t
            public const nint m_flMomentumModifier = 0x648; // float32
            public const nint m_flSnapValue = 0x64C; // float32
            public const nint m_flCurrentMomentum = 0x650; // float32
            public const nint m_nRatchetType = 0x654; // ValueRemapperRatchetType_t
            public const nint m_flRatchetOffset = 0x658; // float32
            public const nint m_flInputOffset = 0x65C; // float32
            public const nint m_bEngaged = 0x660; // bool
            public const nint m_bFirstUpdate = 0x661; // bool
            public const nint m_flPreviousValue = 0x664; // float32
            public const nint m_flPreviousUpdateTickTime = 0x668; // GameTime_t
            public const nint m_vecPreviousTestPoint = 0x66C; // VectorWS
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_Unknown {
            public const nint m_UnknownKeys = 0x48; // KeyValues3
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponMP7 {
        }
        // Parent: None
        // Field count: 13
        public static class CSPerRoundStats_t {
            public const nint m_iKills = 0x30; // int32
            public const nint m_iDeaths = 0x34; // int32
            public const nint m_iAssists = 0x38; // int32
            public const nint m_iDamage = 0x3C; // int32
            public const nint m_iEquipmentValue = 0x40; // int32
            public const nint m_iMoneySaved = 0x44; // int32
            public const nint m_iKillReward = 0x48; // int32
            public const nint m_iLiveTime = 0x4C; // int32
            public const nint m_iHeadShotKills = 0x50; // int32
            public const nint m_iObjective = 0x54; // int32
            public const nint m_iCashEarned = 0x58; // int32
            public const nint m_iUtilityDamage = 0x5C; // int32
            public const nint m_iEnemiesFlashed = 0x60; // int32
        }
        // Parent: None
        // Field count: 0
        public static class C_CS2HudModelBase {
        }
        // Parent: None
        // Field count: 99
        public static class C_CSGameRules {
            public const nint m_bFreezePeriod = 0x40; // bool
            public const nint m_bWarmupPeriod = 0x41; // bool
            public const nint m_fWarmupPeriodEnd = 0x44; // GameTime_t
            public const nint m_fWarmupPeriodStart = 0x48; // GameTime_t
            public const nint m_bTerroristTimeOutActive = 0x4C; // bool
            public const nint m_bCTTimeOutActive = 0x4D; // bool
            public const nint m_flTerroristTimeOutRemaining = 0x50; // float32
            public const nint m_flCTTimeOutRemaining = 0x54; // float32
            public const nint m_nTerroristTimeOuts = 0x58; // int32
            public const nint m_nCTTimeOuts = 0x5C; // int32
            public const nint m_bTechnicalTimeOut = 0x60; // bool
            public const nint m_bMatchWaitingForResume = 0x61; // bool
            public const nint m_iFreezeTime = 0x64; // int32
            public const nint m_iRoundTime = 0x68; // int32
            public const nint m_fMatchStartTime = 0x6C; // float32
            public const nint m_fRoundStartTime = 0x70; // GameTime_t
            public const nint m_flRestartRoundTime = 0x74; // GameTime_t
            public const nint m_bGameRestart = 0x78; // bool
            public const nint m_flGameStartTime = 0x7C; // float32
            public const nint m_timeUntilNextPhaseStarts = 0x80; // float32
            public const nint m_gamePhase = 0x84; // int32
            public const nint m_totalRoundsPlayed = 0x88; // int32
            public const nint m_nRoundsPlayedThisPhase = 0x8C; // int32
            public const nint m_nOvertimePlaying = 0x90; // int32
            public const nint m_iHostagesRemaining = 0x94; // int32
            public const nint m_bAnyHostageReached = 0x98; // bool
            public const nint m_bMapHasBombTarget = 0x99; // bool
            public const nint m_bMapHasRescueZone = 0x9A; // bool
            public const nint m_bMapHasBuyZone = 0x9B; // bool
            public const nint m_bIsQueuedMatchmaking = 0x9C; // bool
            public const nint m_nQueuedMatchmakingMode = 0xA0; // int32
            public const nint m_bIsValveDS = 0xA4; // bool
            public const nint m_bLogoMap = 0xA5; // bool
            public const nint m_bPlayAllStepSoundsOnServer = 0xA6; // bool
            public const nint m_iSpectatorSlotCount = 0xA8; // int32
            public const nint m_MatchDevice = 0xAC; // int32
            public const nint m_bHasMatchStarted = 0xB0; // bool
            public const nint m_nNextMapInMapgroup = 0xB4; // int32
            public const nint m_szTournamentEventName = 0xB8; // char[512]
            public const nint m_szTournamentEventStage = 0x2B8; // char[512]
            public const nint m_szMatchStatTxt = 0x4B8; // char[512]
            public const nint m_szTournamentPredictionsTxt = 0x6B8; // char[512]
            public const nint m_nTournamentPredictionsPct = 0x8B8; // int32
            public const nint m_flCMMItemDropRevealStartTime = 0x8BC; // GameTime_t
            public const nint m_flCMMItemDropRevealEndTime = 0x8C0; // GameTime_t
            public const nint m_bIsDroppingItems = 0x8C4; // bool
            public const nint m_bIsQuestEligible = 0x8C5; // bool
            public const nint m_bIsHltvActive = 0x8C6; // bool
            public const nint m_bBombPlanted = 0x8C7; // bool
            public const nint m_arrProhibitedItemIndices = 0x8C8; // uint16[100]
            public const nint m_arrTournamentActiveCasterAccounts = 0x990; // uint32[4]
            public const nint m_numBestOfMaps = 0x9A0; // int32
            public const nint m_nHalloweenMaskListSeed = 0x9A4; // int32
            public const nint m_bBombDropped = 0x9A8; // bool
            public const nint m_iRoundWinStatus = 0x9AC; // int32
            public const nint m_eRoundWinReason = 0x9B0; // int32
            public const nint m_bTCantBuy = 0x9B4; // bool
            public const nint m_bCTCantBuy = 0x9B5; // bool
            public const nint m_iMatchStats_RoundResults = 0x9B8; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_CT = 0xA30; // int32[30]
            public const nint m_iMatchStats_PlayersAlive_T = 0xAA8; // int32[30]
            public const nint m_TeamRespawnWaveTimes = 0xB20; // float32[32]
            public const nint m_nActiveMutators = 0xBA0; // int32
            public const nint m_flNextRespawnWave = 0xBA4; // GameTime_t[32]
            public const nint m_vMinimapMins = 0xC24; // VectorWS
            public const nint m_vMinimapMaxs = 0xC30; // VectorWS
            public const nint m_MinimapVerticalSectionHeights = 0xC3C; // float32[8]
            public const nint m_ullLocalMatchID = 0xC60; // uint64
            public const nint m_nEndMatchMapGroupVoteTypes = 0xC68; // int32[10]
            public const nint m_nEndMatchMapGroupVoteOptions = 0xC90; // int32[10]
            public const nint m_nEndMatchMapVoteWinner = 0xCB8; // int32
            public const nint m_iNumConsecutiveCTLoses = 0xCBC; // int32
            public const nint m_iNumConsecutiveTerroristLoses = 0xCC0; // int32
            public const nint m_nMatchAbortedEarlyReason = 0xD80; // int32
            public const nint m_bHasTriggeredRoundStartMusic = 0xD84; // bool
            public const nint m_bSwitchingTeamsAtRoundReset = 0xD85; // bool
            public const nint m_pGameModeRules = 0xDA0; // CCSGameModeRules*
            public const nint m_RetakeRules = 0xDA8; // C_RetakeGameRules
            public const nint m_nMatchEndCount = 0xF00; // uint8
            public const nint m_nTTeamIntroVariant = 0xF04; // int32
            public const nint m_nCTTeamIntroVariant = 0xF08; // int32
            public const nint m_bTeamIntroPeriod = 0xF0C; // bool
            public const nint m_iRoundEndWinnerTeam = 0xF10; // int32
            public const nint m_eRoundEndReason = 0xF14; // int32
            public const nint m_bRoundEndShowTimerDefend = 0xF18; // bool
            public const nint m_iRoundEndTimerTime = 0xF1C; // int32
            public const nint m_sRoundEndFunFactToken = 0xF20; // CUtlString
            public const nint m_iRoundEndFunFactPlayerSlot = 0xF28; // CPlayerSlot
            public const nint m_iRoundEndFunFactData1 = 0xF2C; // int32
            public const nint m_iRoundEndFunFactData2 = 0xF30; // int32
            public const nint m_iRoundEndFunFactData3 = 0xF34; // int32
            public const nint m_sRoundEndMessage = 0xF38; // CUtlString
            public const nint m_iRoundEndPlayerCount = 0xF40; // int32
            public const nint m_bRoundEndNoMusic = 0xF44; // bool
            public const nint m_iRoundEndLegacy = 0xF48; // int32
            public const nint m_nRoundEndCount = 0xF4C; // uint8
            public const nint m_iRoundStartRoundNumber = 0xF50; // int32
            public const nint m_nRoundStartCount = 0xF54; // uint8
            public const nint m_flLastPerfSampleTime = 0x4F60; // float64
        }
        // Parent: C_BaseModelEntity
        // Field count: 2
        public static class CGrenadeTracer {
            public const nint m_flTracerDuration = 0x10B0; // float32
            public const nint m_nType = 0x10B4; // GrenadeType_t
        }
        // Parent: None
        // Field count: 0
        public static class CCSGameModeRules_Noop {
        }
        // Parent: None
        // Field count: 16
        public static class C_BaseCSGrenadeProjectile {
            public const nint m_vInitialPosition = 0x12B0; // VectorWS
            public const nint m_vInitialVelocity = 0x12BC; // Vector
            public const nint m_nBounces = 0x12C8; // int32
            public const nint m_nExplodeEffectIndex = 0x12D0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            public const nint m_nExplodeEffectTickBegin = 0x12D8; // int32
            public const nint m_vecExplodeEffectOrigin = 0x12DC; // VectorWS
            public const nint m_flSpawnTime = 0x12E8; // GameTime_t
            public const nint vecLastTrailLinePos = 0x12EC; // Vector
            public const nint flNextTrailLineTime = 0x12F8; // GameTime_t
            public const nint m_bExplodeEffectBegan = 0x12FC; // bool
            public const nint m_bCanCreateGrenadeTrail = 0x12FD; // bool
            public const nint m_nSnapshotTrajectoryEffectIndex = 0x1300; // ParticleIndex_t
            public const nint m_hSnapshotTrajectoryParticleSnapshot = 0x1308; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            public const nint m_arrTrajectoryTrailPoints = 0x1310; // CUtlVector<Vector>
            public const nint m_arrTrajectoryTrailPointCreationTimes = 0x1328; // CUtlVector<float32>
            public const nint m_flTrajectoryTrailEffectCreationTime = 0x1340; // float32
        }
        // Parent: None
        // Field count: 0
        public static class CCSGO_RushIntroCounterTerroristPosition {
        }
        // Parent: None
        // Field count: 4
        public static class CCSPlayerController_InGameMoneyServices {
            public const nint m_iAccount = 0x40; // int32
            public const nint m_iStartAccount = 0x44; // int32
            public const nint m_iTotalCashSpent = 0x48; // int32
            public const nint m_iCashSpentThisRound = 0x4C; // int32
        }
        // Parent: None
        // Field count: 6
        public static class CCSPlayer_AimPunchServices {
            public const nint m_predictableBaseTick = 0x48; // GameTick_t
            public const nint m_predictableBaseTickInterpAmount = 0x4C; // float32
            public const nint m_predictableBaseAngle = 0x50; // QAngle
            public const nint m_predictableBaseAngleVel = 0x5C; // QAngle
            public const nint m_unpredictableBaseTick = 0xA0; // GameTick_t
            public const nint m_unpredictableBaseAngle = 0xA4; // QAngle
        }
        // Parent: None
        // Field count: 0
        public static class C_HEGrenadeProjectile {
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterModel {
            public const nint m_iFilterModel = 0x638; // CUtlSymbolLarge
        }
        // Parent: C_SoundAreaEntityBase
        // Field count: 2
        public static class C_SoundAreaEntityOrientedBox {
            public const nint m_vMin = 0x628; // Vector
            public const nint m_vMax = 0x634; // Vector
        }
        // Parent: C_SoundOpvarSetPointBase
        // Field count: 0
        public static class C_SoundOpvarSetPointEntity {
        }
        // Parent: C_BaseEntity
        // Field count: 2
        public static class CPulseGameBlackboard {
            public const nint m_strGraphName = 0x608; // CUtlString
            public const nint m_strStateBlob = 0x610; // CUtlString
        }
        // Parent: None
        // Field count: 0
        public static class C_CSWeaponBaseShotgun {
        }
        // Parent: None
        // Field count: 7
        public static class C_RagdollPropAttached {
            public const nint m_boneIndexAttached = 0x12F0; // uint32
            public const nint m_ragdollAttachedObjectIndex = 0x12F4; // uint32
            public const nint m_attachmentPointBoneSpace = 0x12F8; // Vector
            public const nint m_attachmentPointRagdollSpace = 0x1304; // Vector
            public const nint m_vecOffset = 0x1310; // Vector
            public const nint m_parentTime = 0x131C; // float32
            public const nint m_bHasParent = 0x1320; // bool
        }
        // Parent: None
        // Field count: 0
        public static class C_ModelPointEntity {
        }
        // Parent: C_CSPlayerPawn
        // Field count: 2
        public static class C_CSGO_PreviewPlayer {
            public const nint m_animgraphCharacterModeString = 0x3720; // CGlobalSymbol
            public const nint m_flInitialModelScale = 0x3728; // float32
        }
        // Parent: C_BarnLight
        // Field count: 1
        public static class C_RectLight {
            public const nint m_bShowLight = 0x13A8; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 3
        public static class CCSRadarElement {
            public const nint m_nElementType = 0x618; // uint32
            public const nint m_nElementColor = 0x61C; // uint32
            public const nint m_nTeamFilter = 0x620; // uint32
        }
        // Parent: None
        // Field count: 3
        public static class C_FuncTrackTrain {
            public const nint m_nLongAxis = 0x1098; // int32
            public const nint m_flRadius = 0x109C; // float32
            public const nint m_flLineLength = 0x10A0; // float32
        }
        // Parent: None
        // Field count: 2
        public static class C_EconWearable {
            public const nint m_nForceSkin = 0x1918; // int32
            public const nint m_bAlwaysAllow = 0x191C; // bool
        }
        // Parent: None
        // Field count: 2
        public static class EntitySpottedState_t {
            public const nint m_bSpotted = 0x8; // bool
            public const nint m_bSpottedByMask = 0xC; // uint32[2]
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponM4A1 {
        }
        // Parent: None
        // Field count: 1
        public static class C_Item {
            public const nint m_pReticleHintTextName = 0x1918; // char[256]
        }
        // Parent: None
        // Field count: 0
        public static class C_CSPetPlacement {
        }
        // Parent: C_BaseModelEntity
        // Field count: 23
        public static class C_Beam {
            public const nint m_flFrameRate = 0x1098; // float32
            public const nint m_flHDRColorScale = 0x109C; // float32
            public const nint m_flFireTime = 0x10A0; // GameTime_t
            public const nint m_flDamage = 0x10A4; // float32
            public const nint m_nNumBeamEnts = 0x10A8; // uint8
            public const nint m_queryHandleHalo = 0x10AC; // int32
            public const nint m_hBaseMaterial = 0x10D0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nHaloIndex = 0x10D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_nBeamType = 0x10E0; // BeamType_t
            public const nint m_nBeamFlags = 0x10E4; // uint32
            public const nint m_hAttachEntity = 0x10E8; // CHandle<C_BaseEntity>[10]
            public const nint m_nAttachIndex = 0x1110; // AttachmentHandle_t[10]
            public const nint m_fWidth = 0x111C; // float32
            public const nint m_fEndWidth = 0x1120; // float32
            public const nint m_fFadeLength = 0x1124; // float32
            public const nint m_fHaloScale = 0x1128; // float32
            public const nint m_fAmplitude = 0x112C; // float32
            public const nint m_fStartFrame = 0x1130; // float32
            public const nint m_fSpeed = 0x1134; // float32
            public const nint m_flFrame = 0x1138; // float32
            public const nint m_bTurnedOff = 0x113C; // bool
            public const nint m_vecEndPos = 0x1140; // VectorWS
            public const nint m_hEndEntity = 0x114C; // CHandle<C_BaseEntity>
        }
        // Parent: C_BaseEntity
        // Field count: 20
        public static class C_EnvLightProbeVolume {
            public const nint m_Entity_hLightProbeTexture_AmbientCube = 0x698; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SDF = 0x6A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_DC = 0x6A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeTexture_SH2_L1 = 0x6B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightIndicesTexture = 0x6B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightScalarsTexture = 0x6C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_hLightProbeDirectLightShadowsTexture = 0x6C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_Entity_vBoxMins = 0x6D0; // Vector
            public const nint m_Entity_vBoxMaxs = 0x6DC; // Vector
            public const nint m_Entity_bMoveable = 0x6E8; // bool
            public const nint m_Entity_nHandshake = 0x6EC; // int32
            public const nint m_Entity_nPriority = 0x6F0; // int32
            public const nint m_Entity_bStartDisabled = 0x6F4; // bool
            public const nint m_Entity_nLightProbeSizeX = 0x6F8; // int32
            public const nint m_Entity_nLightProbeSizeY = 0x6FC; // int32
            public const nint m_Entity_nLightProbeSizeZ = 0x700; // int32
            public const nint m_Entity_nLightProbeAtlasX = 0x704; // int32
            public const nint m_Entity_nLightProbeAtlasY = 0x708; // int32
            public const nint m_Entity_nLightProbeAtlasZ = 0x70C; // int32
            public const nint m_Entity_bEnabled = 0x719; // bool
        }
        // Parent: None
        // Field count: 9
        public static class C_FuncConveyor {
            public const nint m_vecMoveDirEntitySpace = 0x10A0; // Vector
            public const nint m_flTargetSpeed = 0x10AC; // float32
            public const nint m_nTransitionStartTick = 0x10B0; // GameTick_t
            public const nint m_nTransitionDurationTicks = 0x10B4; // int32
            public const nint m_flTransitionStartSpeed = 0x10B8; // float32
            public const nint m_flFrictionScale = 0x10BC; // float32
            public const nint m_hConveyorModels = 0x10C0; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            public const nint m_flCurrentConveyorOffset = 0x10D8; // float32
            public const nint m_flCurrentConveyorSpeed = 0x10DC; // float32
        }
        // Parent: None
        // Field count: 5
        public static class CCSPlayer_WeaponServices {
            public const nint m_flNextAttack = 0xD0; // GameTime_t
            public const nint m_nOldTotalShootPositionHistoryCount = 0xD4; // uint32
            public const nint m_nOldTotalInputHistoryCount = 0x370; // uint32
            public const nint m_networkAnimTiming = 0x15C0; // C_NetworkUtlVectorBase<uint8>
            public const nint m_bBlockInspectUntilNextGraphUpdate = 0x15D8; // bool
        }
        // Parent: None
        // Field count: 2
        public static class C_PhysMagnet {
            public const nint m_aAttachedObjectsFromServer = 0x1268; // CUtlVector<int32>
            public const nint m_aAttachedObjects = 0x1280; // CUtlVector<CHandle<C_BaseEntity>>
        }
        // Parent: None
        // Field count: 0
        public static class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
        }
        // Parent: None
        // Field count: 0
        public static class C_Breakable {
        }
        // Parent: None
        // Field count: 29
        public static class C_PlantedC4 {
            public const nint m_bBombTicking = 0x1288; // bool
            public const nint m_nBombSite = 0x128C; // int32
            public const nint m_nSourceSoundscapeHash = 0x1290; // int32
            public const nint m_entitySpottedState = 0x1298; // EntitySpottedState_t
            public const nint m_flNextGlow = 0x12B0; // GameTime_t
            public const nint m_flNextBeep = 0x12B4; // GameTime_t
            public const nint m_flC4Blow = 0x12B8; // GameTime_t
            public const nint m_bCannotBeDefused = 0x12BC; // bool
            public const nint m_bHasExploded = 0x12BD; // bool
            public const nint m_flTimerLength = 0x12C0; // float32
            public const nint m_bBeingDefused = 0x12C4; // bool
            public const nint m_bTriggerWarning = 0x12C8; // float32
            public const nint m_bExplodeWarning = 0x12CC; // float32
            public const nint m_bC4Activated = 0x12D0; // bool
            public const nint m_bTenSecWarning = 0x12D1; // bool
            public const nint m_flDefuseLength = 0x12D4; // float32
            public const nint m_flDefuseCountDown = 0x12D8; // GameTime_t
            public const nint m_bBombDefused = 0x12DC; // bool
            public const nint m_hBombDefuser = 0x12E0; // CHandle<C_CSPlayerPawn>
            public const nint m_AttributeManager = 0x12E8; // C_AttributeContainer
            public const nint m_hDefuserMultimeter = 0x18F8; // CHandle<C_Multimeter>
            public const nint m_flNextRadarFlashTime = 0x18FC; // GameTime_t
            public const nint m_bRadarFlash = 0x1900; // bool
            public const nint m_pBombDefuser = 0x1904; // CHandle<C_CSPlayerPawn>
            public const nint m_fLastDefuseTime = 0x1908; // GameTime_t
            public const nint m_pPredictionOwner = 0x1910; // CBasePlayerController*
            public const nint m_vecC4ExplodeSpectatePos = 0x1918; // VectorWS
            public const nint m_vecC4ExplodeSpectateAng = 0x1924; // QAngle
            public const nint m_flC4ExplodeSpectateDuration = 0x1930; // float32
        }
        // Parent: None
        // Field count: 4
        public static class CCSCustomHudLayoutState {
            public const nint m_playerSlot = 0x30; // CPlayerSlot
            public const nint m_bInputCaptureEnabled = 0x34; // bool
            public const nint m_vecHasClasses = 0x38; // C_NetworkUtlVectorBase<HUDPanelHasClass_t>
            public const nint m_vecDialogVariableStrings = 0x50; // C_NetworkUtlVectorBase<HUDPanelDialogVariableString_t>
        }
        // Parent: None
        // Field count: 0
        public static class CCSGO_WingmanIntroCharacterPosition {
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterName {
            public const nint m_iFilterName = 0x638; // CUtlSymbolLarge
        }
        // Parent: None
        // Field count: 9
        public static class C_RagdollProp {
            public const nint m_ragEnabled = 0x1268; // C_NetworkUtlVectorBase<bool>
            public const nint m_ragPos = 0x1280; // C_NetworkUtlVectorBase<Vector>
            public const nint m_ragAngles = 0x1298; // C_NetworkUtlVectorBase<QAngle>
            public const nint m_flBlendWeight = 0x12B0; // float32
            public const nint m_hRagdollSource = 0x12B4; // CHandle<C_BaseEntity>
            public const nint m_iEyeAttachment = 0x12B8; // AttachmentHandle_t
            public const nint m_flBlendWeightCurrent = 0x12BC; // float32
            public const nint m_parentPhysicsBoneIndices = 0x12C0; // CUtlVector<int32>
            public const nint m_worldSpaceBoneComputationOrder = 0x12D8; // CUtlVector<int32>
        }
        // Parent: None
        // Field count: 0
        public static class C_MapPreviewParticleSystem {
        }
        // Parent: C_BaseModelEntity
        // Field count: 18
        public static class CBaseAnimGraph {
            public const nint m_graphControllerManager = 0x1098; // CAnimGraphControllerManager
            public const nint m_pMainGraphController = 0x1130; // CAnimGraphControllerPtr
            public const nint m_bInitiallyPopulateInterpHistory = 0x1138; // bool
            public const nint m_bSuppressAnimEventSounds = 0x113A; // bool
            public const nint m_OnLayerCycleUpdated = 0x1140; // CEntityOutputTemplate<float32>
            public const nint m_OnExternalChoreoGraphChanged = 0x1160; // CEntityIOOutput
            public const nint m_bAnimGraphUpdateEnabled = 0x1180; // bool
            public const nint m_bAnimationUpdateScheduled = 0x1181; // bool
            public const nint m_vecForce = 0x1184; // Vector
            public const nint m_nForceBone = 0x1190; // int32
            public const nint m_pClientsideRagdoll = 0x1198; // CBaseAnimGraph*
            public const nint m_bBuiltRagdoll = 0x11A0; // bool
            public const nint m_pRagdollControl = 0x11B0; // IPhysicsRagdollControl*
            public const nint m_RagdollPose = 0x11B8; // PhysicsRagdollPose_t
            public const nint m_bRagdollEnabled = 0x1200; // bool
            public const nint m_bRagdollClientSide = 0x1201; // bool
            public const nint m_bShouldUpdateTransformations = 0x1202; // bool
            public const nint m_bHasAnimatedMaterialAttributes = 0x1210; // bool
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponM249 {
        }
        // Parent: None
        // Field count: 25
        public static class C_LocalTempEntity {
            public const nint flags = 0x1268; // int32
            public const nint die = 0x126C; // GameTime_t
            public const nint m_flFrameMax = 0x1270; // float32
            public const nint x = 0x1274; // float32
            public const nint y = 0x1278; // float32
            public const nint fadeSpeed = 0x127C; // float32
            public const nint bounceFactor = 0x1280; // float32
            public const nint hitSound = 0x1284; // int32
            public const nint priority = 0x1288; // int32
            public const nint tentOffset = 0x128C; // Vector
            public const nint m_vecTempEntAngVelocity = 0x1298; // QAngle
            public const nint tempent_renderamt = 0x12A4; // int32
            public const nint m_vecNormal = 0x12A8; // Vector
            public const nint m_flSpriteScale = 0x12B4; // float32
            public const nint m_nFlickerFrame = 0x12B8; // int32
            public const nint m_flFrameRate = 0x12BC; // float32
            public const nint m_flFrame = 0x12C0; // float32
            public const nint m_pszImpactEffect = 0x12C8; // char*
            public const nint m_pszParticleEffect = 0x12D0; // char*
            public const nint m_bParticleCollision = 0x12D8; // bool
            public const nint m_iLastCollisionFrame = 0x12DC; // int32
            public const nint m_vLastCollisionOrigin = 0x12E0; // VectorWS
            public const nint m_vecTempEntVelocity = 0x12EC; // Vector
            public const nint m_vecPrevAbsOrigin = 0x12F8; // VectorWS
            public const nint m_vecTempEntAcceleration = 0x1304; // Vector
        }
        // Parent: None
        // Field count: 2
        public static class C_WeaponTaser {
            public const nint m_fFireTime = 0x1F50; // GameTime_t
            public const nint m_nLastAttackTick = 0x1F54; // int32
        }
        // Parent: C_BaseEntity
        // Field count: 0
        public static class C_PointEntity {
        }
        // Parent: None
        // Field count: 0
        public static class C_SingleplayRules {
        }
        // Parent: None
        // Field count: 0
        public static class C_PrecipitationBlocker {
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_CounterTerroristTeamIntroCamera {
        }
        // Parent: C_SoundOpvarSetPointEntity
        // Field count: 0
        public static class C_SoundOpvarSetPathCornerEntity {
        }
        // Parent: None
        // Field count: 4
        public static class CPlayer_WeaponServices {
            public const nint m_hMyWeapons = 0x48; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
            public const nint m_hActiveWeapon = 0x60; // CHandle<C_BasePlayerWeapon>
            public const nint m_hLastWeapon = 0x64; // CHandle<C_BasePlayerWeapon>
            public const nint m_iAmmo = 0x68; // uint16[32]
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponNegev {
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponFiveSeven {
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponSawedoff {
        }
        // Parent: None
        // Field count: 0
        public static class C_TriggerVolume {
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponMP9 {
        }
        // Parent: None
        // Field count: 0
        public static class C_DynamicPropAlias_prop_dynamic_override {
        }
        // Parent: None
        // Field count: 0
        public static class CEnvSoundscapeTriggerable {
        }
        // Parent: None
        // Field count: 5
        public static class C_PlayerPing {
            public const nint m_hPlayer = 0x630; // CHandle<C_CSPlayerPawn>
            public const nint m_hPingedEntity = 0x634; // CHandle<C_BaseEntity>
            public const nint m_iType = 0x638; // int32
            public const nint m_bUrgent = 0x63C; // bool
            public const nint m_szPlaceName = 0x63D; // char[18]
        }
        // Parent: None
        // Field count: 0
        public static class C_AK47 {
        }
        // Parent: C_BaseEntity
        // Field count: 10
        public static class C_CSGO_MapPreviewCameraPathNode {
            public const nint m_szParentPathUniqueID = 0x600; // CUtlSymbolLarge
            public const nint m_nPathIndex = 0x608; // int32
            public const nint m_vInTangentLocal = 0x60C; // Vector
            public const nint m_vOutTangentLocal = 0x618; // Vector
            public const nint m_flFOV = 0x624; // float32
            public const nint m_flCameraSpeed = 0x628; // float32
            public const nint m_flEaseIn = 0x62C; // float32
            public const nint m_flEaseOut = 0x630; // float32
            public const nint m_vInTangentWorld = 0x634; // Vector
            public const nint m_vOutTangentWorld = 0x640; // Vector
        }
        // Parent: None
        // Field count: 10
        public static class C_CSPlayerResource {
            public const nint m_bHostageAlive = 0x600; // bool[12]
            public const nint m_isHostageFollowingSomeone = 0x60C; // bool[12]
            public const nint m_iHostageEntityIDs = 0x618; // CEntityIndex[12]
            public const nint m_bombsiteCenterA = 0x648; // VectorWS
            public const nint m_bombsiteCenterB = 0x654; // VectorWS
            public const nint m_hostageRescueX = 0x660; // int32[4]
            public const nint m_hostageRescueY = 0x670; // int32[4]
            public const nint m_hostageRescueZ = 0x680; // int32[4]
            public const nint m_bEndMatchNextMapAllVoted = 0x690; // bool
            public const nint m_foundGoalPositions = 0x691; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 2
        public static class CSkyboxReference {
            public const nint m_worldGroupId = 0x600; // WorldGroupId_t
            public const nint m_hSkyCamera = 0x604; // CHandle<C_SkyCamera>
        }
        // Parent: None
        // Field count: 0
        public static class C_IncendiaryGrenade {
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterClass {
            public const nint m_iFilterClass = 0x638; // CUtlSymbolLarge
        }
        // Parent: C_PointCamera
        // Field count: 1
        public static class C_PointCameraVFOV {
            public const nint m_flVerticalFOV = 0x660; // float32
        }
        // Parent: CPathSimple
        // Field count: 4
        public static class CPathWithDynamicNodes {
            public const nint m_vecPathNodes = 0x710; // C_NetworkUtlVectorBase<CHandle<CPathNode>>
            public const nint m_xInitialPathWorldToLocal = 0x730; // CTransform
            public const nint m_eDesiredDirection = 0x750; // DirectionAlongSimplePath_t
            public const nint m_bIgnoreParentRotation = 0x754; // bool
        }
        // Parent: C_BaseEntity
        // Field count: 3
        public static class CBaseFilter {
            public const nint m_bNegated = 0x600; // bool
            public const nint m_OnPass = 0x608; // CEntityIOOutput
            public const nint m_OnFail = 0x620; // CEntityIOOutput
        }
        // Parent: None
        // Field count: 1
        public static class WeaponPurchaseTracker_t {
            public const nint m_weaponPurchases = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
        }
        // Parent: C_PointEntity
        // Field count: 15
        public static class CMapInfo {
            public const nint m_iBuyingStatus = 0x600; // int32
            public const nint m_flBombRadius = 0x604; // float32
            public const nint m_iPetPopulation = 0x608; // int32
            public const nint m_bUseNormalSpawnsForDM = 0x60C; // bool
            public const nint m_bDisableAutoGeneratedDMSpawns = 0x60D; // bool
            public const nint m_flBotMaxVisionDistance = 0x610; // float32
            public const nint m_iHostageCount = 0x614; // int32
            public const nint m_bFadePlayerVisibilityFarZ = 0x618; // bool
            public const nint m_bRainTraceToSkyEnabled = 0x619; // bool
            public const nint m_bGPUCullSkybox = 0x61A; // bool
            public const nint m_flEnvRainStrength = 0x61C; // float32
            public const nint m_flEnvPuddleRippleStrength = 0x620; // float32
            public const nint m_flEnvPuddleRippleDirection = 0x624; // float32
            public const nint m_flEnvWetnessCoverage = 0x628; // float32
            public const nint m_flEnvWetnessDryingAmount = 0x62C; // float32
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_EndOfMatchCamera {
        }
        // Parent: CBaseAnimGraph
        // Field count: 12
        public static class C_BaseGrenade {
            public const nint m_bHasWarnedAI = 0x1268; // bool
            public const nint m_bIsSmokeGrenade = 0x1269; // bool
            public const nint m_bIsLive = 0x126A; // bool
            public const nint m_DmgRadius = 0x126C; // float32
            public const nint m_flDetonateTime = 0x1270; // GameTime_t
            public const nint m_flWarnAITime = 0x1274; // float32
            public const nint m_flDamage = 0x1278; // float32
            public const nint m_iszBounceSound = 0x1280; // CUtlSymbolLarge
            public const nint m_ExplosionSound = 0x1288; // CUtlString
            public const nint m_hThrower = 0x1290; // CHandle<C_CSPlayerPawn>
            public const nint m_flNextAttack = 0x12A8; // GameTime_t
            public const nint m_hOriginalThrower = 0x12AC; // CHandle<C_CSPlayerPawn>
        }
        // Parent: None
        // Field count: 16
        public static class C_PlayerSprayDecal {
            public const nint m_nUniqueID = 0x1098; // int32
            public const nint m_unAccountID = 0x109C; // uint32
            public const nint m_unTraceID = 0x10A0; // uint32
            public const nint m_rtGcTime = 0x10A4; // uint32
            public const nint m_vecEndPos = 0x10A8; // VectorWS
            public const nint m_vecStart = 0x10B4; // VectorWS
            public const nint m_vecLeft = 0x10C0; // Vector
            public const nint m_vecNormal = 0x10CC; // Vector
            public const nint m_nPlayer = 0x10D8; // int32
            public const nint m_nEntity = 0x10DC; // int32
            public const nint m_nHitbox = 0x10E0; // int32
            public const nint m_flCreationTime = 0x10E4; // float32
            public const nint m_nTintID = 0x10E8; // int32
            public const nint m_nVersion = 0x10EC; // uint8
            public const nint m_ubSignature = 0x10ED; // uint8[128]
            public const nint m_SprayRenderHelper = 0x1178; // CPlayerSprayDecalRenderHelper
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_LimitCount__Criteria_t {
            public const nint m_bLimitCountPasses = 0x0; // bool
        }
        // Parent: None
        // Field count: 0
        public static class C_CS2HudModelArms {
        }
        // Parent: None
        // Field count: 0
        public static class C_LightSpotEntity {
        }
        // Parent: None
        // Field count: 3
        public static class CCSGameModeRules_Deathmatch {
            public const nint m_flDMBonusStartTime = 0x30; // GameTime_t
            public const nint m_flDMBonusTimeLength = 0x34; // float32
            public const nint m_sDMBonusWeapon = 0x38; // CUtlString
        }
        // Parent: None
        // Field count: 0
        public static class CPulseExecCursor {
        }
        // Parent: C_BaseModelEntity
        // Field count: 24
        public static class C_Sprite {
            public const nint m_hSpriteMaterial = 0x1098; // CStrongHandle<InfoForResourceTypeIMaterial2>
            public const nint m_hAttachedToEntity = 0x10A0; // CHandle<C_BaseEntity>
            public const nint m_nAttachment = 0x10A4; // AttachmentHandle_t
            public const nint m_flSpriteFramerate = 0x10A8; // float32
            public const nint m_flFrame = 0x10AC; // float32
            public const nint m_flDieTime = 0x10B0; // GameTime_t
            public const nint m_nBrightness = 0x10C0; // uint32
            public const nint m_flBrightnessDuration = 0x10C4; // float32
            public const nint m_flSpriteScale = 0x10C8; // float32
            public const nint m_flScaleDuration = 0x10CC; // float32
            public const nint m_bWorldSpaceScale = 0x10D0; // bool
            public const nint m_flGlowProxySize = 0x10D4; // float32
            public const nint m_flHDRColorScale = 0x10D8; // float32
            public const nint m_flLastTime = 0x10DC; // GameTime_t
            public const nint m_flMaxFrame = 0x10E0; // float32
            public const nint m_flStartScale = 0x10E4; // float32
            public const nint m_flDestScale = 0x10E8; // float32
            public const nint m_flScaleTimeStart = 0x10EC; // GameTime_t
            public const nint m_nStartBrightness = 0x10F0; // int32
            public const nint m_nDestBrightness = 0x10F4; // int32
            public const nint m_flBrightnessTimeStart = 0x10F8; // GameTime_t
            public const nint m_nSpriteWidth = 0x1108; // int32
            public const nint m_nSpriteHeight = 0x110C; // int32
            public const nint m_flSpeed = 0x1110; // float32
        }
        // Parent: C_BaseEntity
        // Field count: 2
        public static class C_CsmFovOverride {
            public const nint m_cameraName = 0x600; // CUtlString
            public const nint m_flCsmFovOverrideValue = 0x608; // float32
        }
        // Parent: None
        // Field count: 0
        public static class C_WeaponGlock {
        }
        // Parent: None
        // Field count: 1
        public static class C_PhysicsProp {
            public const nint m_bAwake = 0x13E0; // bool
        }
        // Parent: CBaseFilter
        // Field count: 1
        public static class CFilterTeam {
            public const nint m_iFilterTeam = 0x638; // int32
        }
        // Parent: None
        // Field count: 0
        public static class C_SmokeGrenade {
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
        }
        // Parent: None
        // Field count: 0
        public static class CCSGO_RushIntroCharacterPosition {
        }
        // Parent: None
        // Field count: 0
        public static class CCSPlayer_DamageReactServices {
        }
        // Parent: C_BaseEntity
        // Field count: 3
        public static class C_EntityFlame {
            public const nint m_hEntAttached = 0x600; // CHandle<C_BaseEntity>
            public const nint m_hOldAttached = 0x628; // CHandle<C_BaseEntity>
            public const nint m_bCheapEffect = 0x62C; // bool
        }
        // Parent: None
        // Field count: 0
        public static class CBaseAnimGraphAlias_baseanimating {
        }
        // Parent: C_BaseEntity
        // Field count: 17
        public static class CBasePlayerController {
            public const nint m_CommandContext = 0x608; // C_CommandContext
            public const nint m_nInButtonsWhichAreToggles = 0x6B0; // uint64
            public const nint m_nTickBase = 0x6B8; // uint32
            public const nint m_hPawn = 0x6BC; // CHandle<C_BasePlayerPawn>
            public const nint m_bKnownTeamMismatch = 0x6C0; // bool
            public const nint m_hPredictedPawn = 0x6C4; // CHandle<C_BasePlayerPawn>
            public const nint m_nSplitScreenSlot = 0x6CC; // CSplitScreenSlot
            public const nint m_hSplitOwner = 0x6D0; // CHandle<CBasePlayerController>
            public const nint m_hSplitScreenPlayers = 0x6D8; // CUtlVector<CHandle<CBasePlayerController>>
            public const nint m_bIsHLTV = 0x6F0; // bool
            public const nint m_iConnected = 0x6F4; // PlayerConnectedState
            public const nint m_iMostConnected = 0x6F8; // PlayerConnectedState
            public const nint m_iszPlayerName = 0x6FC; // char[128]
            public const nint m_steamID = 0x788; // uint64
            public const nint m_bIsLocalPlayerController = 0x790; // bool
            public const nint m_bNoClipEnabled = 0x791; // bool
            public const nint m_iDesiredFOV = 0x794; // uint32
        }
        // Parent: None
        // Field count: 0
        public static class C_CSGO_EndOfMatchLineupEndpoint {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_light_fill_t {
            public const nint color = 0x0; // Vector
            public const nint angle = 0xC; // QAngle
            public const nint brightness = 0x18; // float32
        }
        // Parent: None
        // Field count: 5
        public static class CInterpolatedValue {
            public const nint m_flStartTime = 0x0; // float32
            public const nint m_flEndTime = 0x4; // float32
            public const nint m_flStartValue = 0x8; // float32
            public const nint m_flEndValue = 0xC; // float32
            public const nint m_nInterpType = 0x10; // int32
        }
        // Parent: None
        // Field count: 13
        public static class CFlashlightEffect {
            public const nint m_bIsOn = 0x10; // bool
            public const nint m_bMuzzleFlashEnabled = 0x20; // bool
            public const nint m_flMuzzleFlashBrightness = 0x24; // float32
            public const nint m_quatMuzzleFlashOrientation = 0x30; // Quaternion
            public const nint m_vecMuzzleFlashOrigin = 0x40; // VectorWS
            public const nint m_flFov = 0x4C; // float32
            public const nint m_flFarZ = 0x50; // float32
            public const nint m_flLinearAtten = 0x54; // float32
            public const nint m_bCastsShadows = 0x58; // bool
            public const nint m_flCurrentPullBackDist = 0x5C; // float32
            public const nint m_FlashlightTexture = 0x60; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_MuzzleFlashTexture = 0x68; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_textureName = 0x70; // char[64]
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
        public static class CInventoryImageData {
            public const nint m_nNodeType = 0x0; // InventoryNodeType_t
            public const nint name = 0x8; // CUtlString
            public const nint inventory_image_data = 0x10; // inv_image_data_t
        }
        // Parent: None
        // Field count: 0
        public static class CPlayerSprayDecalRenderHelper {
        }
        // Parent: None
        // Field count: 13
        public static class C_IronSightController {
            public const nint m_bIronSightAvailable = 0x10; // bool
            public const nint m_flIronSightAmount = 0x14; // float32
            public const nint m_flIronSightAmountGained = 0x18; // float32
            public const nint m_flIronSightAmountBiased = 0x1C; // float32
            public const nint m_flIronSightAmount_Interpolated = 0x20; // float32
            public const nint m_flIronSightAmountGained_Interpolated = 0x24; // float32
            public const nint m_flIronSightAmountBiased_Interpolated = 0x28; // float32
            public const nint m_flInterpolationLastUpdated = 0x2C; // float32
            public const nint m_angDeltaAverage = 0x30; // QAngle[8]
            public const nint m_angViewLast = 0x90; // QAngle
            public const nint m_vecDotCoords = 0x9C; // Vector2D
            public const nint m_flFiringInaccuracyExtraWidthMultiplier = 0xA4; // float32
            public const nint m_flSpeedRatio = 0xA8; // float32
        }
        // Parent: None
        // Field count: 43
        public static class CGlobalLightBase {
            public const nint m_bSpotLight = 0x10; // bool
            public const nint m_SpotLightOrigin = 0x14; // VectorWS
            public const nint m_SpotLightAngles = 0x20; // QAngle
            public const nint m_ShadowDirection = 0x2C; // Vector
            public const nint m_AmbientDirection = 0x38; // Vector
            public const nint m_SpecularDirection = 0x44; // Vector
            public const nint m_InspectorSpecularDirection = 0x50; // Vector
            public const nint m_flSpecularPower = 0x5C; // float32
            public const nint m_flSpecularIndependence = 0x60; // float32
            public const nint m_SpecularColor = 0x64; // Color
            public const nint m_bStartDisabled = 0x68; // bool
            public const nint m_bEnabled = 0x69; // bool
            public const nint m_LightColor = 0x6C; // Color
            public const nint m_AmbientColor1 = 0x70; // Color
            public const nint m_AmbientColor2 = 0x74; // Color
            public const nint m_AmbientColor3 = 0x78; // Color
            public const nint m_flSunDistance = 0x7C; // float32
            public const nint m_flFOV = 0x80; // float32
            public const nint m_flNearZ = 0x84; // float32
            public const nint m_flFarZ = 0x88; // float32
            public const nint m_bEnableShadows = 0x8C; // bool
            public const nint m_bOldEnableShadows = 0x8D; // bool
            public const nint m_bBackgroundClearNotRequired = 0x8E; // bool
            public const nint m_flCloudScale = 0x90; // float32
            public const nint m_flCloud1Speed = 0x94; // float32
            public const nint m_flCloud1Direction = 0x98; // float32
            public const nint m_flCloud2Speed = 0x9C; // float32
            public const nint m_flCloud2Direction = 0xA0; // float32
            public const nint m_flAmbientScale1 = 0xB0; // float32
            public const nint m_flAmbientScale2 = 0xB4; // float32
            public const nint m_flGroundScale = 0xB8; // float32
            public const nint m_flLightScale = 0xBC; // float32
            public const nint m_flFoWDarkness = 0xC0; // float32
            public const nint m_bEnableSeparateSkyboxFog = 0xC4; // bool
            public const nint m_vFowColor = 0xC8; // Vector
            public const nint m_ViewOrigin = 0xD4; // VectorWS
            public const nint m_ViewAngles = 0xE0; // QAngle
            public const nint m_flViewFoV = 0xEC; // float32
            public const nint m_WorldPoints = 0xF0; // VectorWS[8]
            public const nint m_vFogOffsetLayer0 = 0x4A8; // Vector2D
            public const nint m_vFogOffsetLayer1 = 0x4B0; // Vector2D
            public const nint m_hEnvWind = 0x4B8; // CHandle<C_BaseEntity>
            public const nint m_hEnvSky = 0x4BC; // CHandle<C_BaseEntity>
        }
    }
}
