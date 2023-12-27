#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__ScrollViewMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollerVisibility_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScrollView)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
struct __ScrollView__TouchScrollBehavior;
}
namespace UnityEngine::UIElements {
class WheelEvent;
}
namespace UnityEngine::UIElements {
struct ScrollerVisibility;
}
namespace UnityEngine::UIElements {
class __ScrollView__UxmlFactory;
}
namespace UnityEngine::UIElements {
struct __ScrollView__NestedInteractionKind;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct ScrollViewMode;
}
namespace UnityEngine::UIElements {
class __ScrollView__UxmlTraits;
}
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerCaptureOutEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
class PointerCaptureEvent;
}
namespace UnityEngine::UIElements {
struct __ScrollView__TouchScrollingResult;
}
namespace UnityEngine::UIElements {
class Scroller;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __ScrollView__NestedInteractionKind;
}
namespace UnityEngine::UIElements {
struct __ScrollView__TouchScrollBehavior;
}
namespace UnityEngine::UIElements {
struct __ScrollView__TouchScrollingResult;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
class __ScrollView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __ScrollView__UxmlTraits;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__ScrollView__NestedInteractionKind);
MARK_VAL_T(::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior);
MARK_VAL_T(::UnityEngine::UIElements::__ScrollView__TouchScrollingResult);
MARK_REF_PTR_T(::UnityEngine::UIElements::ScrollView);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ScrollView__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ScrollView__UxmlTraits);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6737))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7045))
// CS Name: ::ScrollView::UxmlTraits*
class CORDL_TYPE __ScrollView__UxmlTraits : public ::UnityEngine::UIElements::__VisualElement__UxmlTraits {
public:
  // Declarations
  /// @brief Field m_ScrollViewMode, offset 0x70, size 0x8
  __declspec(property(get = __get_m_ScrollViewMode,
                      put = __set_m_ScrollViewMode))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>* m_ScrollViewMode;

  /// @brief Field m_NestedInteractionKind, offset 0x78, size 0x8
  __declspec(
      property(get = __get_m_NestedInteractionKind,
               put = __set_m_NestedInteractionKind))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::__ScrollView__NestedInteractionKind>* m_NestedInteractionKind;

  /// @brief Field m_ShowHorizontal, offset 0x80, size 0x8
  __declspec(property(get = __get_m_ShowHorizontal, put = __set_m_ShowHorizontal))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowHorizontal;

  /// @brief Field m_ShowVertical, offset 0x88, size 0x8
  __declspec(property(get = __get_m_ShowVertical, put = __set_m_ShowVertical))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowVertical;

  /// @brief Field m_HorizontalScrollerVisibility, offset 0x90, size 0x8
  __declspec(
      property(get = __get_m_HorizontalScrollerVisibility,
               put = __set_m_HorizontalScrollerVisibility))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* m_HorizontalScrollerVisibility;

  /// @brief Field m_VerticalScrollerVisibility, offset 0x98, size 0x8
  __declspec(property(get = __get_m_VerticalScrollerVisibility,
                      put = __set_m_VerticalScrollerVisibility))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* m_VerticalScrollerVisibility;

  /// @brief Field m_HorizontalPageSize, offset 0xa0, size 0x8
  __declspec(property(get = __get_m_HorizontalPageSize, put = __set_m_HorizontalPageSize))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_HorizontalPageSize;

  /// @brief Field m_VerticalPageSize, offset 0xa8, size 0x8
  __declspec(property(get = __get_m_VerticalPageSize, put = __set_m_VerticalPageSize))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_VerticalPageSize;

  /// @brief Field m_TouchScrollBehavior, offset 0xb0, size 0x8
  __declspec(property(get = __get_m_TouchScrollBehavior,
                      put = __set_m_TouchScrollBehavior))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior>* m_TouchScrollBehavior;

  /// @brief Field m_ScrollDecelerationRate, offset 0xb8, size 0x8
  __declspec(property(get = __get_m_ScrollDecelerationRate, put = __set_m_ScrollDecelerationRate))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_ScrollDecelerationRate;

  /// @brief Field m_Elasticity, offset 0xc0, size 0x8
  __declspec(property(get = __get_m_Elasticity, put = __set_m_Elasticity))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_Elasticity;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>*& __get_m_ScrollViewMode();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>*> const& __get_m_ScrollViewMode() const;

