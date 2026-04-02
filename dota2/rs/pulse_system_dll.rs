// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-04-02 19:22:16.019179300 +07:00

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod source2_dumper {
    pub mod schemas {
        // Module: pulse_system.dll
        // Class count: 130
        // Enum count: 12
        pub mod pulse_system_dll {
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PulseBestOutflowRules_t {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
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
            // Member count: 6
            #[repr(u32)]
            pub enum PulseVariableKeysSource_t {
                PRIVATE = 0x0,
                CPP = 0x1,
                VMAP = 0x2,
                VMDL = 0x3,
                XML = 0x4,
                COUNT = 0x5
            }
            // Alignment: 4
            // Member count: 6
            #[repr(u32)]
            pub enum EPulseGraphExecutionHistoryFlag {
                NO_FLAGS = 0x0,
                CURSOR_ADD_TAG = 0x1,
                CURSOR_REMOVE_TAG = 0x2,
                CURSOR_RETIRED = 0x4,
                REQUIREMENT_PASS = 0x8,
                REQUIREMENT_FAIL = 0x10
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum PulseCursorExecResult_t {
                Succeeded = 0x0,
                Canceled = 0x1,
                Failed = 0x2,
                OngoingNotify = 0x3
            }
            // Alignment: 4
            // Member count: 33
            #[repr(u32)]
            pub enum PulseValueType_t {
                PVAL_VOID = u32::MAX,
                PVAL_BOOL = 0x0,
                PVAL_INT = 0x1,
                PVAL_FLOAT = 0x2,
                PVAL_STRING = 0x3,
                PVAL_VEC2 = 0x4,
                PVAL_VEC3 = 0x5,
                PVAL_QANGLE = 0x6,
                PVAL_VEC3_WORLDSPACE = 0x7,
                PVAL_VEC4 = 0x8,
                PVAL_TRANSFORM = 0x9,
                PVAL_TRANSFORM_WORLDSPACE = 0xA,
                PVAL_COLOR_RGB = 0xB,
                PVAL_GAMETIME = 0xC,
                PVAL_EHANDLE = 0xD,
                PVAL_RESOURCE = 0xE,
                PVAL_RESOURCE_NAME = 0xF,
                PVAL_SNDEVT_GUID = 0x10,
                PVAL_SNDEVT_NAME = 0x11,
                PVAL_ENTITY_NAME = 0x12,
                PVAL_OPAQUE_HANDLE = 0x13,
                PVAL_TYPESAFE_INT = 0x14,
                PVAL_MODEL_MATERIAL_GROUP = 0x15,
                PVAL_CURSOR_FLOW = 0x16,
                PVAL_VARIANT = 0x17,
                PVAL_UNKNOWN = 0x18,
                PVAL_SCHEMA_ENUM = 0x19,
                PVAL_PANORAMA_PANEL_HANDLE = 0x1A,
                PVAL_TEST_HANDLE = 0x1B,
                PVAL_ARRAY = 0x1C,
                PVAL_TYPESAFE_INT64 = 0x1D,
                PVAL_PARTICLE_EHANDLE = 0x1E,
                PVAL_COUNT = 0x1F
            }
            // Alignment: 4
            // Member count: 6
            #[repr(u32)]
            pub enum PulseApiFeature_t {
                AF_NONE = 0x0,
                AF_ENTITIES = 0x1,
                AF_PANORAMA = 0x2,
                AF_PARTICLES = 0x8,
                AF_FAKE_ENTITIES = 0x10,
                AF_SELECTORS_WITHOUT_REQUIREMENTS = 0x20
            }
            // Alignment: 2
            // Member count: 125
            #[repr(u16)]
            pub enum PulseInstructionCode_t {
                INVALID = 0x0,
                IMMEDIATE_HALT = 0x1,
                RETURN_VOID = 0x2,
                RETURN_VALUE = 0x3,
                NOP = 0x4,
                JUMP = 0x5,
                JUMP_COND = 0x6,
                CHUNK_LEAP = 0x7,
                CHUNK_LEAP_COND = 0x8,
                PULSE_CALL_SYNC = 0x9,
                PULSE_CALL_ASYNC_FIRE = 0xA,
                CELL_INVOKE = 0xB,
                LIBRARY_INVOKE = 0xC,
                SET_VAR = 0xD,
                GET_VAR = 0xE,
                GET_VAR_DETACH = 0xF,
                DETACH_REGISTER = 0x10,
                SET_VAR_ARRAY_ELEMENT_1D = 0x11,
                SET_VAR_OBSERVABLE = 0x12,
                GET_CONST = 0x13,
                GET_ARRAY_ELEMENT = 0x14,
                GET_DOMAIN_VALUE = 0x15,
                COPY = 0x16,
                NOT = 0x17,
                NEGATE = 0x18,
                ADD = 0x19,
                SUB = 0x1A,
                MUL = 0x1B,
                DIV = 0x1C,
                MOD = 0x1D,
                LT = 0x1E,
                LTE = 0x1F,
                EQ = 0x20,
                NE = 0x21,
                AND = 0x22,
                OR = 0x23,
                SCALE = 0x24,
                SCALE_INV = 0x25,
                ELEMENT_ACCESS = 0x26,
                CONVERT_VALUE = 0x27,
                REINTERPRET_INSTANCE = 0x28,
                GET_BLACKBOARD_REFERENCE = 0x29,
                SET_BLACKBOARD_REFERENCE = 0x2A,
                LAST_SERIALIZED_CODE = 0x2B,
                NEGATE_INT = 0x2C,
                NEGATE_FLOAT = 0x2D,
                NEGATE_VEC2 = 0x2E,
                NEGATE_VEC3 = 0x2F,
                NEGATE_VEC4 = 0x30,
                ADD_INT = 0x31,
                ADD_FLOAT = 0x32,
                ADD_STRING = 0x33,
                ADD_VEC2 = 0x34,
                ADD_VEC3 = 0x35,
                ADD_VEC3WS_VEC3 = 0x36,
                ADD_VEC3_VEC3WS = 0x37,
                ADD_VEC4 = 0x38,
                ADD_GAMETIME_FLOAT = 0x39,
                ADD_FLOAT_GAMETIME = 0x3A,
                SUB_INT = 0x3B,
                SUB_FLOAT = 0x3C,
                SUB_VEC2 = 0x3D,
                SUB_VEC3 = 0x3E,
                SUB_VEC3WS_VEC3 = 0x3F,
                SUB_VEC3WS_VEC3WS = 0x40,
                SUB_VEC4 = 0x41,
                SUB_GAMETIME_FLOAT = 0x42,
                SUB_GAMETIME = 0x43,
                MUL_INT = 0x44,
                MUL_FLOAT = 0x45,
                DIV_FLOAT = 0x46,
                MOD_INT = 0x47,
                MOD_FLOAT = 0x48,
                LT_INT = 0x49,
                LT_FLOAT = 0x4A,
                LT_GAMETIME = 0x4B,
                LTE_INT = 0x4C,
                LTE_FLOAT = 0x4D,
                LTE_GAMETIME = 0x4E,
                EQ_BOOL = 0x4F,
                EQ_INT = 0x50,
                EQ_FLOAT = 0x51,
                EQ_VEC2 = 0x52,
                EQ_VEC3 = 0x53,
                EQ_VEC3WS = 0x54,
                EQ_VEC4 = 0x55,
                EQ_STRING = 0x56,
                EQ_ENTITY_NAME = 0x57,
                EQ_SCHEMA_ENUM = 0x58,
                EQ_EHANDLE = 0x59,
                EQ_PANEL_HANDLE = 0x5A,
                EQ_OPAQUE_HANDLE = 0x5B,
                EQ_TEST_HANDLE = 0x5C,
                EQ_COLOR_RGB = 0x5D,
                EQ_ARRAY = 0x5E,
                EQ_GAMETIME = 0x5F,
                NE_BOOL = 0x60,
                NE_INT = 0x61,
                NE_FLOAT = 0x62,
                NE_VEC2 = 0x63,
                NE_VEC3 = 0x64,
                NE_VEC3WS = 0x65,
                NE_VEC4 = 0x66,
                NE_STRING = 0x67,
                NE_ENTITY_NAME = 0x68,
                NE_SCHEMA_ENUM = 0x69,
                NE_EHANDLE = 0x6A,
                NE_PANEL_HANDLE = 0x6B,
                NE_OPAQUE_HANDLE = 0x6C,
                NE_TEST_HANDLE = 0x6D,
                NE_COLOR_RGB = 0x6E,
                NE_ARRAY = 0x6F,
                NE_GAMETIME = 0x70,
                SCALE_VEC3 = 0x71,
                SCALE_VEC2 = 0x72,
                SCALE_VEC4 = 0x73,
                SCALE_INV_VEC3 = 0x74,
                SCALE_INV_VEC2 = 0x75,
                SCALE_INV_VEC4 = 0x76,
                ELEMENT_ACCESS_VEC2 = 0x77,
                ELEMENT_ACCESS_VEC3 = 0x78,
                ELEMENT_ACCESS_VEC3WS = 0x79,
                ELEMENT_ACCESS_VEC4 = 0x7A,
                ELEMENT_ACCESS_COLOR_RGB = 0x7B,
                GET_CONST_INLINE_STORAGE = 0x7C
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum PulseDomainValueType_t {
                INVALID = u32::MAX,
                ENTITY_NAME = 0x0,
                PANEL_ID = 0x1,
                COUNT = 0x2
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Step_TestDomainDestroyFakeEntity {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_WaitForCursorsWithTag {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Test_NoInflow {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseGraphInstance_TestDomain_FakeEntityOwner {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Base {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_ResumePoint {
            }
            // Parent: None
            // Field count: 0
            pub mod CTestDomainDerived_Cursor {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_PickBestOutflowSelector {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseTestFuncs_LibraryA {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_WaitForObservable {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_OutflowConnection {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseGraphDef {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_FireCursors {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Timeline__TimelineEvent_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_IntervalTimer__CursorState_t {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_BaseRequirement {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_BaseState {
            }
            // Parent: None
            // Field count: 0
            pub mod OutflowWithRequirements_t {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_IsRequirementValid {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Value_Gradient {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCursorFuncs {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseNodeDynamicOutflows_t__DynamicOutflow_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Test_MultiOutflow_WithParams {
            }
            // Parent: None
            // Field count: 0
            pub mod CBasePulseGraphInstance {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_Inflow_GraphHook {
            }
            // Parent: None
            // Field count: 0
            pub mod SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Test_MultiOutflow_WithParams_Yielding__CursorState_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseTurtleGraphicsCursor {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_TestWaitWithCursorState__CursorState_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Inflow_BaseEntrypoint {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Test_MultiInflow_NoDefault {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_WaitForCursorsWithTagBase {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_InvokeBinding {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_IntervalTimer {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseTestScriptLib {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_BaseLerp {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Value_TestValue50 {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_Test_MultiOutflow_WithParams_Yielding {
            }
            // Parent: None
            // Field count: 0
            pub mod TestComponent_tAPI {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Value_Curve {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_Inflow_EventHandler {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_BaseFlow {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Step_TestDomainTracepoint {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Outflow_CycleShuffled__InstanceState_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_BaseLerp__CursorState_t {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseGraphInstance_TestDomain_Derived {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseArraylib {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseGraphInstance_TestDomain {
            }
            // Parent: None
            // Field count: 0
            pub mod SignatureOutflow_Continue {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Timeline {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Inflow_EntOutputHandler {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Outflow_TestExplicitYesNo {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Outflow_TestRandomYesNo {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Outflow_CycleOrdered__InstanceState_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_LimitCount__InstanceState_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FakeEntity_tAPI {
            }
            // Parent: pulse_system
            // Field count: 0
            pub mod CPulseCell_Test_MultiInflow_WithDefault {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_Step_DebugLog {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_BaseYieldingInflow {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseNodeDynamicOutflows_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_IsRequirementValid__Criteria_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Inflow_ObservableVariableListener {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_Outflow_CycleOrdered {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseSelectorOutflowList_t {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseGraphInstance_TurtleGraphics {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Val_TestDomainGetEntityName {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_Inflow_Wait {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_TestWaitWithCursorState {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_Outflow_CycleShuffled {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Inflow_Method {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_BaseValue {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_BooleanSwitchState {
            }
            // Parent: None
            // Field count: 0
            pub mod FakeEntityDerivedB_tAPI {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_Inflow_Yield {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseMathlib {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Unknown {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_Outflow_CycleRandom {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_Step_PublicOutput {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_Val_TestDomainFindEntityByName {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_BlackboardReference {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Value_RandomInt {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Step_TestDomainEntFire {
            }
            // Parent: None
            // Field count: 0
            pub mod FakeEntityDerivedA_tAPI {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_ExampleSelector {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_CallInfo {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_InlineNodeSkipSelector {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_ExampleCriteria__Criteria_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_ExampleCriteria {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_LimitCount {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Step_CallExternalMethod {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseObservableBoolExpression_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_LimitCount__Criteria_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Step_TestDomainCreateFakeEntity {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            pub mod CPulseCell_CursorQueue {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseCell_Value_RandomFloat {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseExecCursor {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseRuntimeVarIndex_t {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseRuntimeEntrypointIndex_t {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseRuntimeDomainValueIndex_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_Chunk {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseRuntimeInvokeIndex_t {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseRuntimeRegisterIndex_t {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseCursorID_t {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseGraphExecutionHistoryCursorDesc_t {
            }
            // Parent: None
            // Field count: 0
            pub mod TestComponent_t {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseRegisterMap_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_PublicOutput {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_OutputConnection {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseGraphExecutionHistoryNodeDesc_t {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseGraphExecutionHistoryEntry_t {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseCursorYieldToken_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseGraphExecutionHistory {
            }
            // Parent: None
            // Field count: 0
            pub mod PGDInstruction_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_Variable {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseRuntimeOutputIndex_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_DomainValue {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseRuntimeBlackboardReferenceIndex_t {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseRuntimeConstantIndex_t {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseDocNodeID_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_RegisterInfo {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseRuntimeCellIndex_t {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseGraphInstanceID_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_Constant {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseRuntimeCallInfoIndex_t {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseRuntimeChunkIndex_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseRuntimeMethodArg {
            }
            // Parent: None
            // Field count: 0
            pub mod PulseRuntimeStateOffset_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_InstructionDebug {
            }
        }
    }
}
