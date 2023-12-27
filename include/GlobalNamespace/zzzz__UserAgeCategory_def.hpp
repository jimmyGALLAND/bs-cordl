#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserAgeCategory)
// Forward declare root types
namespace GlobalNamespace {
struct UserAgeCategory;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UserAgeCategory);
// Type: ::UserAgeCategory
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4660))
// CS Name: ::UserAgeCategory
struct CORDL_TYPE UserAgeCategory {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UserAgeCategory_Unwrapped
  enum struct __UserAgeCategory_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Child = static_cast<int32_t>(0x1),
    __E_Teen = static_cast<int32_t>(0x2),
    __E_Adult = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UserAgeCategory_Unwrapped() const noexcept {
    return static_cast<__UserAgeCategory_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UserAgeCategory(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr UserAgeCategory();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::UserAgeCategory const Unknown;

  /// @brief Field Child value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::UserAgeCategory const Child;

  /// @brief Field Teen value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::UserAgeCategory const Teen;

  /// @brief Field Adult value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::UserAgeCategory const Adult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UserAgeCategory, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UserAgeCategory, "", "UserAgeCategory");
