#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InputUserSettings)
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Users {
class InputUserSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Users::InputUserSettings);
// Type: UnityEngine.InputSystem.Users::InputUserSettings
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Users {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 391 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2613))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6368)) CS Name: ::UnityEngine.InputSystem.Users::InputUserSettings*
class CORDL_TYPE InputUserSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field <customBindings>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__customBindings_k__BackingField, put = __set__customBindings_k__BackingField))::StringW _customBindings_k__BackingField;

  /// @brief Field <invertMouseX>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __get__invertMouseX_k__BackingField, put = __set__invertMouseX_k__BackingField)) bool _invertMouseX_k__BackingField;

  /// @brief Field <invertMouseY>k__BackingField, offset 0x19, size 0x1
  __declspec(property(get = __get__invertMouseY_k__BackingField, put = __set__invertMouseY_k__BackingField)) bool _invertMouseY_k__BackingField;

  /// @brief Field <mouseSmoothing>k__BackingField, offset 0x1c, size 0x8
  __declspec(property(get = __get__mouseSmoothing_k__BackingField, put = __set__mouseSmoothing_k__BackingField))::System::Nullable_1<float_t> _mouseSmoothing_k__BackingField;

  /// @brief Field <mouseSensitivity>k__BackingField, offset 0x24, size 0x8
  __declspec(property(get = __get__mouseSensitivity_k__BackingField, put = __set__mouseSensitivity_k__BackingField))::System::Nullable_1<float_t> _mouseSensitivity_k__BackingField;

  /// @brief Field <invertStickX>k__BackingField, offset 0x2c, size 0x1
  __declspec(property(get = __get__invertStickX_k__BackingField, put = __set__invertStickX_k__BackingField)) bool _invertStickX_k__BackingField;

  /// @brief Field <invertStickY>k__BackingField, offset 0x2d, size 0x1
  __declspec(property(get = __get__invertStickY_k__BackingField, put = __set__invertStickY_k__BackingField)) bool _invertStickY_k__BackingField;

  /// @brief Field <swapSticks>k__BackingField, offset 0x2e, size 0x1
  __declspec(property(get = __get__swapSticks_k__BackingField, put = __set__swapSticks_k__BackingField)) bool _swapSticks_k__BackingField;

  /// @brief Field <swapBumpers>k__BackingField, offset 0x2f, size 0x1
  __declspec(property(get = __get__swapBumpers_k__BackingField, put = __set__swapBumpers_k__BackingField)) bool _swapBumpers_k__BackingField;

  /// @brief Field <swapTriggers>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __get__swapTriggers_k__BackingField, put = __set__swapTriggers_k__BackingField)) bool _swapTriggers_k__BackingField;

  /// @brief Field <swapDpadAndLeftStick>k__BackingField, offset 0x31, size 0x1
  __declspec(property(get = __get__swapDpadAndLeftStick_k__BackingField, put = __set__swapDpadAndLeftStick_k__BackingField)) bool _swapDpadAndLeftStick_k__BackingField;

  /// @brief Field <vibrationStrength>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __get__vibrationStrength_k__BackingField, put = __set__vibrationStrength_k__BackingField)) float_t _vibrationStrength_k__BackingField;

  /// @brief Field m_CustomBindings, offset 0x38, size 0x8
  __declspec(property(get = __get_m_CustomBindings, put = __set_m_CustomBindings))::StringW m_CustomBindings;

  __declspec(property(get = get_customBindings, put = set_customBindings))::StringW customBindings;

  __declspec(property(get = get_invertMouseX, put = set_invertMouseX)) bool invertMouseX;

  __declspec(property(get = get_invertMouseY, put = set_invertMouseY)) bool invertMouseY;

  __declspec(property(get = get_mouseSmoothing, put = set_mouseSmoothing))::System::Nullable_1<float_t> mouseSmoothing;

  __declspec(property(get = get_mouseSensitivity, put = set_mouseSensitivity))::System::Nullable_1<float_t> mouseSensitivity;

  __declspec(property(get = get_invertStickX, put = set_invertStickX)) bool invertStickX;

  __declspec(property(get = get_invertStickY, put = set_invertStickY)) bool invertStickY;

  __declspec(property(get = get_swapSticks, put = set_swapSticks)) bool swapSticks;

  __declspec(property(get = get_swapBumpers, put = set_swapBumpers)) bool swapBumpers;

  __declspec(property(get = get_swapTriggers, put = set_swapTriggers)) bool swapTriggers;

  __declspec(property(get = get_swapDpadAndLeftStick, put = set_swapDpadAndLeftStick)) bool swapDpadAndLeftStick;

  __declspec(property(get = get_vibrationStrength, put = set_vibrationStrength)) float_t vibrationStrength;

  constexpr ::StringW& __get__customBindings_k__BackingField();

  constexpr ::StringW const& __get__customBindings_k__BackingField() const;

  constexpr void __set__customBindings_k__BackingField(::StringW value);

  constexpr bool& __get__invertMouseX_k__BackingField();

  constexpr bool const& __get__invertMouseX_k__BackingField() const;

  constexpr void __set__invertMouseX_k__BackingField(bool value);

  constexpr bool& __get__invertMouseY_k__BackingField();

  constexpr bool const& __get__invertMouseY_k__BackingField() const;

  constexpr void __set__invertMouseY_k__BackingField(bool value);

  constexpr ::System::Nullable_1<float_t>& __get__mouseSmoothing_k__BackingField();

  constexpr ::System::Nullable_1<float_t> const& __get__mouseSmoothing_k__BackingField() const;

  constexpr void __set__mouseSmoothing_k__BackingField(::System::Nullable_1<float_t> value);

  constexpr ::System::Nullable_1<float_t>& __get__mouseSensitivity_k__BackingField();

  constexpr ::System::Nullable_1<float_t> const& __get__mouseSensitivity_k__BackingField() const;

  constexpr void __set__mouseSensitivity_k__BackingField(::System::Nullable_1<float_t> value);

  constexpr bool& __get__invertStickX_k__BackingField();

  constexpr bool const& __get__invertStickX_k__BackingField() const;

  constexpr void __set__invertStickX_k__BackingField(bool value);

  constexpr bool& __get__invertStickY_k__BackingField();

  constexpr bool const& __get__invertStickY_k__BackingField() const;

  constexpr void __set__invertStickY_k__BackingField(bool value);

  constexpr bool& __get__swapSticks_k__BackingField();

  constexpr bool const& __get__swapSticks_k__BackingField() const;

  constexpr void __set__swapSticks_k__BackingField(bool value);

  constexpr bool& __get__swapBumpers_k__BackingField();

  constexpr bool const& __get__swapBumpers_k__BackingField() const;

  constexpr void __set__swapBumpers_k__BackingField(bool value);

  constexpr bool& __get__swapTriggers_k__BackingField();

  constexpr bool const& __get__swapTriggers_k__BackingField() const;

  constexpr void __set__swapTriggers_k__BackingField(bool value);

  constexpr bool& __get__swapDpadAndLeftStick_k__BackingField();

  constexpr bool const& __get__swapDpadAndLeftStick_k__BackingField() const;

  constexpr void __set__swapDpadAndLeftStick_k__BackingField(bool value);

  constexpr float_t& __get__vibrationStrength_k__BackingField();

  constexpr float_t const& __get__vibrationStrength_k__BackingField() const;

  constexpr void __set__vibrationStrength_k__BackingField(float_t value);

  constexpr ::StringW& __get_m_CustomBindings();

  constexpr ::StringW const& __get_m_CustomBindings() const;

  constexpr void __set_m_CustomBindings(::StringW value);

  /// @brief Method get_customBindings addr 0x2acf63c size 0x8 virtual false final false
  inline ::StringW get_customBindings();

  /// @brief Method set_customBindings addr 0x2acf644 size 0x8 virtual false final false
  inline void set_customBindings(::StringW value);

  /// @brief Method get_invertMouseX addr 0x2acf64c size 0x8 virtual false final false
  inline bool get_invertMouseX();

  /// @brief Method set_invertMouseX addr 0x2acf654 size 0xc virtual false final false
  inline void set_invertMouseX(bool value);

  /// @brief Method get_invertMouseY addr 0x2acf660 size 0x8 virtual false final false
  inline bool get_invertMouseY();

  /// @brief Method set_invertMouseY addr 0x2acf668 size 0xc virtual false final false
  inline void set_invertMouseY(bool value);

  /// @brief Method get_mouseSmoothing addr 0x2acf674 size 0x8 virtual false final false
  inline ::System::Nullable_1<float_t> get_mouseSmoothing();

  /// @brief Method set_mouseSmoothing addr 0x2acf67c size 0x8 virtual false final false
  inline void set_mouseSmoothing(::System::Nullable_1<float_t> value);

  /// @brief Method get_mouseSensitivity addr 0x2acf684 size 0x8 virtual false final false
  inline ::System::Nullable_1<float_t> get_mouseSensitivity();

  /// @brief Method set_mouseSensitivity addr 0x2acf68c size 0x8 virtual false final false
  inline void set_mouseSensitivity(::System::Nullable_1<float_t> value);

  /// @brief Method get_invertStickX addr 0x2acf694 size 0x8 virtual false final false
  inline bool get_invertStickX();

  /// @brief Method set_invertStickX addr 0x2acf69c size 0xc virtual false final false
  inline void set_invertStickX(bool value);

  /// @brief Method get_invertStickY addr 0x2acf6a8 size 0x8 virtual false final false
  inline bool get_invertStickY();

  /// @brief Method set_invertStickY addr 0x2acf6b0 size 0xc virtual false final false
  inline void set_invertStickY(bool value);

  /// @brief Method get_swapSticks addr 0x2acf6bc size 0x8 virtual false final false
  inline bool get_swapSticks();

  /// @brief Method set_swapSticks addr 0x2acf6c4 size 0xc virtual false final false
  inline void set_swapSticks(bool value);

  /// @brief Method get_swapBumpers addr 0x2acf6d0 size 0x8 virtual false final false
  inline bool get_swapBumpers();

  /// @brief Method set_swapBumpers addr 0x2acf6d8 size 0xc virtual false final false
  inline void set_swapBumpers(bool value);

  /// @brief Method get_swapTriggers addr 0x2acf6e4 size 0x8 virtual false final false
  inline bool get_swapTriggers();

  /// @brief Method set_swapTriggers addr 0x2acf6ec size 0xc virtual false final false
  inline void set_swapTriggers(bool value);

  /// @brief Method get_swapDpadAndLeftStick addr 0x2acf6f8 size 0x8 virtual false final false
  inline bool get_swapDpadAndLeftStick();

  /// @brief Method set_swapDpadAndLeftStick addr 0x2acf700 size 0xc virtual false final false
  inline void set_swapDpadAndLeftStick(bool value);

  /// @brief Method get_vibrationStrength addr 0x2acf70c size 0x8 virtual false final false
  inline float_t get_vibrationStrength();

  /// @brief Method set_vibrationStrength addr 0x2acf714 size 0x8 virtual false final false
  inline void set_vibrationStrength(float_t value);

  /// @brief Method Apply addr 0x2acf71c size 0x4 virtual true final false
  inline void Apply(::UnityEngine::InputSystem::IInputActionCollection* actions);

  static inline ::UnityEngine::InputSystem::Users::InputUserSettings* New_ctor();

  /// @brief Method .ctor addr 0x2acf720 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InputUserSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputUserSettings(InputUserSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputUserSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputUserSettings(InputUserSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUserSettings();

