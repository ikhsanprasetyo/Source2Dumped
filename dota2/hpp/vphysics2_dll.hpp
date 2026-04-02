// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-04-02 19:22:16.019179300 +07:00

#pragma once

#include <cstddef>
#include <cstdint>

namespace source2_dumper {
    namespace schemas {
        // Module: vphysics2.dll
        // Class count: 110
        // Enum count: 5
        namespace vphysics2_dll {
            // Alignment: 4
            // Member count: 3
            enum class JointMotion_t : uint32_t {
                JOINT_MOTION_FREE = 0x0,
                JOINT_MOTION_LOCKED = 0x1,
                JOINT_MOTION_COUNT = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class JointAxis_t : uint32_t {
                JOINT_AXIS_X = 0x0,
                JOINT_AXIS_Y = 0x1,
                JOINT_AXIS_Z = 0x2,
                JOINT_AXIS_COUNT = 0x3
            };
            // Alignment: 1
            // Member count: 3
            enum class DynamicContinuousContactBehavior_t : uint8_t {
                DYNAMIC_CONTINUOUS_ALLOW_IF_REQUESTED_BY_OTHER_BODY = 0x0,
                DYNAMIC_CONTINUOUS_ALWAYS = 0x1,
                DYNAMIC_CONTINUOUS_NEVER = 0x2
            };
            // Alignment: 4
            // Member count: 8
            enum class PhysInterfaceId_t : uint32_t {
                PIID_UNKNOWN = 0x0,
                PIID_IPHYSICSBODY = 0x1,
                PIID_IPHYSAGGREGATE = 0x2,
                PIID_IPHYSICSJOINT = 0x3,
                PIID_IPHYSICSMOTIONCONTROLLER = 0x4,
                PIID_IPHYSICSPARTICLEROPE = 0x5,
                PIID_IPHYSICSRAGDOLLCONTROL = 0x6,
                PIID_NUM_TYPES = 0x7
            };
            // Alignment: 1
            // Member count: 5
            enum class PhysGenericShapeType_t : uint8_t {
                GENERIC_SHAPE_POINT = 0x0,
                GENERIC_SHAPE_SPHERE = 0x1,
                GENERIC_SHAPE_AABB = 0x2,
                GENERIC_SHAPE_CAPSULE = 0x3,
                GENERIC_SHAPE_HULL = 0x4
            };
            // Parent: physicslib
            // Field count: 0
            namespace RnSphereDesc_t {
            }
            // Parent: None
            // Field count: 0
            namespace RnSoftbodyParticle_t {
            }
            // Parent: physicslib
            // Field count: 0
            namespace RnHullDesc_t {
            }
            // Parent: physicslib
            // Field count: 0
            namespace RnCapsuleDesc_t {
            }
            // Parent: None
            // Field count: 0
            namespace PhysFeModelDesc_t {
            }
            // Parent: physicslib
            // Field count: 0
            namespace RnMeshDesc_t {
            }
            // Parent: None
            // Field count: 0
            namespace RnSoftbodySpring_t {
            }
            // Parent: None
            // Field count: 0
            namespace RnSoftbodyCapsule_t {
            }
            // Parent: ______
            // Field count: 0
            namespace vphysics_save_cphysicsbody_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeBuildBoxRigid_t {
            }
            // Parent: None
            // Field count: 0
            namespace CFeIndexedJiggleBone {
            }
            // Parent: ______
            // Field count: 0
            namespace IPhysAggregateInstance {
            }
            // Parent: None
            // Field count: 0
            namespace FeBandBendLimit_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeTaperedCapsuleStretch_t {
            }
            // Parent: None
            // Field count: 0
            namespace constraint_axislimit_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeSimdRodConstraintAnim_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeSimdRodConstraint_t {
            }
            // Parent: None
            // Field count: 0
            namespace IPhysicsParticleRope {
            }
            // Parent: None
            // Field count: 0
            namespace constraint_hingeparams_t {
            }
            // Parent: None
            // Field count: 0
            namespace IPhysicsBodyList {
            }
            // Parent: None
            // Field count: 0
            namespace FeBuildSphereRigid_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeSimdAnimStrayRadius_t {
            }
            // Parent: None
            // Field count: 0
            namespace RnTriangle_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeProxyVertexMap_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeNodeIntegrator_t {
            }
            // Parent: None
            // Field count: 0
            namespace RnCapsule_t {
            }
            // Parent: None
            // Field count: 0
            namespace CFeNamedJiggleBone {
            }
            // Parent: None
            // Field count: 0
            namespace FeAntiTunnelProbeBuild_t {
            }
            // Parent: None
            // Field count: 0
            namespace RnBodyDesc_t {
            }
            // Parent: None
            // Field count: 0
            namespace OldFeEdge_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeFollowNode_t {
            }
            // Parent: None
            // Field count: 0
            namespace RnMesh_t {
            }
            // Parent: None
            // Field count: 0
            namespace VertexPositionNormal_t {
            }
            // Parent: None
            // Field count: 0
            namespace IPhysicsRagdollControl {
            }
            // Parent: None
            // Field count: 0
            namespace FeBuildSDFRigid_t {
            }
            // Parent: None
            // Field count: 0
            namespace RnBlendVertex_t {
            }
            // Parent: None
            // Field count: 0
            namespace CFeMorphLayer {
            }
            // Parent: None
            // Field count: 0
            namespace FeCtrlSoftOffset_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeVertexMapDesc_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeTaperedCapsuleRigid_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeAnimStrayRadius_t {
            }
            // Parent: None
            // Field count: 0
            namespace IPhysicsJoint {
            }
            // Parent: None
            // Field count: 0
            namespace FeEdgeDesc_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeNodeStrayBox_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeNodeReverseOffset_t {
            }
            // Parent: None
            // Field count: 0
            namespace RnPlane_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeSDFRigid_t {
            }
            // Parent: None
            // Field count: 0
            namespace CFeJiggleBone {
            }
            // Parent: None
            // Field count: 0
            namespace CRegionSVM {
            }
            // Parent: None
            // Field count: 0
            namespace FeWorldCollisionParams_t {
            }
            // Parent: None
            // Field count: 0
            namespace CGenericShapeProxy {
            }
            // Parent: None
            // Field count: 0
            namespace RnNode_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeFitMatrix_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeSimdQuad_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeSimdSpringIntegrator_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeSimdNodeBase_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeQuad_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeHingeLimit_t {
            }
            // Parent: None
            // Field count: 0
            namespace RnWing_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeWeightedNode_t {
            }
            // Parent: None
            // Field count: 0
            namespace CollisionDetailLayerInfo_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeEffectDesc_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeSpringIntegrator_t {
            }
            // Parent: None
            // Field count: 0
            namespace FourVectors2D {
            }
            // Parent: None
            // Field count: 0
            namespace FeKelagerBend2_t {
            }
            // Parent: None
            // Field count: 0
            namespace CastSphereSATParams_t {
            }
            // Parent: None
            // Field count: 0
            namespace vphysics_save_ragdoll_control_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeRigidColliderIndices_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeCollisionPlane_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeStiffHingeBuild_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeBoxRigid_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeMorphLayerDepr_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeCtrlOffset_t {
            }
            // Parent: None
            // Field count: 0
            namespace IPhysicsPlayerController {
            }
            // Parent: None
            // Field count: 0
            namespace FeNodeBase_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeVertexMapBuild_t {
            }
            // Parent: None
            // Field count: 0
            namespace CFeVertexMapBuildArray {
            }
            // Parent: None
            // Field count: 0
            namespace FeTri_t {
            }
            // Parent: None
            // Field count: 0
            namespace RnHull_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeModelSelfCollisionLayer_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeAntiTunnelGroupBuild_t {
            }
            // Parent: None
            // Field count: 0
            namespace CovMatrix3 {
            }
            // Parent: None
            // Field count: 0
            namespace PhysicsParticleId_t {
            }
            // Parent: None
            // Field count: 0
            namespace RnVertex_t {
            }
            // Parent: None
            // Field count: 0
            namespace IPhysicsMotionController {
            }
            // Parent: None
            // Field count: 0
            namespace Dop26_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeDynKinLink_t {
            }
            // Parent: None
            // Field count: 0
            namespace RnFace_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeCtrlOsOffset_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeAntiTunnelProbe_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeSourceEdge_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeTwistConstraint_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeNodeWindBase_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeAxialEdgeBend_t {
            }
            // Parent: None
            // Field count: 0
            namespace FourCovMatrices3 {
            }
            // Parent: None
            // Field count: 0
            namespace constraint_breakableparams_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeSphereRigid_t {
            }
            // Parent: None
            // Field count: 0
            namespace CollisionDetailLayerInfo_t__Name_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeBuildTaperedCapsuleRigid_t {
            }
            // Parent: None
            // Field count: 0
            namespace IPhysicsBody {
            }
            // Parent: None
            // Field count: 0
            namespace FeSoftParent_t {
            }
            // Parent: None
            // Field count: 0
            namespace RnShapeDesc_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeTreeChildren_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeRodConstraint_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeFitWeight_t {
            }
            // Parent: None
            // Field count: 0
            namespace RnHalfEdge_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeSimdTri_t {
            }
            // Parent: None
            // Field count: 0
            namespace VertexPositionColor_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeFitInfluence_t {
            }
            // Parent: None
            // Field count: 0
            namespace FeHingeLimitBuild_t {
            }
        }
    }
}
