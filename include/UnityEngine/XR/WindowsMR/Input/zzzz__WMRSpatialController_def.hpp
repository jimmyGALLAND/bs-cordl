#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
CORDL_MODULE_EXPORT(WMRSpatialController)
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
// Forward declare root types
namespace UnityEngine::XR::WindowsMR::Input {
class WMRSpatialController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController);
// Type: UnityEngine.XR.WindowsMR.Input::WMRSpatialController
// SizeInfo { instance_size: 512, native_size: -1, calculated_instance_size: 512, calculated_native_size: 512, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::WindowsMR::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6326))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6126))
// CS Name: ::UnityEngine.XR.WindowsMR.Input::WMRSpatialController*
class CORDL_TYPE WMRSpatialController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
  // Declarations
  /// @brief Field <joystick>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __get__joystick_k__BackingField, put = __set__joystick_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _joystick_k__BackingField;

  /// @brief Field <touchpad>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __get__touchpad_k__BackingField, put = __set__touchpad_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __get__grip_k__BackingField, put = __set__grip_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __get__gripPressed_k__BackingField, put = __set__gripPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __get__menu_k__BackingField, put = __set__menu_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __get__trigger_k__BackingField, put = __set__trigger_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __get__triggerPressed_k__BackingField, put = __set__triggerPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField;

  /// @brief Field <joystickClicked>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __get__joystickClicked_k__BackingField, put = __set__joystickClicked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _joystickClicked_k__BackingField;

  /// @brief Field <touchpadClicked>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __get__touchpadClicked_k__BackingField, put = __set__touchpadClicked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClicked_k__BackingField;

  /// @brief Field <touchpadTouched>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __get__touchpadTouched_k__BackingField, put = __set__touchpadTouched_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouched_k__BackingField;

  /// @brief Field <deviceVelocity>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __get__deviceVelocity_k__BackingField, put = __set__deviceVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __get__deviceAngularVelocity_k__BackingField,
                      put = __set__deviceAngularVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField;

  /// @brief Field <batteryLevel>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __get__batteryLevel_k__BackingField, put = __set__batteryLevel_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _batteryLevel_k__BackingField;

  /// @brief Field <sourceLossRisk>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __get__sourceLossRisk_k__BackingField, put = __set__sourceLossRisk_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _sourceLossRisk_k__BackingField;

  /// @brief Field <sourceLossMitigationDirection>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __get__sourceLossMitigationDirection_k__BackingField,
                      put = __set__sourceLossMitigationDirection_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _sourceLossMitigationDirection_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __get__pointerPosition_k__BackingField,
                      put = __set__pointerPosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset 0x1f8, size 0x8
  __declspec(property(get = __get__pointerRotation_k__BackingField,
                      put = __set__pointerRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _pointerRotation_k__BackingField;

  __declspec(property(get = get_joystick, put = set_joystick))::UnityEngine::InputSystem::Controls::Vector2Control* joystick;

  __declspec(property(get = get_touchpad, put = set_touchpad))::UnityEngine::InputSystem::Controls::Vector2Control* touchpad;

  __declspec(property(get = get_grip, put = set_grip))::UnityEngine::InputSystem::Controls::AxisControl* grip;

  __declspec(property(get = get_gripPressed, put = set_gripPressed))::UnityEngine::InputSystem::Controls::ButtonControl* gripPressed;

  __declspec(property(get = get_menu, put = set_menu))::UnityEngine::InputSystem::Controls::ButtonControl* menu;

  __declspec(property(get = get_trigger, put = set_trigger))::UnityEngine::InputSystem::Controls::AxisControl* trigger;

  __declspec(property(get = get_triggerPressed, put = set_triggerPressed))::UnityEngine::InputSystem::Controls::ButtonControl* triggerPressed;

  __declspec(property(get = get_joystickClicked, put = set_joystickClicked))::UnityEngine::InputSystem::Controls::ButtonControl* joystickClicked;

  __declspec(property(get = get_touchpadClicked, put = set_touchpadClicked))::UnityEngine::InputSystem::Controls::ButtonControl* touchpadClicked;

  __declspec(property(get = get_touchpadTouched, put = set_touchpadTouched))::UnityEngine::InputSystem::Controls::ButtonControl* touchpadTouched;

  __declspec(property(get = get_deviceVelocity, put = set_deviceVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* deviceVelocity;

  __declspec(property(get = get_deviceAngularVelocity, put = set_deviceAngularVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* deviceAngularVelocity;

  __declspec(property(get = get_batteryLevel, put = set_batteryLevel))::UnityEngine::InputSystem::Controls::AxisControl* batteryLevel;

  __declspec(property(get = get_sourceLossRisk, put = set_sourceLossRisk))::UnityEngine::InputSystem::Controls::AxisControl* sourceLossRisk;

  __declspec(property(get = get_sourceLossMitigationDirection, put = set_sourceLossMitigationDirection))::UnityEngine::InputSystem::Controls::Vector3Control* sourceLossMitigationDirection;

  __declspec(property(get = get_pointerPosition, put = set_pointerPosition))::UnityEngine::InputSystem::Controls::Vector3Control* pointerPosition;

  __declspec(property(get = get_pointerRotation, put = set_pointerRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* pointerRotation;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __get__joystick_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __get__joystick_k__BackingField() const;

  constexpr void __set__joystick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __get__touchpad_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __get__touchpad_k__BackingField() const;

  constexpr void __set__touchpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__grip_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__grip_k__BackingField() const;

  constexpr void __set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__gripPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__gripPressed_k__BackingField() const;

  constexpr void __set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__menu_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__menu_k__BackingField() const;

  constexpr void __set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__trigger_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__trigger_k__BackingField() const;

  constexpr void __set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__triggerPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__triggerPressed_k__BackingField() const;

  constexpr void __set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__joystickClicked_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__joystickClicked_k__BackingField() const;

  constexpr void __set__joystickClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__touchpadClicked_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__touchpadClicked_k__BackingField() const;

  constexpr void __set__touchpadClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__touchpadTouched_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__touchpadTouched_k__BackingField() const;

  constexpr void __set__touchpadTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__deviceVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__deviceVelocity_k__BackingField() const;

  constexpr void __set__deviceVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__deviceAngularVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__deviceAngularVelocity_k__BackingField() const;

  constexpr void __set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__batteryLevel_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__batteryLevel_k__BackingField() const;

  constexpr void __set__batteryLevel_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__sourceLossRisk_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__sourceLossRisk_k__BackingField() const;

  constexpr void __set__sourceLossRisk_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__sourceLossMitigationDirection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__sourceLossMitigationDirection_k__BackingField() const;

  constexpr void __set__sourceLossMitigationDirection_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__pointerPosition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__pointerPosition_k__BackingField() const;

  constexpr void __set__pointerPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __get__pointerRotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __get__pointerRotation_k__BackingField() const;

  constexpr void __set__pointerRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_joystick addr 0x2a3504c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_joystick();

  /// @brief Method set_joystick addr 0x2a35054 size 0x8 virtual false final false
  inline void set_joystick(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_touchpad addr 0x2a3505c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad();

  /// @brief Method set_touchpad addr 0x2a35064 size 0x8 virtual false final false
  inline void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_grip addr 0x2a3506c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip();

  /// @brief Method set_grip addr 0x2a35074 size 0x8 virtual false final false
  inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_gripPressed addr 0x2a3507c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed();

  /// @brief Method set_gripPressed addr 0x2a35084 size 0x8 virtual false final false
  inline void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_menu addr 0x2a3508c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_menu();

  /// @brief Method set_menu addr 0x2a35094 size 0x8 virtual false final false
  inline void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_trigger addr 0x2a3509c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger();

  /// @brief Method set_trigger addr 0x2a350a4 size 0x8 virtual false final false
  inline void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_triggerPressed addr 0x2a350ac size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed();

  /// @brief Method set_triggerPressed addr 0x2a350b4 size 0x8 virtual false final false
  inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_joystickClicked addr 0x2a350bc size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_joystickClicked();

  /// @brief Method set_joystickClicked addr 0x2a350c4 size 0x8 virtual false final false
  inline void set_joystickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_touchpadClicked addr 0x2a350cc size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClicked();

  /// @brief Method set_touchpadClicked addr 0x2a350d4 size 0x8 virtual false final false
  inline void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_touchpadTouched addr 0x2a350dc size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouched();

  /// @brief Method set_touchpadTouched addr 0x2a350e4 size 0x8 virtual false final false
  inline void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_deviceVelocity addr 0x2a350ec size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity();

  /// @brief Method set_deviceVelocity addr 0x2a350f4 size 0x8 virtual false final false
  inline void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_deviceAngularVelocity addr 0x2a350fc size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity();

  /// @brief Method set_deviceAngularVelocity addr 0x2a35104 size 0x8 virtual false final false
  inline void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_batteryLevel addr 0x2a3510c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_batteryLevel();

  /// @brief Method set_batteryLevel addr 0x2a35114 size 0x8 virtual false final false
  inline void set_batteryLevel(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_sourceLossRisk addr 0x2a3511c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_sourceLossRisk();

  /// @brief Method set_sourceLossRisk addr 0x2a35124 size 0x8 virtual false final false
  inline void set_sourceLossRisk(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_sourceLossMitigationDirection addr 0x2a3512c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_sourceLossMitigationDirection();

  /// @brief Method set_sourceLossMitigationDirection addr 0x2a35134 size 0x8 virtual false final false
  inline void set_sourceLossMitigationDirection(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_pointerPosition addr 0x2a3513c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_pointerPosition();

  /// @brief Method set_pointerPosition addr 0x2a35144 size 0x8 virtual false final false
  inline void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_pointerRotation addr 0x2a3514c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_pointerRotation();

  /// @brief Method set_pointerRotation addr 0x2a35154 size 0x8 virtual false final false
  inline void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method FinishSetup addr 0x2a3515c size 0x364 virtual true final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::WindowsMR::Input::WMRSpatialController* New_ctor();

  /// @brief Method .ctor addr 0x2a354c0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "WMRSpatialController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WMRSpatialController(WMRSpatialController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WMRSpatialController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WMRSpatialController(WMRSpatialController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WMRSpatialController();

public:
  /// @brief Field <joystick>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____joystick_k__BackingField;

  /// @brief Field <touchpad>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____touchpad_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____grip_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____gripPressed_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____menu_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____trigger_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerPressed_k__BackingField;

  /// @brief Field <joystickClicked>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____joystickClicked_k__BackingField;

  /// @brief Field <touchpadClicked>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____touchpadClicked_k__BackingField;

  /// @brief Field <touchpadTouched>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____touchpadTouched_k__BackingField;

  /// @brief Field <deviceVelocity>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceVelocity_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAngularVelocity_k__BackingField;

  /// @brief Field <batteryLevel>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____batteryLevel_k__BackingField;

  /// @brief Field <sourceLossRisk>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____sourceLossRisk_k__BackingField;

  /// @brief Field <sourceLossMitigationDirection>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____sourceLossMitigationDirection_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____pointerRotation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::WindowsMR::Input::WMRSpatialController, 0x200>, "Size mismatch!");

} // namespace UnityEngine::XR::WindowsMR::Input
NEED_NO_BOX(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::WindowsMR::Input::WMRSpatialController*, "UnityEngine.XR.WindowsMR.Input", "WMRSpatialController");
