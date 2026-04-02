// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-04-02 19:22:16.019179300 +07:00

export const Schemas = {
    animationsystem_dll: {
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
        ParticleSetMethod_t: {
            PARTICLE_SET_REPLACE_VALUE: 0x0,
            PARTICLE_SET_SCALE_INITIAL_VALUE: 0x1,
            PARTICLE_SET_ADD_TO_INITIAL_VALUE: 0x2,
            PARTICLE_SET_RAMP_CURRENT_VALUE: 0x3,
            PARTICLE_SET_SCALE_CURRENT_VALUE: 0x4,
            PARTICLE_SET_ADD_TO_CURRENT_VALUE: 0x5,
        },
        SeqCmd_t: {
            SeqCmd_Nop: 0x0,
            SeqCmd_LinearDelta: 0x1,
            SeqCmd_FetchFrameRange: 0x2,
            SeqCmd_Slerp: 0x3,
            SeqCmd_Add: 0x4,
            SeqCmd_Subtract: 0x5,
            SeqCmd_Scale: 0x6,
            SeqCmd_Copy: 0x7,
            SeqCmd_Blend: 0x8,
            SeqCmd_Worldspace: 0x9,
            SeqCmd_Sequence: 0xA,
            SeqCmd_FetchCycle: 0xB,
            SeqCmd_FetchFrame: 0xC,
            SeqCmd_IKLockInPlace: 0xD,
            SeqCmd_IKRestoreAll: 0xE,
            SeqCmd_ReverseSequence: 0xF,
            SeqCmd_Transform: 0x10,
        },
        CNmEventRelevance_t: {
            ClientOnly: 0x0,
            ServerOnly: 0x1,
            ClientAndServer: 0x2,
        },
        BoneTransformSpace_t: {
            BoneTransformSpace_Invalid: 0xFFFFFFFFFFFFFFFF,
            BoneTransformSpace_Parent: 0x0,
            BoneTransformSpace_Model: 0x1,
            BoneTransformSpace_World: 0x2,
        },
        CAnimationGraphVisualizerPrimitiveType: {
            ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text: 0x0,
            ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere: 0x1,
            ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line: 0x2,
            ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie: 0x3,
            ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis: 0x4,
        },
        NmTransitionRule_t: {
            AllowTransition: 0x0,
            ConditionallyAllowTransition: 0x1,
            BlockTransition: 0x2,
        },
        BinaryNodeTiming: {
            UseChild1: 0x0,
            UseChild2: 0x1,
            SyncChildren: 0x2,
        },
        NmFollowBoneMode_t: {
            RotationAndTranslation: 0x0,
            RotationOnly: 0x1,
            TranslationOnly: 0x2,
        },
        SolveIKChainAnimNodeDebugSetting: {
            SOLVEIKCHAINANIMNODEDEBUGSETTING_None: 0x0,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle: 0x1,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle: 0x2,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle: 0x3,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward: 0x4,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_Up: 0x5,
            SOLVEIKCHAINANIMNODEDEBUGSETTING_Left: 0x6,
        },
        CNmParticleEvent__Type_t: {
            Create: 0x0,
            Create_CFG: 0x1,
        },
        ParticleFloatBiasType_t: {
            PF_BIAS_TYPE_INVALID: 0xFFFFFFFFFFFFFFFF,
            PF_BIAS_TYPE_STANDARD: 0x0,
            PF_BIAS_TYPE_GAIN: 0x1,
            PF_BIAS_TYPE_EXPONENTIAL: 0x2,
            PF_BIAS_TYPE_COUNT: 0x3,
        },
        CNmTargetWarpNode__TargetUpdateRule_t: {
            None: 0x0,
            Recalculate: 0x1,
            Offset: 0x2,
            RecalculateOrOffset: 0x3,
        },
        SharedMovementGait_t: {
            eInvalid: 0xFFFFFFFFFFFFFFFF,
            eSlow: 0x0,
            eMedium: 0x1,
            eFast: 0x2,
            eVeryFast: 0x3,
            eCount: 0x4,
        },
        OrientationWarpRootMotionSource_t: {
            eAnimationOrProcedural: 0x0,
            eAnimationOnly: 0x1,
            eProceduralOnly: 0x2,
        },
        IKTargetCoordinateSystem: {
            IKTARGETCOORDINATESYSTEM_WorldSpace: 0x0,
            IKTARGETCOORDINATESYSTEM_ModelSpace: 0x1,
            IKTARGETCOORDINATESYSTEM_COUNT: 0x2,
        },
        ParticleFloatType_t: {
            PF_TYPE_INVALID: 0xFFFFFFFFFFFFFFFF,
            PF_TYPE_LITERAL: 0x0,
            PF_TYPE_NAMED_VALUE: 0x1,
            PF_TYPE_RANDOM_UNIFORM: 0x2,
            PF_TYPE_RANDOM_BIASED: 0x3,
            PF_TYPE_COLLECTION_AGE: 0x4,
            PF_TYPE_ENDCAP_AGE: 0x5,
            PF_TYPE_CONTROL_POINT_COMPONENT: 0x6,
            PF_TYPE_CONTROL_POINT_CHANGE_AGE: 0x7,
            PF_TYPE_CONTROL_POINT_SPEED: 0x8,
            PF_TYPE_PARTICLE_DETAIL_LEVEL: 0x9,
            PF_TYPE_CONCURRENT_DEF_COUNT: 0xA,
            PF_TYPE_CLOSEST_CAMERA_DISTANCE: 0xB,
            PF_TYPE_SNAPSHOT_COUNT: 0xC,
            PF_TYPE_SNAPSHOT_CHANGED: 0xD,
            PF_TYPE_CONTROL_POINT_IS_SET: 0xE,
            PF_TYPE_RENDERER_CAMERA_DISTANCE: 0xF,
            PF_TYPE_RENDERER_CAMERA_DOT_PRODUCT: 0x10,
            PF_TYPE_PARTICLE_NOISE: 0x11,
            PF_TYPE_PARTICLE_AGE: 0x12,
            PF_TYPE_PARTICLE_AGE_NORMALIZED: 0x13,
            PF_TYPE_PARTICLE_FLOAT: 0x14,
            PF_TYPE_PARTICLE_INITIAL_FLOAT: 0x15,
            PF_TYPE_PARTICLE_VECTOR_COMPONENT: 0x16,
            PF_TYPE_PARTICLE_INITIAL_VECTOR_COMPONENT: 0x17,
            PF_TYPE_PARTICLE_SPEED: 0x18,
            PF_TYPE_PARTICLE_NUMBER: 0x19,
            PF_TYPE_PARTICLE_NUMBER_NORMALIZED: 0x1A,
            PF_TYPE_PARTICLE_ROPE_SEGMENT: 0x1B,
            PF_TYPE_PARTICLE_ROPE_SEGMENT_NORMALIZED: 0x1C,
            PF_TYPE_PARTICLE_SCREENSPACE_CAMERA_DISTANCE: 0x1D,
            PF_TYPE_PARTICLE_SCREENSPACE_CAMERA_DOT_PRODUCT: 0x1E,
            PF_TYPE_COUNT: 0x1F,
        },
        CNmFloatAngleMathNode__Operation_t: {
            ClampTo180: 0x0,
            ClampTo360: 0x1,
            FlipHemisphere: 0x2,
            FlipHemisphereNegate: 0x3,
        },
        VPhysXAggregateData_t__VPhysXFlagEnum_t: {
            FLAG_IS_POLYSOUP_GEOMETRY: 0x1,
            FLAG_LEVEL_COLLISION: 0x10,
            FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE: 0x20,
        },
        CNmRootMotionOverrideNode__OverrideFlags_t: {
            AllowMoveX: 0x0,
            AllowMoveY: 0x1,
            AllowMoveZ: 0x2,
            AllowFacingPitch: 0x3,
            ListenForEvents: 0x4,
        },
        NmEasingOperation_t: {
            Linear: 0x0,
            InQuad: 0x1,
            OutQuad: 0x2,
            InOutQuad: 0x3,
            InCubic: 0x4,
            OutCubic: 0x5,
            InOutCubic: 0x6,
            InQuart: 0x7,
            OutQuart: 0x8,
            InOutQuart: 0x9,
            InQuint: 0xA,
            OutQuint: 0xB,
            InOutQuint: 0xC,
            InSine: 0xD,
            OutSine: 0xE,
            InOutSine: 0xF,
            InExpo: 0x10,
            OutExpo: 0x11,
            InOutExpo: 0x12,
            InCirc: 0x13,
            OutCirc: 0x14,
            InOutCirc: 0x15,
            None: 0x16,
        },
        EIKEndEffectorRotationFixUpMode: {
            None: 0x0,
            MatchTargetOrientation: 0x1,
            LookAtTargetForward: 0x2,
            MaintainParentOrientation: 0x3,
            Count: 0x4,
        },
        MatterialAttributeTagType_t: {
            MATERIAL_ATTRIBUTE_TAG_VALUE: 0x0,
            MATERIAL_ATTRIBUTE_TAG_COLOR: 0x1,
        },
        PFNoiseTurbulence_t: {
            PF_NOISE_TURB_NONE: 0x0,
            PF_NOISE_TURB_HIGHLIGHT: 0x1,
            PF_NOISE_TURB_FEEDBACK: 0x2,
            PF_NOISE_TURB_LOOPY: 0x3,
            PF_NOISE_TURB_CONTRAST: 0x4,
            PF_NOISE_TURB_ALTERNATE: 0x5,
        },
        NmTargetWarpAlgorithm_t: {
            Lerp: 0x0,
            Hermite: 0x1,
            HermiteFeaturePreserving: 0x2,
            Bezier: 0x3,
        },
        ParticleColorBlendMode_t: {
            PARTICLEBLEND_DEFAULT: 0x0,
            PARTICLEBLEND_OVERLAY: 0x1,
            PARTICLEBLEND_DARKEN: 0x2,
            PARTICLEBLEND_LIGHTEN: 0x3,
            PARTICLEBLEND_MULTIPLY: 0x4,
        },
        ParticleColorBlendType_t: {
            PARTICLE_COLOR_BLEND_MULTIPLY: 0x0,
            PARTICLE_COLOR_BLEND_MULTIPLY2X: 0x1,
            PARTICLE_COLOR_BLEND_DIVIDE: 0x2,
            PARTICLE_COLOR_BLEND_ADD: 0x3,
            PARTICLE_COLOR_BLEND_SUBTRACT: 0x4,
            PARTICLE_COLOR_BLEND_MOD2X: 0x5,
            PARTICLE_COLOR_BLEND_SCREEN: 0x6,
            PARTICLE_COLOR_BLEND_MAX: 0x7,
            PARTICLE_COLOR_BLEND_MIN: 0x8,
            PARTICLE_COLOR_BLEND_REPLACE: 0x9,
            PARTICLE_COLOR_BLEND_AVERAGE: 0xA,
            PARTICLE_COLOR_BLEND_NEGATE: 0xB,
            PARTICLE_COLOR_BLEND_LUMINANCE: 0xC,
        },
        NmTransitionRuleCondition_t: {
            AnyAllowed: 0x0,
            FullyAllowed: 0x1,
            ConditionallyAllowed: 0x2,
            Blocked: 0x3,
        },
        ModelMeshBufferUsage_t: {
            MESH_BUFFER_USAGE_NONE: 0x0,
            MESH_BUFFER_USAGE_VB: 0x1,
            MESH_BUFFER_USAGE_IB: 0x2,
            MESH_BUFFER_USAGE_ADJACENCY: 0x4,
            MESH_BUFFER_USAGE_MESHLET_TRIS: 0x8,
            MESH_BUFFER_USAGE_RT_PROXY: 0x10,
            MESH_BUFFER_USAGE_VERTEX_ALBEDO: 0x20,
        },
        NmGraphDebugMode_t: {
            Off: 0x0,
            On: 0x1,
        },
        TargetWarpTimingMethod: {
            ReachDestinationOnRootMotionEnd: 0x0,
            ReachDestinationOnWarpTagEnd: 0x1,
        },
        ScriptedMoveTo_t: {
            eWait: 0x0,
            eMoveWithGait: 0x3,
            eTeleport: 0x4,
            eWaitFacing: 0x5,
            eObsoleteBackCompat1: 0x1,
            eObsoleteBackCompat2: 0x2,
        },
        EDemoBoneSelectionMode: {
            CaptureAllBones: 0x0,
            CaptureSelectedBones: 0x1,
        },
        StepPhase: {
            StepPhase_OnGround: 0x0,
            StepPhase_InAir: 0x1,
        },
        FlexOpCode_t: {
            FLEX_OP_CONST: 0x1,
            FLEX_OP_FETCH1: 0x2,
            FLEX_OP_FETCH2: 0x3,
            FLEX_OP_ADD: 0x4,
            FLEX_OP_SUB: 0x5,
            FLEX_OP_MUL: 0x6,
            FLEX_OP_DIV: 0x7,
            FLEX_OP_NEG: 0x8,
            FLEX_OP_EXP: 0x9,
            FLEX_OP_OPEN: 0xA,
            FLEX_OP_CLOSE: 0xB,
            FLEX_OP_COMMA: 0xC,
            FLEX_OP_MAX: 0xD,
            FLEX_OP_MIN: 0xE,
            FLEX_OP_2WAY_0: 0xF,
            FLEX_OP_2WAY_1: 0x10,
            FLEX_OP_NWAY: 0x11,
            FLEX_OP_COMBO: 0x12,
            FLEX_OP_DOMINATE: 0x13,
            FLEX_OP_DME_LOWER_EYELID: 0x14,
            FLEX_OP_DME_UPPER_EYELID: 0x15,
            FLEX_OP_SQRT: 0x16,
            FLEX_OP_REMAPVALCLAMPED: 0x17,
            FLEX_OP_SIN: 0x18,
            FLEX_OP_COS: 0x19,
            FLEX_OP_ABS: 0x1A,
        },
        NmCachedValueMode_t: {
            OnEntry: 0x0,
            OnExit: 0x1,
        },
        AnimNodeNetworkMode: {
            ServerAuthoritative: 0x0,
            ClientSimulate: 0x1,
        },
        VPhysXBodyPart_t__VPhysXFlagEnum_t: {
            FLAG_STATIC: 0x1,
            FLAG_KINEMATIC: 0x2,
            FLAG_JOINT: 0x4,
            FLAG_MASS: 0x8,
            FLAG_ALWAYS_DYNAMIC_ON_CLIENT: 0x10,
            FLAG_DISABLE_CCD: 0x20,
        },
        AnimParamType_t: {
            ANIMPARAM_UNKNOWN: 0x0,
            ANIMPARAM_BOOL: 0x1,
            ANIMPARAM_ENUM: 0x2,
            ANIMPARAM_INT: 0x3,
            ANIMPARAM_FLOAT: 0x4,
            ANIMPARAM_VECTOR: 0x5,
            ANIMPARAM_QUATERNION: 0x6,
            ANIMPARAM_GLOBALSYMBOL: 0x7,
            ANIMPARAM_COUNT: 0x8,
        },
        NmEasingFunction_t: {
            Linear: 0x0,
            Quad: 0x1,
            Cubic: 0x2,
            Quart: 0x3,
            Quint: 0x4,
            Sine: 0x5,
            Expo: 0x6,
            Circ: 0x7,
            Back: 0x8,
        },
        ParticleModelType_t: {
            PM_TYPE_INVALID: 0x0,
            PM_TYPE_NAMED_VALUE_MODEL: 0x1,
            PM_TYPE_NAMED_VALUE_EHANDLE: 0x2,
            PM_TYPE_CONTROL_POINT: 0x3,
            PM_TYPE_COUNT: 0x4,
        },
        IKTargetSource: {
            IKTARGETSOURCE_Bone: 0x0,
            IKTARGETSOURCE_AnimgraphParameter: 0x1,
            IKTARGETSOURCE_COUNT: 0x2,
        },
        PermModelInfo_t__FlagEnum: {
            FLAG_TRANSLUCENT: 0x1,
            FLAG_TRANSLUCENT_TWO_PASS: 0x2,
            FLAG_MODEL_IS_RUNTIME_COMBINED: 0x4,
            FLAG_SOURCE1_IMPORT: 0x8,
            FLAG_MODEL_PART_CHILD: 0x10,
            FLAG_NAV_GEN_NONE: 0x20,
            FLAG_NAV_GEN_HULL: 0x40,
            FLAG_NO_FORCED_FADE: 0x800,
            FLAG_HAS_SKINNED_MESHES: 0x400,
            FLAG_DO_NOT_CAST_SHADOWS: 0x20000,
            FLAG_FORCE_PHONEME_CROSSFADE: 0x1000,
            FLAG_NO_ANIM_EVENTS: 0x100000,
            FLAG_ANIMATION_DRIVEN_FLEXES: 0x200000,
            FLAG_IMPLICIT_BIND_POSE_SEQUENCE: 0x400000,
            FLAG_MODEL_DOC: 0x800000,
        },
        CNmFloatMathNode__Operator_t: {
            Add: 0x0,
            Sub: 0x1,
            Mul: 0x2,
            Div: 0x3,
            Mod: 0x4,
            Abs: 0x5,
            Negate: 0x6,
            Floor: 0x7,
            Ceiling: 0x8,
            IntegerPart: 0x9,
            FractionalPart: 0xA,
            InverseFractionalPart: 0xB,
        },
        CNmSyncEventIndexConditionNode__TriggerMode_t: {
            ExactlyAtEventIndex: 0x0,
            GreaterThanEqualToEventIndex: 0x1,
        },
        ParticleFloatRoundType_t: {
            PF_ROUND_TYPE_INVALID: 0xFFFFFFFFFFFFFFFF,
            PF_ROUND_TYPE_NEAREST: 0x0,
            PF_ROUND_TYPE_FLOOR: 0x1,
            PF_ROUND_TYPE_CEIL: 0x2,
            PF_ROUND_TYPE_COUNT: 0x3,
        },
        PFNoiseType_t: {
            PF_NOISE_TYPE_PERLIN: 0x0,
            PF_NOISE_TYPE_SIMPLEX: 0x1,
            PF_NOISE_TYPE_WORLEY: 0x2,
            PF_NOISE_TYPE_CURL: 0x3,
        },
        ParticleDirectionNoiseType_t: {
            PARTICLE_DIR_NOISE_PERLIN: 0x0,
            PARTICLE_DIR_NOISE_CURL: 0x1,
            PARTICLE_DIR_NOISE_WORLEY_BASIC: 0x2,
        },
        AnimParamNetworkSetting: {
            Auto: 0x0,
            AlwaysNetwork: 0x1,
            NeverNetwork: 0x2,
        },
        MorphFlexControllerRemapType_t: {
            MORPH_FLEXCONTROLLER_REMAP_PASSTHRU: 0x0,
            MORPH_FLEXCONTROLLER_REMAP_2WAY: 0x1,
            MORPH_FLEXCONTROLLER_REMAP_NWAY: 0x2,
            MORPH_FLEXCONTROLLER_REMAP_EYELID: 0x3,
        },
        MeshDrawPrimitiveFlags_t: {
            MESH_DRAW_FLAGS_NONE: 0x0,
            MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH: 0x1,
            MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT: 0x2,
            MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL: 0x8,
            MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING: 0x10,
            MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING: 0x20,
            MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS: 0x40,
            MESH_DRAW_FLAGS_DRAW_LAST: 0x80,
        },
        TargetWarpAngleMode_t: {
            eFacingHeading: 0x0,
            eMoveHeading: 0x1,
        },
        NmIKBlendMode_t: {
            Effector: 0x0,
            Pose: 0x1,
        },
        ModelBoneFlexComponent_t: {
            MODEL_BONE_FLEX_INVALID: 0xFFFFFFFFFFFFFFFF,
            MODEL_BONE_FLEX_TX: 0x0,
            MODEL_BONE_FLEX_TY: 0x1,
            MODEL_BONE_FLEX_TZ: 0x2,
        },
        CNmStateNode__TimedEvent_t__Comparison_t: {
            LessThanEqual: 0x0,
            GreaterThanEqual: 0x1,
        },
        PoseType_t: {
            POSETYPE_STATIC: 0x0,
            POSETYPE_DYNAMIC: 0x1,
            POSETYPE_INVALID: 0xFF,
        },
        CNmRootMotionData__SamplingMode_t: {
            Delta: 0x0,
            WorldSpace: 0x1,
        },
        NmEventConditionRules_t: {
            LimitSearchToSourceState: 0x0,
            IgnoreInactiveEvents: 0x1,
            PreferHighestWeight: 0x2,
            PreferHighestProgress: 0x3,
            OperatorOr: 0x4,
            OperatorAnd: 0x5,
            SearchOnlyGraphEvents: 0x6,
            SearchOnlyAnimEvents: 0x7,
            SearchBothGraphAndAnimEvents: 0x8,
        },
        AnimationType_t: {
            ANIMATION_TYPE_FIXED_RATE: 0x0,
            ANIMATION_TYPE_FIT_LIFETIME: 0x1,
            ANIMATION_TYPE_MANUAL_FRAMES: 0x2,
        },
        AnimValueSource: {
            MoveHeading: 0x0,
            MoveSpeed: 0x1,
            ForwardSpeed: 0x2,
            StrafeSpeed: 0x3,
            FacingHeading: 0x4,
            LookHeading: 0x5,
            LookHeadingNormalized: 0x6,
            LookPitch: 0x7,
            LookDistance: 0x8,
            Parameter: 0x9,
            WayPointHeading: 0xA,
            WayPointDistance: 0xB,
            BoundaryRadius: 0xC,
            TargetMoveHeading: 0xD,
            TargetMoveSpeed: 0xE,
            AccelerationHeading: 0xF,
            AccelerationSpeed: 0x10,
            SlopeHeading: 0x11,
            SlopeAngle: 0x12,
            SlopePitch: 0x13,
            SlopeYaw: 0x14,
            GoalDistance: 0x15,
            AccelerationLeftRight: 0x16,
            AccelerationFrontBack: 0x17,
            RootMotionSpeed: 0x18,
            RootMotionTurnSpeed: 0x19,
            MoveHeadingRelativeToLookHeading: 0x1A,
            MaxMoveSpeed: 0x1B,
            FingerCurl_Thumb: 0x1C,
            FingerCurl_Index: 0x1D,
            FingerCurl_Middle: 0x1E,
            FingerCurl_Ring: 0x1F,
            FingerCurl_Pinky: 0x20,
            FingerSplay_Thumb_Index: 0x21,
            FingerSplay_Index_Middle: 0x22,
            FingerSplay_Middle_Ring: 0x23,
            FingerSplay_Ring_Pinky: 0x24,
        },
        CNmTimeConditionNode__Operator_t: {
            LessThan: 0x0,
            LessThanEqual: 0x1,
            GreaterThan: 0x2,
            GreaterThanEqual: 0x3,
        },
        LinearRootMotionBlendMode_t: {
            LERP: 0x0,
            NLERP: 0x1,
            SLERP: 0x2,
        },
        RagdollPoseControl: {
            Absolute: 0x0,
        },
        IKSolverType: {
            IKSOLVER_Perlin: 0x0,
            IKSOLVER_TwoBone: 0x1,
            IKSOLVER_Fabrik: 0x2,
            IKSOLVER_DogLeg3Bone: 0x3,
            IKSOLVER_CCD: 0x4,
            IKSOLVER_COUNT: 0x5,
        },
        TargetWarpCorrectionMethod: {
            ScaleMotion: 0x0,
            AddCorrectionDelta: 0x1,
        },
        TargetSelectorAngleMode_t: {
            eFacingHeading: 0x0,
            eMoveHeading: 0x1,
        },
        Blend2DMode: {
            Blend2DMode_General: 0x0,
            Blend2DMode_Directional: 0x1,
        },
        HandshakeTagState_t: {
            eInactive: 0x0,
            eActive: 0x1,
            eMomentarilyInactive: 0x2,
        },
        ChoiceChangeMethod: {
            OnReset: 0x0,
            OnCycleEnd: 0x1,
            OnResetOrCycleEnd: 0x2,
        },
        ChoiceBlendMethod: {
            SingleBlendTime: 0x0,
            PerChoiceBlendTimes: 0x1,
        },
        VPhysXConstraintParams_t__EnumFlags0_t: {
            FLAG0_SHIFT_INTERPENETRATE: 0x0,
            FLAG0_SHIFT_CONSTRAIN: 0x1,
            FLAG0_SHIFT_BREAKABLE_FORCE: 0x2,
            FLAG0_SHIFT_BREAKABLE_TORQUE: 0x3,
        },
        ParticleFloatMapType_t: {
            PF_MAP_TYPE_INVALID: 0xFFFFFFFFFFFFFFFF,
            PF_MAP_TYPE_DIRECT: 0x0,
            PF_MAP_TYPE_MULT: 0x1,
            PF_MAP_TYPE_REMAP: 0x2,
            PF_MAP_TYPE_REMAP_BIASED: 0x3,
            PF_MAP_TYPE_CURVE: 0x4,
            PF_MAP_TYPE_NOTCHED: 0x5,
            PF_MAP_TYPE_ROUND: 0x6,
            PF_MAP_TYPE_COUNT: 0x7,
        },
        AnimParamVectorType_t: {
            ANIMPARAM_VECTOR_TYPE_NONE: 0x0,
            ANIMPARAM_VECTOR_TYPE_POSITION_WS: 0x1,
            ANIMPARAM_VECTOR_TYPE_POSITION_LS: 0x2,
            ANIMPARAM_VECTOR_TYPE_DIRECTION_WS: 0x3,
            ANIMPARAM_VECTOR_TYPE_DIRECTION_LS: 0x4,
        },
        CNmCurrentSyncEventNode__InfoType_t: {
            IndexAndPercentage: 0x0,
            IndexOnly: 0x1,
            PercentageOnly: 0x2,
        },
        BlendKeyType: {
            BlendKey_UserValue: 0x0,
            BlendKey_Velocity: 0x1,
            BlendKey_Distance: 0x2,
            BlendKey_RemainingDistance: 0x3,
        },
        StateActionBehavior: {
            STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT: 0x0,
            STATETAGBEHAVIOR_FIRE_ON_ENTER: 0x1,
            STATETAGBEHAVIOR_FIRE_ON_EXIT: 0x2,
            STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT: 0x3,
            STATETAGBEHAVIOR_ACTIVE_WHILE_FULLY_BLENDED: 0x4,
        },
        NmRootMotionBlendMode_t: {
            Blend: 0x0,
            Additive: 0x1,
            IgnoreSource: 0x2,
            IgnoreTarget: 0x3,
        },
        NmFootPhaseCondition_t: {
            LeftFootDown: 0x0,
            LeftFootPassing: 0x1,
            LeftPhase: 0x4,
            RightFootDown: 0x2,
            RightFootPassing: 0x3,
            RightPhase: 0x5,
            None: 0x6,
        },
        ModelSkeletonData_t__BoneFlags_t: {
            FLAG_NO_BONE_FLAGS: 0x0,
            FLAG_BONEFLEXDRIVER: 0x4,
            FLAG_CLOTH: 0x8,
            FLAG_PHYSICS: 0x10,
            FLAG_ATTACHMENT: 0x20,
            FLAG_ANIMATION: 0x40,
            FLAG_MESH: 0x80,
            FLAG_HITBOX: 0x100,
            FLAG_BONE_USED_BY_VERTEX_LOD0: 0x400,
            FLAG_BONE_USED_BY_VERTEX_LOD1: 0x800,
            FLAG_BONE_USED_BY_VERTEX_LOD2: 0x1000,
            FLAG_BONE_USED_BY_VERTEX_LOD3: 0x2000,
            FLAG_BONE_USED_BY_VERTEX_LOD4: 0x4000,
            FLAG_BONE_USED_BY_VERTEX_LOD5: 0x8000,
            FLAG_BONE_USED_BY_VERTEX_LOD6: 0x10000,
            FLAG_BONE_USED_BY_VERTEX_LOD7: 0x20000,
            FLAG_BONE_MERGE_READ: 0x40000,
            FLAG_BONE_MERGE_WRITE: 0x80000,
            FLAG_ALL_BONE_FLAGS: 0xFFFFF,
            BLEND_PREALIGNED: 0x100000,
            FLAG_RIGIDLENGTH: 0x200000,
            FLAG_PROCEDURAL: 0x400000,
        },
        GPUParticleCollisionMode_t: {
            PARTICLE_GPU_COLLISION_MODE_RT: 0x0,
            PARTICLE_GPU_COLLISION_MODE_DEPTH: 0x1,
            PARTICLE_GPU_COLLISION_MODE_HYBRID: 0x2,
        },
        MorphBundleType_t: {
            MORPH_BUNDLE_TYPE_NONE: 0x0,
            MORPH_BUNDLE_TYPE_POSITION_SPEED: 0x1,
            MORPH_BUNDLE_TYPE_NORMAL_WRINKLE: 0x2,
            MORPH_BUNDLE_TYPE_COUNT: 0x3,
        },
        CNmIDComparisonNode__Comparison_t: {
            Matches: 0x0,
            DoesntMatch: 0x1,
        },
        NmPoseBlendMode_t: {
            Overlay: 0x0,
            Additive: 0x1,
            ModelSpace: 0x2,
        },
        ParticleFloatInputMode_t: {
            PF_INPUT_MODE_INVALID: 0xFFFFFFFFFFFFFFFF,
            PF_INPUT_MODE_CLAMPED: 0x0,
            PF_INPUT_MODE_LOOPED: 0x1,
            PF_INPUT_MODE_COUNT: 0x2,
        },
        ResetCycleOption: {
            Beginning: 0x0,
            SameCycleAsSource: 0x1,
            InverseSourceCycle: 0x2,
            FixedValue: 0x3,
            SameTimeAsSource: 0x4,
        },
        CNmVectorInfoNode__Info_t: {
            X: 0x0,
            Y: 0x1,
            Z: 0x2,
            Length: 0x3,
            AngleHorizontal: 0x4,
            AngleVertical: 0x5,
        },
        IKChannelMode: {
            TwoBone: 0x0,
            TwoBone_Translate: 0x1,
            OneBone: 0x2,
            OneBone_Translate: 0x3,
        },
        NmGraphValueType_t: {
            Unknown: 0x0,
            Bool: 0x1,
            ID: 0x2,
            Float: 0x3,
            Vector: 0x4,
            Target: 0x5,
            BoneMask: 0x6,
            Pose: 0x7,
            Special: 0x8,
        },
        ParticleFloatRandomMode_t: {
            PF_RANDOM_MODE_INVALID: 0xFFFFFFFFFFFFFFFF,
            PF_RANDOM_MODE_CONSTANT: 0x0,
            PF_RANDOM_MODE_VARYING: 0x1,
            PF_RANDOM_MODE_COUNT: 0x2,
        },
        PFNoiseModifier_t: {
            PF_NOISE_MODIFIER_NONE: 0x0,
            PF_NOISE_MODIFIER_LINES: 0x1,
            PF_NOISE_MODIFIER_CLUMPS: 0x2,
            PF_NOISE_MODIFIER_RINGS: 0x3,
        },
        ParticleVecType_t: {
            PVEC_TYPE_INVALID: 0xFFFFFFFFFFFFFFFF,
            PVEC_TYPE_LITERAL: 0x0,
            PVEC_TYPE_LITERAL_COLOR: 0x1,
            PVEC_TYPE_NAMED_VALUE: 0x2,
            PVEC_TYPE_PARTICLE_VECTOR: 0x3,
            PVEC_TYPE_PARTICLE_INITIAL_VECTOR: 0x4,
            PVEC_TYPE_PARTICLE_VELOCITY: 0x5,
            PVEC_TYPE_PARTICLE_GRAVITY: 0x6,
            PVEC_TYPE_CP_VALUE: 0x7,
            PVEC_TYPE_CP_RELATIVE_POSITION: 0x8,
            PVEC_TYPE_CP_RELATIVE_DIR: 0x9,
            PVEC_TYPE_CP_RELATIVE_RANDOM_DIR: 0xA,
            PVEC_TYPE_FLOAT_COMPONENTS: 0xB,
            PVEC_TYPE_FLOAT_INTERP_CLAMPED: 0xC,
            PVEC_TYPE_FLOAT_INTERP_OPEN: 0xD,
            PVEC_TYPE_FLOAT_INTERP_GRADIENT: 0xE,
            PVEC_TYPE_RANDOM_UNIFORM: 0xF,
            PVEC_TYPE_RANDOM_UNIFORM_OFFSET: 0x10,
            PVEC_TYPE_CP_DELTA: 0x11,
            PVEC_TYPE_CLOSEST_CAMERA_POSITION: 0x12,
            PVEC_TYPE_COUNT: 0x13,
        },
        NmFootPhase_t: {
            LeftFootDown: 0x0,
            RightFootPassing: 0x1,
            RightFootDown: 0x2,
            LeftFootPassing: 0x3,
            None: 0x4,
        },
        CNmTargetInfoNode__Info_t: {
            AngleHorizontal: 0x0,
            AngleVertical: 0x1,
            Distance: 0x2,
            DistanceHorizontalOnly: 0x3,
            DistanceVerticalOnly: 0x4,
            DeltaOrientationX: 0x5,
            DeltaOrientationY: 0x6,
            DeltaOrientationZ: 0x7,
        },
        FootstepLandedFootSoundType_t: {
            FOOTSOUND_Left: 0x0,
            FOOTSOUND_Right: 0x1,
            FOOTSOUND_UseOverrideSound: 0x2,
        },
        FootLockSubVisualization: {
            FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis: 0x0,
            FOOTLOCKSUBVISUALIZATION_IKSolve: 0x1,
        },
        CNmSoundEvent__Position_t: {
            None: 0x0,
            World: 0x1,
            EntityPos: 0x2,
            EntityEyePos: 0x3,
            EntityAttachment: 0x4,
        },
        FootstepJumpPhase_t: {
            Unknown: 0x0,
            NotJumping: 0x1,
            Jumping: 0x2,
            Landing: 0x4,
        },
        NmFrameSnapEventMode_t: {
            Floor: 0x0,
            Round: 0x1,
        },
        FootPinningTimingSource: {
            FootMotion: 0x0,
            Tag: 0x1,
            Parameter: 0x2,
        },
        DampingSpeedFunction: {
            NoDamping: 0x0,
            Constant: 0x1,
            Spring: 0x2,
            AsymmetricSpring: 0x3,
        },
        AnimationProcessingType_t: {
            ANIMATION_PROCESSING_SERVER_SIMULATION: 0x0,
            ANIMATION_PROCESSING_CLIENT_SIMULATION: 0x1,
            ANIMATION_PROCESSING_CLIENT_PREDICTION: 0x2,
            ANIMATION_PROCESSING_CLIENT_INTERPOLATION: 0x3,
            ANIMATION_PROCESSING_CLIENT_RENDER: 0x4,
            ANIMATION_PROCESSING_MAX: 0x5,
        },
        JiggleBoneSimSpace: {
            SimSpace_Local: 0x0,
            SimSpace_Model: 0x1,
            SimSpace_World: 0x2,
        },
        StanceOverrideMode: {
            Sequence: 0x0,
            Node: 0x1,
        },
        IkEndEffectorType: {
            IkEndEffector_Attachment: 0x0,
            IkEndEffector_Bone: 0x1,
        },
        AnimScriptType: {
            ANIMSCRIPT_TYPE_INVALID: 0xFFFFFFFFFFFFFFFF,
            ANIMSCRIPT_FUSE_GENERAL: 0x0,
            ANIMSCRIPT_FUSE_STATEMACHINE: 0x1,
        },
        CNmTimeConditionNode__ComparisonType_t: {
            PercentageThroughState: 0x0,
            PercentageThroughSyncEvent: 0x1,
            ElapsedTime: 0x2,
        },
        SeqPoseSetting_t: {
            SEQ_POSE_SETTING_CONSTANT: 0x0,
            SEQ_POSE_SETTING_ROTATION: 0x1,
            SEQ_POSE_SETTING_POSITION: 0x2,
            SEQ_POSE_SETTING_VELOCITY: 0x3,
        },
        AnimParamButton_t: {
            ANIMPARAM_BUTTON_NONE: 0x0,
            ANIMPARAM_BUTTON_DPAD_UP: 0x1,
            ANIMPARAM_BUTTON_DPAD_RIGHT: 0x2,
            ANIMPARAM_BUTTON_DPAD_DOWN: 0x3,
            ANIMPARAM_BUTTON_DPAD_LEFT: 0x4,
            ANIMPARAM_BUTTON_A: 0x5,
            ANIMPARAM_BUTTON_B: 0x6,
            ANIMPARAM_BUTTON_X: 0x7,
            ANIMPARAM_BUTTON_Y: 0x8,
            ANIMPARAM_BUTTON_LEFT_SHOULDER: 0x9,
            ANIMPARAM_BUTTON_RIGHT_SHOULDER: 0xA,
            ANIMPARAM_BUTTON_LTRIGGER: 0xB,
            ANIMPARAM_BUTTON_RTRIGGER: 0xC,
        },
        SelectorTagBehavior_t: {
            SelectorTagBehavior_OnWhileCurrent: 0x0,
            SelectorTagBehavior_OffWhenFinished: 0x1,
            SelectorTagBehavior_OffBeforeFinished: 0x2,
        },
        HandshakeTagType_t: {
            eInvalid: 0xFFFFFFFFFFFFFFFF,
            eTask: 0x0,
            eMovement: 0x1,
            eCount: 0x2,
        },
        OrientationWarpTargetOffsetMode_t: {
            eLiteralValue: 0x0,
            eParameter: 0x1,
            eAnimationMovementHeading: 0x2,
            eAnimationMovementHeadingAtEnd: 0x3,
        },
        OrientationWarpMode_t: {
            eInvalid: 0x0,
            eAngle: 0x1,
            eWorldPosition: 0x2,
        },
        ParticleTransformType_t: {
            PT_TYPE_INVALID: 0x0,
            PT_TYPE_NAMED_VALUE: 0x1,
            PT_TYPE_CONTROL_POINT: 0x2,
            PT_TYPE_CONTROL_POINT_RANGE: 0x3,
            PT_TYPE_COUNT: 0x4,
        },
        ParticleAttachment_t: {
            PATTACH_INVALID: 0xFFFFFFFFFFFFFFFF,
            PATTACH_ABSORIGIN: 0x0,
            PATTACH_ABSORIGIN_FOLLOW: 0x1,
            PATTACH_CUSTOMORIGIN: 0x2,
            PATTACH_CUSTOMORIGIN_FOLLOW: 0x3,
            PATTACH_POINT: 0x4,
            PATTACH_POINT_FOLLOW: 0x5,
            PATTACH_EYES_FOLLOW: 0x6,
            PATTACH_OVERHEAD_FOLLOW: 0x7,
            PATTACH_WORLDORIGIN: 0x8,
            PATTACH_ROOTBONE_FOLLOW: 0x9,
            PATTACH_RENDERORIGIN_FOLLOW: 0xA,
            PATTACH_MAIN_VIEW: 0xB,
            PATTACH_WATERWAKE: 0xC,
            PATTACH_CENTER_FOLLOW: 0xD,
            PATTACH_CUSTOM_GAME_STATE_1: 0xE,
            PATTACH_HEALTHBAR: 0xF,
            MAX_PATTACH_TYPES: 0x10,
        },
        CNmEventTargetEntity_t: {
            Self: 0x0,
            Weapon: 0x1,
            HeldItem: 0x2,
            Custom: 0x3,
        },
        FieldNetworkOption: {
            Auto: 0x0,
            ForceEnable: 0x1,
            ForceDisable: 0x2,
        },
        NmGraphEventTypeCondition_t: {
            Entry: 0x0,
            FullyInState: 0x1,
            Exit: 0x2,
            Timed: 0x3,
            Generic: 0x4,
            Any: 0x5,
        },
        CNmTransitionNode__TransitionOptions_t: {
            None: 0x0,
            ClampDuration: 0x1,
            Synchronized: 0x2,
            MatchSourceTime: 0x3,
            MatchSyncEventIndex: 0x4,
            MatchSyncEventID: 0x5,
            MatchSyncEventPercentage: 0x6,
            PreferClosestSyncEventID: 0x7,
            MatchTimeInSeconds: 0x8,
            OffsetTimeInSeconds: 0x9,
        },
        CNmFloatComparisonNode__Comparison_t: {
            GreaterThanEqual: 0x0,
            LessThanEqual: 0x1,
            NearEqual: 0x2,
            GreaterThan: 0x3,
            LessThan: 0x4,
        },
        VPhysXJoint_t__Flags_t: {
            JOINT_FLAGS_NONE: 0x0,
            JOINT_FLAGS_BODY1_FIXED: 0x1,
            JOINT_FLAGS_USE_BLOCK_SOLVER: 0x2,
        },
        ScriptedHeldWeaponBehavior_t: {
            eInvalid: 0xFFFFFFFFFFFFFFFF,
            eHolster: 0x0,
            eDeploy: 0x1,
            eDrop: 0x2,
        },
        VelocityMetricMode: {
            DirectionOnly: 0x0,
            MagnitudeOnly: 0x1,
            DirectionAndMagnitude: 0x2,
        },
        FacingMode: {
            FacingMode_Invalid: 0x0,
            FacingMode_Manual: 0x1,
            FacingMode_Path: 0x2,
            FacingMode_LookTarget: 0x3,
            FacingMode_ManualPosition: 0x4,
        },
        VertexAlbedoFormat_t: {
            VERTEX_ALBEDO_NONE: 0x0,
            VERTEX_ALBEDO_8888: 0x1,
            VERTEX_ALBEDO_565: 0x2,
        },
        AimMatrixBlendMode: {
            AimMatrixBlendMode_None: 0x0,
            AimMatrixBlendMode_Additive: 0x1,
            AimMatrixBlendMode_ModelSpaceAdditive: 0x2,
            AimMatrixBlendMode_BoneMask: 0x3,
        },
        AnimationSnapshotType_t: {
            ANIMATION_SNAPSHOT_SERVER_SIMULATION: 0x0,
            ANIMATION_SNAPSHOT_CLIENT_SIMULATION: 0x1,
            ANIMATION_SNAPSHOT_CLIENT_PREDICTION: 0x2,
            ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION: 0x3,
            ANIMATION_SNAPSHOT_CLIENT_RENDER: 0x4,
            ANIMATION_SNAPSHOT_FINAL_COMPOSITE: 0x5,
            ANIMATION_SNAPSHOT_MAX: 0x6,
        },
        NmTargetWarpRule_t: {
            WarpXY: 0x0,
            WarpZ: 0x1,
            WarpXYZ: 0x2,
            RotationOnly: 0x3,
            FixedSection: 0x4,
        },
        FootFallTagFoot_t: {
            FOOT1: 0x0,
            FOOT2: 0x1,
            FOOT3: 0x2,
            FOOT4: 0x3,
            FOOT5: 0x4,
            FOOT6: 0x5,
            FOOT7: 0x6,
            FOOT8: 0x7,
        },
        ChoiceMethod: {
            WeightedRandom: 0x0,
            WeightedRandomNoRepeat: 0x1,
            Iterate: 0x2,
            IterateRandom: 0x3,
        },
        AnimVectorSource: {
            MoveDirection: 0x0,
            FacingPosition: 0x1,
            LookDirection: 0x2,
            VectorParameter: 0x3,
            WayPointDirection: 0x4,
            Acceleration: 0x5,
            SlopeNormal: 0x6,
            SlopeNormal_WorldSpace: 0x7,
            LookTarget: 0x8,
            LookTarget_WorldSpace: 0x9,
            WayPointPosition: 0xA,
            GoalPosition: 0xB,
            RootMotionVelocity: 0xC,
            ManualTarget_WorldSpace: 0xD,
        },
        IkTargetType: {
            IkTarget_Attachment: 0x0,
            IkTarget_Bone: 0x1,
            IkTarget_Parameter_ModelSpace: 0x2,
            IkTarget_Parameter_WorldSpace: 0x3,
        },
        RenderMeshSlotType_t: {
            RENDERMESH_SLOT_INVALID: 0xFFFFFFFFFFFFFFFF,
            RENDERMESH_SLOT_PER_VERTEX: 0x0,
            RENDERMESH_SLOT_PER_INSTANCE: 0x1,
        },
        BoneMaskBlendSpace: {
            BlendSpace_Parent: 0x0,
            BlendSpace_Model: 0x1,
            BlendSpace_Model_RotationOnly: 0x2,
            BlendSpace_Model_TranslationOnly: 0x3,
        },
        MovementCapability_t: {
            eStrafe: 0x0,
            eIdleTurn: 0x1,
            eStart: 0x2,
            eStop: 0x3,
            eInstantStop: 0x4,
            eShuffle: 0x5,
            ePlantedTurn: 0x6,
            eUseStartAsPlantedTurn: 0x7,
            eLean: 0x8,
            eCount: 0x9,
        },
        ModelConfigAttachmentType_t: {
            MODEL_CONFIG_ATTACHMENT_INVALID: 0xFFFFFFFFFFFFFFFF,
            MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT: 0x0,
            MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE: 0x1,
            MODEL_CONFIG_ATTACHMENT_BONEMERGE: 0x2,
            MODEL_CONFIG_ATTACHMENT_COUNT: 0x3,
        },
        BinaryNodeChildOption: {
            Child1: 0x0,
            Child2: 0x1,
        },
        NPCPhysicsHullType_t: {
            eInvalid: 0x0,
            eGroundCapsule: 0x1,
            eCenteredCapsule: 0x2,
            eGenericCapsule: 0x3,
            eGroundBox: 0x4,
        },
        JumpCorrectionMethod: {
            ScaleMotion: 0x0,
            AddCorrectionDelta: 0x1,
        },
        MoodType_t: {
            eMoodType_Head: 0x0,
            eMoodType_Body: 0x1,
        },
        CPulseCell_WaitForCursorsWithTag: {
        },
        CPulseCell_Base: {
        },
        CPulse_ResumePoint: {
        },
        CPulseCell_PickBestOutflowSelector: {
        },
        CParticleBindingRealPulse: {
        },
        CPulseCell_WaitForObservable: {
        },
        CPulse_OutflowConnection: {
        },
        CPulseGraphDef: {
        },
        CPulseCell_FireCursors: {
        },
        CPulseCell_Timeline__TimelineEvent_t: {
        },
        CPulseCell_IntervalTimer__CursorState_t: {
        },
        CPulseCell_BaseRequirement: {
        },
        CPulseCell_BaseState: {
        },
        OutflowWithRequirements_t: {
        },
        CPulseCell_IsRequirementValid: {
        },
        CPulseCell_Value_Gradient: {
        },
        CPulseCursorFuncs: {
        },
        PulseNodeDynamicOutflows_t__DynamicOutflow_t: {
        },
        CBasePulseGraphInstance: {
        },
        CPulseCell_Inflow_GraphHook: {
        },
        SignatureOutflow_Resume: {
        },
        CPulseCell_Inflow_BaseEntrypoint: {
        },
        CPulseCell_WaitForCursorsWithTagBase: {
        },
        CPulse_InvokeBinding: {
        },
        CPulseCell_IntervalTimer: {
        },
        CPulseTestScriptLib: {
        },
        CPulseCell_BaseLerp: {
        },
        CPulseCell_Value_Curve: {
        },
        CPulseCell_Inflow_EventHandler: {
        },
        CPulseCell_BaseFlow: {
        },
        CPulseCell_Outflow_CycleShuffled__InstanceState_t: {
        },
        CPulseCell_BaseLerp__CursorState_t: {
        },
        CPulseCell_WaitForCursorsWithTagBase__CursorState_t: {
        },
        CPulseArraylib: {
        },
        SignatureOutflow_Continue: {
        },
        CPulseCell_Timeline: {
        },
        CPulseCell_Inflow_EntOutputHandler: {
        },
        CPulseCell_Outflow_CycleOrdered__InstanceState_t: {
        },
        CParticleCollectionBindingInstance: {
        },
        CPulseCell_LimitCount__InstanceState_t: {
        },
        CPulseCell_Step_DebugLog: {
        },
        CPulseCell_BaseYieldingInflow: {
        },
        PulseNodeDynamicOutflows_t: {
        },
        CPulseCell_IsRequirementValid__Criteria_t: {
        },
        CPulseCell_Inflow_ObservableVariableListener: {
        },
        CPulseCell_Outflow_CycleOrdered: {
        },
        PulseSelectorOutflowList_t: {
        },
        CPulseCell_Inflow_Wait: {
        },
        CPulseCell_Outflow_CycleShuffled: {
        },
        CPulseCell_Inflow_Method: {
        },
        CPulseCell_BaseValue: {
        },
        CPulseCell_BooleanSwitchState: {
        },
        CPulseCell_Inflow_Yield: {
        },
        CPulseMathlib: {
        },
        CPulseCell_Unknown: {
        },
        CPulseCell_Outflow_CycleRandom: {
        },
        CPulseCell_Step_PublicOutput: {
        },
        CPulse_BlackboardReference: {
        },
        CPulseCell_Value_RandomInt: {
        },
        CAnimationLayer: {
        },
        CPulse_CallInfo: {
        },
        CPulseCell_InlineNodeSkipSelector: {
        },
        CPulseCell_LimitCount: {
        },
        CPulseCell_Step_CallExternalMethod: {
        },
        PulseObservableBoolExpression_t: {
        },
        CPulseCell_LimitCount__Criteria_t: {
        },
        CPulseCell_CursorQueue: {
        },
        CPulseCell_Value_RandomFloat: {
        },
        CPulseExecCursor: {
        },
        CAnimFrameBlockAnim: {
        },
        CZeroPoseUpdateNode: {
        },
        CSlowDownOnSlopesUpdateNode: {
        },
        COrientationWarpUpdateNode: {
        },
        CAnimParameterBase: {
        },
        CSequenceFinishedAnimTag: {
        },
        CSceneObjectData: {
        },
        CFootCycle: {
        },
        CParticleModelInput: {
        },
        CInputStreamUpdateNode: {
        },
        CIntAnimParameter: {
        },
        CNmParameterizedBlendNode__CDefinition: {
        },
        CNmScaleTask: {
        },
        PerTickSettings_t: {
        },
        CNmFrameSnapEvent: {
        },
        CAnimNodePath: {
        },
        AnimNodeOutputID: {
        },
        CNmSyncTrack: {
        },
        CSeqBoneMaskList: {
        },
        CAnimEncodedFrames: {
        },
        SampleCode: {
        },
        CCachedPose: {
        },
        CNmTransitionEventConditionNode__CDefinition: {
        },
        CTaskStatusAnimTag: {
        },
        CStateNodeInstanceData: {
        },
        CMotionGraphConfig: {
        },
        CMotionSearchNode: {
        },
        CAnimActivity: {
        },
        CAnimScriptManager: {
        },
        AnimationDecodeDebugDumpElement_t: {
        },
        CChoreoInstanceData: {
        },
        ConfigIndex: {
        },
        VPhysXCollisionAttributes_t: {
        },
        CSequenceUpdateNode: {
        },
        CStateMachineInstanceData: {
        },
        CNmPassthroughNode__CDefinition: {
        },
        CNmClipReferenceNode__CDefinition: {
        },
        CNmGraphDefinition__ExternalGraphSlot_t: {
        },
        CAimCameraUpdateNode: {
        },
        LookData: {
        },
        CSeqSeqDescFlag: {
        },
        PermModelInfo_t: {
        },
        StanceInfo_t: {
        },
        IKBoneNameAndIndex_t: {
        },
        CStanceScaleUpdateNode: {
        },
        CNmBoneMaskBlendNode__CDefinition: {
        },
        CNmIDEventNode__CDefinition: {
        },
        HitReactFixedSettings_t: {
        },
        CNmPoseNode__CDefinition: {
        },
        CAnimTagBase: {
        },
        CPerParticleVecInput: {
        },
        CMotionGraph: {
        },
        CNmVectorInfoNode__CDefinition: {
        },
        AnimationSnapshot_t: {
        },
        CNmBlendTask: {
        },
        CNmVectorValueNode__CDefinition: {
        },
        CSeqTransition: {
        },
        CNmPoseTask: {
        },
        CAnimGraphSettingsGroup: {
        },
        CNmVirtualParameterTargetNode__CDefinition: {
        },
        CAnimGraphDebugReplay: {
        },
        CVectorAnimParameter: {
        },
        CNmCachedPoseReadTask: {
        },
        CNmStateMachineNode__StateDefinition_t: {
        },
        CStanceOverrideUpdateNode: {
        },
        CNmGraphDefinition__ExternalPoseSlot_t: {
        },
        PhysShapeMarkup_t: {
        },
        CBlend2DInstanceData: {
        },
        LookAtBone_t: {
        },
        CDirectPlaybackInstanceData: {
        },
        CNmTransitionNode__CDefinition: {
        },
        CNmFloatEaseNode__CDefinition: {
        },
        CAnimationGraphInstance: {
        },
        CAnimEncodeDifference: {
        },
        CRootUpdateNode: {
        },
        CNmTargetOffsetNode__CDefinition: {
        },
        MotionMatchingInstanceData: {
        },
        CMotionGraphUpdateNode: {
        },
        CNmFloatAngleMathNode__CDefinition: {
        },
        CAnimParamHandle: {
        },
        WeightList: {
        },
        MotionIndex: {
        },
        FollowAttachmentSettings_t: {
        },
        CNmReferencedGraphNode__CDefinition: {
        },
        AnimNodeID: {
        },
        CNmClipSelectorNode__CDefinition: {
        },
        CLookComponentUpdater: {
        },
        CNmIsExternalPoseSetNode__CDefinition: {
        },
        CAnimGraphNetworkSettings: {
        },
        CSingleFrameUpdateNode: {
        },
        CNmChainLookatNode__CDefinition: {
        },
        CNmFollowBoneNode__CDefinition: {
        },
        CBlockSelectionMetricEvaluator: {
        },
        MovementData: {
        },
        CRemapValueComponentUpdater: {
        },
        CModelConfigList: {
        },
        CSeqAutoLayerFlag: {
        },
        AnimStateID: {
        },
        CNmIDEventConditionNode__CDefinition: {
        },
        ModelBoneFlexDriver_t: {
        },
        CMorphData: {
        },
        CFootPinningUpdateNode: {
        },
        CSeqPoseSetting: {
        },
        CNmVirtualParameterFloatNode__CDefinition: {
        },
        CAttachment: {
        },
        CSequenceUpdateNodeBase: {
        },
        CDrawCullingData: {
        },
        VPhysXJoint_t: {
        },
        CStateNodeTransitionData: {
        },
        CTimeRemainingMetricEvaluator: {
        },
        CParticleInput: {
        },
        CModelConfigElement: {
        },
        CNmControlParameterVectorNode__CDefinition: {
        },
        FootFixedSettings: {
        },
        CNmBoneMaskSwitchNode__CDefinition: {
        },
        CModelConfig: {
        },
        AnimComponentID: {
        },
        VPhysXAggregateData_t: {
        },
        CNmGraphDefinition: {
        },
        CNmSelectorNode__CDefinition: {
        },
        CAnimDemoCaptureSettings: {
        },
        IKDemoCaptureSettings_t: {
        },
        CSeqMultiFetchFlag: {
        },
        VPhysXRange_t: {
        },
        CStopAtGoalUpdateNode: {
        },
        CNmIDEventPercentageThroughNode__CDefinition: {
        },
        CAnimBoneDifference: {
        },
        CNmCachedBoolNode__CDefinition: {
        },
        CAnimCycle: {
        },
        CActionComponentUpdater: {
        },
        CDirectionalBlendInstanceData: {
        },
        CDampedPathAnimMotorUpdater: {
        },
        CNmCachedFloatNode__CDefinition: {
        },
        CNmFloatSwitchNode__CDefinition: {
        },
        CModelConfigElement_SetMaterialGroupOnAttachedModels: {
        },
        CNmEntityAttributeEventBase: {
        },
        CNmVirtualParameterBoneMaskNode__CDefinition: {
        },
        SequenceData: {
        },
        CPathHelperUpdateNode: {
        },
        MaterialGroup_t: {
        },
        CMorphBundleData: {
        },
        CModelConfigElement_UserPick: {
        },
        CSolveIKTargetHandle_t: {
        },
        CFootAdjustmentUpdateNode: {
        },
        CChoreoUpdateNode: {
        },
        CAimConstraint: {
        },
        CMaterialDrawDescriptor__RigidMeshPart_t: {
        },
        CFootFallAnimTag: {
        },
        CMaterialDrawDescriptor: {
        },
        CNmSkeleton: {
        },
        CStepsRemainingMetricEvaluator: {
        },
        CNmVelocityBlendNode__CDefinition: {
        },
        CNmZeroPoseTask: {
        },
        CBodyGroupSetting: {
        },
        CVectorQuantizer: {
        },
        ParticleNamedValueConfiguration_t: {
        },
        CNmVectorCreateNode__CDefinition: {
        },
        CParticleVecInput: {
        },
        CNmStateNode__CDefinition: {
        },
        CNmBoneMaskSelectorNode__CDefinition: {
        },
        CNmVirtualParameterVectorNode__CDefinition: {
        },
        CFootCycleMetricEvaluator: {
        },
        CNmConstIDNode__CDefinition: {
        },
        CHitBox: {
        },
        CNmParameterizedSelectorNode__CDefinition: {
        },
        ModelSkeletonData_t: {
        },
        CNmEvent: {
        },
        NmCompressionSettings_t__QuantizationRange_t: {
        },
        CNmBlendTaskBase: {
        },
        TagSpan_t: {
        },
        CNmConstTargetNode__CDefinition: {
        },
        CRemapValueUpdateItem: {
        },
        PermModelDataAnimatedMaterialAttribute_t: {
        },
        CMotionDataSet: {
        },
        CProductQuantizer: {
        },
        CChoiceUpdateNode: {
        },
        SkeletonAnimCapture_t__Bone_t: {
        },
        CExpressionActionUpdater: {
        },
        CNmFloatMathNode__CDefinition: {
        },
        CAnimationGraphVisualizerLine: {
        },
        CCycleControlUpdateNode: {
        },
        CNmTargetInfoNode__CDefinition: {
        },
        CDampedValueComponentUpdater: {
        },
        CBaseConstraint: {
        },
        CNmControlParameterFloatNode__CDefinition: {
        },
        BlendItem_t: {
        },
        DampedPathMotorInstanceData_t: {
        },
        CNmIsExternalGraphSlotFilledNode__CDefinition: {
        },
        CNewParticleEffect: {
        },
        CNmClipNode__CDefinition: {
        },
        CNmMaterialAttributeEvent: {
        },
        CNmBlend1DNode__CDefinition: {
        },
        CConcreteAnimParameter: {
        },
        CNmBoneWeightList: {
        },
        CPairedSequenceUpdateNode: {
        },
        CModelConfigElement_RandomPick: {
        },
        CNmReferencePoseTask: {
        },
        CNmScaleNode__CDefinition: {
        },
        VPhysXConstraint2_t: {
        },
        CConstraintTarget: {
        },
        SkeletonAnimCapture_t: {
        },
        CAnimUser: {
        },
        CRagdollComponentUpdater: {
        },
        ParticleNamedValueSource_t: {
        },
        CFootDefinition: {
        },
        CSeqSynthAnimDesc: {
        },
        CNmLayerBlendNode__LayerDefinition_t: {
        },
        CAnimComponentUpdater: {
        },
        CBlend2DUpdateNode: {
        },
        CNmVelocityBasedSpeedScaleNode__CDefinition: {
        },
        CNPCPhysicsHull: {
        },
        PermModelExtPart_t: {
        },
        CNmCachedIDNode__CDefinition: {
        },
        CLeanMatrixUpdateNode: {
        },
        CSymbolAnimParameter: {
        },
        CNmFloatCurveEventNode__CDefinition: {
        },
        IAnimationGraphInstance: {
        },
        CNmStateMachineNode__TransitionDefinition_t: {
        },
        CNmFloatSelectorNode__CDefinition: {
        },
        CTargetSelectorUpdateNode: {
        },
        SlopeData: {
        },
        CHitBoxSetList: {
        },
        CNmIsInactiveBranchConditionNode__CDefinition: {
        },
        MotionDBIndex: {
        },
        CDirectPlaybackTagData: {
        },
        CParticleCollectionVecInput: {
        },
        CNmGraphEventConditionNode__Condition_t: {
        },
        CNmFloatRemapNode__RemapRange_t: {
        },
        CNmCurrentSyncEventIDNode__CDefinition: {
        },
        CNmStateCompletedConditionNode__CDefinition: {
        },
        CNmTargetWarpEvent: {
        },
        CParamSpanUpdater: {
        },
        CAnimActionUpdater: {
        },
        CParticleAnimTag: {
        },
        CCycleBase: {
        },
        FollowTargetOpFixedSettings_t: {
        },
        CNmIDSwitchNode__CDefinition: {
        },
        CNmRootMotionEvent: {
        },
        CChoiceInstanceData: {
        },
        AnimationSnapshotBase_t: {
        },
        CEmitTagActionUpdater: {
        },
        DynamicMeshDeformParams_t: {
        },
        CNmTimeConditionNode__CDefinition: {
        },
        CNmSyncEventIndexConditionNode__CDefinition: {
        },
        CAnimStateMachineUpdater: {
        },
        CUnaryUpdateNode: {
        },
        CNmIDToFloatNode__CDefinition: {
        },
        PlayerInputMotorInstanceData_t: {
        },
        CCompressorGroup: {
        },
        CSelectorUpdateNode: {
        },
        NmPercent_t: {
        },
        CStateMachineComponentUpdater: {
        },
        CAnimUpdateNodeRef: {
        },
        CPhysSurfaceProperties: {
        },
        CNmBoneMaskValueNode__CDefinition: {
        },
        CSeqPoseParamDesc: {
        },
        CModelConfigElement_SetBodygroup: {
        },
        CAnimMovement: {
        },
        CParticleRemapFloatInput: {
        },
        FollowAttachmentData: {
        },
        FootStepTrigger: {
        },
        CNmSyncTrack__EventMarker_t: {
        },
        CPathMetricEvaluator: {
        },
        CFootLockUpdateNode: {
        },
        CNmOrientationWarpEvent: {
        },
        CNmIDValueNode__CDefinition: {
        },
        JiggleBoneSettings_t: {
        },
        CJumpHelperUpdateNode: {
        },
        CNmControlParameterBoolNode__CDefinition: {
        },
        CNmChainLookatTask: {
        },
        FootLockPoseOpFixedSettings: {
        },
        CBoneVelocityMetricEvaluator: {
        },
        CWarpSectionAnimTag: {
        },
        SelectorInstanceData_t: {
        },
        CModelConfigElement_RandomColor: {
        },
        CFootMotion: {
        },
        CJiggleBoneUpdateNode: {
        },
        CNmConstVectorNode__CDefinition: {
        },
        MoodAnimation_t: {
        },
        CLODComponentUpdater: {
        },
        CNmIsTargetSetNode__CDefinition: {
        },
        CPhysSurfacePropertiesVehicle: {
        },
        CAnimDataChannelDesc: {
        },
        CPairedSequenceComponentUpdater: {
        },
        CNmParticleEvent: {
        },
        MotionSelection: {
        },
        CMorphRectData: {
        },
        CAnimFoot: {
        },
        CParentConstraint: {
        },
        CNmCachedVectorNode__CDefinition: {
        },
        CNmStateNode__TimedEvent_t: {
        },
        CFootPositionMetricEvaluator: {
        },
        CParticleVariableRef: {
        },
        CMoverInstanceData: {
        },
        HSequence: {
        },
        CDampedValueUpdateItem: {
        },
        CAnimLocalHierarchy: {
        },
        CBlendUpdateNode: {
        },
        CQuaternionAnimParameter: {
        },
        PermModelData_t: {
        },
        CNmSampleTask: {
        },
        CFollowPathInstanceData: {
        },
        CStaticPoseCacheBuilder: {
        },
        ModelMeshBufferData_t: {
        },
        CSequenceGroupData: {
        },
        CStateMachineUpdateNode: {
        },
        CNmIDBasedSelectorNode__CDefinition: {
        },
        CAimMatrixUpdateNode: {
        },
        SkeletonAnimCapture_t__Frame_t: {
        },
        CModelConfigElement_Command: {
        },
        TargetSelectorInstanceData_t: {
        },
        CAnimEventDefinition: {
        },
        CNmRootMotionData: {
        },
        AnimScriptHandle: {
        },
        CFlexOp: {
        },
        CHitReactUpdateNode: {
        },
        CLookAtUpdateNode: {
        },
        CAnimBone: {
        },
        CAnimParameterManagerUpdater: {
        },
        BoneDemoCaptureSettings_t: {
        },
        PairedSequenceData: {
        },
        CBoneConstraintPoseSpaceMorph__Input_t: {
        },
        MoodAnimationLayer_t: {
        },
        CSpeedScaleUpdateNode: {
        },
        CSequenceTagSpans: {
        },
        CModelConfigElement_SetBodygroupOnAttachedModels: {
        },
        CCurrentVelocityMetricEvaluator: {
        },
        CNmBoolValueNode__CDefinition: {
        },
        CAnimReplayFrame: {
        },
        CNmTransitionEvent: {
        },
        CNmFloatCurveEvent: {
        },
        CParticleTransformInput: {
        },
        CPathAnimMotorUpdaterBase: {
        },
        CNmFootstepEventPercentageThroughNode__CDefinition: {
        },
        AimCameraOpFixedSettings_t: {
        },
        SkeletonAnimCapture_t__Camera_t: {
        },
        CNmGraphEventConditionNode__CDefinition: {
        },
        CFollowAttachmentUpdateNode: {
        },
        CMovementComponentUpdater: {
        },
        CModelConfigElement_SetMaterialGroup: {
        },
        IParticleEffect: {
        },
        CFutureFacingMetricEvaluator: {
        },
        CNmIDBasedClipSelectorNode__CDefinition: {
        },
        CLeanMatrixInstanceData: {
        },
        NmCompressionSettings_t: {
        },
        PARTICLE_EHANDLE__: {
        },
        CAddUpdateNode: {
        },
        CAnimEnum: {
        },
        CDemoSettingsComponentUpdater: {
        },
        CAnimDecoder: {
        },
        CNmCachedTargetNode__CDefinition: {
        },
        CPerParticleFloatInput: {
        },
        CNmConstBoolNode__CDefinition: {
        },
        CNmBitFlags: {
        },
        CFootStride: {
        },
        CSceneObjectData__RTProxyDrawDescriptor_t: {
        },
        CNmLegacyEvent: {
        },
        CStateNodeStateData: {
        },
        CFootstepLandedAnimTag: {
        },
        CEnumAnimParameter: {
        },
        CHandshakeAnimTagBase: {
        },
        AnimTagID: {
        },
        CWayPointHelperInstanceData: {
        },
        CAnimFrameSegment: {
        },
        CSlopeComponentUpdater: {
        },
        CAnimInputDamping: {
        },
        CHitBoxSet: {
        },
        ChainToSolveData_t: {
        },
        CConstraintSlave: {
        },
        CFootCycleDefinition: {
        },
        CVirtualAnimParameter: {
        },
        CMotionMetricEvaluator: {
        },
        CFutureVelocityMetricEvaluator: {
        },
        CNmSkeleton__SecondarySkeleton_t: {
        },
        CAnimUpdateNodeBase: {
        },
        CSetParameterActionUpdater: {
        },
        CNmFixedWeightBoneMaskNode__CDefinition: {
        },
        SkeletonAnimCapture_t__FrameStamp_t: {
        },
        CBonePositionMetricEvaluator: {
        },
        CRenderBufferBinding: {
        },
        CParticleCollectionRendererFloatInput: {
        },
        CNmParameterizedBlendNode__Parameterization_t: {
        },
        CNmEntityAttributeIntEvent: {
        },
        CNmNotNode__CDefinition: {
        },
        CMeshletDescriptor: {
        },
        CMorphSetData: {
        },
        CNmAndNode__CDefinition: {
        },
        CMorphConstraint: {
        },
        CClothSettingsAnimTag: {
        },
        CAnimDesc_Flag: {
        },
        CNmBlend2DNode__CDefinition: {
        },
        CBlendCurve: {
        },
        CNmGraphNode__CDefinition: {
        },
        CAnimationGraphVisualizerSphere: {
        },
        CNmClip__ModelSpaceSamplingChainLink_t: {
        },
        CAnimUserDifference: {
        },
        CNmDurationScaleNode__CDefinition: {
        },
        CTransitionUpdateData: {
        },
        CMovementHandshakeAnimTag: {
        },
        CBoneConstraintPoseSpaceBone__Input_t: {
        },
        CSeqMultiFetch: {
        },
        CPhysSurfacePropertiesSoundNames: {
        },
        NmBoneMaskSetDefinition_t: {
        },
        CAudioAnimTag: {
        },
        CTurnHelperUpdateNode: {
        },
        CAnimationGroup: {
        },
        NmSyncTrackTime_t: {
        },
        CNmClip: {
        },
        CToggleComponentActionUpdater: {
        },
        CNmOverlayBlendTask: {
        },
        CNmSpeedScaleBaseNode__CDefinition: {
        },
        CNmValueNode__CDefinition: {
        },
        CAnimationGraphVisualizerPrimitiveBase: {
        },
        CBindPoseUpdateNode: {
        },
        NmSyncTrackTimeRange_t: {
        },
        CAnimationGraphVisualizerText: {
        },
        CFootTrajectory: {
        },
        CMotionMatchingUpdateNode: {
        },
        CNmReferencePoseNode__CDefinition: {
        },
        CSeqS1SeqDesc: {
        },
        CFlexController: {
        },
        SkeletonDemoDb_t: {
        },
        CNmFloatRangeComparisonNode__CDefinition: {
        },
        CMotionNodeSequence: {
        },
        CNmTwoBoneIKNode__CDefinition: {
        },
        CNmGraphInstance: {
        },
        CFlexDesc: {
        },
        CRenderMesh: {
        },
        CAnimSkeleton: {
        },
        CFootAdjustmentInstanceData: {
        },
        VPhysics2ShapeDef_t: {
        },
        CNmFloatCurveNode__CDefinition: {
        },
        CAnimationGraphVisualizerAxis: {
        },
        CTwistConstraint: {
        },
        ModelBoneFlexDriverControl_t: {
        },
        CParticleCollectionFloatInput: {
        },
        CSeqCmdLayer: {
        },
        FootPinningPoseOpFixedData_t: {
        },
        RenderSkeletonBone_t: {
        },
        CDistanceRemainingMetricEvaluator: {
        },
        CDirectPlaybackUpdateNode: {
        },
        CNmIDEvent: {
        },
        CFlexRule: {
        },
        ScriptInfo_t: {
        },
        CBoneConstraintRbf: {
        },
        CNetworkedCycle: {
        },
        CNmSoundEvent: {
        },
        CRenderGroom: {
        },
        CNmParameterizedClipSelectorNode__CDefinition: {
        },
        CTiltTwistConstraint: {
        },
        CNmSpeedScaleNode__CDefinition: {
        },
        CVPhysXSurfacePropertiesList: {
        },
        CNmFloatSpringNode__CDefinition: {
        },
        RenderHairStrandInfo_t: {
        },
        CCycleControlClipUpdateNode: {
        },
        CNmTargetPointNode__CDefinition: {
        },
        CNmTargetSelectorNode__CDefinition: {
        },
        CNmFloatValueNode__CDefinition: {
        },
        CWarpSectionAnimTagBase: {
        },
        CNmGraphVariationUserData: {
        },
        CStaticPoseCache: {
        },
        LookAtOpFixedSettings_t: {
        },
        CRootMotion: {
        },
        CAnimGraphSettingsManager: {
        },
        CAnimGraphModelBinding: {
        },
        CBoneConstraintPoseSpaceBone: {
        },
        CNmTwoBoneIKTask: {
        },
        MotionBlendItem: {
        },
        CBoneConstraintPoseSpaceMorph: {
        },
        CFloatAnimParameter: {
        },
        CStateActionUpdater: {
        },
        CPlayerInputAnimMotorUpdater: {
        },
        CRenderSkeleton: {
        },
        CSeqIKLock: {
        },
        CAnimParamHandleMap: {
        },
        CNmFloatClampNode__CDefinition: {
        },
        CNmExternalPoseNode__CDefinition: {
        },
        CAnimDesc: {
        },
        CNmRootMotionOverrideNode__CDefinition: {
        },
        CNmTargetWarpNode__CDefinition: {
        },
        CPhysSurfacePropertiesPhysics: {
        },
        CAnimationGraphVisualizerPie: {
        },
        NmFloatCurveCompressionSettings_t: {
        },
        CBoneConstraintDotToMorph: {
        },
        CPointConstraint: {
        },
        CCurrentRotationVelocityMetricEvaluator: {
        },
        TraceSettings_t: {
        },
        ParamSpanSample_t: {
        },
        CNmFollowBoneTask: {
        },
        VPhysXConstraintParams_t: {
        },
        CNmFloatComparisonNode__CDefinition: {
        },
        CNmChainSolverTask: {
        },
        CStateUpdateData: {
        },
        CTurnHelperInstanceData: {
        },
        CNmTargetValueNode__CDefinition: {
        },
        COrientConstraint: {
        },
        CCycleClipInstanceData: {
        },
        CMoverUpdateNode: {
        },
        CNmLayerBlendNode__CDefinition: {
        },
        CAnimMotorUpdaterBase: {
        },
        JiggleBoneSettingsList_t: {
        },
        CSubtractUpdateNode: {
        },
        CNmFloatRemapNode__CDefinition: {
        },
        CPoseHandle: {
        },
        CNmFootstepEventIDNode__CDefinition: {
        },
        CSolveIKChainUpdateNode: {
        },
        CNmOrNode__CDefinition: {
        },
        CSeqCmdSeqDesc: {
        },
        CBoneMaskUpdateNode: {
        },
        CLeafUpdateNode: {
        },
        CParticleFloatInput: {
        },
        SolveIKChainPoseOpFixedSettings_t: {
        },
        CNmEntityAttributeFloatEvent: {
        },
        CNmIDSelectorNode__CDefinition: {
        },
        TwoBoneIKSettings_t: {
        },
        CNmCachedPoseWriteTask: {
        },
        CAnimUpdateSharedData: {
        },
        CAnimAttachment: {
        },
        CFootTrajectories: {
        },
        CNmIDComparisonNode__CDefinition: {
        },
        PairedSequence_t: {
        },
        CEditableMotionGraph: {
        },
        CNmConstFloatNode__CDefinition: {
        },
        CStringAnimTag: {
        },
        CBoolAnimParameter: {
        },
        CRagdollAnimTag: {
        },
        CMotionNode: {
        },
        CNmStateMachineNode__CDefinition: {
        },
        CBodyGroupAnimTag: {
        },
        CNmModelSpaceBlendTask: {
        },
        CNmZeroPoseNode__CDefinition: {
        },
        CNmOrientationWarpNode__CDefinition: {
        },
        AnimParamID: {
        },
        CNmBoneMaskNode__CDefinition: {
        },
        ModelAnimGraph2Ref_t: {
        },
        AnimationDecodeDebugDump_t: {
        },
        CNmVirtualParameterIDNode__CDefinition: {
        },
        CSeqScaleSet: {
        },
        CDirectionalBlendUpdateNode: {
        },
        CNmGraphDefinition__ReferencedGraphSlot_t: {
        },
        ParamSpan_t: {
        },
        CFootStepTriggerUpdateNode: {
        },
        IKTargetSettings_t: {
        },
        CModelConfigElement_SetRenderColor: {
        },
        CNmAdditiveBlendTask: {
        },
        CNmAnimationPoseNode__CDefinition: {
        },
        CMotionSearchDB: {
        },
        CMotionNodeBlend1D: {
        },
        CNmCurrentSyncEventNode__CDefinition: {
        },
        CNmControlParameterTargetNode__CDefinition: {
        },
        SkeletonBoneBounds_t: {
        },
        CTwoBoneIKUpdateNode: {
        },
        VPhysXBodyPart_t: {
        },
        CTaskHandshakeAnimTag: {
        },
        CFollowPathUpdateNode: {
        },
        AimMatrixOpFixedSettings_t: {
        },
        CAnimScriptComponentUpdater: {
        },
        CRagdollUpdateNode: {
        },
        CBoneConstraintBase: {
        },
        CPathAnimMotorUpdater: {
        },
        CMaterialAttributeAnimTag: {
        },
        CNmFootEventConditionNode__CDefinition: {
        },
        CNmFootEvent: {
        },
        CPhysSurfacePropertiesAudio: {
        },
        CSeqAutoLayer: {
        },
        ModelEmbeddedMesh_t: {
        },
        PhysSoftbodyDesc_t: {
        },
        CAnimSequenceParams: {
        },
        CTargetWarpUpdateNode: {
        },
        CNmVirtualParameterBoolNode__CDefinition: {
        },
        CFollowTargetUpdateNode: {
        },
        CCPPScriptComponentUpdater: {
        },
        NetVarConfigIndex: {
        },
        CAnimData: {
        },
        IKSolverSettings_t: {
        },
        CBinaryUpdateNode: {
        },
        CBlendNodeInstanceData: {
        },
        CNmParameterizedBlendNode__BlendRange_t: {
        },
        CAnimKeyData: {
        },
        AttachmentHandle_t: {
        },
        CAnimMorphDifference: {
        },
        FootFixedData_t: {
        },
        CMotionGraphGroup: {
        },
        CNmVectorNegateNode__CDefinition: {
        },
        CNmSyncTrack__Event_t: {
        },
        CParticleCollectionRendererVecInput: {
        },
        CNmTarget: {
        },
        CNmControlParameterIDNode__CDefinition: {
        },
        CNmBodyGroupEvent: {
        },
        CWayPointHelperUpdateNode: {
        },
        CMoodVData: {
        },
        CModelConfigElement_AttachedModel: {
        },
        CAnimTagManagerUpdater: {
        },
        CParticleProperty: {
        },
    },
};
