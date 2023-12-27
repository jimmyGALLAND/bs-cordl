#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IsPackBetterBuyThanLevelResult)
// Forward declare root types
namespace GlobalNamespace {
struct IsPackBetterBuyThanLevelResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::IsPackBetterBuyThanLevelResult);
// Type: ::IsPackBetterBuyThanLevelResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16272))
// CS Name: ::IsPackBetterBuyThanLevelResult
struct CORDL_TYPE IsPackBetterBuyThanLevelResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IsPackBetterBuyThanLevelResult_Unwrapped
  enum struct __IsPackBetterBuyThanLevelResult_Unwrapped : int32_t {
    __E_PackIsBetter = static_cast<int32_t>(0x0),
    __E_LevelIsBetter = static_cast<int32_t>(0x1),
    __E_Failed = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IsPackBetterBuyThanLevelResult_Unwrapped() const noexcept {
    return static_cast<__IsPackBetterBuyThanLevelResult_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IsPackBetterBuyThanLevelResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IsPackBetterBuyThanLevelResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field PackIsBetter value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::IsPackBetterBuyThanLevelResult const PackIsBetter;

  /// @brief Field LevelIsBetter value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::IsPackBetterBuyThanLevelResult const LevelIsBetter;

  /// @brief Field Failed value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::IsPackBetterBuyThanLevelResult const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IsPackBetterBuyThanLevelResult, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IsPackBetterBuyThanLevelResult, "", "IsPackBetterBuyThanLevelResult");
