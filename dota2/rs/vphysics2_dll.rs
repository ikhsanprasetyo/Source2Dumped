// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-04-02 19:22:16.019179300 +07:00

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod source2_dumper {
    pub mod schemas {
        // Module: vphysics2.dll
        // Class count: 110
        // Enum count: 5
        pub mod vphysics2_dll {
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum JointMotion_t {
                JOINT_MOTION_FREE = 0x0,
                JOINT_MOTION_LOCKED = 0x1,
                JOINT_MOTION_COUNT = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum JointAxis_t {
                JOINT_AXIS_X = 0x0,
                JOINT_AXIS_Y = 0x1,
                JOINT_AXIS_Z = 0x2,
                JOINT_AXIS_COUNT = 0x3
            }
            // Alignment: 1
            // Member count: 3
            #[repr(u8)]
            pub enum DynamicContinuousContactBehavior_t {
                DYNAMIC_CONTINUOUS_ALLOW_IF_REQUESTED_BY_OTHER_BODY = 0x0,
                DYNAMIC_CONTINUOUS_ALWAYS = 0x1,
                DYNAMIC_CONTINUOUS_NEVER = 0x2
            }
            // Alignment: 4
            // Member count: 8
            #[repr(u32)]
            pub enum PhysInterfaceId_t {
                PIID_UNKNOWN = 0x0,
                PIID_IPHYSICSBODY = 0x1,
                PIID_IPHYSAGGREGATE = 0x2,
                PIID_IPHYSICSJOINT = 0x3,
                PIID_IPHYSICSMOTIONCONTROLLER = 0x4,
                PIID_IPHYSICSPARTICLEROPE = 0x5,
                PIID_IPHYSICSRAGDOLLCONTROL = 0x6,
                PIID_NUM_TYPES = 0x7
            }
            // Alignment: 1
            // Member count: 5
            #[repr(u8)]
            pub enum PhysGenericShapeType_t {
                GENERIC_SHAPE_POINT = 0x0,
                GENERIC_SHAPE_SPHERE = 0x1,
                GENERIC_SHAPE_AABB = 0x2,
                GENERIC_SHAPE_CAPSULE = 0x3,
                GENERIC_SHAPE_HULL = 0x4
            }
            // Parent: physicslib
            // Field count: 0
            pub mod RnSphereDesc_t {
            }
            // Parent: None
            // Field count: 0
            pub mod RnSoftbodyParticle_t {
            }
            // Parent: physicslib
            // Field count: 0
            pub mod RnHullDesc_t {
            }
            // Parent: physicslib
            // Field count: 0
            pub mod RnCapsuleDesc_t {
            }
            // Parent: None
            // Field count: 0
            pub mod PhysFeModelDesc_t {
            }
            // Parent: physicslib
            // Field count: 0
            pub mod RnMeshDesc_t {
            }
            // Parent: None
            // Field count: 0
            pub mod RnSoftbodySpring_t {
            }
            // Parent: None
            // Field count: 0
            pub mod RnSoftbodyCapsule_t {
            }
            // Parent: ______
            // Field count: 0
            pub mod vphysics_save_cphysicsbody_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeBuildBoxRigid_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CFeIndexedJiggleBone {
            }
            // Parent: ______
            // Field count: 0
            pub mod IPhysAggregateInstance {
            }
            // Parent: None
            // Field count: 0
            pub mod FeBandBendLimit_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeTaperedCapsuleStretch_t {
            }
            // Parent: None
            // Field count: 0
            pub mod constraint_axislimit_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeSimdRodConstraintAnim_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeSimdRodConstraint_t {
            }
            // Parent: None
            // Field count: 0
            pub mod IPhysicsParticleRope {
            }
            // Parent: None
            // Field count: 0
            pub mod constraint_hingeparams_t {
            }
            // Parent: None
            // Field count: 0
            pub mod IPhysicsBodyList {
            }
            // Parent: None
            // Field count: 0
            pub mod FeBuildSphereRigid_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeSimdAnimStrayRadius_t {
            }
            // Parent: None
            // Field count: 0
            pub mod RnTriangle_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeProxyVertexMap_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeNodeIntegrator_t {
            }
            // Parent: None
            // Field count: 0
            pub mod RnCapsule_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CFeNamedJiggleBone {
            }
            // Parent: None
            // Field count: 0
            pub mod FeAntiTunnelProbeBuild_t {
            }
            // Parent: None
            // Field count: 0
            pub mod RnBodyDesc_t {
            }
            // Parent: None
            // Field count: 0
            pub mod OldFeEdge_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeFollowNode_t {
            }
            // Parent: None
            // Field count: 0
            pub mod RnMesh_t {
            }
            // Parent: None
            // Field count: 0
            pub mod VertexPositionNormal_t {
            }
            // Parent: None
            // Field count: 0
            pub mod IPhysicsRagdollControl {
            }
            // Parent: None
            // Field count: 0
            pub mod FeBuildSDFRigid_t {
            }
            // Parent: None
            // Field count: 0
            pub mod RnBlendVertex_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CFeMorphLayer {
            }
            // Parent: None
            // Field count: 0
            pub mod FeCtrlSoftOffset_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeVertexMapDesc_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeTaperedCapsuleRigid_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeAnimStrayRadius_t {
            }
            // Parent: None
            // Field count: 0
            pub mod IPhysicsJoint {
            }
            // Parent: None
            // Field count: 0
            pub mod FeEdgeDesc_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeNodeStrayBox_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeNodeReverseOffset_t {
            }
            // Parent: None
            // Field count: 0
            pub mod RnPlane_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeSDFRigid_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CFeJiggleBone {
            }
            // Parent: None
            // Field count: 0
            pub mod CRegionSVM {
            }
            // Parent: None
            // Field count: 0
            pub mod FeWorldCollisionParams_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CGenericShapeProxy {
            }
            // Parent: None
            // Field count: 0
            pub mod RnNode_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeFitMatrix_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeSimdQuad_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeSimdSpringIntegrator_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeSimdNodeBase_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeQuad_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeHingeLimit_t {
            }
            // Parent: None
            // Field count: 0
            pub mod RnWing_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeWeightedNode_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CollisionDetailLayerInfo_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeEffectDesc_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeSpringIntegrator_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FourVectors2D {
            }
            // Parent: None
            // Field count: 0
            pub mod FeKelagerBend2_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CastSphereSATParams_t {
            }
            // Parent: None
            // Field count: 0
            pub mod vphysics_save_ragdoll_control_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeRigidColliderIndices_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeCollisionPlane_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeStiffHingeBuild_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeBoxRigid_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeMorphLayerDepr_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeCtrlOffset_t {
            }
            // Parent: None
            // Field count: 0
            pub mod IPhysicsPlayerController {
            }
            // Parent: None
            // Field count: 0
            pub mod FeNodeBase_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeVertexMapBuild_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CFeVertexMapBuildArray {
            }
            // Parent: None
            // Field count: 0
            pub mod FeTri_t {
            }
            // Parent: None
            // Field count: 0
            pub mod RnHull_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeModelSelfCollisionLayer_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeAntiTunnelGroupBuild_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CovMatrix3 {
            }
            // Parent: None
            // Field count: 0
            pub mod PhysicsParticleId_t {
            }
            // Parent: None
            // Field count: 0
            pub mod RnVertex_t {
            }
            // Parent: None
            // Field count: 0
            pub mod IPhysicsMotionController {
            }
            // Parent: None
            // Field count: 0
            pub mod Dop26_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeDynKinLink_t {
            }
            // Parent: None
            // Field count: 0
            pub mod RnFace_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeCtrlOsOffset_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeAntiTunnelProbe_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeSourceEdge_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeTwistConstraint_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeNodeWindBase_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeAxialEdgeBend_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FourCovMatrices3 {
            }
            // Parent: None
            // Field count: 0
            pub mod constraint_breakableparams_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeSphereRigid_t {
            }
            // Parent: None
            // Field count: 0
            pub mod CollisionDetailLayerInfo_t__Name_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeBuildTaperedCapsuleRigid_t {
            }
            // Parent: None
            // Field count: 0
            pub mod IPhysicsBody {
            }
            // Parent: None
            // Field count: 0
            pub mod FeSoftParent_t {
            }
            // Parent: None
            // Field count: 0
            pub mod RnShapeDesc_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeTreeChildren_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeRodConstraint_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeFitWeight_t {
            }
            // Parent: None
            // Field count: 0
            pub mod RnHalfEdge_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeSimdTri_t {
            }
            // Parent: None
            // Field count: 0
            pub mod VertexPositionColor_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeFitInfluence_t {
            }
            // Parent: None
            // Field count: 0
            pub mod FeHingeLimitBuild_t {
            }
        }
    }
}
