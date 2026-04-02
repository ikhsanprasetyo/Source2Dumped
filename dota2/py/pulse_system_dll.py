# Generated using https://github.com/ikhsanprasetyo/source2-dumper
# 2026-04-02 19:22:16.019179300 +07:00

class Schemas:
    # Module: pulse_system.dll
    class PulseSystemDll:
        class PulseBestOutflowRules_t:
            SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0
            SORT_BY_OUTFLOW_INDEX = 0x1
        class PulseTestEnumShape_t:
            CIRCLE = 0x64
            SQUARE = 0xC8
            TRIANGLE = 0x12C
        class PulseCursorCancelPriority_t:
            None_ = 0x0
            CancelOnSucceeded = 0x1
            SoftCancel = 0x2
            HardCancel = 0x3
        class PulseMethodCallMode_t:
            SYNC_WAIT_FOR_COMPLETION = 0x0
            ASYNC_FIRE_AND_FORGET = 0x1
        class PulseTestEnumColor_t:
            BLACK = 0x0
            WHITE = 0x1
            RED = 0x2
            GREEN = 0x3
            BLUE = 0x4
        class PulseVariableKeysSource_t:
            PRIVATE = 0x0
            CPP = 0x1
            VMAP = 0x2
            VMDL = 0x3
            XML = 0x4
            COUNT = 0x5
        class EPulseGraphExecutionHistoryFlag:
            NO_FLAGS = 0x0
            CURSOR_ADD_TAG = 0x1
            CURSOR_REMOVE_TAG = 0x2
            CURSOR_RETIRED = 0x4
            REQUIREMENT_PASS = 0x8
            REQUIREMENT_FAIL = 0x10
        class PulseCursorExecResult_t:
            Succeeded = 0x0
            Canceled = 0x1
            Failed = 0x2
            OngoingNotify = 0x3
        class PulseValueType_t:
            PVAL_VOID = 0xFFFFFFFFFFFFFFFF
            PVAL_BOOL = 0x0
            PVAL_INT = 0x1
            PVAL_FLOAT = 0x2
            PVAL_STRING = 0x3
            PVAL_VEC2 = 0x4
            PVAL_VEC3 = 0x5
            PVAL_QANGLE = 0x6
            PVAL_VEC3_WORLDSPACE = 0x7
            PVAL_VEC4 = 0x8
            PVAL_TRANSFORM = 0x9
            PVAL_TRANSFORM_WORLDSPACE = 0xA
            PVAL_COLOR_RGB = 0xB
            PVAL_GAMETIME = 0xC
            PVAL_EHANDLE = 0xD
            PVAL_RESOURCE = 0xE
            PVAL_RESOURCE_NAME = 0xF
            PVAL_SNDEVT_GUID = 0x10
            PVAL_SNDEVT_NAME = 0x11
            PVAL_ENTITY_NAME = 0x12
            PVAL_OPAQUE_HANDLE = 0x13
            PVAL_TYPESAFE_INT = 0x14
            PVAL_MODEL_MATERIAL_GROUP = 0x15
            PVAL_CURSOR_FLOW = 0x16
            PVAL_VARIANT = 0x17
            PVAL_UNKNOWN = 0x18
            PVAL_SCHEMA_ENUM = 0x19
            PVAL_PANORAMA_PANEL_HANDLE = 0x1A
            PVAL_TEST_HANDLE = 0x1B
            PVAL_ARRAY = 0x1C
            PVAL_TYPESAFE_INT64 = 0x1D
            PVAL_PARTICLE_EHANDLE = 0x1E
            PVAL_COUNT = 0x1F
        class PulseApiFeature_t:
            AF_NONE = 0x0
            AF_ENTITIES = 0x1
            AF_PANORAMA = 0x2
            AF_PARTICLES = 0x8
            AF_FAKE_ENTITIES = 0x10
            AF_SELECTORS_WITHOUT_REQUIREMENTS = 0x20
        class PulseInstructionCode_t:
            INVALID = 0x0
            IMMEDIATE_HALT = 0x1
            RETURN_VOID = 0x2
            RETURN_VALUE = 0x3
            NOP = 0x4
            JUMP = 0x5
            JUMP_COND = 0x6
            CHUNK_LEAP = 0x7
            CHUNK_LEAP_COND = 0x8
            PULSE_CALL_SYNC = 0x9
            PULSE_CALL_ASYNC_FIRE = 0xA
            CELL_INVOKE = 0xB
            LIBRARY_INVOKE = 0xC
            SET_VAR = 0xD
            GET_VAR = 0xE
            GET_VAR_DETACH = 0xF
            DETACH_REGISTER = 0x10
            SET_VAR_ARRAY_ELEMENT_1D = 0x11
            SET_VAR_OBSERVABLE = 0x12
            GET_CONST = 0x13
            GET_ARRAY_ELEMENT = 0x14
            GET_DOMAIN_VALUE = 0x15
            COPY = 0x16
            NOT = 0x17
            NEGATE = 0x18
            ADD = 0x19
            SUB = 0x1A
            MUL = 0x1B
            DIV = 0x1C
            MOD = 0x1D
            LT = 0x1E
            LTE = 0x1F
            EQ = 0x20
            NE = 0x21
            AND = 0x22
            OR = 0x23
            SCALE = 0x24
            SCALE_INV = 0x25
            ELEMENT_ACCESS = 0x26
            CONVERT_VALUE = 0x27
            REINTERPRET_INSTANCE = 0x28
            GET_BLACKBOARD_REFERENCE = 0x29
            SET_BLACKBOARD_REFERENCE = 0x2A
            LAST_SERIALIZED_CODE = 0x2B
            NEGATE_INT = 0x2C
            NEGATE_FLOAT = 0x2D
            NEGATE_VEC2 = 0x2E
            NEGATE_VEC3 = 0x2F
            NEGATE_VEC4 = 0x30
            ADD_INT = 0x31
            ADD_FLOAT = 0x32
            ADD_STRING = 0x33
            ADD_VEC2 = 0x34
            ADD_VEC3 = 0x35
            ADD_VEC3WS_VEC3 = 0x36
            ADD_VEC3_VEC3WS = 0x37
            ADD_VEC4 = 0x38
            ADD_GAMETIME_FLOAT = 0x39
            ADD_FLOAT_GAMETIME = 0x3A
            SUB_INT = 0x3B
            SUB_FLOAT = 0x3C
            SUB_VEC2 = 0x3D
            SUB_VEC3 = 0x3E
            SUB_VEC3WS_VEC3 = 0x3F
            SUB_VEC3WS_VEC3WS = 0x40
            SUB_VEC4 = 0x41
            SUB_GAMETIME_FLOAT = 0x42
            SUB_GAMETIME = 0x43
            MUL_INT = 0x44
            MUL_FLOAT = 0x45
            DIV_FLOAT = 0x46
            MOD_INT = 0x47
            MOD_FLOAT = 0x48
            LT_INT = 0x49
            LT_FLOAT = 0x4A
            LT_GAMETIME = 0x4B
            LTE_INT = 0x4C
            LTE_FLOAT = 0x4D
            LTE_GAMETIME = 0x4E
            EQ_BOOL = 0x4F
            EQ_INT = 0x50
            EQ_FLOAT = 0x51
            EQ_VEC2 = 0x52
            EQ_VEC3 = 0x53
            EQ_VEC3WS = 0x54
            EQ_VEC4 = 0x55
            EQ_STRING = 0x56
            EQ_ENTITY_NAME = 0x57
            EQ_SCHEMA_ENUM = 0x58
            EQ_EHANDLE = 0x59
            EQ_PANEL_HANDLE = 0x5A
            EQ_OPAQUE_HANDLE = 0x5B
            EQ_TEST_HANDLE = 0x5C
            EQ_COLOR_RGB = 0x5D
            EQ_ARRAY = 0x5E
            EQ_GAMETIME = 0x5F
            NE_BOOL = 0x60
            NE_INT = 0x61
            NE_FLOAT = 0x62
            NE_VEC2 = 0x63
            NE_VEC3 = 0x64
            NE_VEC3WS = 0x65
            NE_VEC4 = 0x66
            NE_STRING = 0x67
            NE_ENTITY_NAME = 0x68
            NE_SCHEMA_ENUM = 0x69
            NE_EHANDLE = 0x6A
            NE_PANEL_HANDLE = 0x6B
            NE_OPAQUE_HANDLE = 0x6C
            NE_TEST_HANDLE = 0x6D
            NE_COLOR_RGB = 0x6E
            NE_ARRAY = 0x6F
            NE_GAMETIME = 0x70
            SCALE_VEC3 = 0x71
            SCALE_VEC2 = 0x72
            SCALE_VEC4 = 0x73
            SCALE_INV_VEC3 = 0x74
            SCALE_INV_VEC2 = 0x75
            SCALE_INV_VEC4 = 0x76
            ELEMENT_ACCESS_VEC2 = 0x77
            ELEMENT_ACCESS_VEC3 = 0x78
            ELEMENT_ACCESS_VEC3WS = 0x79
            ELEMENT_ACCESS_VEC4 = 0x7A
            ELEMENT_ACCESS_COLOR_RGB = 0x7B
            GET_CONST_INLINE_STORAGE = 0x7C
        class PulseDomainValueType_t:
            INVALID = 0xFFFFFFFFFFFFFFFF
            ENTITY_NAME = 0x0
            PANEL_ID = 0x1
            COUNT = 0x2
        class CPulseCell_Step_TestDomainDestroyFakeEntity:
            pass
        class CPulseCell_WaitForCursorsWithTag:
            pass
        class CPulseCell_Test_NoInflow:
            pass
        class CPulseGraphInstance_TestDomain_FakeEntityOwner:
            pass
        class CPulseCell_Base:
            pass
        class CPulse_ResumePoint:
            pass
        class CTestDomainDerived_Cursor:
            pass
        class CPulseCell_PickBestOutflowSelector:
            pass
        class CPulseTestFuncs_LibraryA:
            pass
        class CPulseCell_WaitForObservable:
            pass
        class CPulse_OutflowConnection:
            pass
        class CPulseGraphDef:
            pass
        class CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView:
            pass
        class CPulseCell_FireCursors:
            pass
        class CPulseCell_Timeline__TimelineEvent_t:
            pass
        class CPulseCell_IntervalTimer__CursorState_t:
            pass
        class CPulseCell_BaseRequirement:
            pass
        class CPulseCell_BaseState:
            pass
        class OutflowWithRequirements_t:
            pass
        class CPulseCell_IsRequirementValid:
            pass
        class CPulseCell_Value_Gradient:
            pass
        class CPulseCursorFuncs:
            pass
        class PulseNodeDynamicOutflows_t__DynamicOutflow_t:
            pass
        class CPulseCell_Test_MultiOutflow_WithParams:
            pass
        class CBasePulseGraphInstance:
            pass
        class CPulseCell_Inflow_GraphHook:
            pass
        class SignatureOutflow_Resume:
            pass
        class CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t:
            pass
        class CPulseTurtleGraphicsCursor:
            pass
        class CPulseCell_TestWaitWithCursorState__CursorState_t:
            pass
        class CPulseCell_Inflow_BaseEntrypoint:
            pass
        class CPulseCell_Test_MultiInflow_NoDefault:
            pass
        class CPulseCell_WaitForCursorsWithTagBase:
            pass
        class CPulse_InvokeBinding:
            pass
        class CPulseCell_IntervalTimer:
            pass
        class CPulseTestScriptLib:
            pass
        class CPulseCell_BaseLerp:
            pass
        class CPulseCell_Value_TestValue50:
            pass
        class CPulseCell_Test_MultiOutflow_WithParams_Yielding:
            pass
        class TestComponent_tAPI:
            pass
        class CPulseCell_Value_Curve:
            pass
        class CPulseCell_Inflow_EventHandler:
            pass
        class CPulseCell_BaseFlow:
            pass
        class CPulseCell_Step_TestDomainTracepoint:
            pass
        class CPulseCell_Outflow_CycleShuffled__InstanceState_t:
            pass
        class CPulseCell_BaseLerp__CursorState_t:
            pass
        class CPulseGraphInstance_TestDomain_Derived:
            pass
        class CPulseCell_WaitForCursorsWithTagBase__CursorState_t:
            pass
        class CPulseArraylib:
            pass
        class CPulseGraphInstance_TestDomain:
            pass
        class SignatureOutflow_Continue:
            pass
        class CPulseCell_Timeline:
            pass
        class CPulseCell_Inflow_EntOutputHandler:
            pass
        class CPulseCell_Outflow_TestExplicitYesNo:
            pass
        class CPulseCell_Outflow_TestRandomYesNo:
            pass
        class CPulseCell_Outflow_CycleOrdered__InstanceState_t:
            pass
        class CPulseCell_LimitCount__InstanceState_t:
            pass
        class FakeEntity_tAPI:
            pass
        class CPulseCell_Test_MultiInflow_WithDefault:
            pass
        class CPulseCell_Step_DebugLog:
            pass
        class CPulseCell_BaseYieldingInflow:
            pass
        class PulseNodeDynamicOutflows_t:
            pass
        class CPulseCell_IsRequirementValid__Criteria_t:
            pass
        class CPulseCell_Inflow_ObservableVariableListener:
            pass
        class CPulseCell_Outflow_CycleOrdered:
            pass
        class PulseSelectorOutflowList_t:
            pass
        class CPulseGraphInstance_TurtleGraphics:
            pass
        class CPulseCell_Val_TestDomainGetEntityName:
            pass
        class CPulseCell_Inflow_Wait:
            pass
        class CPulseCell_TestWaitWithCursorState:
            pass
        class CPulseCell_Outflow_CycleShuffled:
            pass
        class CPulseCell_Inflow_Method:
            pass
        class CPulseCell_BaseValue:
            pass
        class CPulseCell_BooleanSwitchState:
            pass
        class FakeEntityDerivedB_tAPI:
            pass
        class CPulseCell_Inflow_Yield:
            pass
        class CPulseMathlib:
            pass
        class CPulseCell_Unknown:
            pass
        class CPulseCell_Outflow_CycleRandom:
            pass
        class CPulseCell_Step_PublicOutput:
            pass
        class CPulseCell_Val_TestDomainFindEntityByName:
            pass
        class CPulse_BlackboardReference:
            pass
        class CPulseCell_Value_RandomInt:
            pass
        class CPulseCell_Step_TestDomainEntFire:
            pass
        class FakeEntityDerivedA_tAPI:
            pass
        class CPulseCell_ExampleSelector:
            pass
        class CPulse_CallInfo:
            pass
        class CPulseCell_InlineNodeSkipSelector:
            pass
        class CPulseCell_ExampleCriteria__Criteria_t:
            pass
        class CPulseCell_ExampleCriteria:
            pass
        class CPulseCell_LimitCount:
            pass
        class CPulseCell_Step_CallExternalMethod:
            pass
        class PulseObservableBoolExpression_t:
            pass
        class CPulseCell_LimitCount__Criteria_t:
            pass
        class CPulseCell_Step_TestDomainCreateFakeEntity:
            pass
        class CPulseCell_CursorQueue:
            pass
        class CPulseCell_Value_RandomFloat:
            pass
        class CPulseExecCursor:
            pass
        class PulseRuntimeVarIndex_t:
            pass
        class PulseRuntimeEntrypointIndex_t:
            pass
        class PulseRuntimeDomainValueIndex_t:
            pass
        class CPulse_Chunk:
            pass
        class PulseRuntimeInvokeIndex_t:
            pass
        class PulseRuntimeRegisterIndex_t:
            pass
        class PulseCursorID_t:
            pass
        class PulseGraphExecutionHistoryCursorDesc_t:
            pass
        class TestComponent_t:
            pass
        class PulseRegisterMap_t:
            pass
        class CPulse_PublicOutput:
            pass
        class CPulse_OutputConnection:
            pass
        class PulseGraphExecutionHistoryNodeDesc_t:
            pass
        class PulseGraphExecutionHistoryEntry_t:
            pass
        class PulseCursorYieldToken_t:
            pass
        class CPulseGraphExecutionHistory:
            pass
        class PGDInstruction_t:
            pass
        class CPulse_Variable:
            pass
        class PulseRuntimeOutputIndex_t:
            pass
        class CPulse_DomainValue:
            pass
        class PulseRuntimeBlackboardReferenceIndex_t:
            pass
        class PulseRuntimeConstantIndex_t:
            pass
        class PulseDocNodeID_t:
            pass
        class CPulse_RegisterInfo:
            pass
        class PulseRuntimeCellIndex_t:
            pass
        class PulseGraphInstanceID_t:
            pass
        class CPulse_Constant:
            pass
        class PulseRuntimeCallInfoIndex_t:
            pass
        class PulseRuntimeChunkIndex_t:
            pass
        class CPulseRuntimeMethodArg:
            pass
        class PulseRuntimeStateOffset_t:
            pass
        class CPulse_InstructionDebug:
            pass
