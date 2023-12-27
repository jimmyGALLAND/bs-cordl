#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SDKQuaternion)
namespace LIV::SDK::Unity {
struct SDKVector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKQuaternion;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKQuaternion);
// Type: LIV.SDK.Unity::SDKQuaternion
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15110))
// CS Name: ::LIV.SDK.Unity::SDKQuaternion
struct CORDL_TYPE SDKQuaternion {
public:
  // Declarations
  /// @brief Method get_identity addr 0x2213fec size 0x14 virtual false final false
  static inline ::LIV::SDK::Unity::SDKQuaternion get_identity();

  /// @brief Method op_Implicit addr 0x2214000 size 0x4 virtual false final false
  static inline ::UnityEngine::Quaternion op_Implicit___UnityEngine__Quaternion(::LIV::SDK::Unity::SDKQuaternion v);

  /// @brief Method op_Implicit addr 0x2213464 size 0x4 virtual false final false
  static inline ::LIV::SDK::Unity::SDKQuaternion op_Implicit___LIV__SDK__Unity__SDKQuaternion(::UnityEngine::Quaternion v);

  /// @brief Method Euler addr 0x2214004 size 0xb4 virtual false final false
  static inline ::LIV::SDK::Unity::SDKQuaternion Euler(float_t pitch, float_t yaw, float_t roll);

  /// @brief Method op_Multiply addr 0x22140b8 size 0x74 virtual false final false
  static inline ::LIV::SDK::Unity::SDKQuaternion op_Multiply(::LIV::SDK::Unity::SDKQuaternion lhs, ::LIV::SDK::Unity::SDKQuaternion rhs);

  /// @brief Method op_Multiply addr 0x221412c size 0xa4 virtual false final false
  static inline ::LIV::SDK::Unity::SDKVector3 op_Multiply(::LIV::SDK::Unity::SDKQuaternion lhs, ::LIV::SDK::Unity::SDKVector3 rhs);

  /// @brief Method ToString addr 0x22141d0 size 0x1ac virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }]
  constexpr SDKQuaternion(float_t x, float_t y, float_t z, float_t w) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKQuaternion();

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  float_t z;

  /// @brief Field w, offset: 0xc, size: 0x4, def value: None
  float_t w;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKQuaternion, 0x10>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKQuaternion, "LIV.SDK.Unity", "SDKQuaternion");
