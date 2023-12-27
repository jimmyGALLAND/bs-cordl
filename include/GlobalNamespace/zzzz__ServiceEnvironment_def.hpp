#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ServiceEnvironment)
// Forward declare root types
namespace GlobalNamespace {
struct ServiceEnvironment;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ServiceEnvironment);
// Type: ::ServiceEnvironment
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12740))
// CS Name: ::ServiceEnvironment
struct CORDL_TYPE ServiceEnvironment {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ServiceEnvironment_Unwrapped
  enum struct __ServiceEnvironment_Unwrapped : int32_t {
    __E_Production = static_cast<int32_t>(0x0),
    __E_ReleaseCandidate = static_cast<int32_t>(0x1),
    __E_InternalPlayTest = static_cast<int32_t>(0x2),
    __E_QATesting = static_cast<int32_t>(0x3),
    __E_Development = static_cast<int32_t>(0x4),
    __E_ProductionA = static_cast<int32_t>(0x5),
    __E_ProductionB = static_cast<int32_t>(0x6),
    __E_DevelopmentA = static_cast<int32_t>(0x7),
    __E_DevelopmentB = static_cast<int32_t>(0x8),
    __E_ProductionC = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ServiceEnvironment_Unwrapped() const noexcept {
    return static_cast<__ServiceEnvironment_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ServiceEnvironment(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ServiceEnvironment();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Production value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::ServiceEnvironment const Production;

  /// @brief Field ReleaseCandidate value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::ServiceEnvironment const ReleaseCandidate;

  /// @brief Field InternalPlayTest value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::ServiceEnvironment const InternalPlayTest;

  /// @brief Field QATesting value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::ServiceEnvironment const QATesting;

  /// @brief Field Development value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::ServiceEnvironment const Development;

  /// @brief Field ProductionA value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::ServiceEnvironment const ProductionA;

  /// @brief Field ProductionB value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::ServiceEnvironment const ProductionB;

  /// @brief Field DevelopmentA value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::ServiceEnvironment const DevelopmentA;

  /// @brief Field DevelopmentB value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::ServiceEnvironment const DevelopmentB;

  /// @brief Field ProductionC value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::ServiceEnvironment const ProductionC;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ServiceEnvironment, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ServiceEnvironment, "", "ServiceEnvironment");
