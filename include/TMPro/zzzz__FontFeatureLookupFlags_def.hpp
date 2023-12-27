#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontFeatureLookupFlags)
// Forward declare root types
namespace TMPro {
struct FontFeatureLookupFlags;
}
// Write type traits
MARK_VAL_T(::TMPro::FontFeatureLookupFlags);
// Type: TMPro::FontFeatureLookupFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12371))
// CS Name: ::TMPro::FontFeatureLookupFlags
struct CORDL_TYPE FontFeatureLookupFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FontFeatureLookupFlags_Unwrapped
  enum struct __FontFeatureLookupFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_IgnoreLigatures = static_cast<int32_t>(0x4),
    __E_IgnoreSpacingAdjustments = static_cast<int32_t>(0x100),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FontFeatureLookupFlags_Unwrapped() const noexcept {
    return static_cast<__FontFeatureLookupFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FontFeatureLookupFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr FontFeatureLookupFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::TMPro::FontFeatureLookupFlags const None;

  /// @brief Field IgnoreLigatures value: static_cast<int32_t>(0x4)
  static ::TMPro::FontFeatureLookupFlags const IgnoreLigatures;

  /// @brief Field IgnoreSpacingAdjustments value: static_cast<int32_t>(0x100)
  static ::TMPro::FontFeatureLookupFlags const IgnoreSpacingAdjustments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::FontFeatureLookupFlags, 0x4>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::FontFeatureLookupFlags, "TMPro", "FontFeatureLookupFlags");
