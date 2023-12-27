#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OffsetDirection)
// Forward declare root types
namespace GlobalNamespace {
struct OffsetDirection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OffsetDirection);
// Type: ::OffsetDirection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14762))
// CS Name: ::OffsetDirection
struct CORDL_TYPE OffsetDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OffsetDirection_Unwrapped
  enum struct __OffsetDirection_Unwrapped : int32_t {
    __E_Up = static_cast<int32_t>(0x0),
    __E_Down = static_cast<int32_t>(0x1),
    __E_Left = static_cast<int32_t>(0x2),
    __E_Right = static_cast<int32_t>(0x3),
    __E_UpLeft = static_cast<int32_t>(0x4),
    __E_UpRight = static_cast<int32_t>(0x5),
    __E_DownLeft = static_cast<int32_t>(0x6),
    __E_DownRight = static_cast<int32_t>(0x7),
    __E_None = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OffsetDirection_Unwrapped() const noexcept {
    return static_cast<__OffsetDirection_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OffsetDirection(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OffsetDirection();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Up value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::OffsetDirection const Up;

  /// @brief Field Down value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::OffsetDirection const Down;

  /// @brief Field Left value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::OffsetDirection const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::OffsetDirection const Right;

  /// @brief Field UpLeft value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::OffsetDirection const UpLeft;

  /// @brief Field UpRight value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::OffsetDirection const UpRight;

  /// @brief Field DownLeft value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::OffsetDirection const DownLeft;

  /// @brief Field DownRight value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::OffsetDirection const DownRight;

  /// @brief Field None value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::OffsetDirection const None;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OffsetDirection, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OffsetDirection, "", "OffsetDirection");
