#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMesh)
namespace UnityEngine::AI {
class __NavMesh__OnNavMeshPreUpdate;
}
namespace UnityEngine::AI {
struct NavMeshHit;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::AI {
class NavMeshPath;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::AI {
class NavMesh;
}
namespace UnityEngine::AI {
class __NavMesh__OnNavMeshPreUpdate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AI::NavMesh);
MARK_REF_PTR_T(::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate);
// Type: ::OnNavMeshPreUpdate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::AI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16117))
// CS Name: ::NavMesh::OnNavMeshPreUpdate*
class CORDL_TYPE __NavMesh__OnNavMeshPreUpdate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2c7db8c size 0xbc virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2c7dc48 size 0x14 virtual true final false
  inline void Invoke();

  // Ctor Parameters [CppParam { name: "", ty: "__NavMesh__OnNavMeshPreUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NavMesh__OnNavMeshPreUpdate(__NavMesh__OnNavMeshPreUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NavMesh__OnNavMeshPreUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NavMesh__OnNavMeshPreUpdate(__NavMesh__OnNavMeshPreUpdate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NavMesh__OnNavMeshPreUpdate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::AI
// Type: UnityEngine.AI::NavMesh
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::AI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16118))
// CS Name: ::UnityEngine.AI::NavMesh*
class CORDL_TYPE NavMesh : public ::System::Object {
public:
  // Declarations
  using OnNavMeshPreUpdate = ::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate;

  /// @brief Field onPreUpdate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onPreUpdate, put = setStaticF_onPreUpdate))::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate* onPreUpdate;

  static inline void setStaticF_onPreUpdate(::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate* value);

  static inline ::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate* getStaticF_onPreUpdate();

  /// @brief Method Internal_CallOnNavMeshPreUpdate addr 0x2c7d8ec size 0x64 virtual false final false
  static inline void Internal_CallOnNavMeshPreUpdate();

  /// @brief Method CalculatePath addr 0x2c7d950 size 0xa0 virtual false final false
  static inline bool CalculatePath(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, int32_t areaMask, ::UnityEngine::AI::NavMeshPath* path);

  /// @brief Method CalculatePathInternal addr 0x2c7d9f0 size 0x6c virtual false final false
  static inline bool CalculatePathInternal(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, int32_t areaMask, ::UnityEngine::AI::NavMeshPath* path);

  /// @brief Method SamplePosition addr 0x2c7dab8 size 0x70 virtual false final false
  static inline bool SamplePosition(::UnityEngine::Vector3 sourcePosition, ByRef<::UnityEngine::AI::NavMeshHit> hit, float_t maxDistance, int32_t areaMask);

  /// @brief Method CalculatePathInternal_Injected addr 0x2c7da5c size 0x5c virtual false final false
  static inline bool CalculatePathInternal_Injected(ByRef<::UnityEngine::Vector3> sourcePosition, ByRef<::UnityEngine::Vector3> targetPosition, int32_t areaMask, ::UnityEngine::AI::NavMeshPath* path);

  /// @brief Method SamplePosition_Injected addr 0x2c7db28 size 0x64 virtual false final false
  static inline bool SamplePosition_Injected(ByRef<::UnityEngine::Vector3> sourcePosition, ByRef<::UnityEngine::AI::NavMeshHit> hit, float_t maxDistance, int32_t areaMask);

  // Ctor Parameters [CppParam { name: "", ty: "NavMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavMesh(NavMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavMesh(NavMesh const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavMesh();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AI::NavMesh, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AI
NEED_NO_BOX(::UnityEngine::AI::NavMesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AI::NavMesh*, "UnityEngine.AI", "NavMesh");
NEED_NO_BOX(::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AI::__NavMesh__OnNavMeshPreUpdate*, "UnityEngine.AI", "NavMesh/OnNavMeshPreUpdate");
