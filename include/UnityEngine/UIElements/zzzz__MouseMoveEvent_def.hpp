#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseMoveEvent)
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseMoveEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseMoveEvent);
// Type: UnityEngine.UIElements::MouseMoveEvent
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7215)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7215), inst: 4646 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7218))
// CS Name: ::UnityEngine.UIElements::MouseMoveEvent*
class CORDL_TYPE MouseMoveEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseMoveEvent*> {
public:
  // Declarations
  /// @brief Method Init addr 0x2e512b4 size 0x54 virtual true final false
  inline void Init();

  /// @brief Method LocalInit addr 0x2e51308 size 0xc virtual false final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::MouseMoveEvent* New_ctor();

  /// @brief Method .ctor addr 0x2e51314 size 0x54 virtual false final false
  inline void _ctor();

  /// @brief Method GetPooled addr 0x2e4fa44 size 0x48 virtual false final false
  static inline ::UnityEngine::UIElements::MouseMoveEvent* GetPooled(::UnityEngine::UIElements::PointerMoveEvent* pointerEvent);

  // Ctor Parameters [CppParam { name: "", ty: "MouseMoveEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseMoveEvent(MouseMoveEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseMoveEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseMoveEvent(MouseMoveEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseMoveEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseMoveEvent, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseMoveEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseMoveEvent*, "UnityEngine.UIElements", "MouseMoveEvent");
