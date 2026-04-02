// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-04-02 19:22:16.019179300 +07:00

#pragma once

#include <cstddef>
#include <cstdint>

namespace source2_dumper {
    namespace schemas {
        // Module: animationsystem.dll
        // Class count: 663
        // Enum count: 141
        namespace animationsystem_dll {
            // Alignment: 4
            // Member count: 2
            enum class PulseBestOutflowRules_t : uint32_t {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class PulseCursorCancelPriority_t : uint32_t {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            };
            // Alignment: 4
            // Member count: 2
            enum class PulseMethodCallMode_t : uint32_t {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class ParticleSetMethod_t : uint32_t {
                PARTICLE_SET_REPLACE_VALUE = 0x0,
                PARTICLE_SET_SCALE_INITIAL_VALUE = 0x1,
                PARTICLE_SET_ADD_TO_INITIAL_VALUE = 0x2,
                PARTICLE_SET_RAMP_CURRENT_VALUE = 0x3,
                PARTICLE_SET_SCALE_CURRENT_VALUE = 0x4,
                PARTICLE_SET_ADD_TO_CURRENT_VALUE = 0x5
            };
            // Alignment: 4
            // Member count: 17
            enum class SeqCmd_t : uint32_t {
                SeqCmd_Nop = 0x0,
                SeqCmd_LinearDelta = 0x1,
                SeqCmd_FetchFrameRange = 0x2,
                SeqCmd_Slerp = 0x3,
                SeqCmd_Add = 0x4,
                SeqCmd_Subtract = 0x5,
                SeqCmd_Scale = 0x6,
                SeqCmd_Copy = 0x7,
                SeqCmd_Blend = 0x8,
                SeqCmd_Worldspace = 0x9,
                SeqCmd_Sequence = 0xA,
                SeqCmd_FetchCycle = 0xB,
                SeqCmd_FetchFrame = 0xC,
                SeqCmd_IKLockInPlace = 0xD,
                SeqCmd_IKRestoreAll = 0xE,
                SeqCmd_ReverseSequence = 0xF,
                SeqCmd_Transform = 0x10
            };
            // Alignment: 4
            // Member count: 3
            enum class CNmEventRelevance_t : uint32_t {
                ClientOnly = 0x0,
                ServerOnly = 0x1,
                ClientAndServer = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class BoneTransformSpace_t : uint32_t {
                BoneTransformSpace_Invalid = 0xFFFFFFFF,
                BoneTransformSpace_Parent = 0x0,
                BoneTransformSpace_Model = 0x1,
                BoneTransformSpace_World = 0x2
            };
            // Alignment: 4
            // Member count: 5
            enum class CAnimationGraphVisualizerPrimitiveType : uint32_t {
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0x0,
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 0x1,
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 0x2,
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 0x3,
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 0x4
            };
            // Alignment: 1
            // Member count: 3
            enum class NmTransitionRule_t : uint8_t {
                AllowTransition = 0x0,
                ConditionallyAllowTransition = 0x1,
                BlockTransition = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class BinaryNodeTiming : uint32_t {
                UseChild1 = 0x0,
                UseChild2 = 0x1,
                SyncChildren = 0x2
            };
            // Alignment: 1
            // Member count: 3
            enum class NmFollowBoneMode_t : uint8_t {
                RotationAndTranslation = 0x0,
                RotationOnly = 0x1,
                TranslationOnly = 0x2
            };
            // Alignment: 4
            // Member count: 7
            enum class SolveIKChainAnimNodeDebugSetting : uint32_t {
                SOLVEIKCHAINANIMNODEDEBUGSETTING_None = 0x0,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle = 0x1,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle = 0x2,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle = 0x3,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward = 0x4,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_Up = 0x5,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_Left = 0x6
            };
            // Alignment: 4
            // Member count: 2
            enum class CNmParticleEvent__Type_t : uint32_t {
                Create = 0x0,
                Create_CFG = 0x1
            };
            // Alignment: 4
            // Member count: 5
            enum class ParticleFloatBiasType_t : uint32_t {
                PF_BIAS_TYPE_INVALID = 0xFFFFFFFF,
                PF_BIAS_TYPE_STANDARD = 0x0,
                PF_BIAS_TYPE_GAIN = 0x1,
                PF_BIAS_TYPE_EXPONENTIAL = 0x2,
                PF_BIAS_TYPE_COUNT = 0x3
            };
            // Alignment: 1
            // Member count: 4
            enum class CNmTargetWarpNode__TargetUpdateRule_t : uint8_t {
                None = 0x0,
                Recalculate = 0x1,
                Offset = 0x2,
                RecalculateOrOffset = 0x3
            };
            // Alignment: 1
            // Member count: 6
            enum class SharedMovementGait_t : uint8_t {
                eInvalid = 0xFF,
                eSlow = 0x0,
                eMedium = 0x1,
                eFast = 0x2,
                eVeryFast = 0x3,
                eCount = 0x4
            };
            // Alignment: 4
            // Member count: 3
            enum class OrientationWarpRootMotionSource_t : uint32_t {
                eAnimationOrProcedural = 0x0,
                eAnimationOnly = 0x1,
                eProceduralOnly = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class IKTargetCoordinateSystem : uint32_t {
                IKTARGETCOORDINATESYSTEM_WorldSpace = 0x0,
                IKTARGETCOORDINATESYSTEM_ModelSpace = 0x1,
                IKTARGETCOORDINATESYSTEM_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 33
            enum class ParticleFloatType_t : uint32_t {
                PF_TYPE_INVALID = 0xFFFFFFFF,
                PF_TYPE_LITERAL = 0x0,
                PF_TYPE_NAMED_VALUE = 0x1,
                PF_TYPE_RANDOM_UNIFORM = 0x2,
                PF_TYPE_RANDOM_BIASED = 0x3,
                PF_TYPE_COLLECTION_AGE = 0x4,
                PF_TYPE_ENDCAP_AGE = 0x5,
                PF_TYPE_CONTROL_POINT_COMPONENT = 0x6,
                PF_TYPE_CONTROL_POINT_CHANGE_AGE = 0x7,
                PF_TYPE_CONTROL_POINT_SPEED = 0x8,
                PF_TYPE_PARTICLE_DETAIL_LEVEL = 0x9,
                PF_TYPE_CONCURRENT_DEF_COUNT = 0xA,
                PF_TYPE_CLOSEST_CAMERA_DISTANCE = 0xB,
                PF_TYPE_SNAPSHOT_COUNT = 0xC,
                PF_TYPE_SNAPSHOT_CHANGED = 0xD,
                PF_TYPE_CONTROL_POINT_IS_SET = 0xE,
                PF_TYPE_RENDERER_CAMERA_DISTANCE = 0xF,
                PF_TYPE_RENDERER_CAMERA_DOT_PRODUCT = 0x10,
                PF_TYPE_PARTICLE_NOISE = 0x11,
                PF_TYPE_PARTICLE_AGE = 0x12,
                PF_TYPE_PARTICLE_AGE_NORMALIZED = 0x13,
                PF_TYPE_PARTICLE_FLOAT = 0x14,
                PF_TYPE_PARTICLE_INITIAL_FLOAT = 0x15,
                PF_TYPE_PARTICLE_VECTOR_COMPONENT = 0x16,
                PF_TYPE_PARTICLE_INITIAL_VECTOR_COMPONENT = 0x17,
                PF_TYPE_PARTICLE_SPEED = 0x18,
                PF_TYPE_PARTICLE_NUMBER = 0x19,
                PF_TYPE_PARTICLE_NUMBER_NORMALIZED = 0x1A,
                PF_TYPE_PARTICLE_ROPE_SEGMENT = 0x1B,
                PF_TYPE_PARTICLE_ROPE_SEGMENT_NORMALIZED = 0x1C,
                PF_TYPE_PARTICLE_SCREENSPACE_CAMERA_DISTANCE = 0x1D,
                PF_TYPE_PARTICLE_SCREENSPACE_CAMERA_DOT_PRODUCT = 0x1E,
                PF_TYPE_COUNT = 0x1F
            };
            // Alignment: 1
            // Member count: 4
            enum class CNmFloatAngleMathNode__Operation_t : uint8_t {
                ClampTo180 = 0x0,
                ClampTo360 = 0x1,
                FlipHemisphere = 0x2,
                FlipHemisphereNegate = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class VPhysXAggregateData_t__VPhysXFlagEnum_t : uint32_t {
                FLAG_IS_POLYSOUP_GEOMETRY = 0x1,
                FLAG_LEVEL_COLLISION = 0x10,
                FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 0x20
            };
            // Alignment: 1
            // Member count: 5
            enum class CNmRootMotionOverrideNode__OverrideFlags_t : uint8_t {
                AllowMoveX = 0x0,
                AllowMoveY = 0x1,
                AllowMoveZ = 0x2,
                AllowFacingPitch = 0x3,
                ListenForEvents = 0x4
            };
            // Alignment: 1
            // Member count: 23
            enum class NmEasingOperation_t : uint8_t {
                Linear = 0x0,
                InQuad = 0x1,
                OutQuad = 0x2,
                InOutQuad = 0x3,
                InCubic = 0x4,
                OutCubic = 0x5,
                InOutCubic = 0x6,
                InQuart = 0x7,
                OutQuart = 0x8,
                InOutQuart = 0x9,
                InQuint = 0xA,
                OutQuint = 0xB,
                InOutQuint = 0xC,
                InSine = 0xD,
                OutSine = 0xE,
                InOutSine = 0xF,
                InExpo = 0x10,
                OutExpo = 0x11,
                InOutExpo = 0x12,
                InCirc = 0x13,
                OutCirc = 0x14,
                InOutCirc = 0x15,
                None = 0x16
            };
            // Alignment: 4
            // Member count: 5
            enum class EIKEndEffectorRotationFixUpMode : uint32_t {
                None = 0x0,
                MatchTargetOrientation = 0x1,
                LookAtTargetForward = 0x2,
                MaintainParentOrientation = 0x3,
                Count = 0x4
            };
            // Alignment: 4
            // Member count: 2
            enum class MatterialAttributeTagType_t : uint32_t {
                MATERIAL_ATTRIBUTE_TAG_VALUE = 0x0,
                MATERIAL_ATTRIBUTE_TAG_COLOR = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class PFNoiseTurbulence_t : uint32_t {
                PF_NOISE_TURB_NONE = 0x0,
                PF_NOISE_TURB_HIGHLIGHT = 0x1,
                PF_NOISE_TURB_FEEDBACK = 0x2,
                PF_NOISE_TURB_LOOPY = 0x3,
                PF_NOISE_TURB_CONTRAST = 0x4,
                PF_NOISE_TURB_ALTERNATE = 0x5
            };
            // Alignment: 1
            // Member count: 4
            enum class NmTargetWarpAlgorithm_t : uint8_t {
                Lerp = 0x0,
                Hermite = 0x1,
                HermiteFeaturePreserving = 0x2,
                Bezier = 0x3
            };
            // Alignment: 4
            // Member count: 5
            enum class ParticleColorBlendMode_t : uint32_t {
                PARTICLEBLEND_DEFAULT = 0x0,
                PARTICLEBLEND_OVERLAY = 0x1,
                PARTICLEBLEND_DARKEN = 0x2,
                PARTICLEBLEND_LIGHTEN = 0x3,
                PARTICLEBLEND_MULTIPLY = 0x4
            };
            // Alignment: 4
            // Member count: 13
            enum class ParticleColorBlendType_t : uint32_t {
                PARTICLE_COLOR_BLEND_MULTIPLY = 0x0,
                PARTICLE_COLOR_BLEND_MULTIPLY2X = 0x1,
                PARTICLE_COLOR_BLEND_DIVIDE = 0x2,
                PARTICLE_COLOR_BLEND_ADD = 0x3,
                PARTICLE_COLOR_BLEND_SUBTRACT = 0x4,
                PARTICLE_COLOR_BLEND_MOD2X = 0x5,
                PARTICLE_COLOR_BLEND_SCREEN = 0x6,
                PARTICLE_COLOR_BLEND_MAX = 0x7,
                PARTICLE_COLOR_BLEND_MIN = 0x8,
                PARTICLE_COLOR_BLEND_REPLACE = 0x9,
                PARTICLE_COLOR_BLEND_AVERAGE = 0xA,
                PARTICLE_COLOR_BLEND_NEGATE = 0xB,
                PARTICLE_COLOR_BLEND_LUMINANCE = 0xC
            };
            // Alignment: 1
            // Member count: 4
            enum class NmTransitionRuleCondition_t : uint8_t {
                AnyAllowed = 0x0,
                FullyAllowed = 0x1,
                ConditionallyAllowed = 0x2,
                Blocked = 0x3
            };
            // Alignment: 1
            // Member count: 7
            enum class ModelMeshBufferUsage_t : uint8_t {
                MESH_BUFFER_USAGE_NONE = 0x0,
                MESH_BUFFER_USAGE_VB = 0x1,
                MESH_BUFFER_USAGE_IB = 0x2,
                MESH_BUFFER_USAGE_ADJACENCY = 0x4,
                MESH_BUFFER_USAGE_MESHLET_TRIS = 0x8,
                MESH_BUFFER_USAGE_RT_PROXY = 0x10,
                MESH_BUFFER_USAGE_VERTEX_ALBEDO = 0x20
            };
            // Alignment: 4
            // Member count: 2
            enum class NmGraphDebugMode_t : uint32_t {
                Off = 0x0,
                On = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class TargetWarpTimingMethod : uint32_t {
                ReachDestinationOnRootMotionEnd = 0x0,
                ReachDestinationOnWarpTagEnd = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class ScriptedMoveTo_t : uint32_t {
                eWait = 0x0,
                eMoveWithGait = 0x3,
                eTeleport = 0x4,
                eWaitFacing = 0x5,
                eObsoleteBackCompat1 = 0x1,
                eObsoleteBackCompat2 = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class EDemoBoneSelectionMode : uint32_t {
                CaptureAllBones = 0x0,
                CaptureSelectedBones = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class StepPhase : uint32_t {
                StepPhase_OnGround = 0x0,
                StepPhase_InAir = 0x1
            };
            // Alignment: 4
            // Member count: 26
            enum class FlexOpCode_t : uint32_t {
                FLEX_OP_CONST = 0x1,
                FLEX_OP_FETCH1 = 0x2,
                FLEX_OP_FETCH2 = 0x3,
                FLEX_OP_ADD = 0x4,
                FLEX_OP_SUB = 0x5,
                FLEX_OP_MUL = 0x6,
                FLEX_OP_DIV = 0x7,
                FLEX_OP_NEG = 0x8,
                FLEX_OP_EXP = 0x9,
                FLEX_OP_OPEN = 0xA,
                FLEX_OP_CLOSE = 0xB,
                FLEX_OP_COMMA = 0xC,
                FLEX_OP_MAX = 0xD,
                FLEX_OP_MIN = 0xE,
                FLEX_OP_2WAY_0 = 0xF,
                FLEX_OP_2WAY_1 = 0x10,
                FLEX_OP_NWAY = 0x11,
                FLEX_OP_COMBO = 0x12,
                FLEX_OP_DOMINATE = 0x13,
                FLEX_OP_DME_LOWER_EYELID = 0x14,
                FLEX_OP_DME_UPPER_EYELID = 0x15,
                FLEX_OP_SQRT = 0x16,
                FLEX_OP_REMAPVALCLAMPED = 0x17,
                FLEX_OP_SIN = 0x18,
                FLEX_OP_COS = 0x19,
                FLEX_OP_ABS = 0x1A
            };
            // Alignment: 4
            // Member count: 2
            enum class NmCachedValueMode_t : uint32_t {
                OnEntry = 0x0,
                OnExit = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class AnimNodeNetworkMode : uint32_t {
                ServerAuthoritative = 0x0,
                ClientSimulate = 0x1
            };
            // Alignment: 4
            // Member count: 6
            enum class VPhysXBodyPart_t__VPhysXFlagEnum_t : uint32_t {
                FLAG_STATIC = 0x1,
                FLAG_KINEMATIC = 0x2,
                FLAG_JOINT = 0x4,
                FLAG_MASS = 0x8,
                FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 0x10,
                FLAG_DISABLE_CCD = 0x20
            };
            // Alignment: 1
            // Member count: 9
            enum class AnimParamType_t : uint8_t {
                ANIMPARAM_UNKNOWN = 0x0,
                ANIMPARAM_BOOL = 0x1,
                ANIMPARAM_ENUM = 0x2,
                ANIMPARAM_INT = 0x3,
                ANIMPARAM_FLOAT = 0x4,
                ANIMPARAM_VECTOR = 0x5,
                ANIMPARAM_QUATERNION = 0x6,
                ANIMPARAM_GLOBALSYMBOL = 0x7,
                ANIMPARAM_COUNT = 0x8
            };
            // Alignment: 1
            // Member count: 9
            enum class NmEasingFunction_t : uint8_t {
                Linear = 0x0,
                Quad = 0x1,
                Cubic = 0x2,
                Quart = 0x3,
                Quint = 0x4,
                Sine = 0x5,
                Expo = 0x6,
                Circ = 0x7,
                Back = 0x8
            };
            // Alignment: 4
            // Member count: 5
            enum class ParticleModelType_t : uint32_t {
                PM_TYPE_INVALID = 0x0,
                PM_TYPE_NAMED_VALUE_MODEL = 0x1,
                PM_TYPE_NAMED_VALUE_EHANDLE = 0x2,
                PM_TYPE_CONTROL_POINT = 0x3,
                PM_TYPE_COUNT = 0x4
            };
            // Alignment: 4
            // Member count: 3
            enum class IKTargetSource : uint32_t {
                IKTARGETSOURCE_Bone = 0x0,
                IKTARGETSOURCE_AnimgraphParameter = 0x1,
                IKTARGETSOURCE_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 15
            enum class PermModelInfo_t__FlagEnum : uint32_t {
                FLAG_TRANSLUCENT = 0x1,
                FLAG_TRANSLUCENT_TWO_PASS = 0x2,
                FLAG_MODEL_IS_RUNTIME_COMBINED = 0x4,
                FLAG_SOURCE1_IMPORT = 0x8,
                FLAG_MODEL_PART_CHILD = 0x10,
                FLAG_NAV_GEN_NONE = 0x20,
                FLAG_NAV_GEN_HULL = 0x40,
                FLAG_NO_FORCED_FADE = 0x800,
                FLAG_HAS_SKINNED_MESHES = 0x400,
                FLAG_DO_NOT_CAST_SHADOWS = 0x20000,
                FLAG_FORCE_PHONEME_CROSSFADE = 0x1000,
                FLAG_NO_ANIM_EVENTS = 0x100000,
                FLAG_ANIMATION_DRIVEN_FLEXES = 0x200000,
                FLAG_IMPLICIT_BIND_POSE_SEQUENCE = 0x400000,
                FLAG_MODEL_DOC = 0x800000
            };
            // Alignment: 1
            // Member count: 12
            enum class CNmFloatMathNode__Operator_t : uint8_t {
                Add = 0x0,
                Sub = 0x1,
                Mul = 0x2,
                Div = 0x3,
                Mod = 0x4,
                Abs = 0x5,
                Negate = 0x6,
                Floor = 0x7,
                Ceiling = 0x8,
                IntegerPart = 0x9,
                FractionalPart = 0xA,
                InverseFractionalPart = 0xB
            };
            // Alignment: 1
            // Member count: 2
            enum class CNmSyncEventIndexConditionNode__TriggerMode_t : uint8_t {
                ExactlyAtEventIndex = 0x0,
                GreaterThanEqualToEventIndex = 0x1
            };
            // Alignment: 4
            // Member count: 5
            enum class ParticleFloatRoundType_t : uint32_t {
                PF_ROUND_TYPE_INVALID = 0xFFFFFFFF,
                PF_ROUND_TYPE_NEAREST = 0x0,
                PF_ROUND_TYPE_FLOOR = 0x1,
                PF_ROUND_TYPE_CEIL = 0x2,
                PF_ROUND_TYPE_COUNT = 0x3
            };
            // Alignment: 4
            // Member count: 4
            enum class PFNoiseType_t : uint32_t {
                PF_NOISE_TYPE_PERLIN = 0x0,
                PF_NOISE_TYPE_SIMPLEX = 0x1,
                PF_NOISE_TYPE_WORLEY = 0x2,
                PF_NOISE_TYPE_CURL = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class ParticleDirectionNoiseType_t : uint32_t {
                PARTICLE_DIR_NOISE_PERLIN = 0x0,
                PARTICLE_DIR_NOISE_CURL = 0x1,
                PARTICLE_DIR_NOISE_WORLEY_BASIC = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class AnimParamNetworkSetting : uint32_t {
                Auto = 0x0,
                AlwaysNetwork = 0x1,
                NeverNetwork = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class MorphFlexControllerRemapType_t : uint32_t {
                MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0x0,
                MORPH_FLEXCONTROLLER_REMAP_2WAY = 0x1,
                MORPH_FLEXCONTROLLER_REMAP_NWAY = 0x2,
                MORPH_FLEXCONTROLLER_REMAP_EYELID = 0x3
            };
            // Alignment: 4
            // Member count: 8
            enum class MeshDrawPrimitiveFlags_t : uint32_t {
                MESH_DRAW_FLAGS_NONE = 0x0,
                MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH = 0x1,
                MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT = 0x2,
                MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL = 0x8,
                MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING = 0x10,
                MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING = 0x20,
                MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS = 0x40,
                MESH_DRAW_FLAGS_DRAW_LAST = 0x80
            };
            // Alignment: 4
            // Member count: 2
            enum class TargetWarpAngleMode_t : uint32_t {
                eFacingHeading = 0x0,
                eMoveHeading = 0x1
            };
            // Alignment: 1
            // Member count: 2
            enum class NmIKBlendMode_t : uint8_t {
                Effector = 0x0,
                Pose = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class ModelBoneFlexComponent_t : uint32_t {
                MODEL_BONE_FLEX_INVALID = 0xFFFFFFFF,
                MODEL_BONE_FLEX_TX = 0x0,
                MODEL_BONE_FLEX_TY = 0x1,
                MODEL_BONE_FLEX_TZ = 0x2
            };
            // Alignment: 1
            // Member count: 2
            enum class CNmStateNode__TimedEvent_t__Comparison_t : uint8_t {
                LessThanEqual = 0x0,
                GreaterThanEqual = 0x1
            };
            // Alignment: 1
            // Member count: 3
            enum class PoseType_t : uint8_t {
                POSETYPE_STATIC = 0x0,
                POSETYPE_DYNAMIC = 0x1,
                POSETYPE_INVALID = 0xFF
            };
            // Alignment: 1
            // Member count: 2
            enum class CNmRootMotionData__SamplingMode_t : uint8_t {
                Delta = 0x0,
                WorldSpace = 0x1
            };
            // Alignment: 1
            // Member count: 9
            enum class NmEventConditionRules_t : uint8_t {
                LimitSearchToSourceState = 0x0,
                IgnoreInactiveEvents = 0x1,
                PreferHighestWeight = 0x2,
                PreferHighestProgress = 0x3,
                OperatorOr = 0x4,
                OperatorAnd = 0x5,
                SearchOnlyGraphEvents = 0x6,
                SearchOnlyAnimEvents = 0x7,
                SearchBothGraphAndAnimEvents = 0x8
            };
            // Alignment: 4
            // Member count: 3
            enum class AnimationType_t : uint32_t {
                ANIMATION_TYPE_FIXED_RATE = 0x0,
                ANIMATION_TYPE_FIT_LIFETIME = 0x1,
                ANIMATION_TYPE_MANUAL_FRAMES = 0x2
            };
            // Alignment: 4
            // Member count: 37
            enum class AnimValueSource : uint32_t {
                MoveHeading = 0x0,
                MoveSpeed = 0x1,
                ForwardSpeed = 0x2,
                StrafeSpeed = 0x3,
                FacingHeading = 0x4,
                LookHeading = 0x5,
                LookHeadingNormalized = 0x6,
                LookPitch = 0x7,
                LookDistance = 0x8,
                Parameter = 0x9,
                WayPointHeading = 0xA,
                WayPointDistance = 0xB,
                BoundaryRadius = 0xC,
                TargetMoveHeading = 0xD,
                TargetMoveSpeed = 0xE,
                AccelerationHeading = 0xF,
                AccelerationSpeed = 0x10,
                SlopeHeading = 0x11,
                SlopeAngle = 0x12,
                SlopePitch = 0x13,
                SlopeYaw = 0x14,
                GoalDistance = 0x15,
                AccelerationLeftRight = 0x16,
                AccelerationFrontBack = 0x17,
                RootMotionSpeed = 0x18,
                RootMotionTurnSpeed = 0x19,
                MoveHeadingRelativeToLookHeading = 0x1A,
                MaxMoveSpeed = 0x1B,
                FingerCurl_Thumb = 0x1C,
                FingerCurl_Index = 0x1D,
                FingerCurl_Middle = 0x1E,
                FingerCurl_Ring = 0x1F,
                FingerCurl_Pinky = 0x20,
                FingerSplay_Thumb_Index = 0x21,
                FingerSplay_Index_Middle = 0x22,
                FingerSplay_Middle_Ring = 0x23,
                FingerSplay_Ring_Pinky = 0x24
            };
            // Alignment: 1
            // Member count: 4
            enum class CNmTimeConditionNode__Operator_t : uint8_t {
                LessThan = 0x0,
                LessThanEqual = 0x1,
                GreaterThan = 0x2,
                GreaterThanEqual = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class LinearRootMotionBlendMode_t : uint32_t {
                LERP = 0x0,
                NLERP = 0x1,
                SLERP = 0x2
            };
            // Alignment: 4
            // Member count: 1
            enum class RagdollPoseControl : uint32_t {
                Absolute = 0x0
            };
            // Alignment: 4
            // Member count: 6
            enum class IKSolverType : uint32_t {
                IKSOLVER_Perlin = 0x0,
                IKSOLVER_TwoBone = 0x1,
                IKSOLVER_Fabrik = 0x2,
                IKSOLVER_DogLeg3Bone = 0x3,
                IKSOLVER_CCD = 0x4,
                IKSOLVER_COUNT = 0x5
            };
            // Alignment: 4
            // Member count: 2
            enum class TargetWarpCorrectionMethod : uint32_t {
                ScaleMotion = 0x0,
                AddCorrectionDelta = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class TargetSelectorAngleMode_t : uint32_t {
                eFacingHeading = 0x0,
                eMoveHeading = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class Blend2DMode : uint32_t {
                Blend2DMode_General = 0x0,
                Blend2DMode_Directional = 0x1
            };
            // Alignment: 1
            // Member count: 3
            enum class HandshakeTagState_t : uint8_t {
                eInactive = 0x0,
                eActive = 0x1,
                eMomentarilyInactive = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class ChoiceChangeMethod : uint32_t {
                OnReset = 0x0,
                OnCycleEnd = 0x1,
                OnResetOrCycleEnd = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class ChoiceBlendMethod : uint32_t {
                SingleBlendTime = 0x0,
                PerChoiceBlendTimes = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class VPhysXConstraintParams_t__EnumFlags0_t : uint32_t {
                FLAG0_SHIFT_INTERPENETRATE = 0x0,
                FLAG0_SHIFT_CONSTRAIN = 0x1,
                FLAG0_SHIFT_BREAKABLE_FORCE = 0x2,
                FLAG0_SHIFT_BREAKABLE_TORQUE = 0x3
            };
            // Alignment: 4
            // Member count: 9
            enum class ParticleFloatMapType_t : uint32_t {
                PF_MAP_TYPE_INVALID = 0xFFFFFFFF,
                PF_MAP_TYPE_DIRECT = 0x0,
                PF_MAP_TYPE_MULT = 0x1,
                PF_MAP_TYPE_REMAP = 0x2,
                PF_MAP_TYPE_REMAP_BIASED = 0x3,
                PF_MAP_TYPE_CURVE = 0x4,
                PF_MAP_TYPE_NOTCHED = 0x5,
                PF_MAP_TYPE_ROUND = 0x6,
                PF_MAP_TYPE_COUNT = 0x7
            };
            // Alignment: 4
            // Member count: 5
            enum class AnimParamVectorType_t : uint32_t {
                ANIMPARAM_VECTOR_TYPE_NONE = 0x0,
                ANIMPARAM_VECTOR_TYPE_POSITION_WS = 0x1,
                ANIMPARAM_VECTOR_TYPE_POSITION_LS = 0x2,
                ANIMPARAM_VECTOR_TYPE_DIRECTION_WS = 0x3,
                ANIMPARAM_VECTOR_TYPE_DIRECTION_LS = 0x4
            };
            // Alignment: 1
            // Member count: 3
            enum class CNmCurrentSyncEventNode__InfoType_t : uint8_t {
                IndexAndPercentage = 0x0,
                IndexOnly = 0x1,
                PercentageOnly = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class BlendKeyType : uint32_t {
                BlendKey_UserValue = 0x0,
                BlendKey_Velocity = 0x1,
                BlendKey_Distance = 0x2,
                BlendKey_RemainingDistance = 0x3
            };
            // Alignment: 4
            // Member count: 5
            enum class StateActionBehavior : uint32_t {
                STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0x0,
                STATETAGBEHAVIOR_FIRE_ON_ENTER = 0x1,
                STATETAGBEHAVIOR_FIRE_ON_EXIT = 0x2,
                STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 0x3,
                STATETAGBEHAVIOR_ACTIVE_WHILE_FULLY_BLENDED = 0x4
            };
            // Alignment: 1
            // Member count: 4
            enum class NmRootMotionBlendMode_t : uint8_t {
                Blend = 0x0,
                Additive = 0x1,
                IgnoreSource = 0x2,
                IgnoreTarget = 0x3
            };
            // Alignment: 1
            // Member count: 7
            enum class NmFootPhaseCondition_t : uint8_t {
                LeftFootDown = 0x0,
                LeftFootPassing = 0x1,
                LeftPhase = 0x4,
                RightFootDown = 0x2,
                RightFootPassing = 0x3,
                RightPhase = 0x5,
                None = 0x6
            };
            // Alignment: 4
            // Member count: 22
            enum class ModelSkeletonData_t__BoneFlags_t : uint32_t {
                FLAG_NO_BONE_FLAGS = 0x0,
                FLAG_BONEFLEXDRIVER = 0x4,
                FLAG_CLOTH = 0x8,
                FLAG_PHYSICS = 0x10,
                FLAG_ATTACHMENT = 0x20,
                FLAG_ANIMATION = 0x40,
                FLAG_MESH = 0x80,
                FLAG_HITBOX = 0x100,
                FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
                FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
                FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
                FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
                FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
                FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
                FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
                FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
                FLAG_BONE_MERGE_READ = 0x40000,
                FLAG_BONE_MERGE_WRITE = 0x80000,
                FLAG_ALL_BONE_FLAGS = 0xFFFFF,
                BLEND_PREALIGNED = 0x100000,
                FLAG_RIGIDLENGTH = 0x200000,
                FLAG_PROCEDURAL = 0x400000
            };
            // Alignment: 4
            // Member count: 3
            enum class GPUParticleCollisionMode_t : uint32_t {
                PARTICLE_GPU_COLLISION_MODE_RT = 0x0,
                PARTICLE_GPU_COLLISION_MODE_DEPTH = 0x1,
                PARTICLE_GPU_COLLISION_MODE_HYBRID = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class MorphBundleType_t : uint32_t {
                MORPH_BUNDLE_TYPE_NONE = 0x0,
                MORPH_BUNDLE_TYPE_POSITION_SPEED = 0x1,
                MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 0x2,
                MORPH_BUNDLE_TYPE_COUNT = 0x3
            };
            // Alignment: 1
            // Member count: 2
            enum class CNmIDComparisonNode__Comparison_t : uint8_t {
                Matches = 0x0,
                DoesntMatch = 0x1
            };
            // Alignment: 1
            // Member count: 3
            enum class NmPoseBlendMode_t : uint8_t {
                Overlay = 0x0,
                Additive = 0x1,
                ModelSpace = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class ParticleFloatInputMode_t : uint32_t {
                PF_INPUT_MODE_INVALID = 0xFFFFFFFF,
                PF_INPUT_MODE_CLAMPED = 0x0,
                PF_INPUT_MODE_LOOPED = 0x1,
                PF_INPUT_MODE_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 5
            enum class ResetCycleOption : uint32_t {
                Beginning = 0x0,
                SameCycleAsSource = 0x1,
                InverseSourceCycle = 0x2,
                FixedValue = 0x3,
                SameTimeAsSource = 0x4
            };
            // Alignment: 1
            // Member count: 6
            enum class CNmVectorInfoNode__Info_t : uint8_t {
                X = 0x0,
                Y = 0x1,
                Z = 0x2,
                Length = 0x3,
                AngleHorizontal = 0x4,
                AngleVertical = 0x5
            };
            // Alignment: 4
            // Member count: 4
            enum class IKChannelMode : uint32_t {
                TwoBone = 0x0,
                TwoBone_Translate = 0x1,
                OneBone = 0x2,
                OneBone_Translate = 0x3
            };
            // Alignment: 1
            // Member count: 9
            enum class NmGraphValueType_t : uint8_t {
                Unknown = 0x0,
                Bool = 0x1,
                ID = 0x2,
                Float = 0x3,
                Vector = 0x4,
                Target = 0x5,
                BoneMask = 0x6,
                Pose = 0x7,
                Special = 0x8
            };
            // Alignment: 4
            // Member count: 4
            enum class ParticleFloatRandomMode_t : uint32_t {
                PF_RANDOM_MODE_INVALID = 0xFFFFFFFF,
                PF_RANDOM_MODE_CONSTANT = 0x0,
                PF_RANDOM_MODE_VARYING = 0x1,
                PF_RANDOM_MODE_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class PFNoiseModifier_t : uint32_t {
                PF_NOISE_MODIFIER_NONE = 0x0,
                PF_NOISE_MODIFIER_LINES = 0x1,
                PF_NOISE_MODIFIER_CLUMPS = 0x2,
                PF_NOISE_MODIFIER_RINGS = 0x3
            };
            // Alignment: 4
            // Member count: 21
            enum class ParticleVecType_t : uint32_t {
                PVEC_TYPE_INVALID = 0xFFFFFFFF,
                PVEC_TYPE_LITERAL = 0x0,
                PVEC_TYPE_LITERAL_COLOR = 0x1,
                PVEC_TYPE_NAMED_VALUE = 0x2,
                PVEC_TYPE_PARTICLE_VECTOR = 0x3,
                PVEC_TYPE_PARTICLE_INITIAL_VECTOR = 0x4,
                PVEC_TYPE_PARTICLE_VELOCITY = 0x5,
                PVEC_TYPE_PARTICLE_GRAVITY = 0x6,
                PVEC_TYPE_CP_VALUE = 0x7,
                PVEC_TYPE_CP_RELATIVE_POSITION = 0x8,
                PVEC_TYPE_CP_RELATIVE_DIR = 0x9,
                PVEC_TYPE_CP_RELATIVE_RANDOM_DIR = 0xA,
                PVEC_TYPE_FLOAT_COMPONENTS = 0xB,
                PVEC_TYPE_FLOAT_INTERP_CLAMPED = 0xC,
                PVEC_TYPE_FLOAT_INTERP_OPEN = 0xD,
                PVEC_TYPE_FLOAT_INTERP_GRADIENT = 0xE,
                PVEC_TYPE_RANDOM_UNIFORM = 0xF,
                PVEC_TYPE_RANDOM_UNIFORM_OFFSET = 0x10,
                PVEC_TYPE_CP_DELTA = 0x11,
                PVEC_TYPE_CLOSEST_CAMERA_POSITION = 0x12,
                PVEC_TYPE_COUNT = 0x13
            };
            // Alignment: 1
            // Member count: 5
            enum class NmFootPhase_t : uint8_t {
                LeftFootDown = 0x0,
                RightFootPassing = 0x1,
                RightFootDown = 0x2,
                LeftFootPassing = 0x3,
                None = 0x4
            };
            // Alignment: 4
            // Member count: 8
            enum class CNmTargetInfoNode__Info_t : uint32_t {
                AngleHorizontal = 0x0,
                AngleVertical = 0x1,
                Distance = 0x2,
                DistanceHorizontalOnly = 0x3,
                DistanceVerticalOnly = 0x4,
                DeltaOrientationX = 0x5,
                DeltaOrientationY = 0x6,
                DeltaOrientationZ = 0x7
            };
            // Alignment: 4
            // Member count: 3
            enum class FootstepLandedFootSoundType_t : uint32_t {
                FOOTSOUND_Left = 0x0,
                FOOTSOUND_Right = 0x1,
                FOOTSOUND_UseOverrideSound = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class FootLockSubVisualization : uint32_t {
                FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0x0,
                FOOTLOCKSUBVISUALIZATION_IKSolve = 0x1
            };
            // Alignment: 4
            // Member count: 5
            enum class CNmSoundEvent__Position_t : uint32_t {
                None = 0x0,
                World = 0x1,
                EntityPos = 0x2,
                EntityEyePos = 0x3,
                EntityAttachment = 0x4
            };
            // Alignment: 1
            // Member count: 4
            enum class FootstepJumpPhase_t : uint8_t {
                Unknown = 0x0,
                NotJumping = 0x1,
                Jumping = 0x2,
                Landing = 0x4
            };
            // Alignment: 4
            // Member count: 2
            enum class NmFrameSnapEventMode_t : uint32_t {
                Floor = 0x0,
                Round = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class FootPinningTimingSource : uint32_t {
                FootMotion = 0x0,
                Tag = 0x1,
                Parameter = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class DampingSpeedFunction : uint32_t {
                NoDamping = 0x0,
                Constant = 0x1,
                Spring = 0x2,
                AsymmetricSpring = 0x3
            };
            // Alignment: 4
            // Member count: 6
            enum class AnimationProcessingType_t : uint32_t {
                ANIMATION_PROCESSING_SERVER_SIMULATION = 0x0,
                ANIMATION_PROCESSING_CLIENT_SIMULATION = 0x1,
                ANIMATION_PROCESSING_CLIENT_PREDICTION = 0x2,
                ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 0x3,
                ANIMATION_PROCESSING_CLIENT_RENDER = 0x4,
                ANIMATION_PROCESSING_MAX = 0x5
            };
            // Alignment: 4
            // Member count: 3
            enum class JiggleBoneSimSpace : uint32_t {
                SimSpace_Local = 0x0,
                SimSpace_Model = 0x1,
                SimSpace_World = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class StanceOverrideMode : uint32_t {
                Sequence = 0x0,
                Node = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class IkEndEffectorType : uint32_t {
                IkEndEffector_Attachment = 0x0,
                IkEndEffector_Bone = 0x1
            };
            // Alignment: 2
            // Member count: 3
            enum class AnimScriptType : uint16_t {
                ANIMSCRIPT_TYPE_INVALID = 0xFFFF,
                ANIMSCRIPT_FUSE_GENERAL = 0x0,
                ANIMSCRIPT_FUSE_STATEMACHINE = 0x1
            };
            // Alignment: 1
            // Member count: 3
            enum class CNmTimeConditionNode__ComparisonType_t : uint8_t {
                PercentageThroughState = 0x0,
                PercentageThroughSyncEvent = 0x1,
                ElapsedTime = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class SeqPoseSetting_t : uint32_t {
                SEQ_POSE_SETTING_CONSTANT = 0x0,
                SEQ_POSE_SETTING_ROTATION = 0x1,
                SEQ_POSE_SETTING_POSITION = 0x2,
                SEQ_POSE_SETTING_VELOCITY = 0x3
            };
            // Alignment: 4
            // Member count: 13
            enum class AnimParamButton_t : uint32_t {
                ANIMPARAM_BUTTON_NONE = 0x0,
                ANIMPARAM_BUTTON_DPAD_UP = 0x1,
                ANIMPARAM_BUTTON_DPAD_RIGHT = 0x2,
                ANIMPARAM_BUTTON_DPAD_DOWN = 0x3,
                ANIMPARAM_BUTTON_DPAD_LEFT = 0x4,
                ANIMPARAM_BUTTON_A = 0x5,
                ANIMPARAM_BUTTON_B = 0x6,
                ANIMPARAM_BUTTON_X = 0x7,
                ANIMPARAM_BUTTON_Y = 0x8,
                ANIMPARAM_BUTTON_LEFT_SHOULDER = 0x9,
                ANIMPARAM_BUTTON_RIGHT_SHOULDER = 0xA,
                ANIMPARAM_BUTTON_LTRIGGER = 0xB,
                ANIMPARAM_BUTTON_RTRIGGER = 0xC
            };
            // Alignment: 4
            // Member count: 3
            enum class SelectorTagBehavior_t : uint32_t {
                SelectorTagBehavior_OnWhileCurrent = 0x0,
                SelectorTagBehavior_OffWhenFinished = 0x1,
                SelectorTagBehavior_OffBeforeFinished = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class HandshakeTagType_t : uint32_t {
                eInvalid = 0xFFFFFFFF,
                eTask = 0x0,
                eMovement = 0x1,
                eCount = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class OrientationWarpTargetOffsetMode_t : uint32_t {
                eLiteralValue = 0x0,
                eParameter = 0x1,
                eAnimationMovementHeading = 0x2,
                eAnimationMovementHeadingAtEnd = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class OrientationWarpMode_t : uint32_t {
                eInvalid = 0x0,
                eAngle = 0x1,
                eWorldPosition = 0x2
            };
            // Alignment: 4
            // Member count: 5
            enum class ParticleTransformType_t : uint32_t {
                PT_TYPE_INVALID = 0x0,
                PT_TYPE_NAMED_VALUE = 0x1,
                PT_TYPE_CONTROL_POINT = 0x2,
                PT_TYPE_CONTROL_POINT_RANGE = 0x3,
                PT_TYPE_COUNT = 0x4
            };
            // Alignment: 4
            // Member count: 18
            enum class ParticleAttachment_t : uint32_t {
                PATTACH_INVALID = 0xFFFFFFFF,
                PATTACH_ABSORIGIN = 0x0,
                PATTACH_ABSORIGIN_FOLLOW = 0x1,
                PATTACH_CUSTOMORIGIN = 0x2,
                PATTACH_CUSTOMORIGIN_FOLLOW = 0x3,
                PATTACH_POINT = 0x4,
                PATTACH_POINT_FOLLOW = 0x5,
                PATTACH_EYES_FOLLOW = 0x6,
                PATTACH_OVERHEAD_FOLLOW = 0x7,
                PATTACH_WORLDORIGIN = 0x8,
                PATTACH_ROOTBONE_FOLLOW = 0x9,
                PATTACH_RENDERORIGIN_FOLLOW = 0xA,
                PATTACH_MAIN_VIEW = 0xB,
                PATTACH_WATERWAKE = 0xC,
                PATTACH_CENTER_FOLLOW = 0xD,
                PATTACH_CUSTOM_GAME_STATE_1 = 0xE,
                PATTACH_HEALTHBAR = 0xF,
                MAX_PATTACH_TYPES = 0x10
            };
            // Alignment: 4
            // Member count: 4
            enum class CNmEventTargetEntity_t : uint32_t {
                Self = 0x0,
                Weapon = 0x1,
                HeldItem = 0x2,
                Custom = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class FieldNetworkOption : uint32_t {
                Auto = 0x0,
                ForceEnable = 0x1,
                ForceDisable = 0x2
            };
            // Alignment: 1
            // Member count: 6
            enum class NmGraphEventTypeCondition_t : uint8_t {
                Entry = 0x0,
                FullyInState = 0x1,
                Exit = 0x2,
                Timed = 0x3,
                Generic = 0x4,
                Any = 0x5
            };
            // Alignment: 1
            // Member count: 10
            enum class CNmTransitionNode__TransitionOptions_t : uint8_t {
                None = 0x0,
                ClampDuration = 0x1,
                Synchronized = 0x2,
                MatchSourceTime = 0x3,
                MatchSyncEventIndex = 0x4,
                MatchSyncEventID = 0x5,
                MatchSyncEventPercentage = 0x6,
                PreferClosestSyncEventID = 0x7,
                MatchTimeInSeconds = 0x8,
                OffsetTimeInSeconds = 0x9
            };
            // Alignment: 1
            // Member count: 5
            enum class CNmFloatComparisonNode__Comparison_t : uint8_t {
                GreaterThanEqual = 0x0,
                LessThanEqual = 0x1,
                NearEqual = 0x2,
                GreaterThan = 0x3,
                LessThan = 0x4
            };
            // Alignment: 4
            // Member count: 3
            enum class VPhysXJoint_t__Flags_t : uint32_t {
                JOINT_FLAGS_NONE = 0x0,
                JOINT_FLAGS_BODY1_FIXED = 0x1,
                JOINT_FLAGS_USE_BLOCK_SOLVER = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class ScriptedHeldWeaponBehavior_t : uint32_t {
                eInvalid = 0xFFFFFFFF,
                eHolster = 0x0,
                eDeploy = 0x1,
                eDrop = 0x2
            };
            // Alignment: 1
            // Member count: 3
            enum class VelocityMetricMode : uint8_t {
                DirectionOnly = 0x0,
                MagnitudeOnly = 0x1,
                DirectionAndMagnitude = 0x2
            };
            // Alignment: 1
            // Member count: 5
            enum class FacingMode : uint8_t {
                FacingMode_Invalid = 0x0,
                FacingMode_Manual = 0x1,
                FacingMode_Path = 0x2,
                FacingMode_LookTarget = 0x3,
                FacingMode_ManualPosition = 0x4
            };
            // Alignment: 1
            // Member count: 3
            enum class VertexAlbedoFormat_t : uint8_t {
                VERTEX_ALBEDO_NONE = 0x0,
                VERTEX_ALBEDO_8888 = 0x1,
                VERTEX_ALBEDO_565 = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class AimMatrixBlendMode : uint32_t {
                AimMatrixBlendMode_None = 0x0,
                AimMatrixBlendMode_Additive = 0x1,
                AimMatrixBlendMode_ModelSpaceAdditive = 0x2,
                AimMatrixBlendMode_BoneMask = 0x3
            };
            // Alignment: 4
            // Member count: 7
            enum class AnimationSnapshotType_t : uint32_t {
                ANIMATION_SNAPSHOT_SERVER_SIMULATION = 0x0,
                ANIMATION_SNAPSHOT_CLIENT_SIMULATION = 0x1,
                ANIMATION_SNAPSHOT_CLIENT_PREDICTION = 0x2,
                ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 0x3,
                ANIMATION_SNAPSHOT_CLIENT_RENDER = 0x4,
                ANIMATION_SNAPSHOT_FINAL_COMPOSITE = 0x5,
                ANIMATION_SNAPSHOT_MAX = 0x6
            };
            // Alignment: 1
            // Member count: 5
            enum class NmTargetWarpRule_t : uint8_t {
                WarpXY = 0x0,
                WarpZ = 0x1,
                WarpXYZ = 0x2,
                RotationOnly = 0x3,
                FixedSection = 0x4
            };
            // Alignment: 4
            // Member count: 8
            enum class FootFallTagFoot_t : uint32_t {
                FOOT1 = 0x0,
                FOOT2 = 0x1,
                FOOT3 = 0x2,
                FOOT4 = 0x3,
                FOOT5 = 0x4,
                FOOT6 = 0x5,
                FOOT7 = 0x6,
                FOOT8 = 0x7
            };
            // Alignment: 4
            // Member count: 4
            enum class ChoiceMethod : uint32_t {
                WeightedRandom = 0x0,
                WeightedRandomNoRepeat = 0x1,
                Iterate = 0x2,
                IterateRandom = 0x3
            };
            // Alignment: 4
            // Member count: 14
            enum class AnimVectorSource : uint32_t {
                MoveDirection = 0x0,
                FacingPosition = 0x1,
                LookDirection = 0x2,
                VectorParameter = 0x3,
                WayPointDirection = 0x4,
                Acceleration = 0x5,
                SlopeNormal = 0x6,
                SlopeNormal_WorldSpace = 0x7,
                LookTarget = 0x8,
                LookTarget_WorldSpace = 0x9,
                WayPointPosition = 0xA,
                GoalPosition = 0xB,
                RootMotionVelocity = 0xC,
                ManualTarget_WorldSpace = 0xD
            };
            // Alignment: 4
            // Member count: 4
            enum class IkTargetType : uint32_t {
                IkTarget_Attachment = 0x0,
                IkTarget_Bone = 0x1,
                IkTarget_Parameter_ModelSpace = 0x2,
                IkTarget_Parameter_WorldSpace = 0x3
            };
            // Alignment: 1
            // Member count: 3
            enum class RenderMeshSlotType_t : uint8_t {
                RENDERMESH_SLOT_INVALID = 0xFF,
                RENDERMESH_SLOT_PER_VERTEX = 0x0,
                RENDERMESH_SLOT_PER_INSTANCE = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class BoneMaskBlendSpace : uint32_t {
                BlendSpace_Parent = 0x0,
                BlendSpace_Model = 0x1,
                BlendSpace_Model_RotationOnly = 0x2,
                BlendSpace_Model_TranslationOnly = 0x3
            };
            // Alignment: 4
            // Member count: 10
            enum class MovementCapability_t : uint32_t {
                eStrafe = 0x0,
                eIdleTurn = 0x1,
                eStart = 0x2,
                eStop = 0x3,
                eInstantStop = 0x4,
                eShuffle = 0x5,
                ePlantedTurn = 0x6,
                eUseStartAsPlantedTurn = 0x7,
                eLean = 0x8,
                eCount = 0x9
            };
            // Alignment: 4
            // Member count: 5
            enum class ModelConfigAttachmentType_t : uint32_t {
                MODEL_CONFIG_ATTACHMENT_INVALID = 0xFFFFFFFF,
                MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0x0,
                MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 0x1,
                MODEL_CONFIG_ATTACHMENT_BONEMERGE = 0x2,
                MODEL_CONFIG_ATTACHMENT_COUNT = 0x3
            };
            // Alignment: 4
            // Member count: 2
            enum class BinaryNodeChildOption : uint32_t {
                Child1 = 0x0,
                Child2 = 0x1
            };
            // Alignment: 4
            // Member count: 5
            enum class NPCPhysicsHullType_t : uint32_t {
                eInvalid = 0x0,
                eGroundCapsule = 0x1,
                eCenteredCapsule = 0x2,
                eGenericCapsule = 0x3,
                eGroundBox = 0x4
            };
            // Alignment: 4
            // Member count: 2
            enum class JumpCorrectionMethod : uint32_t {
                ScaleMotion = 0x0,
                AddCorrectionDelta = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class MoodType_t : uint32_t {
                eMoodType_Head = 0x0,
                eMoodType_Body = 0x1
            };
            // Parent: None
            // Field count: 0
            namespace CPulseCell_WaitForCursorsWithTag {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_Base {
            }
            // Parent: None
            // Field count: 0
            namespace CPulse_ResumePoint {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_PickBestOutflowSelector {
            }
            // Parent: None
            // Field count: 0
            namespace CParticleBindingRealPulse {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_WaitForObservable {
            }
            // Parent: None
            // Field count: 0
            namespace CPulse_OutflowConnection {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseGraphDef {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_FireCursors {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_Timeline__TimelineEvent_t {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_IntervalTimer__CursorState_t {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_BaseRequirement {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_BaseState {
            }
            // Parent: None
            // Field count: 0
            namespace OutflowWithRequirements_t {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_IsRequirementValid {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_Value_Gradient {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCursorFuncs {
            }
            // Parent: None
            // Field count: 0
            namespace PulseNodeDynamicOutflows_t__DynamicOutflow_t {
            }
            // Parent: None
            // Field count: 0
            namespace CBasePulseGraphInstance {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Inflow_GraphHook {
            }
            // Parent: None
            // Field count: 0
            namespace SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_Inflow_BaseEntrypoint {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_WaitForCursorsWithTagBase {
            }
            // Parent: None
            // Field count: 0
            namespace CPulse_InvokeBinding {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_IntervalTimer {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseTestScriptLib {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_BaseLerp {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_Value_Curve {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Inflow_EventHandler {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_BaseFlow {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_Outflow_CycleShuffled__InstanceState_t {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_BaseLerp__CursorState_t {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseArraylib {
            }
            // Parent: None
            // Field count: 0
            namespace SignatureOutflow_Continue {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_Timeline {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_Inflow_EntOutputHandler {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_Outflow_CycleOrdered__InstanceState_t {
            }
            // Parent: None
            // Field count: 0
            namespace CParticleCollectionBindingInstance {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_LimitCount__InstanceState_t {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Step_DebugLog {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_BaseYieldingInflow {
            }
            // Parent: None
            // Field count: 0
            namespace PulseNodeDynamicOutflows_t {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_IsRequirementValid__Criteria_t {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_Inflow_ObservableVariableListener {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Outflow_CycleOrdered {
            }
            // Parent: None
            // Field count: 0
            namespace PulseSelectorOutflowList_t {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Inflow_Wait {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Outflow_CycleShuffled {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_Inflow_Method {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_BaseValue {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_BooleanSwitchState {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Inflow_Yield {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseMathlib {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_Unknown {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Outflow_CycleRandom {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_Step_PublicOutput {
            }
            // Parent: None
            // Field count: 0
            namespace CPulse_BlackboardReference {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_Value_RandomInt {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimationLayer {
            }
            // Parent: None
            // Field count: 0
            namespace CPulse_CallInfo {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_InlineNodeSkipSelector {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_LimitCount {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_Step_CallExternalMethod {
            }
            // Parent: None
            // Field count: 0
            namespace PulseObservableBoolExpression_t {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_LimitCount__Criteria_t {
            }
            // Parent: pulse_runtime_lib
            // Field count: 0
            namespace CPulseCell_CursorQueue {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseCell_Value_RandomFloat {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseExecCursor {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimFrameBlockAnim {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CZeroPoseUpdateNode {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CSlowDownOnSlopesUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace COrientationWarpUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimParameterBase {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CSequenceFinishedAnimTag {
            }
            // Parent: None
            // Field count: 0
            namespace CSceneObjectData {
            }
            // Parent: modellib
            // Field count: 0
            namespace CFootCycle {
            }
            // Parent: None
            // Field count: 0
            namespace CParticleModelInput {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CInputStreamUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CIntAnimParameter {
            }
            // Parent: None
            // Field count: 0
            namespace CNmParameterizedBlendNode__CDefinition {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmScaleTask {
            }
            // Parent: None
            // Field count: 0
            namespace PerTickSettings_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFrameSnapEvent {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimNodePath {
            }
            // Parent: None
            // Field count: 0
            namespace AnimNodeOutputID {
            }
            // Parent: None
            // Field count: 0
            namespace CNmSyncTrack {
            }
            // Parent: None
            // Field count: 0
            namespace CSeqBoneMaskList {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimEncodedFrames {
            }
            // Parent: None
            // Field count: 0
            namespace SampleCode {
            }
            // Parent: None
            // Field count: 0
            namespace CCachedPose {
            }
            // Parent: None
            // Field count: 0
            namespace CNmTransitionEventConditionNode__CDefinition {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CTaskStatusAnimTag {
            }
            // Parent: None
            // Field count: 0
            namespace CStateNodeInstanceData {
            }
            // Parent: None
            // Field count: 0
            namespace CMotionGraphConfig {
            }
            // Parent: None
            // Field count: 0
            namespace CMotionSearchNode {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimActivity {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimScriptManager {
            }
            // Parent: None
            // Field count: 0
            namespace AnimationDecodeDebugDumpElement_t {
            }
            // Parent: None
            // Field count: 0
            namespace CChoreoInstanceData {
            }
            // Parent: None
            // Field count: 0
            namespace ConfigIndex {
            }
            // Parent: None
            // Field count: 0
            namespace VPhysXCollisionAttributes_t {
            }
            // Parent: None
            // Field count: 0
            namespace CSequenceUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CStateMachineInstanceData {
            }
            // Parent: None
            // Field count: 0
            namespace CNmPassthroughNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmClipReferenceNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmGraphDefinition__ExternalGraphSlot_t {
            }
            // Parent: None
            // Field count: 0
            namespace CAimCameraUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace LookData {
            }
            // Parent: None
            // Field count: 0
            namespace CSeqSeqDescFlag {
            }
            // Parent: None
            // Field count: 0
            namespace PermModelInfo_t {
            }
            // Parent: None
            // Field count: 0
            namespace StanceInfo_t {
            }
            // Parent: None
            // Field count: 0
            namespace IKBoneNameAndIndex_t {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CStanceScaleUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CNmBoneMaskBlendNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmIDEventNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace HitReactFixedSettings_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmPoseNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimTagBase {
            }
            // Parent: None
            // Field count: 0
            namespace CPerParticleVecInput {
            }
            // Parent: None
            // Field count: 0
            namespace CMotionGraph {
            }
            // Parent: None
            // Field count: 0
            namespace CNmVectorInfoNode__CDefinition {
            }
            // Parent: ______
            // Field count: 0
            namespace AnimationSnapshot_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmBlendTask {
            }
            // Parent: None
            // Field count: 0
            namespace CNmVectorValueNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CSeqTransition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmPoseTask {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimGraphSettingsGroup {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmVirtualParameterTargetNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimGraphDebugReplay {
            }
            // Parent: None
            // Field count: 0
            namespace CVectorAnimParameter {
            }
            // Parent: None
            // Field count: 0
            namespace CNmCachedPoseReadTask {
            }
            // Parent: None
            // Field count: 0
            namespace CNmStateMachineNode__StateDefinition_t {
            }
            // Parent: None
            // Field count: 0
            namespace CStanceOverrideUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CNmGraphDefinition__ExternalPoseSlot_t {
            }
            // Parent: None
            // Field count: 0
            namespace PhysShapeMarkup_t {
            }
            // Parent: None
            // Field count: 0
            namespace CBlend2DInstanceData {
            }
            // Parent: None
            // Field count: 0
            namespace LookAtBone_t {
            }
            // Parent: None
            // Field count: 0
            namespace CDirectPlaybackInstanceData {
            }
            // Parent: None
            // Field count: 0
            namespace CNmTransitionNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFloatEaseNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimationGraphInstance {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimEncodeDifference {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CRootUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CNmTargetOffsetNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace MotionMatchingInstanceData {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CMotionGraphUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFloatAngleMathNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimParamHandle {
            }
            // Parent: None
            // Field count: 0
            namespace WeightList {
            }
            // Parent: None
            // Field count: 0
            namespace MotionIndex {
            }
            // Parent: None
            // Field count: 0
            namespace FollowAttachmentSettings_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmReferencedGraphNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace AnimNodeID {
            }
            // Parent: None
            // Field count: 0
            namespace CNmClipSelectorNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CLookComponentUpdater {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmIsExternalPoseSetNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimGraphNetworkSettings {
            }
            // Parent: None
            // Field count: 0
            namespace CSingleFrameUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CNmChainLookatNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFollowBoneNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CBlockSelectionMetricEvaluator {
            }
            // Parent: None
            // Field count: 0
            namespace MovementData {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CRemapValueComponentUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CModelConfigList {
            }
            // Parent: None
            // Field count: 0
            namespace CSeqAutoLayerFlag {
            }
            // Parent: None
            // Field count: 0
            namespace AnimStateID {
            }
            // Parent: None
            // Field count: 0
            namespace CNmIDEventConditionNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace ModelBoneFlexDriver_t {
            }
            // Parent: None
            // Field count: 0
            namespace CMorphData {
            }
            // Parent: None
            // Field count: 0
            namespace CFootPinningUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CSeqPoseSetting {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmVirtualParameterFloatNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CAttachment {
            }
            // Parent: None
            // Field count: 0
            namespace CSequenceUpdateNodeBase {
            }
            // Parent: None
            // Field count: 0
            namespace CDrawCullingData {
            }
            // Parent: None
            // Field count: 0
            namespace VPhysXJoint_t {
            }
            // Parent: None
            // Field count: 0
            namespace CStateNodeTransitionData {
            }
            // Parent: None
            // Field count: 0
            namespace CTimeRemainingMetricEvaluator {
            }
            // Parent: None
            // Field count: 0
            namespace CParticleInput {
            }
            // Parent: None
            // Field count: 0
            namespace CModelConfigElement {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmControlParameterVectorNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace FootFixedSettings {
            }
            // Parent: None
            // Field count: 0
            namespace CNmBoneMaskSwitchNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CModelConfig {
            }
            // Parent: None
            // Field count: 0
            namespace AnimComponentID {
            }
            // Parent: None
            // Field count: 0
            namespace VPhysXAggregateData_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmGraphDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmSelectorNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimDemoCaptureSettings {
            }
            // Parent: None
            // Field count: 0
            namespace IKDemoCaptureSettings_t {
            }
            // Parent: None
            // Field count: 0
            namespace CSeqMultiFetchFlag {
            }
            // Parent: None
            // Field count: 0
            namespace VPhysXRange_t {
            }
            // Parent: None
            // Field count: 0
            namespace CStopAtGoalUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CNmIDEventPercentageThroughNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimBoneDifference {
            }
            // Parent: None
            // Field count: 0
            namespace CNmCachedBoolNode__CDefinition {
            }
            // Parent: modellib
            // Field count: 0
            namespace CAnimCycle {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CActionComponentUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CDirectionalBlendInstanceData {
            }
            // Parent: None
            // Field count: 0
            namespace CDampedPathAnimMotorUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CNmCachedFloatNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFloatSwitchNode__CDefinition {
            }
            // Parent: modellib
            // Field count: 0
            namespace CModelConfigElement_SetMaterialGroupOnAttachedModels {
            }
            // Parent: None
            // Field count: 0
            namespace CNmEntityAttributeEventBase {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmVirtualParameterBoneMaskNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace SequenceData {
            }
            // Parent: None
            // Field count: 0
            namespace CPathHelperUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace MaterialGroup_t {
            }
            // Parent: None
            // Field count: 0
            namespace CMorphBundleData {
            }
            // Parent: modellib
            // Field count: 0
            namespace CModelConfigElement_UserPick {
            }
            // Parent: None
            // Field count: 0
            namespace CSolveIKTargetHandle_t {
            }
            // Parent: None
            // Field count: 0
            namespace CFootAdjustmentUpdateNode {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CChoreoUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CAimConstraint {
            }
            // Parent: None
            // Field count: 0
            namespace CMaterialDrawDescriptor__RigidMeshPart_t {
            }
            // Parent: None
            // Field count: 0
            namespace CFootFallAnimTag {
            }
            // Parent: None
            // Field count: 0
            namespace CMaterialDrawDescriptor {
            }
            // Parent: None
            // Field count: 0
            namespace CNmSkeleton {
            }
            // Parent: None
            // Field count: 0
            namespace CStepsRemainingMetricEvaluator {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmVelocityBlendNode__CDefinition {
            }
            // Parent: _
            // Field count: 0
            namespace CNmZeroPoseTask {
            }
            // Parent: None
            // Field count: 0
            namespace CBodyGroupSetting {
            }
            // Parent: None
            // Field count: 0
            namespace CVectorQuantizer {
            }
            // Parent: None
            // Field count: 0
            namespace ParticleNamedValueConfiguration_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmVectorCreateNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CParticleVecInput {
            }
            // Parent: None
            // Field count: 0
            namespace CNmStateNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmBoneMaskSelectorNode__CDefinition {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmVirtualParameterVectorNode__CDefinition {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CFootCycleMetricEvaluator {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmConstIDNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CHitBox {
            }
            // Parent: None
            // Field count: 0
            namespace CNmParameterizedSelectorNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace ModelSkeletonData_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmEvent {
            }
            // Parent: None
            // Field count: 0
            namespace NmCompressionSettings_t__QuantizationRange_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmBlendTaskBase {
            }
            // Parent: None
            // Field count: 0
            namespace TagSpan_t {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmConstTargetNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CRemapValueUpdateItem {
            }
            // Parent: None
            // Field count: 0
            namespace PermModelDataAnimatedMaterialAttribute_t {
            }
            // Parent: None
            // Field count: 0
            namespace CMotionDataSet {
            }
            // Parent: None
            // Field count: 0
            namespace CProductQuantizer {
            }
            // Parent: None
            // Field count: 0
            namespace CChoiceUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace SkeletonAnimCapture_t__Bone_t {
            }
            // Parent: None
            // Field count: 0
            namespace CExpressionActionUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFloatMathNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimationGraphVisualizerLine {
            }
            // Parent: None
            // Field count: 0
            namespace CCycleControlUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CNmTargetInfoNode__CDefinition {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CDampedValueComponentUpdater {
            }
            // Parent: _
            // Field count: 0
            namespace CBaseConstraint {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmControlParameterFloatNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace BlendItem_t {
            }
            // Parent: None
            // Field count: 0
            namespace DampedPathMotorInstanceData_t {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmIsExternalGraphSlotFilledNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNewParticleEffect {
            }
            // Parent: None
            // Field count: 0
            namespace CNmClipNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmMaterialAttributeEvent {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmBlend1DNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CConcreteAnimParameter {
            }
            // Parent: None
            // Field count: 0
            namespace CNmBoneWeightList {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CPairedSequenceUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CModelConfigElement_RandomPick {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmReferencePoseTask {
            }
            // Parent: None
            // Field count: 0
            namespace CNmScaleNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace VPhysXConstraint2_t {
            }
            // Parent: None
            // Field count: 0
            namespace CConstraintTarget {
            }
            // Parent: None
            // Field count: 0
            namespace SkeletonAnimCapture_t {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimUser {
            }
            // Parent: None
            // Field count: 0
            namespace CRagdollComponentUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace ParticleNamedValueSource_t {
            }
            // Parent: None
            // Field count: 0
            namespace CFootDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CSeqSynthAnimDesc {
            }
            // Parent: None
            // Field count: 0
            namespace CNmLayerBlendNode__LayerDefinition_t {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimComponentUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CBlend2DUpdateNode {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmVelocityBasedSpeedScaleNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // O
            // m_eType
            // NPCPhysicsHullType_t
            // m_flCapsuleRadius
            // m_vCapsuleCenter2
            namespace CNPCPhysicsHull {
            }
            // Parent: None
            // Field count: 0
            namespace PermModelExtPart_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmCachedIDNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CLeanMatrixUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CSymbolAnimParameter {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFloatCurveEventNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace IAnimationGraphInstance {
            }
            // Parent: None
            // Field count: 0
            namespace CNmStateMachineNode__TransitionDefinition_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFloatSelectorNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CTargetSelectorUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace SlopeData {
            }
            // Parent: None
            // Field count: 0
            namespace CHitBoxSetList {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmIsInactiveBranchConditionNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace MotionDBIndex {
            }
            // Parent: None
            // Field count: 0
            namespace CDirectPlaybackTagData {
            }
            // Parent: None
            // Field count: 0
            namespace CParticleCollectionVecInput {
            }
            // Parent: None
            // Field count: 0
            namespace CNmGraphEventConditionNode__Condition_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFloatRemapNode__RemapRange_t {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmCurrentSyncEventIDNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmStateCompletedConditionNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmTargetWarpEvent {
            }
            // Parent: None
            // Field count: 0
            namespace CParamSpanUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimActionUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CParticleAnimTag {
            }
            // Parent: None
            // Field count: 0
            namespace CCycleBase {
            }
            // Parent: None
            // Field count: 0
            namespace FollowTargetOpFixedSettings_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmIDSwitchNode__CDefinition {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmRootMotionEvent {
            }
            // Parent: None
            // Field count: 0
            namespace CChoiceInstanceData {
            }
            // Parent: None
            // Field count: 0
            namespace AnimationSnapshotBase_t {
            }
            // Parent: None
            // Field count: 0
            namespace CEmitTagActionUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace DynamicMeshDeformParams_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmTimeConditionNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmSyncEventIndexConditionNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimStateMachineUpdater {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CUnaryUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CNmIDToFloatNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace PlayerInputMotorInstanceData_t {
            }
            // Parent: None
            // Field count: 0
            namespace CCompressorGroup {
            }
            // Parent: None
            // Field count: 0
            namespace CSelectorUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace NmPercent_t {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CStateMachineComponentUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimUpdateNodeRef {
            }
            // Parent: None
            // Field count: 0
            namespace CPhysSurfaceProperties {
            }
            // Parent: None
            // Field count: 0
            namespace CNmBoneMaskValueNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CSeqPoseParamDesc {
            }
            // Parent: None
            // Field count: 0
            namespace CModelConfigElement_SetBodygroup {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimMovement {
            }
            // Parent: None
            // Field count: 0
            namespace CParticleRemapFloatInput {
            }
            // Parent: None
            // Field count: 0
            namespace FollowAttachmentData {
            }
            // Parent: None
            // Field count: 0
            namespace FootStepTrigger {
            }
            // Parent: None
            // Field count: 0
            namespace CNmSyncTrack__EventMarker_t {
            }
            // Parent: None
            // Field count: 0
            namespace CPathMetricEvaluator {
            }
            // Parent: None
            // Field count: 0
            namespace CFootLockUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CNmOrientationWarpEvent {
            }
            // Parent: None
            // Field count: 0
            namespace CNmIDValueNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace JiggleBoneSettings_t {
            }
            // Parent: None
            // Field count: 0
            namespace CJumpHelperUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CNmControlParameterBoolNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmChainLookatTask {
            }
            // Parent: None
            // Field count: 0
            namespace FootLockPoseOpFixedSettings {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CBoneVelocityMetricEvaluator {
            }
            // Parent: None
            // Field count: 0
            namespace CWarpSectionAnimTag {
            }
            // Parent: None
            // Field count: 0
            namespace SelectorInstanceData_t {
            }
            // Parent: modellib
            // Field count: 0
            namespace CModelConfigElement_RandomColor {
            }
            // Parent: None
            // Field count: 0
            namespace CFootMotion {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CJiggleBoneUpdateNode {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmConstVectorNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace MoodAnimation_t {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CLODComponentUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CNmIsTargetSetNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CPhysSurfacePropertiesVehicle {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimDataChannelDesc {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CPairedSequenceComponentUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CNmParticleEvent {
            }
            // Parent: None
            // Field count: 0
            namespace MotionSelection {
            }
            // Parent: None
            // Field count: 0
            namespace CMorphRectData {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimFoot {
            }
            // Parent: modellib
            // Field count: 0
            namespace CParentConstraint {
            }
            // Parent: None
            // Field count: 0
            namespace CNmCachedVectorNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmStateNode__TimedEvent_t {
            }
            // Parent: None
            // Field count: 0
            namespace CFootPositionMetricEvaluator {
            }
            // Parent: None
            // Field count: 0
            namespace CParticleVariableRef {
            }
            // Parent: None
            // Field count: 0
            namespace CMoverInstanceData {
            }
            // Parent: None
            // Field count: 0
            namespace HSequence {
            }
            // Parent: None
            // Field count: 0
            namespace CDampedValueUpdateItem {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimLocalHierarchy {
            }
            // Parent: None
            // Field count: 0
            namespace CBlendUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CQuaternionAnimParameter {
            }
            // Parent: None
            // Field count: 0
            namespace PermModelData_t {
            }
            // Parent: _
            // Field count: 0
            namespace CNmSampleTask {
            }
            // Parent: None
            // Field count: 0
            namespace CFollowPathInstanceData {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CStaticPoseCacheBuilder {
            }
            // Parent: None
            // Field count: 0
            namespace ModelMeshBufferData_t {
            }
            // Parent: None
            // Field count: 0
            namespace CSequenceGroupData {
            }
            // Parent: None
            // Field count: 0
            namespace CStateMachineUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CNmIDBasedSelectorNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CAimMatrixUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace SkeletonAnimCapture_t__Frame_t {
            }
            // Parent: None
            // Field count: 0
            namespace CModelConfigElement_Command {
            }
            // Parent: None
            // Field count: 0
            namespace TargetSelectorInstanceData_t {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimEventDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmRootMotionData {
            }
            // Parent: None
            // Field count: 0
            namespace AnimScriptHandle {
            }
            // Parent: None
            // Field count: 0
            namespace CFlexOp {
            }
            // Parent: None
            // Field count: 0
            namespace CHitReactUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CLookAtUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimBone {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimParameterManagerUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace BoneDemoCaptureSettings_t {
            }
            // Parent: None
            // Field count: 0
            namespace PairedSequenceData {
            }
            // Parent: None
            // Field count: 0
            namespace CBoneConstraintPoseSpaceMorph__Input_t {
            }
            // Parent: None
            // Field count: 0
            namespace MoodAnimationLayer_t {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CSpeedScaleUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CSequenceTagSpans {
            }
            // Parent: None
            // Field count: 0
            namespace CModelConfigElement_SetBodygroupOnAttachedModels {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CCurrentVelocityMetricEvaluator {
            }
            // Parent: None
            // Field count: 0
            namespace CNmBoolValueNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimReplayFrame {
            }
            // Parent: None
            // Field count: 0
            namespace CNmTransitionEvent {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFloatCurveEvent {
            }
            // Parent: None
            // Field count: 0
            namespace CParticleTransformInput {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CPathAnimMotorUpdaterBase {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFootstepEventPercentageThroughNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace AimCameraOpFixedSettings_t {
            }
            // Parent: None
            // Field count: 0
            namespace SkeletonAnimCapture_t__Camera_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmGraphEventConditionNode__CDefinition {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CFollowAttachmentUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CMovementComponentUpdater {
            }
            // Parent: modellib
            // Field count: 0
            namespace CModelConfigElement_SetMaterialGroup {
            }
            // Parent: None
            // Field count: 0
            namespace IParticleEffect {
            }
            // Parent: None
            // Field count: 0
            namespace CFutureFacingMetricEvaluator {
            }
            // Parent: None
            // Field count: 0
            namespace CNmIDBasedClipSelectorNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CLeanMatrixInstanceData {
            }
            // Parent: None
            // Field count: 0
            namespace NmCompressionSettings_t {
            }
            // Parent: None
            // Field count: 0
            namespace PARTICLE_EHANDLE__ {
            }
            // Parent: MGetKV3ClassDefaults
            // Field count: 0
            namespace CAddUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimEnum {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CDemoSettingsComponentUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimDecoder {
            }
            // Parent: None
            // Field count: 0
            namespace CNmCachedTargetNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CPerParticleFloatInput {
            }
            // Parent: None
            // Field count: 0
            namespace CNmConstBoolNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmBitFlags {
            }
            // Parent: None
            // Field count: 0
            namespace CFootStride {
            }
            // Parent: None
            // Field count: 0
            namespace CSceneObjectData__RTProxyDrawDescriptor_t {
            }
            // Parent: MGetKV3ClassDefaults
            // Field count: 0
            namespace CNmLegacyEvent {
            }
            // Parent: None
            // Field count: 0
            namespace CStateNodeStateData {
            }
            // Parent: None
            // Field count: 0
            namespace CFootstepLandedAnimTag {
            }
            // Parent: None
            // Field count: 0
            namespace CEnumAnimParameter {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CHandshakeAnimTagBase {
            }
            // Parent: None
            // Field count: 0
            namespace AnimTagID {
            }
            // Parent: None
            // Field count: 0
            namespace CWayPointHelperInstanceData {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimFrameSegment {
            }
            // Parent: None
            // Field count: 0
            namespace CSlopeComponentUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimInputDamping {
            }
            // Parent: None
            // Field count: 0
            namespace CHitBoxSet {
            }
            // Parent: None
            // Field count: 0
            namespace ChainToSolveData_t {
            }
            // Parent: None
            // Field count: 0
            namespace CConstraintSlave {
            }
            // Parent: None
            // Field count: 0
            namespace CFootCycleDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CVirtualAnimParameter {
            }
            // Parent: None
            // Field count: 0
            namespace CMotionMetricEvaluator {
            }
            // Parent: None
            // Field count: 0
            namespace CFutureVelocityMetricEvaluator {
            }
            // Parent: None
            // Field count: 0
            namespace CNmSkeleton__SecondarySkeleton_t {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimUpdateNodeBase {
            }
            // Parent: None
            // Field count: 0
            namespace CSetParameterActionUpdater {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmFixedWeightBoneMaskNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace SkeletonAnimCapture_t__FrameStamp_t {
            }
            // Parent: None
            // Field count: 0
            namespace CBonePositionMetricEvaluator {
            }
            // Parent: None
            // Field count: 0
            namespace CRenderBufferBinding {
            }
            // Parent: None
            // Field count: 0
            namespace CParticleCollectionRendererFloatInput {
            }
            // Parent: None
            // Field count: 0
            namespace CNmParameterizedBlendNode__Parameterization_t {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmEntityAttributeIntEvent {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmNotNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CMeshletDescriptor {
            }
            // Parent: None
            // Field count: 0
            namespace CMorphSetData {
            }
            // Parent: None
            // Field count: 0
            namespace CNmAndNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CMorphConstraint {
            }
            // Parent: None
            // Field count: 0
            namespace CClothSettingsAnimTag {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimDesc_Flag {
            }
            // Parent: None
            // Field count: 0
            namespace CNmBlend2DNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CBlendCurve {
            }
            // Parent: None
            // Field count: 0
            namespace CNmGraphNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimationGraphVisualizerSphere {
            }
            // Parent: None
            // Field count: 0
            namespace CNmClip__ModelSpaceSamplingChainLink_t {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimUserDifference {
            }
            // Parent: None
            // Field count: 0
            namespace CNmDurationScaleNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CTransitionUpdateData {
            }
            // Parent: None
            // Field count: 0
            namespace CMovementHandshakeAnimTag {
            }
            // Parent: None
            // Field count: 0
            namespace CBoneConstraintPoseSpaceBone__Input_t {
            }
            // Parent: None
            // Field count: 0
            namespace CSeqMultiFetch {
            }
            // Parent: None
            // Field count: 0
            namespace CPhysSurfacePropertiesSoundNames {
            }
            // Parent: None
            // Field count: 0
            namespace NmBoneMaskSetDefinition_t {
            }
            // Parent: None
            // Field count: 0
            namespace CAudioAnimTag {
            }
            // Parent: None
            // Field count: 0
            namespace CTurnHelperUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimationGroup {
            }
            // Parent: None
            // Field count: 0
            namespace NmSyncTrackTime_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmClip {
            }
            // Parent: None
            // Field count: 0
            namespace CToggleComponentActionUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CNmOverlayBlendTask {
            }
            // Parent: None
            // Field count: 0
            namespace CNmSpeedScaleBaseNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmValueNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimationGraphVisualizerPrimitiveBase {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CBindPoseUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace NmSyncTrackTimeRange_t {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimationGraphVisualizerText {
            }
            // Parent: None
            // Field count: 0
            namespace CFootTrajectory {
            }
            // Parent: None
            // Field count: 0
            namespace CMotionMatchingUpdateNode {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmReferencePoseNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CSeqS1SeqDesc {
            }
            // Parent: None
            // Field count: 0
            namespace CFlexController {
            }
            // Parent: None
            // Field count: 0
            namespace SkeletonDemoDb_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFloatRangeComparisonNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CMotionNodeSequence {
            }
            // Parent: None
            // Field count: 0
            namespace CNmTwoBoneIKNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmGraphInstance {
            }
            // Parent: None
            // Field count: 0
            namespace CFlexDesc {
            }
            // Parent: None
            // Field count: 0
            namespace CRenderMesh {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimSkeleton {
            }
            // Parent: None
            // Field count: 0
            namespace CFootAdjustmentInstanceData {
            }
            // Parent: None
            // Field count: 0
            namespace VPhysics2ShapeDef_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFloatCurveNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimationGraphVisualizerAxis {
            }
            // Parent: None
            // Field count: 0
            namespace CTwistConstraint {
            }
            // Parent: None
            // Field count: 0
            namespace ModelBoneFlexDriverControl_t {
            }
            // Parent: None
            // Field count: 0
            namespace CParticleCollectionFloatInput {
            }
            // Parent: None
            // Field count: 0
            namespace CSeqCmdLayer {
            }
            // Parent: None
            // Field count: 0
            namespace FootPinningPoseOpFixedData_t {
            }
            // Parent: None
            // Field count: 0
            namespace RenderSkeletonBone_t {
            }
            // Parent: None
            // Field count: 0
            namespace CDistanceRemainingMetricEvaluator {
            }
            // Parent: None
            // Field count: 0
            namespace CDirectPlaybackUpdateNode {
            }
            // Parent: MGetKV3ClassDefaults
            // Field count: 0
            namespace CNmIDEvent {
            }
            // Parent: None
            // Field count: 0
            namespace CFlexRule {
            }
            // Parent: None
            // Field count: 0
            namespace ScriptInfo_t {
            }
            // Parent: None
            // Field count: 0
            namespace CBoneConstraintRbf {
            }
            // Parent: None
            // Field count: 0
            namespace CNetworkedCycle {
            }
            // Parent: None
            // Field count: 0
            namespace CNmSoundEvent {
            }
            // Parent: None
            // Field count: 0
            namespace CRenderGroom {
            }
            // Parent: None
            // Field count: 0
            namespace CNmParameterizedClipSelectorNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CTiltTwistConstraint {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmSpeedScaleNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CVPhysXSurfacePropertiesList {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFloatSpringNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace RenderHairStrandInfo_t {
            }
            // Parent: None
            // Field count: 0
            namespace CCycleControlClipUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CNmTargetPointNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmTargetSelectorNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFloatValueNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CWarpSectionAnimTagBase {
            }
            // Parent: None
            // Field count: 0
            namespace CNmGraphVariationUserData {
            }
            // Parent: None
            // Field count: 0
            namespace CStaticPoseCache {
            }
            // Parent: None
            // Field count: 0
            namespace LookAtOpFixedSettings_t {
            }
            // Parent: None
            // Field count: 0
            namespace CRootMotion {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimGraphSettingsManager {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimGraphModelBinding {
            }
            // Parent: modellib
            // Field count: 0
            namespace CBoneConstraintPoseSpaceBone {
            }
            // Parent: None
            // Field count: 0
            namespace CNmTwoBoneIKTask {
            }
            // Parent: None
            // Field count: 0
            namespace MotionBlendItem {
            }
            // Parent: None
            // Field count: 0
            namespace CBoneConstraintPoseSpaceMorph {
            }
            // Parent: None
            // Field count: 0
            namespace CFloatAnimParameter {
            }
            // Parent: None
            // Field count: 0
            namespace CStateActionUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CPlayerInputAnimMotorUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CRenderSkeleton {
            }
            // Parent: None
            // Field count: 0
            namespace CSeqIKLock {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimParamHandleMap {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFloatClampNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmExternalPoseNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimDesc {
            }
            // Parent: None
            // Field count: 0
            namespace CNmRootMotionOverrideNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmTargetWarpNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CPhysSurfacePropertiesPhysics {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimationGraphVisualizerPie {
            }
            // Parent: None
            // Field count: 0
            namespace NmFloatCurveCompressionSettings_t {
            }
            // Parent: None
            // Field count: 0
            namespace CBoneConstraintDotToMorph {
            }
            // Parent: modellib
            // Field count: 0
            namespace CPointConstraint {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CCurrentRotationVelocityMetricEvaluator {
            }
            // Parent: None
            // Field count: 0
            namespace TraceSettings_t {
            }
            // Parent: None
            // Field count: 0
            namespace ParamSpanSample_t {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmFollowBoneTask {
            }
            // Parent: None
            // Field count: 0
            namespace VPhysXConstraintParams_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFloatComparisonNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmChainSolverTask {
            }
            // Parent: None
            // Field count: 0
            namespace CStateUpdateData {
            }
            // Parent: None
            // Field count: 0
            namespace CTurnHelperInstanceData {
            }
            // Parent: None
            // Field count: 0
            namespace CNmTargetValueNode__CDefinition {
            }
            // Parent: modellib
            // Field count: 0
            namespace COrientConstraint {
            }
            // Parent: None
            // Field count: 0
            namespace CCycleClipInstanceData {
            }
            // Parent: None
            // Field count: 0
            namespace CMoverUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CNmLayerBlendNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimMotorUpdaterBase {
            }
            // Parent: None
            // Field count: 0
            namespace JiggleBoneSettingsList_t {
            }
            // Parent: None
            // Field count: 0
            namespace CSubtractUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFloatRemapNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CPoseHandle {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFootstepEventIDNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CSolveIKChainUpdateNode {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmOrNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CSeqCmdSeqDesc {
            }
            // Parent: None
            // Field count: 0
            namespace CBoneMaskUpdateNode {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CLeafUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CParticleFloatInput {
            }
            // Parent: None
            // Field count: 0
            namespace SolveIKChainPoseOpFixedSettings_t {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmEntityAttributeFloatEvent {
            }
            // Parent: None
            // Field count: 0
            namespace CNmIDSelectorNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace TwoBoneIKSettings_t {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmCachedPoseWriteTask {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimUpdateSharedData {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimAttachment {
            }
            // Parent: None
            // Field count: 0
            namespace CFootTrajectories {
            }
            // Parent: None
            // Field count: 0
            namespace CNmIDComparisonNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace PairedSequence_t {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CEditableMotionGraph {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmConstFloatNode__CDefinition {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CStringAnimTag {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CBoolAnimParameter {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CRagdollAnimTag {
            }
            // Parent: None
            // Field count: 0
            namespace CMotionNode {
            }
            // Parent: None
            // Field count: 0
            namespace CNmStateMachineNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CBodyGroupAnimTag {
            }
            // Parent: None
            // Field count: 0
            namespace CNmModelSpaceBlendTask {
            }
            // Parent: None
            // Field count: 0
            namespace CNmZeroPoseNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmOrientationWarpNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace AnimParamID {
            }
            // Parent: None
            // Field count: 0
            namespace CNmBoneMaskNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace ModelAnimGraph2Ref_t {
            }
            // Parent: None
            // Field count: 0
            namespace AnimationDecodeDebugDump_t {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmVirtualParameterIDNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CSeqScaleSet {
            }
            // Parent: None
            // Field count: 0
            namespace CDirectionalBlendUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CNmGraphDefinition__ReferencedGraphSlot_t {
            }
            // Parent: None
            // Field count: 0
            namespace ParamSpan_t {
            }
            // Parent: None
            // Field count: 0
            namespace CFootStepTriggerUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace IKTargetSettings_t {
            }
            // Parent: modellib
            // Field count: 0
            namespace CModelConfigElement_SetRenderColor {
            }
            // Parent: None
            // Field count: 0
            namespace CNmAdditiveBlendTask {
            }
            // Parent: None
            // Field count: 0
            namespace CNmAnimationPoseNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CMotionSearchDB {
            }
            // Parent: None
            // Field count: 0
            namespace CMotionNodeBlend1D {
            }
            // Parent: None
            // Field count: 0
            namespace CNmCurrentSyncEventNode__CDefinition {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmControlParameterTargetNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace SkeletonBoneBounds_t {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CTwoBoneIKUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace VPhysXBodyPart_t {
            }
            // Parent: None
            // Field count: 0
            namespace CTaskHandshakeAnimTag {
            }
            // Parent: None
            // Field count: 0
            namespace CFollowPathUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace AimMatrixOpFixedSettings_t {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CAnimScriptComponentUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CRagdollUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CBoneConstraintBase {
            }
            // Parent: animgraphlib
            // Field count: 0
            namespace CPathAnimMotorUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CMaterialAttributeAnimTag {
            }
            // Parent: None
            // Field count: 0
            namespace CNmFootEventConditionNode__CDefinition {
            }
            // Parent: _
            // Field count: 0
            namespace CNmFootEvent {
            }
            // Parent: None
            // Field count: 0
            namespace CPhysSurfacePropertiesAudio {
            }
            // Parent: None
            // Field count: 0
            namespace CSeqAutoLayer {
            }
            // Parent: None
            // Field count: 0
            namespace ModelEmbeddedMesh_t {
            }
            // Parent: None
            // Field count: 0
            namespace PhysSoftbodyDesc_t {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimSequenceParams {
            }
            // Parent: None
            // Field count: 0
            namespace CTargetWarpUpdateNode {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmVirtualParameterBoolNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CFollowTargetUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CCPPScriptComponentUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace NetVarConfigIndex {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimData {
            }
            // Parent: None
            // Field count: 0
            namespace IKSolverSettings_t {
            }
            // Parent: None
            // Field count: 0
            namespace CBinaryUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CBlendNodeInstanceData {
            }
            // Parent: None
            // Field count: 0
            namespace CNmParameterizedBlendNode__BlendRange_t {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimKeyData {
            }
            // Parent: None
            // Field count: 0
            namespace AttachmentHandle_t {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimMorphDifference {
            }
            // Parent: None
            // Field count: 0
            namespace FootFixedData_t {
            }
            // Parent: None
            // Field count: 0
            namespace CMotionGraphGroup {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmVectorNegateNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmSyncTrack__Event_t {
            }
            // Parent: None
            // Field count: 0
            namespace CParticleCollectionRendererVecInput {
            }
            // Parent: None
            // Field count: 0
            namespace CNmTarget {
            }
            // Parent: animlib
            // Field count: 0
            namespace CNmControlParameterIDNode__CDefinition {
            }
            // Parent: None
            // Field count: 0
            namespace CNmBodyGroupEvent {
            }
            // Parent: None
            // Field count: 0
            namespace CWayPointHelperUpdateNode {
            }
            // Parent: None
            // Field count: 0
            namespace CMoodVData {
            }
            // Parent: None
            // Field count: 0
            namespace CModelConfigElement_AttachedModel {
            }
            // Parent: None
            // Field count: 0
            namespace CAnimTagManagerUpdater {
            }
            // Parent: None
            // Field count: 0
            namespace CParticleProperty {
            }
        }
    }
}
