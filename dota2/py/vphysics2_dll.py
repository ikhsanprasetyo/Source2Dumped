# Generated using https://github.com/ikhsanprasetyo/source2-dumper
# 2026-04-02 19:22:16.019179300 +07:00

class Schemas:
    # Module: vphysics2.dll
    class Vphysics2Dll:
        class JointMotion_t:
            JOINT_MOTION_FREE = 0x0
            JOINT_MOTION_LOCKED = 0x1
            JOINT_MOTION_COUNT = 0x2
        class JointAxis_t:
            JOINT_AXIS_X = 0x0
            JOINT_AXIS_Y = 0x1
            JOINT_AXIS_Z = 0x2
            JOINT_AXIS_COUNT = 0x3
        class DynamicContinuousContactBehavior_t:
            DYNAMIC_CONTINUOUS_ALLOW_IF_REQUESTED_BY_OTHER_BODY = 0x0
            DYNAMIC_CONTINUOUS_ALWAYS = 0x1
            DYNAMIC_CONTINUOUS_NEVER = 0x2
        class PhysInterfaceId_t:
            PIID_UNKNOWN = 0x0
            PIID_IPHYSICSBODY = 0x1
            PIID_IPHYSAGGREGATE = 0x2
            PIID_IPHYSICSJOINT = 0x3
            PIID_IPHYSICSMOTIONCONTROLLER = 0x4
            PIID_IPHYSICSPARTICLEROPE = 0x5
            PIID_IPHYSICSRAGDOLLCONTROL = 0x6
            PIID_NUM_TYPES = 0x7
        class PhysGenericShapeType_t:
            GENERIC_SHAPE_POINT = 0x0
            GENERIC_SHAPE_SPHERE = 0x1
            GENERIC_SHAPE_AABB = 0x2
            GENERIC_SHAPE_CAPSULE = 0x3
            GENERIC_SHAPE_HULL = 0x4
        class RnSphereDesc_t:
            pass
        class RnSoftbodyParticle_t:
            pass
        class RnHullDesc_t:
            pass
        class RnCapsuleDesc_t:
            pass
        class PhysFeModelDesc_t:
            pass
        class RnMeshDesc_t:
            pass
        class RnSoftbodySpring_t:
            pass
        class RnSoftbodyCapsule_t:
            pass
        class vphysics_save_cphysicsbody_t:
            pass
        class FeBuildBoxRigid_t:
            pass
        class CFeIndexedJiggleBone:
            pass
        class IPhysAggregateInstance:
            pass
        class FeBandBendLimit_t:
            pass
        class FeTaperedCapsuleStretch_t:
            pass
        class constraint_axislimit_t:
            pass
        class FeSimdRodConstraintAnim_t:
            pass
        class FeSimdRodConstraint_t:
            pass
        class IPhysicsParticleRope:
            pass
        class constraint_hingeparams_t:
            pass
        class IPhysicsBodyList:
            pass
        class FeBuildSphereRigid_t:
            pass
        class FeSimdAnimStrayRadius_t:
            pass
        class RnTriangle_t:
            pass
        class FeProxyVertexMap_t:
            pass
        class FeNodeIntegrator_t:
            pass
        class RnCapsule_t:
            pass
        class CFeNamedJiggleBone:
            pass
        class FeAntiTunnelProbeBuild_t:
            pass
        class RnBodyDesc_t:
            pass
        class OldFeEdge_t:
            pass
        class FeFollowNode_t:
            pass
        class RnMesh_t:
            pass
        class VertexPositionNormal_t:
            pass
        class IPhysicsRagdollControl:
            pass
        class FeBuildSDFRigid_t:
            pass
        class RnBlendVertex_t:
            pass
        class CFeMorphLayer:
            pass
        class FeCtrlSoftOffset_t:
            pass
        class FeVertexMapDesc_t:
            pass
        class FeTaperedCapsuleRigid_t:
            pass
        class FeAnimStrayRadius_t:
            pass
        class IPhysicsJoint:
            pass
        class FeEdgeDesc_t:
            pass
        class FeNodeStrayBox_t:
            pass
        class FeNodeReverseOffset_t:
            pass
        class RnPlane_t:
            pass
        class FeSDFRigid_t:
            pass
        class CFeJiggleBone:
            pass
        class CRegionSVM:
            pass
        class FeWorldCollisionParams_t:
            pass
        class CGenericShapeProxy:
            pass
        class RnNode_t:
            pass
        class FeFitMatrix_t:
            pass
        class FeSimdQuad_t:
            pass
        class FeSimdSpringIntegrator_t:
            pass
        class FeSimdNodeBase_t:
            pass
        class FeQuad_t:
            pass
        class FeHingeLimit_t:
            pass
        class RnWing_t:
            pass
        class FeWeightedNode_t:
            pass
        class CollisionDetailLayerInfo_t:
            pass
        class FeEffectDesc_t:
            pass
        class FeSpringIntegrator_t:
            pass
        class FourVectors2D:
            pass
        class FeKelagerBend2_t:
            pass
        class CastSphereSATParams_t:
            pass
        class vphysics_save_ragdoll_control_t:
            pass
        class FeRigidColliderIndices_t:
            pass
        class FeCollisionPlane_t:
            pass
        class FeStiffHingeBuild_t:
            pass
        class FeBoxRigid_t:
            pass
        class FeMorphLayerDepr_t:
            pass
        class FeCtrlOffset_t:
            pass
        class IPhysicsPlayerController:
            pass
        class FeNodeBase_t:
            pass
        class FeVertexMapBuild_t:
            pass
        class CFeVertexMapBuildArray:
            pass
        class FeTri_t:
            pass
        class RnHull_t:
            pass
        class FeModelSelfCollisionLayer_t:
            pass
        class FeAntiTunnelGroupBuild_t:
            pass
        class CovMatrix3:
            pass
        class PhysicsParticleId_t:
            pass
        class RnVertex_t:
            pass
        class IPhysicsMotionController:
            pass
        class Dop26_t:
            pass
        class FeDynKinLink_t:
            pass
        class RnFace_t:
            pass
        class FeCtrlOsOffset_t:
            pass
        class FeAntiTunnelProbe_t:
            pass
        class FeSourceEdge_t:
            pass
        class FeTwistConstraint_t:
            pass
        class FeNodeWindBase_t:
            pass
        class FeAxialEdgeBend_t:
            pass
        class FourCovMatrices3:
            pass
        class constraint_breakableparams_t:
            pass
        class FeSphereRigid_t:
            pass
        class CollisionDetailLayerInfo_t__Name_t:
            pass
        class FeBuildTaperedCapsuleRigid_t:
            pass
        class IPhysicsBody:
            pass
        class FeSoftParent_t:
            pass
        class RnShapeDesc_t:
            pass
        class FeTreeChildren_t:
            pass
        class FeRodConstraint_t:
            pass
        class FeFitWeight_t:
            pass
        class RnHalfEdge_t:
            pass
        class FeSimdTri_t:
            pass
        class VertexPositionColor_t:
            pass
        class FeFitInfluence_t:
            pass
        class FeHingeLimitBuild_t:
            pass
