// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-08-06 08:15:19.987246100 +07:00

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod source2_dumper {
    pub mod schemas {
        // Module: pulse_system.dll
        // Class count: 104
        // Enum count: 8
        pub mod pulse_system_dll {
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
            pub enum PulseTestEnumFlags_t {
                NONE = 0x0,
                FIRST = 0x1,
                SECOND = 0x2,
                THIRD = 0x4
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum PulseTestEnumShape_t {
                CIRCLE = 0x64,
                SQUARE = 0xC8,
                TRIANGLE = 0x12C
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
            pub enum PulseTestEnumFlagsAlt_t {
                NONE = 0x0,
                FIRST = 0x1
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PulseMethodCallMode_t {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum PulseTestEnumColor_t {
                BLACK = 0x0,
                WHITE = 0x1,
                RED = 0x2,
                GREEN = 0x3,
                BLUE = 0x4
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PulseCursorWakePriority_t {
                WakeElegantly = 0x0,
                WakeImmediate = 0x1
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseSignatureForOutflow
            // MPulseSignatureForOutflow
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseExpressionAlias
            // MPulseLegacyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseLegacyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyLeafSuggestionProviderFn
            // MPulseExpressionAlias
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_TestDomainDestroyFakeEntity {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // VApplication001
            // VEngineCvar007
            // VStringTokenSystem001
            // TestScriptMgr001
            // VProcessUtils002
            // VFileSystem017
            // VAsyncFileSystem2_001
            // ResourceSystem013
            // ResourceManifestRegistry001
            // ResourceHandleUtils001
            // SchemaSystem_001
            // ResourceCompilerSystem001
            // VMaterialSystem2_001
            // PostProcessingSystem_001
            // InputSystemVersion001
            // InputStackSystemVersion001
            // RenderDeviceMgr001
            // RenderUtils_001
            // SoundSystem001
            // SoundOpSystemEdit001
            // SoundOpSystem001
            // SteamAudio001
            // VP4003
            // Localize_001
            // VMediaFoundation001
            // VAvi001
            // VWebm001
            // VBik001
            // MeshSystem001
            // MeshUtils001
            // RenderDevice003
            // VRenderDeviceSetupV001
            // RenderHardwareConfig002
            // SceneSystem_002
            // IPulseSystem_001
            // SceneUtils_001
            // WorldRendererMgr001
            // AssetSystem001
            // AssetSystemTest001
            // ParticleSystemMgr003
            // VScriptManager010
            // PropertyEditorSystem_001
            // MATCHFRAMEWORK_001
            // Source2V8System001
            pub mod CPulseCell_WaitForCursorsWithTag {
                pub const m_bTagSelfWhenComplete: usize = 0x128; // bool
                pub const m_nDesiredKillPriority: usize = 0x12C; // PulseCursorCancelPriority_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseSignatureForOutflow
            // MPulseSignatureForOutflow
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseExpressionAlias
            // MPulseLegacyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseLegacyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyLeafSuggestionProviderFn
            // MPulseExpressionAlias
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Test_NoInflow {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseGraphInstance_TestDomain_FakeEntityOwner {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Base {
                pub const m_nEditorNodeID: usize = 0x8; // PulseDocNodeID_t
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_ResumePoint {
            }
            // Parent: None
            // Field count: 2
            pub mod CTestDomainDerived_Cursor {
                pub const m_nCursorValueA: usize = 0xD8; // int32
                pub const m_nCursorValueB: usize = 0xDC; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod CPulseCell_PickBestOutflowSelector {
                pub const m_nCheckType: usize = 0x48; // PulseBestOutflowRules_t
                pub const m_OutflowList: usize = 0x50; // PulseSelectorOutflowList_t
                pub const m_Connection: usize = 0x0; // CPulse_OutflowConnection
                pub const m_DestinationFlowNodeID: usize = 0x48; // PulseDocNodeID_t
                pub const m_RequirementNodeIDs: usize = 0x50; // CUtlVector<PulseDocNodeID_t>
                pub const m_nCursorStateBlockIndex: usize = 0x68; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            // MPulseExpressionAlias
            // MPulseLegacyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseLegacyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyLeafSuggestionProviderFn
            // MPulseExpressionAlias
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MGetKV3ClassDefaults
            pub mod CPulseTestFuncs_LibraryA {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyFriendlyName
            // MPropertyDescription
            // CURSOR_ADD_TAG
            // CURSOR_REMOVE_TAG
            // CURSOR_RETIRED
            // REQUIREMENT_PASS
            // REQUIREMENT_FAIL
            pub mod CPulseCell_WaitForObservable {
                pub const m_Condition: usize = 0xD8; // CPulseObservableExpression<bool>
                pub const m_OnTrue: usize = 0x150; // CPulse_ResumePoint
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
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseGraphDef {
                pub const m_DomainIdentifier: usize = 0x8; // PulseSymbol_t
                pub const m_DomainSubType: usize = 0x18; // CPulseValueFullType
                pub const m_ParentMapName: usize = 0x30; // PulseSymbol_t
                pub const m_ParentXmlName: usize = 0x40; // PulseSymbol_t
                pub const m_Chunks: usize = 0x50; // CUtlVector<CPulse_Chunk*>
                pub const m_Cells: usize = 0x68; // CUtlVector<CPulseCell_Base*>
                pub const m_Vars: usize = 0x80; // CUtlVector<CPulse_Variable>
                pub const m_PublicOutputs: usize = 0x98; // CUtlVector<CPulse_PublicOutput>
                pub const m_InvokeBindings: usize = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
                pub const m_CallInfos: usize = 0xC8; // CUtlVector<CPulse_CallInfo*>
                pub const m_Constants: usize = 0xE0; // CUtlVector<CPulse_Constant>
                pub const m_DomainValues: usize = 0xF8; // CUtlVector<CPulse_DomainValue>
                pub const m_BlackboardReferences: usize = 0x110; // CUtlVector<CPulse_BlackboardReference>
                pub const m_OutputConnections: usize = 0x128; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MGetKV3ClassDefaults
            pub mod CPulseCell_TestYieldForever {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyDescription
            pub mod CPulseCell_TestWaitWithCursorState__InstanceState_t {
                pub const m_nDummy: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPulseEditorCanvasItemSpecKV3
            pub mod CPulseCell_FireCursors {
                pub const m_Outflows: usize = 0xD8; // CUtlVector<CPulse_OutflowConnection>
                pub const m_bWaitForChildOutflows: usize = 0xF0; // bool
                pub const m_OnFinished: usize = 0xF8; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Timeline__TimelineEvent_t {
                pub const m_flTimeFromPrevious: usize = 0x0; // float32
                pub const m_EventOutflow: usize = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_IntervalTimer__CursorState_t {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
                pub const m_flWaitInterval: usize = 0x8; // float32
                pub const m_flWaitIntervalHigh: usize = 0xC; // float32
                pub const m_bCompleteOnNextWake: usize = 0x10; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseRequirement {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // ogram Files\Go\bin;C:\Program Files\LLVM\bin;C:\cloudflared;G:\Android\Sdk;C:\Users\ByteseekerPC\.local\bin;C:\Program Files\Clo
            // bDesktop\bin;C:\Users\ByteseekerPC\AppData\Local\Programs\Microsoft VS Code\bin;C:\vcpkg;C:\Users\ByteseekerPC\AppData\Roaming\n
            pub mod CPulseCell_BaseState {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod OutflowWithRequirements_t {
                pub const m_Connection: usize = 0x0; // CPulse_OutflowConnection
                pub const m_DestinationFlowNodeID: usize = 0x48; // PulseDocNodeID_t
                pub const m_RequirementNodeIDs: usize = 0x50; // CUtlVector<PulseDocNodeID_t>
                pub const m_nCursorStateBlockIndex: usize = 0x68; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod CPulseCell_IsRequirementValid {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPulseEditorCanvasItemSpecKV3
            pub mod CPulseCell_Value_Gradient {
                pub const m_Gradient: usize = 0x48; // CColorGradient
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyLeafSuggestionProviderFn
            // MPulseExpressionAlias
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MGetKV3ClassDefaults
            pub mod CPulseCell_TestWaitWithAutoTracepoints {
                pub const m_TracePrefix: usize = 0xD8; // CUtlString
                pub const m_WakeResume: usize = 0xE0; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // VApplication001
            // VEngineCvar007
            // VStringTokenSystem001
            // TestScriptMgr001
            // VProcessUtils002
            // VFileSystem017
            // VAsyncFileSystem2_001
            // ResourceSystem013
            // ResourceManifestRegistry001
            // ResourceHandleUtils001
            // SchemaSystem_001
            // ResourceCompilerSystem001
            // VMaterialSystem2_001
            // PostProcessingSystem_001
            // InputSystemVersion001
            // InputStackSystemVersion001
            // RenderDeviceMgr001
            // RenderUtils_001
            // SoundSystem001
            // SoundOpSystemEdit001
            // SoundOpSystem001
            // SteamAudio001
            // VP4003
            // Localize_001
            // VMediaFoundation001
            // VAvi001
            // VWebm001
            // VBik001
            // MeshSystem001
            // MeshUtils001
            // RenderDevice003
            // VRenderDeviceSetupV001
            // RenderHardwareConfig002
            // SceneSystem_002
            // IPulseSystem_001
            // SceneUtils_001
            // WorldRendererMgr001
            // AssetSystem001
            // AssetSystemTest001
            // ParticleSystemMgr003
            // VScriptManager010
            // PropertyEditorSystem_001
            // MATCHFRAMEWORK_001
            // Source2V8System001
            // PanoramaUIEngine001
            // PanoramaUIClient001
            // PanoramaTextServices001
            // ToolFramework2_002
            // PhysicsBuilderMgr001
            // VisBuilder_001
            // BakedLODBuilderMgr001
            // HelpSystem_001
            // ToolSceneNodeFactory_001
            // EconItemToolModel_001
            // SchemaTestExternal_Two_001
            // SchemaTestExternal_One_001
            // AnimationSystem_001
            // AnimationSystemUtils_001
            // HammerMapLoader001
            // MaterialUtils_001
            // FontManager_001
            // TextLayout_001
            // AssetPreviewSystem_001
            // AssetBrowserSystem_001
            // AssetRenameSystem_001
            // VConComm001
            // MODEL_PROCESSING_SERVICES_INTERFACE_001
            // NetworkSystemVersion001
            // NetworkMessagesVersion001
            // FlattenedSerializersVersion001
            // SerializedEntitiesVersion001
            // DemoUpconverterVersion001
            // Source2Client002
            // Source2ClientUI001
            // Source2ClientPrediction001
            // Source2Server001
            // Source2Host001
            // Source2ModTools001
            // Source2GameClients001
            pub mod CPulseCursorFuncs {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseNodeDynamicOutflows_t__DynamicOutflow_t {
                pub const m_OutflowID: usize = 0x0; // CGlobalSymbol
                pub const m_Connection: usize = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // FIRST
            // SECOND
            // THIRD
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPulseEditorHeaderText
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // CIRCLE
            // SQUARE
            // TRIANGLE
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            // MPropertyAttributeSuggestionName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CPulseCell_Test_MultiOutflow_WithParams {
                pub const m_Out1: usize = 0x48; // SignatureOutflow_Continue
                pub const m_Out2: usize = 0x90; // SignatureOutflow_Continue
            }
            // Parent: None
            // Field count: 0
            pub mod CBasePulseGraphInstance {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // p
            // MGetKV3ClassDefaults
            // MCustomFGDMetadata
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_GraphHook {
                pub const m_HookName: usize = 0x80; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            pub mod SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
                pub const nTestStep: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 4
            pub mod CPulseTurtleGraphicsCursor {
                pub const m_Color: usize = 0xD8; // Color
                pub const m_vPos: usize = 0xDC; // Vector2D
                pub const m_flHeadingDeg: usize = 0xE4; // float32
                pub const m_bPenUp: usize = 0xE8; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_TestWaitWithCursorState__CursorState_t {
                pub const flWaitValue: usize = 0x0; // float32
                pub const bFail: usize = 0x4; // bool
                pub const m_hSelfCursor: usize = 0x8; // HYieldedCursor
                pub const m_hSelfCellInstanceUntyped: usize = 0x14; // HPulseCellBase
                pub const m_hSelfCellInstance: usize = 0x1C; // HPulseCell<CPulseCell_TestWaitWithCursorState>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_BaseEntrypoint {
                pub const m_EntryChunk: usize = 0x48; // PulseRuntimeChunkIndex_t
                pub const m_RegisterMap: usize = 0x50; // PulseRegisterMap_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // FIRST
            // MPulseSignatureForOutflow
            // WHITE
            // RED
            // GREEN
            // BLUE
            // MPropertyFriendlyName
            // MPulseSignatureForOutflow
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // FIRST
            // SECOND
            // THIRD
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPulseEditorHeaderText
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // CIRCLE
            // SQUARE
            // TRIANGLE
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            pub mod CPulseCell_Test_MultiInflow_NoDefault {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            pub mod CPulseCell_WaitForCursorsWithTagBase {
                pub const m_nCursorsAllowedToWait: usize = 0xD8; // int32
                pub const m_WaitComplete: usize = 0xE0; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_InvokeBinding {
                pub const m_RegisterMap: usize = 0x0; // PulseRegisterMap_t
                pub const m_FuncName: usize = 0x30; // PulseSymbol_t
                pub const m_nCellIndex: usize = 0x40; // PulseRuntimeCellIndex_t
                pub const m_nSrcChunk: usize = 0x44; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x48; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // V
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            pub mod CPulseCell_IntervalTimer {
                pub const m_Completed: usize = 0xD8; // CPulse_ResumePoint
                pub const m_OnInterval: usize = 0x120; // SignatureOutflow_Continue
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyDescription
            // MPulseSignatureForOutflow
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // V
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            pub mod CPulseTestScriptLib {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseLerp {
                pub const m_WakeResume: usize = 0xD8; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseSignatureForOutflow
            // MPulseSignatureForOutflow
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseExpressionAlias
            // MPulseLegacyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseLegacyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyLeafSuggestionProviderFn
            // MPulseExpressionAlias
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Value_TestValue50 {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MPulseSignatureForOutflow
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyFriendlyName
            // MPulseSignatureForOutflow
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseSignatureForOutflow
            // MPulseSignatureForOutflow
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseExpressionAlias
            // MPulseLegacyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseLegacyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyLeafSuggestionProviderFn
            // MPulseExpressionAlias
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Test_MultiOutflow_WithParams_Yielding {
                pub const m_Out1: usize = 0xD8; // SignatureOutflow_Continue
                pub const m_AsyncChild1: usize = 0x120; // SignatureOutflow_Continue
                pub const m_AsyncChild2: usize = 0x168; // SignatureOutflow_Continue
                pub const m_YieldResume1: usize = 0x1B0; // SignatureOutflow_Resume
                pub const m_YieldResume2: usize = 0x1F8; // SignatureOutflow_Resume
            }
            // Parent: None
            // Field count: 0
            pub mod TestComponent_tAPI {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyDescription
            // MPulseSignatureForOutflow
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // V
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            pub mod CPulseCell_Value_Curve {
                pub const m_Curve: usize = 0x48; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // p
            // MGetKV3ClassDefaults
            // MCustomFGDMetadata
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_EventHandler {
                pub const m_EventName: usize = 0x80; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseFlow {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // FIRST
            // SECOND
            // THIRD
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPulseEditorHeaderText
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // CIRCLE
            // SQUARE
            // TRIANGLE
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            // MPropertyAttributeSuggestionName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CPulseCell_Step_TestDomainTracepoint {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                pub const m_Shuffle: usize = 0x0; // CUtlVectorFixedGrowable<uint8,8>
                pub const m_nNextShuffle: usize = 0x20; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseLerp__CursorState_t {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseGraphInstance_TestDomain_Derived {
                pub const m_nInstanceValueX: usize = 0x158; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            // MPropertyDescription
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyDescription
            // MPulseSignatureForOutflow
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            pub mod CPulseArraylib {
            }
            // Parent: None
            // Field count: 9
            pub mod CPulseGraphInstance_TestDomain {
                pub const m_bIsRunningUnitTests: usize = 0x128; // bool
                pub const m_bExplicitTimeStepping: usize = 0x129; // bool
                pub const m_bExpectingToDestroyWithYieldedCursors: usize = 0x12A; // bool
                pub const m_bQuietTracepoints: usize = 0x12B; // bool
                pub const m_bExpectingCursorTerminatedDueToMaxInstructions: usize = 0x12C; // bool
                pub const m_nCursorsTerminatedDueToMaxInstructions: usize = 0x130; // int32
                pub const m_nNextValidateIndex: usize = 0x134; // int32
                pub const m_Tracepoints: usize = 0x138; // CUtlVector<CUtlString>
                pub const m_bTestYesOrNoPath: usize = 0x150; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod SignatureOutflow_Continue {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            pub mod CPulseCell_Timeline {
                pub const m_TimelineEvents: usize = 0xD8; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                pub const m_bWaitForChildOutflows: usize = 0xF0; // bool
                pub const m_OnFinished: usize = 0xF8; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // p
            // MGetKV3ClassDefaults
            // MCustomFGDMetadata
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_EntOutputHandler {
                pub const m_SourceEntity: usize = 0x80; // PulseSymbol_t
                pub const m_SourceOutput: usize = 0x90; // PulseSymbol_t
                pub const m_ExpectedParamType: usize = 0xA0; // CPulseValueFullType
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyDescription
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // FIRST
            // MPulseSignatureForOutflow
            // WHITE
            // RED
            // GREEN
            // BLUE
            // MPropertyFriendlyName
            // MPulseSignatureForOutflow
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // FIRST
            // SECOND
            // THIRD
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPulseEditorHeaderText
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // CIRCLE
            // SQUARE
            // TRIANGLE
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            pub mod CPulseCell_Outflow_TestExplicitYesNo {
                pub const m_Yes: usize = 0x48; // CPulse_OutflowConnection
                pub const m_No: usize = 0x90; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            // MPropertyAttributeSuggestionName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CPulseCell_Outflow_TestRandomYesNo {
                pub const m_Yes: usize = 0x48; // CPulse_OutflowConnection
                pub const m_No: usize = 0x90; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                pub const m_nNextIndex: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod CPulseCell_LimitCount__InstanceState_t {
                pub const m_nCurrentCount: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            pub mod FakeEntity_tAPI {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            // MPropertyAttributeSuggestionName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CPulseCell_Test_MultiInflow_WithDefault {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // p
            // MGetKV3ClassDefaults
            // MCustomFGDMetadata
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_DebugLog {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MCustomFGDMetadata
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseYieldingInflow {
                pub const m_BaseFlow_OnAfterCancel: usize = 0x48; // CPulse_ResumePoint
                pub const m_BaseFlow_WhileActive: usize = 0x90; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod PulseNodeDynamicOutflows_t {
                pub const m_Outflows: usize = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_IsRequirementValid__Criteria_t {
                pub const m_bIsValid: usize = 0x0; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_ObservableVariableListener {
                pub const m_nBlackboardReference: usize = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
                pub const m_bSelfReference: usize = 0x82; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // p
            // MGetKV3ClassDefaults
            // MCustomFGDMetadata
            pub mod CPulseCell_Outflow_CycleOrdered {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseSelectorOutflowList_t {
                pub const m_Outflows: usize = 0x0; // CUtlVector<OutflowWithRequirements_t>
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseGraphInstance_TurtleGraphics {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseExpressionAlias
            // MPulseLegacyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseLegacyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyLeafSuggestionProviderFn
            // MPulseExpressionAlias
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Val_TestDomainGetEntityName {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            pub mod CPulseCell_Inflow_Wait {
                pub const m_WakeResume: usize = 0xD8; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyDescription
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // FIRST
            // MPulseSignatureForOutflow
            // WHITE
            // RED
            // GREEN
            // BLUE
            // MPropertyFriendlyName
            // MPulseSignatureForOutflow
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // FIRST
            // SECOND
            // THIRD
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPulseEditorHeaderText
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // CIRCLE
            // SQUARE
            // TRIANGLE
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            pub mod CPulseCell_TestWaitWithCursorState {
                pub const m_WakeResume: usize = 0xD8; // CPulse_ResumePoint
                pub const m_WakeFail: usize = 0x120; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // p
            // MGetKV3ClassDefaults
            // MCustomFGDMetadata
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleShuffled {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_Method {
                pub const m_MethodName: usize = 0x80; // PulseSymbol_t
                pub const m_Description: usize = 0x90; // CUtlString
                pub const m_bIsPublic: usize = 0x98; // bool
                pub const m_ReturnType: usize = 0xA0; // CPulseValueFullType
                pub const m_Args: usize = 0xB8; // CUtlLeanVector<CPulseRuntimeMethodArg>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseValue {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyFriendlyName
            // MPropertyDescription
            // CURSOR_ADD_TAG
            // CURSOR_REMOVE_TAG
            // CURSOR_RETIRED
            // REQUIREMENT_PASS
            // REQUIREMENT_FAIL
            pub mod CPulseCell_BooleanSwitchState {
                pub const m_Condition: usize = 0xD8; // CPulseObservableExpression<bool>
                pub const m_WhenTrue: usize = 0x150; // CPulse_OutflowConnection
                pub const m_WhenFalse: usize = 0x198; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 0
            pub mod FakeEntityDerivedB_tAPI {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // SORT_BY_OUTFLOW_INDEX
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_Yield {
                pub const m_UnyieldResume: usize = 0xD8; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub mod CPulseMathlib {
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_Unknown {
                pub const m_UnknownKeys: usize = 0x48; // KeyValues3
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            // MPulseLegacyName
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            // MPulseExpressionAlias
            pub mod CPulseStringlib {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // p
            // MGetKV3ClassDefaults
            // MCustomFGDMetadata
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleRandom {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_PublicOutput {
                pub const m_OutputIndex: usize = 0x48; // PulseRuntimeOutputIndex_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseExpressionAlias
            // MPulseLegacyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseLegacyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyLeafSuggestionProviderFn
            // MPulseExpressionAlias
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Val_TestDomainFindEntityByName {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod CPulse_BlackboardReference {
                pub const m_hBlackboardResource: usize = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
                pub const m_BlackboardResource: usize = 0x8; // PulseSymbol_t
                pub const m_nNodeID: usize = 0x18; // PulseDocNodeID_t
                pub const m_NodeName: usize = 0x20; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Value_RandomInt {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CPulseCell_TestEnums {
                pub const m_nReferenceColor: usize = 0x48; // PulseTestEnumColor_t
                pub const m_nReferenceFlags: usize = 0x4C; // PulseTestEnumFlags_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPulseEditorHeaderText
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // CIRCLE
            // SQUARE
            // TRIANGLE
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            // MPropertyAttributeSuggestionName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CPulseCell_Step_TestDomainEntFire {
                pub const m_Input: usize = 0x48; // CUtlString
                pub const flWaitValue: usize = 0x0; // float32
                pub const bFail: usize = 0x4; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyDescription
            // MPulseSignatureForOutflow
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            pub mod CPulseEnumlib {
            }
            // Parent: None
            // Field count: 0
            pub mod FakeEntityDerivedA_tAPI {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            // MPropertyAttributeSuggestionName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CPulseCell_ExampleSelector {
                pub const m_OutflowList: usize = 0x48; // PulseSelectorOutflowList_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod CPulse_CallInfo {
                pub const m_PortName: usize = 0x0; // PulseSymbol_t
                pub const m_nEditorNodeID: usize = 0x10; // PulseDocNodeID_t
                pub const m_RegisterMap: usize = 0x18; // PulseRegisterMap_t
                pub const m_CallMethodID: usize = 0x48; // PulseDocNodeID_t
                pub const m_nSrcChunk: usize = 0x4C; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x50; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod CPulseCell_InlineNodeSkipSelector {
                pub const m_nFlowNodeID: usize = 0x48; // PulseDocNodeID_t
                pub const m_bAnd: usize = 0x4C; // bool
                pub const m_PassOutflow: usize = 0x50; // PulseSelectorOutflowList_t
                pub const m_FailOutflow: usize = 0x68; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 3
            pub mod CPulseCell_ExampleCriteria__Criteria_t {
                pub const m_flFloatValue1: usize = 0x0; // float32
                pub const m_flFloatValue2: usize = 0x4; // float32
                pub const m_bMyBool: usize = 0x8; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseLegacyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyLeafSuggestionProviderFn
            // MPulseExpressionAlias
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MGetKV3ClassDefaults
            pub mod CPulseCell_ExampleCriteria {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod CPulseCell_LimitCount {
                pub const m_nLimitCount: usize = 0x48; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // p
            // MGetKV3ClassDefaults
            // MCustomFGDMetadata
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_CallExternalMethod {
                pub const m_MethodName: usize = 0xD8; // PulseSymbol_t
                pub const m_nBlackboardIndex: usize = 0xE8; // PulseRuntimeBlackboardReferenceIndex_t
                pub const m_ExpectedArgs: usize = 0xF0; // CUtlLeanVector<CPulseRuntimeMethodArg>
                pub const m_nAsyncCallMode: usize = 0x100; // PulseMethodCallMode_t
                pub const m_OnFinished: usize = 0x108; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_LimitCount__Criteria_t {
                pub const m_bLimitCountPasses: usize = 0x0; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            // MPropertyAttributeSuggestionName
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CPulseCell_Step_TestDomainCreateFakeEntity {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_TestYieldWithObservables {
                pub const m_flWatchForFloatValue: usize = 0xD8; // float32
                pub const m_LiveFloatValue: usize = 0xE0; // CPulseObservableExpression<float32>
                pub const m_WatchForStringValue: usize = 0x158; // CUtlString
                pub const m_LiveStringValue: usize = 0x160; // CPulseObservableExpression<CUtlString>
                pub const m_WakeResume: usize = 0x1D8; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPropertyDescription
            // MPropertyDescription
            // VApplication001
            // VEngineCvar007
            // VStringTokenSystem001
            // TestScriptMgr001
            // VProcessUtils002
            // VFileSystem017
            // VAsyncFileSystem2_001
            // ResourceSystem013
            // ResourceManifestRegistry001
            // ResourceHandleUtils001
            // SchemaSystem_001
            // ResourceCompilerSystem001
            // VMaterialSystem2_001
            // PostProcessingSystem_001
            // InputSystemVersion001
            // InputStackSystemVersion001
            // RenderDeviceMgr001
            // RenderUtils_001
            // SoundSystem001
            // SoundOpSystemEdit001
            // SoundOpSystem001
            // SteamAudio001
            // VP4003
            // Localize_001
            // VMediaFoundation001
            // VAvi001
            // VWebm001
            // VBik001
            // MeshSystem001
            // MeshUtils001
            // RenderDevice003
            // VRenderDeviceSetupV001
            // RenderHardwareConfig002
            // SceneSystem_002
            // IPulseSystem_001
            // SceneUtils_001
            // WorldRendererMgr001
            // AssetSystem001
            // AssetSystemTest001
            // ParticleSystemMgr003
            // VScriptManager010
            // PropertyEditorSystem_001
            // MATCHFRAMEWORK_001
            // Source2V8System001
            // PanoramaUIEngine001
            // PanoramaUIClient001
            // PanoramaTextServices001
            // ToolFramework2_002
            // PhysicsBuilderMgr001
            // VisBuilder_001
            // BakedLODBuilderMgr001
            // HelpSystem_001
            // ToolSceneNodeFactory_001
            // EconItemToolModel_001
            // SchemaTestExternal_Two_001
            // SchemaTestExternal_One_001
            // AnimationSystem_001
            // AnimationSystemUtils_001
            // HammerMapLoader001
            // MaterialUtils_001
            // FontManager_001
            // TextLayout_001
            // AssetPreviewSystem_001
            // AssetBrowserSystem_001
            // AssetRenameSystem_001
            // VConComm001
            // MODEL_PROCESSING_SERVICES_INTERFACE_001
            // NetworkSystemVersion001
            // NetworkMessagesVersion001
            // FlattenedSerializersVersion001
            // SerializedEntitiesVersion001
            // DemoUpconverterVersion001
            // Source2Client002
            // Source2ClientUI001
            // Source2ClientPrediction001
            // Source2Server001
            // Source2Host001
            // Source2ModTools001
            // Source2GameClients001
            pub mod CPulseCell_CursorQueue {
                pub const m_nCursorsAllowedToRunParallel: usize = 0x128; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MGetKV3ClassDefaults
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MPulseLegacyName
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Value_RandomFloat {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseExecCursor {
            }
            // Parent: None
            // Field count: 1
            pub mod TestComponent_t {
                pub const m_ComponentData: usize = 0x8; // CUtlString
            }
        }
    }
}
