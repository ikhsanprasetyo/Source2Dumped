# Generated using https://github.com/ikhsanprasetyo/source2-dumper
# 2026-10-31 12:34:43.677315300 +07:00

class Schemas:
    # Module: pulse_system.dll
    class PulseSystemDll:
        class PulseBestOutflowRules_t:
            SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0
            SORT_BY_OUTFLOW_INDEX = 0x1
        class PulseTestEnumFlags_t:
            NONE = 0x0
            FIRST = 0x1
            SECOND = 0x2
            THIRD = 0x4
        class PulseTestEnumShape_t:
            CIRCLE = 0x64
            SQUARE = 0xC8
            TRIANGLE = 0x12C
        class PulseCursorCancelPriority_t:
            None_ = 0x0
            CancelOnSucceeded = 0x1
            SoftCancel = 0x2
            HardCancel = 0x3
        class PulseTestEnumFlagsAlt_t:
            NONE = 0x0
            FIRST = 0x1
        class PulseMethodCallMode_t:
            SYNC_WAIT_FOR_COMPLETION = 0x0
            ASYNC_FIRE_AND_FORGET = 0x1
        class PulseTestEnumColor_t:
            BLACK = 0x0
            WHITE = 0x1
            RED = 0x2
            GREEN = 0x3
            BLUE = 0x4
        class PulseCursorWakePriority_t:
            WakeElegantly = 0x0
            WakeImmediate = 0x1
        class CPulseGraphInstance_TestDomain_FakeEntityOwner:
            pass
        class CPulse_ResumePoint:
            pass
        class CTestDomainDerived_Cursor:
            m_nCursorValueA = 0xD8 # int32
            m_nCursorValueB = 0xDC # int32
        class CPulse_OutflowConnection:
            m_SourceOutflowName = 0x0 # PulseSymbol_t
            m_nDestChunk = 0x10 # PulseRuntimeChunkIndex_t
            m_nInstruction = 0x14 # int32
            m_OutflowRegisterMap = 0x18 # PulseRegisterMap_t
        class CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView:
            pass
        class CPulseCell_TestWaitWithCursorState__InstanceState_t:
            m_nDummy = 0x0 # int32
        class CBasePulseGraphInstance:
            pass
        class SignatureOutflow_Resume:
            pass
        class CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t:
            nTestStep = 0x0 # int32
        class CPulseTurtleGraphicsCursor:
            m_Color = 0xD8 # Color
            m_vPos = 0xDC # Vector2D
            m_flHeadingDeg = 0xE4 # float32
            m_bPenUp = 0xE8 # bool
        class CPulseCell_TestWaitWithCursorState__CursorState_t:
            flWaitValue = 0x0 # float32
            bFail = 0x4 # bool
            m_hSelfCursor = 0x8 # HYieldedCursor
            m_hSelfCellInstanceUntyped = 0x14 # HPulseCellBase
            m_hSelfCellInstance = 0x1C # HPulseCell<CPulseCell_TestWaitWithCursorState>
        class CPulseCell_Test_MultiInflow_NoDefault:
            pass
        class CPulseCell_Test_MultiOutflow_WithParams_Yielding:
            m_Out1 = 0xD8 # SignatureOutflow_Continue
            m_AsyncChild1 = 0x120 # SignatureOutflow_Continue
            m_AsyncChild2 = 0x168 # SignatureOutflow_Continue
            m_YieldResume1 = 0x1B0 # SignatureOutflow_Resume
            m_YieldResume2 = 0x1F8 # SignatureOutflow_Resume
        class CPulseGraphInstance_TestDomain_Derived:
            m_nInstanceValueX = 0xD0 # int32
        class CPulseGraphInstance_TestDomain:
            m_bIsRunningUnitTests = 0xA0 # bool
            m_bExplicitTimeStepping = 0xA1 # bool
            m_bExpectingToDestroyWithYieldedCursors = 0xA2 # bool
            m_bQuietTracepoints = 0xA3 # bool
            m_bExpectingCursorTerminatedDueToMaxInstructions = 0xA4 # bool
            m_nCursorsTerminatedDueToMaxInstructions = 0xA8 # int32
            m_nNextValidateIndex = 0xAC # int32
            m_Tracepoints = 0xB0 # CUtlVector<CUtlString>
            m_bTestYesOrNoPath = 0xC8 # bool
        class SignatureOutflow_Continue:
            pass
        class CPulseCell_Outflow_TestExplicitYesNo:
            m_Yes = 0x48 # CPulse_OutflowConnection
            m_No = 0x90 # CPulse_OutflowConnection
            m_Out1 = 0xD8 # SignatureOutflow_Continue
            m_AsyncChild1 = 0x120 # SignatureOutflow_Continue
        class CPulseCell_IsRequirementValid__Criteria_t:
            m_bIsValid = 0x0 # bool
        class CPulseGraphInstance_TurtleGraphics:
            pass
        class CPulseCell_TestWaitWithCursorState:
            m_WakeResume = 0xD8 # CPulse_ResumePoint
            m_WakeFail = 0x120 # CPulse_ResumePoint
        class CPulseCell_Unknown:
            m_UnknownKeys = 0x48 # KeyValues3
        class CPulseCell_ExampleCriteria__Criteria_t:
            m_flFloatValue1 = 0x0 # float32
            m_flFloatValue2 = 0x4 # float32
            m_bMyBool = 0x8 # bool
        class CPulseCell_LimitCount__Criteria_t:
            m_bLimitCountPasses = 0x0 # bool
        class CPulseExecCursor:
            pass
        class TestComponent_t:
            m_ComponentData = 0x8 # CUtlString
