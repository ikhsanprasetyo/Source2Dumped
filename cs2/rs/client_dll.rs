// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-10-28 12:17:36.038432100 +07:00

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod source2_dumper {
    pub mod schemas {
        // Module: client.dll
        // Class count: 391
        // Enum count: 14
        pub mod client_dll {
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum C_BaseCombatCharacter__WaterWakeMode_t {
                WATER_WAKE_NONE = 0x0,
                WATER_WAKE_IDLE = 0x1,
                WATER_WAKE_WALKING = 0x2,
                WATER_WAKE_RUNNING = 0x3,
                WATER_WAKE_WATER_OVERHEAD = 0x4
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PulseBestOutflowRules_t {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum PulseCursorCancelPriority_t {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PulseMethodCallMode_t {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PulseCursorWakePriority_t {
                WakeElegantly = 0x0,
                WakeImmediate = 0x1
            }
            // Alignment: 4
            // Member count: 15
            #[repr(u32)]
            pub enum CompositeMaterialInputLooseVariableType_t {
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
            #[repr(u32)]
            pub enum CompositeMaterialInputTextureType_t {
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
            #[repr(u32)]
            pub enum InventoryNodeType_t {
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
            #[repr(u32)]
            pub enum CompositeMaterialInputContainerSourceType_t {
                CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
                CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
                CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
                CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
                CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
                CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5
            }
            // Alignment: 4
            // Member count: 10
            #[repr(u32)]
            pub enum CompMatPropertyMutatorType_t {
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
            #[repr(u32)]
            pub enum CompositeMaterialVarSystemVar_t {
                COMPMATSYSVAR_COMPOSITETIME = 0x0,
                COMPMATSYSVAR_EMPTY_RESOURCE_SPACER = 0x1
            }
            // Alignment: 4
            // Member count: 7
            #[repr(u32)]
            pub enum P2P_Messages {
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
            #[repr(u32)]
            pub enum CompositeMaterialMatchFilterType_t {
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS = 0x0,
                MATCH_FILTER_MATERIAL_SHADER = 0x1,
                MATCH_FILTER_MATERIAL_NAME_SUBSTR = 0x2,
                MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS = 0x3,
                MATCH_FILTER_MATERIAL_PROPERTY_EXISTS = 0x4,
                MATCH_FILTER_MATERIAL_PROPERTY_EQUALS = 0x5
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum CompMatPropertyMutatorConditionType_t {
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS = 0x0,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS = 0x1,
                COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS = 0x2
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamIntroCharacterPosition {
            }
            // Parent: None
            // Field count: 0
            pub mod C_FireCrackerBlast {
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGO_WingmanIntroCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 1
            pub mod C_SceneEntity__QueuedEvents_t {
                pub const starttime: usize = 0x0; // float32
            }
            // Parent: None
            // Field count: 1
            pub mod CCSPlayer_PingServices {
                pub const m_hPlayerPing: usize = 0x48; // CHandle<C_PlayerPing>
            }
            // Parent: None
            // Field count: 5
            pub mod CEconItemAttribute {
                pub const m_iAttributeDefinitionIndex: usize = 0x30; // uint16
                pub const m_flValue: usize = 0x34; // float32
                pub const m_flInitialValue: usize = 0x38; // float32
                pub const m_nRefundableCurrency: usize = 0x3C; // int32
                pub const m_bSetBonus: usize = 0x40; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CFuncRetakeBarrier {
            }
            // Parent: C_BaseEntity
            // Field count: 4
            pub mod C_SkyCamera {
                pub const m_skyboxData: usize = 0x600; // sky3dparams_t
                pub const m_skyboxSlotToken: usize = 0x690; // CUtlStringToken
                pub const m_bUseAngles: usize = 0x694; // bool
                pub const m_pNext: usize = 0x698; // C_SkyCamera*
            }
            // Parent: None
            // Field count: 0
            pub mod C_FuncRotating {
            }
            // Parent: C_BaseEntity
            // Field count: 6
            pub mod C_SoundOpvarSetPointBase {
                pub const m_iszStackName: usize = 0x600; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x608; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x610; // CUtlSymbolLarge
                pub const m_iOpvarIndex: usize = 0x618; // int32
                pub const m_bUseAutoCompare: usize = 0x61C; // bool
                pub const m_bFastRefresh: usize = 0x61D; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 24
            pub mod C_EnvCubemapFog {
                pub const m_flEndDistance: usize = 0x600; // float32
                pub const m_flStartDistance: usize = 0x604; // float32
                pub const m_flFogFalloffExponent: usize = 0x608; // float32
                pub const m_bHeightFogEnabled: usize = 0x60C; // bool
                pub const m_flFogHeightWidth: usize = 0x610; // float32
                pub const m_flFogHeightEnd: usize = 0x614; // float32
                pub const m_flFogHeightStart: usize = 0x618; // float32
                pub const m_flFogHeightExponent: usize = 0x61C; // float32
                pub const m_flLODBias: usize = 0x620; // float32
                pub const m_bActive: usize = 0x624; // bool
                pub const m_bStartDisabled: usize = 0x625; // bool
                pub const m_flFogMaxOpacity: usize = 0x628; // float32
                pub const m_nCubemapSourceType: usize = 0x62C; // int32
                pub const m_hSkyMaterial: usize = 0x630; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_iszSkyEntity: usize = 0x638; // CUtlSymbolLarge
                pub const m_nHeightFogType: usize = 0x640; // int32
                pub const m_nFogHeightBlendMode: usize = 0x644; // int32
                pub const m_nFogHeightCoordinateSpace: usize = 0x648; // int32
                pub const m_nDistanceFogType: usize = 0x64C; // int32
                pub const m_DistanceFogCurveString: usize = 0x650; // CUtlSymbolLarge
                pub const m_HeightFogCurveString: usize = 0x658; // CUtlSymbolLarge
                pub const m_hFogCubemapTexture: usize = 0x6F0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_bHasHeightFogEnd: usize = 0x6F8; // bool
                pub const m_bFirstTime: usize = 0x6F9; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamSelectTerroristPosition {
            }
            // Parent: C_ParticleSystem
            // Field count: 5
            pub mod C_EnvParticleGlow {
                pub const m_flAlphaScale: usize = 0x1668; // float32
                pub const m_flRadiusScale: usize = 0x166C; // float32
                pub const m_flSelfIllumScale: usize = 0x1670; // float32
                pub const m_ColorTint: usize = 0x1674; // Color
                pub const m_hTextureOverride: usize = 0x1678; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
            // Parent: None
            // Field count: 0
            pub mod CCS_PortraitWorldCallbackHandler {
            }
            // Parent: None
            // Field count: 9
            pub mod CCSPlayerController_InventoryServices {
                pub const m_vecNetworkableLoadout: usize = 0x40; // CUtlVector<CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t>
                pub const m_unMusicID: usize = 0x58; // uint16
                pub const m_rank: usize = 0x5C; // MedalRank_t[6]
                pub const m_nPersonaDataPublicLevel: usize = 0x74; // int32
                pub const m_nPersonaDataPublicCommendsLeader: usize = 0x78; // int32
                pub const m_nPersonaDataPublicCommendsTeacher: usize = 0x7C; // int32
                pub const m_nPersonaDataPublicCommendsFriendly: usize = 0x80; // int32
                pub const m_nPersonaDataXpTrailLevel: usize = 0x84; // int32
                pub const m_vecServerAuthoritativeWeaponSlots: usize = 0x88; // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
            }
            // Parent: None
            // Field count: 9
            pub mod CCSPlayerModernJump {
                pub const m_nLastActualJumpPressTick: usize = 0x10; // GameTick_t
                pub const m_flLastActualJumpPressFrac: usize = 0x14; // float32
                pub const m_nLastUsableJumpPressTick: usize = 0x18; // GameTick_t
                pub const m_flLastUsableJumpPressFrac: usize = 0x1C; // float32
                pub const m_nLastLandedTick: usize = 0x20; // GameTick_t
                pub const m_flLastLandedFrac: usize = 0x24; // float32
                pub const m_flLastLandedVelocityX: usize = 0x28; // float32
                pub const m_flLastLandedVelocityY: usize = 0x2C; // float32
                pub const m_flLastLandedVelocityZ: usize = 0x30; // float32
            }
            // Parent: None
            // Field count: 1
            pub mod C_EconEntity__AttachedModelData_t {
                pub const m_iModelDisplayFlags: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_ResumePoint {
            }
            // Parent: C_BaseTrigger
            // Field count: 9
            pub mod CTriggerFan {
                pub const m_vFanOriginOffset: usize = 0x1180; // Vector
                pub const m_vDirection: usize = 0x118C; // Vector
                pub const m_bPushTowardsInfoTarget: usize = 0x1198; // bool
                pub const m_bPushAwayFromInfoTarget: usize = 0x1199; // bool
                pub const m_qNoiseDelta: usize = 0x11A0; // Quaternion
                pub const m_hInfoFan: usize = 0x11B0; // CHandle<CInfoFan>
                pub const m_flForce: usize = 0x11B4; // float32
                pub const m_bFalloff: usize = 0x11B8; // bool
                pub const m_RampTimer: usize = 0x11C0; // CountdownTimer
            }
            // Parent: None
            // Field count: 0
            pub mod C_HostageCarriableProp {
            }
            // Parent: None
            // Field count: 6
            pub mod C_BulletHitModel {
                pub const m_matLocal: usize = 0x1268; // matrix3x4_t
                pub const m_iBoneIndex: usize = 0x1298; // int32
                pub const m_hPlayerParent: usize = 0x129C; // CHandle<C_BaseEntity>
                pub const m_bIsHit: usize = 0x12A0; // bool
                pub const m_flTimeCreated: usize = 0x12A4; // float32
                pub const m_vecStartPos: usize = 0x12A8; // VectorWS
            }
            // Parent: None
            // Field count: 3
            pub mod C_FuncElectrifiedVolume {
                pub const m_nAmbientEffect: usize = 0x1098; // ParticleIndex_t
                pub const m_EffectName: usize = 0x10A0; // CUtlSymbolLarge
                pub const m_bState: usize = 0x10A8; // bool
            }
            // Parent: None
            // Field count: 17
            pub mod C_MapVetoPickController {
                pub const m_nDraftType: usize = 0x610; // int32
                pub const m_nTeamWinningCoinToss: usize = 0x614; // int32
                pub const m_nTeamWithFirstChoice: usize = 0x618; // int32[64]
                pub const m_nVoteMapIdsList: usize = 0x718; // int32[7]
                pub const m_nAccountIDs: usize = 0x734; // int32[64]
                pub const m_nMapId0: usize = 0x834; // int32[64]
                pub const m_nMapId1: usize = 0x934; // int32[64]
                pub const m_nMapId2: usize = 0xA34; // int32[64]
                pub const m_nMapId3: usize = 0xB34; // int32[64]
                pub const m_nMapId4: usize = 0xC34; // int32[64]
                pub const m_nMapId5: usize = 0xD34; // int32[64]
                pub const m_nStartingSide0: usize = 0xE34; // int32[64]
                pub const m_nCurrentPhase: usize = 0xF34; // int32
                pub const m_nPhaseStartTick: usize = 0xF38; // int32
                pub const m_nPhaseDurationTicks: usize = 0xF3C; // int32
                pub const m_nPostDataUpdateTick: usize = 0xF40; // int32
                pub const m_bDisabledHud: usize = 0xF44; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_EndOfMatchCharacterPosition {
            }
            // Parent: None
            // Field count: 4
            pub mod CPointOffScreenIndicatorUi {
                pub const m_bBeenEnabled: usize = 0x1300; // bool
                pub const m_bHide: usize = 0x1301; // bool
                pub const m_flSeenTargetTime: usize = 0x1304; // float32
                pub const m_pTargetPanel: usize = 0x1308; // C_PointClientUIWorldPanel*
            }
            // Parent: None
            // Field count: 0
            pub mod CCSObserver_UseServices {
            }
            // Parent: C_BaseTrigger
            // Field count: 1
            pub mod CCSMinimapVolume {
                pub const m_strMinimapName: usize = 0x1198; // CUtlString
            }
            // Parent: None
            // Field count: 0
            pub mod CCSPlayer_UseServices {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_CounterTerroristWingmanIntroCamera {
            }
            // Parent: C_PointEntity
            // Field count: 4
            pub mod CInfoFan {
                pub const m_fFanForceMaxRadius: usize = 0x640; // float32
                pub const m_fFanForceMinRadius: usize = 0x644; // float32
                pub const m_flCurveDistRange: usize = 0x648; // float32
                pub const m_FanForceCurveString: usize = 0x650; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 7
            pub mod C_VoteController {
                pub const m_iActiveIssueIndex: usize = 0x610; // int32
                pub const m_iOnlyTeamToVote: usize = 0x614; // int32
                pub const m_nVoteOptionCount: usize = 0x618; // int32[5]
                pub const m_nPotentialVotes: usize = 0x62C; // int32
                pub const m_bVotesDirty: usize = 0x630; // bool
                pub const m_bTypeDirty: usize = 0x631; // bool
                pub const m_bIsYesNoVote: usize = 0x632; // bool
            }
            // Parent: None
            // Field count: 10
            pub mod C_C4 {
                pub const m_activeLightParticleIndex: usize = 0x1F20; // ParticleIndex_t
                pub const m_eActiveLightEffect: usize = 0x1F24; // C4LightEffect_t
                pub const m_bStartedArming: usize = 0x1F28; // bool
                pub const m_fArmedTime: usize = 0x1F2C; // GameTime_t
                pub const m_bBombPlacedAnimation: usize = 0x1F30; // bool
                pub const m_bIsPlantingViaUse: usize = 0x1F31; // bool
                pub const m_entitySpottedState: usize = 0x1F38; // EntitySpottedState_t
                pub const m_nSpotRules: usize = 0x1F50; // int32
                pub const m_bPlayedArmingBeeps: usize = 0x1F54; // bool[7]
                pub const m_bBombPlanted: usize = 0x1F5B; // bool
            }
            // Parent: C_BasePlayerPawn
            // Field count: 26
            pub mod C_CSPlayerPawnBase {
                pub const m_pPingServices: usize = 0x14D8; // CCSPlayer_PingServices*
                pub const m_previousPlayerState: usize = 0x14E0; // CSPlayerState
                pub const m_iPlayerState: usize = 0x14E4; // CSPlayerState
                pub const m_bHasMovedSinceSpawn: usize = 0x14E8; // bool
                pub const m_flLastSpawnTimeIndex: usize = 0x14EC; // GameTime_t
                pub const m_iProgressBarDuration: usize = 0x14F0; // int32
                pub const m_flProgressBarStartTime: usize = 0x14F4; // float32
                pub const m_flClientDeathTime: usize = 0x14F8; // GameTime_t
                pub const m_flFlashBangTime: usize = 0x14FC; // float32
                pub const m_flFlashScreenshotAlpha: usize = 0x1500; // float32
                pub const m_flFlashOverlayAlpha: usize = 0x1504; // float32
                pub const m_bFlashBuildUp: usize = 0x1508; // bool
                pub const m_bFlashDspHasBeenCleared: usize = 0x1509; // bool
                pub const m_bFlashScreenshotHasBeenGrabbed: usize = 0x150A; // bool
                pub const m_flFlashMaxAlpha: usize = 0x150C; // float32
                pub const m_flFlashDuration: usize = 0x1510; // float32
                pub const m_flClientHealthFadeChangeTimestamp: usize = 0x1514; // GameTime_t
                pub const m_nClientHealthFadeParityValue: usize = 0x1518; // int32
                pub const m_fNextThinkPushAway: usize = 0x151C; // float32
                pub const m_flCurrentMusicStartTime: usize = 0x1524; // float32
                pub const m_flMusicRoundStartTime: usize = 0x1528; // float32
                pub const m_bDeferStartMusicOnWarmup: usize = 0x152C; // bool
                pub const m_flLastSmokeOverlayAlpha: usize = 0x1530; // float32
                pub const m_flLastSmokeAge: usize = 0x1534; // float32
                pub const m_vLastSmokeOverlayColor: usize = 0x1538; // Vector
                pub const m_hOriginalController: usize = 0x1560; // CHandle<CCSPlayerController>
            }
            // Parent: CBaseProp
            // Field count: 29
            pub mod C_BreakableProp {
                pub const m_CPropDataComponent: usize = 0x12A0; // CPropDataComponent
                pub const m_OnStartDeath: usize = 0x12E0; // CEntityIOOutput
                pub const m_OnBreak: usize = 0x12F8; // CEntityIOOutput
                pub const m_OnHealthChanged: usize = 0x1310; // CEntityOutputTemplate<float32>
                pub const m_OnTakeDamage: usize = 0x1330; // CEntityIOOutput
                pub const m_impactEnergyScale: usize = 0x1348; // float32
                pub const m_iMinHealthDmg: usize = 0x134C; // int32
                pub const m_flPressureDelay: usize = 0x1350; // float32
                pub const m_flDefBurstScale: usize = 0x1354; // float32
                pub const m_vDefBurstOffset: usize = 0x1358; // Vector
                pub const m_hBreaker: usize = 0x1364; // CHandle<C_BaseEntity>
                pub const m_PerformanceMode: usize = 0x1368; // PerformanceMode_t
                pub const m_flPreventDamageBeforeTime: usize = 0x136C; // GameTime_t
                pub const m_BreakableContentsType: usize = 0x1370; // BreakableContentsType_t
                pub const m_strBreakableContentsPropGroupOverride: usize = 0x1378; // CUtlString
                pub const m_strBreakableContentsParticleOverride: usize = 0x1380; // CUtlString
                pub const m_bHasBreakPiecesOrCommands: usize = 0x1388; // bool
                pub const m_explodeDamage: usize = 0x138C; // float32
                pub const m_explodeRadius: usize = 0x1390; // float32
                pub const m_sExplosionType: usize = 0x1398; // CGlobalSymbol
                pub const m_explosionDelay: usize = 0x13A0; // float32
                pub const m_explosionBuildupSound: usize = 0x13A8; // CUtlSymbolLarge
                pub const m_explosionCustomEffect: usize = 0x13B0; // CUtlSymbolLarge
                pub const m_explosionCustomSound: usize = 0x13B8; // CUtlSymbolLarge
                pub const m_explosionModifier: usize = 0x13C0; // CUtlSymbolLarge
                pub const m_hPhysicsAttacker: usize = 0x13C8; // CHandle<C_BasePlayerPawn>
                pub const m_flLastPhysicsInfluenceTime: usize = 0x13CC; // GameTime_t
                pub const m_flDefaultFadeScale: usize = 0x13D0; // float32
                pub const m_hLastAttacker: usize = 0x13D4; // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGO_WingmanIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 6
            pub mod C_RetakeGameRules {
                pub const m_nMatchSeed: usize = 0x138; // int32
                pub const m_bBlockersPresent: usize = 0x13C; // bool
                pub const m_bRoundInProgress: usize = 0x13D; // bool
                pub const m_iFirstSecondHalfRound: usize = 0x140; // int32
                pub const m_iBombSite: usize = 0x144; // int32
                pub const m_hBombPlanter: usize = 0x148; // CHandle<C_CSPlayerPawn>
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            pub mod C_SoundOpvarSetDomeEntity {
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 1
            pub mod C_SoundAreaEntitySphere {
                pub const m_flRadius: usize = 0x628; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponAWP {
            }
            // Parent: C_BaseModelEntity
            // Field count: 3
            pub mod C_BaseButton {
                pub const m_glowEntity: usize = 0x1098; // CHandle<C_BaseModelEntity>
                pub const m_usable: usize = 0x109C; // bool
                pub const m_szDisplayText: usize = 0x10A0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            pub mod CCSObserver_ObserverServices {
                pub const m_obsInterpState: usize = 0x70; // ObserverInterpState_t
            }
            // Parent: C_BaseEntity
            // Field count: 2
            pub mod C_SoundEventBoxHelper {
                pub const m_vMins: usize = 0x600; // Vector
                pub const m_vMaxs: usize = 0x60C; // Vector
            }
            // Parent: C_SoundEventMultiPointEntity
            // Field count: 1
            pub mod C_SoundEventBoxEntity {
                pub const m_vecBoxHelpersNetworked: usize = 0x6C0; // C_NetworkUtlVectorBase<SoundeventBoxHelperNetworked_t>
            }
            // Parent: None
            // Field count: 3
            pub mod ServerAuthoritativeWeaponSlot_t {
                pub const unClass: usize = 0x30; // uint16
                pub const unSlot: usize = 0x32; // uint16
                pub const unItemDefIdx: usize = 0x34; // uint16
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSMinimapBoundary {
            }
            // Parent: None
            // Field count: 8
            pub mod C_Precipitation {
                pub const m_flDensity: usize = 0x1180; // float32
                pub const m_flParticleInnerDist: usize = 0x1190; // float32
                pub const m_pParticleDef: usize = 0x1198; // char*
                pub const m_tParticlePrecipTraceTimer: usize = 0x11AC; // TimedEvent[1]
                pub const m_bActiveParticlePrecipEmitter: usize = 0x11B4; // bool[1]
                pub const m_bParticlePrecipInitialized: usize = 0x11B5; // bool
                pub const m_bHasSimulatedSinceLastSceneObjectUpdate: usize = 0x11B6; // bool
                pub const m_nAvailableSheetSequencesMaxIndex: usize = 0x11B8; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 7
            pub mod CLogicRelay {
                pub const m_OnSpawn: usize = 0x600; // CEntityIOOutput
                pub const m_OnTrigger: usize = 0x618; // CEntityIOOutput
                pub const m_bDisabled: usize = 0x630; // bool
                pub const m_bWaitForRefire: usize = 0x631; // bool
                pub const m_bTriggerOnce: usize = 0x632; // bool
                pub const m_bFastRetrigger: usize = 0x633; // bool
                pub const m_bPassthoughCaller: usize = 0x634; // bool
            }
            // Parent: None
            // Field count: 6
            pub mod SequenceHistory_t {
                pub const m_hSequence: usize = 0x0; // HSequence
                pub const m_flSeqStartTime: usize = 0x4; // GameTime_t
                pub const m_flSeqFixedCycle: usize = 0x8; // float32
                pub const m_nSeqLoopMode: usize = 0xC; // AnimLoopMode_t
                pub const m_flPlaybackRate: usize = 0x10; // float32
                pub const m_flCyclesPerSecond: usize = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CPlayer_ItemServices {
            }
            // Parent: None
            // Field count: 4
            pub mod CPulse_OutflowConnection {
                pub const m_SourceOutflowName: usize = 0x0; // PulseSymbol_t
                pub const m_nDestChunk: usize = 0x10; // PulseRuntimeChunkIndex_t
                pub const m_nInstruction: usize = 0x14; // int32
                pub const m_OutflowRegisterMap: usize = 0x18; // PulseRegisterMap_t
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponUMP45 {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponG3SG1 {
            }
            // Parent: None
            // Field count: 2
            pub mod C_SpotlightEnd {
                pub const m_flLightScale: usize = 0x1098; // float32
                pub const m_Radius: usize = 0x109C; // float32
            }
            // Parent: None
            // Field count: 23
            pub mod C_Fish {
                pub const m_pos: usize = 0x1268; // VectorWS
                pub const m_vel: usize = 0x1274; // Vector
                pub const m_angles: usize = 0x1280; // QAngle
                pub const m_localLifeState: usize = 0x128C; // int32
                pub const m_deathDepth: usize = 0x1290; // float32
                pub const m_deathAngle: usize = 0x1294; // float32
                pub const m_buoyancy: usize = 0x1298; // float32
                pub const m_wiggleTimer: usize = 0x12A0; // CountdownTimer
                pub const m_wigglePhase: usize = 0x12B8; // float32
                pub const m_wiggleRate: usize = 0x12BC; // float32
                pub const m_actualPos: usize = 0x12C0; // VectorWS
                pub const m_actualAngles: usize = 0x12CC; // QAngle
                pub const m_poolOrigin: usize = 0x12D8; // VectorWS
                pub const m_waterLevel: usize = 0x12E4; // float32
                pub const m_gotUpdate: usize = 0x12E8; // bool
                pub const m_x: usize = 0x12EC; // float32
                pub const m_y: usize = 0x12F0; // float32
                pub const m_z: usize = 0x12F4; // float32
                pub const m_angle: usize = 0x12F8; // float32
                pub const m_errorHistory: usize = 0x12FC; // float32[20]
                pub const m_errorHistoryIndex: usize = 0x134C; // int32
                pub const m_errorHistoryCount: usize = 0x1350; // int32
                pub const m_averageError: usize = 0x1354; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponFamas {
            }
            // Parent: C_BaseEntity
            // Field count: 2
            pub mod C_EnvDetailController {
                pub const m_flFadeStartDist: usize = 0x600; // float32
                pub const m_flFadeEndDist: usize = 0x604; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CHostageRescueZoneShim {
            }
            // Parent: None
            // Field count: 0
            pub mod CEnvSoundscapeAlias_snd_soundscape {
            }
            // Parent: None
            // Field count: 2
            pub mod CCSPlayer_HostageServices {
                pub const m_hCarriedHostage: usize = 0x48; // CHandle<C_BaseEntity>
                pub const m_hCarriedHostageProp: usize = 0x4C; // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 0
            pub mod C_GameRulesProxy {
            }
            // Parent: C_BaseEntity
            // Field count: 4
            pub mod C_Team {
                pub const m_aPlayerControllers: usize = 0x600; // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
                pub const m_aPlayers: usize = 0x618; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
                pub const m_iScore: usize = 0x630; // int32
                pub const m_szTeamname: usize = 0x634; // char[129]
            }
            // Parent: None
            // Field count: 0
            pub mod C_PathParticleRopeAlias_path_particle_rope_clientside {
            }
            // Parent: C_PointEntity
            // Field count: 1
            pub mod CPointChildModifier {
                pub const m_bOrphanInsteadOfDeletingChildrenOnRemove: usize = 0x600; // bool
            }
            // Parent: None
            // Field count: 2
            pub mod CCSPlayerLegacyJump {
                pub const m_bOldJumpPressed: usize = 0x10; // bool
                pub const m_flJumpPressedTime: usize = 0x14; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponNOVA {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CS2HudModelAddon {
            }
            // Parent: None
            // Field count: 0
            pub mod C_DEagle {
            }
            // Parent: None
            // Field count: 0
            pub mod C_TriggerMultiple {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TerroristRushIntroCamera {
            }
            // Parent: C_CSGO_MapPreviewCameraPath
            // Field count: 1
            pub mod C_CSGO_TeamPreviewCamera {
                pub const m_nVariant: usize = 0x688; // int32
            }
            // Parent: None
            // Field count: 9
            pub mod C_ColorCorrectionVolume {
                pub const m_LastEnterWeight: usize = 0x1180; // float32
                pub const m_LastEnterTime: usize = 0x1184; // GameTime_t
                pub const m_LastExitWeight: usize = 0x1188; // float32
                pub const m_LastExitTime: usize = 0x118C; // GameTime_t
                pub const m_bEnabled: usize = 0x1190; // bool
                pub const m_MaxWeight: usize = 0x1194; // float32
                pub const m_FadeDuration: usize = 0x1198; // float32
                pub const m_Weight: usize = 0x119C; // float32
                pub const m_lookupFilename: usize = 0x11A0; // char[512]
            }
            // Parent: None
            // Field count: 18
            pub mod CPlayer_MovementServices {
                pub const m_nImpulse: usize = 0x48; // int32
                pub const m_nButtons: usize = 0x50; // CInButtonState
                pub const m_nQueuedButtonDownMask: usize = 0x70; // uint64
                pub const m_nQueuedButtonChangeMask: usize = 0x78; // uint64
                pub const m_nButtonDoublePressed: usize = 0x80; // uint64
                pub const m_pButtonPressedCmdNumber: usize = 0x88; // uint32[64]
                pub const m_nLastCommandNumberProcessed: usize = 0x188; // uint32
                pub const m_nToggleButtonDownMask: usize = 0x190; // uint64
                pub const m_flCmdForwardMove: usize = 0x1A0; // float32
                pub const m_flCmdLeftMove: usize = 0x1A4; // float32
                pub const m_flCmdUpMove: usize = 0x1A8; // float32
                pub const m_flMaxspeed: usize = 0x1AC; // float32
                pub const m_arrForceSubtickMoveWhen: usize = 0x1B0; // float32[4]
                pub const m_flForwardMove: usize = 0x1C0; // float32
                pub const m_flLeftMove: usize = 0x1C4; // float32
                pub const m_flUpMove: usize = 0x1C8; // float32
                pub const m_vecLastMovementImpulses: usize = 0x1CC; // Vector
                pub const m_vecOldViewAngles: usize = 0x240; // QAngle
            }
            // Parent: CInfoDynamicShadowHint
            // Field count: 2
            pub mod CInfoDynamicShadowHintBox {
                pub const m_vBoxMins: usize = 0x618; // Vector
                pub const m_vBoxMaxs: usize = 0x624; // Vector
            }
            // Parent: None
            // Field count: 18
            pub mod C_ColorCorrection {
                pub const m_vecOrigin: usize = 0x600; // VectorWS
                pub const m_MinFalloff: usize = 0x60C; // float32
                pub const m_MaxFalloff: usize = 0x610; // float32
                pub const m_flFadeInDuration: usize = 0x614; // float32
                pub const m_flFadeOutDuration: usize = 0x618; // float32
                pub const m_flMaxWeight: usize = 0x61C; // float32
                pub const m_flCurWeight: usize = 0x620; // float32
                pub const m_netlookupFilename: usize = 0x624; // char[512]
                pub const m_bEnabled: usize = 0x824; // bool
                pub const m_bMaster: usize = 0x825; // bool
                pub const m_bClientSide: usize = 0x826; // bool
                pub const m_bExclusive: usize = 0x827; // bool
                pub const m_bEnabledOnClient: usize = 0x828; // bool[1]
                pub const m_flCurWeightOnClient: usize = 0x82C; // float32[1]
                pub const m_bFadingIn: usize = 0x830; // bool[1]
                pub const m_flFadeStartWeight: usize = 0x834; // float32[1]
                pub const m_flFadeStartTime: usize = 0x838; // float32[1]
                pub const m_flFadeDuration: usize = 0x83C; // float32[1]
            }
            // Parent: None
            // Field count: 1
            pub mod AnimGraph2SerializedPoseRecipeSlot_t {
                pub const m_topology: usize = 0x30; // CUtlBinaryBlock
            }
            // Parent: None
            // Field count: 0
            pub mod C_PhysBox {
            }
            // Parent: None
            // Field count: 4
            pub mod CCSPlayer_CameraServices {
                pub const m_flDeathCamTilt: usize = 0x2B0; // float32
                pub const m_hDeathCamBounds: usize = 0x2B4; // CHandle<C_PointDeathcamBounds>
                pub const m_bDeathCamBoundsSearched: usize = 0x2B8; // bool
                pub const m_vClientScopeInaccuracy: usize = 0x2C0; // Vector
            }
            // Parent: CBaseFilter
            // Field count: 3
            pub mod CFilterMultiple {
                pub const m_nFilterType: usize = 0x638; // filter_t
                pub const m_iFilterName: usize = 0x640; // CUtlSymbolLarge[10]
                pub const m_hFilter: usize = 0x690; // CHandle<C_BaseEntity>[10]
            }
            // Parent: C_BaseEntity
            // Field count: 11
            pub mod CEnvSoundscape {
                pub const m_OnPlay: usize = 0x600; // CEntityIOOutput
                pub const m_flRadius: usize = 0x618; // float32
                pub const m_soundEventName: usize = 0x620; // CGameSoundEventName
                pub const m_bOverrideWithEvent: usize = 0x628; // bool
                pub const m_soundscapeIndex: usize = 0x62C; // int32
                pub const m_soundscapeEntityListId: usize = 0x630; // int32
                pub const m_positionNames: usize = 0x638; // CUtlSymbolLarge[8]
                pub const m_hProxySoundscape: usize = 0x678; // CHandle<CEnvSoundscape>
                pub const m_bDisabled: usize = 0x67C; // bool
                pub const m_soundscapeName: usize = 0x680; // CUtlSymbolLarge
                pub const m_soundEventHash: usize = 0x688; // uint32
            }
            // Parent: None
            // Field count: 0
            pub mod C_SoundEventEntityAlias_snd_event_point {
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            pub mod C_SoundOpvarSetOBBWindEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod C_MolotovGrenade {
            }
            // Parent: None
            // Field count: 0
            pub mod C_NetTestBaseCombatCharacter {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponM4A1Silencer {
            }
            // Parent: C_BaseEntity
            // Field count: 11
            pub mod C_SkyCameraVolume {
                pub const m_vBoxMins: usize = 0x618; // Vector
                pub const m_vBoxMaxs: usize = 0x624; // Vector
                pub const m_hTarget: usize = 0x630; // CHandle<C_SkyCameraVolumeTarget>
                pub const m_nPriority: usize = 0x634; // int32
                pub const m_bIsEnabled: usize = 0x638; // bool
                pub const m_bSkyboxBlurEffect: usize = 0x639; // bool
                pub const m_vBlurOrigin: usize = 0x63C; // Vector
                pub const m_bSkyboxReceivesWorldCsm: usize = 0x648; // bool
                pub const m_bWorldReceivesSkyboxCsm: usize = 0x649; // bool
                pub const m_bStartDisabled: usize = 0x64A; // bool
                pub const m_iszTargetName: usize = 0x650; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 31
            pub mod C_EconItemView {
                pub const m_bInventoryImageRgbaRequested: usize = 0x60; // bool
                pub const m_bInventoryImageTriedCache: usize = 0x61; // bool
                pub const m_nInventoryImageRgbaWidth: usize = 0x80; // int32
                pub const m_nInventoryImageRgbaHeight: usize = 0x84; // int32
                pub const m_szCurrentLoadCachedFileName: usize = 0x88; // char[260]
                pub const m_bRestoreCustomMaterialAfterPrecache: usize = 0x1B8; // bool
                pub const m_iItemDefinitionIndex: usize = 0x1BA; // uint16
                pub const m_iEntityQuality: usize = 0x1BC; // int32
                pub const m_iEntityLevel: usize = 0x1C0; // uint32
                pub const m_iItemID: usize = 0x1C8; // uint64
                pub const m_iItemIDHigh: usize = 0x1D0; // uint32
                pub const m_iItemIDLow: usize = 0x1D4; // uint32
                pub const m_iAccountID: usize = 0x1D8; // uint32
                pub const m_iInventoryPosition: usize = 0x1DC; // uint32
                pub const m_bInitialized: usize = 0x1E8; // bool
                pub const m_bDisallowSOC: usize = 0x1E9; // bool
                pub const m_bIsStoreItem: usize = 0x1EA; // bool
                pub const m_bIsTradeItem: usize = 0x1EB; // bool
                pub const m_iEntityQuantity: usize = 0x1EC; // int32
                pub const m_iRarityOverride: usize = 0x1F0; // int32
                pub const m_iQualityOverride: usize = 0x1F4; // int32
                pub const m_iOriginOverride: usize = 0x1F8; // int32
                pub const m_ubStyleOverride: usize = 0x1FC; // uint8
                pub const m_unClientFlags: usize = 0x1FD; // uint8
                pub const m_AttributeList: usize = 0x208; // CAttributeList
                pub const m_NetworkedDynamicAttributes: usize = 0x280; // CAttributeList
                pub const m_szCustomName: usize = 0x2F8; // char[161]
                pub const m_szCustomNameOverride: usize = 0x399; // char[161]
                pub const m_szCustomNameOverride2: usize = 0x43A; // char[161]
                pub const m_szCustomNameOverride3: usize = 0x4DB; // char[161]
                pub const m_bInitializedTags: usize = 0x5A8; // bool
            }
            // Parent: C_SoundEventMultiPointEntity
            // Field count: 1
            pub mod C_SoundEventPathCornerEntity {
                pub const m_vecCornerPairsNetworked: usize = 0x6C0; // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
            }
            // Parent: C_BaseEntity
            // Field count: 3
            pub mod C_InfoVisibilityBox {
                pub const m_nMode: usize = 0x604; // int32
                pub const m_vBoxSize: usize = 0x608; // Vector
                pub const m_bEnabled: usize = 0x614; // bool
            }
            // Parent: None
            // Field count: 2
            pub mod CCSPlayer_ItemServices {
                pub const m_bHasDefuser: usize = 0x48; // bool
                pub const m_bHasHelmet: usize = 0x49; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 16
            pub mod C_PathParticleRope {
                pub const m_bStartActive: usize = 0x608; // bool
                pub const m_flMaxSimulationTime: usize = 0x60C; // float32
                pub const m_iszEffectName: usize = 0x610; // CUtlSymbolLarge
                pub const m_PathNodes_Name: usize = 0x618; // CUtlVector<CUtlSymbolLarge>
                pub const m_flParticleSpacing: usize = 0x630; // float32
                pub const m_flSlack: usize = 0x634; // float32
                pub const m_flRadius: usize = 0x638; // float32
                pub const m_ColorTint: usize = 0x63C; // Color
                pub const m_nEffectState: usize = 0x640; // int32
                pub const m_iEffectIndex: usize = 0x648; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_PathNodes_Position: usize = 0x650; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentIn: usize = 0x668; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_TangentOut: usize = 0x680; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_Color: usize = 0x698; // C_NetworkUtlVectorBase<Vector>
                pub const m_PathNodes_PinEnabled: usize = 0x6B0; // C_NetworkUtlVectorBase<bool>
                pub const m_PathNodes_RadiusScale: usize = 0x6C8; // C_NetworkUtlVectorBase<float32>
            }
            // Parent: None
            // Field count: 3
            pub mod C_DecoyProjectile {
                pub const m_nDecoyShotTick: usize = 0x1348; // int32
                pub const m_nClientLastKnownDecoyShotTick: usize = 0x134C; // int32
                pub const m_flTimeParticleEffectSpawn: usize = 0x1370; // GameTime_t
            }
            // Parent: None
            // Field count: 3
            pub mod C_AttributeContainer {
                pub const m_Item: usize = 0x50; // C_EconItemView
                pub const m_iExternalItemProviderRegisteredToken: usize = 0x600; // int32
                pub const m_ullRegisteredAsItemID: usize = 0x608; // uint64
            }
            // Parent: C_BasePlayerWeapon
            // Field count: 57
            pub mod C_CSWeaponBase {
                pub const m_iWeaponGameplayAnimState: usize = 0x19A8; // WeaponGameplayAnimState
                pub const m_flWeaponGameplayAnimStateTimestamp: usize = 0x19AC; // GameTime_t
                pub const m_flInspectCancelCompleteTime: usize = 0x19B0; // GameTime_t
                pub const m_bInspectPending: usize = 0x19B4; // bool
                pub const m_bInspectShouldLoop: usize = 0x19B5; // bool
                pub const m_nLastEmptySoundCmdNum: usize = 0x19E0; // int32
                pub const m_bFireOnEmpty: usize = 0x19E4; // bool
                pub const m_OnPlayerPickup: usize = 0x19E8; // CEntityIOOutput
                pub const m_weaponMode: usize = 0x1A00; // CSWeaponMode
                pub const m_flTurningInaccuracyDelta: usize = 0x1A04; // float32
                pub const m_vecTurningInaccuracyEyeDirLast: usize = 0x1A08; // Vector
                pub const m_flTurningInaccuracy: usize = 0x1A14; // float32
                pub const m_fAccuracyPenalty: usize = 0x1A18; // float32
                pub const m_flLastAccuracyUpdateTime: usize = 0x1A1C; // GameTime_t
                pub const m_fAccuracySmoothedForZoom: usize = 0x1A20; // float32
                pub const m_iRecoilIndex: usize = 0x1A24; // int32
                pub const m_flRecoilIndex: usize = 0x1A28; // float32
                pub const m_bBurstMode: usize = 0x1A2C; // bool
                pub const m_flLastBurstModeChangeTime: usize = 0x1A30; // GameTime_t
                pub const m_nPostponeFireReadyTicks: usize = 0x1A34; // GameTick_t
                pub const m_flPostponeFireReadyFrac: usize = 0x1A38; // float32
                pub const m_bInReload: usize = 0x1A3C; // bool
                pub const m_nDeployTick: usize = 0x1A40; // GameTick_t
                pub const m_flAttackHoldStartTime: usize = 0x1A44; // GameTime_t
                pub const m_flDroppedAtTime: usize = 0x1A48; // GameTime_t
                pub const m_bIsHauledBack: usize = 0x1A50; // bool
                pub const m_bSilencerOn: usize = 0x1A51; // bool
                pub const m_flTimeSilencerSwitchComplete: usize = 0x1A54; // GameTime_t
                pub const m_bStealthy: usize = 0x1A58; // bool
                pub const m_bInSilentReloadSection: usize = 0x1A59; // bool
                pub const m_flStealthHoldStartTime: usize = 0x1A5C; // GameTime_t
                pub const m_bReloadHeldSinceStart: usize = 0x1A60; // bool
                pub const m_flWeaponActionPlaybackRate: usize = 0x1A64; // float32
                pub const m_iOriginalTeamNumber: usize = 0x1A68; // int32
                pub const m_iMostRecentTeamNumber: usize = 0x1A6C; // int32
                pub const m_bDroppedNearBuyZone: usize = 0x1A70; // bool
                pub const m_flNextAttackRenderTimeOffset: usize = 0x1A74; // float32
                pub const m_bClearWeaponIdentifyingUGC: usize = 0x1B20; // bool
                pub const m_bVisualsDataSet: usize = 0x1B21; // bool
                pub const m_bUIWeapon: usize = 0x1B22; // bool
                pub const m_nCustomEconReloadEventId: usize = 0x1B24; // int32
                pub const m_bCanBePickedUp: usize = 0x1B30; // bool
                pub const m_nextPrevOwnerUseTime: usize = 0x1B34; // GameTime_t
                pub const m_hPrevOwner: usize = 0x1B38; // CHandle<C_CSPlayerPawn>
                pub const m_nDropTick: usize = 0x1B3C; // GameTick_t
                pub const m_bWasActiveWeaponWhenDropped: usize = 0x1B40; // bool
                pub const m_donated: usize = 0x1B64; // bool
                pub const m_fLastShotTime: usize = 0x1B68; // GameTime_t
                pub const m_bWasOwnedByCT: usize = 0x1B6C; // bool
                pub const m_bWasOwnedByTerrorist: usize = 0x1B6D; // bool
                pub const m_flNextClientFireBulletTime: usize = 0x1B70; // float32
                pub const m_flNextClientFireBulletTime_Repredict: usize = 0x1B74; // float32
                pub const m_IronSightController: usize = 0x1BD0; // C_IronSightController
                pub const m_iIronSightMode: usize = 0x1C80; // int32
                pub const m_flLastLOSTraceFailureTime: usize = 0x1CF8; // GameTime_t
                pub const m_flWatTickOffset: usize = 0x1D58; // float32
                pub const m_flLastShakeTime: usize = 0x1D6C; // GameTime_t
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponMag7 {
            }
            // Parent: None
            // Field count: 2
            pub mod WeaponPurchaseCount_t {
                pub const m_nItemDefIndex: usize = 0x30; // uint16
                pub const m_nCount: usize = 0x32; // uint16
            }
            // Parent: None
            // Field count: 0
            pub mod CBasePulseGraphInstance {
            }
            // Parent: CBaseFilter
            // Field count: 3
            pub mod FilterHealth {
                pub const m_bAdrenalineActive: usize = 0x638; // bool
                pub const m_iHealthMin: usize = 0x63C; // int32
                pub const m_iHealthMax: usize = 0x640; // int32
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 13
            pub mod C_PointClientUIHUD {
                pub const m_bCheckCSSClasses: usize = 0x10D0; // bool
                pub const m_bIgnoreInput: usize = 0x1248; // bool
                pub const m_flWidth: usize = 0x124C; // float32
                pub const m_flHeight: usize = 0x1250; // float32
                pub const m_flDPI: usize = 0x1254; // float32
                pub const m_flInteractDistance: usize = 0x1258; // float32
                pub const m_flDepthOffset: usize = 0x125C; // float32
                pub const m_unOwnerContext: usize = 0x1260; // uint32
                pub const m_unHorizontalAlign: usize = 0x1264; // uint32
                pub const m_unVerticalAlign: usize = 0x1268; // uint32
                pub const m_unOrientation: usize = 0x126C; // uint32
                pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0x1270; // bool
                pub const m_vecCSSClasses: usize = 0x1278; // C_NetworkUtlVectorBase<CUtlSymbolLarge>
            }
            // Parent: None
            // Field count: 0
            pub mod SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 0
            pub mod C_InfoLadderDismount {
            }
            // Parent: None
            // Field count: 14
            pub mod C_PointCommentaryNode {
                pub const m_bActive: usize = 0x1280; // bool
                pub const m_bWasActive: usize = 0x1281; // bool
                pub const m_flEndTime: usize = 0x1284; // GameTime_t
                pub const m_flStartTime: usize = 0x1288; // GameTime_t
                pub const m_flStartTimeInCommentary: usize = 0x128C; // float32
                pub const m_iszCommentaryFile: usize = 0x1290; // CUtlSymbolLarge
                pub const m_iszTitle: usize = 0x1298; // CUtlSymbolLarge
                pub const m_iszSpeakers: usize = 0x12A0; // CUtlSymbolLarge
                pub const m_iNodeNumber: usize = 0x12A8; // int32
                pub const m_iNodeNumberMax: usize = 0x12AC; // int32
                pub const m_bListenedTo: usize = 0x12B0; // bool
                pub const m_sndCommentary: usize = 0x12B8; // CSoundPatch*
                pub const m_hViewPosition: usize = 0x12C0; // CHandle<C_BaseEntity>
                pub const m_bRestartAfterRestore: usize = 0x12C4; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CSpriteOriented {
            }
            // Parent: None
            // Field count: 13
            pub mod shard_model_desc_t {
                pub const m_nModelID: usize = 0x8; // int32
                pub const m_hMaterialBase: usize = 0x10; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hMaterialDamageOverlay: usize = 0x18; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_solid: usize = 0x20; // ShardSolid_t
                pub const m_vecPanelSize: usize = 0x24; // Vector2D
                pub const m_vecStressPositionA: usize = 0x2C; // Vector2D
                pub const m_vecStressPositionB: usize = 0x34; // Vector2D
                pub const m_vecPanelVertices: usize = 0x40; // C_NetworkUtlVectorBase<Vector2D>
                pub const m_vInitialPanelVertices: usize = 0x58; // C_NetworkUtlVectorBase<Vector4D>
                pub const m_flGlassHalfThickness: usize = 0x70; // float32
                pub const m_bHasParent: usize = 0x74; // bool
                pub const m_bParentFrozen: usize = 0x75; // bool
                pub const m_SurfacePropStringToken: usize = 0x78; // CUtlStringToken
            }
            // Parent: None
            // Field count: 2
            pub mod C_KeychainModule {
                pub const m_nKeychainDefID: usize = 0x1270; // uint32
                pub const m_nKeychainSeed: usize = 0x1274; // uint32
            }
            // Parent: None
            // Field count: 1
            pub mod CFuncWater {
                pub const m_BuoyancyHelper: usize = 0x1098; // CBuoyancyHelper
            }
            // Parent: None
            // Field count: 0
            pub mod CCSPlayer_GlowServices {
            }
            // Parent: None
            // Field count: 1
            pub mod CCSGameModeRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
            }
            // Parent: None
            // Field count: 0
            pub mod C_Flashbang {
            }
            // Parent: C_PointClientUIWorldPanel
            // Field count: 1
            pub mod C_PointClientUIWorldTextPanel {
                pub const m_messageText: usize = 0x1300; // char[512]
            }
            // Parent: None
            // Field count: 3
            pub mod CCSPlayer_WaterServices {
                pub const m_flWaterJumpTime: usize = 0x48; // float32
                pub const m_vecWaterJumpVel: usize = 0x4C; // Vector
                pub const m_flSwimSoundTime: usize = 0x58; // float32
            }
            // Parent: C_CSPlayerPawnBase
            // Field count: 1
            pub mod C_CSObserverPawn {
                pub const m_hDetectParentChange: usize = 0x1568; // CEntityHandle
            }
            // Parent: None
            // Field count: 3
            pub mod ViewAngleServerChange_t {
                pub const nType: usize = 0x30; // FixAngleSet_t
                pub const qAngle: usize = 0x34; // QAngle
                pub const nIndex: usize = 0x40; // uint32
            }
            // Parent: C_BaseModelEntity
            // Field count: 9
            pub mod C_FuncLadder {
                pub const m_vecLadderDir: usize = 0x1098; // Vector
                pub const m_Dismounts: usize = 0x10A8; // CUtlVector<CHandle<C_InfoLadderDismount>>
                pub const m_vecLocalTop: usize = 0x10C0; // Vector
                pub const m_vecPlayerMountPositionTop: usize = 0x10CC; // VectorWS
                pub const m_vecPlayerMountPositionBottom: usize = 0x10D8; // VectorWS
                pub const m_flAutoRideSpeed: usize = 0x10E4; // float32
                pub const m_bDisabled: usize = 0x10E8; // bool
                pub const m_bFakeLadder: usize = 0x10E9; // bool
                pub const m_bHasSlack: usize = 0x10EA; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponMP5SD {
            }
            // Parent: None
            // Field count: 0
            pub mod C_World {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamSelectCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponGalilAR {
            }
            // Parent: None
            // Field count: 6
            pub mod CCSPlayerBase_CameraServices {
                pub const m_iFOV: usize = 0x298; // uint32
                pub const m_iFOVStart: usize = 0x29C; // uint32
                pub const m_flFOVTime: usize = 0x2A0; // GameTime_t
                pub const m_flFOVRate: usize = 0x2A4; // float32
                pub const m_hZoomOwner: usize = 0x2A8; // CHandle<C_BaseEntity>
                pub const m_flLastShotFOV: usize = 0x2AC; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod C_TeamplayRules {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponSG556 {
            }
            // Parent: C_CSPlayerPawnBase
            // Field count: 105
            pub mod C_CSPlayerPawn {
                pub const m_pBulletServices: usize = 0x1570; // CCSPlayer_BulletServices*
                pub const m_pHostageServices: usize = 0x1578; // CCSPlayer_HostageServices*
                pub const m_pBuyServices: usize = 0x1580; // CCSPlayer_BuyServices*
                pub const m_pGlowServices: usize = 0x1588; // CCSPlayer_GlowServices*
                pub const m_pActionTrackingServices: usize = 0x1590; // CCSPlayer_ActionTrackingServices*
                pub const m_pAimPunchServices: usize = 0x1598; // CCSPlayer_AimPunchServices*
                pub const m_pDamageReactServices: usize = 0x15A0; // CCSPlayer_DamageReactServices*
                pub const m_flHealthShotBoostExpirationTime: usize = 0x15A8; // GameTime_t
                pub const m_flLastFiredWeaponTime: usize = 0x15AC; // GameTime_t
                pub const m_bHasFemaleVoice: usize = 0x15B0; // bool
                pub const m_flLandingTimeSeconds: usize = 0x15B4; // float32
                pub const m_flOldFallVelocity: usize = 0x15B8; // float32
                pub const m_szLastPlaceName: usize = 0x15BC; // char[18]
                pub const m_bPrevDefuser: usize = 0x15CE; // bool
                pub const m_bPrevHelmet: usize = 0x15CF; // bool
                pub const m_nPrevArmorVal: usize = 0x15D0; // int32
                pub const m_nPrevGrenadeAmmoCount: usize = 0x15D4; // int32
                pub const m_unPreviousWeaponHash: usize = 0x15D8; // uint32
                pub const m_unWeaponHash: usize = 0x15DC; // uint32
                pub const m_bInBuyZone: usize = 0x15E0; // bool
                pub const m_bPreviouslyInBuyZone: usize = 0x15E1; // bool
                pub const m_bInLanding: usize = 0x15E2; // bool
                pub const m_flLandingStartTime: usize = 0x15E4; // float32
                pub const m_bInHostageRescueZone: usize = 0x15E8; // bool
                pub const m_bInBombZone: usize = 0x15E9; // bool
                pub const m_bIsBuyMenuOpen: usize = 0x15EA; // bool
                pub const m_flTimeOfLastInjury: usize = 0x15EC; // GameTime_t
                pub const m_flNextSprayDecalTime: usize = 0x15F0; // GameTime_t
                pub const m_iRetakesOffering: usize = 0x1758; // int32
                pub const m_iRetakesOfferingCard: usize = 0x175C; // int32
                pub const m_bRetakesHasDefuseKit: usize = 0x1760; // bool
                pub const m_bRetakesMVPLastRound: usize = 0x1761; // bool
                pub const m_iRetakesMVPBoostItem: usize = 0x1764; // int32
                pub const m_RetakesMVPBoostExtraUtility: usize = 0x1768; // loadout_slot_t
                pub const m_bNeedToReApplyGloves: usize = 0x176D; // bool
                pub const m_EconGloves: usize = 0x1770; // C_EconItemView
                pub const m_nEconGlovesChanged: usize = 0x1D20; // uint8
                pub const m_bMustSyncRagdollState: usize = 0x1D21; // bool
                pub const m_nRagdollDamageBone: usize = 0x1D24; // int32
                pub const m_vRagdollDamageForce: usize = 0x1D28; // Vector
                pub const m_szRagdollDamageWeaponName: usize = 0x1D34; // char[64]
                pub const m_bRagdollDamageHeadshot: usize = 0x1D74; // bool
                pub const m_vRagdollServerOrigin: usize = 0x1D78; // VectorWS
                pub const m_lastLandTime: usize = 0x1D84; // GameTime_t
                pub const m_bOnGroundLastTick: usize = 0x1D88; // bool
                pub const m_hHudModelArms: usize = 0x1DA8; // CHandle<C_CS2HudModelArms>
                pub const m_qDeathEyeAngles: usize = 0x1DAC; // QAngle
                pub const m_bLeftHanded: usize = 0x1DB8; // bool
                pub const m_fSwitchedHandednessTime: usize = 0x1DBC; // GameTime_t
                pub const m_flViewmodelOffsetX: usize = 0x1DC0; // float32
                pub const m_flViewmodelOffsetY: usize = 0x1DC4; // float32
                pub const m_flViewmodelOffsetZ: usize = 0x1DC8; // float32
                pub const m_flViewmodelFOV: usize = 0x1DCC; // float32
                pub const m_vecPlayerPatchEconIndices: usize = 0x1DD0; // uint32[5]
                pub const m_GunGameImmunityColor: usize = 0x1E18; // Color
                pub const m_vecBulletHitModels: usize = 0x1E68; // CUtlVector<C_BulletHitModel*>
                pub const m_bIsWalking: usize = 0x1E80; // bool
                pub const m_entitySpottedState: usize = 0x1E88; // EntitySpottedState_t
                pub const m_bIsScoped: usize = 0x1EA0; // bool
                pub const m_bResumeZoom: usize = 0x1EA1; // bool
                pub const m_bIsDefusing: usize = 0x1EA2; // bool
                pub const m_bIsGrabbingHostage: usize = 0x1EA3; // bool
                pub const m_iBlockingUseActionInProgress: usize = 0x1EA4; // CSPlayerBlockingUseAction_t
                pub const m_flEmitSoundTime: usize = 0x1EA8; // GameTime_t
                pub const m_flEmitSoundTime_Client: usize = 0x1EAC; // GameTime_t
                pub const m_bInNoDefuseArea: usize = 0x1EB0; // bool
                pub const m_nWhichBombZone: usize = 0x1EB4; // int32
                pub const m_iShotsFired: usize = 0x1EB8; // int32
                pub const m_flFlinchStack: usize = 0x1EBC; // float32
                pub const m_flVelocityModifier: usize = 0x1EC0; // float32
                pub const m_bWaitForNoAttack: usize = 0x1EC4; // bool
                pub const m_ignoreLadderJumpTime: usize = 0x1EC8; // float32
                pub const m_bKilledByHeadshot: usize = 0x1ECD; // bool
                pub const m_ArmorValue: usize = 0x1ED0; // int32
                pub const m_unCurrentEquipmentValue: usize = 0x1ED4; // uint16
                pub const m_unRoundStartEquipmentValue: usize = 0x1ED6; // uint16
                pub const m_unFreezetimeEndEquipmentValue: usize = 0x1ED8; // uint16
                pub const m_nLastKillerIndex: usize = 0x1EDC; // CEntityIndex
                pub const m_bOldIsScoped: usize = 0x1EE0; // bool
                pub const m_bHasDeathInfo: usize = 0x1EE1; // bool
                pub const m_flDeathInfoTime: usize = 0x1EE4; // float32
                pub const m_vecDeathInfoOrigin: usize = 0x1EE8; // VectorWS
                pub const m_grenadeParameterStashTime: usize = 0x1F20; // GameTime_t
                pub const m_bGrenadeParametersStashed: usize = 0x1F24; // bool
                pub const m_angStashedShootAngles: usize = 0x1F28; // QAngle
                pub const m_vecStashedGrenadeThrowPosition: usize = 0x1F34; // VectorWS
                pub const m_vecStashedGrenadeThrowPawnCenter: usize = 0x1F40; // VectorWS
                pub const m_vecStashedVelocity: usize = 0x1F4C; // Vector
                pub const m_flInterpolatedInaccuracy: usize = 0x1F58; // float32
                pub const m_bShouldAutobuyDMWeapons: usize = 0x3500; // bool
                pub const m_fImmuneToGunGameDamageTime: usize = 0x3504; // GameTime_t
                pub const m_bGunGameImmunity: usize = 0x3508; // bool
                pub const m_fImmuneToGunGameDamageTimeLast: usize = 0x350C; // GameTime_t
                pub const m_flModifier0: usize = 0x3510; // float32
                pub const m_fMolotovDamageTime: usize = 0x3514; // float32
                pub const m_nPlayerInfernoBodyFx: usize = 0x3588; // ParticleIndex_t
                pub const m_angEyeAngles: usize = 0x3600; // QAngle
                pub const m_arrOldEyeAnglesTimes: usize = 0x3690; // GameTime_t[4]
                pub const m_arrOldEyeAngles: usize = 0x36A0; // QAngle[4]
                pub const m_angEyeAnglesVelocity: usize = 0x36D0; // QAngle
                pub const m_iIDEntIndex: usize = 0x36DC; // CEntityIndex
                pub const m_delayTargetIDTimer: usize = 0x36E0; // CountdownTimer
                pub const m_iTargetItemEntIdx: usize = 0x36F8; // CEntityIndex
                pub const m_iOldIDEntIndex: usize = 0x36FC; // CEntityIndex
                pub const m_holdTargetIDTimer: usize = 0x3700; // CountdownTimer
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 23
            pub mod C_Hostage {
                pub const m_entitySpottedState: usize = 0x12F0; // EntitySpottedState_t
                pub const m_leader: usize = 0x1308; // CHandle<C_BaseEntity>
                pub const m_reuseTimer: usize = 0x1310; // CountdownTimer
                pub const m_vel: usize = 0x1328; // Vector
                pub const m_isRescued: usize = 0x1334; // bool
                pub const m_jumpedThisFrame: usize = 0x1335; // bool
                pub const m_nHostageState: usize = 0x1338; // int32
                pub const m_bHandsHaveBeenCut: usize = 0x133C; // bool
                pub const m_hHostageGrabber: usize = 0x1340; // CHandle<C_CSPlayerPawn>
                pub const m_fLastGrabTime: usize = 0x1344; // GameTime_t
                pub const m_vecGrabbedPos: usize = 0x1348; // VectorWS
                pub const m_flRescueStartTime: usize = 0x1354; // GameTime_t
                pub const m_flGrabSuccessTime: usize = 0x1358; // GameTime_t
                pub const m_flDropStartTime: usize = 0x135C; // GameTime_t
                pub const m_flDeadOrRescuedTime: usize = 0x1360; // GameTime_t
                pub const m_blinkTimer: usize = 0x1368; // CountdownTimer
                pub const m_lookAt: usize = 0x1380; // VectorWS
                pub const m_lookAroundTimer: usize = 0x1390; // CountdownTimer
                pub const m_isInit: usize = 0x13A8; // bool
                pub const m_eyeAttachment: usize = 0x13A9; // AttachmentHandle_t
                pub const m_chestAttachment: usize = 0x13AA; // AttachmentHandle_t
                pub const m_pPredictionOwner: usize = 0x13B0; // CBasePlayerController*
                pub const m_fNewestAlphaThinkTime: usize = 0x13B8; // GameTime_t
            }
            // Parent: None
            // Field count: 6
            pub mod CPlayer_ObserverServices {
                pub const m_iObserverMode: usize = 0x48; // uint8
                pub const m_hObserverTarget: usize = 0x4C; // CHandle<C_BaseEntity>
                pub const m_iObserverLastMode: usize = 0x50; // ObserverMode_t
                pub const m_bForcedObserverMode: usize = 0x54; // bool
                pub const m_flObserverChaseDistance: usize = 0x58; // float32
                pub const m_flObserverChaseDistanceCalcTime: usize = 0x5C; // GameTime_t
            }
            // Parent: None
            // Field count: 1
            pub mod CCashStack {
                pub const m_nCashStackValue: usize = 0x1098; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 4
            pub mod C_SoundAreaEntityBase {
                pub const m_bDisabled: usize = 0x600; // bool
                pub const m_bWasEnabled: usize = 0x608; // bool
                pub const m_iszSoundAreaType: usize = 0x610; // CUtlSymbolLarge
                pub const m_vPos: usize = 0x618; // Vector
            }
            // Parent: C_BaseEntity
            // Field count: 6
            pub mod C_PlayerVisibility {
                pub const m_flVisibilityStrength: usize = 0x600; // float32
                pub const m_flFogDistanceMultiplier: usize = 0x604; // float32
                pub const m_flFogMaxDensityMultiplier: usize = 0x608; // float32
                pub const m_flFadeTime: usize = 0x60C; // float32
                pub const m_bStartDisabled: usize = 0x610; // bool
                pub const m_bIsEnabled: usize = 0x611; // bool
            }
            // Parent: None
            // Field count: 3
            pub mod CAttributeManager__cached_attribute_float_t {
                pub const flIn: usize = 0x0; // float32
                pub const iAttribHook: usize = 0x8; // CUtlSymbolLarge
                pub const flOut: usize = 0x10; // float32
            }
            // Parent: CBaseAnimGraph
            // Field count: 7
            pub mod C_BasePlayerWeapon {
                pub const m_nNextPrimaryAttackTick: usize = 0x1918; // GameTick_t
                pub const m_flNextPrimaryAttackTickRatio: usize = 0x191C; // float32
                pub const m_nNextSecondaryAttackTick: usize = 0x1920; // GameTick_t
                pub const m_flNextSecondaryAttackTickRatio: usize = 0x1924; // float32
                pub const m_iClip1: usize = 0x1928; // int32
                pub const m_iClip2: usize = 0x192C; // int32
                pub const m_pReserveAmmo: usize = 0x1930; // int32[2]
            }
            // Parent: C_BaseEntity
            // Field count: 1
            pub mod CRagdollManager {
                pub const m_iCurrentMaxRagdollCount: usize = 0x600; // int8
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            pub mod CSoundOpvarSetBoxEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod C_HEGrenade {
            }
            // Parent: None
            // Field count: 4
            pub mod C_GameRules {
                pub const __m_pChainEntity: usize = 0x8; // CNetworkVarChainer
                pub const m_nTotalPausedTicks: usize = 0x30; // int32
                pub const m_nPauseStartTick: usize = 0x34; // int32
                pub const m_bGamePaused: usize = 0x38; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponMAC10 {
            }
            // Parent: C_BaseEntity
            // Field count: 14
            pub mod C_CSGO_MapPreviewCameraPath {
                pub const m_flZFar: usize = 0x600; // float32
                pub const m_flZNear: usize = 0x604; // float32
                pub const m_bLoop: usize = 0x608; // bool
                pub const m_bVerticalFOV: usize = 0x609; // bool
                pub const m_bConstantSpeed: usize = 0x60A; // bool
                pub const m_flDuration: usize = 0x60C; // float32
                pub const m_flPathLength: usize = 0x650; // float32
                pub const m_flPathDuration: usize = 0x654; // float32
                pub const m_bDofEnabled: usize = 0x66C; // bool
                pub const m_flDofNearBlurry: usize = 0x670; // float32
                pub const m_flDofNearCrisp: usize = 0x674; // float32
                pub const m_flDofFarCrisp: usize = 0x678; // float32
                pub const m_flDofFarBlurry: usize = 0x67C; // float32
                pub const m_flDofTiltToGround: usize = 0x680; // float32
            }
            // Parent: C_BaseModelEntity
            // Field count: 19
            pub mod C_PointWorldText {
                pub const m_bForceRecreateNextUpdate: usize = 0x10A0; // bool
                pub const m_nTextWidthPx: usize = 0x10B8; // int32
                pub const m_nTextHeightPx: usize = 0x10BC; // int32
                pub const m_messageText: usize = 0x10C0; // char[512]
                pub const m_FontName: usize = 0x12C0; // char[64]
                pub const m_BackgroundMaterialName: usize = 0x1300; // char[64]
                pub const m_bEnabled: usize = 0x1340; // bool
                pub const m_bFullbright: usize = 0x1341; // bool
                pub const m_flWorldUnitsPerPx: usize = 0x1344; // float32
                pub const m_flFontSize: usize = 0x1348; // float32
                pub const m_flDepthOffset: usize = 0x134C; // float32
                pub const m_bDrawBackground: usize = 0x1350; // bool
                pub const m_flBackgroundBorderWidth: usize = 0x1354; // float32
                pub const m_flBackgroundBorderHeight: usize = 0x1358; // float32
                pub const m_flBackgroundWorldToUV: usize = 0x135C; // float32
                pub const m_Color: usize = 0x1360; // Color
                pub const m_nJustifyHorizontal: usize = 0x1364; // PointWorldTextJustifyHorizontal_t
                pub const m_nJustifyVertical: usize = 0x1368; // PointWorldTextJustifyVertical_t
                pub const m_nReorientMode: usize = 0x136C; // PointWorldTextReorientMode_t
            }
            // Parent: None
            // Field count: 40
            pub mod C_RopeKeyframe {
                pub const m_LinksTouchingSomething: usize = 0x10A0; // CBitVec<10>
                pub const m_nLinksTouchingSomething: usize = 0x10A4; // int32
                pub const m_bApplyWind: usize = 0x10A8; // bool
                pub const m_fPrevLockedPoints: usize = 0x10AC; // int32
                pub const m_iForcePointMoveCounter: usize = 0x10B0; // int32
                pub const m_bPrevEndPointPos: usize = 0x10B4; // bool[2]
                pub const m_vPrevEndPointPos: usize = 0x10B8; // VectorWS[2]
                pub const m_flCurScroll: usize = 0x10D0; // float32
                pub const m_flScrollSpeed: usize = 0x10D4; // float32
                pub const m_RopeFlags: usize = 0x10D8; // uint16
                pub const m_iRopeMaterialModelIndex: usize = 0x10E0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nSegments: usize = 0x1358; // uint8
                pub const m_hStartPoint: usize = 0x135C; // CHandle<C_BaseEntity>
                pub const m_hEndPoint: usize = 0x1360; // CHandle<C_BaseEntity>
                pub const m_iStartAttachment: usize = 0x1364; // AttachmentHandle_t
                pub const m_iEndAttachment: usize = 0x1365; // AttachmentHandle_t
                pub const m_Subdiv: usize = 0x1366; // uint8
                pub const m_RopeLength: usize = 0x1368; // int16
                pub const m_Slack: usize = 0x136A; // int16
                pub const m_TextureScale: usize = 0x136C; // float32
                pub const m_fLockedPoints: usize = 0x1370; // uint8
                pub const m_nChangeCount: usize = 0x1371; // uint8
                pub const m_Width: usize = 0x1374; // float32
                pub const m_PhysicsDelegate: usize = 0x1378; // C_RopeKeyframe::CPhysicsDelegate
                pub const m_hMaterial: usize = 0x1388; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_TextureHeight: usize = 0x1390; // int32
                pub const m_vecImpulse: usize = 0x1394; // Vector
                pub const m_vecPreviousImpulse: usize = 0x13A0; // Vector
                pub const m_flCurrentGustTimer: usize = 0x13AC; // float32
                pub const m_flCurrentGustLifetime: usize = 0x13B0; // float32
                pub const m_flTimeToNextGust: usize = 0x13B4; // float32
                pub const m_vWindDir: usize = 0x13B8; // Vector
                pub const m_vColorMod: usize = 0x13C4; // Vector
                pub const m_vCachedEndPointAttachmentPos: usize = 0x13D0; // VectorWS[2]
                pub const m_vCachedEndPointAttachmentAngle: usize = 0x13E8; // QAngle[2]
                pub const m_bConstrainBetweenEndpoints: usize = 0x1400; // bool
                pub const m_bEndPointAttachmentPositionsDirty: usize = 0x0; // bitfield:1
                pub const m_bEndPointAttachmentAnglesDirty: usize = 0x0; // bitfield:1
                pub const m_bNewDataThisFrame: usize = 0x0; // bitfield:1
                pub const m_bPhysicsInitted: usize = 0x0; // bitfield:1
            }
            // Parent: None
            // Field count: 0
            pub mod C_BaseToggle {
            }
            // Parent: None
            // Field count: 0
            pub mod C_EnvCubemapBox {
            }
            // Parent: None
            // Field count: 0
            pub mod C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume {
            }
            // Parent: None
            // Field count: 1
            pub mod C_RopeKeyframe__CPhysicsDelegate {
                pub const m_pKeyframe: usize = 0x8; // C_RopeKeyframe*
            }
            // Parent: C_PointEntity
            // Field count: 5
            pub mod CInfoDynamicShadowHint {
                pub const m_bDisabled: usize = 0x600; // bool
                pub const m_flRange: usize = 0x604; // float32
                pub const m_nImportance: usize = 0x608; // int32
                pub const m_nLightChoice: usize = 0x60C; // int32
                pub const m_hLight: usize = 0x610; // CHandle<C_BaseEntity>
            }
            // Parent: C_PointEntity
            // Field count: 6
            pub mod CPathNode {
                pub const m_vInTangentLocal: usize = 0x600; // Vector
                pub const m_vOutTangentLocal: usize = 0x60C; // Vector
                pub const m_strParentPathUniqueID: usize = 0x618; // CUtlString
                pub const m_strPathNodeParameter: usize = 0x620; // CUtlString
                pub const m_xWSPrevParent: usize = 0x630; // CTransformWS
                pub const m_hPath: usize = 0x650; // CHandle<CPathWithDynamicNodes>
            }
            // Parent: None
            // Field count: 0
            pub mod C_FuncMoveLinear {
            }
            // Parent: C_BaseEntity
            // Field count: 6
            pub mod C_EnvShakeVolume {
                pub const m_vBoxMins: usize = 0x618; // Vector
                pub const m_vBoxMaxs: usize = 0x624; // Vector
                pub const m_flAmplitude: usize = 0x630; // float32
                pub const m_flFrequency: usize = 0x634; // float32
                pub const m_flFalloffDistance: usize = 0x638; // float32
                pub const m_flRollScale: usize = 0x63C; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CServerOnlyModelEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamSelectCamera {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponXM1014 {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WorldModelGloves {
            }
            // Parent: None
            // Field count: 0
            pub mod C_PhysicsPropMultiplayer {
            }
            // Parent: C_SoundEventEntity
            // Field count: 2
            pub mod C_SoundEventOBBEntity {
                pub const m_vMins: usize = 0x6C0; // Vector
                pub const m_vMaxs: usize = 0x6CC; // Vector
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponAug {
            }
            // Parent: None
            // Field count: 8
            pub mod C_BasePropDoor {
                pub const m_eDoorState: usize = 0x14C0; // DoorState_t
                pub const m_modelChanged: usize = 0x14C4; // bool
                pub const m_bLocked: usize = 0x14C5; // bool
                pub const m_bNoNPCs: usize = 0x14C6; // bool
                pub const m_closedPosition: usize = 0x14C8; // VectorWS
                pub const m_closedAngles: usize = 0x14D4; // QAngle
                pub const m_hMaster: usize = 0x14E0; // CHandle<C_BasePropDoor>
                pub const m_vWhereToSetLightingOrigin: usize = 0x14E4; // VectorWS
            }
            // Parent: None
            // Field count: 0
            pub mod CChoreoInfoTarget {
            }
            // Parent: None
            // Field count: 0
            pub mod C_Item_Healthshot {
            }
            // Parent: C_BaseEntity
            // Field count: 7
            pub mod CCSCustomHudLayout {
                pub const m_strLayout: usize = 0x618; // CUtlSymbolLarge
                pub const m_bObservable: usize = 0x620; // bool
                pub const m_vecPlayerLayoutStates: usize = 0x628; // C_UtlVectorEmbeddedNetworkVar<CCSCustomHudLayoutState>
                pub const m_globalLayoutState: usize = 0x690; // CCSCustomHudLayoutState
                pub const m_vecPanelIds: usize = 0x798; // C_NetworkUtlVectorBase<CUtlString>
                pub const m_vecClassNames: usize = 0x7B0; // C_NetworkUtlVectorBase<CUtlString>
                pub const m_vecDialogVariableNames: usize = 0x7C8; // C_NetworkUtlVectorBase<CUtlString>
            }
            // Parent: None
            // Field count: 3
            pub mod CEntityInstance {
                pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
                pub const m_pEntity: usize = 0x10; // CEntityIdentity*
                pub const m_CScriptComponent: usize = 0x28; // CScriptComponent*
            }
            // Parent: C_BaseEntity
            // Field count: 47
            pub mod C_BaseModelEntity {
                pub const m_CRenderComponent: usize = 0xAF8; // CRenderComponent*
                pub const m_CHitboxComponent: usize = 0xB00; // CHitboxComponent
                pub const m_pChoreoComponent: usize = 0xB18; // CChoreoComponent*
                pub const m_nDestructiblePartInitialStateDestructed0: usize = 0xB20; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed1: usize = 0xB24; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed2: usize = 0xB28; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed3: usize = 0xB2C; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed4: usize = 0xB30; // HitGroup_t
                pub const m_nDestructiblePartInitialStateDestructed0_PartIndex: usize = 0xB34; // int32
                pub const m_nDestructiblePartInitialStateDestructed1_PartIndex: usize = 0xB38; // int32
                pub const m_nDestructiblePartInitialStateDestructed2_PartIndex: usize = 0xB3C; // int32
                pub const m_nDestructiblePartInitialStateDestructed3_PartIndex: usize = 0xB40; // int32
                pub const m_nDestructiblePartInitialStateDestructed4_PartIndex: usize = 0xB44; // int32
                pub const m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces: usize = 0xB48; // bool
                pub const m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces: usize = 0xB49; // bool
                pub const m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces: usize = 0xB4A; // bool
                pub const m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces: usize = 0xB4B; // bool
                pub const m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces: usize = 0xB4C; // bool
                pub const m_pDestructiblePartsSystemComponent: usize = 0xB50; // CDestructiblePartsComponent*
                pub const m_bInitModelEffects: usize = 0xC78; // bool
                pub const m_bDoingModelEffects: usize = 0xC79; // bool
                pub const m_iOldHealth: usize = 0xC7C; // int32
                pub const m_nRenderMode: usize = 0xC80; // RenderMode_t
                pub const m_nRenderFX: usize = 0xC81; // RenderFx_t
                pub const m_bAllowFadeInView: usize = 0xC82; // bool
                pub const m_clrRender: usize = 0xCA0; // Color
                pub const m_vecRenderAttributes: usize = 0xCA8; // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
                pub const m_bRenderToCubemaps: usize = 0xD28; // bool
                pub const m_bExpandRenderBoundsToIncludeCloth: usize = 0xD29; // bool
                pub const m_bNoInterpolate: usize = 0xD2A; // bool
                pub const m_Collision: usize = 0xD30; // CCollisionProperty
                pub const m_Glow: usize = 0xDE8; // CGlowProperty
                pub const m_flGlowBackfaceMult: usize = 0xE40; // float32
                pub const m_fadeMinDist: usize = 0xE44; // float32
                pub const m_fadeMaxDist: usize = 0xE48; // float32
                pub const m_flFadeScale: usize = 0xE4C; // float32
                pub const m_flShadowStrength: usize = 0xE50; // float32
                pub const m_nObjectCulling: usize = 0xE54; // uint8
                pub const m_nRequiredDecalRtEncoding: usize = 0xE55; // DecalRtEncoding_t
                pub const m_bodyGroupTotalRequestCount: usize = 0xE58; // uint32
                pub const m_bodyGroupRequests: usize = 0xE60; // CUtlVectorFixedGrowable<C_BaseModelEntity::BodyGroupRequest_t,8>
                pub const m_bodyGroupChoices: usize = 0xF38; // CUtlOrderedMap<CGlobalSymbol,int32>
                pub const m_vecViewOffset: usize = 0xF60; // CNetworkViewOffsetVector
                pub const m_pClientAlphaProperty: usize = 0x1040; // CClientAlphaProperty*
                pub const m_ClientOverrideTint: usize = 0x1048; // Color
                pub const m_bUseClientOverrideTint: usize = 0x104C; // bool
                pub const m_bvDisabledHitGroups: usize = 0x1088; // uint32[1]
            }
            // Parent: None
            // Field count: 1
            pub mod CCSPlayer_BulletServices {
                pub const m_totalHitsOnServer: usize = 0x48; // int32
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            pub mod C_SoundOpvarSetAutoRoomEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGO_EndOfMatchLineupEnd {
            }
            // Parent: None
            // Field count: 0
            pub mod C_MultiplayRules {
            }
            // Parent: None
            // Field count: 0
            pub mod CPlayer_AutoaimServices {
            }
            // Parent: None
            // Field count: 0
            pub mod C_LightDirectionalEntity {
            }
            // Parent: None
            // Field count: 82
            pub mod C_BaseEntity {
                pub const m_CBodyComponent: usize = 0x30; // CBodyComponent*
                pub const m_NetworkTransmitComponent: usize = 0x38; // CNetworkTransmitComponent
                pub const m_nLastThinkTick: usize = 0x328; // GameTick_t
                pub const m_pGameSceneNode: usize = 0x330; // CGameSceneNode*
                pub const m_pRenderComponent: usize = 0x338; // CRenderComponent*
                pub const m_pCollision: usize = 0x340; // CCollisionProperty*
                pub const m_iMaxHealth: usize = 0x348; // int32
                pub const m_iHealth: usize = 0x34C; // int32
                pub const m_flDamageAccumulator: usize = 0x350; // float32
                pub const m_lifeState: usize = 0x354; // uint8
                pub const m_bTakesDamage: usize = 0x355; // bool
                pub const m_nTakeDamageFlags: usize = 0x358; // TakeDamageFlags_t
                pub const m_nPlatformType: usize = 0x360; // EntityPlatformTypes_t
                pub const m_ubInterpolationFrame: usize = 0x361; // uint8
                pub const m_hSceneObjectController: usize = 0x364; // CHandle<C_BaseEntity>
                pub const m_nNoInterpolationTick: usize = 0x368; // int32
                pub const m_nVisibilityNoInterpolationTick: usize = 0x36C; // int32
                pub const m_flProxyRandomValue: usize = 0x370; // float32
                pub const m_iEFlags: usize = 0x374; // int32
                pub const m_nWaterType: usize = 0x378; // uint8
                pub const m_bInterpolateEvenWithNoModel: usize = 0x379; // bool
                pub const m_bPredictionEligible: usize = 0x37A; // bool
                pub const m_bApplyLayerMatchIDToModel: usize = 0x37B; // bool
                pub const m_tokLayerMatchID: usize = 0x37C; // CUtlStringToken
                pub const m_nSubclassID: usize = 0x380; // CUtlStringToken
                pub const m_nSimulationTick: usize = 0x390; // int32
                pub const m_iCurrentThinkContext: usize = 0x394; // int32
                pub const m_aThinkFunctions: usize = 0x398; // CUtlVector<thinkfunc_t>
                pub const m_bDisabledContextThinks: usize = 0x3B0; // bool
                pub const m_flAnimTime: usize = 0x3B4; // float32
                pub const m_flSimulationTime: usize = 0x3B8; // float32
                pub const m_nSceneObjectOverrideFlags: usize = 0x3BC; // uint8
                pub const m_bHasSuccessfullyInterpolated: usize = 0x3BD; // bool
                pub const m_bHasAddedVarsToInterpolation: usize = 0x3BE; // bool
                pub const m_bRenderEvenWhenNotSuccessfullyInterpolated: usize = 0x3BF; // bool
                pub const m_nInterpolationLatchDirtyFlags: usize = 0x3C0; // int32[2]
                pub const m_ListEntry: usize = 0x3C8; // uint16[11]
                pub const m_flCreateTime: usize = 0x3E0; // GameTime_t
                pub const m_EntClientFlags: usize = 0x3E4; // uint16
                pub const m_bClientSideRagdoll: usize = 0x3E6; // bool
                pub const m_iTeamNum: usize = 0x3E7; // uint8
                pub const m_spawnflags: usize = 0x3E8; // uint32
                pub const m_nNextThinkTick: usize = 0x3EC; // GameTick_t
                pub const m_fFlags: usize = 0x3F4; // uint32
                pub const m_vecAbsVelocity: usize = 0x3F8; // Vector
                pub const m_vecServerVelocity: usize = 0x404; // CNetworkVelocityVector
                pub const m_vecVelocity: usize = 0x430; // CNetworkVelocityVector
                pub const m_vecBaseVelocity: usize = 0x510; // Vector
                pub const m_hEffectEntity: usize = 0x51C; // CHandle<C_BaseEntity>
                pub const m_hOwnerEntity: usize = 0x520; // CHandle<C_BaseEntity>
                pub const m_MoveCollide: usize = 0x524; // MoveCollide_t
                pub const m_MoveType: usize = 0x525; // MoveType_t
                pub const m_nActualMoveType: usize = 0x526; // MoveType_t
                pub const m_flWaterLevel: usize = 0x528; // float32
                pub const m_fEffects: usize = 0x52C; // uint32
                pub const m_hGroundEntity: usize = 0x530; // CHandle<C_BaseEntity>
                pub const m_nGroundBodyIndex: usize = 0x534; // int32
                pub const m_flFriction: usize = 0x538; // float32
                pub const m_flElasticity: usize = 0x53C; // float32
                pub const m_flGravityScale: usize = 0x540; // float32
                pub const m_flTimeScale: usize = 0x544; // float32
                pub const m_bAnimatedEveryTick: usize = 0x548; // bool
                pub const m_bGravityDisabled: usize = 0x549; // bool
                pub const m_flNavIgnoreUntilTime: usize = 0x54C; // GameTime_t
                pub const m_hThink: usize = 0x550; // uint16
                pub const m_fBBoxVisFlags: usize = 0x560; // uint8
                pub const m_flActualGravityScale: usize = 0x564; // float32
                pub const m_bGravityActuallyDisabled: usize = 0x568; // bool
                pub const m_bPredictable: usize = 0x569; // bool
                pub const m_bRenderWithViewModels: usize = 0x56A; // bool
                pub const m_nFirstPredictableCommand: usize = 0x56C; // int32
                pub const m_nLastPredictableCommand: usize = 0x570; // int32
                pub const m_hOldMoveParent: usize = 0x574; // CHandle<C_BaseEntity>
                pub const m_Particles: usize = 0x578; // CParticleProperty
                pub const m_vecAngVelocity: usize = 0x5A8; // QAngle
                pub const m_DataChangeEventRef: usize = 0x5B4; // int32
                pub const m_dependencies: usize = 0x5B8; // CUtlVector<CEntityHandle>
                pub const m_nCreationTick: usize = 0x5D0; // int32
                pub const m_bAnimTimeChanged: usize = 0x5E1; // bool
                pub const m_bSimulationTimeChanged: usize = 0x5E2; // bool
                pub const m_sUniqueHammerID: usize = 0x5F0; // CUtlString
                pub const m_nBloodType: usize = 0x5F8; // BloodType
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponSSG08 {
            }
            // Parent: None
            // Field count: 7
            pub mod C_Chicken {
                pub const m_leader: usize = 0x14C0; // CHandle<C_CSPlayerPawn>
                pub const m_owner: usize = 0x14C4; // CHandle<CCSPlayerController>
                pub const m_AttributeManager: usize = 0x14C8; // C_AttributeContainer
                pub const m_bAttributesInitialized: usize = 0x1AD8; // bool
                pub const m_hWaterWakeParticles: usize = 0x1ADC; // ParticleIndex_t
                pub const m_bIsPreviewModel: usize = 0x1AE0; // bool
                pub const m_bSpawnDyingParticles: usize = 0x1B68; // bool
            }
            // Parent: CBaseAnimGraph
            // Field count: 28
            pub mod C_BasePlayerPawn {
                pub const m_pWeaponServices: usize = 0x12F0; // CPlayer_WeaponServices*
                pub const m_pItemServices: usize = 0x12F8; // CPlayer_ItemServices*
                pub const m_pAutoaimServices: usize = 0x1300; // CPlayer_AutoaimServices*
                pub const m_pObserverServices: usize = 0x1308; // CPlayer_ObserverServices*
                pub const m_pWaterServices: usize = 0x1310; // CPlayer_WaterServices*
                pub const m_pUseServices: usize = 0x1318; // CPlayer_UseServices*
                pub const m_pFlashlightServices: usize = 0x1320; // CPlayer_FlashlightServices*
                pub const m_pCameraServices: usize = 0x1328; // CPlayer_CameraServices*
                pub const m_pMovementServices: usize = 0x1330; // CPlayer_MovementServices*
                pub const m_ServerViewAngleChanges: usize = 0x1340; // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
                pub const v_angle: usize = 0x13A8; // QAngle
                pub const v_anglePrevious: usize = 0x13B4; // QAngle
                pub const m_iHideHUD: usize = 0x13C0; // uint32
                pub const m_skybox3d: usize = 0x13C8; // sky3dparams_t
                pub const m_flDeathTime: usize = 0x1458; // GameTime_t
                pub const m_vecPredictionError: usize = 0x1460; // Vector
                pub const m_flPredictionErrorTime: usize = 0x146C; // GameTime_t
                pub const m_vecLastCameraSetupLocalOrigin: usize = 0x148C; // Vector
                pub const m_flLastCameraSetupTime: usize = 0x1498; // GameTime_t
                pub const m_flFOVSensitivityAdjust: usize = 0x149C; // float32
                pub const m_flMouseSensitivity: usize = 0x14A0; // float32
                pub const m_vOldOrigin: usize = 0x14A4; // Vector
                pub const m_flOldSimulationTime: usize = 0x14B0; // float32
                pub const m_nLastExecutedCommandNumber: usize = 0x14B4; // int32
                pub const m_nLastExecutedCommandTick: usize = 0x14B8; // int32
                pub const m_hController: usize = 0x14BC; // CHandle<CBasePlayerController>
                pub const m_hDefaultController: usize = 0x14C0; // CHandle<CBasePlayerController>
                pub const m_bIsSwappingToPredictableController: usize = 0x14C4; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_SoundOpvarSetAABBEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponBizon {
            }
            // Parent: None
            // Field count: 1
            pub mod C_StattrakModule {
                pub const m_bKnife: usize = 0x1270; // bool
            }
            // Parent: None
            // Field count: 1
            pub mod CCSObserver_CameraServices {
                pub const m_hPrevPostProcessingVolume: usize = 0x2B0; // CHandle<C_PostProcessingVolume>
            }
            // Parent: CEnvSoundscape
            // Field count: 1
            pub mod CEnvSoundscapeProxy {
                pub const m_MainSoundscapeName: usize = 0x690; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 15
            pub mod C_SoundEventEntity {
                pub const m_bStartOnSpawn: usize = 0x600; // bool
                pub const m_bToLocalPlayer: usize = 0x601; // bool
                pub const m_bStopOnNew: usize = 0x602; // bool
                pub const m_bSaveRestore: usize = 0x603; // bool
                pub const m_bSavedIsPlaying: usize = 0x604; // bool
                pub const m_flSavedElapsedTime: usize = 0x608; // float32
                pub const m_iszSourceEntityName: usize = 0x610; // CUtlSymbolLarge
                pub const m_iszAttachmentName: usize = 0x618; // CUtlSymbolLarge
                pub const m_onGUIDChanged: usize = 0x620; // CEntityOutputTemplate<SndOpEventGuid_t>
                pub const m_onSoundFinished: usize = 0x650; // CEntityIOOutput
                pub const m_flClientCullRadius: usize = 0x668; // float32
                pub const m_iszSoundName: usize = 0x698; // CUtlSymbolLarge
                pub const m_hSource: usize = 0x6B4; // CEntityHandle
                pub const m_nEntityIndexSelection: usize = 0x6B8; // int32
                pub const m_bClientSideOnly: usize = 0x0; // bitfield:1
            }
            // Parent: None
            // Field count: 0
            pub mod C_LightOrthoEntity {
            }
            // Parent: C_BaseTrigger
            // Field count: 1
            pub mod CBombTarget {
                pub const m_bBombPlantedHere: usize = 0x1180; // bool
            }
            // Parent: None
            // Field count: 1
            pub mod C_Knife {
                pub const m_bFirstAttack: usize = 0x1F20; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TerroristWingmanIntroCamera {
            }
            // Parent: None
            // Field count: 0
            pub mod CEntityComponent {
            }
            // Parent: None
            // Field count: 2
            pub mod C_ItemDogtags {
                pub const m_OwningPlayer: usize = 0x1A18; // CHandle<C_CSPlayerPawn>
                pub const m_KillingPlayer: usize = 0x1A1C; // CHandle<C_CSPlayerPawn>
            }
            // Parent: None
            // Field count: 0
            pub mod C_LateUpdatedAnimating {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamPreviewCameraBone {
            }
            // Parent: C_BaseModelEntity
            // Field count: 4
            pub mod C_BaseClientUIEntity {
                pub const m_bEnabled: usize = 0x10A0; // bool
                pub const m_DialogXMLName: usize = 0x10A8; // CUtlSymbolLarge
                pub const m_PanelClassName: usize = 0x10B0; // CUtlSymbolLarge
                pub const m_PanelID: usize = 0x10B8; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponUSPSilencer {
            }
            // Parent: None
            // Field count: 1
            pub mod C_MolotovProjectile {
                pub const m_bIsIncGrenade: usize = 0x1348; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_TriggerLerpObject {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponRevolver {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponElite {
            }
            // Parent: None
            // Field count: 0
            pub mod C_DynamicPropAlias_cable_dynamic {
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            pub mod CBaseProp {
                pub const m_bModelOverrodeBlockLOS: usize = 0x1268; // bool
                pub const m_iShapeType: usize = 0x126C; // int32
                pub const m_bConformToCollisionBounds: usize = 0x1270; // bool
                pub const m_mPreferredCatchTransform: usize = 0x1280; // CTransform
            }
            // Parent: None
            // Field count: 6
            pub mod CAttributeManager {
                pub const m_Providers: usize = 0x8; // CUtlVector<CHandle<C_BaseEntity>>
                pub const m_iReapplyProvisionParity: usize = 0x20; // int32
                pub const m_hOuter: usize = 0x24; // CHandle<C_BaseEntity>
                pub const m_bPreventLoopback: usize = 0x28; // bool
                pub const m_ProviderType: usize = 0x2C; // attributeprovidertypes_t
                pub const m_CachedResults: usize = 0x30; // CUtlVector<CAttributeManager::cached_attribute_float_t>
            }
            // Parent: None
            // Field count: 0
            pub mod SignatureOutflow_Continue {
            }
            // Parent: CPlayerPawnComponent
            // Field count: 20
            pub mod CPlayer_CameraServices {
                pub const m_vecCsViewPunchAngle: usize = 0x48; // QAngle
                pub const m_nCsViewPunchAngleTick: usize = 0x54; // GameTick_t
                pub const m_flCsViewPunchAngleTickRatio: usize = 0x58; // float32
                pub const m_PlayerFog: usize = 0x60; // C_fogplayerparams_t
                pub const m_hColorCorrectionCtrl: usize = 0xA0; // CHandle<C_ColorCorrection>
                pub const m_hViewEntity: usize = 0xA4; // CHandle<C_BaseEntity>
                pub const m_hTonemapController: usize = 0xA8; // CHandle<C_TonemapController2>
                pub const m_audio: usize = 0xB0; // audioparams_t
                pub const m_PostProcessingVolumes: usize = 0x128; // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
                pub const m_flOldPlayerZ: usize = 0x140; // float32
                pub const m_flOldPlayerViewOffsetZ: usize = 0x144; // float32
                pub const m_CurrentFog: usize = 0x148; // fogparams_t
                pub const m_hOldFogController: usize = 0x1B0; // CHandle<C_FogController>
                pub const m_bOverrideFogColor: usize = 0x1B4; // bool[5]
                pub const m_OverrideFogColor: usize = 0x1BC; // Color[5]
                pub const m_bOverrideFogStartEnd: usize = 0x1D0; // bool[5]
                pub const m_fOverrideFogStart: usize = 0x1D8; // float32[5]
                pub const m_fOverrideFogEnd: usize = 0x1EC; // float32[5]
                pub const m_hActivePostProcessingVolume: usize = 0x200; // CHandle<C_PostProcessingVolume>
                pub const m_angDemoViewAngles: usize = 0x208; // QAngle
            }
            // Parent: None
            // Field count: 14
            pub mod C_BaseCSGrenade {
                pub const m_bClientPredictDelete: usize = 0x1F20; // bool
                pub const m_bRedraw: usize = 0x1F21; // bool
                pub const m_bIsHeldByPlayer: usize = 0x1F22; // bool
                pub const m_bPinPulled: usize = 0x1F23; // bool
                pub const m_bJumpThrow: usize = 0x1F24; // bool
                pub const m_bThrowAnimating: usize = 0x1F25; // bool
                pub const m_fThrowTime: usize = 0x1F28; // GameTime_t
                pub const m_flThrowStrength: usize = 0x1F30; // float32
                pub const m_fDropTime: usize = 0x1FA8; // GameTime_t
                pub const m_fPinPullTime: usize = 0x1FAC; // GameTime_t
                pub const m_bJustPulledPin: usize = 0x1FB0; // bool
                pub const m_nNextHoldTick: usize = 0x1FB4; // GameTick_t
                pub const m_flNextHoldFrac: usize = 0x1FB8; // float32
                pub const m_hSwitchToWeaponAfterThrow: usize = 0x1FBC; // CHandle<C_CSWeaponBase>
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterAttributeInt {
                pub const m_sAttributeName: usize = 0x638; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 12
            pub mod CPointTemplate {
                pub const m_iszWorldName: usize = 0x600; // CUtlSymbolLarge
                pub const m_iszSource2EntityLumpName: usize = 0x608; // CUtlSymbolLarge
                pub const m_iszEntityFilterName: usize = 0x610; // CUtlSymbolLarge
                pub const m_flTimeoutInterval: usize = 0x618; // float32
                pub const m_bAsynchronouslySpawnEntities: usize = 0x61C; // bool
                pub const m_clientOnlyEntityBehavior: usize = 0x620; // PointTemplateClientOnlyEntityBehavior_t
                pub const m_ownerSpawnGroupType: usize = 0x624; // PointTemplateOwnerSpawnGroupType_t
                pub const m_createdSpawnGroupHandles: usize = 0x628; // CUtlVector<uint32>
                pub const m_SpawnedEntityHandles: usize = 0x640; // CUtlVector<CEntityHandle>
                pub const m_ScriptSpawnCallback: usize = 0x658; // HSCRIPT
                pub const m_ScriptCallbackScope: usize = 0x660; // HSCRIPT
                pub const m_OnEntitySpawned: usize = 0x668; // CEntityOutputTemplate<CUtlVector<CEntityHandle>>
            }
            // Parent: None
            // Field count: 0
            pub mod CPlayer_FlashlightServices {
            }
            // Parent: CBasePlayerController
            // Field count: 70
            pub mod CCSPlayerController {
                pub const m_pInGameMoneyServices: usize = 0x818; // CCSPlayerController_InGameMoneyServices*
                pub const m_pInventoryServices: usize = 0x820; // CCSPlayerController_InventoryServices*
                pub const m_pActionTrackingServices: usize = 0x828; // CCSPlayerController_ActionTrackingServices*
                pub const m_pDamageServices: usize = 0x830; // CCSPlayerController_DamageServices*
                pub const m_iPing: usize = 0x838; // uint32
                pub const m_bHasCommunicationAbuseMute: usize = 0x83C; // bool
                pub const m_uiCommunicationMuteFlags: usize = 0x840; // uint32
                pub const m_szCrosshairCodes: usize = 0x848; // CUtlSymbolLarge
                pub const m_iPendingTeamNum: usize = 0x850; // uint8
                pub const m_flForceTeamTime: usize = 0x854; // GameTime_t
                pub const m_iCompTeammateColor: usize = 0x858; // int32
                pub const m_bEverPlayedOnTeam: usize = 0x85C; // bool
                pub const m_flPreviousForceJoinTeamTime: usize = 0x860; // GameTime_t
                pub const m_szClan: usize = 0x868; // CUtlSymbolLarge
                pub const m_unClanId32bit: usize = 0x870; // uint32
                pub const m_sSanitizedPlayerName: usize = 0x878; // CUtlString
                pub const m_sSanitizedClanTag: usize = 0x880; // CUtlString
                pub const m_iCoachingTeam: usize = 0x888; // int32
                pub const m_nPlayerDominated: usize = 0x890; // uint64
                pub const m_nPlayerDominatingMe: usize = 0x898; // uint64
                pub const m_iCompetitiveRanking: usize = 0x8A0; // int32
                pub const m_iCompetitiveWins: usize = 0x8A4; // int32
                pub const m_iCompetitiveRankType: usize = 0x8A8; // int8
                pub const m_iCompetitiveRankingPredicted_Win: usize = 0x8AC; // int32
                pub const m_iCompetitiveRankingPredicted_Loss: usize = 0x8B0; // int32
                pub const m_iCompetitiveRankingPredicted_Tie: usize = 0x8B4; // int32
                pub const m_nEndMatchNextMapVote: usize = 0x8B8; // int32
                pub const m_unActiveQuestId: usize = 0x8BC; // uint16
                pub const m_rtActiveMissionPeriod: usize = 0x8C0; // uint32
                pub const m_nQuestProgressReason: usize = 0x8C4; // QuestProgress::Reason
                pub const m_unPlayerTvControlFlags: usize = 0x8C8; // uint32
                pub const m_iDraftIndex: usize = 0x8F8; // int32
                pub const m_msQueuedModeDisconnectionTimestamp: usize = 0x8FC; // uint32
                pub const m_uiAbandonRecordedReason: usize = 0x900; // uint32
                pub const m_eNetworkDisconnectionReason: usize = 0x904; // uint32
                pub const m_bCannotBeKicked: usize = 0x908; // bool
                pub const m_bEverFullyConnected: usize = 0x909; // bool
                pub const m_bAbandonAllowsSurrender: usize = 0x90A; // bool
                pub const m_bAbandonOffersInstantSurrender: usize = 0x90B; // bool
                pub const m_bDisconnection1MinWarningPrinted: usize = 0x90C; // bool
                pub const m_bScoreReported: usize = 0x90D; // bool
                pub const m_nDisconnectionTick: usize = 0x910; // int32
                pub const m_bControllingBot: usize = 0x920; // bool
                pub const m_bHasControlledBotThisRound: usize = 0x921; // bool
                pub const m_bHasBeenControlledByPlayerThisRound: usize = 0x922; // bool
                pub const m_nBotsControlledThisRound: usize = 0x924; // int32
                pub const m_bCanControlObservedBot: usize = 0x928; // bool
                pub const m_hPlayerPawn: usize = 0x92C; // CHandle<C_CSPlayerPawn>
                pub const m_hObserverPawn: usize = 0x930; // CHandle<C_CSObserverPawn>
                pub const m_bPawnIsAlive: usize = 0x934; // bool
                pub const m_iPawnHealth: usize = 0x938; // uint32
                pub const m_iPawnArmor: usize = 0x93C; // int32
                pub const m_bPawnHasDefuser: usize = 0x940; // bool
                pub const m_bPawnHasHelmet: usize = 0x941; // bool
                pub const m_nPawnCharacterDefIndex: usize = 0x942; // uint16
                pub const m_iPawnLifetimeStart: usize = 0x944; // int32
                pub const m_iPawnLifetimeEnd: usize = 0x948; // int32
                pub const m_iPawnBotDifficulty: usize = 0x94C; // int32
                pub const m_hOriginalControllerOfCurrentPawn: usize = 0x950; // CHandle<CCSPlayerController>
                pub const m_iScore: usize = 0x954; // int32
                pub const m_recentKillQueue: usize = 0x958; // uint8[8]
                pub const m_nFirstKill: usize = 0x960; // uint8
                pub const m_nKillCount: usize = 0x961; // uint8
                pub const m_bMvpNoMusic: usize = 0x962; // bool
                pub const m_eMvpReason: usize = 0x964; // int32
                pub const m_iMusicKitID: usize = 0x968; // int32
                pub const m_iMusicKitMVPs: usize = 0x96C; // int32
                pub const m_iMVPs: usize = 0x970; // int32
                pub const m_bIsPlayerNameDirty: usize = 0x974; // bool
                pub const m_bFireBulletsSeedSynchronized: usize = 0x97C; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_CounterTerroristRushIntroCamera {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamIntroCounterTerroristPosition {
            }
            // Parent: CBaseAnimGraph
            // Field count: 4
            pub mod C_CSGO_PreviewModel {
                pub const m_defaultAnim: usize = 0x1268; // CUtlString
                pub const m_nDefaultAnimLoopMode: usize = 0x1270; // AnimLoopMode_t
                pub const m_flInitialModelScale: usize = 0x1274; // float32
                pub const m_sInitialWeaponState: usize = 0x1278; // CUtlString
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamSelectCharacterPosition {
            }
            // Parent: C_BaseEntity
            // Field count: 4
            pub mod CCSObservableElement {
                pub const m_iszObservableModelEntity: usize = 0x618; // CUtlSymbolLarge
                pub const m_hObservableModelEntity: usize = 0x620; // CHandle<C_BaseEntity>
                pub const m_hObservableModelEntity2: usize = 0x624; // CHandle<C_BaseEntity>
                pub const m_nTeamFilter: usize = 0x628; // uint32
            }
            // Parent: C_SoundEventEntity
            // Field count: 2
            pub mod C_SoundEventAABBEntity {
                pub const m_vMins: usize = 0x6C0; // Vector
                pub const m_vMaxs: usize = 0x6CC; // Vector
            }
            // Parent: None
            // Field count: 49
            pub mod CCSPlayer_MovementServices {
                pub const m_AnimationState: usize = 0x310; // CCSPlayerAnimationState
                pub const m_bUsingGroundTopologyOffset: usize = 0x3F0; // bool
                pub const m_flUsingGroundTopologyOffsetTransitionSmoothing: usize = 0x3F4; // float32
                pub const m_vecLadderNormal: usize = 0x3F8; // Vector
                pub const m_nLadderSurfacePropIndex: usize = 0x404; // int32
                pub const m_bDucked: usize = 0x408; // bool
                pub const m_flDuckAmount: usize = 0x40C; // float32
                pub const m_flDuckSpeed: usize = 0x410; // float32
                pub const m_bDuckOverride: usize = 0x414; // bool
                pub const m_bDesiresDuck: usize = 0x415; // bool
                pub const m_bDucking: usize = 0x416; // bool
                pub const m_flDuckRootOffset: usize = 0x418; // float32
                pub const m_flDuckViewOffset: usize = 0x41C; // float32
                pub const m_flLastDuckTime: usize = 0x420; // float32
                pub const m_flBombPlantViewOffset: usize = 0x424; // float32
                pub const m_vecLastPositionAtFullCrouchSpeed: usize = 0x430; // Vector2D
                pub const m_duckUntilOnGround: usize = 0x438; // bool
                pub const m_bHasWalkMovedSinceLastJump: usize = 0x439; // bool
                pub const m_bInStuckTest: usize = 0x43A; // bool
                pub const m_nTraceCount: usize = 0x648; // int32
                pub const m_StuckLast: usize = 0x64C; // int32
                pub const m_bSpeedCropped: usize = 0x650; // bool
                pub const m_nOldWaterLevel: usize = 0x654; // int32
                pub const m_flWaterEntryTime: usize = 0x658; // float32
                pub const m_vecForward: usize = 0x65C; // Vector
                pub const m_vecLeft: usize = 0x668; // Vector
                pub const m_vecUp: usize = 0x674; // Vector
                pub const m_nGameCodeHasMovedPlayerAfterCommand: usize = 0x680; // int32
                pub const m_fStashGrenadeParameterWhen: usize = 0x684; // GameTime_t
                pub const m_bUseFrictionStashedSpeed: usize = 0x688; // bool
                pub const m_flUseFrictionStashedSpeedUntilFrac: usize = 0x68C; // float32
                pub const m_flFrictionStashedSpeed: usize = 0x690; // float32
                pub const m_flStamina: usize = 0x694; // float32
                pub const m_flHeightAtJumpStart: usize = 0x698; // float32
                pub const m_flMaxJumpHeightThisJump: usize = 0x69C; // float32
                pub const m_flMaxJumpHeightLastJump: usize = 0x6A0; // float32
                pub const m_flStaminaAtJumpStart: usize = 0x6A4; // float32
                pub const m_flVelMulAtJumpStart: usize = 0x6A8; // float32
                pub const m_flAccumulatedJumpError: usize = 0x6AC; // float32
                pub const m_LegacyJump: usize = 0x6B0; // CCSPlayerLegacyJump
                pub const m_ModernJump: usize = 0x6C8; // CCSPlayerModernJump
                pub const m_nLastJumpTick: usize = 0x700; // GameTick_t
                pub const m_flLastJumpFrac: usize = 0x704; // float32
                pub const m_flLastJumpVelocityZ: usize = 0x708; // float32
                pub const m_bJumpApexPending: usize = 0x70C; // bool
                pub const m_flTicksSinceLastSurfingDetected: usize = 0x710; // float32
                pub const m_bWasSurfing: usize = 0x714; // bool
                pub const m_vecWalkWishVel: usize = 0x7A4; // Vector2D
                pub const m_bHasEverProcessedCommand: usize = 0xFD0; // bool
            }
            // Parent: None
            // Field count: 5
            pub mod SellbackPurchaseEntry_t {
                pub const m_unDefIdx: usize = 0x30; // uint16
                pub const m_nCost: usize = 0x34; // int32
                pub const m_nPrevArmor: usize = 0x38; // int32
                pub const m_bPrevHelmet: usize = 0x3C; // bool
                pub const m_hItem: usize = 0x40; // CEntityHandle
            }
            // Parent: None
            // Field count: 0
            pub mod C_TintController {
            }
            // Parent: None
            // Field count: 2
            pub mod C_WeaponBaseItem {
                pub const m_bSequenceInProgress: usize = 0x1F20; // bool
                pub const m_bRedraw: usize = 0x1F21; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CWaterSplasher {
            }
            // Parent: None
            // Field count: 0
            pub mod C_FuncBrush {
            }
            // Parent: None
            // Field count: 1
            pub mod C_WeaponCZ75a {
                pub const m_bMagazineRemoved: usize = 0x1F50; // bool
            }
            // Parent: None
            // Field count: 7
            pub mod C_DynamicLight {
                pub const m_Flags: usize = 0x1098; // uint8
                pub const m_LightStyle: usize = 0x1099; // uint8
                pub const m_Radius: usize = 0x109C; // float32
                pub const m_Exponent: usize = 0x10A0; // int32
                pub const m_InnerAngle: usize = 0x10A4; // float32
                pub const m_OuterAngle: usize = 0x10A8; // float32
                pub const m_SpotRadius: usize = 0x10AC; // float32
            }
            // Parent: C_SoundEventEntity
            // Field count: 1
            pub mod C_SoundEventSphereEntity {
                pub const m_flRadius: usize = 0x6C0; // float32
            }
            // Parent: None
            // Field count: 2
            pub mod CCSPlayerController_DamageServices {
                pub const m_nSendUpdate: usize = 0x40; // int32
                pub const m_DamageList: usize = 0x48; // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TeamPreviewModel {
            }
            // Parent: None
            // Field count: 0
            pub mod C_TonemapController2Alias_env_tonemap_controller2 {
            }
            // Parent: None
            // Field count: 24
            pub mod C_Inferno {
                pub const m_nfxFireDamageEffect: usize = 0x10D8; // ParticleIndex_t
                pub const m_hInfernoPointsSnapshot: usize = 0x10E0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_hInfernoFillerPointsSnapshot: usize = 0x10E8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_hInfernoOutlinePointsSnapshot: usize = 0x10F0; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_hInfernoClimbingOutlinePointsSnapshot: usize = 0x10F8; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_hInfernoDecalsSnapshot: usize = 0x1100; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_firePositions: usize = 0x1108; // VectorWS[64]
                pub const m_fireParentPositions: usize = 0x1408; // VectorWS[64]
                pub const m_bFireIsBurning: usize = 0x1708; // bool[64]
                pub const m_BurnNormal: usize = 0x1748; // Vector[64]
                pub const m_fireCount: usize = 0x1A48; // int32
                pub const m_nInfernoType: usize = 0x1A4C; // int32
                pub const m_nFireLifetime: usize = 0x1A50; // float32
                pub const m_bInPostEffectTime: usize = 0x1A54; // bool
                pub const m_lastFireCount: usize = 0x1A58; // int32
                pub const m_nFireEffectTickBegin: usize = 0x1A5C; // int32
                pub const m_drawableCount: usize = 0x8660; // int32
                pub const m_blosCheck: usize = 0x8664; // bool
                pub const m_nlosperiod: usize = 0x8668; // int32
                pub const m_maxFireHalfWidth: usize = 0x866C; // float32
                pub const m_maxFireHeight: usize = 0x8670; // float32
                pub const m_minBounds: usize = 0x8674; // VectorWS
                pub const m_maxBounds: usize = 0x8680; // VectorWS
                pub const m_flLastGrassBurnThink: usize = 0x868C; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CFilterLOS {
            }
            // Parent: C_BaseEntity
            // Field count: 1
            pub mod C_EnvWindClientside {
                pub const m_EnvWindShared: usize = 0x600; // C_EnvWindShared
            }
            // Parent: C_BaseGrenade
            // Field count: 0
            pub mod C_FlashbangProjectile {
            }
            // Parent: C_SoundEventEntity
            // Field count: 5
            pub mod C_SoundEventConeEntity {
                pub const m_flEmitterAngle: usize = 0x6C0; // float32
                pub const m_flSweetSpotAngle: usize = 0x6C4; // float32
                pub const m_flAttenMin: usize = 0x6C8; // float32
                pub const m_flAttenMax: usize = 0x6CC; // float32
                pub const m_iszParameterName: usize = 0x6D0; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponP90 {
            }
            // Parent: C_BaseEntity
            // Field count: 1
            pub mod C_EnvWind {
                pub const m_EnvWindShared: usize = 0x600; // C_EnvWindShared
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_TerroristTeamIntroCamera {
            }
            // Parent: C_BaseEntity
            // Field count: 3
            pub mod C_PointDeathcamBounds {
                pub const m_vBoxMins: usize = 0x600; // Vector
                pub const m_vBoxMaxs: usize = 0x60C; // Vector
                pub const m_flLerpDistance: usize = 0x618; // float32
            }
            // Parent: None
            // Field count: 5
            pub mod CCSPlayerController_ActionTrackingServices {
                pub const m_perRoundStats: usize = 0x40; // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
                pub const m_matchStats: usize = 0xA8; // CSMatchStats_t
                pub const m_iNumRoundKills: usize = 0x128; // int32
                pub const m_iNumRoundKillsHeadshots: usize = 0x12C; // int32
                pub const m_flTotalRoundDamageDealt: usize = 0x130; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_PreviewModelAlias_csgo_item_previewmodel {
            }
            // Parent: None
            // Field count: 0
            pub mod C_InfoInstructorHintHostageRescueZone {
            }
            // Parent: C_BaseTrigger
            // Field count: 2
            pub mod C_TriggerBuoyancy {
                pub const m_BuoyancyHelper: usize = 0x1180; // CBuoyancyHelper
                pub const m_flFluidDensity: usize = 0x1298; // float32
            }
            // Parent: None
            // Field count: 6
            pub mod CPlayer_MovementServices_Humanoid {
                pub const m_flStepSoundTime: usize = 0x258; // float32
                pub const m_flFallVelocity: usize = 0x25C; // float32
                pub const m_groundNormal: usize = 0x260; // Vector
                pub const m_flSurfaceFriction: usize = 0x26C; // float32
                pub const m_surfaceProps: usize = 0x270; // CUtlStringToken
                pub const m_nStepside: usize = 0x280; // int32
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_IsRequirementValid__Criteria_t {
                pub const m_bIsValid: usize = 0x0; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponTec9 {
            }
            // Parent: C_BreakableProp
            // Field count: 5
            pub mod C_PhysPropClientside {
                pub const m_flTouchDelta: usize = 0x13E0; // GameTime_t
                pub const m_fDeathTime: usize = 0x13E4; // GameTime_t
                pub const m_vecDamagePosition: usize = 0x13E8; // VectorWS
                pub const m_vecDamageDirection: usize = 0x13F4; // Vector
                pub const m_nDamageType: usize = 0x1400; // DamageTypes_t
            }
            // Parent: None
            // Field count: 1
            pub mod C_BaseDoor {
                pub const m_bIsUsable: usize = 0x1098; // bool
            }
            // Parent: None
            // Field count: 5
            pub mod CSMatchStats_t {
                pub const m_iEnemy5Ks: usize = 0x68; // int32
                pub const m_iEnemy4Ks: usize = 0x6C; // int32
                pub const m_iEnemy3Ks: usize = 0x70; // int32
                pub const m_iEnemyKnifeKills: usize = 0x74; // int32
                pub const m_iEnemyTaserKills: usize = 0x78; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGO_RushIntroTerroristPosition {
            }
            // Parent: None
            // Field count: 0
            pub mod CHostageRescueZone {
            }
            // Parent: None
            // Field count: 7
            pub mod C_CSWeaponBaseGun {
                pub const m_zoomLevel: usize = 0x1F20; // int32
                pub const m_iBurstShotsRemaining: usize = 0x1F24; // int32
                pub const m_iSilencerBodygroup: usize = 0x1F28; // int32
                pub const m_silencedModelIndex: usize = 0x1F38; // int32
                pub const m_inPrecache: usize = 0x1F3C; // bool
                pub const m_bNeedsBoltAction: usize = 0x1F3D; // bool
                pub const m_nRevolverCylinderIdx: usize = 0x1F40; // int32
            }
            // Parent: None
            // Field count: 1
            pub mod C_CSGameRulesProxy {
                pub const m_pGameRules: usize = 0x600; // C_CSGameRules*
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponP250 {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterMassGreater {
                pub const m_fFilterMass: usize = 0x638; // float32
            }
            // Parent: None
            // Field count: 1
            pub mod C_ShatterGlassShardPhysics {
                pub const m_ShardDesc: usize = 0x10A0; // shard_model_desc_t
            }
            // Parent: None
            // Field count: 13
            pub mod C_EntityDissolve {
                pub const m_flStartTime: usize = 0x10A0; // GameTime_t
                pub const m_flFadeInStart: usize = 0x10A4; // float32
                pub const m_flFadeInLength: usize = 0x10A8; // float32
                pub const m_flFadeOutModelStart: usize = 0x10AC; // float32
                pub const m_flFadeOutModelLength: usize = 0x10B0; // float32
                pub const m_flFadeOutStart: usize = 0x10B4; // float32
                pub const m_flFadeOutLength: usize = 0x10B8; // float32
                pub const m_nDissolveType: usize = 0x10BC; // EntityDissolveType_t
                pub const m_nMagnitude: usize = 0x10C0; // uint32
                pub const m_vDissolverOrigin: usize = 0x10C4; // VectorWS
                pub const m_flNextSparkTime: usize = 0x10D0; // GameTime_t
                pub const m_bCoreExplode: usize = 0x10D4; // bool
                pub const m_bLinkedToServerEnt: usize = 0x10D5; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_SoundOpvarSetOBBEntity {
            }
            // Parent: None
            // Field count: 8
            pub mod CCSCustomPlayerCamera {
                pub const m_hPawn: usize = 0x600; // CHandle<C_CSPlayerPawnBase>
                pub const m_nCameraMode: usize = 0x604; // CustomCameraMode_t
                pub const m_hFollowEntity: usize = 0x608; // CHandle<C_BaseEntity>
                pub const m_bFollowEyes: usize = 0x60C; // bool
                pub const m_vecFollowOffset: usize = 0x610; // Vector
                pub const m_vecCameraOffset: usize = 0x61C; // Vector
                pub const m_bClipCameraOffset: usize = 0x628; // bool
                pub const m_flCameraOffsetReturnStrength: usize = 0x62C; // float32
            }
            // Parent: None
            // Field count: 1
            pub mod CCSGameModeRules_ArmsRace {
                pub const m_WeaponSequence: usize = 0x30; // C_NetworkUtlVectorBase<CUtlString>
            }
            // Parent: C_BaseModelEntity
            // Field count: 8
            pub mod C_FuncMonitor {
                pub const m_targetCamera: usize = 0x1098; // CUtlString
                pub const m_nResolutionEnum: usize = 0x10A0; // int32
                pub const m_bRenderShadows: usize = 0x10A4; // bool
                pub const m_bUseUniqueColorTarget: usize = 0x10A5; // bool
                pub const m_brushModelName: usize = 0x10A8; // CUtlString
                pub const m_hTargetCamera: usize = 0x10B0; // CHandle<C_BaseEntity>
                pub const m_bEnabled: usize = 0x10B4; // bool
                pub const m_bDraw3DSkybox: usize = 0x10B5; // bool
            }
            // Parent: None
            // Field count: 14
            pub mod C_ClientRagdoll {
                pub const m_bFadeOut: usize = 0x1268; // bool
                pub const m_bImportant: usize = 0x1269; // bool
                pub const m_flEffectTime: usize = 0x126C; // GameTime_t
                pub const m_gibDespawnTime: usize = 0x1270; // GameTime_t
                pub const m_iCurrentFriction: usize = 0x1274; // int32
                pub const m_iMinFriction: usize = 0x1278; // int32
                pub const m_iMaxFriction: usize = 0x127C; // int32
                pub const m_iFrictionAnimState: usize = 0x1280; // int32
                pub const m_bReleaseRagdoll: usize = 0x1284; // bool
                pub const m_iEyeAttachment: usize = 0x1285; // AttachmentHandle_t
                pub const m_bFadingOut: usize = 0x1286; // bool
                pub const m_flScaleEnd: usize = 0x1288; // float32[10]
                pub const m_flScaleTimeStart: usize = 0x12B0; // GameTime_t[10]
                pub const m_flScaleTimeEnd: usize = 0x12D8; // GameTime_t[10]
            }
            // Parent: None
            // Field count: 0
            pub mod C_CS2WeaponModuleBase {
            }
            // Parent: C_BaseEntity
            // Field count: 9
            pub mod C_CSGO_TeamPreviewCharacterPosition {
                pub const m_nVariant: usize = 0x600; // int32
                pub const m_nRandom: usize = 0x604; // int32
                pub const m_nOrdinal: usize = 0x608; // int32
                pub const m_sWeaponName: usize = 0x610; // CUtlString
                pub const m_xuid: usize = 0x618; // uint64
                pub const m_agentItem: usize = 0x620; // C_EconItemView
                pub const m_glovesItem: usize = 0xBD0; // C_EconItemView
                pub const m_weaponItem: usize = 0x1180; // C_EconItemView
                pub const m_petItem: usize = 0x1730; // C_EconItemView
            }
            // Parent: None
            // Field count: 11
            pub mod C_SmokeGrenadeProjectile {
                pub const m_nSmokeEffectTickBegin: usize = 0x1360; // int32
                pub const m_bDidSmokeEffect: usize = 0x1364; // bool
                pub const m_nRandomSeed: usize = 0x1368; // int32
                pub const m_vSmokeColor: usize = 0x136C; // Vector
                pub const m_vSmokeDetonationPos: usize = 0x1378; // VectorWS
                pub const m_VoxelFrameData: usize = 0x1388; // C_NetworkUtlVectorBase<uint8>
                pub const m_nVoxelFrameDataSize: usize = 0x13A0; // int32
                pub const m_nVoxelUpdate: usize = 0x13A4; // int32
                pub const m_nSmokeLightProbeRegen: usize = 0x13A8; // uint8
                pub const m_bSmokeVolumeDataReceived: usize = 0x13A9; // bool
                pub const m_bSmokeEffectSpawned: usize = 0x13AA; // bool
            }
            // Parent: None
            // Field count: 1
            pub mod CCSPlayer_BuyServices {
                pub const m_vecSellbackPurchaseEntries: usize = 0x48; // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
            }
            // Parent: C_BaseEntity
            // Field count: 2
            pub mod C_SkyCameraVolumeTarget {
                pub const m_nSkyboxScale: usize = 0x600; // int16
                pub const m_hSkyMaterial: usize = 0x608; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 10
            pub mod C_CSTeam {
                pub const m_szTeamMatchStat: usize = 0x6B8; // char[512]
                pub const m_numMapVictories: usize = 0x8B8; // int32
                pub const m_bSurrendered: usize = 0x8BC; // bool
                pub const m_scoreFirstHalf: usize = 0x8C0; // int32
                pub const m_scoreSecondHalf: usize = 0x8C4; // int32
                pub const m_scoreOvertime: usize = 0x8C8; // int32
                pub const m_szClanTeamname: usize = 0x8CC; // char[129]
                pub const m_iClanID: usize = 0x950; // uint32
                pub const m_szTeamFlagImage: usize = 0x954; // char[8]
                pub const m_szTeamLogoImage: usize = 0x95C; // char[8]
            }
            // Parent: None
            // Field count: 0
            pub mod C_CS2HudModelWeapon {
            }
            // Parent: C_BaseModelEntity
            // Field count: 8
            pub mod C_TextureBasedAnimatable {
                pub const m_bLoop: usize = 0x1098; // bool
                pub const m_flFPS: usize = 0x109C; // float32
                pub const m_hPositionKeys: usize = 0x10A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_hRotationKeys: usize = 0x10A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_vAnimationBoundsMin: usize = 0x10B0; // Vector
                pub const m_vAnimationBoundsMax: usize = 0x10BC; // Vector
                pub const m_flStartTime: usize = 0x10C8; // float32
                pub const m_flStartFrame: usize = 0x10CC; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod C_LightEnvironmentEntity {
            }
            // Parent: C_BaseTrigger
            // Field count: 14
            pub mod C_TriggerPhysics {
                pub const m_gravityScale: usize = 0x1180; // float32
                pub const m_linearLimit: usize = 0x1184; // float32
                pub const m_linearDamping: usize = 0x1188; // float32
                pub const m_angularLimit: usize = 0x118C; // float32
                pub const m_angularDamping: usize = 0x1190; // float32
                pub const m_linearForce: usize = 0x1194; // float32
                pub const m_flFrequency: usize = 0x1198; // float32
                pub const m_flDampingRatio: usize = 0x119C; // float32
                pub const m_vecLinearForcePointAt: usize = 0x11A0; // Vector
                pub const m_bCollapseToForcePoint: usize = 0x11AC; // bool
                pub const m_vecLinearForcePointAtWorld: usize = 0x11B0; // VectorWS
                pub const m_vecLinearForceDirection: usize = 0x11BC; // Vector
                pub const m_bForceDirectionIsInLocalSpace: usize = 0x11C8; // bool
                pub const m_bConvertToDebrisWhenPossible: usize = 0x11C9; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_PropDoorRotating {
            }
            // Parent: None
            // Field count: 2
            pub mod C_HandleTest {
                pub const m_Handle: usize = 0x600; // CHandle<C_BaseEntity>
                pub const m_bSendHandle: usize = 0x604; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 8
            pub mod CInfoWorldLayer {
                pub const m_pOutputOnEntitiesSpawned: usize = 0x600; // CEntityIOOutput
                pub const m_worldName: usize = 0x618; // CUtlSymbolLarge
                pub const m_layerName: usize = 0x620; // CUtlSymbolLarge
                pub const m_bWorldLayerVisible: usize = 0x628; // bool
                pub const m_bEntitiesSpawned: usize = 0x629; // bool
                pub const m_bCreateAsChildSpawnGroup: usize = 0x62A; // bool
                pub const m_hLayerSpawnGroup: usize = 0x62C; // uint32
                pub const m_bWorldLayerActuallyVisible: usize = 0x630; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CBodyComponentBaseModelEntity {
            }
            // Parent: None
            // Field count: 1
            pub mod C_Multimeter {
                pub const m_hTargetC4: usize = 0x1268; // CHandle<C_PlantedC4>
            }
            // Parent: C_BaseModelEntity
            // Field count: 12
            pub mod C_BaseTrigger {
                pub const m_OnStartTouch: usize = 0x1098; // CEntityIOOutput
                pub const m_OnStartTouchAll: usize = 0x10B0; // CEntityIOOutput
                pub const m_OnEndTouch: usize = 0x10C8; // CEntityIOOutput
                pub const m_OnEndTouchAll: usize = 0x10E0; // CEntityIOOutput
                pub const m_OnTouching: usize = 0x10F8; // CEntityIOOutput
                pub const m_OnTouchingEachEntity: usize = 0x1110; // CEntityIOOutput
                pub const m_OnNotTouching: usize = 0x1128; // CEntityIOOutput
                pub const m_OnTouchingChanged: usize = 0x1140; // CEntityIOOutput
                pub const m_hTouchingEntities: usize = 0x1158; // CUtlVector<CHandle<C_BaseEntity>>
                pub const m_iFilterName: usize = 0x1170; // CUtlSymbolLarge
                pub const m_hFilter: usize = 0x1178; // CHandle<CBaseFilter>
                pub const m_bDisabled: usize = 0x117C; // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod FilterDamageType {
                pub const m_iDamageType: usize = 0x638; // int32
            }
            // Parent: None
            // Field count: 2
            pub mod CAttributeList {
                pub const m_Attributes: usize = 0x8; // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
                pub const m_pManager: usize = 0x70; // CAttributeManager*
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterProximity {
                pub const m_flRadius: usize = 0x638; // float32
            }
            // Parent: None
            // Field count: 20
            pub mod CEffectData {
                pub const m_vOrigin: usize = 0x8; // VectorWS
                pub const m_vStart: usize = 0x14; // VectorWS
                pub const m_vNormal: usize = 0x20; // Vector
                pub const m_vAngles: usize = 0x2C; // QAngle
                pub const m_hEntity: usize = 0x38; // CEntityHandle
                pub const m_hOtherEntity: usize = 0x3C; // CEntityHandle
                pub const m_flScale: usize = 0x40; // float32
                pub const m_flMagnitude: usize = 0x44; // float32
                pub const m_flRadius: usize = 0x48; // float32
                pub const m_nSurfaceProp: usize = 0x4C; // CUtlStringToken
                pub const m_nEffectIndex: usize = 0x50; // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nDamageType: usize = 0x58; // uint32
                pub const m_nPenetrate: usize = 0x5C; // uint8
                pub const m_nMaterial: usize = 0x5E; // uint16
                pub const m_nHitBox: usize = 0x60; // int16
                pub const m_nColor: usize = 0x62; // uint8
                pub const m_fFlags: usize = 0x63; // uint8
                pub const m_nAttachmentIndex: usize = 0x64; // AttachmentHandle_t
                pub const m_nAttachmentName: usize = 0x68; // CUtlStringToken
                pub const m_iEffectName: usize = 0x6C; // uint16
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponSCAR20 {
            }
            // Parent: None
            // Field count: 0
            pub mod C_FuncMover {
            }
            // Parent: None
            // Field count: 3
            pub mod CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t {
                pub const pItem: usize = 0x0; // C_EconItemView*
                pub const team: usize = 0x8; // uint16
                pub const slot: usize = 0xA; // uint16
            }
            // Parent: None
            // Field count: 0
            pub mod C_DecoyGrenade {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WaterBullet {
            }
            // Parent: None
            // Field count: 5
            pub mod CCSPlayer_ActionTrackingServices {
                pub const m_hLastWeaponBeforeC4AutoSwitch: usize = 0x48; // CHandle<C_BasePlayerWeapon>
                pub const m_bIsRescuing: usize = 0x4C; // bool
                pub const m_weaponPurchasesThisMatch: usize = 0x50; // WeaponPurchaseTracker_t
                pub const m_weaponPurchasesThisRound: usize = 0xC0; // WeaponPurchaseTracker_t
                pub const m_weaponCarryOverIntoThisRound: usize = 0x130; // WeaponPurchaseTracker_t
            }
            // Parent: None
            // Field count: 0
            pub mod CBrokenGlassTrap {
            }
            // Parent: None
            // Field count: 0
            pub mod CCSObserver_MovementServices {
            }
            // Parent: None
            // Field count: 6
            pub mod C_BaseCombatCharacter {
                pub const m_hMyWearables: usize = 0x1268; // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
                pub const m_leftFootAttachment: usize = 0x1280; // AttachmentHandle_t
                pub const m_rightFootAttachment: usize = 0x1281; // AttachmentHandle_t
                pub const m_nWaterWakeMode: usize = 0x1284; // C_BaseCombatCharacter::WaterWakeMode_t
                pub const m_flWaterWorldZ: usize = 0x1288; // float32
                pub const m_flWaterNextTraceTime: usize = 0x128C; // float32
            }
            // Parent: C_BaseClientUIEntity
            // Field count: 2
            pub mod C_PointClientUIDialog {
                pub const m_hActivator: usize = 0x10C8; // CHandle<C_BaseEntity>
                pub const m_bStartEnabled: usize = 0x10CC; // bool
            }
            // Parent: C_SoundEventEntity
            // Field count: 0
            pub mod C_SoundEventMultiPointEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponHKP2000 {
            }
            // Parent: C_BaseTrigger
            // Field count: 2
            pub mod C_FootstepControl {
                pub const m_source: usize = 0x1180; // CUtlSymbolLarge
                pub const m_destination: usize = 0x1188; // CUtlSymbolLarge
            }
            // Parent: C_BaseEntity
            // Field count: 8
            pub mod CCitadelSoundOpvarSetOBB {
                pub const m_iszStackName: usize = 0x618; // CUtlSymbolLarge
                pub const m_iszOperatorName: usize = 0x620; // CUtlSymbolLarge
                pub const m_iszOpvarName: usize = 0x628; // CUtlSymbolLarge
                pub const m_vDistanceInnerMins: usize = 0x630; // Vector
                pub const m_vDistanceInnerMaxs: usize = 0x63C; // Vector
                pub const m_vDistanceOuterMins: usize = 0x648; // Vector
                pub const m_vDistanceOuterMaxs: usize = 0x654; // Vector
                pub const m_nAABBDirection: usize = 0x660; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_EndOfMatchLineupStart {
            }
            // Parent: None
            // Field count: 0
            pub mod CPlayer_WaterServices {
            }
            // Parent: None
            // Field count: 15
            pub mod CDamageRecord {
                pub const m_PlayerDamager: usize = 0x30; // CHandle<C_CSPlayerPawn>
                pub const m_PlayerRecipient: usize = 0x34; // CHandle<C_CSPlayerPawn>
                pub const m_hPlayerControllerDamager: usize = 0x38; // CHandle<CCSPlayerController>
                pub const m_hPlayerControllerRecipient: usize = 0x3C; // CHandle<CCSPlayerController>
                pub const m_szPlayerDamagerName: usize = 0x40; // CUtlString
                pub const m_szPlayerRecipientName: usize = 0x48; // CUtlString
                pub const m_DamagerXuid: usize = 0x50; // uint64
                pub const m_RecipientXuid: usize = 0x58; // uint64
                pub const m_flBulletsDamage: usize = 0x60; // float32
                pub const m_flDamage: usize = 0x64; // float32
                pub const m_flActualHealthRemoved: usize = 0x68; // float32
                pub const m_iNumHits: usize = 0x6C; // int32
                pub const m_iLastBulletUpdate: usize = 0x70; // int32
                pub const m_bIsOtherEnemy: usize = 0x74; // bool
                pub const m_killType: usize = 0x75; // EKillTypes_t
            }
            // Parent: None
            // Field count: 0
            pub mod C_DynamicPropAlias_dynamic_prop {
            }
            // Parent: None
            // Field count: 0
            pub mod CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
            }
            // Parent: C_BarnLight
            // Field count: 3
            pub mod C_OmniLight {
                pub const m_flInnerAngle: usize = 0x13A8; // float32
                pub const m_flOuterAngle: usize = 0x13AC; // float32
                pub const m_bShowLight: usize = 0x13B0; // bool
            }
            // Parent: None
            // Field count: 13
            pub mod C_SceneEntity {
                pub const m_bIsPlayingBack: usize = 0x608; // bool
                pub const m_bPaused: usize = 0x609; // bool
                pub const m_bMultiplayer: usize = 0x60A; // bool
                pub const m_bAutogenerated: usize = 0x60B; // bool
                pub const m_bAllRequirementsComplete: usize = 0x60C; // bool
                pub const m_flForceClientTime: usize = 0x610; // float32
                pub const m_nSceneStringIndex: usize = 0x614; // uint16
                pub const m_bClientOnly: usize = 0x616; // bool
                pub const m_hOwner: usize = 0x618; // CHandle<C_BaseModelEntity>
                pub const m_hActorList: usize = 0x620; // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
                pub const m_bWasPlaying: usize = 0x638; // bool
                pub const m_QueuedEvents: usize = 0x648; // CUtlVector<C_SceneEntity::QueuedEvents_t>
                pub const m_flCurrentTime: usize = 0x660; // float32
            }
            // Parent: None
            // Field count: 1
            pub mod C_NametagModule {
                pub const m_strNametagString: usize = 0x1270; // CUtlString
            }
            // Parent: None
            // Field count: 20
            pub mod C_EconEntity {
                pub const m_flFlexDelayTime: usize = 0x1278; // float32
                pub const m_flFlexDelayedWeight: usize = 0x1280; // float32*
                pub const m_bAttributesInitialized: usize = 0x1288; // bool
                pub const m_AttributeManager: usize = 0x1290; // C_AttributeContainer
                pub const m_OriginalOwnerXuidLow: usize = 0x18A0; // uint32
                pub const m_OriginalOwnerXuidHigh: usize = 0x18A4; // uint32
                pub const m_nFallbackPaintKit: usize = 0x18A8; // int32
                pub const m_nFallbackSeed: usize = 0x18AC; // int32
                pub const m_flFallbackWear: usize = 0x18B0; // float32
                pub const m_nFallbackStatTrak: usize = 0x18B4; // int32
                pub const m_bClientside: usize = 0x18B8; // bool
                pub const m_bParticleSystemsCreated: usize = 0x18B9; // bool
                pub const m_vecAttachedParticles: usize = 0x18C0; // CUtlVector<int32>
                pub const m_hViewmodelAttachment: usize = 0x18D8; // CHandle<CBaseAnimGraph>
                pub const m_iOldTeam: usize = 0x18DC; // int32
                pub const m_bAttachmentDirty: usize = 0x18E0; // bool
                pub const m_nUnloadedModelIndex: usize = 0x18E4; // int32
                pub const m_iNumOwnerValidationRetries: usize = 0x18E8; // int32
                pub const m_hOldProvidee: usize = 0x18F8; // CHandle<C_BaseEntity>
                pub const m_vecAttachedModels: usize = 0x1900; // CUtlVector<C_EconEntity::AttachedModelData_t>
            }
            // Parent: None
            // Field count: 0
            pub mod CPlayer_UseServices {
            }
            // Parent: C_BaseEntity
            // Field count: 25
            pub mod C_PointValueRemapper {
                pub const m_bDisabled: usize = 0x600; // bool
                pub const m_bDisabledOld: usize = 0x601; // bool
                pub const m_bUpdateOnClient: usize = 0x602; // bool
                pub const m_nInputType: usize = 0x604; // ValueRemapperInputType_t
                pub const m_hRemapLineStart: usize = 0x608; // CHandle<C_BaseEntity>
                pub const m_hRemapLineEnd: usize = 0x60C; // CHandle<C_BaseEntity>
                pub const m_flMaximumChangePerSecond: usize = 0x610; // float32
                pub const m_flDisengageDistance: usize = 0x614; // float32
                pub const m_flEngageDistance: usize = 0x618; // float32
                pub const m_bRequiresUseKey: usize = 0x61C; // bool
                pub const m_nOutputType: usize = 0x620; // ValueRemapperOutputType_t
                pub const m_hOutputEntities: usize = 0x628; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                pub const m_nHapticsType: usize = 0x640; // ValueRemapperHapticsType_t
                pub const m_nMomentumType: usize = 0x644; // ValueRemapperMomentumType_t
                pub const m_flMomentumModifier: usize = 0x648; // float32
                pub const m_flSnapValue: usize = 0x64C; // float32
                pub const m_flCurrentMomentum: usize = 0x650; // float32
                pub const m_nRatchetType: usize = 0x654; // ValueRemapperRatchetType_t
                pub const m_flRatchetOffset: usize = 0x658; // float32
                pub const m_flInputOffset: usize = 0x65C; // float32
                pub const m_bEngaged: usize = 0x660; // bool
                pub const m_bFirstUpdate: usize = 0x661; // bool
                pub const m_flPreviousValue: usize = 0x664; // float32
                pub const m_flPreviousUpdateTickTime: usize = 0x668; // GameTime_t
                pub const m_vecPreviousTestPoint: usize = 0x66C; // VectorWS
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_Unknown {
                pub const m_UnknownKeys: usize = 0x48; // KeyValues3
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponMP7 {
            }
            // Parent: None
            // Field count: 13
            pub mod CSPerRoundStats_t {
                pub const m_iKills: usize = 0x30; // int32
                pub const m_iDeaths: usize = 0x34; // int32
                pub const m_iAssists: usize = 0x38; // int32
                pub const m_iDamage: usize = 0x3C; // int32
                pub const m_iEquipmentValue: usize = 0x40; // int32
                pub const m_iMoneySaved: usize = 0x44; // int32
                pub const m_iKillReward: usize = 0x48; // int32
                pub const m_iLiveTime: usize = 0x4C; // int32
                pub const m_iHeadShotKills: usize = 0x50; // int32
                pub const m_iObjective: usize = 0x54; // int32
                pub const m_iCashEarned: usize = 0x58; // int32
                pub const m_iUtilityDamage: usize = 0x5C; // int32
                pub const m_iEnemiesFlashed: usize = 0x60; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod C_CS2HudModelBase {
            }
            // Parent: None
            // Field count: 98
            pub mod C_CSGameRules {
                pub const m_bFreezePeriod: usize = 0x40; // bool
                pub const m_bWarmupPeriod: usize = 0x41; // bool
                pub const m_fWarmupPeriodEnd: usize = 0x44; // GameTime_t
                pub const m_fWarmupPeriodStart: usize = 0x48; // GameTime_t
                pub const m_bTerroristTimeOutActive: usize = 0x4C; // bool
                pub const m_bCTTimeOutActive: usize = 0x4D; // bool
                pub const m_flTerroristTimeOutRemaining: usize = 0x50; // float32
                pub const m_flCTTimeOutRemaining: usize = 0x54; // float32
                pub const m_nTerroristTimeOuts: usize = 0x58; // int32
                pub const m_nCTTimeOuts: usize = 0x5C; // int32
                pub const m_bTechnicalTimeOut: usize = 0x60; // bool
                pub const m_bMatchWaitingForResume: usize = 0x61; // bool
                pub const m_iFreezeTime: usize = 0x64; // int32
                pub const m_iRoundTime: usize = 0x68; // int32
                pub const m_fMatchStartTime: usize = 0x6C; // float32
                pub const m_fRoundStartTime: usize = 0x70; // GameTime_t
                pub const m_flRestartRoundTime: usize = 0x74; // GameTime_t
                pub const m_bGameRestart: usize = 0x78; // bool
                pub const m_flGameStartTime: usize = 0x7C; // float32
                pub const m_timeUntilNextPhaseStarts: usize = 0x80; // float32
                pub const m_gamePhase: usize = 0x84; // int32
                pub const m_totalRoundsPlayed: usize = 0x88; // int32
                pub const m_nRoundsPlayedThisPhase: usize = 0x8C; // int32
                pub const m_nOvertimePlaying: usize = 0x90; // int32
                pub const m_iHostagesRemaining: usize = 0x94; // int32
                pub const m_bAnyHostageReached: usize = 0x98; // bool
                pub const m_bMapHasBombTarget: usize = 0x99; // bool
                pub const m_bMapHasRescueZone: usize = 0x9A; // bool
                pub const m_bMapHasBuyZone: usize = 0x9B; // bool
                pub const m_bIsQueuedMatchmaking: usize = 0x9C; // bool
                pub const m_nQueuedMatchmakingMode: usize = 0xA0; // int32
                pub const m_bIsValveDS: usize = 0xA4; // bool
                pub const m_bLogoMap: usize = 0xA5; // bool
                pub const m_bPlayAllStepSoundsOnServer: usize = 0xA6; // bool
                pub const m_iSpectatorSlotCount: usize = 0xA8; // int32
                pub const m_MatchDevice: usize = 0xAC; // int32
                pub const m_bHasMatchStarted: usize = 0xB0; // bool
                pub const m_nNextMapInMapgroup: usize = 0xB4; // int32
                pub const m_szTournamentEventName: usize = 0xB8; // char[512]
                pub const m_szTournamentEventStage: usize = 0x2B8; // char[512]
                pub const m_szMatchStatTxt: usize = 0x4B8; // char[512]
                pub const m_szTournamentPredictionsTxt: usize = 0x6B8; // char[512]
                pub const m_nTournamentPredictionsPct: usize = 0x8B8; // int32
                pub const m_flCMMItemDropRevealStartTime: usize = 0x8BC; // GameTime_t
                pub const m_flCMMItemDropRevealEndTime: usize = 0x8C0; // GameTime_t
                pub const m_bIsDroppingItems: usize = 0x8C4; // bool
                pub const m_bIsQuestEligible: usize = 0x8C5; // bool
                pub const m_bIsHltvActive: usize = 0x8C6; // bool
                pub const m_bBombPlanted: usize = 0x8C7; // bool
                pub const m_arrProhibitedItemIndices: usize = 0x8C8; // uint16[100]
                pub const m_arrTournamentActiveCasterAccounts: usize = 0x990; // uint32[4]
                pub const m_numBestOfMaps: usize = 0x9A0; // int32
                pub const m_nHalloweenMaskListSeed: usize = 0x9A4; // int32
                pub const m_bBombDropped: usize = 0x9A8; // bool
                pub const m_iRoundWinStatus: usize = 0x9AC; // int32
                pub const m_eRoundWinReason: usize = 0x9B0; // int32
                pub const m_bTCantBuy: usize = 0x9B4; // bool
                pub const m_bCTCantBuy: usize = 0x9B5; // bool
                pub const m_iMatchStats_RoundResults: usize = 0x9B8; // int32[30]
                pub const m_iMatchStats_PlayersAlive_CT: usize = 0xA30; // int32[30]
                pub const m_iMatchStats_PlayersAlive_T: usize = 0xAA8; // int32[30]
                pub const m_TeamRespawnWaveTimes: usize = 0xB20; // float32[32]
                pub const m_flNextRespawnWave: usize = 0xBA0; // GameTime_t[32]
                pub const m_vMinimapMins: usize = 0xC20; // VectorWS
                pub const m_vMinimapMaxs: usize = 0xC2C; // VectorWS
                pub const m_MinimapVerticalSectionHeights: usize = 0xC38; // float32[8]
                pub const m_ullLocalMatchID: usize = 0xC58; // uint64
                pub const m_nEndMatchMapGroupVoteTypes: usize = 0xC60; // int32[10]
                pub const m_nEndMatchMapGroupVoteOptions: usize = 0xC88; // int32[10]
                pub const m_nEndMatchMapVoteWinner: usize = 0xCB0; // int32
                pub const m_iNumConsecutiveCTLoses: usize = 0xCB4; // int32
                pub const m_iNumConsecutiveTerroristLoses: usize = 0xCB8; // int32
                pub const m_nMatchAbortedEarlyReason: usize = 0xD78; // int32
                pub const m_bHasTriggeredRoundStartMusic: usize = 0xD7C; // bool
                pub const m_bSwitchingTeamsAtRoundReset: usize = 0xD7D; // bool
                pub const m_pGameModeRules: usize = 0xD98; // CCSGameModeRules*
                pub const m_RetakeRules: usize = 0xDA0; // C_RetakeGameRules
                pub const m_nMatchEndCount: usize = 0xEF8; // uint8
                pub const m_nTTeamIntroVariant: usize = 0xEFC; // int32
                pub const m_nCTTeamIntroVariant: usize = 0xF00; // int32
                pub const m_bTeamIntroPeriod: usize = 0xF04; // bool
                pub const m_iRoundEndWinnerTeam: usize = 0xF08; // int32
                pub const m_eRoundEndReason: usize = 0xF0C; // int32
                pub const m_bRoundEndShowTimerDefend: usize = 0xF10; // bool
                pub const m_iRoundEndTimerTime: usize = 0xF14; // int32
                pub const m_sRoundEndFunFactToken: usize = 0xF18; // CUtlString
                pub const m_iRoundEndFunFactPlayerSlot: usize = 0xF20; // CPlayerSlot
                pub const m_iRoundEndFunFactData1: usize = 0xF24; // int32
                pub const m_iRoundEndFunFactData2: usize = 0xF28; // int32
                pub const m_iRoundEndFunFactData3: usize = 0xF2C; // int32
                pub const m_sRoundEndMessage: usize = 0xF30; // CUtlString
                pub const m_iRoundEndPlayerCount: usize = 0xF38; // int32
                pub const m_bRoundEndNoMusic: usize = 0xF3C; // bool
                pub const m_iRoundEndLegacy: usize = 0xF40; // int32
                pub const m_nRoundEndCount: usize = 0xF44; // uint8
                pub const m_iRoundStartRoundNumber: usize = 0xF48; // int32
                pub const m_nRoundStartCount: usize = 0xF4C; // uint8
                pub const m_flLastPerfSampleTime: usize = 0x4F58; // float64
            }
            // Parent: C_BaseModelEntity
            // Field count: 2
            pub mod CGrenadeTracer {
                pub const m_flTracerDuration: usize = 0x10B0; // float32
                pub const m_nType: usize = 0x10B4; // GrenadeType_t
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGameModeRules_Noop {
            }
            // Parent: None
            // Field count: 16
            pub mod C_BaseCSGrenadeProjectile {
                pub const m_vInitialPosition: usize = 0x12B0; // VectorWS
                pub const m_vInitialVelocity: usize = 0x12BC; // Vector
                pub const m_nBounces: usize = 0x12C8; // int32
                pub const m_nExplodeEffectIndex: usize = 0x12D0; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                pub const m_nExplodeEffectTickBegin: usize = 0x12D8; // int32
                pub const m_vecExplodeEffectOrigin: usize = 0x12DC; // VectorWS
                pub const m_flSpawnTime: usize = 0x12E8; // GameTime_t
                pub const vecLastTrailLinePos: usize = 0x12EC; // Vector
                pub const flNextTrailLineTime: usize = 0x12F8; // GameTime_t
                pub const m_bExplodeEffectBegan: usize = 0x12FC; // bool
                pub const m_bCanCreateGrenadeTrail: usize = 0x12FD; // bool
                pub const m_nSnapshotTrajectoryEffectIndex: usize = 0x1300; // ParticleIndex_t
                pub const m_hSnapshotTrajectoryParticleSnapshot: usize = 0x1308; // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
                pub const m_arrTrajectoryTrailPoints: usize = 0x1310; // CUtlVector<Vector>
                pub const m_arrTrajectoryTrailPointCreationTimes: usize = 0x1328; // CUtlVector<float32>
                pub const m_flTrajectoryTrailEffectCreationTime: usize = 0x1340; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGO_RushIntroCounterTerroristPosition {
            }
            // Parent: None
            // Field count: 4
            pub mod CCSPlayerController_InGameMoneyServices {
                pub const m_iAccount: usize = 0x40; // int32
                pub const m_iStartAccount: usize = 0x44; // int32
                pub const m_iTotalCashSpent: usize = 0x48; // int32
                pub const m_iCashSpentThisRound: usize = 0x4C; // int32
            }
            // Parent: None
            // Field count: 6
            pub mod CCSPlayer_AimPunchServices {
                pub const m_predictableBaseTick: usize = 0x48; // GameTick_t
                pub const m_predictableBaseTickInterpAmount: usize = 0x4C; // float32
                pub const m_predictableBaseAngle: usize = 0x50; // QAngle
                pub const m_predictableBaseAngleVel: usize = 0x5C; // QAngle
                pub const m_unpredictableBaseTick: usize = 0xA0; // GameTick_t
                pub const m_unpredictableBaseAngle: usize = 0xA4; // QAngle
            }
            // Parent: None
            // Field count: 0
            pub mod C_HEGrenadeProjectile {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterModel {
                pub const m_iFilterModel: usize = 0x638; // CUtlSymbolLarge
            }
            // Parent: C_SoundAreaEntityBase
            // Field count: 2
            pub mod C_SoundAreaEntityOrientedBox {
                pub const m_vMin: usize = 0x628; // Vector
                pub const m_vMax: usize = 0x634; // Vector
            }
            // Parent: C_SoundOpvarSetPointBase
            // Field count: 0
            pub mod C_SoundOpvarSetPointEntity {
            }
            // Parent: C_BaseEntity
            // Field count: 2
            pub mod CPulseGameBlackboard {
                pub const m_strGraphName: usize = 0x608; // CUtlString
                pub const m_strStateBlob: usize = 0x610; // CUtlString
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSWeaponBaseShotgun {
            }
            // Parent: None
            // Field count: 7
            pub mod C_RagdollPropAttached {
                pub const m_boneIndexAttached: usize = 0x12F0; // uint32
                pub const m_ragdollAttachedObjectIndex: usize = 0x12F4; // uint32
                pub const m_attachmentPointBoneSpace: usize = 0x12F8; // Vector
                pub const m_attachmentPointRagdollSpace: usize = 0x1304; // Vector
                pub const m_vecOffset: usize = 0x1310; // Vector
                pub const m_parentTime: usize = 0x131C; // float32
                pub const m_bHasParent: usize = 0x1320; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_ModelPointEntity {
            }
            // Parent: C_CSPlayerPawn
            // Field count: 2
            pub mod C_CSGO_PreviewPlayer {
                pub const m_animgraphCharacterModeString: usize = 0x3720; // CGlobalSymbol
                pub const m_flInitialModelScale: usize = 0x3728; // float32
            }
            // Parent: C_BarnLight
            // Field count: 1
            pub mod C_RectLight {
                pub const m_bShowLight: usize = 0x13A8; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 3
            pub mod CCSRadarElement {
                pub const m_nElementType: usize = 0x618; // uint32
                pub const m_nElementColor: usize = 0x61C; // uint32
                pub const m_nTeamFilter: usize = 0x620; // uint32
            }
            // Parent: None
            // Field count: 3
            pub mod C_FuncTrackTrain {
                pub const m_nLongAxis: usize = 0x1098; // int32
                pub const m_flRadius: usize = 0x109C; // float32
                pub const m_flLineLength: usize = 0x10A0; // float32
            }
            // Parent: None
            // Field count: 2
            pub mod C_EconWearable {
                pub const m_nForceSkin: usize = 0x1918; // int32
                pub const m_bAlwaysAllow: usize = 0x191C; // bool
            }
            // Parent: None
            // Field count: 2
            pub mod EntitySpottedState_t {
                pub const m_bSpotted: usize = 0x8; // bool
                pub const m_bSpottedByMask: usize = 0xC; // uint32[2]
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponM4A1 {
            }
            // Parent: None
            // Field count: 1
            pub mod C_Item {
                pub const m_pReticleHintTextName: usize = 0x1918; // char[256]
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSPetPlacement {
            }
            // Parent: C_BaseModelEntity
            // Field count: 23
            pub mod C_Beam {
                pub const m_flFrameRate: usize = 0x1098; // float32
                pub const m_flHDRColorScale: usize = 0x109C; // float32
                pub const m_flFireTime: usize = 0x10A0; // GameTime_t
                pub const m_flDamage: usize = 0x10A4; // float32
                pub const m_nNumBeamEnts: usize = 0x10A8; // uint8
                pub const m_queryHandleHalo: usize = 0x10AC; // int32
                pub const m_hBaseMaterial: usize = 0x10D0; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nHaloIndex: usize = 0x10D8; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_nBeamType: usize = 0x10E0; // BeamType_t
                pub const m_nBeamFlags: usize = 0x10E4; // uint32
                pub const m_hAttachEntity: usize = 0x10E8; // CHandle<C_BaseEntity>[10]
                pub const m_nAttachIndex: usize = 0x1110; // AttachmentHandle_t[10]
                pub const m_fWidth: usize = 0x111C; // float32
                pub const m_fEndWidth: usize = 0x1120; // float32
                pub const m_fFadeLength: usize = 0x1124; // float32
                pub const m_fHaloScale: usize = 0x1128; // float32
                pub const m_fAmplitude: usize = 0x112C; // float32
                pub const m_fStartFrame: usize = 0x1130; // float32
                pub const m_fSpeed: usize = 0x1134; // float32
                pub const m_flFrame: usize = 0x1138; // float32
                pub const m_bTurnedOff: usize = 0x113C; // bool
                pub const m_vecEndPos: usize = 0x1140; // VectorWS
                pub const m_hEndEntity: usize = 0x114C; // CHandle<C_BaseEntity>
            }
            // Parent: C_BaseEntity
            // Field count: 20
            pub mod C_EnvLightProbeVolume {
                pub const m_Entity_hLightProbeTexture_AmbientCube: usize = 0x698; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SDF: usize = 0x6A0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_DC: usize = 0x6A8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeTexture_SH2_L1: usize = 0x6B0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightIndicesTexture: usize = 0x6B8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightScalarsTexture: usize = 0x6C0; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_hLightProbeDirectLightShadowsTexture: usize = 0x6C8; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_Entity_vBoxMins: usize = 0x6D0; // Vector
                pub const m_Entity_vBoxMaxs: usize = 0x6DC; // Vector
                pub const m_Entity_bMoveable: usize = 0x6E8; // bool
                pub const m_Entity_nHandshake: usize = 0x6EC; // int32
                pub const m_Entity_nPriority: usize = 0x6F0; // int32
                pub const m_Entity_bStartDisabled: usize = 0x6F4; // bool
                pub const m_Entity_nLightProbeSizeX: usize = 0x6F8; // int32
                pub const m_Entity_nLightProbeSizeY: usize = 0x6FC; // int32
                pub const m_Entity_nLightProbeSizeZ: usize = 0x700; // int32
                pub const m_Entity_nLightProbeAtlasX: usize = 0x704; // int32
                pub const m_Entity_nLightProbeAtlasY: usize = 0x708; // int32
                pub const m_Entity_nLightProbeAtlasZ: usize = 0x70C; // int32
                pub const m_Entity_bEnabled: usize = 0x719; // bool
            }
            // Parent: None
            // Field count: 9
            pub mod C_FuncConveyor {
                pub const m_vecMoveDirEntitySpace: usize = 0x10A0; // Vector
                pub const m_flTargetSpeed: usize = 0x10AC; // float32
                pub const m_nTransitionStartTick: usize = 0x10B0; // GameTick_t
                pub const m_nTransitionDurationTicks: usize = 0x10B4; // int32
                pub const m_flTransitionStartSpeed: usize = 0x10B8; // float32
                pub const m_flFrictionScale: usize = 0x10BC; // float32
                pub const m_hConveyorModels: usize = 0x10C0; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
                pub const m_flCurrentConveyorOffset: usize = 0x10D8; // float32
                pub const m_flCurrentConveyorSpeed: usize = 0x10DC; // float32
            }
            // Parent: None
            // Field count: 5
            pub mod CCSPlayer_WeaponServices {
                pub const m_flNextAttack: usize = 0xD0; // GameTime_t
                pub const m_nOldTotalShootPositionHistoryCount: usize = 0xD4; // uint32
                pub const m_nOldTotalInputHistoryCount: usize = 0x370; // uint32
                pub const m_networkAnimTiming: usize = 0x15C0; // C_NetworkUtlVectorBase<uint8>
                pub const m_bBlockInspectUntilNextGraphUpdate: usize = 0x15D8; // bool
            }
            // Parent: None
            // Field count: 2
            pub mod C_PhysMagnet {
                pub const m_aAttachedObjectsFromServer: usize = 0x1268; // CUtlVector<int32>
                pub const m_aAttachedObjects: usize = 0x1280; // CUtlVector<CHandle<C_BaseEntity>>
            }
            // Parent: None
            // Field count: 0
            pub mod CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
            }
            // Parent: None
            // Field count: 0
            pub mod C_Breakable {
            }
            // Parent: None
            // Field count: 29
            pub mod C_PlantedC4 {
                pub const m_bBombTicking: usize = 0x1288; // bool
                pub const m_nBombSite: usize = 0x128C; // int32
                pub const m_nSourceSoundscapeHash: usize = 0x1290; // int32
                pub const m_entitySpottedState: usize = 0x1298; // EntitySpottedState_t
                pub const m_flNextGlow: usize = 0x12B0; // GameTime_t
                pub const m_flNextBeep: usize = 0x12B4; // GameTime_t
                pub const m_flC4Blow: usize = 0x12B8; // GameTime_t
                pub const m_bCannotBeDefused: usize = 0x12BC; // bool
                pub const m_bHasExploded: usize = 0x12BD; // bool
                pub const m_flTimerLength: usize = 0x12C0; // float32
                pub const m_bBeingDefused: usize = 0x12C4; // bool
                pub const m_bTriggerWarning: usize = 0x12C8; // float32
                pub const m_bExplodeWarning: usize = 0x12CC; // float32
                pub const m_bC4Activated: usize = 0x12D0; // bool
                pub const m_bTenSecWarning: usize = 0x12D1; // bool
                pub const m_flDefuseLength: usize = 0x12D4; // float32
                pub const m_flDefuseCountDown: usize = 0x12D8; // GameTime_t
                pub const m_bBombDefused: usize = 0x12DC; // bool
                pub const m_hBombDefuser: usize = 0x12E0; // CHandle<C_CSPlayerPawn>
                pub const m_AttributeManager: usize = 0x12E8; // C_AttributeContainer
                pub const m_hDefuserMultimeter: usize = 0x18F8; // CHandle<C_Multimeter>
                pub const m_flNextRadarFlashTime: usize = 0x18FC; // GameTime_t
                pub const m_bRadarFlash: usize = 0x1900; // bool
                pub const m_pBombDefuser: usize = 0x1904; // CHandle<C_CSPlayerPawn>
                pub const m_fLastDefuseTime: usize = 0x1908; // GameTime_t
                pub const m_pPredictionOwner: usize = 0x1910; // CBasePlayerController*
                pub const m_vecC4ExplodeSpectatePos: usize = 0x1918; // VectorWS
                pub const m_vecC4ExplodeSpectateAng: usize = 0x1924; // QAngle
                pub const m_flC4ExplodeSpectateDuration: usize = 0x1930; // float32
            }
            // Parent: None
            // Field count: 4
            pub mod CCSCustomHudLayoutState {
                pub const m_playerSlot: usize = 0x30; // CPlayerSlot
                pub const m_bInputCaptureEnabled: usize = 0x34; // bool
                pub const m_vecHasClasses: usize = 0x38; // C_NetworkUtlVectorBase<HUDPanelHasClass_t>
                pub const m_vecDialogVariableStrings: usize = 0x50; // C_NetworkUtlVectorBase<HUDPanelDialogVariableString_t>
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGO_WingmanIntroCharacterPosition {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterName {
                pub const m_iFilterName: usize = 0x638; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 9
            pub mod C_RagdollProp {
                pub const m_ragEnabled: usize = 0x1268; // C_NetworkUtlVectorBase<bool>
                pub const m_ragPos: usize = 0x1280; // C_NetworkUtlVectorBase<Vector>
                pub const m_ragAngles: usize = 0x1298; // C_NetworkUtlVectorBase<QAngle>
                pub const m_flBlendWeight: usize = 0x12B0; // float32
                pub const m_hRagdollSource: usize = 0x12B4; // CHandle<C_BaseEntity>
                pub const m_iEyeAttachment: usize = 0x12B8; // AttachmentHandle_t
                pub const m_flBlendWeightCurrent: usize = 0x12BC; // float32
                pub const m_parentPhysicsBoneIndices: usize = 0x12C0; // CUtlVector<int32>
                pub const m_worldSpaceBoneComputationOrder: usize = 0x12D8; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 0
            pub mod C_MapPreviewParticleSystem {
            }
            // Parent: C_BaseModelEntity
            // Field count: 18
            pub mod CBaseAnimGraph {
                pub const m_graphControllerManager: usize = 0x1098; // CAnimGraphControllerManager
                pub const m_pMainGraphController: usize = 0x1130; // CAnimGraphControllerPtr
                pub const m_bInitiallyPopulateInterpHistory: usize = 0x1138; // bool
                pub const m_bSuppressAnimEventSounds: usize = 0x113A; // bool
                pub const m_OnLayerCycleUpdated: usize = 0x1140; // CEntityOutputTemplate<float32>
                pub const m_OnExternalChoreoGraphChanged: usize = 0x1160; // CEntityIOOutput
                pub const m_bAnimGraphUpdateEnabled: usize = 0x1180; // bool
                pub const m_bAnimationUpdateScheduled: usize = 0x1181; // bool
                pub const m_vecForce: usize = 0x1184; // Vector
                pub const m_nForceBone: usize = 0x1190; // int32
                pub const m_pClientsideRagdoll: usize = 0x1198; // CBaseAnimGraph*
                pub const m_bBuiltRagdoll: usize = 0x11A0; // bool
                pub const m_pRagdollControl: usize = 0x11B0; // IPhysicsRagdollControl*
                pub const m_RagdollPose: usize = 0x11B8; // PhysicsRagdollPose_t
                pub const m_bRagdollEnabled: usize = 0x1200; // bool
                pub const m_bRagdollClientSide: usize = 0x1201; // bool
                pub const m_bShouldUpdateTransformations: usize = 0x1202; // bool
                pub const m_bHasAnimatedMaterialAttributes: usize = 0x1210; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponM249 {
            }
            // Parent: None
            // Field count: 25
            pub mod C_LocalTempEntity {
                pub const flags: usize = 0x1268; // int32
                pub const die: usize = 0x126C; // GameTime_t
                pub const m_flFrameMax: usize = 0x1270; // float32
                pub const x: usize = 0x1274; // float32
                pub const y: usize = 0x1278; // float32
                pub const fadeSpeed: usize = 0x127C; // float32
                pub const bounceFactor: usize = 0x1280; // float32
                pub const hitSound: usize = 0x1284; // int32
                pub const priority: usize = 0x1288; // int32
                pub const tentOffset: usize = 0x128C; // Vector
                pub const m_vecTempEntAngVelocity: usize = 0x1298; // QAngle
                pub const tempent_renderamt: usize = 0x12A4; // int32
                pub const m_vecNormal: usize = 0x12A8; // Vector
                pub const m_flSpriteScale: usize = 0x12B4; // float32
                pub const m_nFlickerFrame: usize = 0x12B8; // int32
                pub const m_flFrameRate: usize = 0x12BC; // float32
                pub const m_flFrame: usize = 0x12C0; // float32
                pub const m_pszImpactEffect: usize = 0x12C8; // char*
                pub const m_pszParticleEffect: usize = 0x12D0; // char*
                pub const m_bParticleCollision: usize = 0x12D8; // bool
                pub const m_iLastCollisionFrame: usize = 0x12DC; // int32
                pub const m_vLastCollisionOrigin: usize = 0x12E0; // VectorWS
                pub const m_vecTempEntVelocity: usize = 0x12EC; // Vector
                pub const m_vecPrevAbsOrigin: usize = 0x12F8; // VectorWS
                pub const m_vecTempEntAcceleration: usize = 0x1304; // Vector
            }
            // Parent: None
            // Field count: 2
            pub mod C_WeaponTaser {
                pub const m_fFireTime: usize = 0x1F50; // GameTime_t
                pub const m_nLastAttackTick: usize = 0x1F54; // int32
            }
            // Parent: C_BaseEntity
            // Field count: 0
            pub mod C_PointEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod C_SingleplayRules {
            }
            // Parent: None
            // Field count: 0
            pub mod C_PrecipitationBlocker {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_CounterTerroristTeamIntroCamera {
            }
            // Parent: C_SoundOpvarSetPointEntity
            // Field count: 0
            pub mod C_SoundOpvarSetPathCornerEntity {
            }
            // Parent: None
            // Field count: 4
            pub mod CPlayer_WeaponServices {
                pub const m_hMyWeapons: usize = 0x48; // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
                pub const m_hActiveWeapon: usize = 0x60; // CHandle<C_BasePlayerWeapon>
                pub const m_hLastWeapon: usize = 0x64; // CHandle<C_BasePlayerWeapon>
                pub const m_iAmmo: usize = 0x68; // uint16[32]
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponNegev {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponFiveSeven {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponSawedoff {
            }
            // Parent: None
            // Field count: 0
            pub mod C_TriggerVolume {
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponMP9 {
            }
            // Parent: None
            // Field count: 0
            pub mod C_DynamicPropAlias_prop_dynamic_override {
            }
            // Parent: None
            // Field count: 0
            pub mod CEnvSoundscapeTriggerable {
            }
            // Parent: None
            // Field count: 5
            pub mod C_PlayerPing {
                pub const m_hPlayer: usize = 0x630; // CHandle<C_CSPlayerPawn>
                pub const m_hPingedEntity: usize = 0x634; // CHandle<C_BaseEntity>
                pub const m_iType: usize = 0x638; // int32
                pub const m_bUrgent: usize = 0x63C; // bool
                pub const m_szPlaceName: usize = 0x63D; // char[18]
            }
            // Parent: None
            // Field count: 0
            pub mod C_AK47 {
            }
            // Parent: C_BaseEntity
            // Field count: 10
            pub mod C_CSGO_MapPreviewCameraPathNode {
                pub const m_szParentPathUniqueID: usize = 0x600; // CUtlSymbolLarge
                pub const m_nPathIndex: usize = 0x608; // int32
                pub const m_vInTangentLocal: usize = 0x60C; // Vector
                pub const m_vOutTangentLocal: usize = 0x618; // Vector
                pub const m_flFOV: usize = 0x624; // float32
                pub const m_flCameraSpeed: usize = 0x628; // float32
                pub const m_flEaseIn: usize = 0x62C; // float32
                pub const m_flEaseOut: usize = 0x630; // float32
                pub const m_vInTangentWorld: usize = 0x634; // Vector
                pub const m_vOutTangentWorld: usize = 0x640; // Vector
            }
            // Parent: None
            // Field count: 10
            pub mod C_CSPlayerResource {
                pub const m_bHostageAlive: usize = 0x600; // bool[12]
                pub const m_isHostageFollowingSomeone: usize = 0x60C; // bool[12]
                pub const m_iHostageEntityIDs: usize = 0x618; // CEntityIndex[12]
                pub const m_bombsiteCenterA: usize = 0x648; // VectorWS
                pub const m_bombsiteCenterB: usize = 0x654; // VectorWS
                pub const m_hostageRescueX: usize = 0x660; // int32[4]
                pub const m_hostageRescueY: usize = 0x670; // int32[4]
                pub const m_hostageRescueZ: usize = 0x680; // int32[4]
                pub const m_bEndMatchNextMapAllVoted: usize = 0x690; // bool
                pub const m_foundGoalPositions: usize = 0x691; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 2
            pub mod CSkyboxReference {
                pub const m_worldGroupId: usize = 0x600; // WorldGroupId_t
                pub const m_hSkyCamera: usize = 0x604; // CHandle<C_SkyCamera>
            }
            // Parent: None
            // Field count: 0
            pub mod C_IncendiaryGrenade {
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterClass {
                pub const m_iFilterClass: usize = 0x638; // CUtlSymbolLarge
            }
            // Parent: C_PointCamera
            // Field count: 1
            pub mod C_PointCameraVFOV {
                pub const m_flVerticalFOV: usize = 0x660; // float32
            }
            // Parent: CPathSimple
            // Field count: 4
            pub mod CPathWithDynamicNodes {
                pub const m_vecPathNodes: usize = 0x710; // C_NetworkUtlVectorBase<CHandle<CPathNode>>
                pub const m_xInitialPathWorldToLocal: usize = 0x730; // CTransform
                pub const m_eDesiredDirection: usize = 0x750; // DirectionAlongSimplePath_t
                pub const m_bIgnoreParentRotation: usize = 0x754; // bool
            }
            // Parent: C_BaseEntity
            // Field count: 3
            pub mod CBaseFilter {
                pub const m_bNegated: usize = 0x600; // bool
                pub const m_OnPass: usize = 0x608; // CEntityIOOutput
                pub const m_OnFail: usize = 0x620; // CEntityIOOutput
            }
            // Parent: None
            // Field count: 1
            pub mod WeaponPurchaseTracker_t {
                pub const m_weaponPurchases: usize = 0x8; // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
            }
            // Parent: C_PointEntity
            // Field count: 15
            pub mod CMapInfo {
                pub const m_iBuyingStatus: usize = 0x600; // int32
                pub const m_flBombRadius: usize = 0x604; // float32
                pub const m_iPetPopulation: usize = 0x608; // int32
                pub const m_bUseNormalSpawnsForDM: usize = 0x60C; // bool
                pub const m_bDisableAutoGeneratedDMSpawns: usize = 0x60D; // bool
                pub const m_flBotMaxVisionDistance: usize = 0x610; // float32
                pub const m_iHostageCount: usize = 0x614; // int32
                pub const m_bFadePlayerVisibilityFarZ: usize = 0x618; // bool
                pub const m_bRainTraceToSkyEnabled: usize = 0x619; // bool
                pub const m_bGPUCullSkybox: usize = 0x61A; // bool
                pub const m_flEnvRainStrength: usize = 0x61C; // float32
                pub const m_flEnvPuddleRippleStrength: usize = 0x620; // float32
                pub const m_flEnvPuddleRippleDirection: usize = 0x624; // float32
                pub const m_flEnvWetnessCoverage: usize = 0x628; // float32
                pub const m_flEnvWetnessDryingAmount: usize = 0x62C; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_EndOfMatchCamera {
            }
            // Parent: CBaseAnimGraph
            // Field count: 12
            pub mod C_BaseGrenade {
                pub const m_bHasWarnedAI: usize = 0x1268; // bool
                pub const m_bIsSmokeGrenade: usize = 0x1269; // bool
                pub const m_bIsLive: usize = 0x126A; // bool
                pub const m_DmgRadius: usize = 0x126C; // float32
                pub const m_flDetonateTime: usize = 0x1270; // GameTime_t
                pub const m_flWarnAITime: usize = 0x1274; // float32
                pub const m_flDamage: usize = 0x1278; // float32
                pub const m_iszBounceSound: usize = 0x1280; // CUtlSymbolLarge
                pub const m_ExplosionSound: usize = 0x1288; // CUtlString
                pub const m_hThrower: usize = 0x1290; // CHandle<C_CSPlayerPawn>
                pub const m_flNextAttack: usize = 0x12A8; // GameTime_t
                pub const m_hOriginalThrower: usize = 0x12AC; // CHandle<C_CSPlayerPawn>
            }
            // Parent: None
            // Field count: 16
            pub mod C_PlayerSprayDecal {
                pub const m_nUniqueID: usize = 0x1098; // int32
                pub const m_unAccountID: usize = 0x109C; // uint32
                pub const m_unTraceID: usize = 0x10A0; // uint32
                pub const m_rtGcTime: usize = 0x10A4; // uint32
                pub const m_vecEndPos: usize = 0x10A8; // VectorWS
                pub const m_vecStart: usize = 0x10B4; // VectorWS
                pub const m_vecLeft: usize = 0x10C0; // Vector
                pub const m_vecNormal: usize = 0x10CC; // Vector
                pub const m_nPlayer: usize = 0x10D8; // int32
                pub const m_nEntity: usize = 0x10DC; // int32
                pub const m_nHitbox: usize = 0x10E0; // int32
                pub const m_flCreationTime: usize = 0x10E4; // float32
                pub const m_nTintID: usize = 0x10E8; // int32
                pub const m_nVersion: usize = 0x10EC; // uint8
                pub const m_ubSignature: usize = 0x10ED; // uint8[128]
                pub const m_SprayRenderHelper: usize = 0x1178; // CPlayerSprayDecalRenderHelper
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_LimitCount__Criteria_t {
                pub const m_bLimitCountPasses: usize = 0x0; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod C_CS2HudModelArms {
            }
            // Parent: None
            // Field count: 0
            pub mod C_LightSpotEntity {
            }
            // Parent: None
            // Field count: 3
            pub mod CCSGameModeRules_Deathmatch {
                pub const m_flDMBonusStartTime: usize = 0x30; // GameTime_t
                pub const m_flDMBonusTimeLength: usize = 0x34; // float32
                pub const m_sDMBonusWeapon: usize = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseExecCursor {
            }
            // Parent: C_BaseModelEntity
            // Field count: 24
            pub mod C_Sprite {
                pub const m_hSpriteMaterial: usize = 0x1098; // CStrongHandle<InfoForResourceTypeIMaterial2>
                pub const m_hAttachedToEntity: usize = 0x10A0; // CHandle<C_BaseEntity>
                pub const m_nAttachment: usize = 0x10A4; // AttachmentHandle_t
                pub const m_flSpriteFramerate: usize = 0x10A8; // float32
                pub const m_flFrame: usize = 0x10AC; // float32
                pub const m_flDieTime: usize = 0x10B0; // GameTime_t
                pub const m_nBrightness: usize = 0x10C0; // uint32
                pub const m_flBrightnessDuration: usize = 0x10C4; // float32
                pub const m_flSpriteScale: usize = 0x10C8; // float32
                pub const m_flScaleDuration: usize = 0x10CC; // float32
                pub const m_bWorldSpaceScale: usize = 0x10D0; // bool
                pub const m_flGlowProxySize: usize = 0x10D4; // float32
                pub const m_flHDRColorScale: usize = 0x10D8; // float32
                pub const m_flLastTime: usize = 0x10DC; // GameTime_t
                pub const m_flMaxFrame: usize = 0x10E0; // float32
                pub const m_flStartScale: usize = 0x10E4; // float32
                pub const m_flDestScale: usize = 0x10E8; // float32
                pub const m_flScaleTimeStart: usize = 0x10EC; // GameTime_t
                pub const m_nStartBrightness: usize = 0x10F0; // int32
                pub const m_nDestBrightness: usize = 0x10F4; // int32
                pub const m_flBrightnessTimeStart: usize = 0x10F8; // GameTime_t
                pub const m_nSpriteWidth: usize = 0x1108; // int32
                pub const m_nSpriteHeight: usize = 0x110C; // int32
                pub const m_flSpeed: usize = 0x1110; // float32
            }
            // Parent: C_BaseEntity
            // Field count: 2
            pub mod C_CsmFovOverride {
                pub const m_cameraName: usize = 0x600; // CUtlString
                pub const m_flCsmFovOverrideValue: usize = 0x608; // float32
            }
            // Parent: None
            // Field count: 0
            pub mod C_WeaponGlock {
            }
            // Parent: None
            // Field count: 1
            pub mod C_PhysicsProp {
                pub const m_bAwake: usize = 0x13E0; // bool
            }
            // Parent: CBaseFilter
            // Field count: 1
            pub mod CFilterTeam {
                pub const m_iFilterTeam: usize = 0x638; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod C_SmokeGrenade {
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel {
            }
            // Parent: None
            // Field count: 0
            pub mod CCSGO_RushIntroCharacterPosition {
            }
            // Parent: None
            // Field count: 0
            pub mod CCSPlayer_DamageReactServices {
            }
            // Parent: C_BaseEntity
            // Field count: 3
            pub mod C_EntityFlame {
                pub const m_hEntAttached: usize = 0x600; // CHandle<C_BaseEntity>
                pub const m_hOldAttached: usize = 0x628; // CHandle<C_BaseEntity>
                pub const m_bCheapEffect: usize = 0x62C; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CBaseAnimGraphAlias_baseanimating {
            }
            // Parent: C_BaseEntity
            // Field count: 17
            pub mod CBasePlayerController {
                pub const m_CommandContext: usize = 0x608; // C_CommandContext
                pub const m_nInButtonsWhichAreToggles: usize = 0x6B0; // uint64
                pub const m_nTickBase: usize = 0x6B8; // uint32
                pub const m_hPawn: usize = 0x6BC; // CHandle<C_BasePlayerPawn>
                pub const m_bKnownTeamMismatch: usize = 0x6C0; // bool
                pub const m_hPredictedPawn: usize = 0x6C4; // CHandle<C_BasePlayerPawn>
                pub const m_nSplitScreenSlot: usize = 0x6CC; // CSplitScreenSlot
                pub const m_hSplitOwner: usize = 0x6D0; // CHandle<CBasePlayerController>
                pub const m_hSplitScreenPlayers: usize = 0x6D8; // CUtlVector<CHandle<CBasePlayerController>>
                pub const m_bIsHLTV: usize = 0x6F0; // bool
                pub const m_iConnected: usize = 0x6F4; // PlayerConnectedState
                pub const m_iMostConnected: usize = 0x6F8; // PlayerConnectedState
                pub const m_iszPlayerName: usize = 0x6FC; // char[128]
                pub const m_steamID: usize = 0x788; // uint64
                pub const m_bIsLocalPlayerController: usize = 0x790; // bool
                pub const m_bNoClipEnabled: usize = 0x791; // bool
                pub const m_iDesiredFOV: usize = 0x794; // uint32
            }
            // Parent: None
            // Field count: 0
            pub mod C_CSGO_EndOfMatchLineupEndpoint {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_light_barn_t {
                pub const color: usize = 0x0; // Vector
                pub const angle: usize = 0xC; // QAngle
                pub const brightness: usize = 0x18; // float32
                pub const orbit_distance: usize = 0x1C; // float32
            }
            // Parent: None
            // Field count: 5
            pub mod CInterpolatedValue {
                pub const m_flStartTime: usize = 0x0; // float32
                pub const m_flEndTime: usize = 0x4; // float32
                pub const m_flStartValue: usize = 0x8; // float32
                pub const m_flEndValue: usize = 0xC; // float32
                pub const m_nInterpType: usize = 0x10; // int32
            }
            // Parent: None
            // Field count: 13
            pub mod CFlashlightEffect {
                pub const m_bIsOn: usize = 0x10; // bool
                pub const m_bMuzzleFlashEnabled: usize = 0x20; // bool
                pub const m_flMuzzleFlashBrightness: usize = 0x24; // float32
                pub const m_quatMuzzleFlashOrientation: usize = 0x30; // Quaternion
                pub const m_vecMuzzleFlashOrigin: usize = 0x40; // VectorWS
                pub const m_flFov: usize = 0x4C; // float32
                pub const m_flFarZ: usize = 0x50; // float32
                pub const m_flLinearAtten: usize = 0x54; // float32
                pub const m_bCastsShadows: usize = 0x58; // bool
                pub const m_flCurrentPullBackDist: usize = 0x5C; // float32
                pub const m_FlashlightTexture: usize = 0x60; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_MuzzleFlashTexture: usize = 0x68; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_textureName: usize = 0x70; // char[64]
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
            pub mod CInventoryImageData {
                pub const m_nNodeType: usize = 0x0; // InventoryNodeType_t
                pub const name: usize = 0x8; // CUtlString
                pub const inventory_image_data: usize = 0x10; // inv_image_data_t
            }
            // Parent: None
            // Field count: 0
            pub mod CPlayerSprayDecalRenderHelper {
            }
            // Parent: None
            // Field count: 13
            pub mod C_IronSightController {
                pub const m_bIronSightAvailable: usize = 0x10; // bool
                pub const m_flIronSightAmount: usize = 0x14; // float32
                pub const m_flIronSightAmountGained: usize = 0x18; // float32
                pub const m_flIronSightAmountBiased: usize = 0x1C; // float32
                pub const m_flIronSightAmount_Interpolated: usize = 0x20; // float32
                pub const m_flIronSightAmountGained_Interpolated: usize = 0x24; // float32
                pub const m_flIronSightAmountBiased_Interpolated: usize = 0x28; // float32
                pub const m_flInterpolationLastUpdated: usize = 0x2C; // float32
                pub const m_angDeltaAverage: usize = 0x30; // QAngle[8]
                pub const m_angViewLast: usize = 0x90; // QAngle
                pub const m_vecDotCoords: usize = 0x9C; // Vector2D
                pub const m_flFiringInaccuracyExtraWidthMultiplier: usize = 0xA4; // float32
                pub const m_flSpeedRatio: usize = 0xA8; // float32
            }
            // Parent: None
            // Field count: 43
            pub mod CGlobalLightBase {
                pub const m_bSpotLight: usize = 0x10; // bool
                pub const m_SpotLightOrigin: usize = 0x14; // VectorWS
                pub const m_SpotLightAngles: usize = 0x20; // QAngle
                pub const m_ShadowDirection: usize = 0x2C; // Vector
                pub const m_AmbientDirection: usize = 0x38; // Vector
                pub const m_SpecularDirection: usize = 0x44; // Vector
                pub const m_InspectorSpecularDirection: usize = 0x50; // Vector
                pub const m_flSpecularPower: usize = 0x5C; // float32
                pub const m_flSpecularIndependence: usize = 0x60; // float32
                pub const m_SpecularColor: usize = 0x64; // Color
                pub const m_bStartDisabled: usize = 0x68; // bool
                pub const m_bEnabled: usize = 0x69; // bool
                pub const m_LightColor: usize = 0x6C; // Color
                pub const m_AmbientColor1: usize = 0x70; // Color
                pub const m_AmbientColor2: usize = 0x74; // Color
                pub const m_AmbientColor3: usize = 0x78; // Color
                pub const m_flSunDistance: usize = 0x7C; // float32
                pub const m_flFOV: usize = 0x80; // float32
                pub const m_flNearZ: usize = 0x84; // float32
                pub const m_flFarZ: usize = 0x88; // float32
                pub const m_bEnableShadows: usize = 0x8C; // bool
                pub const m_bOldEnableShadows: usize = 0x8D; // bool
                pub const m_bBackgroundClearNotRequired: usize = 0x8E; // bool
                pub const m_flCloudScale: usize = 0x90; // float32
                pub const m_flCloud1Speed: usize = 0x94; // float32
                pub const m_flCloud1Direction: usize = 0x98; // float32
                pub const m_flCloud2Speed: usize = 0x9C; // float32
                pub const m_flCloud2Direction: usize = 0xA0; // float32
                pub const m_flAmbientScale1: usize = 0xB0; // float32
                pub const m_flAmbientScale2: usize = 0xB4; // float32
                pub const m_flGroundScale: usize = 0xB8; // float32
                pub const m_flLightScale: usize = 0xBC; // float32
                pub const m_flFoWDarkness: usize = 0xC0; // float32
                pub const m_bEnableSeparateSkyboxFog: usize = 0xC4; // bool
                pub const m_vFowColor: usize = 0xC8; // Vector
                pub const m_ViewOrigin: usize = 0xD4; // VectorWS
                pub const m_ViewAngles: usize = 0xE0; // QAngle
                pub const m_flViewFoV: usize = 0xEC; // float32
                pub const m_WorldPoints: usize = 0xF0; // VectorWS[8]
                pub const m_vFogOffsetLayer0: usize = 0x4A8; // Vector2D
                pub const m_vFogOffsetLayer1: usize = 0x4B0; // Vector2D
                pub const m_hEnvWind: usize = 0x4B8; // CHandle<C_BaseEntity>
                pub const m_hEnvSky: usize = 0x4BC; // CHandle<C_BaseEntity>
            }
        }
    }
}
