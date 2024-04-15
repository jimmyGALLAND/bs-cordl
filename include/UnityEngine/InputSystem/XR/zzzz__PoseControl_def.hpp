#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__PoseState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
CORDL_MODULE_EXPORT(PoseControl)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::XR {
struct PoseState;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class PoseControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::PoseControl);
// Type: UnityEngine.InputSystem.XR::PoseControl
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 288, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.XR::PoseControl*
class CORDL_TYPE PoseControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::XR::PoseState> {
public:
  // Declarations
  /// @brief Field <angularVelocity>k__BackingField, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__angularVelocity_k__BackingField,
                      put = __cordl_internal_set__angularVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _angularVelocity_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__isTracked_k__BackingField,
                      put = __cordl_internal_set__isTracked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <position>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__position_k__BackingField,
                      put = __cordl_internal_set__position_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _position_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__rotation_k__BackingField,
                      put = __cordl_internal_set__rotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _rotation_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__trackingState_k__BackingField,
                      put = __cordl_internal_set__trackingState_k__BackingField))::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  /// @brief Field <velocity>k__BackingField, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__velocity_k__BackingField,
                      put = __cordl_internal_set__velocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _velocity_k__BackingField;

  __declspec(property(get = get_angularVelocity, put = set_angularVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* angularVelocity;

  __declspec(property(get = get_isTracked, put = set_isTracked))::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::InputSystem::Controls::Vector3Control* position;

  __declspec(property(get = get_rotation, put = set_rotation))::UnityEngine::InputSystem::Controls::QuaternionControl* rotation;

  __declspec(property(get = get_trackingState, put = set_trackingState))::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  __declspec(property(get = get_velocity, put = set_velocity))::UnityEngine::InputSystem::Controls::Vector3Control* velocity;

  /// @brief Method FinishSetup, addr 0x2ff8cd4, size 0x194, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::XR::PoseControl* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x2ff8e68, size 0x174, virtual true, abstract: false, final false
  inline ::UnityEngine::InputSystem::XR::PoseState ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState, addr 0x2ff8fdc, size 0x128, virtual true, abstract: false, final false
  inline void WriteValueIntoState(::UnityEngine::InputSystem::XR::PoseState value, ::cordl_internals::Ptr<void> statePtr);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__angularVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __cordl_internal_get__angularVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__isTracked_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__isTracked_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__position_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __cordl_internal_get__position_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__rotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __cordl_internal_get__rotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __cordl_internal_get__trackingState_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> const& __cordl_internal_get__trackingState_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__velocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __cordl_internal_get__velocity_k__BackingField() const;

  constexpr void __cordl_internal_set__angularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__position_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__rotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr void __cordl_internal_set__velocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method .ctor, addr 0x2ff8c58, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_angularVelocity, addr 0x2ff8c48, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_angularVelocity();

  /// @brief Method get_isTracked, addr 0x2ff8bf8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method get_position, addr 0x2ff8c18, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_position();

  /// @brief Method get_rotation, addr 0x2ff8c28, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_rotation();

  /// @brief Method get_trackingState, addr 0x2ff8c08, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method get_velocity, addr 0x2ff8c38, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_velocity();

  /// @brief Method set_angularVelocity, addr 0x2ff8c50, size 0x8, virtual false, abstract: false, final false
  inline void set_angularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_isTracked, addr 0x2ff8c00, size 0x8, virtual false, abstract: false, final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_position, addr 0x2ff8c20, size 0x8, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_rotation, addr 0x2ff8c30, size 0x8, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_trackingState, addr 0x2ff8c10, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method set_velocity, addr 0x2ff8c40, size 0x8, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoseControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoseControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoseControl(PoseControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoseControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoseControl(PoseControl const&) = delete;

  /// @brief Field <isTracked>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____trackingState_k__BackingField;

  /// @brief Field <position>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____position_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____rotation_k__BackingField;

  /// @brief Field <velocity>k__BackingField, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____velocity_k__BackingField;

  /// @brief Field <angularVelocity>k__BackingField, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____angularVelocity_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::PoseControl, 0x120>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::PoseControl, ____isTracked_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::PoseControl, ____trackingState_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::PoseControl, ____position_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::PoseControl, ____rotation_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::PoseControl, ____velocity_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::PoseControl, ____angularVelocity_k__BackingField) == 0x118, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XR
NEED_NO_BOX(::UnityEngine::InputSystem::XR::PoseControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::PoseControl*, "UnityEngine.InputSystem.XR", "PoseControl");
