#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HmdMatrix34_t)
// Forward declare root types
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdMatrix34_t);
// Type: OVR.OpenVR::HmdMatrix34_t
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8644))
// CS Name: ::OVR.OpenVR::HmdMatrix34_t
struct CORDL_TYPE HmdMatrix34_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m2", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "m3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m4", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m5", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m6", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m7", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "m8", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m9", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m10", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "m11", ty: "float_t", modifiers: "", def_value: None }]
  constexpr HmdMatrix34_t(float_t m0, float_t m1, float_t m2, float_t m3, float_t m4, float_t m5, float_t m6, float_t m7, float_t m8, float_t m9, float_t m10, float_t m11) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HmdMatrix34_t();

  /// @brief Field m0, offset: 0x0, size: 0x4, def value: None
  float_t m0;

  /// @brief Field m1, offset: 0x4, size: 0x4, def value: None
  float_t m1;

  /// @brief Field m2, offset: 0x8, size: 0x4, def value: None
  float_t m2;

  /// @brief Field m3, offset: 0xc, size: 0x4, def value: None
  float_t m3;

  /// @brief Field m4, offset: 0x10, size: 0x4, def value: None
  float_t m4;

  /// @brief Field m5, offset: 0x14, size: 0x4, def value: None
  float_t m5;

  /// @brief Field m6, offset: 0x18, size: 0x4, def value: None
  float_t m6;

  /// @brief Field m7, offset: 0x1c, size: 0x4, def value: None
  float_t m7;

  /// @brief Field m8, offset: 0x20, size: 0x4, def value: None
  float_t m8;

  /// @brief Field m9, offset: 0x24, size: 0x4, def value: None
  float_t m9;

  /// @brief Field m10, offset: 0x28, size: 0x4, def value: None
  float_t m10;

  /// @brief Field m11, offset: 0x2c, size: 0x4, def value: None
  float_t m11;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdMatrix34_t, 0x30>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdMatrix34_t, "OVR.OpenVR", "HmdMatrix34_t");
