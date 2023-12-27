#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ButtonControl)
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::ButtonControl);
// Type: UnityEngine.InputSystem.Controls::ButtonControl
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 284, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6629))
// CS Name: ::UnityEngine.InputSystem.Controls::ButtonControl*
class CORDL_TYPE ButtonControl : public ::UnityEngine::InputSystem::Controls::AxisControl {
public:
  // Declarations
  /// @brief Field pressPoint, offset 0x118, size 0x4
  __declspec(property(get = __get_pressPoint, put = __set_pressPoint)) float_t pressPoint;

  /// @brief Field s_GlobalDefaultButtonPressPoint, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_GlobalDefaultButtonPressPoint, put = setStaticF_s_GlobalDefaultButtonPressPoint)) float_t s_GlobalDefaultButtonPressPoint;

  /// @brief Field s_GlobalDefaultButtonReleaseThreshold, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_GlobalDefaultButtonReleaseThreshold, put = setStaticF_s_GlobalDefaultButtonReleaseThreshold)) float_t s_GlobalDefaultButtonReleaseThreshold;

  __declspec(property(get = get_pressPointOrDefault)) float_t pressPointOrDefault;

  __declspec(property(get = get_isPressed)) bool isPressed;

  __declspec(property(get = get_wasPressedThisFrame)) bool wasPressedThisFrame;

  __declspec(property(get = get_wasReleasedThisFrame)) bool wasReleasedThisFrame;

  constexpr float_t& __get_pressPoint();

  constexpr float_t const& __get_pressPoint() const;

  constexpr void __set_pressPoint(float_t value);

  static inline void setStaticF_s_GlobalDefaultButtonPressPoint(float_t value);

  static inline float_t getStaticF_s_GlobalDefaultButtonPressPoint();

  static inline void setStaticF_s_GlobalDefaultButtonReleaseThreshold(float_t value);

  static inline float_t getStaticF_s_GlobalDefaultButtonReleaseThreshold();

  /// @brief Method get_pressPointOrDefault addr 0x2b09f6c size 0x58 virtual false final false
  inline float_t get_pressPointOrDefault();

  static inline ::UnityEngine::InputSystem::Controls::ButtonControl* New_ctor();

  /// @brief Method .ctor addr 0x2b09a04 size 0x88 virtual false final false
  inline void _ctor();

  /// @brief Method IsValueConsideredPressed addr 0x2b09fd8 size 0x6c virtual false final false
  inline bool IsValueConsideredPressed(float_t value);

  /// @brief Method get_isPressed addr 0x2b0a044 size 0xa0 virtual false final false
  inline bool get_isPressed();

  /// @brief Method get_wasPressedThisFrame addr 0x2b0a0e4 size 0x120 virtual false final false
  inline bool get_wasPressedThisFrame();

  /// @brief Method get_wasReleasedThisFrame addr 0x2b0a204 size 0x120 virtual false final false
  inline bool get_wasReleasedThisFrame();

  // Ctor Parameters [CppParam { name: "", ty: "ButtonControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonControl(ButtonControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonControl(ButtonControl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonControl();

public:
  /// @brief Field pressPoint, offset: 0x118, size: 0x4, def value: None
  float_t ___pressPoint;

  /// @brief Field kMinButtonPressPoint offset 0xffffffff size 0x4
  static constexpr float_t kMinButtonPressPoint{ 0.0001 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::ButtonControl, 0x120>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::ButtonControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::ButtonControl*, "UnityEngine.InputSystem.Controls", "ButtonControl");
