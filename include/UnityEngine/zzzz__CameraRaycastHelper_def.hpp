#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraRaycastHelper)
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine {
class CameraRaycastHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CameraRaycastHelper);
// Type: UnityEngine::CameraRaycastHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15954))
// CS Name: ::UnityEngine::CameraRaycastHelper*
class CORDL_TYPE CameraRaycastHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method RaycastTry addr 0x2d0e258 size 0x64 virtual false final false
  static inline ::UnityEngine::GameObject* RaycastTry(::UnityEngine::Camera* cam, ::UnityEngine::Ray ray, float_t distance, int32_t layerMask);

  /// @brief Method RaycastTry2D addr 0x2d0e320 size 0x64 virtual false final false
  static inline ::UnityEngine::GameObject* RaycastTry2D(::UnityEngine::Camera* cam, ::UnityEngine::Ray ray, float_t distance, int32_t layerMask);

  /// @brief Method RaycastTry_Injected addr 0x2d0e2bc size 0x64 virtual false final false
  static inline ::UnityEngine::GameObject* RaycastTry_Injected(::UnityEngine::Camera* cam, ByRef<::UnityEngine::Ray> ray, float_t distance, int32_t layerMask);

  /// @brief Method RaycastTry2D_Injected addr 0x2d0e384 size 0x64 virtual false final false
  static inline ::UnityEngine::GameObject* RaycastTry2D_Injected(::UnityEngine::Camera* cam, ByRef<::UnityEngine::Ray> ray, float_t distance, int32_t layerMask);

  // Ctor Parameters [CppParam { name: "", ty: "CameraRaycastHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraRaycastHelper(CameraRaycastHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraRaycastHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraRaycastHelper(CameraRaycastHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraRaycastHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CameraRaycastHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CameraRaycastHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CameraRaycastHelper*, "UnityEngine", "CameraRaycastHelper");
