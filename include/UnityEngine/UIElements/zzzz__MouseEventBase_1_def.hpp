#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MouseEventBase_1)
namespace UnityEngine::UIElements {
class IMouseEventInternal;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class IMouseEvent;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class MouseEventBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::MouseEventBase_1);
// Type: UnityEngine.UIElements::MouseEventBase`1
// SizeInfo { instance_size: 176, native_size: 176, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7180)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 1714 }),
// TypeDefinitionIndex(TypeDefinitionIndex(14602)), TypeDefinitionIndex(TypeDefinitionIndex(10243))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7215)) CS Name:
// ::UnityEngine.UIElements::MouseEventBase`1<T>*
class CORDL_TYPE MouseEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
  // Declarations
  /// @brief Field <modifiers>k__BackingField, offset 0x7c, size 0x4
  __declspec(property(get = __get__modifiers_k__BackingField, put = __set__modifiers_k__BackingField))::UnityEngine::EventModifiers _modifiers_k__BackingField;

  /// @brief Field <mousePosition>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __get__mousePosition_k__BackingField, put = __set__mousePosition_k__BackingField))::UnityEngine::Vector2 _mousePosition_k__BackingField;

  /// @brief Field <localMousePosition>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__localMousePosition_k__BackingField, put = __set__localMousePosition_k__BackingField))::UnityEngine::Vector2 _localMousePosition_k__BackingField;

  /// @brief Field <mouseDelta>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __get__mouseDelta_k__BackingField, put = __set__mouseDelta_k__BackingField))::UnityEngine::Vector2 _mouseDelta_k__BackingField;

  /// @brief Field <clickCount>k__BackingField, offset 0x98, size 0x4
  __declspec(property(get = __get__clickCount_k__BackingField, put = __set__clickCount_k__BackingField)) int32_t _clickCount_k__BackingField;

  /// @brief Field <button>k__BackingField, offset 0x9c, size 0x4
  __declspec(property(get = __get__button_k__BackingField, put = __set__button_k__BackingField)) int32_t _button_k__BackingField;

  /// @brief Field <pressedButtons>k__BackingField, offset 0xa0, size 0x4
  __declspec(property(get = __get__pressedButtons_k__BackingField, put = __set__pressedButtons_k__BackingField)) int32_t _pressedButtons_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.IMouseEventInternal.triggeredByOS>k__BackingField, offset 0xa4, size 0x1
  __declspec(property(get = __get__UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField,
                      put = __set__UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField)) bool _UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.IMouseEventInternal.recomputeTopElementUnderMouse>k__BackingField, offset 0xa5, size 0x1
  __declspec(property(
      get = __get__UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField,
      put =
          __set__UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField)) bool _UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.IMouseEventInternal.sourcePointerEvent>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __get__UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField,
                      put = __set__UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField))::UnityEngine::UIElements::
      IPointerEvent* _UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField;

  __declspec(property(get = get_modifiers, put = set_modifiers))::UnityEngine::EventModifiers modifiers;

  __declspec(property(get = get_mousePosition, put = set_mousePosition))::UnityEngine::Vector2 mousePosition;

  __declspec(property(get = get_localMousePosition, put = set_localMousePosition))::UnityEngine::Vector2 localMousePosition;

  __declspec(property(get = get_mouseDelta, put = set_mouseDelta))::UnityEngine::Vector2 mouseDelta;

  __declspec(property(get = get_clickCount, put = set_clickCount)) int32_t clickCount;

  __declspec(property(get = get_button, put = set_button)) int32_t button;

  __declspec(property(get = get_pressedButtons, put = set_pressedButtons)) int32_t pressedButtons;

  __declspec(property(get = get_shiftKey)) bool shiftKey;

  __declspec(property(get = get_ctrlKey)) bool ctrlKey;

  __declspec(property(get = get_commandKey)) bool commandKey;

  __declspec(property(get = get_altKey)) bool altKey;

  __declspec(property(get = UnityEngine_UIElements_IMouseEventInternal_get_triggeredByOS,
                      put = UnityEngine_UIElements_IMouseEventInternal_set_triggeredByOS)) bool UnityEngine_UIElements_IMouseEventInternal_triggeredByOS;

  __declspec(property(get = UnityEngine_UIElements_IMouseEventInternal_get_recomputeTopElementUnderMouse,
                      put = UnityEngine_UIElements_IMouseEventInternal_set_recomputeTopElementUnderMouse)) bool UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse;

  __declspec(property(get = UnityEngine_UIElements_IMouseEventInternal_get_sourcePointerEvent,
                      put = UnityEngine_UIElements_IMouseEventInternal_set_sourcePointerEvent))::UnityEngine::UIElements::IPointerEvent* UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent;

  __declspec(property(get = get_currentTarget, put = set_currentTarget))::UnityEngine::UIElements::IEventHandler* currentTarget;

  /// @brief Convert operator to "::UnityEngine::UIElements::IMouseEvent"
  constexpr operator ::UnityEngine::UIElements::IMouseEvent*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IMouseEventInternal"
  constexpr operator ::UnityEngine::UIElements::IMouseEventInternal*() noexcept;

  constexpr ::UnityEngine::EventModifiers& __get__modifiers_k__BackingField();

  constexpr ::UnityEngine::EventModifiers const& __get__modifiers_k__BackingField() const;

  constexpr void __set__modifiers_k__BackingField(::UnityEngine::EventModifiers value);

  constexpr ::UnityEngine::Vector2& __get__mousePosition_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __get__mousePosition_k__BackingField() const;

  constexpr void __set__mousePosition_k__BackingField(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__localMousePosition_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __get__localMousePosition_k__BackingField() const;

  constexpr void __set__localMousePosition_k__BackingField(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__mouseDelta_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __get__mouseDelta_k__BackingField() const;

  constexpr void __set__mouseDelta_k__BackingField(::UnityEngine::Vector2 value);

  constexpr int32_t& __get__clickCount_k__BackingField();

  constexpr int32_t const& __get__clickCount_k__BackingField() const;

  constexpr void __set__clickCount_k__BackingField(int32_t value);

  constexpr int32_t& __get__button_k__BackingField();

  constexpr int32_t const& __get__button_k__BackingField() const;

  constexpr void __set__button_k__BackingField(int32_t value);

  constexpr int32_t& __get__pressedButtons_k__BackingField();

  constexpr int32_t const& __get__pressedButtons_k__BackingField() const;

  constexpr void __set__pressedButtons_k__BackingField(int32_t value);

  constexpr bool& __get__UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField();

  constexpr bool const& __get__UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField() const;

  constexpr void __set__UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField(bool value);

  constexpr bool& __get__UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField();

  constexpr bool const& __get__UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField() const;

  constexpr void __set__UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField(bool value);

  constexpr ::UnityEngine::UIElements::IPointerEvent*& __get__UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPointerEvent*> const& __get__UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField() const;

  constexpr void __set__UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField(::UnityEngine::UIElements::IPointerEvent* value);

  /// @brief Method get_modifiers addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::UnityEngine::EventModifiers get_modifiers();

  /// @brief Method set_modifiers addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_modifiers(::UnityEngine::EventModifiers value);

  /// @brief Method get_mousePosition addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::UnityEngine::Vector2 get_mousePosition();

  /// @brief Method set_mousePosition addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_mousePosition(::UnityEngine::Vector2 value);

  /// @brief Method get_localMousePosition addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::UnityEngine::Vector2 get_localMousePosition();

  /// @brief Method set_localMousePosition addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_localMousePosition(::UnityEngine::Vector2 value);

  /// @brief Method get_mouseDelta addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::UnityEngine::Vector2 get_mouseDelta();

  /// @brief Method set_mouseDelta addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_mouseDelta(::UnityEngine::Vector2 value);

  /// @brief Method get_clickCount addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_clickCount();

  /// @brief Method set_clickCount addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_clickCount(int32_t value);

  /// @brief Method get_button addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_button();

  /// @brief Method set_button addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_button(int32_t value);

  /// @brief Method get_pressedButtons addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_pressedButtons();

  /// @brief Method set_pressedButtons addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_pressedButtons(int32_t value);

  /// @brief Method get_shiftKey addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool get_shiftKey();

  /// @brief Method get_ctrlKey addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool get_ctrlKey();

  /// @brief Method get_commandKey addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool get_commandKey();

  /// @brief Method get_altKey addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool get_altKey();

  /// @brief Method UnityEngine.UIElements.IMouseEventInternal.get_triggeredByOS addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool UnityEngine_UIElements_IMouseEventInternal_get_triggeredByOS();

  /// @brief Method UnityEngine.UIElements.IMouseEventInternal.set_triggeredByOS addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void UnityEngine_UIElements_IMouseEventInternal_set_triggeredByOS(bool value);

  /// @brief Method UnityEngine.UIElements.IMouseEventInternal.get_recomputeTopElementUnderMouse addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool UnityEngine_UIElements_IMouseEventInternal_get_recomputeTopElementUnderMouse();

  /// @brief Method UnityEngine.UIElements.IMouseEventInternal.set_recomputeTopElementUnderMouse addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void UnityEngine_UIElements_IMouseEventInternal_set_recomputeTopElementUnderMouse(bool value);

  /// @brief Method UnityEngine.UIElements.IMouseEventInternal.get_sourcePointerEvent addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::UnityEngine::UIElements::IPointerEvent* UnityEngine_UIElements_IMouseEventInternal_get_sourcePointerEvent();

  /// @brief Method UnityEngine.UIElements.IMouseEventInternal.set_sourcePointerEvent addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void UnityEngine_UIElements_IMouseEventInternal_set_sourcePointerEvent(::UnityEngine::UIElements::IPointerEvent* value);

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Init();

  /// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void LocalInit();

  /// @brief Method get_currentTarget addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::IEventHandler* get_currentTarget();

  /// @brief Method set_currentTarget addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_currentTarget(::UnityEngine::UIElements::IEventHandler* value);

  /// @brief Method PreDispatch addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void PreDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method PostDispatch addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline T GetPooled(::UnityEngine::Event* systemEvent);

  /// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline T GetPooled(::UnityEngine::UIElements::IMouseEvent* triggerEvent, ::UnityEngine::Vector2 mousePosition, bool recomputeTopElementUnderMouse);

  /// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline T GetPooled(::UnityEngine::UIElements::IMouseEvent* triggerEvent);

  /// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline T GetPooled(::UnityEngine::UIElements::IPointerEvent* pointerEvent);

  static inline ::UnityEngine::UIElements::MouseEventBase_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MouseEventBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseEventBase_1(MouseEventBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseEventBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseEventBase_1(MouseEventBase_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseEventBase_1();

public:
  /// @brief Field <modifiers>k__BackingField, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::EventModifiers ____modifiers_k__BackingField;

  /// @brief Field <mousePosition>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____mousePosition_k__BackingField;

  /// @brief Field <localMousePosition>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____localMousePosition_k__BackingField;

  /// @brief Field <mouseDelta>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____mouseDelta_k__BackingField;

  /// @brief Field <clickCount>k__BackingField, offset: 0x98, size: 0x4, def value: None
  int32_t ____clickCount_k__BackingField;

  /// @brief Field <button>k__BackingField, offset: 0x9c, size: 0x4, def value: None
  int32_t ____button_k__BackingField;

  /// @brief Field <pressedButtons>k__BackingField, offset: 0xa0, size: 0x4, def value: None
  int32_t ____pressedButtons_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.IMouseEventInternal.triggeredByOS>k__BackingField, offset: 0xa4, size: 0x1, def value: None
  bool ____UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.IMouseEventInternal.recomputeTopElementUnderMouse>k__BackingField, offset: 0xa5, size: 0x1, def value: None
  bool ____UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.IMouseEventInternal.sourcePointerEvent>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::IPointerEvent* ____UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::MouseEventBase_1, "UnityEngine.UIElements", "MouseEventBase`1");
