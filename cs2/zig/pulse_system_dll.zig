// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-10-18 21:52:13.031739700 +07:00

pub const source2_dumper = struct {
    pub const schemas = struct {
        // Module: pulse_system.dll
        // Class count: 25
        // Enum count: 8
        pub const pulse_system_dll = struct {
            // Alignment: 4
            // Member count: 2
            pub const PulseBestOutflowRules_t = enum(u32) {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            };
            // Alignment: 4
            // Member count: 4
            pub const PulseTestEnumFlags_t = enum(u32) {
                NONE = 0x0,
                FIRST = 0x1,
                SECOND = 0x2,
                THIRD = 0x4
            };
            // Alignment: 4
            // Member count: 3
            pub const PulseTestEnumShape_t = enum(u32) {
                CIRCLE = 0x64,
                SQUARE = 0xC8,
                TRIANGLE = 0x12C
            };
            // Alignment: 4
            // Member count: 4
            pub const PulseCursorCancelPriority_t = enum(u32) {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            };
            // Alignment: 4
            // Member count: 2
            pub const PulseTestEnumFlagsAlt_t = enum(u32) {
                NONE = 0x0,
                FIRST = 0x1
            };
            // Alignment: 4
            // Member count: 2
            pub const PulseMethodCallMode_t = enum(u32) {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            };
            // Alignment: 4
            // Member count: 5
            pub const PulseTestEnumColor_t = enum(u32) {
                BLACK = 0x0,
                WHITE = 0x1,
                RED = 0x2,
                GREEN = 0x3,
                BLUE = 0x4
            };
            // Alignment: 4
            // Member count: 2
            pub const PulseCursorWakePriority_t = enum(u32) {
                WakeElegantly = 0x0,
                WakeImmediate = 0x1
            };
            // Parent: None
            // Field count: 0
            pub const CPulseGraphInstance_TestDomain_FakeEntityOwner = struct {
            };
            // Parent: None
            // Field count: 0
            pub const CPulse_ResumePoint = struct {
            };
            // Parent: None
            // Field count: 2
            pub const CTestDomainDerived_Cursor = struct {
                pub const m_nCursorValueA: usize = 0xD8; // int32
                pub const m_nCursorValueB: usize = 0xDC; // int32
            };
            // Parent: None
            // Field count: 4
            pub const CPulse_OutflowConnection = struct {
                pub const m_SourceOutflowName: usize = 0x0; // PulseSymbol_t
                pub const m_nDestChunk: usize = 0x10; // PulseRuntimeChunkIndex_t
                pub const m_nInstruction: usize = 0x14; // int32
                pub const m_OutflowRegisterMap: usize = 0x18; // PulseRegisterMap_t
            };
            // Parent: None
            // Field count: 0
            pub const CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyDescription
            pub const CPulseCell_TestWaitWithCursorState__InstanceState_t = struct {
                pub const m_nDummy: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 0
            pub const CBasePulseGraphInstance = struct {
            };
            // Parent: None
            // Field count: 0
            pub const SignatureOutflow_Resume = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t = struct {
                pub const nTestStep: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 4
            pub const CPulseTurtleGraphicsCursor = struct {
                pub const m_Color: usize = 0xD8; // Color
                pub const m_vPos: usize = 0xDC; // Vector2D
                pub const m_flHeadingDeg: usize = 0xE4; // float32
                pub const m_bPenUp: usize = 0xE8; // bool
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_TestWaitWithCursorState__CursorState_t = struct {
                pub const flWaitValue: usize = 0x0; // float32
                pub const bFail: usize = 0x4; // bool
                pub const m_hSelfCursor: usize = 0x8; // HYieldedCursor
                pub const m_hSelfCellInstanceUntyped: usize = 0x14; // HPulseCellBase
                pub const m_hSelfCellInstance: usize = 0x1C; // HPulseCell<CPulseCell_TestWaitWithCursorState>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // FIRST
            // WHITE
            // RED
            // GREEN
            // BLUE
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MPulseSignatureForOutflow
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
            // MPulseSignatureForOutflow
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
            pub const CPulseCell_Test_MultiInflow_NoDefault = struct {
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPulseSignatureForOutflow
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MPropertyDescription
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPulseSignatureForOutflow
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertyFriendlyName
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
            pub const CPulseCell_Test_MultiOutflow_WithParams_Yielding = struct {
                pub const m_Out1: usize = 0xD8; // SignatureOutflow_Continue
                pub const m_AsyncChild1: usize = 0x120; // SignatureOutflow_Continue
                pub const m_AsyncChild2: usize = 0x168; // SignatureOutflow_Continue
                pub const m_YieldResume1: usize = 0x1B0; // SignatureOutflow_Resume
                pub const m_YieldResume2: usize = 0x1F8; // SignatureOutflow_Resume
            };
            // Parent: None
            // Field count: 1
            pub const CPulseGraphInstance_TestDomain_Derived = struct {
                pub const m_nInstanceValueX: usize = 0xD0; // int32
            };
            // Parent: None
            // Field count: 9
            pub const CPulseGraphInstance_TestDomain = struct {
                pub const m_bIsRunningUnitTests: usize = 0xA0; // bool
                pub const m_bExplicitTimeStepping: usize = 0xA1; // bool
                pub const m_bExpectingToDestroyWithYieldedCursors: usize = 0xA2; // bool
                pub const m_bQuietTracepoints: usize = 0xA3; // bool
                pub const m_bExpectingCursorTerminatedDueToMaxInstructions: usize = 0xA4; // bool
                pub const m_nCursorsTerminatedDueToMaxInstructions: usize = 0xA8; // int32
                pub const m_nNextValidateIndex: usize = 0xAC; // int32
                pub const m_Tracepoints: usize = 0xB0; // CUtlVector<CUtlString>
                pub const m_bTestYesOrNoPath: usize = 0xC8; // bool
            };
            // Parent: None
            // Field count: 0
            pub const SignatureOutflow_Continue = struct {
            };
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
            // WHITE
            // RED
            // GREEN
            // BLUE
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MPulseSignatureForOutflow
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
            // MPulseSignatureForOutflow
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
            pub const CPulseCell_Outflow_TestExplicitYesNo = struct {
                pub const m_Yes: usize = 0x48; // CPulse_OutflowConnection
                pub const m_No: usize = 0x90; // CPulse_OutflowConnection
            };
            // Parent: None
            // Field count: 1
            pub const CPulseCell_IsRequirementValid__Criteria_t = struct {
                pub const m_bIsValid: usize = 0x0; // bool
            };
            // Parent: None
            // Field count: 0
            pub const CPulseGraphInstance_TurtleGraphics = struct {
            };
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
            // WHITE
            // RED
            // GREEN
            // BLUE
            // MPropertyFriendlyName
            // MPropertyFriendlyName
            // MGetKV3ClassDefaults
            // MPropertyDescription
            // MPulseSignatureForOutflow
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
            // MPulseSignatureForOutflow
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
            pub const CPulseCell_TestWaitWithCursorState = struct {
                pub const m_WakeResume: usize = 0xD8; // CPulse_ResumePoint
                pub const m_WakeFail: usize = 0x120; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 1
            pub const CPulseCell_Unknown = struct {
                pub const m_UnknownKeys: usize = 0x48; // KeyValues3
            };
            // Parent: None
            // Field count: 3
            pub const CPulseCell_ExampleCriteria__Criteria_t = struct {
                pub const m_flFloatValue1: usize = 0x0; // float32
                pub const m_flFloatValue2: usize = 0x4; // float32
                pub const m_bMyBool: usize = 0x8; // bool
            };
            // Parent: None
            // Field count: 1
            pub const CPulseCell_LimitCount__Criteria_t = struct {
                pub const m_bLimitCountPasses: usize = 0x0; // bool
            };
            // Parent: None
            // Field count: 0
            pub const CPulseExecCursor = struct {
            };
            // Parent: None
            // Field count: 1
            pub const TestComponent_t = struct {
                pub const m_ComponentData: usize = 0x8; // CUtlString
            };
        };
    };
};
