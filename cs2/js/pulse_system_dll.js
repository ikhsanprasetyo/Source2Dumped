// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-10-23 09:27:00.180539200 +07:00

export const Schemas = {
    pulse_system_dll: {
        PulseBestOutflowRules_t: {
            SORT_BY_NUMBER_OF_VALID_CRITERIA: 0x0,
            SORT_BY_OUTFLOW_INDEX: 0x1,
        },
        PulseTestEnumFlags_t: {
            NONE: 0x0,
            FIRST: 0x1,
            SECOND: 0x2,
            THIRD: 0x4,
        },
        PulseTestEnumShape_t: {
            CIRCLE: 0x64,
            SQUARE: 0xC8,
            TRIANGLE: 0x12C,
        },
        PulseCursorCancelPriority_t: {
            None: 0x0,
            CancelOnSucceeded: 0x1,
            SoftCancel: 0x2,
            HardCancel: 0x3,
        },
        PulseTestEnumFlagsAlt_t: {
            NONE: 0x0,
            FIRST: 0x1,
        },
        PulseMethodCallMode_t: {
            SYNC_WAIT_FOR_COMPLETION: 0x0,
            ASYNC_FIRE_AND_FORGET: 0x1,
        },
        PulseTestEnumColor_t: {
            BLACK: 0x0,
            WHITE: 0x1,
            RED: 0x2,
            GREEN: 0x3,
            BLUE: 0x4,
        },
        PulseCursorWakePriority_t: {
            WakeElegantly: 0x0,
            WakeImmediate: 0x1,
        },
        CPulseGraphInstance_TestDomain_FakeEntityOwner: {
        },
        CPulse_ResumePoint: {
        },
        CTestDomainDerived_Cursor: {
            m_nCursorValueA: 0xD8, // int32
            m_nCursorValueB: 0xDC, // int32
        },
        CPulse_OutflowConnection: {
            m_SourceOutflowName: 0x0, // PulseSymbol_t
            m_nDestChunk: 0x10, // PulseRuntimeChunkIndex_t
            m_nInstruction: 0x14, // int32
            m_OutflowRegisterMap: 0x18, // PulseRegisterMap_t
        },
        CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView: {
        },
        CPulseCell_TestWaitWithCursorState__InstanceState_t: {
            m_nDummy: 0x0, // int32
        },
        CBasePulseGraphInstance: {
        },
        SignatureOutflow_Resume: {
        },
        CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t: {
            nTestStep: 0x0, // int32
        },
        CPulseTurtleGraphicsCursor: {
            m_Color: 0xD8, // Color
            m_vPos: 0xDC, // Vector2D
            m_flHeadingDeg: 0xE4, // float32
            m_bPenUp: 0xE8, // bool
        },
        CPulseCell_TestWaitWithCursorState__CursorState_t: {
            flWaitValue: 0x0, // float32
            bFail: 0x4, // bool
            m_hSelfCursor: 0x8, // HYieldedCursor
            m_hSelfCellInstanceUntyped: 0x14, // HPulseCellBase
            m_hSelfCellInstance: 0x1C, // HPulseCell<CPulseCell_TestWaitWithCursorState>
        },
        CPulseCell_Test_MultiInflow_NoDefault: {
        },
        CPulseCell_Test_MultiOutflow_WithParams_Yielding: {
            m_Out1: 0xD8, // SignatureOutflow_Continue
            m_AsyncChild1: 0x120, // SignatureOutflow_Continue
            m_AsyncChild2: 0x168, // SignatureOutflow_Continue
            m_YieldResume1: 0x1B0, // SignatureOutflow_Resume
            m_YieldResume2: 0x1F8, // SignatureOutflow_Resume
        },
        CPulseGraphInstance_TestDomain_Derived: {
            m_nInstanceValueX: 0xD0, // int32
        },
        CPulseGraphInstance_TestDomain: {
            m_bIsRunningUnitTests: 0xA0, // bool
            m_bExplicitTimeStepping: 0xA1, // bool
            m_bExpectingToDestroyWithYieldedCursors: 0xA2, // bool
            m_bQuietTracepoints: 0xA3, // bool
            m_bExpectingCursorTerminatedDueToMaxInstructions: 0xA4, // bool
            m_nCursorsTerminatedDueToMaxInstructions: 0xA8, // int32
            m_nNextValidateIndex: 0xAC, // int32
            m_Tracepoints: 0xB0, // CUtlVector<CUtlString>
            m_bTestYesOrNoPath: 0xC8, // bool
        },
        SignatureOutflow_Continue: {
        },
        CPulseCell_Outflow_TestExplicitYesNo: {
            m_Yes: 0x48, // CPulse_OutflowConnection
            m_No: 0x90, // CPulse_OutflowConnection
            m_Out1: 0xD8, // SignatureOutflow_Continue
            m_AsyncChild1: 0x120, // SignatureOutflow_Continue
        },
        CPulseCell_IsRequirementValid__Criteria_t: {
            m_bIsValid: 0x0, // bool
        },
        CPulseGraphInstance_TurtleGraphics: {
        },
        CPulseCell_TestWaitWithCursorState: {
            m_WakeResume: 0xD8, // CPulse_ResumePoint
            m_WakeFail: 0x120, // CPulse_ResumePoint
        },
        CPulseCell_Unknown: {
            m_UnknownKeys: 0x48, // KeyValues3
        },
        CPulseCell_ExampleCriteria__Criteria_t: {
            m_flFloatValue1: 0x0, // float32
            m_flFloatValue2: 0x4, // float32
            m_bMyBool: 0x8, // bool
        },
        CPulseCell_LimitCount__Criteria_t: {
            m_bLimitCountPasses: 0x0, // bool
        },
        CPulseExecCursor: {
        },
        TestComponent_t: {
            m_ComponentData: 0x8, // CUtlString
        },
    },
};
