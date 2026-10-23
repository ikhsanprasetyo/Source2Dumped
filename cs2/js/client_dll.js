// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-10-23 09:27:00.180539200 +07:00

export const Schemas = {
    client_dll: {
        C_BaseCombatCharacter__WaterWakeMode_t: {
            WATER_WAKE_NONE: 0x0,
            WATER_WAKE_IDLE: 0x1,
            WATER_WAKE_WALKING: 0x2,
            WATER_WAKE_RUNNING: 0x3,
            WATER_WAKE_WATER_OVERHEAD: 0x4,
        },
        PulseBestOutflowRules_t: {
            SORT_BY_NUMBER_OF_VALID_CRITERIA: 0x0,
            SORT_BY_OUTFLOW_INDEX: 0x1,
        },
        PulseCursorCancelPriority_t: {
            None: 0x0,
            CancelOnSucceeded: 0x1,
            SoftCancel: 0x2,
            HardCancel: 0x3,
        },
        PulseMethodCallMode_t: {
            SYNC_WAIT_FOR_COMPLETION: 0x0,
            ASYNC_FIRE_AND_FORGET: 0x1,
        },
        PulseCursorWakePriority_t: {
            WakeElegantly: 0x0,
            WakeImmediate: 0x1,
        },
        CompositeMaterialInputLooseVariableType_t: {
            LOOSE_VARIABLE_TYPE_BOOLEAN: 0x0,
            LOOSE_VARIABLE_TYPE_INTEGER1: 0x1,
            LOOSE_VARIABLE_TYPE_INTEGER2: 0x2,
            LOOSE_VARIABLE_TYPE_INTEGER3: 0x3,
            LOOSE_VARIABLE_TYPE_INTEGER4: 0x4,
            LOOSE_VARIABLE_TYPE_FLOAT1: 0x5,
            LOOSE_VARIABLE_TYPE_FLOAT2: 0x6,
            LOOSE_VARIABLE_TYPE_FLOAT3: 0x7,
            LOOSE_VARIABLE_TYPE_FLOAT4: 0x8,
            LOOSE_VARIABLE_TYPE_COLOR4: 0x9,
            LOOSE_VARIABLE_TYPE_STRING: 0xA,
            LOOSE_VARIABLE_TYPE_SYSTEMVAR: 0xB,
            LOOSE_VARIABLE_TYPE_RESOURCE_MATERIAL: 0xC,
            LOOSE_VARIABLE_TYPE_RESOURCE_TEXTURE: 0xD,
            LOOSE_VARIABLE_TYPE_PANORAMA_RENDER: 0xE,
        },
        CompositeMaterialInputTextureType_t: {
            INPUT_TEXTURE_TYPE_DEFAULT: 0x0,
            INPUT_TEXTURE_TYPE_NORMALMAP: 0x1,
            INPUT_TEXTURE_TYPE_COLOR: 0x2,
            INPUT_TEXTURE_TYPE_MASKS: 0x3,
            INPUT_TEXTURE_TYPE_ROUGHNESS: 0x4,
            INPUT_TEXTURE_TYPE_PEARLESCENCE_MASK: 0x5,
            INPUT_TEXTURE_TYPE_AO: 0x6,
            INPUT_TEXTURE_TYPE_POSITION: 0x7,
        },
        InventoryNodeType_t: {
            NODE_TYPE_INVALID: 0x0,
            VIRTUAL_NODE_SCHEMA_PREFAB: 0x1,
            VIRTUAL_NODE_SCHEMA_ITEMDEF: 0x2,
            VIRTUAL_NODE_SCHEMA_STICKER: 0x3,
            VIRTUAL_NODE_SCHEMA_KEYCHAIN: 0x4,
            CONCRETE_NODE_SCHEMA_PREFAB: 0x5,
            CONCRETE_NODE_SCHEMA_ITEMDEF: 0x6,
            CONCRETE_NODE_SCHEMA_STICKER: 0x7,
            CONCRETE_NODE_SCHEMA_KEYCHAIN: 0x8,
        },
        CompositeMaterialInputContainerSourceType_t: {
            CONTAINER_SOURCE_TYPE_TARGET_MATERIAL: 0x0,
            CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR: 0x1,
            CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL: 0x2,
            CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES: 0x3,
            CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR: 0x4,
            CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL: 0x5,
        },
        CompMatPropertyMutatorType_t: {
            COMP_MAT_PROPERTY_MUTATOR_INIT: 0x0,
            COMP_MAT_PROPERTY_MUTATOR_COPY_MATCHING_KEYS: 0x1,
            COMP_MAT_PROPERTY_MUTATOR_COPY_KEYS_WITH_SUFFIX: 0x2,
            COMP_MAT_PROPERTY_MUTATOR_COPY_PROPERTY: 0x3,
            COMP_MAT_PROPERTY_MUTATOR_SET_VALUE: 0x4,
            COMP_MAT_PROPERTY_MUTATOR_GENERATE_TEXTURE: 0x5,
            COMP_MAT_PROPERTY_MUTATOR_CONDITIONAL_MUTATORS: 0x6,
            COMP_MAT_PROPERTY_MUTATOR_POP_INPUT_QUEUE: 0x7,
            COMP_MAT_PROPERTY_MUTATOR_DRAW_TEXT: 0x8,
            COMP_MAT_PROPERTY_MUTATOR_RANDOM_ROLL_INPUT_VARIABLES: 0x9,
        },
        CompositeMaterialVarSystemVar_t: {
            COMPMATSYSVAR_COMPOSITETIME: 0x0,
            COMPMATSYSVAR_EMPTY_RESOURCE_SPACER: 0x1,
        },
        P2P_Messages: {
            p2p_TextMessage: 0x100,
            p2p_Voice: 0x101,
            p2p_Ping: 0x102,
            p2p_VRAvatarPosition: 0x103,
            p2p_WatchSynchronization: 0x104,
            p2p_FightingGame_GameData: 0x105,
            p2p_FightingGame_Connection: 0x106,
        },
        CompositeMaterialMatchFilterType_t: {
            MATCH_FILTER_MATERIAL_ATTRIBUTE_EXISTS: 0x0,
            MATCH_FILTER_MATERIAL_SHADER: 0x1,
            MATCH_FILTER_MATERIAL_NAME_SUBSTR: 0x2,
            MATCH_FILTER_MATERIAL_ATTRIBUTE_EQUALS: 0x3,
            MATCH_FILTER_MATERIAL_PROPERTY_EXISTS: 0x4,
            MATCH_FILTER_MATERIAL_PROPERTY_EQUALS: 0x5,
        },
        CompMatPropertyMutatorConditionType_t: {
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_EXISTS: 0x0,
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EXISTS: 0x1,
            COMP_MAT_MUTATOR_CONDITION_INPUT_CONTAINER_VALUE_EQUALS: 0x2,
        },
        C_CSGO_TeamIntroCharacterPosition: {
        },
        C_FireCrackerBlast: {
        },
        CCSGO_WingmanIntroCounterTerroristPosition: {
        },
        C_SceneEntity__QueuedEvents_t: {
            starttime: 0x0, // float32
        },
        CCSPlayer_PingServices: {
            m_hPlayerPing: 0x48, // CHandle<C_PlayerPing>
        },
        CEconItemAttribute: {
            m_iAttributeDefinitionIndex: 0x30, // uint16
            m_flValue: 0x34, // float32
            m_flInitialValue: 0x38, // float32
            m_nRefundableCurrency: 0x3C, // int32
            m_bSetBonus: 0x40, // bool
        },
        CFuncRetakeBarrier: {
        },
        C_SkyCamera: {
            m_skyboxData: 0x600, // sky3dparams_t
            m_skyboxSlotToken: 0x690, // CUtlStringToken
            m_bUseAngles: 0x694, // bool
            m_pNext: 0x698, // C_SkyCamera*
        },
        C_FuncRotating: {
        },
        C_SoundOpvarSetPointBase: {
            m_iszStackName: 0x600, // CUtlSymbolLarge
            m_iszOperatorName: 0x608, // CUtlSymbolLarge
            m_iszOpvarName: 0x610, // CUtlSymbolLarge
            m_iOpvarIndex: 0x618, // int32
            m_bUseAutoCompare: 0x61C, // bool
            m_bFastRefresh: 0x61D, // bool
        },
        C_EnvCubemapFog: {
            m_flEndDistance: 0x600, // float32
            m_flStartDistance: 0x604, // float32
            m_flFogFalloffExponent: 0x608, // float32
            m_bHeightFogEnabled: 0x60C, // bool
            m_flFogHeightWidth: 0x610, // float32
            m_flFogHeightEnd: 0x614, // float32
            m_flFogHeightStart: 0x618, // float32
            m_flFogHeightExponent: 0x61C, // float32
            m_flLODBias: 0x620, // float32
            m_bActive: 0x624, // bool
            m_bStartDisabled: 0x625, // bool
            m_flFogMaxOpacity: 0x628, // float32
            m_nCubemapSourceType: 0x62C, // int32
            m_hSkyMaterial: 0x630, // CStrongHandle<InfoForResourceTypeIMaterial2>
            m_iszSkyEntity: 0x638, // CUtlSymbolLarge
            m_nHeightFogType: 0x640, // int32
            m_nFogHeightBlendMode: 0x644, // int32
            m_nFogHeightCoordinateSpace: 0x648, // int32
            m_nDistanceFogType: 0x64C, // int32
            m_DistanceFogCurveString: 0x650, // CUtlSymbolLarge
            m_HeightFogCurveString: 0x658, // CUtlSymbolLarge
            m_hFogCubemapTexture: 0x6F0, // CStrongHandle<InfoForResourceTypeCTextureBase>
            m_bHasHeightFogEnd: 0x6F8, // bool
            m_bFirstTime: 0x6F9, // bool
        },
        C_CSGO_TeamSelectTerroristPosition: {
        },
        C_EnvParticleGlow: {
            m_flAlphaScale: 0x1668, // float32
            m_flRadiusScale: 0x166C, // float32
            m_flSelfIllumScale: 0x1670, // float32
            m_ColorTint: 0x1674, // Color
            m_hTextureOverride: 0x1678, // CStrongHandle<InfoForResourceTypeCTextureBase>
        },
        CCS_PortraitWorldCallbackHandler: {
        },
        CCSPlayerController_InventoryServices: {
            m_vecNetworkableLoadout: 0x40, // CUtlVector<CCSPlayerController_InventoryServices::NetworkedLoadoutSlot_t>
            m_unMusicID: 0x58, // uint16
            m_rank: 0x5C, // MedalRank_t[6]
            m_nPersonaDataPublicLevel: 0x74, // int32
            m_nPersonaDataPublicCommendsLeader: 0x78, // int32
            m_nPersonaDataPublicCommendsTeacher: 0x7C, // int32
            m_nPersonaDataPublicCommendsFriendly: 0x80, // int32
            m_nPersonaDataXpTrailLevel: 0x84, // int32
            m_vecServerAuthoritativeWeaponSlots: 0x88, // C_UtlVectorEmbeddedNetworkVar<ServerAuthoritativeWeaponSlot_t>
        },
        CCSPlayerModernJump: {
            m_nLastActualJumpPressTick: 0x10, // GameTick_t
            m_flLastActualJumpPressFrac: 0x14, // float32
            m_nLastUsableJumpPressTick: 0x18, // GameTick_t
            m_flLastUsableJumpPressFrac: 0x1C, // float32
            m_nLastLandedTick: 0x20, // GameTick_t
            m_flLastLandedFrac: 0x24, // float32
            m_flLastLandedVelocityX: 0x28, // float32
            m_flLastLandedVelocityY: 0x2C, // float32
            m_flLastLandedVelocityZ: 0x30, // float32
        },
        C_EconEntity__AttachedModelData_t: {
            m_iModelDisplayFlags: 0x0, // int32
        },
        CPulse_ResumePoint: {
        },
        CTriggerFan: {
            m_vFanOriginOffset: 0x1180, // Vector
            m_vDirection: 0x118C, // Vector
            m_bPushTowardsInfoTarget: 0x1198, // bool
            m_bPushAwayFromInfoTarget: 0x1199, // bool
            m_qNoiseDelta: 0x11A0, // Quaternion
            m_hInfoFan: 0x11B0, // CHandle<CInfoFan>
            m_flForce: 0x11B4, // float32
            m_bFalloff: 0x11B8, // bool
            m_RampTimer: 0x11C0, // CountdownTimer
        },
        C_HostageCarriableProp: {
        },
        C_BulletHitModel: {
            m_matLocal: 0x1268, // matrix3x4_t
            m_iBoneIndex: 0x1298, // int32
            m_hPlayerParent: 0x129C, // CHandle<C_BaseEntity>
            m_bIsHit: 0x12A0, // bool
            m_flTimeCreated: 0x12A4, // float32
            m_vecStartPos: 0x12A8, // VectorWS
        },
        C_FuncElectrifiedVolume: {
            m_nAmbientEffect: 0x1098, // ParticleIndex_t
            m_EffectName: 0x10A0, // CUtlSymbolLarge
            m_bState: 0x10A8, // bool
        },
        C_MapVetoPickController: {
            m_nDraftType: 0x610, // int32
            m_nTeamWinningCoinToss: 0x614, // int32
            m_nTeamWithFirstChoice: 0x618, // int32[64]
            m_nVoteMapIdsList: 0x718, // int32[7]
            m_nAccountIDs: 0x734, // int32[64]
            m_nMapId0: 0x834, // int32[64]
            m_nMapId1: 0x934, // int32[64]
            m_nMapId2: 0xA34, // int32[64]
            m_nMapId3: 0xB34, // int32[64]
            m_nMapId4: 0xC34, // int32[64]
            m_nMapId5: 0xD34, // int32[64]
            m_nStartingSide0: 0xE34, // int32[64]
            m_nCurrentPhase: 0xF34, // int32
            m_nPhaseStartTick: 0xF38, // int32
            m_nPhaseDurationTicks: 0xF3C, // int32
            m_nPostDataUpdateTick: 0xF40, // int32
            m_bDisabledHud: 0xF44, // bool
        },
        C_CSGO_EndOfMatchCharacterPosition: {
        },
        CPointOffScreenIndicatorUi: {
            m_bBeenEnabled: 0x1300, // bool
            m_bHide: 0x1301, // bool
            m_flSeenTargetTime: 0x1304, // float32
            m_pTargetPanel: 0x1308, // C_PointClientUIWorldPanel*
        },
        CCSObserver_UseServices: {
        },
        CCSMinimapVolume: {
            m_strMinimapName: 0x1198, // CUtlString
        },
        CCSPlayer_UseServices: {
        },
        C_CSGO_CounterTerroristWingmanIntroCamera: {
        },
        CInfoFan: {
            m_fFanForceMaxRadius: 0x640, // float32
            m_fFanForceMinRadius: 0x644, // float32
            m_flCurveDistRange: 0x648, // float32
            m_FanForceCurveString: 0x650, // CUtlSymbolLarge
        },
        C_VoteController: {
            m_iActiveIssueIndex: 0x610, // int32
            m_iOnlyTeamToVote: 0x614, // int32
            m_nVoteOptionCount: 0x618, // int32[5]
            m_nPotentialVotes: 0x62C, // int32
            m_bVotesDirty: 0x630, // bool
            m_bTypeDirty: 0x631, // bool
            m_bIsYesNoVote: 0x632, // bool
        },
        C_C4: {
            m_activeLightParticleIndex: 0x1F20, // ParticleIndex_t
            m_eActiveLightEffect: 0x1F24, // C4LightEffect_t
            m_bStartedArming: 0x1F28, // bool
            m_fArmedTime: 0x1F2C, // GameTime_t
            m_bBombPlacedAnimation: 0x1F30, // bool
            m_bIsPlantingViaUse: 0x1F31, // bool
            m_entitySpottedState: 0x1F38, // EntitySpottedState_t
            m_nSpotRules: 0x1F50, // int32
            m_bPlayedArmingBeeps: 0x1F54, // bool[7]
            m_bBombPlanted: 0x1F5B, // bool
        },
        C_CSPlayerPawnBase: {
            m_pPingServices: 0x14D8, // CCSPlayer_PingServices*
            m_previousPlayerState: 0x14E0, // CSPlayerState
            m_iPlayerState: 0x14E4, // CSPlayerState
            m_bHasMovedSinceSpawn: 0x14E8, // bool
            m_flLastSpawnTimeIndex: 0x14EC, // GameTime_t
            m_iProgressBarDuration: 0x14F0, // int32
            m_flProgressBarStartTime: 0x14F4, // float32
            m_flClientDeathTime: 0x14F8, // GameTime_t
            m_flFlashBangTime: 0x14FC, // float32
            m_flFlashScreenshotAlpha: 0x1500, // float32
            m_flFlashOverlayAlpha: 0x1504, // float32
            m_bFlashBuildUp: 0x1508, // bool
            m_bFlashDspHasBeenCleared: 0x1509, // bool
            m_bFlashScreenshotHasBeenGrabbed: 0x150A, // bool
            m_flFlashMaxAlpha: 0x150C, // float32
            m_flFlashDuration: 0x1510, // float32
            m_flClientHealthFadeChangeTimestamp: 0x1514, // GameTime_t
            m_nClientHealthFadeParityValue: 0x1518, // int32
            m_fNextThinkPushAway: 0x151C, // float32
            m_flCurrentMusicStartTime: 0x1524, // float32
            m_flMusicRoundStartTime: 0x1528, // float32
            m_bDeferStartMusicOnWarmup: 0x152C, // bool
            m_flLastSmokeOverlayAlpha: 0x1530, // float32
            m_flLastSmokeAge: 0x1534, // float32
            m_vLastSmokeOverlayColor: 0x1538, // Vector
            m_hOriginalController: 0x1560, // CHandle<CCSPlayerController>
        },
        C_BreakableProp: {
            m_CPropDataComponent: 0x12A0, // CPropDataComponent
            m_OnStartDeath: 0x12E0, // CEntityIOOutput
            m_OnBreak: 0x12F8, // CEntityIOOutput
            m_OnHealthChanged: 0x1310, // CEntityOutputTemplate<float32>
            m_OnTakeDamage: 0x1330, // CEntityIOOutput
            m_impactEnergyScale: 0x1348, // float32
            m_iMinHealthDmg: 0x134C, // int32
            m_flPressureDelay: 0x1350, // float32
            m_flDefBurstScale: 0x1354, // float32
            m_vDefBurstOffset: 0x1358, // Vector
            m_hBreaker: 0x1364, // CHandle<C_BaseEntity>
            m_PerformanceMode: 0x1368, // PerformanceMode_t
            m_flPreventDamageBeforeTime: 0x136C, // GameTime_t
            m_BreakableContentsType: 0x1370, // BreakableContentsType_t
            m_strBreakableContentsPropGroupOverride: 0x1378, // CUtlString
            m_strBreakableContentsParticleOverride: 0x1380, // CUtlString
            m_bHasBreakPiecesOrCommands: 0x1388, // bool
            m_explodeDamage: 0x138C, // float32
            m_explodeRadius: 0x1390, // float32
            m_sExplosionType: 0x1398, // CGlobalSymbol
            m_explosionDelay: 0x13A0, // float32
            m_explosionBuildupSound: 0x13A8, // CUtlSymbolLarge
            m_explosionCustomEffect: 0x13B0, // CUtlSymbolLarge
            m_explosionCustomSound: 0x13B8, // CUtlSymbolLarge
            m_explosionModifier: 0x13C0, // CUtlSymbolLarge
            m_hPhysicsAttacker: 0x13C8, // CHandle<C_BasePlayerPawn>
            m_flLastPhysicsInfluenceTime: 0x13CC, // GameTime_t
            m_flDefaultFadeScale: 0x13D0, // float32
            m_hLastAttacker: 0x13D4, // CHandle<C_BaseEntity>
        },
        CCSGO_WingmanIntroTerroristPosition: {
        },
        C_RetakeGameRules: {
            m_nMatchSeed: 0x138, // int32
            m_bBlockersPresent: 0x13C, // bool
            m_bRoundInProgress: 0x13D, // bool
            m_iFirstSecondHalfRound: 0x140, // int32
            m_iBombSite: 0x144, // int32
            m_hBombPlanter: 0x148, // CHandle<C_CSPlayerPawn>
        },
        C_SoundOpvarSetDomeEntity: {
        },
        C_SoundAreaEntitySphere: {
            m_flRadius: 0x628, // float32
        },
        C_WeaponAWP: {
        },
        C_BaseButton: {
            m_glowEntity: 0x1098, // CHandle<C_BaseModelEntity>
            m_usable: 0x109C, // bool
            m_szDisplayText: 0x10A0, // CUtlSymbolLarge
        },
        CCSObserver_ObserverServices: {
            m_obsInterpState: 0x70, // ObserverInterpState_t
        },
        C_SoundEventBoxHelper: {
            m_vMins: 0x600, // Vector
            m_vMaxs: 0x60C, // Vector
        },
        C_SoundEventBoxEntity: {
            m_vecBoxHelpersNetworked: 0x6C0, // C_NetworkUtlVectorBase<SoundeventBoxHelperNetworked_t>
        },
        ServerAuthoritativeWeaponSlot_t: {
            unClass: 0x30, // uint16
            unSlot: 0x32, // uint16
            unItemDefIdx: 0x34, // uint16
        },
        C_CSMinimapBoundary: {
        },
        C_Precipitation: {
            m_flDensity: 0x1180, // float32
            m_flParticleInnerDist: 0x1190, // float32
            m_pParticleDef: 0x1198, // char*
            m_tParticlePrecipTraceTimer: 0x11AC, // TimedEvent[1]
            m_bActiveParticlePrecipEmitter: 0x11B4, // bool[1]
            m_bParticlePrecipInitialized: 0x11B5, // bool
            m_bHasSimulatedSinceLastSceneObjectUpdate: 0x11B6, // bool
            m_nAvailableSheetSequencesMaxIndex: 0x11B8, // int32
        },
        CLogicRelay: {
            m_OnSpawn: 0x600, // CEntityIOOutput
            m_OnTrigger: 0x618, // CEntityIOOutput
            m_bDisabled: 0x630, // bool
            m_bWaitForRefire: 0x631, // bool
            m_bTriggerOnce: 0x632, // bool
            m_bFastRetrigger: 0x633, // bool
            m_bPassthoughCaller: 0x634, // bool
        },
        SequenceHistory_t: {
            m_hSequence: 0x0, // HSequence
            m_flSeqStartTime: 0x4, // GameTime_t
            m_flSeqFixedCycle: 0x8, // float32
            m_nSeqLoopMode: 0xC, // AnimLoopMode_t
            m_flPlaybackRate: 0x10, // float32
            m_flCyclesPerSecond: 0x14, // float32
        },
        CPlayer_ItemServices: {
        },
        CPulse_OutflowConnection: {
            m_SourceOutflowName: 0x0, // PulseSymbol_t
            m_nDestChunk: 0x10, // PulseRuntimeChunkIndex_t
            m_nInstruction: 0x14, // int32
            m_OutflowRegisterMap: 0x18, // PulseRegisterMap_t
        },
        C_WeaponUMP45: {
        },
        C_WeaponG3SG1: {
        },
        C_SpotlightEnd: {
            m_flLightScale: 0x1098, // float32
            m_Radius: 0x109C, // float32
        },
        C_Fish: {
            m_pos: 0x1268, // VectorWS
            m_vel: 0x1274, // Vector
            m_angles: 0x1280, // QAngle
            m_localLifeState: 0x128C, // int32
            m_deathDepth: 0x1290, // float32
            m_deathAngle: 0x1294, // float32
            m_buoyancy: 0x1298, // float32
            m_wiggleTimer: 0x12A0, // CountdownTimer
            m_wigglePhase: 0x12B8, // float32
            m_wiggleRate: 0x12BC, // float32
            m_actualPos: 0x12C0, // VectorWS
            m_actualAngles: 0x12CC, // QAngle
            m_poolOrigin: 0x12D8, // VectorWS
            m_waterLevel: 0x12E4, // float32
            m_gotUpdate: 0x12E8, // bool
            m_x: 0x12EC, // float32
            m_y: 0x12F0, // float32
            m_z: 0x12F4, // float32
            m_angle: 0x12F8, // float32
            m_errorHistory: 0x12FC, // float32[20]
            m_errorHistoryIndex: 0x134C, // int32
            m_errorHistoryCount: 0x1350, // int32
            m_averageError: 0x1354, // float32
        },
        C_WeaponFamas: {
        },
        C_EnvDetailController: {
            m_flFadeStartDist: 0x600, // float32
            m_flFadeEndDist: 0x604, // float32
        },
        CHostageRescueZoneShim: {
        },
        CEnvSoundscapeAlias_snd_soundscape: {
        },
        CCSPlayer_HostageServices: {
            m_hCarriedHostage: 0x48, // CHandle<C_BaseEntity>
            m_hCarriedHostageProp: 0x4C, // CHandle<C_BaseEntity>
        },
        C_GameRulesProxy: {
        },
        C_Team: {
            m_aPlayerControllers: 0x600, // C_NetworkUtlVectorBase<CHandle<CBasePlayerController>>
            m_aPlayers: 0x618, // C_NetworkUtlVectorBase<CHandle<C_BasePlayerPawn>>
            m_iScore: 0x630, // int32
            m_szTeamname: 0x634, // char[129]
        },
        C_PathParticleRopeAlias_path_particle_rope_clientside: {
        },
        CPointChildModifier: {
            m_bOrphanInsteadOfDeletingChildrenOnRemove: 0x600, // bool
        },
        CCSPlayerLegacyJump: {
            m_bOldJumpPressed: 0x10, // bool
            m_flJumpPressedTime: 0x14, // float32
        },
        C_WeaponNOVA: {
        },
        C_CS2HudModelAddon: {
        },
        C_DEagle: {
        },
        C_TriggerMultiple: {
        },
        C_CSGO_TerroristRushIntroCamera: {
        },
        C_CSGO_TeamPreviewCamera: {
            m_nVariant: 0x688, // int32
        },
        C_ColorCorrectionVolume: {
            m_LastEnterWeight: 0x1180, // float32
            m_LastEnterTime: 0x1184, // GameTime_t
            m_LastExitWeight: 0x1188, // float32
            m_LastExitTime: 0x118C, // GameTime_t
            m_bEnabled: 0x1190, // bool
            m_MaxWeight: 0x1194, // float32
            m_FadeDuration: 0x1198, // float32
            m_Weight: 0x119C, // float32
            m_lookupFilename: 0x11A0, // char[512]
        },
        CPlayer_MovementServices: {
            m_nImpulse: 0x48, // int32
            m_nButtons: 0x50, // CInButtonState
            m_nQueuedButtonDownMask: 0x70, // uint64
            m_nQueuedButtonChangeMask: 0x78, // uint64
            m_nButtonDoublePressed: 0x80, // uint64
            m_pButtonPressedCmdNumber: 0x88, // uint32[64]
            m_nLastCommandNumberProcessed: 0x188, // uint32
            m_nToggleButtonDownMask: 0x190, // uint64
            m_flCmdForwardMove: 0x1A0, // float32
            m_flCmdLeftMove: 0x1A4, // float32
            m_flCmdUpMove: 0x1A8, // float32
            m_flMaxspeed: 0x1AC, // float32
            m_arrForceSubtickMoveWhen: 0x1B0, // float32[4]
            m_flForwardMove: 0x1C0, // float32
            m_flLeftMove: 0x1C4, // float32
            m_flUpMove: 0x1C8, // float32
            m_vecLastMovementImpulses: 0x1CC, // Vector
            m_vecOldViewAngles: 0x240, // QAngle
        },
        CInfoDynamicShadowHintBox: {
            m_vBoxMins: 0x618, // Vector
            m_vBoxMaxs: 0x624, // Vector
        },
        C_ColorCorrection: {
            m_vecOrigin: 0x600, // VectorWS
            m_MinFalloff: 0x60C, // float32
            m_MaxFalloff: 0x610, // float32
            m_flFadeInDuration: 0x614, // float32
            m_flFadeOutDuration: 0x618, // float32
            m_flMaxWeight: 0x61C, // float32
            m_flCurWeight: 0x620, // float32
            m_netlookupFilename: 0x624, // char[512]
            m_bEnabled: 0x824, // bool
            m_bMaster: 0x825, // bool
            m_bClientSide: 0x826, // bool
            m_bExclusive: 0x827, // bool
            m_bEnabledOnClient: 0x828, // bool[1]
            m_flCurWeightOnClient: 0x82C, // float32[1]
            m_bFadingIn: 0x830, // bool[1]
            m_flFadeStartWeight: 0x834, // float32[1]
            m_flFadeStartTime: 0x838, // float32[1]
            m_flFadeDuration: 0x83C, // float32[1]
        },
        AnimGraph2SerializedPoseRecipeSlot_t: {
            m_topology: 0x30, // CUtlBinaryBlock
        },
        C_PhysBox: {
        },
        CCSPlayer_CameraServices: {
            m_flDeathCamTilt: 0x2B0, // float32
            m_hDeathCamBounds: 0x2B4, // CHandle<C_PointDeathcamBounds>
            m_bDeathCamBoundsSearched: 0x2B8, // bool
            m_vClientScopeInaccuracy: 0x2C0, // Vector
        },
        CFilterMultiple: {
            m_nFilterType: 0x638, // filter_t
            m_iFilterName: 0x640, // CUtlSymbolLarge[10]
            m_hFilter: 0x690, // CHandle<C_BaseEntity>[10]
        },
        CEnvSoundscape: {
            m_OnPlay: 0x600, // CEntityIOOutput
            m_flRadius: 0x618, // float32
            m_soundEventName: 0x620, // CGameSoundEventName
            m_bOverrideWithEvent: 0x628, // bool
            m_soundscapeIndex: 0x62C, // int32
            m_soundscapeEntityListId: 0x630, // int32
            m_positionNames: 0x638, // CUtlSymbolLarge[8]
            m_hProxySoundscape: 0x678, // CHandle<CEnvSoundscape>
            m_bDisabled: 0x67C, // bool
            m_soundscapeName: 0x680, // CUtlSymbolLarge
            m_soundEventHash: 0x688, // uint32
        },
        C_SoundEventEntityAlias_snd_event_point: {
        },
        C_SoundOpvarSetOBBWindEntity: {
        },
        C_MolotovGrenade: {
        },
        C_NetTestBaseCombatCharacter: {
        },
        C_WeaponM4A1Silencer: {
        },
        C_SkyCameraVolume: {
            m_vBoxMins: 0x618, // Vector
            m_vBoxMaxs: 0x624, // Vector
            m_hTarget: 0x630, // CHandle<C_SkyCameraVolumeTarget>
            m_nPriority: 0x634, // int32
            m_bIsEnabled: 0x638, // bool
            m_bSkyboxBlurEffect: 0x639, // bool
            m_vBlurOrigin: 0x63C, // Vector
            m_bSkyboxReceivesWorldCsm: 0x648, // bool
            m_bWorldReceivesSkyboxCsm: 0x649, // bool
            m_bStartDisabled: 0x64A, // bool
            m_iszTargetName: 0x650, // CUtlSymbolLarge
        },
        C_EconItemView: {
            m_bInventoryImageRgbaRequested: 0x60, // bool
            m_bInventoryImageTriedCache: 0x61, // bool
            m_nInventoryImageRgbaWidth: 0x80, // int32
            m_nInventoryImageRgbaHeight: 0x84, // int32
            m_szCurrentLoadCachedFileName: 0x88, // char[260]
            m_bRestoreCustomMaterialAfterPrecache: 0x1B8, // bool
            m_iItemDefinitionIndex: 0x1BA, // uint16
            m_iEntityQuality: 0x1BC, // int32
            m_iEntityLevel: 0x1C0, // uint32
            m_iItemID: 0x1C8, // uint64
            m_iItemIDHigh: 0x1D0, // uint32
            m_iItemIDLow: 0x1D4, // uint32
            m_iAccountID: 0x1D8, // uint32
            m_iInventoryPosition: 0x1DC, // uint32
            m_bInitialized: 0x1E8, // bool
            m_bDisallowSOC: 0x1E9, // bool
            m_bIsStoreItem: 0x1EA, // bool
            m_bIsTradeItem: 0x1EB, // bool
            m_iEntityQuantity: 0x1EC, // int32
            m_iRarityOverride: 0x1F0, // int32
            m_iQualityOverride: 0x1F4, // int32
            m_iOriginOverride: 0x1F8, // int32
            m_ubStyleOverride: 0x1FC, // uint8
            m_unClientFlags: 0x1FD, // uint8
            m_AttributeList: 0x208, // CAttributeList
            m_NetworkedDynamicAttributes: 0x280, // CAttributeList
            m_szCustomName: 0x2F8, // char[161]
            m_szCustomNameOverride: 0x399, // char[161]
            m_szCustomNameOverride2: 0x43A, // char[161]
            m_szCustomNameOverride3: 0x4DB, // char[161]
            m_bInitializedTags: 0x5A8, // bool
        },
        C_SoundEventPathCornerEntity: {
            m_vecCornerPairsNetworked: 0x6C0, // C_NetworkUtlVectorBase<SoundeventPathCornerPairNetworked_t>
        },
        C_InfoVisibilityBox: {
            m_nMode: 0x604, // int32
            m_vBoxSize: 0x608, // Vector
            m_bEnabled: 0x614, // bool
        },
        CCSPlayer_ItemServices: {
            m_bHasDefuser: 0x48, // bool
            m_bHasHelmet: 0x49, // bool
        },
        C_PathParticleRope: {
            m_bStartActive: 0x608, // bool
            m_flMaxSimulationTime: 0x60C, // float32
            m_iszEffectName: 0x610, // CUtlSymbolLarge
            m_PathNodes_Name: 0x618, // CUtlVector<CUtlSymbolLarge>
            m_flParticleSpacing: 0x630, // float32
            m_flSlack: 0x634, // float32
            m_flRadius: 0x638, // float32
            m_ColorTint: 0x63C, // Color
            m_nEffectState: 0x640, // int32
            m_iEffectIndex: 0x648, // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            m_PathNodes_Position: 0x650, // C_NetworkUtlVectorBase<Vector>
            m_PathNodes_TangentIn: 0x668, // C_NetworkUtlVectorBase<Vector>
            m_PathNodes_TangentOut: 0x680, // C_NetworkUtlVectorBase<Vector>
            m_PathNodes_Color: 0x698, // C_NetworkUtlVectorBase<Vector>
            m_PathNodes_PinEnabled: 0x6B0, // C_NetworkUtlVectorBase<bool>
            m_PathNodes_RadiusScale: 0x6C8, // C_NetworkUtlVectorBase<float32>
        },
        C_DecoyProjectile: {
            m_nDecoyShotTick: 0x1348, // int32
            m_nClientLastKnownDecoyShotTick: 0x134C, // int32
            m_flTimeParticleEffectSpawn: 0x1370, // GameTime_t
        },
        C_AttributeContainer: {
            m_Item: 0x50, // C_EconItemView
            m_iExternalItemProviderRegisteredToken: 0x600, // int32
            m_ullRegisteredAsItemID: 0x608, // uint64
        },
        C_CSWeaponBase: {
            m_iWeaponGameplayAnimState: 0x19A8, // WeaponGameplayAnimState
            m_flWeaponGameplayAnimStateTimestamp: 0x19AC, // GameTime_t
            m_flInspectCancelCompleteTime: 0x19B0, // GameTime_t
            m_bInspectPending: 0x19B4, // bool
            m_bInspectShouldLoop: 0x19B5, // bool
            m_nLastEmptySoundCmdNum: 0x19E0, // int32
            m_bFireOnEmpty: 0x19E4, // bool
            m_OnPlayerPickup: 0x19E8, // CEntityIOOutput
            m_weaponMode: 0x1A00, // CSWeaponMode
            m_flTurningInaccuracyDelta: 0x1A04, // float32
            m_vecTurningInaccuracyEyeDirLast: 0x1A08, // Vector
            m_flTurningInaccuracy: 0x1A14, // float32
            m_fAccuracyPenalty: 0x1A18, // float32
            m_flLastAccuracyUpdateTime: 0x1A1C, // GameTime_t
            m_fAccuracySmoothedForZoom: 0x1A20, // float32
            m_iRecoilIndex: 0x1A24, // int32
            m_flRecoilIndex: 0x1A28, // float32
            m_bBurstMode: 0x1A2C, // bool
            m_flLastBurstModeChangeTime: 0x1A30, // GameTime_t
            m_nPostponeFireReadyTicks: 0x1A34, // GameTick_t
            m_flPostponeFireReadyFrac: 0x1A38, // float32
            m_bInReload: 0x1A3C, // bool
            m_nDeployTick: 0x1A40, // GameTick_t
            m_flAttackHoldStartTime: 0x1A44, // GameTime_t
            m_flDroppedAtTime: 0x1A48, // GameTime_t
            m_bIsHauledBack: 0x1A50, // bool
            m_bSilencerOn: 0x1A51, // bool
            m_flTimeSilencerSwitchComplete: 0x1A54, // GameTime_t
            m_bStealthy: 0x1A58, // bool
            m_bInSilentReloadSection: 0x1A59, // bool
            m_flStealthHoldStartTime: 0x1A5C, // GameTime_t
            m_bReloadHeldSinceStart: 0x1A60, // bool
            m_flWeaponActionPlaybackRate: 0x1A64, // float32
            m_iOriginalTeamNumber: 0x1A68, // int32
            m_iMostRecentTeamNumber: 0x1A6C, // int32
            m_bDroppedNearBuyZone: 0x1A70, // bool
            m_flNextAttackRenderTimeOffset: 0x1A74, // float32
            m_bClearWeaponIdentifyingUGC: 0x1B20, // bool
            m_bVisualsDataSet: 0x1B21, // bool
            m_bUIWeapon: 0x1B22, // bool
            m_nCustomEconReloadEventId: 0x1B24, // int32
            m_bCanBePickedUp: 0x1B30, // bool
            m_nextPrevOwnerUseTime: 0x1B34, // GameTime_t
            m_hPrevOwner: 0x1B38, // CHandle<C_CSPlayerPawn>
            m_nDropTick: 0x1B3C, // GameTick_t
            m_bWasActiveWeaponWhenDropped: 0x1B40, // bool
            m_donated: 0x1B64, // bool
            m_fLastShotTime: 0x1B68, // GameTime_t
            m_bWasOwnedByCT: 0x1B6C, // bool
            m_bWasOwnedByTerrorist: 0x1B6D, // bool
            m_flNextClientFireBulletTime: 0x1B70, // float32
            m_flNextClientFireBulletTime_Repredict: 0x1B74, // float32
            m_IronSightController: 0x1BD0, // C_IronSightController
            m_iIronSightMode: 0x1C80, // int32
            m_flLastLOSTraceFailureTime: 0x1CF8, // GameTime_t
            m_flWatTickOffset: 0x1D58, // float32
            m_flLastShakeTime: 0x1D6C, // GameTime_t
        },
        C_WeaponMag7: {
        },
        WeaponPurchaseCount_t: {
            m_nItemDefIndex: 0x30, // uint16
            m_nCount: 0x32, // uint16
        },
        CBasePulseGraphInstance: {
        },
        FilterHealth: {
            m_bAdrenalineActive: 0x638, // bool
            m_iHealthMin: 0x63C, // int32
            m_iHealthMax: 0x640, // int32
        },
        C_PointClientUIHUD: {
            m_bCheckCSSClasses: 0x10D0, // bool
            m_bIgnoreInput: 0x1248, // bool
            m_flWidth: 0x124C, // float32
            m_flHeight: 0x1250, // float32
            m_flDPI: 0x1254, // float32
            m_flInteractDistance: 0x1258, // float32
            m_flDepthOffset: 0x125C, // float32
            m_unOwnerContext: 0x1260, // uint32
            m_unHorizontalAlign: 0x1264, // uint32
            m_unVerticalAlign: 0x1268, // uint32
            m_unOrientation: 0x126C, // uint32
            m_bAllowInteractionFromAllSceneWorlds: 0x1270, // bool
            m_vecCSSClasses: 0x1278, // C_NetworkUtlVectorBase<CUtlSymbolLarge>
        },
        SignatureOutflow_Resume: {
        },
        C_InfoLadderDismount: {
        },
        C_PointCommentaryNode: {
            m_bActive: 0x1280, // bool
            m_bWasActive: 0x1281, // bool
            m_flEndTime: 0x1284, // GameTime_t
            m_flStartTime: 0x1288, // GameTime_t
            m_flStartTimeInCommentary: 0x128C, // float32
            m_iszCommentaryFile: 0x1290, // CUtlSymbolLarge
            m_iszTitle: 0x1298, // CUtlSymbolLarge
            m_iszSpeakers: 0x12A0, // CUtlSymbolLarge
            m_iNodeNumber: 0x12A8, // int32
            m_iNodeNumberMax: 0x12AC, // int32
            m_bListenedTo: 0x12B0, // bool
            m_sndCommentary: 0x12B8, // CSoundPatch*
            m_hViewPosition: 0x12C0, // CHandle<C_BaseEntity>
            m_bRestartAfterRestore: 0x12C4, // bool
        },
        CSpriteOriented: {
        },
        shard_model_desc_t: {
            m_nModelID: 0x8, // int32
            m_hMaterialBase: 0x10, // CStrongHandle<InfoForResourceTypeIMaterial2>
            m_hMaterialDamageOverlay: 0x18, // CStrongHandle<InfoForResourceTypeIMaterial2>
            m_solid: 0x20, // ShardSolid_t
            m_vecPanelSize: 0x24, // Vector2D
            m_vecStressPositionA: 0x2C, // Vector2D
            m_vecStressPositionB: 0x34, // Vector2D
            m_vecPanelVertices: 0x40, // C_NetworkUtlVectorBase<Vector2D>
            m_vInitialPanelVertices: 0x58, // C_NetworkUtlVectorBase<Vector4D>
            m_flGlassHalfThickness: 0x70, // float32
            m_bHasParent: 0x74, // bool
            m_bParentFrozen: 0x75, // bool
            m_SurfacePropStringToken: 0x78, // CUtlStringToken
        },
        C_KeychainModule: {
            m_nKeychainDefID: 0x1270, // uint32
            m_nKeychainSeed: 0x1274, // uint32
        },
        CFuncWater: {
            m_BuoyancyHelper: 0x1098, // CBuoyancyHelper
        },
        CCSPlayer_GlowServices: {
        },
        CCSGameModeRules: {
            __m_pChainEntity: 0x8, // CNetworkVarChainer
        },
        C_Flashbang: {
        },
        C_PointClientUIWorldTextPanel: {
            m_messageText: 0x1300, // char[512]
        },
        CCSPlayer_WaterServices: {
            m_flWaterJumpTime: 0x48, // float32
            m_vecWaterJumpVel: 0x4C, // Vector
            m_flSwimSoundTime: 0x58, // float32
        },
        C_CSObserverPawn: {
            m_hDetectParentChange: 0x1568, // CEntityHandle
        },
        ViewAngleServerChange_t: {
            nType: 0x30, // FixAngleSet_t
            qAngle: 0x34, // QAngle
            nIndex: 0x40, // uint32
        },
        C_FuncLadder: {
            m_vecLadderDir: 0x1098, // Vector
            m_Dismounts: 0x10A8, // CUtlVector<CHandle<C_InfoLadderDismount>>
            m_vecLocalTop: 0x10C0, // Vector
            m_vecPlayerMountPositionTop: 0x10CC, // VectorWS
            m_vecPlayerMountPositionBottom: 0x10D8, // VectorWS
            m_flAutoRideSpeed: 0x10E4, // float32
            m_bDisabled: 0x10E8, // bool
            m_bFakeLadder: 0x10E9, // bool
            m_bHasSlack: 0x10EA, // bool
        },
        C_WeaponMP5SD: {
        },
        C_World: {
        },
        C_CSGO_TeamSelectCounterTerroristPosition: {
        },
        C_WeaponGalilAR: {
        },
        CCSPlayerBase_CameraServices: {
            m_iFOV: 0x298, // uint32
            m_iFOVStart: 0x29C, // uint32
            m_flFOVTime: 0x2A0, // GameTime_t
            m_flFOVRate: 0x2A4, // float32
            m_hZoomOwner: 0x2A8, // CHandle<C_BaseEntity>
            m_flLastShotFOV: 0x2AC, // float32
        },
        C_TeamplayRules: {
        },
        C_WeaponSG556: {
        },
        C_CSPlayerPawn: {
            m_pBulletServices: 0x1570, // CCSPlayer_BulletServices*
            m_pHostageServices: 0x1578, // CCSPlayer_HostageServices*
            m_pBuyServices: 0x1580, // CCSPlayer_BuyServices*
            m_pGlowServices: 0x1588, // CCSPlayer_GlowServices*
            m_pActionTrackingServices: 0x1590, // CCSPlayer_ActionTrackingServices*
            m_pAimPunchServices: 0x1598, // CCSPlayer_AimPunchServices*
            m_pDamageReactServices: 0x15A0, // CCSPlayer_DamageReactServices*
            m_flHealthShotBoostExpirationTime: 0x15A8, // GameTime_t
            m_flLastFiredWeaponTime: 0x15AC, // GameTime_t
            m_bHasFemaleVoice: 0x15B0, // bool
            m_flLandingTimeSeconds: 0x15B4, // float32
            m_flOldFallVelocity: 0x15B8, // float32
            m_szLastPlaceName: 0x15BC, // char[18]
            m_bPrevDefuser: 0x15CE, // bool
            m_bPrevHelmet: 0x15CF, // bool
            m_nPrevArmorVal: 0x15D0, // int32
            m_nPrevGrenadeAmmoCount: 0x15D4, // int32
            m_unPreviousWeaponHash: 0x15D8, // uint32
            m_unWeaponHash: 0x15DC, // uint32
            m_bInBuyZone: 0x15E0, // bool
            m_bPreviouslyInBuyZone: 0x15E1, // bool
            m_bInLanding: 0x15E2, // bool
            m_flLandingStartTime: 0x15E4, // float32
            m_bInHostageRescueZone: 0x15E8, // bool
            m_bInBombZone: 0x15E9, // bool
            m_bIsBuyMenuOpen: 0x15EA, // bool
            m_flTimeOfLastInjury: 0x15EC, // GameTime_t
            m_flNextSprayDecalTime: 0x15F0, // GameTime_t
            m_iRetakesOffering: 0x1758, // int32
            m_iRetakesOfferingCard: 0x175C, // int32
            m_bRetakesHasDefuseKit: 0x1760, // bool
            m_bRetakesMVPLastRound: 0x1761, // bool
            m_iRetakesMVPBoostItem: 0x1764, // int32
            m_RetakesMVPBoostExtraUtility: 0x1768, // loadout_slot_t
            m_bNeedToReApplyGloves: 0x176D, // bool
            m_EconGloves: 0x1770, // C_EconItemView
            m_nEconGlovesChanged: 0x1D20, // uint8
            m_bMustSyncRagdollState: 0x1D21, // bool
            m_nRagdollDamageBone: 0x1D24, // int32
            m_vRagdollDamageForce: 0x1D28, // Vector
            m_szRagdollDamageWeaponName: 0x1D34, // char[64]
            m_bRagdollDamageHeadshot: 0x1D74, // bool
            m_vRagdollServerOrigin: 0x1D78, // VectorWS
            m_lastLandTime: 0x1D84, // GameTime_t
            m_bOnGroundLastTick: 0x1D88, // bool
            m_hHudModelArms: 0x1DA8, // CHandle<C_CS2HudModelArms>
            m_qDeathEyeAngles: 0x1DAC, // QAngle
            m_bLeftHanded: 0x1DB8, // bool
            m_fSwitchedHandednessTime: 0x1DBC, // GameTime_t
            m_flViewmodelOffsetX: 0x1DC0, // float32
            m_flViewmodelOffsetY: 0x1DC4, // float32
            m_flViewmodelOffsetZ: 0x1DC8, // float32
            m_flViewmodelFOV: 0x1DCC, // float32
            m_vecPlayerPatchEconIndices: 0x1DD0, // uint32[5]
            m_GunGameImmunityColor: 0x1E18, // Color
            m_vecBulletHitModels: 0x1E68, // CUtlVector<C_BulletHitModel*>
            m_bIsWalking: 0x1E80, // bool
            m_entitySpottedState: 0x1E88, // EntitySpottedState_t
            m_bIsScoped: 0x1EA0, // bool
            m_bResumeZoom: 0x1EA1, // bool
            m_bIsDefusing: 0x1EA2, // bool
            m_bIsGrabbingHostage: 0x1EA3, // bool
            m_iBlockingUseActionInProgress: 0x1EA4, // CSPlayerBlockingUseAction_t
            m_flEmitSoundTime: 0x1EA8, // GameTime_t
            m_flEmitSoundTime_Client: 0x1EAC, // GameTime_t
            m_bInNoDefuseArea: 0x1EB0, // bool
            m_nWhichBombZone: 0x1EB4, // int32
            m_iShotsFired: 0x1EB8, // int32
            m_flFlinchStack: 0x1EBC, // float32
            m_flVelocityModifier: 0x1EC0, // float32
            m_bWaitForNoAttack: 0x1EC4, // bool
            m_ignoreLadderJumpTime: 0x1EC8, // float32
            m_bKilledByHeadshot: 0x1ECD, // bool
            m_ArmorValue: 0x1ED0, // int32
            m_unCurrentEquipmentValue: 0x1ED4, // uint16
            m_unRoundStartEquipmentValue: 0x1ED6, // uint16
            m_unFreezetimeEndEquipmentValue: 0x1ED8, // uint16
            m_nLastKillerIndex: 0x1EDC, // CEntityIndex
            m_bOldIsScoped: 0x1EE0, // bool
            m_bHasDeathInfo: 0x1EE1, // bool
            m_flDeathInfoTime: 0x1EE4, // float32
            m_vecDeathInfoOrigin: 0x1EE8, // VectorWS
            m_grenadeParameterStashTime: 0x1F20, // GameTime_t
            m_bGrenadeParametersStashed: 0x1F24, // bool
            m_angStashedShootAngles: 0x1F28, // QAngle
            m_vecStashedGrenadeThrowPosition: 0x1F34, // VectorWS
            m_vecStashedGrenadeThrowPawnCenter: 0x1F40, // VectorWS
            m_vecStashedVelocity: 0x1F4C, // Vector
            m_flInterpolatedInaccuracy: 0x1F58, // float32
            m_bShouldAutobuyDMWeapons: 0x3500, // bool
            m_fImmuneToGunGameDamageTime: 0x3504, // GameTime_t
            m_bGunGameImmunity: 0x3508, // bool
            m_fImmuneToGunGameDamageTimeLast: 0x350C, // GameTime_t
            m_flModifier0: 0x3510, // float32
            m_fMolotovDamageTime: 0x3514, // float32
            m_nPlayerInfernoBodyFx: 0x3588, // ParticleIndex_t
            m_angEyeAngles: 0x3600, // QAngle
            m_arrOldEyeAnglesTimes: 0x3690, // GameTime_t[4]
            m_arrOldEyeAngles: 0x36A0, // QAngle[4]
            m_angEyeAnglesVelocity: 0x36D0, // QAngle
            m_iIDEntIndex: 0x36DC, // CEntityIndex
            m_delayTargetIDTimer: 0x36E0, // CountdownTimer
            m_iTargetItemEntIdx: 0x36F8, // CEntityIndex
            m_iOldIDEntIndex: 0x36FC, // CEntityIndex
            m_holdTargetIDTimer: 0x3700, // CountdownTimer
        },
        C_CSGO_TeamIntroTerroristPosition: {
        },
        C_Hostage: {
            m_entitySpottedState: 0x12F0, // EntitySpottedState_t
            m_leader: 0x1308, // CHandle<C_BaseEntity>
            m_reuseTimer: 0x1310, // CountdownTimer
            m_vel: 0x1328, // Vector
            m_isRescued: 0x1334, // bool
            m_jumpedThisFrame: 0x1335, // bool
            m_nHostageState: 0x1338, // int32
            m_bHandsHaveBeenCut: 0x133C, // bool
            m_hHostageGrabber: 0x1340, // CHandle<C_CSPlayerPawn>
            m_fLastGrabTime: 0x1344, // GameTime_t
            m_vecGrabbedPos: 0x1348, // VectorWS
            m_flRescueStartTime: 0x1354, // GameTime_t
            m_flGrabSuccessTime: 0x1358, // GameTime_t
            m_flDropStartTime: 0x135C, // GameTime_t
            m_flDeadOrRescuedTime: 0x1360, // GameTime_t
            m_blinkTimer: 0x1368, // CountdownTimer
            m_lookAt: 0x1380, // VectorWS
            m_lookAroundTimer: 0x1390, // CountdownTimer
            m_isInit: 0x13A8, // bool
            m_eyeAttachment: 0x13A9, // AttachmentHandle_t
            m_chestAttachment: 0x13AA, // AttachmentHandle_t
            m_pPredictionOwner: 0x13B0, // CBasePlayerController*
            m_fNewestAlphaThinkTime: 0x13B8, // GameTime_t
        },
        CPlayer_ObserverServices: {
            m_iObserverMode: 0x48, // uint8
            m_hObserverTarget: 0x4C, // CHandle<C_BaseEntity>
            m_iObserverLastMode: 0x50, // ObserverMode_t
            m_bForcedObserverMode: 0x54, // bool
            m_flObserverChaseDistance: 0x58, // float32
            m_flObserverChaseDistanceCalcTime: 0x5C, // GameTime_t
        },
        CCashStack: {
            m_nCashStackValue: 0x1098, // int32
        },
        C_SoundAreaEntityBase: {
            m_bDisabled: 0x600, // bool
            m_bWasEnabled: 0x608, // bool
            m_iszSoundAreaType: 0x610, // CUtlSymbolLarge
            m_vPos: 0x618, // Vector
        },
        C_PlayerVisibility: {
            m_flVisibilityStrength: 0x600, // float32
            m_flFogDistanceMultiplier: 0x604, // float32
            m_flFogMaxDensityMultiplier: 0x608, // float32
            m_flFadeTime: 0x60C, // float32
            m_bStartDisabled: 0x610, // bool
            m_bIsEnabled: 0x611, // bool
        },
        CAttributeManager__cached_attribute_float_t: {
            flIn: 0x0, // float32
            iAttribHook: 0x8, // CUtlSymbolLarge
            flOut: 0x10, // float32
        },
        C_BasePlayerWeapon: {
            m_nNextPrimaryAttackTick: 0x1918, // GameTick_t
            m_flNextPrimaryAttackTickRatio: 0x191C, // float32
            m_nNextSecondaryAttackTick: 0x1920, // GameTick_t
            m_flNextSecondaryAttackTickRatio: 0x1924, // float32
            m_iClip1: 0x1928, // int32
            m_iClip2: 0x192C, // int32
            m_pReserveAmmo: 0x1930, // int32[2]
        },
        CRagdollManager: {
            m_iCurrentMaxRagdollCount: 0x600, // int8
        },
        CSoundOpvarSetBoxEntity: {
        },
        C_HEGrenade: {
        },
        C_GameRules: {
            __m_pChainEntity: 0x8, // CNetworkVarChainer
            m_nTotalPausedTicks: 0x30, // int32
            m_nPauseStartTick: 0x34, // int32
            m_bGamePaused: 0x38, // bool
        },
        C_WeaponMAC10: {
        },
        C_CSGO_MapPreviewCameraPath: {
            m_flZFar: 0x600, // float32
            m_flZNear: 0x604, // float32
            m_bLoop: 0x608, // bool
            m_bVerticalFOV: 0x609, // bool
            m_bConstantSpeed: 0x60A, // bool
            m_flDuration: 0x60C, // float32
            m_flPathLength: 0x650, // float32
            m_flPathDuration: 0x654, // float32
            m_bDofEnabled: 0x66C, // bool
            m_flDofNearBlurry: 0x670, // float32
            m_flDofNearCrisp: 0x674, // float32
            m_flDofFarCrisp: 0x678, // float32
            m_flDofFarBlurry: 0x67C, // float32
            m_flDofTiltToGround: 0x680, // float32
        },
        C_PointWorldText: {
            m_bForceRecreateNextUpdate: 0x10A0, // bool
            m_nTextWidthPx: 0x10B8, // int32
            m_nTextHeightPx: 0x10BC, // int32
            m_messageText: 0x10C0, // char[512]
            m_FontName: 0x12C0, // char[64]
            m_BackgroundMaterialName: 0x1300, // char[64]
            m_bEnabled: 0x1340, // bool
            m_bFullbright: 0x1341, // bool
            m_flWorldUnitsPerPx: 0x1344, // float32
            m_flFontSize: 0x1348, // float32
            m_flDepthOffset: 0x134C, // float32
            m_bDrawBackground: 0x1350, // bool
            m_flBackgroundBorderWidth: 0x1354, // float32
            m_flBackgroundBorderHeight: 0x1358, // float32
            m_flBackgroundWorldToUV: 0x135C, // float32
            m_Color: 0x1360, // Color
            m_nJustifyHorizontal: 0x1364, // PointWorldTextJustifyHorizontal_t
            m_nJustifyVertical: 0x1368, // PointWorldTextJustifyVertical_t
            m_nReorientMode: 0x136C, // PointWorldTextReorientMode_t
        },
        C_RopeKeyframe: {
            m_LinksTouchingSomething: 0x10A0, // CBitVec<10>
            m_nLinksTouchingSomething: 0x10A4, // int32
            m_bApplyWind: 0x10A8, // bool
            m_fPrevLockedPoints: 0x10AC, // int32
            m_iForcePointMoveCounter: 0x10B0, // int32
            m_bPrevEndPointPos: 0x10B4, // bool[2]
            m_vPrevEndPointPos: 0x10B8, // VectorWS[2]
            m_flCurScroll: 0x10D0, // float32
            m_flScrollSpeed: 0x10D4, // float32
            m_RopeFlags: 0x10D8, // uint16
            m_iRopeMaterialModelIndex: 0x10E0, // CStrongHandle<InfoForResourceTypeIMaterial2>
            m_nSegments: 0x1358, // uint8
            m_hStartPoint: 0x135C, // CHandle<C_BaseEntity>
            m_hEndPoint: 0x1360, // CHandle<C_BaseEntity>
            m_iStartAttachment: 0x1364, // AttachmentHandle_t
            m_iEndAttachment: 0x1365, // AttachmentHandle_t
            m_Subdiv: 0x1366, // uint8
            m_RopeLength: 0x1368, // int16
            m_Slack: 0x136A, // int16
            m_TextureScale: 0x136C, // float32
            m_fLockedPoints: 0x1370, // uint8
            m_nChangeCount: 0x1371, // uint8
            m_Width: 0x1374, // float32
            m_PhysicsDelegate: 0x1378, // C_RopeKeyframe::CPhysicsDelegate
            m_hMaterial: 0x1388, // CStrongHandle<InfoForResourceTypeIMaterial2>
            m_TextureHeight: 0x1390, // int32
            m_vecImpulse: 0x1394, // Vector
            m_vecPreviousImpulse: 0x13A0, // Vector
            m_flCurrentGustTimer: 0x13AC, // float32
            m_flCurrentGustLifetime: 0x13B0, // float32
            m_flTimeToNextGust: 0x13B4, // float32
            m_vWindDir: 0x13B8, // Vector
            m_vColorMod: 0x13C4, // Vector
            m_vCachedEndPointAttachmentPos: 0x13D0, // VectorWS[2]
            m_vCachedEndPointAttachmentAngle: 0x13E8, // QAngle[2]
            m_bConstrainBetweenEndpoints: 0x1400, // bool
            m_bEndPointAttachmentPositionsDirty: 0x0, // bitfield:1
            m_bEndPointAttachmentAnglesDirty: 0x0, // bitfield:1
            m_bNewDataThisFrame: 0x0, // bitfield:1
            m_bPhysicsInitted: 0x0, // bitfield:1
        },
        C_BaseToggle: {
        },
        C_EnvCubemapBox: {
        },
        C_EnvCombinedLightProbeVolumeAlias_func_combined_light_probe_volume: {
        },
        C_RopeKeyframe__CPhysicsDelegate: {
            m_pKeyframe: 0x8, // C_RopeKeyframe*
        },
        CInfoDynamicShadowHint: {
            m_bDisabled: 0x600, // bool
            m_flRange: 0x604, // float32
            m_nImportance: 0x608, // int32
            m_nLightChoice: 0x60C, // int32
            m_hLight: 0x610, // CHandle<C_BaseEntity>
        },
        CPathNode: {
            m_vInTangentLocal: 0x600, // Vector
            m_vOutTangentLocal: 0x60C, // Vector
            m_strParentPathUniqueID: 0x618, // CUtlString
            m_strPathNodeParameter: 0x620, // CUtlString
            m_xWSPrevParent: 0x630, // CTransformWS
            m_hPath: 0x650, // CHandle<CPathWithDynamicNodes>
        },
        C_FuncMoveLinear: {
        },
        C_EnvShakeVolume: {
            m_vBoxMins: 0x618, // Vector
            m_vBoxMaxs: 0x624, // Vector
            m_flAmplitude: 0x630, // float32
            m_flFrequency: 0x634, // float32
            m_flFalloffDistance: 0x638, // float32
            m_flRollScale: 0x63C, // float32
        },
        CServerOnlyModelEntity: {
        },
        C_CSGO_TeamSelectCamera: {
        },
        C_WeaponXM1014: {
        },
        C_WorldModelGloves: {
        },
        C_PhysicsPropMultiplayer: {
        },
        C_SoundEventOBBEntity: {
            m_vMins: 0x6C0, // Vector
            m_vMaxs: 0x6CC, // Vector
        },
        C_WeaponAug: {
        },
        C_BasePropDoor: {
            m_eDoorState: 0x14C0, // DoorState_t
            m_modelChanged: 0x14C4, // bool
            m_bLocked: 0x14C5, // bool
            m_bNoNPCs: 0x14C6, // bool
            m_closedPosition: 0x14C8, // VectorWS
            m_closedAngles: 0x14D4, // QAngle
            m_hMaster: 0x14E0, // CHandle<C_BasePropDoor>
            m_vWhereToSetLightingOrigin: 0x14E4, // VectorWS
        },
        CChoreoInfoTarget: {
        },
        C_Item_Healthshot: {
        },
        CCSCustomHudLayout: {
            m_strLayout: 0x618, // CUtlSymbolLarge
            m_bObservable: 0x620, // bool
            m_vecPlayerLayoutStates: 0x628, // C_UtlVectorEmbeddedNetworkVar<CCSCustomHudLayoutState>
            m_globalLayoutState: 0x690, // CCSCustomHudLayoutState
            m_vecPanelIds: 0x798, // C_NetworkUtlVectorBase<CUtlString>
            m_vecClassNames: 0x7B0, // C_NetworkUtlVectorBase<CUtlString>
            m_vecDialogVariableNames: 0x7C8, // C_NetworkUtlVectorBase<CUtlString>
        },
        CEntityInstance: {
            m_iszPrivateVScripts: 0x8, // CUtlSymbolLarge
            m_pEntity: 0x10, // CEntityIdentity*
            m_CScriptComponent: 0x28, // CScriptComponent*
        },
        C_BaseModelEntity: {
            m_CRenderComponent: 0xAF8, // CRenderComponent*
            m_CHitboxComponent: 0xB00, // CHitboxComponent
            m_pChoreoComponent: 0xB18, // CChoreoComponent*
            m_nDestructiblePartInitialStateDestructed0: 0xB20, // HitGroup_t
            m_nDestructiblePartInitialStateDestructed1: 0xB24, // HitGroup_t
            m_nDestructiblePartInitialStateDestructed2: 0xB28, // HitGroup_t
            m_nDestructiblePartInitialStateDestructed3: 0xB2C, // HitGroup_t
            m_nDestructiblePartInitialStateDestructed4: 0xB30, // HitGroup_t
            m_nDestructiblePartInitialStateDestructed0_PartIndex: 0xB34, // int32
            m_nDestructiblePartInitialStateDestructed1_PartIndex: 0xB38, // int32
            m_nDestructiblePartInitialStateDestructed2_PartIndex: 0xB3C, // int32
            m_nDestructiblePartInitialStateDestructed3_PartIndex: 0xB40, // int32
            m_nDestructiblePartInitialStateDestructed4_PartIndex: 0xB44, // int32
            m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces: 0xB48, // bool
            m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces: 0xB49, // bool
            m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces: 0xB4A, // bool
            m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces: 0xB4B, // bool
            m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces: 0xB4C, // bool
            m_pDestructiblePartsSystemComponent: 0xB50, // CDestructiblePartsComponent*
            m_bInitModelEffects: 0xC78, // bool
            m_bDoingModelEffects: 0xC79, // bool
            m_iOldHealth: 0xC7C, // int32
            m_nRenderMode: 0xC80, // RenderMode_t
            m_nRenderFX: 0xC81, // RenderFx_t
            m_bAllowFadeInView: 0xC82, // bool
            m_clrRender: 0xCA0, // Color
            m_vecRenderAttributes: 0xCA8, // C_UtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
            m_bRenderToCubemaps: 0xD28, // bool
            m_bExpandRenderBoundsToIncludeCloth: 0xD29, // bool
            m_bNoInterpolate: 0xD2A, // bool
            m_Collision: 0xD30, // CCollisionProperty
            m_Glow: 0xDE8, // CGlowProperty
            m_flGlowBackfaceMult: 0xE40, // float32
            m_fadeMinDist: 0xE44, // float32
            m_fadeMaxDist: 0xE48, // float32
            m_flFadeScale: 0xE4C, // float32
            m_flShadowStrength: 0xE50, // float32
            m_nObjectCulling: 0xE54, // uint8
            m_nRequiredDecalRtEncoding: 0xE55, // DecalRtEncoding_t
            m_bodyGroupTotalRequestCount: 0xE58, // uint32
            m_bodyGroupRequests: 0xE60, // CUtlVectorFixedGrowable<C_BaseModelEntity::BodyGroupRequest_t,8>
            m_bodyGroupChoices: 0xF38, // CUtlOrderedMap<CGlobalSymbol,int32>
            m_vecViewOffset: 0xF60, // CNetworkViewOffsetVector
            m_pClientAlphaProperty: 0x1040, // CClientAlphaProperty*
            m_ClientOverrideTint: 0x1048, // Color
            m_bUseClientOverrideTint: 0x104C, // bool
            m_bvDisabledHitGroups: 0x1088, // uint32[1]
        },
        CCSPlayer_BulletServices: {
            m_totalHitsOnServer: 0x48, // int32
        },
        C_SoundOpvarSetAutoRoomEntity: {
        },
        CCSGO_EndOfMatchLineupEnd: {
        },
        C_MultiplayRules: {
        },
        CPlayer_AutoaimServices: {
        },
        C_LightDirectionalEntity: {
        },
        C_BaseEntity: {
            m_CBodyComponent: 0x30, // CBodyComponent*
            m_NetworkTransmitComponent: 0x38, // CNetworkTransmitComponent
            m_nLastThinkTick: 0x328, // GameTick_t
            m_pGameSceneNode: 0x330, // CGameSceneNode*
            m_pRenderComponent: 0x338, // CRenderComponent*
            m_pCollision: 0x340, // CCollisionProperty*
            m_iMaxHealth: 0x348, // int32
            m_iHealth: 0x34C, // int32
            m_flDamageAccumulator: 0x350, // float32
            m_lifeState: 0x354, // uint8
            m_bTakesDamage: 0x355, // bool
            m_nTakeDamageFlags: 0x358, // TakeDamageFlags_t
            m_nPlatformType: 0x360, // EntityPlatformTypes_t
            m_ubInterpolationFrame: 0x361, // uint8
            m_hSceneObjectController: 0x364, // CHandle<C_BaseEntity>
            m_nNoInterpolationTick: 0x368, // int32
            m_nVisibilityNoInterpolationTick: 0x36C, // int32
            m_flProxyRandomValue: 0x370, // float32
            m_iEFlags: 0x374, // int32
            m_nWaterType: 0x378, // uint8
            m_bInterpolateEvenWithNoModel: 0x379, // bool
            m_bPredictionEligible: 0x37A, // bool
            m_bApplyLayerMatchIDToModel: 0x37B, // bool
            m_tokLayerMatchID: 0x37C, // CUtlStringToken
            m_nSubclassID: 0x380, // CUtlStringToken
            m_nSimulationTick: 0x390, // int32
            m_iCurrentThinkContext: 0x394, // int32
            m_aThinkFunctions: 0x398, // CUtlVector<thinkfunc_t>
            m_bDisabledContextThinks: 0x3B0, // bool
            m_flAnimTime: 0x3B4, // float32
            m_flSimulationTime: 0x3B8, // float32
            m_nSceneObjectOverrideFlags: 0x3BC, // uint8
            m_bHasSuccessfullyInterpolated: 0x3BD, // bool
            m_bHasAddedVarsToInterpolation: 0x3BE, // bool
            m_bRenderEvenWhenNotSuccessfullyInterpolated: 0x3BF, // bool
            m_nInterpolationLatchDirtyFlags: 0x3C0, // int32[2]
            m_ListEntry: 0x3C8, // uint16[11]
            m_flCreateTime: 0x3E0, // GameTime_t
            m_EntClientFlags: 0x3E4, // uint16
            m_bClientSideRagdoll: 0x3E6, // bool
            m_iTeamNum: 0x3E7, // uint8
            m_spawnflags: 0x3E8, // uint32
            m_nNextThinkTick: 0x3EC, // GameTick_t
            m_fFlags: 0x3F4, // uint32
            m_vecAbsVelocity: 0x3F8, // Vector
            m_vecServerVelocity: 0x404, // CNetworkVelocityVector
            m_vecVelocity: 0x430, // CNetworkVelocityVector
            m_vecBaseVelocity: 0x510, // Vector
            m_hEffectEntity: 0x51C, // CHandle<C_BaseEntity>
            m_hOwnerEntity: 0x520, // CHandle<C_BaseEntity>
            m_MoveCollide: 0x524, // MoveCollide_t
            m_MoveType: 0x525, // MoveType_t
            m_nActualMoveType: 0x526, // MoveType_t
            m_flWaterLevel: 0x528, // float32
            m_fEffects: 0x52C, // uint32
            m_hGroundEntity: 0x530, // CHandle<C_BaseEntity>
            m_nGroundBodyIndex: 0x534, // int32
            m_flFriction: 0x538, // float32
            m_flElasticity: 0x53C, // float32
            m_flGravityScale: 0x540, // float32
            m_flTimeScale: 0x544, // float32
            m_bAnimatedEveryTick: 0x548, // bool
            m_bGravityDisabled: 0x549, // bool
            m_flNavIgnoreUntilTime: 0x54C, // GameTime_t
            m_hThink: 0x550, // uint16
            m_fBBoxVisFlags: 0x560, // uint8
            m_flActualGravityScale: 0x564, // float32
            m_bGravityActuallyDisabled: 0x568, // bool
            m_bPredictable: 0x569, // bool
            m_bRenderWithViewModels: 0x56A, // bool
            m_nFirstPredictableCommand: 0x56C, // int32
            m_nLastPredictableCommand: 0x570, // int32
            m_hOldMoveParent: 0x574, // CHandle<C_BaseEntity>
            m_Particles: 0x578, // CParticleProperty
            m_vecAngVelocity: 0x5A8, // QAngle
            m_DataChangeEventRef: 0x5B4, // int32
            m_dependencies: 0x5B8, // CUtlVector<CEntityHandle>
            m_nCreationTick: 0x5D0, // int32
            m_bAnimTimeChanged: 0x5E1, // bool
            m_bSimulationTimeChanged: 0x5E2, // bool
            m_sUniqueHammerID: 0x5F0, // CUtlString
            m_nBloodType: 0x5F8, // BloodType
        },
        C_WeaponSSG08: {
        },
        C_Chicken: {
            m_leader: 0x14C0, // CHandle<C_CSPlayerPawn>
            m_owner: 0x14C4, // CHandle<CCSPlayerController>
            m_AttributeManager: 0x14C8, // C_AttributeContainer
            m_bAttributesInitialized: 0x1AD8, // bool
            m_hWaterWakeParticles: 0x1ADC, // ParticleIndex_t
            m_bIsPreviewModel: 0x1AE0, // bool
            m_bSpawnDyingParticles: 0x1B68, // bool
        },
        C_BasePlayerPawn: {
            m_pWeaponServices: 0x12F0, // CPlayer_WeaponServices*
            m_pItemServices: 0x12F8, // CPlayer_ItemServices*
            m_pAutoaimServices: 0x1300, // CPlayer_AutoaimServices*
            m_pObserverServices: 0x1308, // CPlayer_ObserverServices*
            m_pWaterServices: 0x1310, // CPlayer_WaterServices*
            m_pUseServices: 0x1318, // CPlayer_UseServices*
            m_pFlashlightServices: 0x1320, // CPlayer_FlashlightServices*
            m_pCameraServices: 0x1328, // CPlayer_CameraServices*
            m_pMovementServices: 0x1330, // CPlayer_MovementServices*
            m_ServerViewAngleChanges: 0x1340, // C_UtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
            v_angle: 0x13A8, // QAngle
            v_anglePrevious: 0x13B4, // QAngle
            m_iHideHUD: 0x13C0, // uint32
            m_skybox3d: 0x13C8, // sky3dparams_t
            m_flDeathTime: 0x1458, // GameTime_t
            m_vecPredictionError: 0x1460, // Vector
            m_flPredictionErrorTime: 0x146C, // GameTime_t
            m_vecLastCameraSetupLocalOrigin: 0x148C, // Vector
            m_flLastCameraSetupTime: 0x1498, // GameTime_t
            m_flFOVSensitivityAdjust: 0x149C, // float32
            m_flMouseSensitivity: 0x14A0, // float32
            m_vOldOrigin: 0x14A4, // Vector
            m_flOldSimulationTime: 0x14B0, // float32
            m_nLastExecutedCommandNumber: 0x14B4, // int32
            m_nLastExecutedCommandTick: 0x14B8, // int32
            m_hController: 0x14BC, // CHandle<CBasePlayerController>
            m_hDefaultController: 0x14C0, // CHandle<CBasePlayerController>
            m_bIsSwappingToPredictableController: 0x14C4, // bool
        },
        C_SoundOpvarSetAABBEntity: {
        },
        C_WeaponBizon: {
        },
        C_StattrakModule: {
            m_bKnife: 0x1270, // bool
        },
        CCSObserver_CameraServices: {
            m_hPrevPostProcessingVolume: 0x2B0, // CHandle<C_PostProcessingVolume>
        },
        CEnvSoundscapeProxy: {
            m_MainSoundscapeName: 0x690, // CUtlSymbolLarge
        },
        C_SoundEventEntity: {
            m_bStartOnSpawn: 0x600, // bool
            m_bToLocalPlayer: 0x601, // bool
            m_bStopOnNew: 0x602, // bool
            m_bSaveRestore: 0x603, // bool
            m_bSavedIsPlaying: 0x604, // bool
            m_flSavedElapsedTime: 0x608, // float32
            m_iszSourceEntityName: 0x610, // CUtlSymbolLarge
            m_iszAttachmentName: 0x618, // CUtlSymbolLarge
            m_onGUIDChanged: 0x620, // CEntityOutputTemplate<SndOpEventGuid_t>
            m_onSoundFinished: 0x650, // CEntityIOOutput
            m_flClientCullRadius: 0x668, // float32
            m_iszSoundName: 0x698, // CUtlSymbolLarge
            m_hSource: 0x6B4, // CEntityHandle
            m_nEntityIndexSelection: 0x6B8, // int32
            m_bClientSideOnly: 0x0, // bitfield:1
        },
        C_LightOrthoEntity: {
        },
        CBombTarget: {
            m_bBombPlantedHere: 0x1180, // bool
        },
        C_Knife: {
            m_bFirstAttack: 0x1F20, // bool
        },
        C_CSGO_TerroristWingmanIntroCamera: {
        },
        CEntityComponent: {
        },
        C_ItemDogtags: {
            m_OwningPlayer: 0x1A18, // CHandle<C_CSPlayerPawn>
            m_KillingPlayer: 0x1A1C, // CHandle<C_CSPlayerPawn>
        },
        C_LateUpdatedAnimating: {
        },
        C_CSGO_TeamPreviewCameraBone: {
        },
        C_BaseClientUIEntity: {
            m_bEnabled: 0x10A0, // bool
            m_DialogXMLName: 0x10A8, // CUtlSymbolLarge
            m_PanelClassName: 0x10B0, // CUtlSymbolLarge
            m_PanelID: 0x10B8, // CUtlSymbolLarge
        },
        C_WeaponUSPSilencer: {
        },
        C_MolotovProjectile: {
            m_bIsIncGrenade: 0x1348, // bool
        },
        C_TriggerLerpObject: {
        },
        C_WeaponRevolver: {
        },
        C_WeaponElite: {
        },
        C_DynamicPropAlias_cable_dynamic: {
        },
        CBaseProp: {
            m_bModelOverrodeBlockLOS: 0x1268, // bool
            m_iShapeType: 0x126C, // int32
            m_bConformToCollisionBounds: 0x1270, // bool
            m_mPreferredCatchTransform: 0x1280, // CTransform
        },
        CAttributeManager: {
            m_Providers: 0x8, // CUtlVector<CHandle<C_BaseEntity>>
            m_iReapplyProvisionParity: 0x20, // int32
            m_hOuter: 0x24, // CHandle<C_BaseEntity>
            m_bPreventLoopback: 0x28, // bool
            m_ProviderType: 0x2C, // attributeprovidertypes_t
            m_CachedResults: 0x30, // CUtlVector<CAttributeManager::cached_attribute_float_t>
        },
        SignatureOutflow_Continue: {
        },
        CPlayer_CameraServices: {
            m_vecCsViewPunchAngle: 0x48, // QAngle
            m_nCsViewPunchAngleTick: 0x54, // GameTick_t
            m_flCsViewPunchAngleTickRatio: 0x58, // float32
            m_PlayerFog: 0x60, // C_fogplayerparams_t
            m_hColorCorrectionCtrl: 0xA0, // CHandle<C_ColorCorrection>
            m_hViewEntity: 0xA4, // CHandle<C_BaseEntity>
            m_hTonemapController: 0xA8, // CHandle<C_TonemapController2>
            m_audio: 0xB0, // audioparams_t
            m_PostProcessingVolumes: 0x128, // C_NetworkUtlVectorBase<CHandle<C_PostProcessingVolume>>
            m_flOldPlayerZ: 0x140, // float32
            m_flOldPlayerViewOffsetZ: 0x144, // float32
            m_CurrentFog: 0x148, // fogparams_t
            m_hOldFogController: 0x1B0, // CHandle<C_FogController>
            m_bOverrideFogColor: 0x1B4, // bool[5]
            m_OverrideFogColor: 0x1BC, // Color[5]
            m_bOverrideFogStartEnd: 0x1D0, // bool[5]
            m_fOverrideFogStart: 0x1D8, // float32[5]
            m_fOverrideFogEnd: 0x1EC, // float32[5]
            m_hActivePostProcessingVolume: 0x200, // CHandle<C_PostProcessingVolume>
            m_angDemoViewAngles: 0x208, // QAngle
        },
        C_BaseCSGrenade: {
            m_bClientPredictDelete: 0x1F20, // bool
            m_bRedraw: 0x1F21, // bool
            m_bIsHeldByPlayer: 0x1F22, // bool
            m_bPinPulled: 0x1F23, // bool
            m_bJumpThrow: 0x1F24, // bool
            m_bThrowAnimating: 0x1F25, // bool
            m_fThrowTime: 0x1F28, // GameTime_t
            m_flThrowStrength: 0x1F30, // float32
            m_fDropTime: 0x1FA8, // GameTime_t
            m_fPinPullTime: 0x1FAC, // GameTime_t
            m_bJustPulledPin: 0x1FB0, // bool
            m_nNextHoldTick: 0x1FB4, // GameTick_t
            m_flNextHoldFrac: 0x1FB8, // float32
            m_hSwitchToWeaponAfterThrow: 0x1FBC, // CHandle<C_CSWeaponBase>
        },
        CFilterAttributeInt: {
            m_sAttributeName: 0x638, // CUtlSymbolLarge
        },
        CPointTemplate: {
            m_iszWorldName: 0x600, // CUtlSymbolLarge
            m_iszSource2EntityLumpName: 0x608, // CUtlSymbolLarge
            m_iszEntityFilterName: 0x610, // CUtlSymbolLarge
            m_flTimeoutInterval: 0x618, // float32
            m_bAsynchronouslySpawnEntities: 0x61C, // bool
            m_clientOnlyEntityBehavior: 0x620, // PointTemplateClientOnlyEntityBehavior_t
            m_ownerSpawnGroupType: 0x624, // PointTemplateOwnerSpawnGroupType_t
            m_createdSpawnGroupHandles: 0x628, // CUtlVector<uint32>
            m_SpawnedEntityHandles: 0x640, // CUtlVector<CEntityHandle>
            m_ScriptSpawnCallback: 0x658, // HSCRIPT
            m_ScriptCallbackScope: 0x660, // HSCRIPT
            m_OnEntitySpawned: 0x668, // CEntityOutputTemplate<CUtlVector<CEntityHandle>>
        },
        CPlayer_FlashlightServices: {
        },
        CCSPlayerController: {
            m_pInGameMoneyServices: 0x818, // CCSPlayerController_InGameMoneyServices*
            m_pInventoryServices: 0x820, // CCSPlayerController_InventoryServices*
            m_pActionTrackingServices: 0x828, // CCSPlayerController_ActionTrackingServices*
            m_pDamageServices: 0x830, // CCSPlayerController_DamageServices*
            m_iPing: 0x838, // uint32
            m_bHasCommunicationAbuseMute: 0x83C, // bool
            m_uiCommunicationMuteFlags: 0x840, // uint32
            m_szCrosshairCodes: 0x848, // CUtlSymbolLarge
            m_iPendingTeamNum: 0x850, // uint8
            m_flForceTeamTime: 0x854, // GameTime_t
            m_iCompTeammateColor: 0x858, // int32
            m_bEverPlayedOnTeam: 0x85C, // bool
            m_flPreviousForceJoinTeamTime: 0x860, // GameTime_t
            m_szClan: 0x868, // CUtlSymbolLarge
            m_unClanId32bit: 0x870, // uint32
            m_sSanitizedPlayerName: 0x878, // CUtlString
            m_sSanitizedClanTag: 0x880, // CUtlString
            m_iCoachingTeam: 0x888, // int32
            m_nPlayerDominated: 0x890, // uint64
            m_nPlayerDominatingMe: 0x898, // uint64
            m_iCompetitiveRanking: 0x8A0, // int32
            m_iCompetitiveWins: 0x8A4, // int32
            m_iCompetitiveRankType: 0x8A8, // int8
            m_iCompetitiveRankingPredicted_Win: 0x8AC, // int32
            m_iCompetitiveRankingPredicted_Loss: 0x8B0, // int32
            m_iCompetitiveRankingPredicted_Tie: 0x8B4, // int32
            m_nEndMatchNextMapVote: 0x8B8, // int32
            m_unActiveQuestId: 0x8BC, // uint16
            m_rtActiveMissionPeriod: 0x8C0, // uint32
            m_nQuestProgressReason: 0x8C4, // QuestProgress::Reason
            m_unPlayerTvControlFlags: 0x8C8, // uint32
            m_iDraftIndex: 0x8F8, // int32
            m_msQueuedModeDisconnectionTimestamp: 0x8FC, // uint32
            m_uiAbandonRecordedReason: 0x900, // uint32
            m_eNetworkDisconnectionReason: 0x904, // uint32
            m_bCannotBeKicked: 0x908, // bool
            m_bEverFullyConnected: 0x909, // bool
            m_bAbandonAllowsSurrender: 0x90A, // bool
            m_bAbandonOffersInstantSurrender: 0x90B, // bool
            m_bDisconnection1MinWarningPrinted: 0x90C, // bool
            m_bScoreReported: 0x90D, // bool
            m_nDisconnectionTick: 0x910, // int32
            m_bControllingBot: 0x920, // bool
            m_bHasControlledBotThisRound: 0x921, // bool
            m_bHasBeenControlledByPlayerThisRound: 0x922, // bool
            m_nBotsControlledThisRound: 0x924, // int32
            m_bCanControlObservedBot: 0x928, // bool
            m_hPlayerPawn: 0x92C, // CHandle<C_CSPlayerPawn>
            m_hObserverPawn: 0x930, // CHandle<C_CSObserverPawn>
            m_bPawnIsAlive: 0x934, // bool
            m_iPawnHealth: 0x938, // uint32
            m_iPawnArmor: 0x93C, // int32
            m_bPawnHasDefuser: 0x940, // bool
            m_bPawnHasHelmet: 0x941, // bool
            m_nPawnCharacterDefIndex: 0x942, // uint16
            m_iPawnLifetimeStart: 0x944, // int32
            m_iPawnLifetimeEnd: 0x948, // int32
            m_iPawnBotDifficulty: 0x94C, // int32
            m_hOriginalControllerOfCurrentPawn: 0x950, // CHandle<CCSPlayerController>
            m_iScore: 0x954, // int32
            m_recentKillQueue: 0x958, // uint8[8]
            m_nFirstKill: 0x960, // uint8
            m_nKillCount: 0x961, // uint8
            m_bMvpNoMusic: 0x962, // bool
            m_eMvpReason: 0x964, // int32
            m_iMusicKitID: 0x968, // int32
            m_iMusicKitMVPs: 0x96C, // int32
            m_iMVPs: 0x970, // int32
            m_bIsPlayerNameDirty: 0x974, // bool
            m_bFireBulletsSeedSynchronized: 0x97C, // bool
        },
        C_CSGO_CounterTerroristRushIntroCamera: {
        },
        C_CSGO_TeamIntroCounterTerroristPosition: {
        },
        C_CSGO_PreviewModel: {
            m_defaultAnim: 0x1268, // CUtlString
            m_nDefaultAnimLoopMode: 0x1270, // AnimLoopMode_t
            m_flInitialModelScale: 0x1274, // float32
            m_sInitialWeaponState: 0x1278, // CUtlString
        },
        C_CSGO_TeamSelectCharacterPosition: {
        },
        CCSObservableElement: {
            m_iszObservableModelEntity: 0x618, // CUtlSymbolLarge
            m_hObservableModelEntity: 0x620, // CHandle<C_BaseEntity>
            m_hObservableModelEntity2: 0x624, // CHandle<C_BaseEntity>
            m_nTeamFilter: 0x628, // uint32
        },
        C_SoundEventAABBEntity: {
            m_vMins: 0x6C0, // Vector
            m_vMaxs: 0x6CC, // Vector
        },
        CCSPlayer_MovementServices: {
            m_AnimationState: 0x310, // CCSPlayerAnimationState
            m_bUsingGroundTopologyOffset: 0x3F0, // bool
            m_flUsingGroundTopologyOffsetTransitionSmoothing: 0x3F4, // float32
            m_vecLadderNormal: 0x3F8, // Vector
            m_nLadderSurfacePropIndex: 0x404, // int32
            m_bDucked: 0x408, // bool
            m_flDuckAmount: 0x40C, // float32
            m_flDuckSpeed: 0x410, // float32
            m_bDuckOverride: 0x414, // bool
            m_bDesiresDuck: 0x415, // bool
            m_bDucking: 0x416, // bool
            m_flDuckRootOffset: 0x418, // float32
            m_flDuckViewOffset: 0x41C, // float32
            m_flLastDuckTime: 0x420, // float32
            m_flBombPlantViewOffset: 0x424, // float32
            m_vecLastPositionAtFullCrouchSpeed: 0x430, // Vector2D
            m_duckUntilOnGround: 0x438, // bool
            m_bHasWalkMovedSinceLastJump: 0x439, // bool
            m_bInStuckTest: 0x43A, // bool
            m_nTraceCount: 0x648, // int32
            m_StuckLast: 0x64C, // int32
            m_bSpeedCropped: 0x650, // bool
            m_nOldWaterLevel: 0x654, // int32
            m_flWaterEntryTime: 0x658, // float32
            m_vecForward: 0x65C, // Vector
            m_vecLeft: 0x668, // Vector
            m_vecUp: 0x674, // Vector
            m_nGameCodeHasMovedPlayerAfterCommand: 0x680, // int32
            m_fStashGrenadeParameterWhen: 0x684, // GameTime_t
            m_bUseFrictionStashedSpeed: 0x688, // bool
            m_flUseFrictionStashedSpeedUntilFrac: 0x68C, // float32
            m_flFrictionStashedSpeed: 0x690, // float32
            m_flStamina: 0x694, // float32
            m_flHeightAtJumpStart: 0x698, // float32
            m_flMaxJumpHeightThisJump: 0x69C, // float32
            m_flMaxJumpHeightLastJump: 0x6A0, // float32
            m_flStaminaAtJumpStart: 0x6A4, // float32
            m_flVelMulAtJumpStart: 0x6A8, // float32
            m_flAccumulatedJumpError: 0x6AC, // float32
            m_LegacyJump: 0x6B0, // CCSPlayerLegacyJump
            m_ModernJump: 0x6C8, // CCSPlayerModernJump
            m_nLastJumpTick: 0x700, // GameTick_t
            m_flLastJumpFrac: 0x704, // float32
            m_flLastJumpVelocityZ: 0x708, // float32
            m_bJumpApexPending: 0x70C, // bool
            m_flTicksSinceLastSurfingDetected: 0x710, // float32
            m_bWasSurfing: 0x714, // bool
            m_vecWalkWishVel: 0x7A4, // Vector2D
            m_bHasEverProcessedCommand: 0xFD0, // bool
        },
        SellbackPurchaseEntry_t: {
            m_unDefIdx: 0x30, // uint16
            m_nCost: 0x34, // int32
            m_nPrevArmor: 0x38, // int32
            m_bPrevHelmet: 0x3C, // bool
            m_hItem: 0x40, // CEntityHandle
        },
        C_TintController: {
        },
        C_WeaponBaseItem: {
            m_bSequenceInProgress: 0x1F20, // bool
            m_bRedraw: 0x1F21, // bool
        },
        CWaterSplasher: {
        },
        C_FuncBrush: {
        },
        C_WeaponCZ75a: {
            m_bMagazineRemoved: 0x1F50, // bool
        },
        C_DynamicLight: {
            m_Flags: 0x1098, // uint8
            m_LightStyle: 0x1099, // uint8
            m_Radius: 0x109C, // float32
            m_Exponent: 0x10A0, // int32
            m_InnerAngle: 0x10A4, // float32
            m_OuterAngle: 0x10A8, // float32
            m_SpotRadius: 0x10AC, // float32
        },
        C_SoundEventSphereEntity: {
            m_flRadius: 0x6C0, // float32
        },
        CCSPlayerController_DamageServices: {
            m_nSendUpdate: 0x40, // int32
            m_DamageList: 0x48, // C_UtlVectorEmbeddedNetworkVar<CDamageRecord>
        },
        C_CSGO_TeamPreviewModel: {
        },
        C_TonemapController2Alias_env_tonemap_controller2: {
        },
        C_Inferno: {
            m_nfxFireDamageEffect: 0x10D8, // ParticleIndex_t
            m_hInfernoPointsSnapshot: 0x10E0, // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            m_hInfernoFillerPointsSnapshot: 0x10E8, // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            m_hInfernoOutlinePointsSnapshot: 0x10F0, // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            m_hInfernoClimbingOutlinePointsSnapshot: 0x10F8, // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            m_hInfernoDecalsSnapshot: 0x1100, // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            m_firePositions: 0x1108, // VectorWS[64]
            m_fireParentPositions: 0x1408, // VectorWS[64]
            m_bFireIsBurning: 0x1708, // bool[64]
            m_BurnNormal: 0x1748, // Vector[64]
            m_fireCount: 0x1A48, // int32
            m_nInfernoType: 0x1A4C, // int32
            m_nFireLifetime: 0x1A50, // float32
            m_bInPostEffectTime: 0x1A54, // bool
            m_lastFireCount: 0x1A58, // int32
            m_nFireEffectTickBegin: 0x1A5C, // int32
            m_drawableCount: 0x8660, // int32
            m_blosCheck: 0x8664, // bool
            m_nlosperiod: 0x8668, // int32
            m_maxFireHalfWidth: 0x866C, // float32
            m_maxFireHeight: 0x8670, // float32
            m_minBounds: 0x8674, // VectorWS
            m_maxBounds: 0x8680, // VectorWS
            m_flLastGrassBurnThink: 0x868C, // float32
        },
        CFilterLOS: {
        },
        C_EnvWindClientside: {
            m_EnvWindShared: 0x600, // C_EnvWindShared
        },
        C_FlashbangProjectile: {
        },
        C_SoundEventConeEntity: {
            m_flEmitterAngle: 0x6C0, // float32
            m_flSweetSpotAngle: 0x6C4, // float32
            m_flAttenMin: 0x6C8, // float32
            m_flAttenMax: 0x6CC, // float32
            m_iszParameterName: 0x6D0, // CUtlSymbolLarge
        },
        C_WeaponP90: {
        },
        C_EnvWind: {
            m_EnvWindShared: 0x600, // C_EnvWindShared
        },
        C_CSGO_TerroristTeamIntroCamera: {
        },
        C_PointDeathcamBounds: {
            m_vBoxMins: 0x600, // Vector
            m_vBoxMaxs: 0x60C, // Vector
            m_flLerpDistance: 0x618, // float32
        },
        CCSPlayerController_ActionTrackingServices: {
            m_perRoundStats: 0x40, // C_UtlVectorEmbeddedNetworkVar<CSPerRoundStats_t>
            m_matchStats: 0xA8, // CSMatchStats_t
            m_iNumRoundKills: 0x128, // int32
            m_iNumRoundKillsHeadshots: 0x12C, // int32
            m_flTotalRoundDamageDealt: 0x130, // float32
        },
        C_CSGO_PreviewModelAlias_csgo_item_previewmodel: {
        },
        C_InfoInstructorHintHostageRescueZone: {
        },
        C_TriggerBuoyancy: {
            m_BuoyancyHelper: 0x1180, // CBuoyancyHelper
            m_flFluidDensity: 0x1298, // float32
        },
        CPlayer_MovementServices_Humanoid: {
            m_flStepSoundTime: 0x258, // float32
            m_flFallVelocity: 0x25C, // float32
            m_groundNormal: 0x260, // Vector
            m_flSurfaceFriction: 0x26C, // float32
            m_surfaceProps: 0x270, // CUtlStringToken
            m_nStepside: 0x280, // int32
        },
        CPulseCell_IsRequirementValid__Criteria_t: {
            m_bIsValid: 0x0, // bool
        },
        C_WeaponTec9: {
        },
        C_PhysPropClientside: {
            m_flTouchDelta: 0x13E0, // GameTime_t
            m_fDeathTime: 0x13E4, // GameTime_t
            m_vecDamagePosition: 0x13E8, // VectorWS
            m_vecDamageDirection: 0x13F4, // Vector
            m_nDamageType: 0x1400, // DamageTypes_t
        },
        C_BaseDoor: {
            m_bIsUsable: 0x1098, // bool
        },
        CSMatchStats_t: {
            m_iEnemy5Ks: 0x68, // int32
            m_iEnemy4Ks: 0x6C, // int32
            m_iEnemy3Ks: 0x70, // int32
            m_iEnemyKnifeKills: 0x74, // int32
            m_iEnemyTaserKills: 0x78, // int32
        },
        CCSGO_RushIntroTerroristPosition: {
        },
        CHostageRescueZone: {
        },
        C_CSWeaponBaseGun: {
            m_zoomLevel: 0x1F20, // int32
            m_iBurstShotsRemaining: 0x1F24, // int32
            m_iSilencerBodygroup: 0x1F28, // int32
            m_silencedModelIndex: 0x1F38, // int32
            m_inPrecache: 0x1F3C, // bool
            m_bNeedsBoltAction: 0x1F3D, // bool
            m_nRevolverCylinderIdx: 0x1F40, // int32
        },
        C_CSGameRulesProxy: {
            m_pGameRules: 0x600, // C_CSGameRules*
        },
        C_WeaponP250: {
        },
        CFilterMassGreater: {
            m_fFilterMass: 0x638, // float32
        },
        C_ShatterGlassShardPhysics: {
            m_ShardDesc: 0x10A0, // shard_model_desc_t
        },
        C_EntityDissolve: {
            m_flStartTime: 0x10A0, // GameTime_t
            m_flFadeInStart: 0x10A4, // float32
            m_flFadeInLength: 0x10A8, // float32
            m_flFadeOutModelStart: 0x10AC, // float32
            m_flFadeOutModelLength: 0x10B0, // float32
            m_flFadeOutStart: 0x10B4, // float32
            m_flFadeOutLength: 0x10B8, // float32
            m_nDissolveType: 0x10BC, // EntityDissolveType_t
            m_nMagnitude: 0x10C0, // uint32
            m_vDissolverOrigin: 0x10C4, // VectorWS
            m_flNextSparkTime: 0x10D0, // GameTime_t
            m_bCoreExplode: 0x10D4, // bool
            m_bLinkedToServerEnt: 0x10D5, // bool
        },
        C_SoundOpvarSetOBBEntity: {
        },
        CCSCustomPlayerCamera: {
            m_hPawn: 0x600, // CHandle<C_CSPlayerPawnBase>
            m_nCameraMode: 0x604, // CustomCameraMode_t
            m_hFollowEntity: 0x608, // CHandle<C_BaseEntity>
            m_bFollowEyes: 0x60C, // bool
            m_vecFollowOffset: 0x610, // Vector
            m_vecCameraOffset: 0x61C, // Vector
            m_bClipCameraOffset: 0x628, // bool
            m_flCameraOffsetReturnStrength: 0x62C, // float32
        },
        CCSGameModeRules_ArmsRace: {
            m_WeaponSequence: 0x30, // C_NetworkUtlVectorBase<CUtlString>
        },
        C_FuncMonitor: {
            m_targetCamera: 0x1098, // CUtlString
            m_nResolutionEnum: 0x10A0, // int32
            m_bRenderShadows: 0x10A4, // bool
            m_bUseUniqueColorTarget: 0x10A5, // bool
            m_brushModelName: 0x10A8, // CUtlString
            m_hTargetCamera: 0x10B0, // CHandle<C_BaseEntity>
            m_bEnabled: 0x10B4, // bool
            m_bDraw3DSkybox: 0x10B5, // bool
        },
        C_ClientRagdoll: {
            m_bFadeOut: 0x1268, // bool
            m_bImportant: 0x1269, // bool
            m_flEffectTime: 0x126C, // GameTime_t
            m_gibDespawnTime: 0x1270, // GameTime_t
            m_iCurrentFriction: 0x1274, // int32
            m_iMinFriction: 0x1278, // int32
            m_iMaxFriction: 0x127C, // int32
            m_iFrictionAnimState: 0x1280, // int32
            m_bReleaseRagdoll: 0x1284, // bool
            m_iEyeAttachment: 0x1285, // AttachmentHandle_t
            m_bFadingOut: 0x1286, // bool
            m_flScaleEnd: 0x1288, // float32[10]
            m_flScaleTimeStart: 0x12B0, // GameTime_t[10]
            m_flScaleTimeEnd: 0x12D8, // GameTime_t[10]
        },
        C_CS2WeaponModuleBase: {
        },
        C_CSGO_TeamPreviewCharacterPosition: {
            m_nVariant: 0x600, // int32
            m_nRandom: 0x604, // int32
            m_nOrdinal: 0x608, // int32
            m_sWeaponName: 0x610, // CUtlString
            m_xuid: 0x618, // uint64
            m_agentItem: 0x620, // C_EconItemView
            m_glovesItem: 0xBD0, // C_EconItemView
            m_weaponItem: 0x1180, // C_EconItemView
            m_petItem: 0x1730, // C_EconItemView
        },
        C_SmokeGrenadeProjectile: {
            m_nSmokeEffectTickBegin: 0x1360, // int32
            m_bDidSmokeEffect: 0x1364, // bool
            m_nRandomSeed: 0x1368, // int32
            m_vSmokeColor: 0x136C, // Vector
            m_vSmokeDetonationPos: 0x1378, // VectorWS
            m_VoxelFrameData: 0x1388, // C_NetworkUtlVectorBase<uint8>
            m_nVoxelFrameDataSize: 0x13A0, // int32
            m_nVoxelUpdate: 0x13A4, // int32
            m_nSmokeLightProbeRegen: 0x13A8, // uint8
            m_bSmokeVolumeDataReceived: 0x13A9, // bool
            m_bSmokeEffectSpawned: 0x13AA, // bool
        },
        CCSPlayer_BuyServices: {
            m_vecSellbackPurchaseEntries: 0x48, // C_UtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t>
        },
        C_SkyCameraVolumeTarget: {
            m_nSkyboxScale: 0x600, // int16
            m_hSkyMaterial: 0x608, // CStrongHandle<InfoForResourceTypeIMaterial2>
        },
        C_CSTeam: {
            m_szTeamMatchStat: 0x6B8, // char[512]
            m_numMapVictories: 0x8B8, // int32
            m_bSurrendered: 0x8BC, // bool
            m_scoreFirstHalf: 0x8C0, // int32
            m_scoreSecondHalf: 0x8C4, // int32
            m_scoreOvertime: 0x8C8, // int32
            m_szClanTeamname: 0x8CC, // char[129]
            m_iClanID: 0x950, // uint32
            m_szTeamFlagImage: 0x954, // char[8]
            m_szTeamLogoImage: 0x95C, // char[8]
        },
        C_CS2HudModelWeapon: {
        },
        C_TextureBasedAnimatable: {
            m_bLoop: 0x1098, // bool
            m_flFPS: 0x109C, // float32
            m_hPositionKeys: 0x10A0, // CStrongHandle<InfoForResourceTypeCTextureBase>
            m_hRotationKeys: 0x10A8, // CStrongHandle<InfoForResourceTypeCTextureBase>
            m_vAnimationBoundsMin: 0x10B0, // Vector
            m_vAnimationBoundsMax: 0x10BC, // Vector
            m_flStartTime: 0x10C8, // float32
            m_flStartFrame: 0x10CC, // float32
        },
        C_LightEnvironmentEntity: {
        },
        C_TriggerPhysics: {
            m_gravityScale: 0x1180, // float32
            m_linearLimit: 0x1184, // float32
            m_linearDamping: 0x1188, // float32
            m_angularLimit: 0x118C, // float32
            m_angularDamping: 0x1190, // float32
            m_linearForce: 0x1194, // float32
            m_flFrequency: 0x1198, // float32
            m_flDampingRatio: 0x119C, // float32
            m_vecLinearForcePointAt: 0x11A0, // Vector
            m_bCollapseToForcePoint: 0x11AC, // bool
            m_vecLinearForcePointAtWorld: 0x11B0, // VectorWS
            m_vecLinearForceDirection: 0x11BC, // Vector
            m_bForceDirectionIsInLocalSpace: 0x11C8, // bool
            m_bConvertToDebrisWhenPossible: 0x11C9, // bool
        },
        C_PropDoorRotating: {
        },
        C_HandleTest: {
            m_Handle: 0x600, // CHandle<C_BaseEntity>
            m_bSendHandle: 0x604, // bool
        },
        CInfoWorldLayer: {
            m_pOutputOnEntitiesSpawned: 0x600, // CEntityIOOutput
            m_worldName: 0x618, // CUtlSymbolLarge
            m_layerName: 0x620, // CUtlSymbolLarge
            m_bWorldLayerVisible: 0x628, // bool
            m_bEntitiesSpawned: 0x629, // bool
            m_bCreateAsChildSpawnGroup: 0x62A, // bool
            m_hLayerSpawnGroup: 0x62C, // uint32
            m_bWorldLayerActuallyVisible: 0x630, // bool
        },
        CBodyComponentBaseModelEntity: {
        },
        C_Multimeter: {
            m_hTargetC4: 0x1268, // CHandle<C_PlantedC4>
        },
        C_BaseTrigger: {
            m_OnStartTouch: 0x1098, // CEntityIOOutput
            m_OnStartTouchAll: 0x10B0, // CEntityIOOutput
            m_OnEndTouch: 0x10C8, // CEntityIOOutput
            m_OnEndTouchAll: 0x10E0, // CEntityIOOutput
            m_OnTouching: 0x10F8, // CEntityIOOutput
            m_OnTouchingEachEntity: 0x1110, // CEntityIOOutput
            m_OnNotTouching: 0x1128, // CEntityIOOutput
            m_OnTouchingChanged: 0x1140, // CEntityIOOutput
            m_hTouchingEntities: 0x1158, // CUtlVector<CHandle<C_BaseEntity>>
            m_iFilterName: 0x1170, // CUtlSymbolLarge
            m_hFilter: 0x1178, // CHandle<CBaseFilter>
            m_bDisabled: 0x117C, // bool
        },
        FilterDamageType: {
            m_iDamageType: 0x638, // int32
        },
        CAttributeList: {
            m_Attributes: 0x8, // C_UtlVectorEmbeddedNetworkVar<CEconItemAttribute>
            m_pManager: 0x70, // CAttributeManager*
        },
        CFilterProximity: {
            m_flRadius: 0x638, // float32
        },
        CEffectData: {
            m_vOrigin: 0x8, // VectorWS
            m_vStart: 0x14, // VectorWS
            m_vNormal: 0x20, // Vector
            m_vAngles: 0x2C, // QAngle
            m_hEntity: 0x38, // CEntityHandle
            m_hOtherEntity: 0x3C, // CEntityHandle
            m_flScale: 0x40, // float32
            m_flMagnitude: 0x44, // float32
            m_flRadius: 0x48, // float32
            m_nSurfaceProp: 0x4C, // CUtlStringToken
            m_nEffectIndex: 0x50, // CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>
            m_nDamageType: 0x58, // uint32
            m_nPenetrate: 0x5C, // uint8
            m_nMaterial: 0x5E, // uint16
            m_nHitBox: 0x60, // int16
            m_nColor: 0x62, // uint8
            m_fFlags: 0x63, // uint8
            m_nAttachmentIndex: 0x64, // AttachmentHandle_t
            m_nAttachmentName: 0x68, // CUtlStringToken
            m_iEffectName: 0x6C, // uint16
        },
        C_WeaponSCAR20: {
        },
        C_FuncMover: {
        },
        CCSPlayerController_InventoryServices__NetworkedLoadoutSlot_t: {
            pItem: 0x0, // C_EconItemView*
            team: 0x8, // uint16
            slot: 0xA, // uint16
        },
        C_DecoyGrenade: {
        },
        C_WaterBullet: {
        },
        CCSPlayer_ActionTrackingServices: {
            m_hLastWeaponBeforeC4AutoSwitch: 0x48, // CHandle<C_BasePlayerWeapon>
            m_bIsRescuing: 0x4C, // bool
            m_weaponPurchasesThisMatch: 0x50, // WeaponPurchaseTracker_t
            m_weaponPurchasesThisRound: 0xC0, // WeaponPurchaseTracker_t
            m_weaponCarryOverIntoThisRound: 0x130, // WeaponPurchaseTracker_t
        },
        CBrokenGlassTrap: {
        },
        CCSObserver_MovementServices: {
        },
        C_BaseCombatCharacter: {
            m_hMyWearables: 0x1268, // C_NetworkUtlVectorBase<CHandle<C_EconWearable>>
            m_leftFootAttachment: 0x1280, // AttachmentHandle_t
            m_rightFootAttachment: 0x1281, // AttachmentHandle_t
            m_nWaterWakeMode: 0x1284, // C_BaseCombatCharacter::WaterWakeMode_t
            m_flWaterWorldZ: 0x1288, // float32
            m_flWaterNextTraceTime: 0x128C, // float32
        },
        C_PointClientUIDialog: {
            m_hActivator: 0x10C8, // CHandle<C_BaseEntity>
            m_bStartEnabled: 0x10CC, // bool
        },
        C_SoundEventMultiPointEntity: {
        },
        C_WeaponHKP2000: {
        },
        C_FootstepControl: {
            m_source: 0x1180, // CUtlSymbolLarge
            m_destination: 0x1188, // CUtlSymbolLarge
        },
        CCitadelSoundOpvarSetOBB: {
            m_iszStackName: 0x618, // CUtlSymbolLarge
            m_iszOperatorName: 0x620, // CUtlSymbolLarge
            m_iszOpvarName: 0x628, // CUtlSymbolLarge
            m_vDistanceInnerMins: 0x630, // Vector
            m_vDistanceInnerMaxs: 0x63C, // Vector
            m_vDistanceOuterMins: 0x648, // Vector
            m_vDistanceOuterMaxs: 0x654, // Vector
            m_nAABBDirection: 0x660, // int32
        },
        C_CSGO_EndOfMatchLineupStart: {
        },
        CPlayer_WaterServices: {
        },
        CDamageRecord: {
            m_PlayerDamager: 0x30, // CHandle<C_CSPlayerPawn>
            m_PlayerRecipient: 0x34, // CHandle<C_CSPlayerPawn>
            m_hPlayerControllerDamager: 0x38, // CHandle<CCSPlayerController>
            m_hPlayerControllerRecipient: 0x3C, // CHandle<CCSPlayerController>
            m_szPlayerDamagerName: 0x40, // CUtlString
            m_szPlayerRecipientName: 0x48, // CUtlString
            m_DamagerXuid: 0x50, // uint64
            m_RecipientXuid: 0x58, // uint64
            m_flBulletsDamage: 0x60, // float32
            m_flDamage: 0x64, // float32
            m_flActualHealthRemoved: 0x68, // float32
            m_iNumHits: 0x6C, // int32
            m_iLastBulletUpdate: 0x70, // int32
            m_bIsOtherEnemy: 0x74, // bool
            m_killType: 0x75, // EKillTypes_t
        },
        C_DynamicPropAlias_dynamic_prop: {
        },
        CEnvSoundscapeProxyAlias_snd_soundscape_proxy: {
        },
        C_OmniLight: {
            m_flInnerAngle: 0x13A8, // float32
            m_flOuterAngle: 0x13AC, // float32
            m_bShowLight: 0x13B0, // bool
        },
        C_SceneEntity: {
            m_bIsPlayingBack: 0x608, // bool
            m_bPaused: 0x609, // bool
            m_bMultiplayer: 0x60A, // bool
            m_bAutogenerated: 0x60B, // bool
            m_bAllRequirementsComplete: 0x60C, // bool
            m_flForceClientTime: 0x610, // float32
            m_nSceneStringIndex: 0x614, // uint16
            m_bClientOnly: 0x616, // bool
            m_hOwner: 0x618, // CHandle<C_BaseModelEntity>
            m_hActorList: 0x620, // C_NetworkUtlVectorBase<CHandle<C_BaseModelEntity>>
            m_bWasPlaying: 0x638, // bool
            m_QueuedEvents: 0x648, // CUtlVector<C_SceneEntity::QueuedEvents_t>
            m_flCurrentTime: 0x660, // float32
        },
        C_NametagModule: {
            m_strNametagString: 0x1270, // CUtlString
        },
        C_EconEntity: {
            m_flFlexDelayTime: 0x1278, // float32
            m_flFlexDelayedWeight: 0x1280, // float32*
            m_bAttributesInitialized: 0x1288, // bool
            m_AttributeManager: 0x1290, // C_AttributeContainer
            m_OriginalOwnerXuidLow: 0x18A0, // uint32
            m_OriginalOwnerXuidHigh: 0x18A4, // uint32
            m_nFallbackPaintKit: 0x18A8, // int32
            m_nFallbackSeed: 0x18AC, // int32
            m_flFallbackWear: 0x18B0, // float32
            m_nFallbackStatTrak: 0x18B4, // int32
            m_bClientside: 0x18B8, // bool
            m_bParticleSystemsCreated: 0x18B9, // bool
            m_vecAttachedParticles: 0x18C0, // CUtlVector<int32>
            m_hViewmodelAttachment: 0x18D8, // CHandle<CBaseAnimGraph>
            m_iOldTeam: 0x18DC, // int32
            m_bAttachmentDirty: 0x18E0, // bool
            m_nUnloadedModelIndex: 0x18E4, // int32
            m_iNumOwnerValidationRetries: 0x18E8, // int32
            m_hOldProvidee: 0x18F8, // CHandle<C_BaseEntity>
            m_vecAttachedModels: 0x1900, // CUtlVector<C_EconEntity::AttachedModelData_t>
        },
        CPlayer_UseServices: {
        },
        C_PointValueRemapper: {
            m_bDisabled: 0x600, // bool
            m_bDisabledOld: 0x601, // bool
            m_bUpdateOnClient: 0x602, // bool
            m_nInputType: 0x604, // ValueRemapperInputType_t
            m_hRemapLineStart: 0x608, // CHandle<C_BaseEntity>
            m_hRemapLineEnd: 0x60C, // CHandle<C_BaseEntity>
            m_flMaximumChangePerSecond: 0x610, // float32
            m_flDisengageDistance: 0x614, // float32
            m_flEngageDistance: 0x618, // float32
            m_bRequiresUseKey: 0x61C, // bool
            m_nOutputType: 0x620, // ValueRemapperOutputType_t
            m_hOutputEntities: 0x628, // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            m_nHapticsType: 0x640, // ValueRemapperHapticsType_t
            m_nMomentumType: 0x644, // ValueRemapperMomentumType_t
            m_flMomentumModifier: 0x648, // float32
            m_flSnapValue: 0x64C, // float32
            m_flCurrentMomentum: 0x650, // float32
            m_nRatchetType: 0x654, // ValueRemapperRatchetType_t
            m_flRatchetOffset: 0x658, // float32
            m_flInputOffset: 0x65C, // float32
            m_bEngaged: 0x660, // bool
            m_bFirstUpdate: 0x661, // bool
            m_flPreviousValue: 0x664, // float32
            m_flPreviousUpdateTickTime: 0x668, // GameTime_t
            m_vecPreviousTestPoint: 0x66C, // VectorWS
        },
        CPulseCell_Unknown: {
            m_UnknownKeys: 0x48, // KeyValues3
        },
        C_WeaponMP7: {
        },
        CSPerRoundStats_t: {
            m_iKills: 0x30, // int32
            m_iDeaths: 0x34, // int32
            m_iAssists: 0x38, // int32
            m_iDamage: 0x3C, // int32
            m_iEquipmentValue: 0x40, // int32
            m_iMoneySaved: 0x44, // int32
            m_iKillReward: 0x48, // int32
            m_iLiveTime: 0x4C, // int32
            m_iHeadShotKills: 0x50, // int32
            m_iObjective: 0x54, // int32
            m_iCashEarned: 0x58, // int32
            m_iUtilityDamage: 0x5C, // int32
            m_iEnemiesFlashed: 0x60, // int32
        },
        C_CS2HudModelBase: {
        },
        C_CSGameRules: {
            m_bFreezePeriod: 0x40, // bool
            m_bWarmupPeriod: 0x41, // bool
            m_fWarmupPeriodEnd: 0x44, // GameTime_t
            m_fWarmupPeriodStart: 0x48, // GameTime_t
            m_bTerroristTimeOutActive: 0x4C, // bool
            m_bCTTimeOutActive: 0x4D, // bool
            m_flTerroristTimeOutRemaining: 0x50, // float32
            m_flCTTimeOutRemaining: 0x54, // float32
            m_nTerroristTimeOuts: 0x58, // int32
            m_nCTTimeOuts: 0x5C, // int32
            m_bTechnicalTimeOut: 0x60, // bool
            m_bMatchWaitingForResume: 0x61, // bool
            m_iFreezeTime: 0x64, // int32
            m_iRoundTime: 0x68, // int32
            m_fMatchStartTime: 0x6C, // float32
            m_fRoundStartTime: 0x70, // GameTime_t
            m_flRestartRoundTime: 0x74, // GameTime_t
            m_bGameRestart: 0x78, // bool
            m_flGameStartTime: 0x7C, // float32
            m_timeUntilNextPhaseStarts: 0x80, // float32
            m_gamePhase: 0x84, // int32
            m_totalRoundsPlayed: 0x88, // int32
            m_nRoundsPlayedThisPhase: 0x8C, // int32
            m_nOvertimePlaying: 0x90, // int32
            m_iHostagesRemaining: 0x94, // int32
            m_bAnyHostageReached: 0x98, // bool
            m_bMapHasBombTarget: 0x99, // bool
            m_bMapHasRescueZone: 0x9A, // bool
            m_bMapHasBuyZone: 0x9B, // bool
            m_bIsQueuedMatchmaking: 0x9C, // bool
            m_nQueuedMatchmakingMode: 0xA0, // int32
            m_bIsValveDS: 0xA4, // bool
            m_bLogoMap: 0xA5, // bool
            m_bPlayAllStepSoundsOnServer: 0xA6, // bool
            m_iSpectatorSlotCount: 0xA8, // int32
            m_MatchDevice: 0xAC, // int32
            m_bHasMatchStarted: 0xB0, // bool
            m_nNextMapInMapgroup: 0xB4, // int32
            m_szTournamentEventName: 0xB8, // char[512]
            m_szTournamentEventStage: 0x2B8, // char[512]
            m_szMatchStatTxt: 0x4B8, // char[512]
            m_szTournamentPredictionsTxt: 0x6B8, // char[512]
            m_nTournamentPredictionsPct: 0x8B8, // int32
            m_flCMMItemDropRevealStartTime: 0x8BC, // GameTime_t
            m_flCMMItemDropRevealEndTime: 0x8C0, // GameTime_t
            m_bIsDroppingItems: 0x8C4, // bool
            m_bIsQuestEligible: 0x8C5, // bool
            m_bIsHltvActive: 0x8C6, // bool
            m_bBombPlanted: 0x8C7, // bool
            m_arrProhibitedItemIndices: 0x8C8, // uint16[100]
            m_arrTournamentActiveCasterAccounts: 0x990, // uint32[4]
            m_numBestOfMaps: 0x9A0, // int32
            m_nHalloweenMaskListSeed: 0x9A4, // int32
            m_bBombDropped: 0x9A8, // bool
            m_iRoundWinStatus: 0x9AC, // int32
            m_eRoundWinReason: 0x9B0, // int32
            m_bTCantBuy: 0x9B4, // bool
            m_bCTCantBuy: 0x9B5, // bool
            m_iMatchStats_RoundResults: 0x9B8, // int32[30]
            m_iMatchStats_PlayersAlive_CT: 0xA30, // int32[30]
            m_iMatchStats_PlayersAlive_T: 0xAA8, // int32[30]
            m_TeamRespawnWaveTimes: 0xB20, // float32[32]
            m_flNextRespawnWave: 0xBA0, // GameTime_t[32]
            m_vMinimapMins: 0xC20, // VectorWS
            m_vMinimapMaxs: 0xC2C, // VectorWS
            m_MinimapVerticalSectionHeights: 0xC38, // float32[8]
            m_ullLocalMatchID: 0xC58, // uint64
            m_nEndMatchMapGroupVoteTypes: 0xC60, // int32[10]
            m_nEndMatchMapGroupVoteOptions: 0xC88, // int32[10]
            m_nEndMatchMapVoteWinner: 0xCB0, // int32
            m_iNumConsecutiveCTLoses: 0xCB4, // int32
            m_iNumConsecutiveTerroristLoses: 0xCB8, // int32
            m_nMatchAbortedEarlyReason: 0xD78, // int32
            m_bHasTriggeredRoundStartMusic: 0xD7C, // bool
            m_bSwitchingTeamsAtRoundReset: 0xD7D, // bool
            m_pGameModeRules: 0xD98, // CCSGameModeRules*
            m_RetakeRules: 0xDA0, // C_RetakeGameRules
            m_nMatchEndCount: 0xEF8, // uint8
            m_nTTeamIntroVariant: 0xEFC, // int32
            m_nCTTeamIntroVariant: 0xF00, // int32
            m_bTeamIntroPeriod: 0xF04, // bool
            m_iRoundEndWinnerTeam: 0xF08, // int32
            m_eRoundEndReason: 0xF0C, // int32
            m_bRoundEndShowTimerDefend: 0xF10, // bool
            m_iRoundEndTimerTime: 0xF14, // int32
            m_sRoundEndFunFactToken: 0xF18, // CUtlString
            m_iRoundEndFunFactPlayerSlot: 0xF20, // CPlayerSlot
            m_iRoundEndFunFactData1: 0xF24, // int32
            m_iRoundEndFunFactData2: 0xF28, // int32
            m_iRoundEndFunFactData3: 0xF2C, // int32
            m_sRoundEndMessage: 0xF30, // CUtlString
            m_iRoundEndPlayerCount: 0xF38, // int32
            m_bRoundEndNoMusic: 0xF3C, // bool
            m_iRoundEndLegacy: 0xF40, // int32
            m_nRoundEndCount: 0xF44, // uint8
            m_iRoundStartRoundNumber: 0xF48, // int32
            m_nRoundStartCount: 0xF4C, // uint8
            m_flLastPerfSampleTime: 0x4F58, // float64
        },
        CGrenadeTracer: {
            m_flTracerDuration: 0x10B0, // float32
            m_nType: 0x10B4, // GrenadeType_t
        },
        CCSGameModeRules_Noop: {
        },
        C_BaseCSGrenadeProjectile: {
            m_vInitialPosition: 0x12B0, // VectorWS
            m_vInitialVelocity: 0x12BC, // Vector
            m_nBounces: 0x12C8, // int32
            m_nExplodeEffectIndex: 0x12D0, // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
            m_nExplodeEffectTickBegin: 0x12D8, // int32
            m_vecExplodeEffectOrigin: 0x12DC, // VectorWS
            m_flSpawnTime: 0x12E8, // GameTime_t
            vecLastTrailLinePos: 0x12EC, // Vector
            flNextTrailLineTime: 0x12F8, // GameTime_t
            m_bExplodeEffectBegan: 0x12FC, // bool
            m_bCanCreateGrenadeTrail: 0x12FD, // bool
            m_nSnapshotTrajectoryEffectIndex: 0x1300, // ParticleIndex_t
            m_hSnapshotTrajectoryParticleSnapshot: 0x1308, // CStrongHandle<InfoForResourceTypeIParticleSnapshot>
            m_arrTrajectoryTrailPoints: 0x1310, // CUtlVector<Vector>
            m_arrTrajectoryTrailPointCreationTimes: 0x1328, // CUtlVector<float32>
            m_flTrajectoryTrailEffectCreationTime: 0x1340, // float32
        },
        CCSGO_RushIntroCounterTerroristPosition: {
        },
        CCSPlayerController_InGameMoneyServices: {
            m_iAccount: 0x40, // int32
            m_iStartAccount: 0x44, // int32
            m_iTotalCashSpent: 0x48, // int32
            m_iCashSpentThisRound: 0x4C, // int32
        },
        CCSPlayer_AimPunchServices: {
            m_predictableBaseTick: 0x48, // GameTick_t
            m_predictableBaseTickInterpAmount: 0x4C, // float32
            m_predictableBaseAngle: 0x50, // QAngle
            m_predictableBaseAngleVel: 0x5C, // QAngle
            m_unpredictableBaseTick: 0xA0, // GameTick_t
            m_unpredictableBaseAngle: 0xA4, // QAngle
        },
        C_HEGrenadeProjectile: {
        },
        CFilterModel: {
            m_iFilterModel: 0x638, // CUtlSymbolLarge
        },
        C_SoundAreaEntityOrientedBox: {
            m_vMin: 0x628, // Vector
            m_vMax: 0x634, // Vector
        },
        C_SoundOpvarSetPointEntity: {
        },
        CPulseGameBlackboard: {
            m_strGraphName: 0x608, // CUtlString
            m_strStateBlob: 0x610, // CUtlString
        },
        C_CSWeaponBaseShotgun: {
        },
        C_RagdollPropAttached: {
            m_boneIndexAttached: 0x12F0, // uint32
            m_ragdollAttachedObjectIndex: 0x12F4, // uint32
            m_attachmentPointBoneSpace: 0x12F8, // Vector
            m_attachmentPointRagdollSpace: 0x1304, // Vector
            m_vecOffset: 0x1310, // Vector
            m_parentTime: 0x131C, // float32
            m_bHasParent: 0x1320, // bool
        },
        C_ModelPointEntity: {
        },
        C_CSGO_PreviewPlayer: {
            m_animgraphCharacterModeString: 0x3720, // CGlobalSymbol
            m_flInitialModelScale: 0x3728, // float32
        },
        C_RectLight: {
            m_bShowLight: 0x13A8, // bool
        },
        CCSRadarElement: {
            m_nElementType: 0x618, // uint32
            m_nElementColor: 0x61C, // uint32
            m_nTeamFilter: 0x620, // uint32
        },
        C_FuncTrackTrain: {
            m_nLongAxis: 0x1098, // int32
            m_flRadius: 0x109C, // float32
            m_flLineLength: 0x10A0, // float32
        },
        C_EconWearable: {
            m_nForceSkin: 0x1918, // int32
            m_bAlwaysAllow: 0x191C, // bool
        },
        EntitySpottedState_t: {
            m_bSpotted: 0x8, // bool
            m_bSpottedByMask: 0xC, // uint32[2]
        },
        C_WeaponM4A1: {
        },
        C_Item: {
            m_pReticleHintTextName: 0x1918, // char[256]
        },
        C_CSPetPlacement: {
        },
        C_Beam: {
            m_flFrameRate: 0x1098, // float32
            m_flHDRColorScale: 0x109C, // float32
            m_flFireTime: 0x10A0, // GameTime_t
            m_flDamage: 0x10A4, // float32
            m_nNumBeamEnts: 0x10A8, // uint8
            m_queryHandleHalo: 0x10AC, // int32
            m_hBaseMaterial: 0x10D0, // CStrongHandle<InfoForResourceTypeIMaterial2>
            m_nHaloIndex: 0x10D8, // CStrongHandle<InfoForResourceTypeIMaterial2>
            m_nBeamType: 0x10E0, // BeamType_t
            m_nBeamFlags: 0x10E4, // uint32
            m_hAttachEntity: 0x10E8, // CHandle<C_BaseEntity>[10]
            m_nAttachIndex: 0x1110, // AttachmentHandle_t[10]
            m_fWidth: 0x111C, // float32
            m_fEndWidth: 0x1120, // float32
            m_fFadeLength: 0x1124, // float32
            m_fHaloScale: 0x1128, // float32
            m_fAmplitude: 0x112C, // float32
            m_fStartFrame: 0x1130, // float32
            m_fSpeed: 0x1134, // float32
            m_flFrame: 0x1138, // float32
            m_bTurnedOff: 0x113C, // bool
            m_vecEndPos: 0x1140, // VectorWS
            m_hEndEntity: 0x114C, // CHandle<C_BaseEntity>
        },
        C_EnvLightProbeVolume: {
            m_Entity_hLightProbeTexture_AmbientCube: 0x698, // CStrongHandle<InfoForResourceTypeCTextureBase>
            m_Entity_hLightProbeTexture_SDF: 0x6A0, // CStrongHandle<InfoForResourceTypeCTextureBase>
            m_Entity_hLightProbeTexture_SH2_DC: 0x6A8, // CStrongHandle<InfoForResourceTypeCTextureBase>
            m_Entity_hLightProbeTexture_SH2_L1: 0x6B0, // CStrongHandle<InfoForResourceTypeCTextureBase>
            m_Entity_hLightProbeDirectLightIndicesTexture: 0x6B8, // CStrongHandle<InfoForResourceTypeCTextureBase>
            m_Entity_hLightProbeDirectLightScalarsTexture: 0x6C0, // CStrongHandle<InfoForResourceTypeCTextureBase>
            m_Entity_hLightProbeDirectLightShadowsTexture: 0x6C8, // CStrongHandle<InfoForResourceTypeCTextureBase>
            m_Entity_vBoxMins: 0x6D0, // Vector
            m_Entity_vBoxMaxs: 0x6DC, // Vector
            m_Entity_bMoveable: 0x6E8, // bool
            m_Entity_nHandshake: 0x6EC, // int32
            m_Entity_nPriority: 0x6F0, // int32
            m_Entity_bStartDisabled: 0x6F4, // bool
            m_Entity_nLightProbeSizeX: 0x6F8, // int32
            m_Entity_nLightProbeSizeY: 0x6FC, // int32
            m_Entity_nLightProbeSizeZ: 0x700, // int32
            m_Entity_nLightProbeAtlasX: 0x704, // int32
            m_Entity_nLightProbeAtlasY: 0x708, // int32
            m_Entity_nLightProbeAtlasZ: 0x70C, // int32
            m_Entity_bEnabled: 0x719, // bool
        },
        C_FuncConveyor: {
            m_vecMoveDirEntitySpace: 0x10A0, // Vector
            m_flTargetSpeed: 0x10AC, // float32
            m_nTransitionStartTick: 0x10B0, // GameTick_t
            m_nTransitionDurationTicks: 0x10B4, // int32
            m_flTransitionStartSpeed: 0x10B8, // float32
            m_flFrictionScale: 0x10BC, // float32
            m_hConveyorModels: 0x10C0, // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            m_flCurrentConveyorOffset: 0x10D8, // float32
            m_flCurrentConveyorSpeed: 0x10DC, // float32
        },
        CCSPlayer_WeaponServices: {
            m_flNextAttack: 0xD0, // GameTime_t
            m_nOldTotalShootPositionHistoryCount: 0xD4, // uint32
            m_nOldTotalInputHistoryCount: 0x370, // uint32
            m_networkAnimTiming: 0x15C0, // C_NetworkUtlVectorBase<uint8>
            m_bBlockInspectUntilNextGraphUpdate: 0x15D8, // bool
        },
        C_PhysMagnet: {
            m_aAttachedObjectsFromServer: 0x1268, // CUtlVector<int32>
            m_aAttachedObjects: 0x1280, // CUtlVector<CHandle<C_BaseEntity>>
        },
        CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable: {
        },
        C_Breakable: {
        },
        C_PlantedC4: {
            m_bBombTicking: 0x1288, // bool
            m_nBombSite: 0x128C, // int32
            m_nSourceSoundscapeHash: 0x1290, // int32
            m_entitySpottedState: 0x1298, // EntitySpottedState_t
            m_flNextGlow: 0x12B0, // GameTime_t
            m_flNextBeep: 0x12B4, // GameTime_t
            m_flC4Blow: 0x12B8, // GameTime_t
            m_bCannotBeDefused: 0x12BC, // bool
            m_bHasExploded: 0x12BD, // bool
            m_flTimerLength: 0x12C0, // float32
            m_bBeingDefused: 0x12C4, // bool
            m_bTriggerWarning: 0x12C8, // float32
            m_bExplodeWarning: 0x12CC, // float32
            m_bC4Activated: 0x12D0, // bool
            m_bTenSecWarning: 0x12D1, // bool
            m_flDefuseLength: 0x12D4, // float32
            m_flDefuseCountDown: 0x12D8, // GameTime_t
            m_bBombDefused: 0x12DC, // bool
            m_hBombDefuser: 0x12E0, // CHandle<C_CSPlayerPawn>
            m_AttributeManager: 0x12E8, // C_AttributeContainer
            m_hDefuserMultimeter: 0x18F8, // CHandle<C_Multimeter>
            m_flNextRadarFlashTime: 0x18FC, // GameTime_t
            m_bRadarFlash: 0x1900, // bool
            m_pBombDefuser: 0x1904, // CHandle<C_CSPlayerPawn>
            m_fLastDefuseTime: 0x1908, // GameTime_t
            m_pPredictionOwner: 0x1910, // CBasePlayerController*
            m_vecC4ExplodeSpectatePos: 0x1918, // VectorWS
            m_vecC4ExplodeSpectateAng: 0x1924, // QAngle
            m_flC4ExplodeSpectateDuration: 0x1930, // float32
        },
        CCSCustomHudLayoutState: {
            m_playerSlot: 0x30, // CPlayerSlot
            m_bInputCaptureEnabled: 0x34, // bool
            m_vecHasClasses: 0x38, // C_NetworkUtlVectorBase<HUDPanelHasClass_t>
            m_vecDialogVariableStrings: 0x50, // C_NetworkUtlVectorBase<HUDPanelDialogVariableString_t>
        },
        CCSGO_WingmanIntroCharacterPosition: {
        },
        CFilterName: {
            m_iFilterName: 0x638, // CUtlSymbolLarge
        },
        C_RagdollProp: {
            m_ragEnabled: 0x1268, // C_NetworkUtlVectorBase<bool>
            m_ragPos: 0x1280, // C_NetworkUtlVectorBase<Vector>
            m_ragAngles: 0x1298, // C_NetworkUtlVectorBase<QAngle>
            m_flBlendWeight: 0x12B0, // float32
            m_hRagdollSource: 0x12B4, // CHandle<C_BaseEntity>
            m_iEyeAttachment: 0x12B8, // AttachmentHandle_t
            m_flBlendWeightCurrent: 0x12BC, // float32
            m_parentPhysicsBoneIndices: 0x12C0, // CUtlVector<int32>
            m_worldSpaceBoneComputationOrder: 0x12D8, // CUtlVector<int32>
        },
        C_MapPreviewParticleSystem: {
        },
        CBaseAnimGraph: {
            m_graphControllerManager: 0x1098, // CAnimGraphControllerManager
            m_pMainGraphController: 0x1130, // CAnimGraphControllerPtr
            m_bInitiallyPopulateInterpHistory: 0x1138, // bool
            m_bSuppressAnimEventSounds: 0x113A, // bool
            m_OnLayerCycleUpdated: 0x1140, // CEntityOutputTemplate<float32>
            m_OnExternalChoreoGraphChanged: 0x1160, // CEntityIOOutput
            m_bAnimGraphUpdateEnabled: 0x1180, // bool
            m_bAnimationUpdateScheduled: 0x1181, // bool
            m_vecForce: 0x1184, // Vector
            m_nForceBone: 0x1190, // int32
            m_pClientsideRagdoll: 0x1198, // CBaseAnimGraph*
            m_bBuiltRagdoll: 0x11A0, // bool
            m_pRagdollControl: 0x11B0, // IPhysicsRagdollControl*
            m_RagdollPose: 0x11B8, // PhysicsRagdollPose_t
            m_bRagdollEnabled: 0x1200, // bool
            m_bRagdollClientSide: 0x1201, // bool
            m_bShouldUpdateTransformations: 0x1202, // bool
            m_bHasAnimatedMaterialAttributes: 0x1210, // bool
        },
        C_WeaponM249: {
        },
        C_LocalTempEntity: {
            flags: 0x1268, // int32
            die: 0x126C, // GameTime_t
            m_flFrameMax: 0x1270, // float32
            x: 0x1274, // float32
            y: 0x1278, // float32
            fadeSpeed: 0x127C, // float32
            bounceFactor: 0x1280, // float32
            hitSound: 0x1284, // int32
            priority: 0x1288, // int32
            tentOffset: 0x128C, // Vector
            m_vecTempEntAngVelocity: 0x1298, // QAngle
            tempent_renderamt: 0x12A4, // int32
            m_vecNormal: 0x12A8, // Vector
            m_flSpriteScale: 0x12B4, // float32
            m_nFlickerFrame: 0x12B8, // int32
            m_flFrameRate: 0x12BC, // float32
            m_flFrame: 0x12C0, // float32
            m_pszImpactEffect: 0x12C8, // char*
            m_pszParticleEffect: 0x12D0, // char*
            m_bParticleCollision: 0x12D8, // bool
            m_iLastCollisionFrame: 0x12DC, // int32
            m_vLastCollisionOrigin: 0x12E0, // VectorWS
            m_vecTempEntVelocity: 0x12EC, // Vector
            m_vecPrevAbsOrigin: 0x12F8, // VectorWS
            m_vecTempEntAcceleration: 0x1304, // Vector
        },
        C_WeaponTaser: {
            m_fFireTime: 0x1F50, // GameTime_t
            m_nLastAttackTick: 0x1F54, // int32
        },
        C_PointEntity: {
        },
        C_SingleplayRules: {
        },
        C_PrecipitationBlocker: {
        },
        C_CSGO_CounterTerroristTeamIntroCamera: {
        },
        C_SoundOpvarSetPathCornerEntity: {
        },
        CPlayer_WeaponServices: {
            m_hMyWeapons: 0x48, // C_NetworkUtlVectorBase<CHandle<C_BasePlayerWeapon>>
            m_hActiveWeapon: 0x60, // CHandle<C_BasePlayerWeapon>
            m_hLastWeapon: 0x64, // CHandle<C_BasePlayerWeapon>
            m_iAmmo: 0x68, // uint16[32]
        },
        C_WeaponNegev: {
        },
        C_WeaponFiveSeven: {
        },
        C_WeaponSawedoff: {
        },
        C_TriggerVolume: {
        },
        C_WeaponMP9: {
        },
        C_DynamicPropAlias_prop_dynamic_override: {
        },
        CEnvSoundscapeTriggerable: {
        },
        C_PlayerPing: {
            m_hPlayer: 0x630, // CHandle<C_CSPlayerPawn>
            m_hPingedEntity: 0x634, // CHandle<C_BaseEntity>
            m_iType: 0x638, // int32
            m_bUrgent: 0x63C, // bool
            m_szPlaceName: 0x63D, // char[18]
        },
        C_AK47: {
        },
        C_CSGO_MapPreviewCameraPathNode: {
            m_szParentPathUniqueID: 0x600, // CUtlSymbolLarge
            m_nPathIndex: 0x608, // int32
            m_vInTangentLocal: 0x60C, // Vector
            m_vOutTangentLocal: 0x618, // Vector
            m_flFOV: 0x624, // float32
            m_flCameraSpeed: 0x628, // float32
            m_flEaseIn: 0x62C, // float32
            m_flEaseOut: 0x630, // float32
            m_vInTangentWorld: 0x634, // Vector
            m_vOutTangentWorld: 0x640, // Vector
        },
        C_CSPlayerResource: {
            m_bHostageAlive: 0x600, // bool[12]
            m_isHostageFollowingSomeone: 0x60C, // bool[12]
            m_iHostageEntityIDs: 0x618, // CEntityIndex[12]
            m_bombsiteCenterA: 0x648, // VectorWS
            m_bombsiteCenterB: 0x654, // VectorWS
            m_hostageRescueX: 0x660, // int32[4]
            m_hostageRescueY: 0x670, // int32[4]
            m_hostageRescueZ: 0x680, // int32[4]
            m_bEndMatchNextMapAllVoted: 0x690, // bool
            m_foundGoalPositions: 0x691, // bool
        },
        CSkyboxReference: {
            m_worldGroupId: 0x600, // WorldGroupId_t
            m_hSkyCamera: 0x604, // CHandle<C_SkyCamera>
        },
        C_IncendiaryGrenade: {
        },
        CFilterClass: {
            m_iFilterClass: 0x638, // CUtlSymbolLarge
        },
        C_PointCameraVFOV: {
            m_flVerticalFOV: 0x660, // float32
        },
        CPathWithDynamicNodes: {
            m_vecPathNodes: 0x710, // C_NetworkUtlVectorBase<CHandle<CPathNode>>
            m_xInitialPathWorldToLocal: 0x730, // CTransform
            m_eDesiredDirection: 0x750, // DirectionAlongSimplePath_t
            m_bIgnoreParentRotation: 0x754, // bool
        },
        CBaseFilter: {
            m_bNegated: 0x600, // bool
            m_OnPass: 0x608, // CEntityIOOutput
            m_OnFail: 0x620, // CEntityIOOutput
        },
        WeaponPurchaseTracker_t: {
            m_weaponPurchases: 0x8, // C_UtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t>
        },
        CMapInfo: {
            m_iBuyingStatus: 0x600, // int32
            m_flBombRadius: 0x604, // float32
            m_iPetPopulation: 0x608, // int32
            m_bUseNormalSpawnsForDM: 0x60C, // bool
            m_bDisableAutoGeneratedDMSpawns: 0x60D, // bool
            m_flBotMaxVisionDistance: 0x610, // float32
            m_iHostageCount: 0x614, // int32
            m_bFadePlayerVisibilityFarZ: 0x618, // bool
            m_bRainTraceToSkyEnabled: 0x619, // bool
            m_bGPUCullSkybox: 0x61A, // bool
            m_flEnvRainStrength: 0x61C, // float32
            m_flEnvPuddleRippleStrength: 0x620, // float32
            m_flEnvPuddleRippleDirection: 0x624, // float32
            m_flEnvWetnessCoverage: 0x628, // float32
            m_flEnvWetnessDryingAmount: 0x62C, // float32
        },
        C_CSGO_EndOfMatchCamera: {
        },
        C_BaseGrenade: {
            m_bHasWarnedAI: 0x1268, // bool
            m_bIsSmokeGrenade: 0x1269, // bool
            m_bIsLive: 0x126A, // bool
            m_DmgRadius: 0x126C, // float32
            m_flDetonateTime: 0x1270, // GameTime_t
            m_flWarnAITime: 0x1274, // float32
            m_flDamage: 0x1278, // float32
            m_iszBounceSound: 0x1280, // CUtlSymbolLarge
            m_ExplosionSound: 0x1288, // CUtlString
            m_hThrower: 0x1290, // CHandle<C_CSPlayerPawn>
            m_flNextAttack: 0x12A8, // GameTime_t
            m_hOriginalThrower: 0x12AC, // CHandle<C_CSPlayerPawn>
        },
        C_PlayerSprayDecal: {
            m_nUniqueID: 0x1098, // int32
            m_unAccountID: 0x109C, // uint32
            m_unTraceID: 0x10A0, // uint32
            m_rtGcTime: 0x10A4, // uint32
            m_vecEndPos: 0x10A8, // VectorWS
            m_vecStart: 0x10B4, // VectorWS
            m_vecLeft: 0x10C0, // Vector
            m_vecNormal: 0x10CC, // Vector
            m_nPlayer: 0x10D8, // int32
            m_nEntity: 0x10DC, // int32
            m_nHitbox: 0x10E0, // int32
            m_flCreationTime: 0x10E4, // float32
            m_nTintID: 0x10E8, // int32
            m_nVersion: 0x10EC, // uint8
            m_ubSignature: 0x10ED, // uint8[128]
            m_SprayRenderHelper: 0x1178, // CPlayerSprayDecalRenderHelper
        },
        CPulseCell_LimitCount__Criteria_t: {
            m_bLimitCountPasses: 0x0, // bool
        },
        C_CS2HudModelArms: {
        },
        C_LightSpotEntity: {
        },
        CCSGameModeRules_Deathmatch: {
            m_flDMBonusStartTime: 0x30, // GameTime_t
            m_flDMBonusTimeLength: 0x34, // float32
            m_sDMBonusWeapon: 0x38, // CUtlString
        },
        CPulseExecCursor: {
        },
        C_Sprite: {
            m_hSpriteMaterial: 0x1098, // CStrongHandle<InfoForResourceTypeIMaterial2>
            m_hAttachedToEntity: 0x10A0, // CHandle<C_BaseEntity>
            m_nAttachment: 0x10A4, // AttachmentHandle_t
            m_flSpriteFramerate: 0x10A8, // float32
            m_flFrame: 0x10AC, // float32
            m_flDieTime: 0x10B0, // GameTime_t
            m_nBrightness: 0x10C0, // uint32
            m_flBrightnessDuration: 0x10C4, // float32
            m_flSpriteScale: 0x10C8, // float32
            m_flScaleDuration: 0x10CC, // float32
            m_bWorldSpaceScale: 0x10D0, // bool
            m_flGlowProxySize: 0x10D4, // float32
            m_flHDRColorScale: 0x10D8, // float32
            m_flLastTime: 0x10DC, // GameTime_t
            m_flMaxFrame: 0x10E0, // float32
            m_flStartScale: 0x10E4, // float32
            m_flDestScale: 0x10E8, // float32
            m_flScaleTimeStart: 0x10EC, // GameTime_t
            m_nStartBrightness: 0x10F0, // int32
            m_nDestBrightness: 0x10F4, // int32
            m_flBrightnessTimeStart: 0x10F8, // GameTime_t
            m_nSpriteWidth: 0x1108, // int32
            m_nSpriteHeight: 0x110C, // int32
            m_flSpeed: 0x1110, // float32
        },
        C_CsmFovOverride: {
            m_cameraName: 0x600, // CUtlString
            m_flCsmFovOverrideValue: 0x608, // float32
        },
        C_WeaponGlock: {
        },
        C_PhysicsProp: {
            m_bAwake: 0x13E0, // bool
        },
        CFilterTeam: {
            m_iFilterTeam: 0x638, // int32
        },
        C_SmokeGrenade: {
        },
        C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel: {
        },
        CCSGO_RushIntroCharacterPosition: {
        },
        CCSPlayer_DamageReactServices: {
        },
        C_EntityFlame: {
            m_hEntAttached: 0x600, // CHandle<C_BaseEntity>
            m_hOldAttached: 0x628, // CHandle<C_BaseEntity>
            m_bCheapEffect: 0x62C, // bool
        },
        CBaseAnimGraphAlias_baseanimating: {
        },
        CBasePlayerController: {
            m_CommandContext: 0x608, // C_CommandContext
            m_nInButtonsWhichAreToggles: 0x6B0, // uint64
            m_nTickBase: 0x6B8, // uint32
            m_hPawn: 0x6BC, // CHandle<C_BasePlayerPawn>
            m_bKnownTeamMismatch: 0x6C0, // bool
            m_hPredictedPawn: 0x6C4, // CHandle<C_BasePlayerPawn>
            m_nSplitScreenSlot: 0x6CC, // CSplitScreenSlot
            m_hSplitOwner: 0x6D0, // CHandle<CBasePlayerController>
            m_hSplitScreenPlayers: 0x6D8, // CUtlVector<CHandle<CBasePlayerController>>
            m_bIsHLTV: 0x6F0, // bool
            m_iConnected: 0x6F4, // PlayerConnectedState
            m_iMostConnected: 0x6F8, // PlayerConnectedState
            m_iszPlayerName: 0x6FC, // char[128]
            m_steamID: 0x788, // uint64
            m_bIsLocalPlayerController: 0x790, // bool
            m_bNoClipEnabled: 0x791, // bool
            m_iDesiredFOV: 0x794, // uint32
        },
        C_CSGO_EndOfMatchLineupEndpoint: {
        },
        inv_image_light_barn_t: {
            color: 0x0, // Vector
            angle: 0xC, // QAngle
            brightness: 0x18, // float32
            orbit_distance: 0x1C, // float32
        },
        CInterpolatedValue: {
            m_flStartTime: 0x0, // float32
            m_flEndTime: 0x4, // float32
            m_flStartValue: 0x8, // float32
            m_flEndValue: 0xC, // float32
            m_nInterpType: 0x10, // int32
        },
        CFlashlightEffect: {
            m_bIsOn: 0x10, // bool
            m_bMuzzleFlashEnabled: 0x20, // bool
            m_flMuzzleFlashBrightness: 0x24, // float32
            m_quatMuzzleFlashOrientation: 0x30, // Quaternion
            m_vecMuzzleFlashOrigin: 0x40, // VectorWS
            m_flFov: 0x4C, // float32
            m_flFarZ: 0x50, // float32
            m_flLinearAtten: 0x54, // float32
            m_bCastsShadows: 0x58, // bool
            m_flCurrentPullBackDist: 0x5C, // float32
            m_FlashlightTexture: 0x60, // CStrongHandle<InfoForResourceTypeCTextureBase>
            m_MuzzleFlashTexture: 0x68, // CStrongHandle<InfoForResourceTypeCTextureBase>
            m_textureName: 0x70, // char[64]
        },
        CInventoryImageData: {
            m_nNodeType: 0x0, // InventoryNodeType_t
            name: 0x8, // CUtlString
            inventory_image_data: 0x10, // inv_image_data_t
        },
        CPlayerSprayDecalRenderHelper: {
        },
        C_IronSightController: {
            m_bIronSightAvailable: 0x10, // bool
            m_flIronSightAmount: 0x14, // float32
            m_flIronSightAmountGained: 0x18, // float32
            m_flIronSightAmountBiased: 0x1C, // float32
            m_flIronSightAmount_Interpolated: 0x20, // float32
            m_flIronSightAmountGained_Interpolated: 0x24, // float32
            m_flIronSightAmountBiased_Interpolated: 0x28, // float32
            m_flInterpolationLastUpdated: 0x2C, // float32
            m_angDeltaAverage: 0x30, // QAngle[8]
            m_angViewLast: 0x90, // QAngle
            m_vecDotCoords: 0x9C, // Vector2D
            m_flFiringInaccuracyExtraWidthMultiplier: 0xA4, // float32
            m_flSpeedRatio: 0xA8, // float32
        },
        CGlobalLightBase: {
            m_bSpotLight: 0x10, // bool
            m_SpotLightOrigin: 0x14, // VectorWS
            m_SpotLightAngles: 0x20, // QAngle
            m_ShadowDirection: 0x2C, // Vector
            m_AmbientDirection: 0x38, // Vector
            m_SpecularDirection: 0x44, // Vector
            m_InspectorSpecularDirection: 0x50, // Vector
            m_flSpecularPower: 0x5C, // float32
            m_flSpecularIndependence: 0x60, // float32
            m_SpecularColor: 0x64, // Color
            m_bStartDisabled: 0x68, // bool
            m_bEnabled: 0x69, // bool
            m_LightColor: 0x6C, // Color
            m_AmbientColor1: 0x70, // Color
            m_AmbientColor2: 0x74, // Color
            m_AmbientColor3: 0x78, // Color
            m_flSunDistance: 0x7C, // float32
            m_flFOV: 0x80, // float32
            m_flNearZ: 0x84, // float32
            m_flFarZ: 0x88, // float32
            m_bEnableShadows: 0x8C, // bool
            m_bOldEnableShadows: 0x8D, // bool
            m_bBackgroundClearNotRequired: 0x8E, // bool
            m_flCloudScale: 0x90, // float32
            m_flCloud1Speed: 0x94, // float32
            m_flCloud1Direction: 0x98, // float32
            m_flCloud2Speed: 0x9C, // float32
            m_flCloud2Direction: 0xA0, // float32
            m_flAmbientScale1: 0xB0, // float32
            m_flAmbientScale2: 0xB4, // float32
            m_flGroundScale: 0xB8, // float32
            m_flLightScale: 0xBC, // float32
            m_flFoWDarkness: 0xC0, // float32
            m_bEnableSeparateSkyboxFog: 0xC4, // bool
            m_vFowColor: 0xC8, // Vector
            m_ViewOrigin: 0xD4, // VectorWS
            m_ViewAngles: 0xE0, // QAngle
            m_flViewFoV: 0xEC, // float32
            m_WorldPoints: 0xF0, // VectorWS[8]
            m_vFogOffsetLayer0: 0x4A8, // Vector2D
            m_vFogOffsetLayer1: 0x4B0, // Vector2D
            m_hEnvWind: 0x4B8, // CHandle<C_BaseEntity>
            m_hEnvSky: 0x4BC, // CHandle<C_BaseEntity>
        },
    },
};
