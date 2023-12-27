#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddressablesPlatform)
// Forward declare root types
namespace UnityEngine::AddressableAssets {
struct AddressablesPlatform;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AddressableAssets::AddressablesPlatform);
// Type: UnityEngine.AddressableAssets::AddressablesPlatform
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14098))
// CS Name: ::UnityEngine.AddressableAssets::AddressablesPlatform
struct CORDL_TYPE AddressablesPlatform {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AddressablesPlatform_Unwrapped
  enum struct __AddressablesPlatform_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Windows = static_cast<int32_t>(0x1),
    __E_OSX = static_cast<int32_t>(0x2),
    __E_Linux = static_cast<int32_t>(0x3),
    __E_PS4 = static_cast<int32_t>(0x4),
    __E_Switch = static_cast<int32_t>(0x5),
    __E_XboxOne = static_cast<int32_t>(0x6),
    __E_WebGL = static_cast<int32_t>(0x7),
    __E_iOS = static_cast<int32_t>(0x8),
    __E_Android = static_cast<int32_t>(0x9),
    __E_WindowsUniversal = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AddressablesPlatform_Unwrapped() const noexcept {
    return static_cast<__AddressablesPlatform_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AddressablesPlatform(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AddressablesPlatform();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::UnityEngine::AddressableAssets::AddressablesPlatform const Unknown;

  /// @brief Field Windows value: static_cast<int32_t>(0x1)
  static ::UnityEngine::AddressableAssets::AddressablesPlatform const Windows;

  /// @brief Field OSX value: static_cast<int32_t>(0x2)
  static ::UnityEngine::AddressableAssets::AddressablesPlatform const OSX;

  /// @brief Field Linux value: static_cast<int32_t>(0x3)
  static ::UnityEngine::AddressableAssets::AddressablesPlatform const Linux;

  /// @brief Field PS4 value: static_cast<int32_t>(0x4)
  static ::UnityEngine::AddressableAssets::AddressablesPlatform const PS4;

  /// @brief Field Switch value: static_cast<int32_t>(0x5)
  static ::UnityEngine::AddressableAssets::AddressablesPlatform const Switch;

  /// @brief Field XboxOne value: static_cast<int32_t>(0x6)
  static ::UnityEngine::AddressableAssets::AddressablesPlatform const XboxOne;

  /// @brief Field WebGL value: static_cast<int32_t>(0x7)
  static ::UnityEngine::AddressableAssets::AddressablesPlatform const WebGL;

  /// @brief Field iOS value: static_cast<int32_t>(0x8)
  static ::UnityEngine::AddressableAssets::AddressablesPlatform const iOS;

  /// @brief Field Android value: static_cast<int32_t>(0x9)
  static ::UnityEngine::AddressableAssets::AddressablesPlatform const Android;

  /// @brief Field WindowsUniversal value: static_cast<int32_t>(0xa)
  static ::UnityEngine::AddressableAssets::AddressablesPlatform const WindowsUniversal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::AddressablesPlatform, 0x4>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AddressablesPlatform, "UnityEngine.AddressableAssets", "AddressablesPlatform");
