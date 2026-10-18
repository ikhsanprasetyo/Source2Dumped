// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-10-18 21:52:13.031739700 +07:00

package schemas

const (
    PulseSystemDll_PulseBestOutflowRules_t_SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0
    PulseSystemDll_PulseBestOutflowRules_t_SORT_BY_OUTFLOW_INDEX = 0x1
    PulseSystemDll_PulseTestEnumFlags_t_NONE = 0x0
    PulseSystemDll_PulseTestEnumFlags_t_FIRST = 0x1
    PulseSystemDll_PulseTestEnumFlags_t_SECOND = 0x2
    PulseSystemDll_PulseTestEnumFlags_t_THIRD = 0x4
    PulseSystemDll_PulseTestEnumShape_t_CIRCLE = 0x64
    PulseSystemDll_PulseTestEnumShape_t_SQUARE = 0xC8
    PulseSystemDll_PulseTestEnumShape_t_TRIANGLE = 0x12C
    PulseSystemDll_PulseCursorCancelPriority_t_None = 0x0
    PulseSystemDll_PulseCursorCancelPriority_t_CancelOnSucceeded = 0x1
    PulseSystemDll_PulseCursorCancelPriority_t_SoftCancel = 0x2
    PulseSystemDll_PulseCursorCancelPriority_t_HardCancel = 0x3
    PulseSystemDll_PulseTestEnumFlagsAlt_t_NONE = 0x0
    PulseSystemDll_PulseTestEnumFlagsAlt_t_FIRST = 0x1
    PulseSystemDll_PulseMethodCallMode_t_SYNC_WAIT_FOR_COMPLETION = 0x0
    PulseSystemDll_PulseMethodCallMode_t_ASYNC_FIRE_AND_FORGET = 0x1
    PulseSystemDll_PulseTestEnumColor_t_BLACK = 0x0
    PulseSystemDll_PulseTestEnumColor_t_WHITE = 0x1
    PulseSystemDll_PulseTestEnumColor_t_RED = 0x2
    PulseSystemDll_PulseTestEnumColor_t_GREEN = 0x3
    PulseSystemDll_PulseTestEnumColor_t_BLUE = 0x4
    PulseSystemDll_PulseCursorWakePriority_t_WakeElegantly = 0x0
    PulseSystemDll_PulseCursorWakePriority_t_WakeImmediate = 0x1
    PulseSystemDll_CTestDomainDerived_Cursor_m_nCursorValueA = 0xD8 // int32
    PulseSystemDll_CTestDomainDerived_Cursor_m_nCursorValueB = 0xDC // int32
    PulseSystemDll_CPulse_OutflowConnection_m_SourceOutflowName = 0x0 // PulseSymbol_t
    PulseSystemDll_CPulse_OutflowConnection_m_nDestChunk = 0x10 // PulseRuntimeChunkIndex_t
    PulseSystemDll_CPulse_OutflowConnection_m_nInstruction = 0x14 // int32
    PulseSystemDll_CPulse_OutflowConnection_m_OutflowRegisterMap = 0x18 // PulseRegisterMap_t
    PulseSystemDll_CPulseCell_TestWaitWithCursorState__InstanceState_t_m_nDummy = 0x0 // int32
    PulseSystemDll_CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t_nTestStep = 0x0 // int32
    PulseSystemDll_CPulseTurtleGraphicsCursor_m_Color = 0xD8 // Color
    PulseSystemDll_CPulseTurtleGraphicsCursor_m_vPos = 0xDC // Vector2D
    PulseSystemDll_CPulseTurtleGraphicsCursor_m_flHeadingDeg = 0xE4 // float32
    PulseSystemDll_CPulseTurtleGraphicsCursor_m_bPenUp = 0xE8 // bool
    PulseSystemDll_CPulseCell_TestWaitWithCursorState__CursorState_t_flWaitValue = 0x0 // float32
    PulseSystemDll_CPulseCell_TestWaitWithCursorState__CursorState_t_bFail = 0x4 // bool
    PulseSystemDll_CPulseCell_TestWaitWithCursorState__CursorState_t_m_hSelfCursor = 0x8 // HYieldedCursor
    PulseSystemDll_CPulseCell_TestWaitWithCursorState__CursorState_t_m_hSelfCellInstanceUntyped = 0x14 // HPulseCellBase
    PulseSystemDll_CPulseCell_TestWaitWithCursorState__CursorState_t_m_hSelfCellInstance = 0x1C // HPulseCell<CPulseCell_TestWaitWithCursorState>
    PulseSystemDll_CPulseCell_Test_MultiOutflow_WithParams_Yielding_m_Out1 = 0xD8 // SignatureOutflow_Continue
    PulseSystemDll_CPulseCell_Test_MultiOutflow_WithParams_Yielding_m_AsyncChild1 = 0x120 // SignatureOutflow_Continue
    PulseSystemDll_CPulseCell_Test_MultiOutflow_WithParams_Yielding_m_AsyncChild2 = 0x168 // SignatureOutflow_Continue
    PulseSystemDll_CPulseCell_Test_MultiOutflow_WithParams_Yielding_m_YieldResume1 = 0x1B0 // SignatureOutflow_Resume
    PulseSystemDll_CPulseCell_Test_MultiOutflow_WithParams_Yielding_m_YieldResume2 = 0x1F8 // SignatureOutflow_Resume
    PulseSystemDll_CPulseGraphInstance_TestDomain_Derived_m_nInstanceValueX = 0xD0 // int32
    PulseSystemDll_CPulseGraphInstance_TestDomain_m_bIsRunningUnitTests = 0xA0 // bool
    PulseSystemDll_CPulseGraphInstance_TestDomain_m_bExplicitTimeStepping = 0xA1 // bool
    PulseSystemDll_CPulseGraphInstance_TestDomain_m_bExpectingToDestroyWithYieldedCursors = 0xA2 // bool
    PulseSystemDll_CPulseGraphInstance_TestDomain_m_bQuietTracepoints = 0xA3 // bool
    PulseSystemDll_CPulseGraphInstance_TestDomain_m_bExpectingCursorTerminatedDueToMaxInstructions = 0xA4 // bool
    PulseSystemDll_CPulseGraphInstance_TestDomain_m_nCursorsTerminatedDueToMaxInstructions = 0xA8 // int32
    PulseSystemDll_CPulseGraphInstance_TestDomain_m_nNextValidateIndex = 0xAC // int32
    PulseSystemDll_CPulseGraphInstance_TestDomain_m_Tracepoints = 0xB0 // CUtlVector<CUtlString>
    PulseSystemDll_CPulseGraphInstance_TestDomain_m_bTestYesOrNoPath = 0xC8 // bool
    PulseSystemDll_CPulseCell_Outflow_TestExplicitYesNo_m_Yes = 0x48 // CPulse_OutflowConnection
    PulseSystemDll_CPulseCell_Outflow_TestExplicitYesNo_m_No = 0x90 // CPulse_OutflowConnection
    PulseSystemDll_CPulseCell_IsRequirementValid__Criteria_t_m_bIsValid = 0x0 // bool
    PulseSystemDll_CPulseCell_TestWaitWithCursorState_m_WakeResume = 0xD8 // CPulse_ResumePoint
    PulseSystemDll_CPulseCell_TestWaitWithCursorState_m_WakeFail = 0x120 // CPulse_ResumePoint
    PulseSystemDll_CPulseCell_Unknown_m_UnknownKeys = 0x48 // KeyValues3
    PulseSystemDll_CPulseCell_ExampleCriteria__Criteria_t_m_flFloatValue1 = 0x0 // float32
    PulseSystemDll_CPulseCell_ExampleCriteria__Criteria_t_m_flFloatValue2 = 0x4 // float32
    PulseSystemDll_CPulseCell_ExampleCriteria__Criteria_t_m_bMyBool = 0x8 // bool
    PulseSystemDll_CPulseCell_LimitCount__Criteria_t_m_bLimitCountPasses = 0x0 // bool
    PulseSystemDll_TestComponent_t_m_ComponentData = 0x8 // CUtlString
)
