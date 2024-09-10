#pragma once
// IWYU pragma private; include "UnityEngine/OverlapBoxCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__QueryParameters_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OverlapBoxCommand)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct __JobsUtility__JobScheduleParameters;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine {
struct ColliderHit;
}
namespace UnityEngine {
struct PhysicsScene;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct QueryParameters;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct OverlapBoxCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::OverlapBoxCommand);
// Type: UnityEngine::OverlapBoxCommand
// SizeInfo { instance_size: 60, native_size: 60, calculated_instance_size: 60, calculated_native_size: 76, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::OverlapBoxCommand
struct CORDL_TYPE OverlapBoxCommand {
public:
// Declarations
 __declspec(property(get=get_center, put=set_center)) ::UnityEngine::Vector3  center;

 __declspec(property(get=get_halfExtents, put=set_halfExtents)) ::UnityEngine::Vector3  halfExtents;

 __declspec(property(get=get_orientation, put=set_orientation)) ::UnityEngine::Quaternion  orientation;

 __declspec(property(get=get_physicsScene, put=set_physicsScene)) ::UnityEngine::PhysicsScene  physicsScene;

/// @brief Method ScheduleBatch, addr 0x487c9b8, size 0x1e4, virtual false, abstract: false, final false
static inline ::Unity::Jobs::JobHandle ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::OverlapBoxCommand>  commands, ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>  results, int32_t  minCommandsPerJob, int32_t  maxHits, ::Unity::Jobs::JobHandle  dependsOn) ;

/// @brief Method ScheduleOverlapBoxBatch, addr 0x487cb9c, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Jobs::JobHandle ScheduleOverlapBoxBatch(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>  parameters, ::cordl_internals::Ptr<void>  commands, int32_t  commandLen, ::cordl_internals::Ptr<void>  result, int32_t  resultLen, int32_t  minCommandsPerJob, int32_t  maxHits) ;

/// @brief Method ScheduleOverlapBoxBatch_Injected, addr 0x487cc38, size 0x8c, virtual false, abstract: false, final false
static inline void ScheduleOverlapBoxBatch_Injected(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>  parameters, ::cordl_internals::Ptr<void>  commands, int32_t  commandLen, ::cordl_internals::Ptr<void>  result, int32_t  resultLen, int32_t  minCommandsPerJob, int32_t  maxHits, ByRef<::Unity::Jobs::JobHandle>  ret) ;

/// @brief Method .ctor, addr 0x487c85c, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation, ::UnityEngine::QueryParameters  queryParameters) ;

/// @brief Method .ctor, addr 0x487c93c, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation, ::UnityEngine::QueryParameters  queryParameters) ;

/// @brief Method get_center, addr 0x487c960, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_center() ;

/// @brief Method get_halfExtents, addr 0x487c978, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_halfExtents() ;

/// @brief Method get_orientation, addr 0x487c990, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_orientation() ;

/// @brief Method get_physicsScene, addr 0x487c9a8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::PhysicsScene get_physicsScene() ;

/// @brief Method set_center, addr 0x487c96c, size 0xc, virtual false, abstract: false, final false
inline void set_center(::UnityEngine::Vector3  value) ;

/// @brief Method set_halfExtents, addr 0x487c984, size 0xc, virtual false, abstract: false, final false
inline void set_halfExtents(::UnityEngine::Vector3  value) ;

/// @brief Method set_orientation, addr 0x487c99c, size 0xc, virtual false, abstract: false, final false
inline void set_orientation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_physicsScene, addr 0x487c9b0, size 0x8, virtual false, abstract: false, final false
inline void set_physicsScene(::UnityEngine::PhysicsScene  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OverlapBoxCommand() ;

// Ctor Parameters [CppParam { name: "_center_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_halfExtents_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_orientation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "_physicsScene_k__BackingField", ty: "::UnityEngine::PhysicsScene", modifiers: "", def_value: None }, CppParam { name: "queryParameters", ty: "::UnityEngine::QueryParameters", modifiers: "", def_value: None }]
constexpr OverlapBoxCommand(::UnityEngine::Vector3  _center_k__BackingField, ::UnityEngine::Vector3  _halfExtents_k__BackingField, ::UnityEngine::Quaternion  _orientation_k__BackingField, ::UnityEngine::PhysicsScene  _physicsScene_k__BackingField, ::UnityEngine::QueryParameters  queryParameters) noexcept;

/// @brief Field <center>k__BackingField, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  _center_k__BackingField;

/// @brief Field <halfExtents>k__BackingField, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  _halfExtents_k__BackingField;

/// @brief Field <orientation>k__BackingField, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Quaternion  _orientation_k__BackingField;

/// @brief Field <physicsScene>k__BackingField, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::PhysicsScene  _physicsScene_k__BackingField;

/// @brief Field queryParameters, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::QueryParameters  queryParameters;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3c};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::OverlapBoxCommand, 0x3c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::OverlapBoxCommand, _center_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::OverlapBoxCommand, _halfExtents_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::OverlapBoxCommand, _orientation_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::OverlapBoxCommand, _physicsScene_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::OverlapBoxCommand, queryParameters) == 0x2c, "Offset mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::OverlapBoxCommand, "UnityEngine", "OverlapBoxCommand");
