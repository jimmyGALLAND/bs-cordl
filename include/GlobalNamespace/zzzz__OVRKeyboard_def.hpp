#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRKeyboard)
namespace GlobalNamespace {
struct __OVRKeyboard__TrackedKeyboardState;
}
namespace GlobalNamespace {
struct __OVRKeyboard__TrackedKeyboardInfo;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackedKeyboardQueryFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackedKeyboardPresentationStyles;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackedKeyboardFlags;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRKeyboard;
}
namespace GlobalNamespace {
struct __OVRKeyboard__TrackedKeyboardInfo;
}
namespace GlobalNamespace {
struct __OVRKeyboard__TrackedKeyboardState;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRKeyboard);
MARK_VAL_T(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo);
MARK_VAL_T(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardState);
// Type: ::TrackedKeyboardState
// SizeInfo { instance_size: 40, native_size: 56, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8025))
// CS Name: ::OVRKeyboard::TrackedKeyboardState
struct CORDL_TYPE __OVRKeyboard__TrackedKeyboardState {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "isPositionValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isPositionTracked", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "isOrientationValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isOrientationTracked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "position", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "timeInSeconds", ty:
  // "double_t", modifiers: "", def_value: None }]
  constexpr __OVRKeyboard__TrackedKeyboardState(bool isPositionValid, bool isPositionTracked, bool isOrientationValid, bool isOrientationTracked, ::UnityEngine::Vector3 position,
                                                ::UnityEngine::Quaternion rotation, double_t timeInSeconds) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRKeyboard__TrackedKeyboardState();

  /// @brief Field isPositionValid, offset: 0x0, size: 0x1, def value: None
  bool isPositionValid;

  /// @brief Field isPositionTracked, offset: 0x1, size: 0x1, def value: None
  bool isPositionTracked;

  /// @brief Field isOrientationValid, offset: 0x2, size: 0x1, def value: None
  bool isOrientationValid;

  /// @brief Field isOrientationTracked, offset: 0x3, size: 0x1, def value: None
  bool isOrientationTracked;

  /// @brief Field position, offset: 0x4, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Quaternion rotation;

  /// @brief Field timeInSeconds, offset: 0x20, size: 0x8, def value: None
  double_t timeInSeconds;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardState, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TrackedKeyboardInfo
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7790)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(7791))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8026))
// CS Name: ::OVRKeyboard::TrackedKeyboardInfo
struct CORDL_TYPE __OVRKeyboard__TrackedKeyboardInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Identifier", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "Dimensions", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "KeyboardFlags", ty: "::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags", modifiers: "",
  // def_value: None }, CppParam { name: "SupportedPresentationStyles", ty: "::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles", modifiers: "", def_value: None }]
  constexpr __OVRKeyboard__TrackedKeyboardInfo(::StringW Name, uint64_t Identifier, ::UnityEngine::Vector3 Dimensions, ::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags KeyboardFlags,
                                               ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles SupportedPresentationStyles) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRKeyboard__TrackedKeyboardInfo();

  /// @brief Field Name, offset: 0x0, size: 0x8, def value: None
  ::StringW Name;

  /// @brief Field Identifier, offset: 0x8, size: 0x8, def value: None
  uint64_t Identifier;

  /// @brief Field Dimensions, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 Dimensions;

  /// @brief Field KeyboardFlags, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags KeyboardFlags;

  /// @brief Field SupportedPresentationStyles, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles SupportedPresentationStyles;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRKeyboard
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8027))
// CS Name: ::OVRKeyboard*
class CORDL_TYPE OVRKeyboard : public ::System::Object {
public:
  // Declarations
  using TrackedKeyboardInfo = ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo;

  using TrackedKeyboardState = ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardState;

  /// @brief Method GetKeyboardState addr 0x2793764 size 0x154 virtual false final false
  static inline ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardState GetKeyboardState();

  /// @brief Method GetSystemKeyboardInfo addr 0x27938b8 size 0xe4 virtual false final false
  static inline bool GetSystemKeyboardInfo(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags keyboardQueryFlags, ByRef<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo> keyboardInfo);

  /// @brief Method StopKeyboardTracking addr 0x279399c size 0x50 virtual false final false
  static inline bool StopKeyboardTracking(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo keyboardInfo);

  // Ctor Parameters [CppParam { name: "", ty: "OVRKeyboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRKeyboard(OVRKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRKeyboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRKeyboard(OVRKeyboard const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRKeyboard();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRKeyboard, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRKeyboard*, "", "OVRKeyboard");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, "", "OVRKeyboard/TrackedKeyboardInfo");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardState, "", "OVRKeyboard/TrackedKeyboardState");