  constexpr void __set_m_ScrollViewMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>* value);

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::__ScrollView__NestedInteractionKind>*& __get_m_NestedInteractionKind();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::__ScrollView__NestedInteractionKind>*> const&
  __get_m_NestedInteractionKind() const;

  constexpr void __set_m_NestedInteractionKind(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::__ScrollView__NestedInteractionKind>* value);

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __get_m_ShowHorizontal();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __get_m_ShowHorizontal() const;

  constexpr void __set_m_ShowHorizontal(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __get_m_ShowVertical();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __get_m_ShowVertical() const;

  constexpr void __set_m_ShowVertical(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*& __get_m_HorizontalScrollerVisibility();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*> const&
  __get_m_HorizontalScrollerVisibility() const;

  constexpr void __set_m_HorizontalScrollerVisibility(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* value);

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*& __get_m_VerticalScrollerVisibility();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*> const&
  __get_m_VerticalScrollerVisibility() const;

  constexpr void __set_m_VerticalScrollerVisibility(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* value);

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __get_m_HorizontalPageSize();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __get_m_HorizontalPageSize() const;

  constexpr void __set_m_HorizontalPageSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __get_m_VerticalPageSize();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __get_m_VerticalPageSize() const;

  constexpr void __set_m_VerticalPageSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior>*& __get_m_TouchScrollBehavior();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior>*> const&
  __get_m_TouchScrollBehavior() const;

  constexpr void __set_m_TouchScrollBehavior(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior>* value);

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __get_m_ScrollDecelerationRate();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __get_m_ScrollDecelerationRate() const;

  constexpr void __set_m_ScrollDecelerationRate(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __get_m_Elasticity();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __get_m_Elasticity() const;

  constexpr void __set_m_Elasticity(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  /// @brief Method Init addr 0x2e26a68 size 0x390 virtual true final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__ScrollView__UxmlTraits* New_ctor();

  /// @brief Method .ctor addr 0x2e26df8 size 0x408 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScrollView__UxmlTraits(__ScrollView__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScrollView__UxmlTraits(__ScrollView__UxmlTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView__UxmlTraits();

public:
  /// @brief Field m_ScrollViewMode, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>* ___m_ScrollViewMode;

  /// @brief Field m_NestedInteractionKind, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::__ScrollView__NestedInteractionKind>* ___m_NestedInteractionKind;

  /// @brief Field m_ShowHorizontal, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowHorizontal;

  /// @brief Field m_ShowVertical, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowVertical;

  /// @brief Field m_HorizontalScrollerVisibility, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* ___m_HorizontalScrollerVisibility;

  /// @brief Field m_VerticalScrollerVisibility, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* ___m_VerticalScrollerVisibility;

  /// @brief Field m_HorizontalPageSize, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_HorizontalPageSize;

  /// @brief Field m_VerticalPageSize, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_VerticalPageSize;

  /// @brief Field m_TouchScrollBehavior, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior>* ___m_TouchScrollBehavior;

  /// @brief Field m_ScrollDecelerationRate, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_ScrollDecelerationRate;

  /// @brief Field m_Elasticity, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_Elasticity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ScrollView__UxmlTraits, 0xc8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::TouchScrollBehavior
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7046))
// CS Name: ::ScrollView::TouchScrollBehavior
struct CORDL_TYPE __ScrollView__TouchScrollBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ScrollView__TouchScrollBehavior_Unwrapped
  enum struct ____ScrollView__TouchScrollBehavior_Unwrapped : int32_t {
    __E_Unrestricted = static_cast<int32_t>(0x0),
    __E_Elastic = static_cast<int32_t>(0x1),
    __E_Clamped = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ScrollView__TouchScrollBehavior_Unwrapped() const noexcept {
    return static_cast<____ScrollView__TouchScrollBehavior_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScrollView__TouchScrollBehavior(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView__TouchScrollBehavior();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unrestricted value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior const Unrestricted;

  /// @brief Field Elastic value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior const Elastic;

  /// @brief Field Clamped value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior const Clamped;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::NestedInteractionKind
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7047))
// CS Name: ::ScrollView::NestedInteractionKind
struct CORDL_TYPE __ScrollView__NestedInteractionKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ScrollView__NestedInteractionKind_Unwrapped
  enum struct ____ScrollView__NestedInteractionKind_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_StopScrolling = static_cast<int32_t>(0x1),
    __E_ForwardScrolling = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ScrollView__NestedInteractionKind_Unwrapped() const noexcept {
    return static_cast<____ScrollView__NestedInteractionKind_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScrollView__NestedInteractionKind(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView__NestedInteractionKind();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__ScrollView__NestedInteractionKind const Default;

  /// @brief Field StopScrolling value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__ScrollView__NestedInteractionKind const StopScrolling;

  /// @brief Field ForwardScrolling value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__ScrollView__NestedInteractionKind const ForwardScrolling;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ScrollView__NestedInteractionKind, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ScrollView
// SizeInfo { instance_size: 1128, native_size: -1, calculated_instance_size: 1128, calculated_native_size: 1128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7043)), TypeDefinitionIndex(TypeDefinitionIndex(7046)), TypeDefinitionIndex(TypeDefinitionIndex(7047)),
// TypeDefinitionIndex(TypeDefinitionIndex(6744)), TypeDefinitionIndex(TypeDefinitionIndex(7042)), TypeDefinitionIndex(TypeDefinitionIndex(10243))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7049))
// CS Name: ::UnityEngine.UIElements::ScrollView*
class CORDL_TYPE ScrollView : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using TouchScrollingResult = ::UnityEngine::UIElements::__ScrollView__TouchScrollingResult;

  using NestedInteractionKind = ::UnityEngine::UIElements::__ScrollView__NestedInteractionKind;

  using TouchScrollBehavior = ::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior;

  using UxmlTraits = ::UnityEngine::UIElements::__ScrollView__UxmlTraits;

  using UxmlFactory = ::UnityEngine::UIElements::__ScrollView__UxmlFactory;

  /// @brief Field m_HorizontalScrollerVisibility, offset 0x3b0, size 0x4
  __declspec(property(get = __get_m_HorizontalScrollerVisibility, put = __set_m_HorizontalScrollerVisibility))::UnityEngine::UIElements::ScrollerVisibility m_HorizontalScrollerVisibility;

  /// @brief Field m_VerticalScrollerVisibility, offset 0x3b4, size 0x4
  __declspec(property(get = __get_m_VerticalScrollerVisibility, put = __set_m_VerticalScrollerVisibility))::UnityEngine::UIElements::ScrollerVisibility m_VerticalScrollerVisibility;

  /// @brief Field m_AttachedRootVisualContainer, offset 0x3b8, size 0x8
  __declspec(property(get = __get_m_AttachedRootVisualContainer, put = __set_m_AttachedRootVisualContainer))::UnityEngine::UIElements::VisualElement* m_AttachedRootVisualContainer;

  /// @brief Field m_SingleLineHeight, offset 0x3c0, size 0x4
  __declspec(property(get = __get_m_SingleLineHeight, put = __set_m_SingleLineHeight)) float_t m_SingleLineHeight;

  /// @brief Field m_HorizontalPageSize, offset 0x3c4, size 0x4
  __declspec(property(get = __get_m_HorizontalPageSize, put = __set_m_HorizontalPageSize)) float_t m_HorizontalPageSize;

  /// @brief Field m_VerticalPageSize, offset 0x3c8, size 0x4
  __declspec(property(get = __get_m_VerticalPageSize, put = __set_m_VerticalPageSize)) float_t m_VerticalPageSize;

  /// @brief Field m_ScrollDecelerationRate, offset 0x3cc, size 0x4
  __declspec(property(get = __get_m_ScrollDecelerationRate, put = __set_m_ScrollDecelerationRate)) float_t m_ScrollDecelerationRate;

  /// @brief Field m_Elasticity, offset 0x3d0, size 0x4
  __declspec(property(get = __get_m_Elasticity, put = __set_m_Elasticity)) float_t m_Elasticity;

  /// @brief Field m_TouchScrollBehavior, offset 0x3d4, size 0x4
  __declspec(property(get = __get_m_TouchScrollBehavior, put = __set_m_TouchScrollBehavior))::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior m_TouchScrollBehavior;

  /// @brief Field m_NestedInteractionKind, offset 0x3d8, size 0x4
  __declspec(property(get = __get_m_NestedInteractionKind, put = __set_m_NestedInteractionKind))::UnityEngine::UIElements::__ScrollView__NestedInteractionKind m_NestedInteractionKind;

  /// @brief Field <contentViewport>k__BackingField, offset 0x3e0, size 0x8
  __declspec(property(get = __get__contentViewport_k__BackingField, put = __set__contentViewport_k__BackingField))::UnityEngine::UIElements::VisualElement* _contentViewport_k__BackingField;

  /// @brief Field <horizontalScroller>k__BackingField, offset 0x3e8, size 0x8
  __declspec(property(get = __get__horizontalScroller_k__BackingField, put = __set__horizontalScroller_k__BackingField))::UnityEngine::UIElements::Scroller* _horizontalScroller_k__BackingField;

  /// @brief Field <verticalScroller>k__BackingField, offset 0x3f0, size 0x8
  __declspec(property(get = __get__verticalScroller_k__BackingField, put = __set__verticalScroller_k__BackingField))::UnityEngine::UIElements::Scroller* _verticalScroller_k__BackingField;

  /// @brief Field m_ContentContainer, offset 0x3f8, size 0x8
  __declspec(property(get = __get_m_ContentContainer, put = __set_m_ContentContainer))::UnityEngine::UIElements::VisualElement* m_ContentContainer;

  /// @brief Field m_ContentAndVerticalScrollContainer, offset 0x400, size 0x8
  __declspec(property(get = __get_m_ContentAndVerticalScrollContainer, put = __set_m_ContentAndVerticalScrollContainer))::UnityEngine::UIElements::VisualElement* m_ContentAndVerticalScrollContainer;

  /// @brief Field m_Mode, offset 0x408, size 0x4
  __declspec(property(get = __get_m_Mode, put = __set_m_Mode))::UnityEngine::UIElements::ScrollViewMode m_Mode;

  /// @brief Field m_ScrollingPointerId, offset 0x40c, size 0x4
  __declspec(property(get = __get_m_ScrollingPointerId, put = __set_m_ScrollingPointerId)) int32_t m_ScrollingPointerId;

  /// @brief Field m_StartPosition, offset 0x410, size 0x8
  __declspec(property(get = __get_m_StartPosition, put = __set_m_StartPosition))::UnityEngine::Vector2 m_StartPosition;

  /// @brief Field m_PointerStartPosition, offset 0x418, size 0x8
  __declspec(property(get = __get_m_PointerStartPosition, put = __set_m_PointerStartPosition))::UnityEngine::Vector2 m_PointerStartPosition;

  /// @brief Field m_Velocity, offset 0x420, size 0x8
  __declspec(property(get = __get_m_Velocity, put = __set_m_Velocity))::UnityEngine::Vector2 m_Velocity;

  /// @brief Field m_SpringBackVelocity, offset 0x428, size 0x8
  __declspec(property(get = __get_m_SpringBackVelocity, put = __set_m_SpringBackVelocity))::UnityEngine::Vector2 m_SpringBackVelocity;

  /// @brief Field m_LowBounds, offset 0x430, size 0x8
  __declspec(property(get = __get_m_LowBounds, put = __set_m_LowBounds))::UnityEngine::Vector2 m_LowBounds;

  /// @brief Field m_HighBounds, offset 0x438, size 0x8
  __declspec(property(get = __get_m_HighBounds, put = __set_m_HighBounds))::UnityEngine::Vector2 m_HighBounds;

  /// @brief Field m_LastVelocityLerpTime, offset 0x440, size 0x4
  __declspec(property(get = __get_m_LastVelocityLerpTime, put = __set_m_LastVelocityLerpTime)) float_t m_LastVelocityLerpTime;

  /// @brief Field m_StartedMoving, offset 0x444, size 0x1
  __declspec(property(get = __get_m_StartedMoving, put = __set_m_StartedMoving)) bool m_StartedMoving;

  /// @brief Field m_TouchStoppedVelocity, offset 0x445, size 0x1
  __declspec(property(get = __get_m_TouchStoppedVelocity, put = __set_m_TouchStoppedVelocity)) bool m_TouchStoppedVelocity;

  /// @brief Field m_CapturedTarget, offset 0x448, size 0x8
  __declspec(property(get = __get_m_CapturedTarget, put = __set_m_CapturedTarget))::UnityEngine::UIElements::VisualElement* m_CapturedTarget;

  /// @brief Field m_CapturedTargetPointerMoveCallback, offset 0x450, size 0x8
  __declspec(property(get = __get_m_CapturedTargetPointerMoveCallback,
                      put = __set_m_CapturedTargetPointerMoveCallback))::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* m_CapturedTargetPointerMoveCallback;

  /// @brief Field m_CapturedTargetPointerUpCallback, offset 0x458, size 0x8
  __declspec(property(get = __get_m_CapturedTargetPointerUpCallback,
                      put = __set_m_CapturedTargetPointerUpCallback))::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* m_CapturedTargetPointerUpCallback;

  /// @brief Field m_PostPointerUpAnimation, offset 0x460, size 0x8
  __declspec(property(get = __get_m_PostPointerUpAnimation, put = __set_m_PostPointerUpAnimation))::UnityEngine::UIElements::IVisualElementScheduledItem* m_PostPointerUpAnimation;

  /// @brief Field k_DefaultScrollDecelerationRate, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DefaultScrollDecelerationRate, put = setStaticF_k_DefaultScrollDecelerationRate)) float_t k_DefaultScrollDecelerationRate;

  /// @brief Field k_DefaultElasticity, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_DefaultElasticity, put = setStaticF_k_DefaultElasticity)) float_t k_DefaultElasticity;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Field viewportUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_viewportUssClassName, put = setStaticF_viewportUssClassName))::StringW viewportUssClassName;

  /// @brief Field contentAndVerticalScrollUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_contentAndVerticalScrollUssClassName, put = setStaticF_contentAndVerticalScrollUssClassName))::StringW contentAndVerticalScrollUssClassName;

  /// @brief Field contentUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_contentUssClassName, put = setStaticF_contentUssClassName))::StringW contentUssClassName;

  /// @brief Field hScrollerUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_hScrollerUssClassName, put = setStaticF_hScrollerUssClassName))::StringW hScrollerUssClassName;

  /// @brief Field vScrollerUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_vScrollerUssClassName, put = setStaticF_vScrollerUssClassName))::StringW vScrollerUssClassName;

  /// @brief Field horizontalVariantUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_horizontalVariantUssClassName, put = setStaticF_horizontalVariantUssClassName))::StringW horizontalVariantUssClassName;

  /// @brief Field verticalVariantUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_verticalVariantUssClassName, put = setStaticF_verticalVariantUssClassName))::StringW verticalVariantUssClassName;

  /// @brief Field verticalHorizontalVariantUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_verticalHorizontalVariantUssClassName, put = setStaticF_verticalHorizontalVariantUssClassName))::StringW verticalHorizontalVariantUssClassName;

  /// @brief Field scrollVariantUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_scrollVariantUssClassName, put = setStaticF_scrollVariantUssClassName))::StringW scrollVariantUssClassName;

  __declspec(property(get = get_horizontalScrollerVisibility, put = set_horizontalScrollerVisibility))::UnityEngine::UIElements::ScrollerVisibility horizontalScrollerVisibility;

  __declspec(property(get = get_verticalScrollerVisibility, put = set_verticalScrollerVisibility))::UnityEngine::UIElements::ScrollerVisibility verticalScrollerVisibility;

  __declspec(property(put = set_showHorizontal)) bool showHorizontal;

  __declspec(property(put = set_showVertical)) bool showVertical;

  __declspec(property(get = get_needsHorizontal)) bool needsHorizontal;

  __declspec(property(get = get_needsVertical)) bool needsVertical;

  __declspec(property(get = get_isVerticalScrollDisplayed)) bool isVerticalScrollDisplayed;

  __declspec(property(get = get_isHorizontalScrollDisplayed)) bool isHorizontalScrollDisplayed;

  __declspec(property(get = get_scrollOffset, put = set_scrollOffset))::UnityEngine::Vector2 scrollOffset;

  __declspec(property(put = set_horizontalPageSize)) float_t horizontalPageSize;

  __declspec(property(put = set_verticalPageSize)) float_t verticalPageSize;

  __declspec(property(get = get_scrollableWidth)) float_t scrollableWidth;

  __declspec(property(get = get_scrollableHeight)) float_t scrollableHeight;

  __declspec(property(get = get_hasInertia)) bool hasInertia;

  __declspec(property(get = get_scrollDecelerationRate, put = set_scrollDecelerationRate)) float_t scrollDecelerationRate;

  __declspec(property(get = get_elasticity, put = set_elasticity)) float_t elasticity;

  __declspec(property(get = get_touchScrollBehavior, put = set_touchScrollBehavior))::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior touchScrollBehavior;

  __declspec(property(get = get_nestedInteractionKind, put = set_nestedInteractionKind))::UnityEngine::UIElements::__ScrollView__NestedInteractionKind nestedInteractionKind;

  __declspec(property(get = get_contentViewport, put = set_contentViewport))::UnityEngine::UIElements::VisualElement* contentViewport;

  __declspec(property(get = get_horizontalScroller, put = set_horizontalScroller))::UnityEngine::UIElements::Scroller* horizontalScroller;

  __declspec(property(get = get_verticalScroller, put = set_verticalScroller))::UnityEngine::UIElements::Scroller* verticalScroller;

  __declspec(property(get = get_contentContainer))::UnityEngine::UIElements::VisualElement* contentContainer;

  __declspec(property(get = get_mode, put = set_mode))::UnityEngine::UIElements::ScrollViewMode mode;

  constexpr ::UnityEngine::UIElements::ScrollerVisibility& __get_m_HorizontalScrollerVisibility();

  constexpr ::UnityEngine::UIElements::ScrollerVisibility const& __get_m_HorizontalScrollerVisibility() const;

  constexpr void __set_m_HorizontalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value);

  constexpr ::UnityEngine::UIElements::ScrollerVisibility& __get_m_VerticalScrollerVisibility();

  constexpr ::UnityEngine::UIElements::ScrollerVisibility const& __get_m_VerticalScrollerVisibility() const;

  constexpr void __set_m_VerticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_AttachedRootVisualContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_AttachedRootVisualContainer() const;

  constexpr void __set_m_AttachedRootVisualContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr float_t& __get_m_SingleLineHeight();

  constexpr float_t const& __get_m_SingleLineHeight() const;

  constexpr void __set_m_SingleLineHeight(float_t value);

  constexpr float_t& __get_m_HorizontalPageSize();

  constexpr float_t const& __get_m_HorizontalPageSize() const;

  constexpr void __set_m_HorizontalPageSize(float_t value);

  constexpr float_t& __get_m_VerticalPageSize();

  constexpr float_t const& __get_m_VerticalPageSize() const;

  constexpr void __set_m_VerticalPageSize(float_t value);

  constexpr float_t& __get_m_ScrollDecelerationRate();

  constexpr float_t const& __get_m_ScrollDecelerationRate() const;

  constexpr void __set_m_ScrollDecelerationRate(float_t value);

  constexpr float_t& __get_m_Elasticity();

  constexpr float_t const& __get_m_Elasticity() const;

  constexpr void __set_m_Elasticity(float_t value);

  constexpr ::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior& __get_m_TouchScrollBehavior();

  constexpr ::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior const& __get_m_TouchScrollBehavior() const;

  constexpr void __set_m_TouchScrollBehavior(::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior value);

  constexpr ::UnityEngine::UIElements::__ScrollView__NestedInteractionKind& __get_m_NestedInteractionKind();

  constexpr ::UnityEngine::UIElements::__ScrollView__NestedInteractionKind const& __get_m_NestedInteractionKind() const;

  constexpr void __set_m_NestedInteractionKind(::UnityEngine::UIElements::__ScrollView__NestedInteractionKind value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get__contentViewport_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get__contentViewport_k__BackingField() const;

  constexpr void __set__contentViewport_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::Scroller*& __get__horizontalScroller_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Scroller*> const& __get__horizontalScroller_k__BackingField() const;

  constexpr void __set__horizontalScroller_k__BackingField(::UnityEngine::UIElements::Scroller* value);

  constexpr ::UnityEngine::UIElements::Scroller*& __get__verticalScroller_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Scroller*> const& __get__verticalScroller_k__BackingField() const;

  constexpr void __set__verticalScroller_k__BackingField(::UnityEngine::UIElements::Scroller* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_ContentContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_ContentContainer() const;

  constexpr void __set_m_ContentContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_ContentAndVerticalScrollContainer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_ContentAndVerticalScrollContainer() const;

  constexpr void __set_m_ContentAndVerticalScrollContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::ScrollViewMode& __get_m_Mode();

  constexpr ::UnityEngine::UIElements::ScrollViewMode const& __get_m_Mode() const;

  constexpr void __set_m_Mode(::UnityEngine::UIElements::ScrollViewMode value);

  constexpr int32_t& __get_m_ScrollingPointerId();

  constexpr int32_t const& __get_m_ScrollingPointerId() const;

  constexpr void __set_m_ScrollingPointerId(int32_t value);

  constexpr ::UnityEngine::Vector2& __get_m_StartPosition();

  constexpr ::UnityEngine::Vector2 const& __get_m_StartPosition() const;

  constexpr void __set_m_StartPosition(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_m_PointerStartPosition();

  constexpr ::UnityEngine::Vector2 const& __get_m_PointerStartPosition() const;

  constexpr void __set_m_PointerStartPosition(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_m_Velocity();

  constexpr ::UnityEngine::Vector2 const& __get_m_Velocity() const;

  constexpr void __set_m_Velocity(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_m_SpringBackVelocity();

  constexpr ::UnityEngine::Vector2 const& __get_m_SpringBackVelocity() const;

  constexpr void __set_m_SpringBackVelocity(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_m_LowBounds();

  constexpr ::UnityEngine::Vector2 const& __get_m_LowBounds() const;

  constexpr void __set_m_LowBounds(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_m_HighBounds();

  constexpr ::UnityEngine::Vector2 const& __get_m_HighBounds() const;

  constexpr void __set_m_HighBounds(::UnityEngine::Vector2 value);

  constexpr float_t& __get_m_LastVelocityLerpTime();

  constexpr float_t const& __get_m_LastVelocityLerpTime() const;

  constexpr void __set_m_LastVelocityLerpTime(float_t value);

  constexpr bool& __get_m_StartedMoving();

  constexpr bool const& __get_m_StartedMoving() const;

  constexpr void __set_m_StartedMoving(bool value);

  constexpr bool& __get_m_TouchStoppedVelocity();

  constexpr bool const& __get_m_TouchStoppedVelocity() const;

  constexpr void __set_m_TouchStoppedVelocity(bool value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_CapturedTarget();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_CapturedTarget() const;

  constexpr void __set_m_CapturedTarget(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>*& __get_m_CapturedTargetPointerMoveCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>*> const& __get_m_CapturedTargetPointerMoveCallback() const;

  constexpr void __set_m_CapturedTargetPointerMoveCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* value);

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>*& __get_m_CapturedTargetPointerUpCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>*> const& __get_m_CapturedTargetPointerUpCallback() const;

  constexpr void __set_m_CapturedTargetPointerUpCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* value);

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __get_m_PostPointerUpAnimation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementScheduledItem*> const& __get_m_PostPointerUpAnimation() const;

  constexpr void __set_m_PostPointerUpAnimation(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  static inline void setStaticF_k_DefaultScrollDecelerationRate(float_t value);

  static inline float_t getStaticF_k_DefaultScrollDecelerationRate();

  static inline void setStaticF_k_DefaultElasticity(float_t value);

  static inline float_t getStaticF_k_DefaultElasticity();

  static inline void setStaticF_ussClassName(::StringW value);

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_viewportUssClassName(::StringW value);

  static inline ::StringW getStaticF_viewportUssClassName();

  static inline void setStaticF_contentAndVerticalScrollUssClassName(::StringW value);

  static inline ::StringW getStaticF_contentAndVerticalScrollUssClassName();

  static inline void setStaticF_contentUssClassName(::StringW value);

  static inline ::StringW getStaticF_contentUssClassName();

  static inline void setStaticF_hScrollerUssClassName(::StringW value);

  static inline ::StringW getStaticF_hScrollerUssClassName();

  static inline void setStaticF_vScrollerUssClassName(::StringW value);

  static inline ::StringW getStaticF_vScrollerUssClassName();

  static inline void setStaticF_horizontalVariantUssClassName(::StringW value);

  static inline ::StringW getStaticF_horizontalVariantUssClassName();

  static inline void setStaticF_verticalVariantUssClassName(::StringW value);

  static inline ::StringW getStaticF_verticalVariantUssClassName();

  static inline void setStaticF_verticalHorizontalVariantUssClassName(::StringW value);

  static inline ::StringW getStaticF_verticalHorizontalVariantUssClassName();

  static inline void setStaticF_scrollVariantUssClassName(::StringW value);

  static inline ::StringW getStaticF_scrollVariantUssClassName();

  /// @brief Method get_horizontalScrollerVisibility addr 0x2e20880 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::ScrollerVisibility get_horizontalScrollerVisibility();

  /// @brief Method set_horizontalScrollerVisibility addr 0x2e20888 size 0x8c virtual false final false
  inline void set_horizontalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value);

  /// @brief Method get_verticalScrollerVisibility addr 0x2e20eac size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::ScrollerVisibility get_verticalScrollerVisibility();

  /// @brief Method set_verticalScrollerVisibility addr 0x2e20eb4 size 0x90 virtual false final false
  inline void set_verticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value);

  /// @brief Method set_showHorizontal addr 0x2e20f44 size 0x1c virtual false final false
  inline void set_showHorizontal(bool value);

  /// @brief Method set_showVertical addr 0x2e20f60 size 0x1c virtual false final false
  inline void set_showVertical(bool value);

  /// @brief Method get_needsHorizontal addr 0x2e20914 size 0x40 virtual false final false
  inline bool get_needsHorizontal();

  /// @brief Method get_needsVertical addr 0x2e20954 size 0x40 virtual false final false
  inline bool get_needsVertical();

  /// @brief Method get_isVerticalScrollDisplayed addr 0x2e21084 size 0xc0 virtual false final false
  inline bool get_isVerticalScrollDisplayed();

  /// @brief Method get_isHorizontalScrollDisplayed addr 0x2e21144 size 0xc0 virtual false final false
  inline bool get_isHorizontalScrollDisplayed();

  /// @brief Method get_scrollOffset addr 0x2e21204 size 0x48 virtual false final false
  inline ::UnityEngine::Vector2 get_scrollOffset();

  /// @brief Method set_scrollOffset addr 0x2e2124c size 0x84 virtual false final false
  inline void set_scrollOffset(::UnityEngine::Vector2 value);

  /// @brief Method set_horizontalPageSize addr 0x2e21538 size 0x8 virtual false final false
  inline void set_horizontalPageSize(float_t value);

  /// @brief Method set_verticalPageSize addr 0x2e2174c size 0x8 virtual false final false
  inline void set_verticalPageSize(float_t value);

  /// @brief Method get_scrollableWidth addr 0x2e20f7c size 0x84 virtual false final false
  inline float_t get_scrollableWidth();

  /// @brief Method get_scrollableHeight addr 0x2e21000 size 0x84 virtual false final false
  inline float_t get_scrollableHeight();

  /// @brief Method get_hasInertia addr 0x2e21960 size 0x10 virtual false final false
  inline bool get_hasInertia();

  /// @brief Method get_scrollDecelerationRate addr 0x2e21970 size 0x8 virtual false final false
  inline float_t get_scrollDecelerationRate();

  /// @brief Method set_scrollDecelerationRate addr 0x2e21978 size 0x10 virtual false final false
  inline void set_scrollDecelerationRate(float_t value);

  /// @brief Method get_elasticity addr 0x2e21988 size 0x8 virtual false final false
  inline float_t get_elasticity();

  /// @brief Method set_elasticity addr 0x2e21990 size 0x10 virtual false final false
  inline void set_elasticity(float_t value);

  /// @brief Method get_touchScrollBehavior addr 0x2e219a0 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior get_touchScrollBehavior();

  /// @brief Method set_touchScrollBehavior addr 0x2e219a8 size 0x98 virtual false final false
  inline void set_touchScrollBehavior(::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior value);

  /// @brief Method get_nestedInteractionKind addr 0x2e21a40 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::__ScrollView__NestedInteractionKind get_nestedInteractionKind();

  /// @brief Method set_nestedInteractionKind addr 0x2e21a48 size 0x8 virtual false final false
  inline void set_nestedInteractionKind(::UnityEngine::UIElements::__ScrollView__NestedInteractionKind value);

  /// @brief Method OnHorizontalScrollDragElementChanged addr 0x2e21a50 size 0x94 virtual false final false
  inline void OnHorizontalScrollDragElementChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method OnVerticalScrollDragElementChanged addr 0x2e21ae4 size 0x94 virtual false final false
  inline void OnVerticalScrollDragElementChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method UpdateHorizontalSliderPageSize addr 0x2e21540 size 0x20c virtual false final false
  inline void UpdateHorizontalSliderPageSize();

  /// @brief Method UpdateVerticalSliderPageSize addr 0x2e21754 size 0x20c virtual false final false
  inline void UpdateVerticalSliderPageSize();

  /// @brief Method UpdateContentViewTransform addr 0x2e212d0 size 0x268 virtual false final false
  inline void UpdateContentViewTransform();

  /// @brief Method ScrollTo addr 0x2e21b78 size 0x188 virtual false final false
  inline void ScrollTo(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method GetXDeltaOffset addr 0x2e21f78 size 0x278 virtual false final false
  inline float_t GetXDeltaOffset(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method GetYDeltaOffset addr 0x2e21d00 size 0x278 virtual false final false
  inline float_t GetYDeltaOffset(::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method GetDeltaDistance addr 0x2e221f0 size 0x50 virtual false final false
  inline float_t GetDeltaDistance(float_t viewMin, float_t viewMax, float_t childBoundaryMin, float_t childBoundaryMax);

  /// @brief Method get_contentViewport addr 0x2e22240 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentViewport();

  /// @brief Method set_contentViewport addr 0x2e22248 size 0x8 virtual false final false
  inline void set_contentViewport(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method get_horizontalScroller addr 0x2e22250 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::Scroller* get_horizontalScroller();

  /// @brief Method set_horizontalScroller addr 0x2e22258 size 0x8 virtual false final false
  inline void set_horizontalScroller(::UnityEngine::UIElements::Scroller* value);

  /// @brief Method get_verticalScroller addr 0x2e22260 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::Scroller* get_verticalScroller();

  /// @brief Method set_verticalScroller addr 0x2e22268 size 0x8 virtual false final false
  inline void set_verticalScroller(::UnityEngine::UIElements::Scroller* value);

  /// @brief Method get_contentContainer addr 0x2e22270 size 0x8 virtual true final false
  inline ::UnityEngine::UIElements::VisualElement* get_contentContainer();

  static inline ::UnityEngine::UIElements::ScrollView* New_ctor();

  /// @brief Method .ctor addr 0x2e22278 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::ScrollView* New_ctor(::UnityEngine::UIElements::ScrollViewMode scrollViewMode);

  /// @brief Method .ctor addr 0x2e22280 size 0xa00 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::ScrollViewMode scrollViewMode);

  /// @brief Method get_mode addr 0x2e22de8 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::ScrollViewMode get_mode();

  /// @brief Method set_mode addr 0x2e22df0 size 0x14 virtual false final false
  inline void set_mode(::UnityEngine::UIElements::ScrollViewMode value);

  /// @brief Method SetScrollViewMode addr 0x2e22c80 size 0x168 virtual false final false
  inline void SetScrollViewMode(::UnityEngine::UIElements::ScrollViewMode mode);

  /// @brief Method OnAttachToPanel addr 0x2e22e04 size 0x46c virtual false final false
  inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt);

  /// @brief Method OnDetachFromPanel addr 0x2e2337c size 0x460 virtual false final false
  inline void OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt);

  /// @brief Method OnPointerCapture addr 0x2e237dc size 0xfc virtual false final false
  inline void OnPointerCapture(::UnityEngine::UIElements::PointerCaptureEvent* evt);

  /// @brief Method OnPointerCaptureOut addr 0x2e238d8 size 0xc0 virtual false final false
  inline void OnPointerCaptureOut(::UnityEngine::UIElements::PointerCaptureOutEvent* evt);

  /// @brief Method OnGeometryChanged addr 0x2e23c64 size 0x154 virtual false final false
  inline void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method ComputeElasticOffset addr 0x2e23db8 size 0xec virtual false final false
  static inline float_t ComputeElasticOffset(float_t deltaPointer, float_t initialScrollOffset, float_t lowLimit, float_t hardLowLimit, float_t highLimit, float_t hardHighLimit);

  /// @brief Method ComputeInitialSpringBackVelocity addr 0x2e23ea4 size 0xfc virtual false final false
  inline void ComputeInitialSpringBackVelocity();

  /// @brief Method SpringBack addr 0x2e23fa0 size 0x18c virtual false final false
  inline void SpringBack();

  /// @brief Method ApplyScrollInertia addr 0x2e2412c size 0x1b8 virtual false final false
  inline void ApplyScrollInertia();

  /// @brief Method PostPointerUpAnimation addr 0x2e242e4 size 0x150 virtual false final false
  inline void PostPointerUpAnimation();

  /// @brief Method OnPointerDown addr 0x2e24434 size 0x238 virtual false final false
  inline void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt);

  /// @brief Method OnPointerMove addr 0x2e247a8 size 0x1fc virtual false final false
  inline void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method OnPointerCancel addr 0x2e24d90 size 0x60 virtual false final false
  inline void OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent* evt);

  /// @brief Method OnPointerUp addr 0x2e24df0 size 0xa8 virtual false final false
  inline void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method InitTouchScrolling addr 0x2e2466c size 0x13c virtual false final false
  inline void InitTouchScrolling(::UnityEngine::Vector2 position);

  /// @brief Method ComputeTouchScrolling addr 0x2e249a4 size 0x3ec virtual false final false
  inline ::UnityEngine::UIElements::__ScrollView__TouchScrollingResult ComputeTouchScrolling(::UnityEngine::Vector2 position);

  /// @brief Method ApplyTouchScrolling addr 0x2e24e98 size 0x214 virtual false final false
  inline bool ApplyTouchScrolling(::UnityEngine::Vector2 newScrollOffset);

  /// @brief Method ReleaseScrolling addr 0x2e23998 size 0x2cc virtual false final false
  inline bool ReleaseScrolling(int32_t pointerId, ::UnityEngine::UIElements::IEventHandler* target);

  /// @brief Method AdjustScrollers addr 0x2e250ac size 0x19c virtual false final false
  inline void AdjustScrollers();

  /// @brief Method UpdateScrollers addr 0x2e20994 size 0x518 virtual false final false
  inline void UpdateScrollers(bool displayHorizontal, bool displayVertical);

  /// @brief Method OnScrollersGeometryChanged addr 0x2e25248 size 0x1b0 virtual false final false
  inline void OnScrollersGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method OnScrollWheel addr 0x2e253f8 size 0x38c virtual false final false
  inline void OnScrollWheel(::UnityEngine::UIElements::WheelEvent* evt);

  /// @brief Method OnRootCustomStyleResolved addr 0x2e25784 size 0x4 virtual false final false
  inline void OnRootCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* evt);

  /// @brief Method ReadSingleLineHeight addr 0x2e23270 size 0x10c virtual false final false
  inline void ReadSingleLineHeight();

  /// @brief Method <.ctor>b__103_0 addr 0x2e259c0 size 0x30 virtual false final false
  inline void __ctor_b__103_0(float_t value);

  /// @brief Method <.ctor>b__103_1 addr 0x2e259f0 size 0x1030 virtual false final false
  inline void __ctor_b__103_1(float_t value);

  // Ctor Parameters [CppParam { name: "", ty: "ScrollView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScrollView(ScrollView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScrollView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScrollView(ScrollView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollView();

public:
  /// @brief Field m_HorizontalScrollerVisibility, offset: 0x3b0, size: 0x4, def value: None
  ::UnityEngine::UIElements::ScrollerVisibility ___m_HorizontalScrollerVisibility;

  /// @brief Field m_VerticalScrollerVisibility, offset: 0x3b4, size: 0x4, def value: None
  ::UnityEngine::UIElements::ScrollerVisibility ___m_VerticalScrollerVisibility;

  /// @brief Field m_AttachedRootVisualContainer, offset: 0x3b8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_AttachedRootVisualContainer;

  /// @brief Field m_SingleLineHeight, offset: 0x3c0, size: 0x4, def value: None
  float_t ___m_SingleLineHeight;

  /// @brief Field m_HorizontalPageSize, offset: 0x3c4, size: 0x4, def value: None
  float_t ___m_HorizontalPageSize;

  /// @brief Field m_VerticalPageSize, offset: 0x3c8, size: 0x4, def value: None
  float_t ___m_VerticalPageSize;

  /// @brief Field m_ScrollDecelerationRate, offset: 0x3cc, size: 0x4, def value: None
  float_t ___m_ScrollDecelerationRate;

  /// @brief Field m_Elasticity, offset: 0x3d0, size: 0x4, def value: None
  float_t ___m_Elasticity;

  /// @brief Field m_TouchScrollBehavior, offset: 0x3d4, size: 0x4, def value: None
  ::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior ___m_TouchScrollBehavior;

  /// @brief Field m_NestedInteractionKind, offset: 0x3d8, size: 0x4, def value: None
  ::UnityEngine::UIElements::__ScrollView__NestedInteractionKind ___m_NestedInteractionKind;

  /// @brief Field <contentViewport>k__BackingField, offset: 0x3e0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____contentViewport_k__BackingField;

  /// @brief Field <horizontalScroller>k__BackingField, offset: 0x3e8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Scroller* ____horizontalScroller_k__BackingField;

  /// @brief Field <verticalScroller>k__BackingField, offset: 0x3f0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Scroller* ____verticalScroller_k__BackingField;

  /// @brief Field m_ContentContainer, offset: 0x3f8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ContentContainer;

  /// @brief Field m_ContentAndVerticalScrollContainer, offset: 0x400, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ContentAndVerticalScrollContainer;

  /// @brief Field m_Mode, offset: 0x408, size: 0x4, def value: None
  ::UnityEngine::UIElements::ScrollViewMode ___m_Mode;

  /// @brief Field m_ScrollingPointerId, offset: 0x40c, size: 0x4, def value: None
  int32_t ___m_ScrollingPointerId;

  /// @brief Field m_StartPosition, offset: 0x410, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_StartPosition;

  /// @brief Field m_PointerStartPosition, offset: 0x418, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_PointerStartPosition;

  /// @brief Field m_Velocity, offset: 0x420, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_Velocity;

  /// @brief Field m_SpringBackVelocity, offset: 0x428, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_SpringBackVelocity;

  /// @brief Field m_LowBounds, offset: 0x430, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LowBounds;

  /// @brief Field m_HighBounds, offset: 0x438, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_HighBounds;

  /// @brief Field m_LastVelocityLerpTime, offset: 0x440, size: 0x4, def value: None
  float_t ___m_LastVelocityLerpTime;

  /// @brief Field m_StartedMoving, offset: 0x444, size: 0x1, def value: None
  bool ___m_StartedMoving;

  /// @brief Field m_TouchStoppedVelocity, offset: 0x445, size: 0x1, def value: None
  bool ___m_TouchStoppedVelocity;

  /// @brief Field m_CapturedTarget, offset: 0x448, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CapturedTarget;

  /// @brief Field m_CapturedTargetPointerMoveCallback, offset: 0x450, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* ___m_CapturedTargetPointerMoveCallback;

  /// @brief Field m_CapturedTargetPointerUpCallback, offset: 0x458, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* ___m_CapturedTargetPointerUpCallback;

  /// @brief Field m_PostPointerUpAnimation, offset: 0x460, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_PostPointerUpAnimation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ScrollView, 0x468>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6997)), TypeDefinitionIndex(TypeDefinitionIndex(7045)), TypeDefinitionIndex(TypeDefinitionIndex(7049)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5274 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7044)) CS Name: ::ScrollView::UxmlFactory*
class CORDL_TYPE __ScrollView__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ScrollView*, ::UnityEngine::UIElements::__ScrollView__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__ScrollView__UxmlFactory* New_ctor();

  /// @brief Method .ctor addr 0x2e26a20 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScrollView__UxmlFactory(__ScrollView__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScrollView__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScrollView__UxmlFactory(__ScrollView__UxmlFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView__UxmlFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ScrollView__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::TouchScrollingResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7048))
// CS Name: ::ScrollView::TouchScrollingResult
struct CORDL_TYPE __ScrollView__TouchScrollingResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ScrollView__TouchScrollingResult_Unwrapped
  enum struct ____ScrollView__TouchScrollingResult_Unwrapped : int32_t {
    __E_Apply = static_cast<int32_t>(0x0),
    __E_Forward = static_cast<int32_t>(0x1),
    __E_Block = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ScrollView__TouchScrollingResult_Unwrapped() const noexcept {
    return static_cast<____ScrollView__TouchScrollingResult_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScrollView__TouchScrollingResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScrollView__TouchScrollingResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Apply value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__ScrollView__TouchScrollingResult const Apply;

  /// @brief Field Forward value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__ScrollView__TouchScrollingResult const Forward;

  /// @brief Field Block value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__ScrollView__TouchScrollingResult const Block;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ScrollView__TouchScrollingResult, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ScrollView__NestedInteractionKind, "UnityEngine.UIElements", "ScrollView/NestedInteractionKind");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ScrollView__TouchScrollBehavior, "UnityEngine.UIElements", "ScrollView/TouchScrollBehavior");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ScrollView__TouchScrollingResult, "UnityEngine.UIElements", "ScrollView/TouchScrollingResult");
NEED_NO_BOX(::UnityEngine::UIElements::ScrollView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ScrollView*, "UnityEngine.UIElements", "ScrollView");
NEED_NO_BOX(::UnityEngine::UIElements::__ScrollView__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ScrollView__UxmlFactory*, "UnityEngine.UIElements", "ScrollView/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__ScrollView__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ScrollView__UxmlTraits*, "UnityEngine.UIElements", "ScrollView/UxmlTraits");