public:
  /// @brief Field <customBindings>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____customBindings_k__BackingField;

  /// @brief Field <invertMouseX>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____invertMouseX_k__BackingField;

  /// @brief Field <invertMouseY>k__BackingField, offset: 0x19, size: 0x1, def value: None
  bool ____invertMouseY_k__BackingField;

  /// @brief Field <mouseSmoothing>k__BackingField, offset: 0x1c, size: 0x8, def value: None
  ::System::Nullable_1<float_t> ____mouseSmoothing_k__BackingField;

  /// @brief Field <mouseSensitivity>k__BackingField, offset: 0x24, size: 0x8, def value: None
  ::System::Nullable_1<float_t> ____mouseSensitivity_k__BackingField;

  /// @brief Field <invertStickX>k__BackingField, offset: 0x2c, size: 0x1, def value: None
  bool ____invertStickX_k__BackingField;

  /// @brief Field <invertStickY>k__BackingField, offset: 0x2d, size: 0x1, def value: None
  bool ____invertStickY_k__BackingField;

  /// @brief Field <swapSticks>k__BackingField, offset: 0x2e, size: 0x1, def value: None
  bool ____swapSticks_k__BackingField;

  /// @brief Field <swapBumpers>k__BackingField, offset: 0x2f, size: 0x1, def value: None
  bool ____swapBumpers_k__BackingField;

  /// @brief Field <swapTriggers>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____swapTriggers_k__BackingField;

  /// @brief Field <swapDpadAndLeftStick>k__BackingField, offset: 0x31, size: 0x1, def value: None
  bool ____swapDpadAndLeftStick_k__BackingField;

  /// @brief Field <vibrationStrength>k__BackingField, offset: 0x34, size: 0x4, def value: None
  float_t ____vibrationStrength_k__BackingField;

  /// @brief Field m_CustomBindings, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_CustomBindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::InputUserSettings, 0x40>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
NEED_NO_BOX(::UnityEngine::InputSystem::Users::InputUserSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUserSettings*, "UnityEngine.InputSystem.Users", "InputUserSettings");
