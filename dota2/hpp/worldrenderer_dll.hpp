// Generated using https://github.com/ikhsanprasetyo/source2-dumper
// 2026-04-02 19:22:16.019179300 +07:00

#pragma once

#include <cstddef>
#include <cstdint>

namespace source2_dumper {
    namespace schemas {
        // Module: worldrenderer.dll
        // Class count: 32
        // Enum count: 3
        namespace worldrenderer_dll {
            // Alignment: 1
            // Member count: 2
            enum class RTProxyInstanceFlags_t : uint8_t {
                RTPROXY_INSTANCE_FLAG_NONE = 0x0,
                RTPROXY_INSTANCE_UNIQUE_MESH = 0x1
            };
            // Alignment: 4
            // Member count: 16
            enum class ObjectTypeFlags_t : uint32_t {
                OBJECT_TYPE_NONE = 0x0,
                OBJECT_TYPE_MODEL = 0x8,
                OBJECT_TYPE_BLOCK_LIGHT = 0x10,
                OBJECT_TYPE_NO_SHADOWS = 0x20,
                OBJECT_TYPE_WORLDSPACE_TEXURE_BLEND = 0x40,
                OBJECT_TYPE_DISABLED_IN_LOW_QUALITY = 0x80,
                OBJECT_TYPE_RENDER_WITH_DYNAMIC = 0x200,
                OBJECT_TYPE_RENDER_TO_CUBEMAPS = 0x400,
                OBJECT_TYPE_MODEL_HAS_LODS = 0x800,
                OBJECT_TYPE_OVERLAY = 0x2000,
                OBJECT_TYPE_PRECOMPUTED_VISMEMBERS = 0x4000,
                OBJECT_TYPE_STATIC_CUBE_MAP = 0x8000,
                OBJECT_TYPE_DISABLE_VIS_CULLING = 0x10000,
                OBJECT_TYPE_BAKED_GEOMETRY = 0x20000,
                OBJECT_TYPE_NEEDS_DYNAMIC_SHADOWS = 0x40000,
                OBJECT_TYPE_HAS_AGGREGATE_RTPROXY = 0x80000
            };
            // Alignment: 1
            // Member count: 4
            enum class AggregateInstanceStream_t : uint8_t {
                AGGREGATE_INSTANCE_STREAM_NONE = 0x0,
                AGGREGATE_INSTANCE_STREAM_LIGHTMAPUV_UNORM16 = 0x1,
                AGGREGATE_INSTANCE_STREAM_VERTEXTINT_UNORM8 = 0x2,
                AGGREGATE_INSTANCE_STREAM_VERTEXBLEND_UNORM8 = 0x4
            };
            // Parent: None
            // Field count: 0
            namespace CEntityInstance {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // CScriptComponent
            namespace CEntityComponent {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // CScriptComponent
            // m_targetInput
            namespace CScriptComponent {
            }
            // Parent: None
            // Field count: 0
            namespace CEntityIdentity {
            }
            // Parent: None
            // Field count: 0
            namespace RTProxyInstanceInfo_t {
            }
            // Parent: None
            // Field count: 0
            namespace AggregateVertexAlbedoStreamOnDiskData_t {
            }
            // Parent: None
            // Field count: 0
            namespace SceneObject_t {
            }
            // Parent: None
            // Field count: 0
            namespace AggregateLODSetup_t {
            }
            // Parent: ______
            // Field count: 0
            namespace ExtraVertexStreamOverride_t {
            }
            // Parent: None
            // Field count: 0
            namespace ClutterTile_t {
            }
            // Parent: None
            // Field count: 0
            namespace AggregateSceneObject_t {
            }
            // Parent: None
            // Field count: 0
            namespace NodeData_t {
            }
            // Parent: None
            // Field count: 0
            namespace VMapResourceData_t {
            }
            // Parent: None
            // Field count: 0
            namespace AggregateInstanceStreamOnDiskData_t {
            }
            // Parent: None
            // Field count: 0
            namespace RTProxyBLAS_t {
            }
            // Parent: None
            // Field count: 0
            namespace ClutterSceneObject_t {
            }
            // Parent: None
            // Field count: 0
            namespace WorldBuilderParams_t {
            }
            // Parent: None
            // Field count: 0
            namespace PermEntityLumpData_t {
            }
            // Parent: None
            // Field count: 0
            namespace WorldNode_t {
            }
            // Parent: None
            // Field count: 0
            namespace BaseSceneObjectOverride_t {
            }
            // Parent: None
            // Field count: 0
            namespace EntityIOConnectionData_t {
            }
            // Parent: None
            // Field count: 0
            namespace BakedLightingInfo_t {
            }
            // Parent: None
            // Field count: 0
            namespace VoxelVisBlockOffset_t {
            }
            // Parent: None
            // Field count: 0
            namespace InfoForResourceTypeVMapResourceData_t {
            }
            // Parent: None
            // Field count: 0
            namespace WorldNodeOnDiskBufferData_t {
            }
            // Parent: None
            // Field count: 0
            namespace AggregateMeshInfo_t {
            }
            // Parent: None
            // Field count: 0
            namespace World_t {
            }
            // Parent: None
            // Field count: 0
            namespace BakedLightingInfo_t__BakedShadowAssignment_t {
            }
            // Parent: ______
            // Field count: 0
            namespace MaterialOverride_t {
            }
            // Parent: None
            // Field count: 0
            namespace AggregateRTProxySceneObject_t {
            }
            // Parent: None
            // Field count: 0
            namespace EntityKeyValueData_t {
            }
            // Parent: None
            // Field count: 0
            namespace CVoxelVisibility {
            }
        }
    }
}
