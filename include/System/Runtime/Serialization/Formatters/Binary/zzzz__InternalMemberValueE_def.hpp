#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalMemberValueE)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalMemberValueE;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE);
// Type: System.Runtime.Serialization.Formatters.Binary::InternalMemberValueE
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3252))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::InternalMemberValueE
struct CORDL_TYPE InternalMemberValueE {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InternalMemberValueE_Unwrapped
  enum struct __InternalMemberValueE_Unwrapped : int32_t {
    __E_Empty = static_cast<int32_t>(0x0),
    __E_InlineValue = static_cast<int32_t>(0x1),
    __E_Nested = static_cast<int32_t>(0x2),
    __E_Reference = static_cast<int32_t>(0x3),
    __E_Null = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InternalMemberValueE_Unwrapped() const noexcept {
    return static_cast<__InternalMemberValueE_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InternalMemberValueE(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalMemberValueE();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Empty value: static_cast<int32_t>(0x0)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const Empty;

  /// @brief Field InlineValue value: static_cast<int32_t>(0x1)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const InlineValue;

  /// @brief Field Nested value: static_cast<int32_t>(0x2)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const Nested;

  /// @brief Field Reference value: static_cast<int32_t>(0x3)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const Reference;

  /// @brief Field Null value: static_cast<int32_t>(0x4)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const Null;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE, 0x4>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE, "System.Runtime.Serialization.Formatters.Binary", "InternalMemberValueE");
