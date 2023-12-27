#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceChannelTypes)
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceChannelTypes;
}
// Write type traits
MARK_VAL_T(::IgnoranceCore::IgnoranceChannelTypes);
// Type: IgnoranceCore::IgnoranceChannelTypes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15242))
// CS Name: ::IgnoranceCore::IgnoranceChannelTypes
struct CORDL_TYPE IgnoranceChannelTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IgnoranceChannelTypes_Unwrapped
  enum struct __IgnoranceChannelTypes_Unwrapped : int32_t {
    __E_Reliable = static_cast<int32_t>(0x1),
    __E_ReliableUnsequenced = static_cast<int32_t>(0x3),
    __E_Unreliable = static_cast<int32_t>(0x2),
    __E_UnreliableFragmented = static_cast<int32_t>(0x8),
    __E_UnreliableSequenced = static_cast<int32_t>(0x0),
    __E_Unthrottled = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IgnoranceChannelTypes_Unwrapped() const noexcept {
    return static_cast<__IgnoranceChannelTypes_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IgnoranceChannelTypes(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoranceChannelTypes();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Reliable value: static_cast<int32_t>(0x1)
  static ::IgnoranceCore::IgnoranceChannelTypes const Reliable;

  /// @brief Field ReliableUnsequenced value: static_cast<int32_t>(0x3)
  static ::IgnoranceCore::IgnoranceChannelTypes const ReliableUnsequenced;

  /// @brief Field Unreliable value: static_cast<int32_t>(0x2)
  static ::IgnoranceCore::IgnoranceChannelTypes const Unreliable;

  /// @brief Field UnreliableFragmented value: static_cast<int32_t>(0x8)
  static ::IgnoranceCore::IgnoranceChannelTypes const UnreliableFragmented;

  /// @brief Field UnreliableSequenced value: static_cast<int32_t>(0x0)
  static ::IgnoranceCore::IgnoranceChannelTypes const UnreliableSequenced;

  /// @brief Field Unthrottled value: static_cast<int32_t>(0x20)
  static ::IgnoranceCore::IgnoranceChannelTypes const Unthrottled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceChannelTypes, 0x4>, "Size mismatch!");

} // namespace IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceChannelTypes, "IgnoranceCore", "IgnoranceChannelTypes");
