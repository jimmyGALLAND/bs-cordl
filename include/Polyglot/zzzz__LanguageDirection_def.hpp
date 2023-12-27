#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LanguageDirection)
// Forward declare root types
namespace Polyglot {
struct LanguageDirection;
}
// Write type traits
MARK_VAL_T(::Polyglot::LanguageDirection);
// Type: Polyglot::LanguageDirection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15556))
// CS Name: ::Polyglot::LanguageDirection
struct CORDL_TYPE LanguageDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LanguageDirection_Unwrapped
  enum struct __LanguageDirection_Unwrapped : int32_t {
    __E_LeftToRight = static_cast<int32_t>(0x0),
    __E_RightToLeft = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LanguageDirection_Unwrapped() const noexcept {
    return static_cast<__LanguageDirection_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LanguageDirection(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LanguageDirection();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field LeftToRight value: static_cast<int32_t>(0x0)
  static ::Polyglot::LanguageDirection const LeftToRight;

  /// @brief Field RightToLeft value: static_cast<int32_t>(0x1)
  static ::Polyglot::LanguageDirection const RightToLeft;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::LanguageDirection, 0x4>, "Size mismatch!");

} // namespace Polyglot
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LanguageDirection, "Polyglot", "LanguageDirection");
