#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_def.hpp"
CORDL_MODULE_EXPORT(WMRHMD)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace UnityEngine::XR::WindowsMR::Input {
class WMRHMD;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::WindowsMR::Input::WMRHMD);
// Type: UnityEngine.XR.WindowsMR.Input::WMRHMD
// SizeInfo { instance_size: 432, native_size: -1, calculated_instance_size: 432, calculated_native_size: 432, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::WindowsMR::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6324))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6124))
// CS Name: ::UnityEngine.XR.WindowsMR.Input::WMRHMD*
class CORDL_TYPE WMRHMD : public ::UnityEngine::InputSystem::XR::XRHMD {
public:
  // Declarations
  /// @brief Field <userPresence>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __get__userPresence_k__BackingField, put = __set__userPresence_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _userPresence_k__BackingField;

  __declspec(property(get = get_userPresence, put = set_userPresence))::UnityEngine::InputSystem::Controls::ButtonControl* userPresence;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__userPresence_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__userPresence_k__BackingField() const;

  constexpr void __set__userPresence_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_userPresence addr 0x2a34e44 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_userPresence();

  /// @brief Method set_userPresence addr 0x2a34e4c size 0x8 virtual false final false
  inline void set_userPresence(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method FinishSetup addr 0x2a34e54 size 0x7c virtual true final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::WindowsMR::Input::WMRHMD* New_ctor();

  /// @brief Method .ctor addr 0x2a34ed0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "WMRHMD", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WMRHMD(WMRHMD&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WMRHMD", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WMRHMD(WMRHMD const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WMRHMD();

public:
  /// @brief Field <userPresence>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____userPresence_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::WindowsMR::Input::WMRHMD, 0x1b0>, "Size mismatch!");

} // namespace UnityEngine::XR::WindowsMR::Input
NEED_NO_BOX(::UnityEngine::XR::WindowsMR::Input::WMRHMD);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::WindowsMR::Input::WMRHMD*, "UnityEngine.XR.WindowsMR.Input", "WMRHMD");
