// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-10-18 21:52:13.031739700 +07:00

namespace Source2Dumper.Schemas {
    // Module: pulse_system.dll
    // Class count: 25
    // Enum count: 8
    public static class PulseSystemDll {
        // Alignment: 4
        // Member count: 2
        public enum PulseBestOutflowRules_t : uint {
            SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
            SORT_BY_OUTFLOW_INDEX = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum PulseTestEnumFlags_t : uint {
            NONE = 0x0,
            FIRST = 0x1,
            SECOND = 0x2,
            THIRD = 0x4
        }
        // Alignment: 4
        // Member count: 3
        public enum PulseTestEnumShape_t : uint {
            CIRCLE = 0x64,
            SQUARE = 0xC8,
            TRIANGLE = 0x12C
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
        public enum PulseTestEnumFlagsAlt_t : uint {
            NONE = 0x0,
            FIRST = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum PulseMethodCallMode_t : uint {
            SYNC_WAIT_FOR_COMPLETION = 0x0,
            ASYNC_FIRE_AND_FORGET = 0x1
        }
        // Alignment: 4
        // Member count: 5
        public enum PulseTestEnumColor_t : uint {
            BLACK = 0x0,
            WHITE = 0x1,
            RED = 0x2,
            GREEN = 0x3,
            BLUE = 0x4
        }
        // Alignment: 4
        // Member count: 2
        public enum PulseCursorWakePriority_t : uint {
            WakeElegantly = 0x0,
            WakeImmediate = 0x1
        }
        // Parent: None
        // Field count: 0
        public static class CPulseGraphInstance_TestDomain_FakeEntityOwner {
        }
        // Parent: None
        // Field count: 0
        public static class CPulse_ResumePoint {
        }
        // Parent: None
        // Field count: 2
        public static class CTestDomainDerived_Cursor {
            public const nint m_nCursorValueA = 0xD8; // int32
            public const nint m_nCursorValueB = 0xDC; // int32
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
        public static class CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyDescription
        public static class CPulseCell_TestWaitWithCursorState__InstanceState_t {
            public const nint m_nDummy = 0x0; // int32
        }
        // Parent: None
        // Field count: 0
        public static class CBasePulseGraphInstance {
        }
        // Parent: None
        // Field count: 0
        public static class SignatureOutflow_Resume {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
            public const nint nTestStep = 0x0; // int32
        }
        // Parent: None
        // Field count: 4
        public static class CPulseTurtleGraphicsCursor {
            public const nint m_Color = 0xD8; // Color
            public const nint m_vPos = 0xDC; // Vector2D
            public const nint m_flHeadingDeg = 0xE4; // float32
            public const nint m_bPenUp = 0xE8; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_TestWaitWithCursorState__CursorState_t {
            public const nint flWaitValue = 0x0; // float32
            public const nint bFail = 0x4; // bool
            public const nint m_hSelfCursor = 0x8; // HYieldedCursor
            public const nint m_hSelfCellInstanceUntyped = 0x14; // HPulseCellBase
            public const nint m_hSelfCellInstance = 0x1C; // HPulseCell<CPulseCell_TestWaitWithCursorState>
        }
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
        public static class CPulseCell_Test_MultiInflow_NoDefault {
        }
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
        public static class CPulseCell_Test_MultiOutflow_WithParams_Yielding {
            public const nint m_Out1 = 0xD8; // SignatureOutflow_Continue
            public const nint m_AsyncChild1 = 0x120; // SignatureOutflow_Continue
            public const nint m_AsyncChild2 = 0x168; // SignatureOutflow_Continue
            public const nint m_YieldResume1 = 0x1B0; // SignatureOutflow_Resume
            public const nint m_YieldResume2 = 0x1F8; // SignatureOutflow_Resume
        }
        // Parent: None
        // Field count: 1
        public static class CPulseGraphInstance_TestDomain_Derived {
            public const nint m_nInstanceValueX = 0xD0; // int32
        }
        // Parent: None
        // Field count: 9
        public static class CPulseGraphInstance_TestDomain {
            public const nint m_bIsRunningUnitTests = 0xA0; // bool
            public const nint m_bExplicitTimeStepping = 0xA1; // bool
            public const nint m_bExpectingToDestroyWithYieldedCursors = 0xA2; // bool
            public const nint m_bQuietTracepoints = 0xA3; // bool
            public const nint m_bExpectingCursorTerminatedDueToMaxInstructions = 0xA4; // bool
            public const nint m_nCursorsTerminatedDueToMaxInstructions = 0xA8; // int32
            public const nint m_nNextValidateIndex = 0xAC; // int32
            public const nint m_Tracepoints = 0xB0; // CUtlVector<CUtlString>
            public const nint m_bTestYesOrNoPath = 0xC8; // bool
        }
        // Parent: None
        // Field count: 0
        public static class SignatureOutflow_Continue {
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
        public static class CPulseCell_Outflow_TestExplicitYesNo {
            public const nint m_Yes = 0x48; // CPulse_OutflowConnection
            public const nint m_No = 0x90; // CPulse_OutflowConnection
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_IsRequirementValid__Criteria_t {
            public const nint m_bIsValid = 0x0; // bool
        }
        // Parent: None
        // Field count: 0
        public static class CPulseGraphInstance_TurtleGraphics {
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
        public static class CPulseCell_TestWaitWithCursorState {
            public const nint m_WakeResume = 0xD8; // CPulse_ResumePoint
            public const nint m_WakeFail = 0x120; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_Unknown {
            public const nint m_UnknownKeys = 0x48; // KeyValues3
        }
        // Parent: None
        // Field count: 3
        public static class CPulseCell_ExampleCriteria__Criteria_t {
            public const nint m_flFloatValue1 = 0x0; // float32
            public const nint m_flFloatValue2 = 0x4; // float32
            public const nint m_bMyBool = 0x8; // bool
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_LimitCount__Criteria_t {
            public const nint m_bLimitCountPasses = 0x0; // bool
        }
        // Parent: None
        // Field count: 0
        public static class CPulseExecCursor {
        }
        // Parent: None
        // Field count: 1
        public static class TestComponent_t {
            public const nint m_ComponentData = 0x8; // CUtlString
        }
    }
}
