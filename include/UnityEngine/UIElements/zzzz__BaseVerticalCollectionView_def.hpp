#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseVerticalCollectionView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__AlternatingRowBackground_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionVirtualizationMethod_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__SelectionType_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseVerticalCollectionView)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IList;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct AlternatingRowBackground;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
struct CanStartDragArgs;
}
namespace UnityEngine::UIElements {
class CollectionViewController;
}
namespace UnityEngine::UIElements {
class CollectionVirtualizationController;
}
namespace UnityEngine::UIElements {
struct CollectionVirtualizationMethod;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
struct DragAndDropArgs;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
struct HandleDragAndDropArgs;
}
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class KeyboardNavigationManipulator;
}
namespace UnityEngine::UIElements {
struct KeyboardNavigationOperation;
}
namespace UnityEngine::UIElements {
class ListViewDragger;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
struct SelectionType;
}
namespace UnityEngine::UIElements {
class SerializedVirtualizationData;
}
namespace UnityEngine::UIElements {
struct SetupDragAndDropArgs;
}
namespace UnityEngine::UIElements {
struct StartDragArgs;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
template<typename T>
class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __BaseVerticalCollectionView__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __BaseVerticalCollectionView____c__DisplayClass161_0;
}
namespace UnityEngine::UIElements {
struct __BaseVerticalCollectionView____c__DisplayClass170_0;
}
namespace UnityEngine::UIElements {
struct __BaseVerticalCollectionView____c__DisplayClass181_0;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
class __BaseVerticalCollectionView__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __BaseVerticalCollectionView____c__DisplayClass161_0;
}
namespace UnityEngine::UIElements {
struct __BaseVerticalCollectionView____c__DisplayClass170_0;
}
namespace UnityEngine::UIElements {
struct __BaseVerticalCollectionView____c__DisplayClass181_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseVerticalCollectionView);
MARK_REF_PTR_T(::UnityEngine::UIElements::__BaseVerticalCollectionView__UxmlTraits);
MARK_REF_PTR_T(::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass161_0);
MARK_VAL_T(::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass170_0);
MARK_VAL_T(::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass181_0);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::BaseVerticalCollectionView::UxmlTraits*
class CORDL_TYPE __BaseVerticalCollectionView__UxmlTraits : public ::UnityEngine::UIElements::__BindableElement__UxmlTraits {
public:
// Declarations
/// @brief Field m_FixedItemHeight, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FixedItemHeight, put=__cordl_internal_set_m_FixedItemHeight)) ::UnityEngine::UIElements::UxmlIntAttributeDescription*  m_FixedItemHeight;

/// @brief Field m_HorizontalScrollingEnabled, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HorizontalScrollingEnabled, put=__cordl_internal_set_m_HorizontalScrollingEnabled)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  m_HorizontalScrollingEnabled;

/// @brief Field m_Reorderable, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Reorderable, put=__cordl_internal_set_m_Reorderable)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  m_Reorderable;

/// @brief Field m_SelectionType, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectionType, put=__cordl_internal_set_m_SelectionType)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*  m_SelectionType;

/// @brief Field m_ShowAlternatingRowBackgrounds, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ShowAlternatingRowBackgrounds, put=__cordl_internal_set_m_ShowAlternatingRowBackgrounds)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*  m_ShowAlternatingRowBackgrounds;

/// @brief Field m_ShowBorder, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ShowBorder, put=__cordl_internal_set_m_ShowBorder)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  m_ShowBorder;

/// @brief Field m_VirtualizationMethod, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VirtualizationMethod, put=__cordl_internal_set_m_VirtualizationMethod)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>*  m_VirtualizationMethod;

/// @brief Method Init, addr 0x48ed340, size 0x2a0, virtual true, abstract: false, final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::__BaseVerticalCollectionView__UxmlTraits* New_ctor() ;

constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_FixedItemHeight() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_FixedItemHeight() const;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_HorizontalScrollingEnabled() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_HorizontalScrollingEnabled() const;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Reorderable() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_Reorderable() const;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*& __cordl_internal_get_m_SelectionType() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*> const& __cordl_internal_get_m_SelectionType() const;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*& __cordl_internal_get_m_ShowAlternatingRowBackgrounds() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*> const& __cordl_internal_get_m_ShowAlternatingRowBackgrounds() const;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ShowBorder() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_ShowBorder() const;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>*& __cordl_internal_get_m_VirtualizationMethod() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>*> const& __cordl_internal_get_m_VirtualizationMethod() const;

constexpr void __cordl_internal_set_m_FixedItemHeight(::UnityEngine::UIElements::UxmlIntAttributeDescription*  value) ;

constexpr void __cordl_internal_set_m_HorizontalScrollingEnabled(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value) ;

constexpr void __cordl_internal_set_m_Reorderable(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value) ;

constexpr void __cordl_internal_set_m_SelectionType(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*  value) ;

constexpr void __cordl_internal_set_m_ShowAlternatingRowBackgrounds(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*  value) ;

constexpr void __cordl_internal_set_m_ShowBorder(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value) ;

constexpr void __cordl_internal_set_m_VirtualizationMethod(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>*  value) ;

/// @brief Method .ctor, addr 0x48ed7f4, size 0x364, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __BaseVerticalCollectionView__UxmlTraits() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__BaseVerticalCollectionView__UxmlTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BaseVerticalCollectionView__UxmlTraits(__BaseVerticalCollectionView__UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BaseVerticalCollectionView__UxmlTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BaseVerticalCollectionView__UxmlTraits(__BaseVerticalCollectionView__UxmlTraits const& ) = delete;

/// @brief Field m_FixedItemHeight, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlIntAttributeDescription*  ___m_FixedItemHeight;

/// @brief Field m_VirtualizationMethod, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>*  ___m_VirtualizationMethod;

/// @brief Field m_ShowBorder, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  ___m_ShowBorder;

/// @brief Field m_SelectionType, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*  ___m_SelectionType;

/// @brief Field m_ShowAlternatingRowBackgrounds, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*  ___m_ShowAlternatingRowBackgrounds;

/// @brief Field m_Reorderable, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  ___m_Reorderable;

/// @brief Field m_HorizontalScrollingEnabled, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  ___m_HorizontalScrollingEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__BaseVerticalCollectionView__UxmlTraits, 0xb0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BaseVerticalCollectionView__UxmlTraits, ___m_FixedItemHeight) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BaseVerticalCollectionView__UxmlTraits, ___m_VirtualizationMethod) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BaseVerticalCollectionView__UxmlTraits, ___m_ShowBorder) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BaseVerticalCollectionView__UxmlTraits, ___m_SelectionType) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BaseVerticalCollectionView__UxmlTraits, ___m_ShowAlternatingRowBackgrounds) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BaseVerticalCollectionView__UxmlTraits, ___m_Reorderable) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BaseVerticalCollectionView__UxmlTraits, ___m_HorizontalScrollingEnabled) == 0xa8, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::<>c__DisplayClass161_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::BaseVerticalCollectionView::<>c__DisplayClass161_0*
class CORDL_TYPE __BaseVerticalCollectionView____c__DisplayClass161_0 : public ::System::Object {
public:
// Declarations
/// @brief Field id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int32_t  id;

static inline ::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass161_0* New_ctor() ;

/// @brief Method <GetRootElementForId>b__0, addr 0x48f56a4, size 0x24, virtual false, abstract: false, final false
inline bool _GetRootElementForId_b__0(::UnityEngine::UIElements::ReusableCollectionItem*  t) ;

constexpr int32_t const& __cordl_internal_get_id() const;

constexpr int32_t& __cordl_internal_get_id() ;

constexpr void __cordl_internal_set_id(int32_t  value) ;

/// @brief Method .ctor, addr 0x48f0930, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __BaseVerticalCollectionView____c__DisplayClass161_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__BaseVerticalCollectionView____c__DisplayClass161_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BaseVerticalCollectionView____c__DisplayClass161_0(__BaseVerticalCollectionView____c__DisplayClass161_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BaseVerticalCollectionView____c__DisplayClass161_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BaseVerticalCollectionView____c__DisplayClass161_0(__BaseVerticalCollectionView____c__DisplayClass161_0 const& ) = delete;

/// @brief Field id, offset: 0x10, size: 0x4, def value: None
 int32_t  ___id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass161_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass161_0, ___id) == 0x10, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::<>c__DisplayClass170_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::BaseVerticalCollectionView::<>c__DisplayClass170_0
struct CORDL_TYPE __BaseVerticalCollectionView____c__DisplayClass170_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr __BaseVerticalCollectionView____c__DisplayClass170_0() ;

// Ctor Parameters [CppParam { name: "selectedIndicesChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityEngine::UIElements::BaseVerticalCollectionView*", modifiers: "", def_value: None }, CppParam { name: "previousSelectionCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __BaseVerticalCollectionView____c__DisplayClass170_0(bool  selectedIndicesChanged, ::UnityEngine::UIElements::BaseVerticalCollectionView*  __4__this, int32_t  previousSelectionCount) noexcept;

/// @brief Field selectedIndicesChanged, offset: 0x0, size: 0x1, def value: None
 bool  selectedIndicesChanged;

/// @brief Field <>4__this, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::UIElements::BaseVerticalCollectionView*  __4__this;

/// @brief Field previousSelectionCount, offset: 0x10, size: 0x4, def value: None
 int32_t  previousSelectionCount;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass170_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass170_0, selectedIndicesChanged) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass170_0, __4__this) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass170_0, previousSelectionCount) == 0x10, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::<>c__DisplayClass181_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 25, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::BaseVerticalCollectionView::<>c__DisplayClass181_0
struct CORDL_TYPE __BaseVerticalCollectionView____c__DisplayClass181_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr __BaseVerticalCollectionView____c__DisplayClass181_0() ;

// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityEngine::UIElements::BaseVerticalCollectionView*", modifiers: "", def_value: None }, CppParam { name: "shiftKey", ty: "bool", modifiers: "", def_value: None }]
constexpr __BaseVerticalCollectionView____c__DisplayClass181_0(::UnityEngine::UIElements::BaseVerticalCollectionView*  __4__this, bool  shiftKey) noexcept;

/// @brief Field <>4__this, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::BaseVerticalCollectionView*  __4__this;

/// @brief Field shiftKey, offset: 0x8, size: 0x1, def value: None
 bool  shiftKey;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass181_0, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass181_0, __4__this) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass181_0, shiftKey) == 0x8, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseVerticalCollectionView
// SizeInfo { instance_size: 1200, native_size: -1, calculated_instance_size: 1200, calculated_native_size: 1196, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::BaseVerticalCollectionView*
class CORDL_TYPE BaseVerticalCollectionView : public ::UnityEngine::UIElements::BindableElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::__BaseVerticalCollectionView__UxmlTraits;

using __c__DisplayClass161_0 = ::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass161_0;

using __c__DisplayClass170_0 = ::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass170_0;

using __c__DisplayClass181_0 = ::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass181_0;

 __declspec(property(get=get_activeItems)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>*  activeItems;

/// @brief Field backgroundFillUssClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_backgroundFillUssClassName, put=setStaticF_backgroundFillUssClassName)) ::StringW  backgroundFillUssClassName;

/// @brief Field borderUssClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_borderUssClassName, put=setStaticF_borderUssClassName)) ::StringW  borderUssClassName;

/// @brief Field canStartDrag, offset 0x408, size 0x8 
 __declspec(property(get=__cordl_internal_get_canStartDrag, put=__cordl_internal_set_canStartDrag)) ::System::Func_2<::UnityEngine::UIElements::CanStartDragArgs,bool>*  canStartDrag;

 __declspec(property(get=get_contentContainer)) ::UnityEngine::UIElements::VisualElement*  contentContainer;

/// @brief Field dragAndDropUpdate, offset 0x418, size 0x8 
 __declspec(property(get=__cordl_internal_get_dragAndDropUpdate, put=__cordl_internal_set_dragAndDropUpdate)) ::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*  dragAndDropUpdate;

/// @brief Field dragHoverBarUssClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_dragHoverBarUssClassName, put=setStaticF_dragHoverBarUssClassName)) ::StringW  dragHoverBarUssClassName;

/// @brief Field dragHoverMarkerUssClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_dragHoverMarkerUssClassName, put=setStaticF_dragHoverMarkerUssClassName)) ::StringW  dragHoverMarkerUssClassName;

 __declspec(property(get=get_dragger)) ::UnityEngine::UIElements::ListViewDragger*  dragger;

 __declspec(property(get=get_fixedItemHeight, put=set_fixedItemHeight)) float_t  fixedItemHeight;

/// @brief Field handleDrop, offset 0x420, size 0x8 
 __declspec(property(get=__cordl_internal_get_handleDrop, put=__cordl_internal_set_handleDrop)) ::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*  handleDrop;

 __declspec(property(put=set_horizontalScrollingEnabled)) bool  horizontalScrollingEnabled;

/// @brief Field itemAlternativeBackgroundUssClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_itemAlternativeBackgroundUssClassName, put=setStaticF_itemAlternativeBackgroundUssClassName)) ::StringW  itemAlternativeBackgroundUssClassName;

/// @brief Field itemDragHoverUssClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_itemDragHoverUssClassName, put=setStaticF_itemDragHoverUssClassName)) ::StringW  itemDragHoverUssClassName;

/// @brief Field itemIndexChanged, offset 0x3f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemIndexChanged, put=__cordl_internal_set_itemIndexChanged)) ::System::Action_2<int32_t,int32_t>*  itemIndexChanged;

/// @brief Field itemSelectedVariantUssClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_itemSelectedVariantUssClassName, put=setStaticF_itemSelectedVariantUssClassName)) ::StringW  itemSelectedVariantUssClassName;

/// @brief Field itemUssClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_itemUssClassName, put=setStaticF_itemUssClassName)) ::StringW  itemUssClassName;

/// @brief Field itemsChosen, offset 0x3d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemsChosen, put=__cordl_internal_set_itemsChosen)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  itemsChosen;

 __declspec(property(get=get_itemsSource, put=set_itemsSource)) ::System::Collections::IList*  itemsSource;

/// @brief Field itemsSourceChanged, offset 0x3f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemsSourceChanged, put=__cordl_internal_set_itemsSourceChanged)) ::System::Action*  itemsSourceChanged;

/// @brief Field k_EmptyItems, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_k_EmptyItems, put=setStaticF_k_EmptyItems)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>*  k_EmptyItems;

/// @brief Field k_RebuildMarker, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_k_RebuildMarker, put=setStaticF_k_RebuildMarker)) ::Unity::Profiling::ProfilerMarker  k_RebuildMarker;

/// @brief Field k_RefreshMarker, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_k_RefreshMarker, put=setStaticF_k_RefreshMarker)) ::Unity::Profiling::ProfilerMarker  k_RefreshMarker;

 __declspec(property(get=get_lastHeight)) float_t  lastHeight;

/// @brief Field listScrollViewUssClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_listScrollViewUssClassName, put=setStaticF_listScrollViewUssClassName)) ::StringW  listScrollViewUssClassName;

/// @brief Field m_Dragger, offset 0x488, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Dragger, put=__cordl_internal_set_m_Dragger)) ::UnityEngine::UIElements::ListViewDragger*  m_Dragger;

/// @brief Field m_FixedItemHeight, offset 0x434, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FixedItemHeight, put=__cordl_internal_set_m_FixedItemHeight)) float_t  m_FixedItemHeight;

/// @brief Field m_HorizontalScrollingEnabled, offset 0x42c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HorizontalScrollingEnabled, put=__cordl_internal_set_m_HorizontalScrollingEnabled)) bool  m_HorizontalScrollingEnabled;

/// @brief Field m_IsRangeSelectionDirectionUp, offset 0x484, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsRangeSelectionDirectionUp, put=__cordl_internal_set_m_IsRangeSelectionDirectionUp)) bool  m_IsRangeSelectionDirectionUp;

/// @brief Field m_ItemHeightIsInline, offset 0x438, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ItemHeightIsInline, put=__cordl_internal_set_m_ItemHeightIsInline)) bool  m_ItemHeightIsInline;

/// @brief Field m_ItemIndexChangedCallback, offset 0x490, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ItemIndexChangedCallback, put=__cordl_internal_set_m_ItemIndexChangedCallback)) ::System::Action_2<int32_t,int32_t>*  m_ItemIndexChangedCallback;

/// @brief Field m_ItemsSourceChangedCallback, offset 0x498, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ItemsSourceChangedCallback, put=__cordl_internal_set_m_ItemsSourceChangedCallback)) ::System::Action*  m_ItemsSourceChangedCallback;

/// @brief Field m_LastHeight, offset 0x480, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastHeight, put=__cordl_internal_set_m_LastHeight)) float_t  m_LastHeight;

/// @brief Field m_NavigationManipulator, offset 0x458, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NavigationManipulator, put=__cordl_internal_set_m_NavigationManipulator)) ::UnityEngine::UIElements::KeyboardNavigationManipulator*  m_NavigationManipulator;

/// @brief Field m_ScrollView, offset 0x440, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScrollView, put=__cordl_internal_set_m_ScrollView)) ::UnityEngine::UIElements::ScrollView*  m_ScrollView;

/// @brief Field m_SelectedIds, offset 0x468, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectedIds, put=__cordl_internal_set_m_SelectedIds)) ::System::Collections::Generic::List_1<int32_t>*  m_SelectedIds;

/// @brief Field m_SelectedIndices, offset 0x470, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectedIndices, put=__cordl_internal_set_m_SelectedIndices)) ::System::Collections::Generic::List_1<int32_t>*  m_SelectedIndices;

/// @brief Field m_SelectedItems, offset 0x478, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectedItems, put=__cordl_internal_set_m_SelectedItems)) ::System::Collections::Generic::List_1<::System::Object*>*  m_SelectedItems;

/// @brief Field m_SelectionType, offset 0x428, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SelectionType, put=__cordl_internal_set_m_SelectionType)) ::UnityEngine::UIElements::SelectionType  m_SelectionType;

/// @brief Field m_ShowAlternatingRowBackgrounds, offset 0x430, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ShowAlternatingRowBackgrounds, put=__cordl_internal_set_m_ShowAlternatingRowBackgrounds)) ::UnityEngine::UIElements::AlternatingRowBackground  m_ShowAlternatingRowBackgrounds;

/// @brief Field m_TouchDownPosition, offset 0x4a0, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_TouchDownPosition, put=__cordl_internal_set_m_TouchDownPosition)) ::UnityEngine::Vector3  m_TouchDownPosition;

/// @brief Field m_ViewController, offset 0x448, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ViewController, put=__cordl_internal_set_m_ViewController)) ::UnityEngine::UIElements::CollectionViewController*  m_ViewController;

/// @brief Field m_VirtualizationController, offset 0x450, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VirtualizationController, put=__cordl_internal_set_m_VirtualizationController)) ::UnityEngine::UIElements::CollectionVirtualizationController*  m_VirtualizationController;

/// @brief Field m_VirtualizationMethod, offset 0x43c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_VirtualizationMethod, put=__cordl_internal_set_m_VirtualizationMethod)) ::UnityEngine::UIElements::CollectionVirtualizationMethod  m_VirtualizationMethod;

 __declspec(property(get=get_reorderable, put=set_reorderable)) bool  reorderable;

/// @brief Field s_DefaultItemHeight, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_s_DefaultItemHeight, put=setStaticF_s_DefaultItemHeight)) int32_t  s_DefaultItemHeight;

/// @brief Field s_ItemHeightProperty, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_ItemHeightProperty, put=setStaticF_s_ItemHeightProperty)) ::UnityEngine::UIElements::CustomStyleProperty_1<int32_t>  s_ItemHeightProperty;

 __declspec(property(get=get_scrollView)) ::UnityEngine::UIElements::ScrollView*  scrollView;

 __declspec(property(get=get_selectedIds)) ::System::Collections::Generic::IEnumerable_1<int32_t>*  selectedIds;

 __declspec(property(get=get_selectedIndex, put=set_selectedIndex)) int32_t  selectedIndex;

 __declspec(property(get=get_selectedIndices)) ::System::Collections::Generic::IEnumerable_1<int32_t>*  selectedIndices;

/// @brief Field selectedIndicesChanged, offset 0x3e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectedIndicesChanged, put=__cordl_internal_set_selectedIndicesChanged)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*  selectedIndicesChanged;

/// @brief Field selectionChanged, offset 0x3e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectionChanged, put=__cordl_internal_set_selectionChanged)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  selectionChanged;

/// @brief Field selectionNotChanged, offset 0x400, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectionNotChanged, put=__cordl_internal_set_selectionNotChanged)) ::System::Action*  selectionNotChanged;

 __declspec(property(get=get_selectionType, put=set_selectionType)) ::UnityEngine::UIElements::SelectionType  selectionType;

/// @brief Field serializedVirtualizationData, offset 0x460, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializedVirtualizationData, put=__cordl_internal_set_serializedVirtualizationData)) ::UnityEngine::UIElements::SerializedVirtualizationData*  serializedVirtualizationData;

/// @brief Field setupDragAndDrop, offset 0x410, size 0x8 
 __declspec(property(get=__cordl_internal_get_setupDragAndDrop, put=__cordl_internal_set_setupDragAndDrop)) ::System::Func_2<::UnityEngine::UIElements::SetupDragAndDropArgs,::UnityEngine::UIElements::StartDragArgs>*  setupDragAndDrop;

 __declspec(property(get=get_showAlternatingRowBackgrounds, put=set_showAlternatingRowBackgrounds)) ::UnityEngine::UIElements::AlternatingRowBackground  showAlternatingRowBackgrounds;

 __declspec(property(put=set_showBorder)) bool  showBorder;

/// @brief Field ussClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_ussClassName, put=setStaticF_ussClassName)) ::StringW  ussClassName;

 __declspec(property(get=get_viewController)) ::UnityEngine::UIElements::CollectionViewController*  viewController;

 __declspec(property(get=get_virtualizationController)) ::UnityEngine::UIElements::CollectionVirtualizationController*  virtualizationController;

 __declspec(property(get=get_virtualizationMethod, put=set_virtualizationMethod)) ::UnityEngine::UIElements::CollectionVirtualizationMethod  virtualizationMethod;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method AddToSelection, addr 0x48f3908, size 0x78, virtual false, abstract: false, final false
inline void AddToSelection(int32_t  index) ;

/// @brief Method AddToSelection, addr 0x48f3e7c, size 0x37c, virtual false, abstract: false, final false
inline void AddToSelection(::System::Collections::Generic::IList_1<int32_t>*  indexes) ;

/// @brief Method AddToSelectionWithoutValidation, addr 0x48f4258, size 0x4d0, virtual false, abstract: false, final false
inline void AddToSelectionWithoutValidation(int32_t  index) ;

/// @brief Method Apply, addr 0x48f17e8, size 0x4b4, virtual false, abstract: false, final false
inline bool Apply(::UnityEngine::UIElements::KeyboardNavigationOperation  op, bool  shiftKey, bool  altKey) ;

/// @brief Method Apply, addr 0x48f23b0, size 0x27c, virtual false, abstract: false, final false
inline void Apply(::UnityEngine::UIElements::KeyboardNavigationOperation  op, ::UnityEngine::UIElements::EventBase*  sourceEvent) ;

/// @brief Method ClearSelection, addr 0x48ef874, size 0x7c, virtual false, abstract: false, final false
inline void ClearSelection() ;

/// @brief Method ClearSelectionWithoutValidation, addr 0x48f3b20, size 0x35c, virtual false, abstract: false, final false
inline void ClearSelectionWithoutValidation() ;

/// @brief Method CreateDragAndDropController, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::UIElements::ICollectionDragAndDropController* CreateDragAndDropController() ;

/// @brief Method CreateDragger, addr 0x48f00ec, size 0x5c, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::ListViewDragger* CreateDragger() ;

/// @brief Method CreateViewController, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::UIElements::CollectionViewController* CreateViewController() ;

/// @brief Method CreateVirtualizationController, addr 0x48f00a4, size 0x48, virtual true, abstract: false, final false
inline void CreateVirtualizationController() ;

/// @brief Method CreateVirtualizationController, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void CreateVirtualizationController() ;

/// @brief Method DoRangeSelection, addr 0x48f3980, size 0x1a0, virtual false, abstract: false, final false
inline void DoRangeSelection(int32_t  rangeSelectionFinalIndex) ;

/// @brief Method DoSelect, addr 0x48f3264, size 0x644, virtual false, abstract: false, final false
inline void DoSelect(::UnityEngine::Vector2  localPosition, int32_t  clickCount, bool  actionKey, bool  shiftKey) ;

/// @brief Method ExecuteDefaultAction, addr 0x48f4d58, size 0x394, virtual true, abstract: false, final false
inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method GetOrCreateViewController, addr 0x48ef778, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::CollectionViewController* GetOrCreateViewController() ;

/// @brief Method GetOrCreateVirtualizationController, addr 0x48ef9bc, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::CollectionVirtualizationController* GetOrCreateVirtualizationController() ;

/// @brief Method GetRootElementForId, addr 0x48f0824, size 0x10c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* GetRootElementForId(int32_t  id) ;

/// @brief Method HandleItemNavigation, addr 0x48f262c, size 0x8, virtual true, abstract: false, final false
inline bool HandleItemNavigation(bool  moveIn, bool  altKey) ;

/// @brief Method HasCanStartDrag, addr 0x48ef494, size 0x10, virtual false, abstract: false, final false
inline bool HasCanStartDrag() ;

/// @brief Method HasValidDataAndBindings, addr 0x48f0938, size 0x28, virtual true, abstract: false, final false
inline bool HasValidDataAndBindings() ;

/// @brief Method InitializeDragAndDropController, addr 0x48f0148, size 0x11c, virtual false, abstract: false, final false
inline void InitializeDragAndDropController(bool  enableReordering) ;

/// @brief Method MatchesExistingSelection, addr 0x48f4b40, size 0x218, virtual false, abstract: false, final false
inline bool MatchesExistingSelection(::System::Collections::Generic::IEnumerable_1<int32_t>*  indices) ;

static inline ::UnityEngine::UIElements::BaseVerticalCollectionView* New_ctor() ;

static inline ::UnityEngine::UIElements::BaseVerticalCollectionView* New_ctor(::System::Collections::IList*  itemsSource, float_t  itemHeight) ;

/// @brief Method NotifyOfSelectionChange, addr 0x48f41f8, size 0x60, virtual false, abstract: false, final false
inline void NotifyOfSelectionChange() ;

/// @brief Method OnAttachToPanel, addr 0x48f11ec, size 0x344, virtual false, abstract: false, final false
inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent*  evt) ;

/// @brief Method OnCustomStyleResolved, addr 0x48f51ec, size 0x168, virtual false, abstract: false, final false
inline void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent*  e) ;

/// @brief Method OnDetachFromPanel, addr 0x48f1530, size 0x2b8, virtual false, abstract: false, final false
inline void OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent*  evt) ;

/// @brief Method OnItemIndexChanged, addr 0x48f0960, size 0x2c, virtual false, abstract: false, final false
inline void OnItemIndexChanged(int32_t  srcIndex, int32_t  dstIndex) ;

/// @brief Method OnItemsSourceChanged, addr 0x48f098c, size 0x1c, virtual false, abstract: false, final false
inline void OnItemsSourceChanged() ;

/// @brief Method OnPointerCancel, addr 0x48f3134, size 0x74, virtual false, abstract: false, final false
inline void OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent*  evt) ;

/// @brief Method OnPointerDown, addr 0x48f3078, size 0xbc, virtual false, abstract: false, final false
inline void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent*  evt) ;

/// @brief Method OnPointerMove, addr 0x48f2634, size 0x88, virtual false, abstract: false, final false
inline void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent*  evt) ;

/// @brief Method OnPointerUp, addr 0x48f31a8, size 0xbc, virtual false, abstract: false, final false
inline void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent*  evt) ;

/// @brief Method OnScroll, addr 0x48f1174, size 0x78, virtual false, abstract: false, final false
inline void OnScroll(::UnityEngine::Vector2  offset) ;

/// @brief Method OnSizeChanged, addr 0x48f50ec, size 0x100, virtual false, abstract: false, final false
inline void OnSizeChanged(::UnityEngine::UIElements::GeometryChangedEvent*  evt) ;

/// @brief Method OnViewDataReady, addr 0x48ee274, size 0x48, virtual true, abstract: false, final false
inline void OnViewDataReady() ;

/// @brief Method PostRefresh, addr 0x48f1060, size 0x84, virtual true, abstract: false, final false
inline void PostRefresh() ;

/// @brief Method ProcessPointerDown, addr 0x48f2c98, size 0x3e0, virtual false, abstract: false, final false
inline void ProcessPointerDown(::UnityEngine::UIElements::IPointerEvent*  evt) ;

/// @brief Method ProcessPointerUp, addr 0x48f26bc, size 0x5dc, virtual false, abstract: false, final false
inline void ProcessPointerUp(::UnityEngine::UIElements::IPointerEvent*  evt) ;

/// @brief Method ProcessSingleClick, addr 0x48f38a8, size 0x4, virtual false, abstract: false, final false
inline void ProcessSingleClick(int32_t  clickedIndex) ;

/// @brief Method RaiseCanStartDrag, addr 0x48ef4a4, size 0x9c, virtual false, abstract: false, final false
inline bool RaiseCanStartDrag(::UnityEngine::UIElements::ReusableCollectionItem*  item, ::System::Collections::Generic::IEnumerable_1<int32_t>*  ids) ;

/// @brief Method RaiseDrop, addr 0x48ef684, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::DragVisualMode RaiseDrop(::UnityEngine::Vector2  pointerPosition, ::UnityEngine::UIElements::DragAndDropArgs  dragAndDropArgs) ;

/// @brief Method RaiseHandleDragAndDrop, addr 0x48ef610, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::DragVisualMode RaiseHandleDragAndDrop(::UnityEngine::Vector2  pointerPosition, ::UnityEngine::UIElements::DragAndDropArgs  dragAndDropArgs) ;

/// @brief Method RaiseSetupDragAndDrop, addr 0x48ef540, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StartDragArgs RaiseSetupDragAndDrop(::UnityEngine::UIElements::ReusableCollectionItem*  item, ::System::Collections::Generic::IEnumerable_1<int32_t>*  ids, ::UnityEngine::UIElements::StartDragArgs  args) ;

/// @brief Method Rebuild, addr 0x48efd58, size 0x170, virtual false, abstract: false, final false
inline void Rebuild() ;

/// @brief Method RefreshItems, addr 0x48ede04, size 0x170, virtual false, abstract: false, final false
inline void RefreshItems() ;

/// @brief Method RefreshSelection, addr 0x48f09a8, size 0x648, virtual false, abstract: false, final false
inline void RefreshSelection() ;

/// @brief Method RemoveFromSelection, addr 0x48f38ac, size 0x5c, virtual false, abstract: false, final false
inline void RemoveFromSelection(int32_t  index) ;

/// @brief Method RemoveFromSelectionWithoutValidation, addr 0x48f4728, size 0x408, virtual false, abstract: false, final false
inline void RemoveFromSelectionWithoutValidation(int32_t  index) ;

/// @brief Method Resize, addr 0x48f10e4, size 0x90, virtual false, abstract: false, final false
inline void Resize(::UnityEngine::Vector2  size) ;

/// @brief Method ResolveItemHeight, addr 0x48ef9f4, size 0xb8, virtual false, abstract: false, final false
inline float_t ResolveItemHeight(float_t  height) ;

/// @brief Method ScrollToItem, addr 0x48eeb10, size 0x74, virtual false, abstract: false, final false
inline void ScrollToItem(int32_t  index) ;

/// @brief Method ScrollToItemById, addr 0x48ee9f4, size 0x94, virtual false, abstract: false, final false
inline void ScrollToItemById(int32_t  id) ;

/// @brief Method SelectAll, addr 0x48f1c9c, size 0x5d4, virtual false, abstract: false, final false
inline void SelectAll() ;

/// @brief Method SetSelection, addr 0x48eea88, size 0x88, virtual false, abstract: false, final false
inline void SetSelection(int32_t  index) ;

/// @brief Method SetSelection, addr 0x48f4b30, size 0x8, virtual false, abstract: false, final false
inline void SetSelection(::System::Collections::Generic::IEnumerable_1<int32_t>*  indices) ;

/// @brief Method SetSelectionInternal, addr 0x48eec78, size 0x344, virtual false, abstract: false, final false
inline void SetSelectionInternal(::System::Collections::Generic::IEnumerable_1<int32_t>*  indices, bool  sendNotification) ;

/// @brief Method SetSelectionWithoutNotify, addr 0x48f4b38, size 0x8, virtual false, abstract: false, final false
inline void SetSelectionWithoutNotify(::System::Collections::Generic::IEnumerable_1<int32_t>*  indices) ;

/// @brief Method SetViewController, addr 0x48edd5c, size 0xa4, virtual true, abstract: false, final false
inline void SetViewController(::UnityEngine::UIElements::CollectionViewController*  controller) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x48f5358, size 0x4, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x48f5354, size 0x4, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method <Apply>g__HandleSelectionAndScroll|181_0, addr 0x48f2270, size 0x140, virtual false, abstract: false, final false
inline void _Apply_g__HandleSelectionAndScroll_181_0(int32_t  index, ByRef<::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass181_0>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method <RefreshSelection>g__NotifyIfChanged|170_0, addr 0x48f0ff0, size 0x70, virtual false, abstract: false, final false
inline void _RefreshSelection_g__NotifyIfChanged_170_0(ByRef<::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass170_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::System::Func_2<::UnityEngine::UIElements::CanStartDragArgs,bool>*& __cordl_internal_get_canStartDrag() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::UIElements::CanStartDragArgs,bool>*> const& __cordl_internal_get_canStartDrag() const;

constexpr ::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*& __cordl_internal_get_dragAndDropUpdate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*> const& __cordl_internal_get_dragAndDropUpdate() const;

constexpr ::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*& __cordl_internal_get_handleDrop() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*> const& __cordl_internal_get_handleDrop() const;

constexpr ::System::Action_2<int32_t,int32_t>*& __cordl_internal_get_itemIndexChanged() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t,int32_t>*> const& __cordl_internal_get_itemIndexChanged() const;

constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*& __cordl_internal_get_itemsChosen() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*> const& __cordl_internal_get_itemsChosen() const;

constexpr ::System::Action*& __cordl_internal_get_itemsSourceChanged() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_itemsSourceChanged() const;

constexpr ::UnityEngine::UIElements::ListViewDragger*& __cordl_internal_get_m_Dragger() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ListViewDragger*> const& __cordl_internal_get_m_Dragger() const;

constexpr float_t const& __cordl_internal_get_m_FixedItemHeight() const;

constexpr float_t& __cordl_internal_get_m_FixedItemHeight() ;

constexpr bool const& __cordl_internal_get_m_HorizontalScrollingEnabled() const;

constexpr bool& __cordl_internal_get_m_HorizontalScrollingEnabled() ;

constexpr bool const& __cordl_internal_get_m_IsRangeSelectionDirectionUp() const;

constexpr bool& __cordl_internal_get_m_IsRangeSelectionDirectionUp() ;

constexpr bool const& __cordl_internal_get_m_ItemHeightIsInline() const;

constexpr bool& __cordl_internal_get_m_ItemHeightIsInline() ;

constexpr ::System::Action_2<int32_t,int32_t>*& __cordl_internal_get_m_ItemIndexChangedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t,int32_t>*> const& __cordl_internal_get_m_ItemIndexChangedCallback() const;

constexpr ::System::Action*& __cordl_internal_get_m_ItemsSourceChangedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_m_ItemsSourceChangedCallback() const;

constexpr float_t const& __cordl_internal_get_m_LastHeight() const;

constexpr float_t& __cordl_internal_get_m_LastHeight() ;

constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator*& __cordl_internal_get_m_NavigationManipulator() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::KeyboardNavigationManipulator*> const& __cordl_internal_get_m_NavigationManipulator() const;

constexpr ::UnityEngine::UIElements::ScrollView*& __cordl_internal_get_m_ScrollView() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ScrollView*> const& __cordl_internal_get_m_ScrollView() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_SelectedIds() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_m_SelectedIds() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_SelectedIndices() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_m_SelectedIndices() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_m_SelectedItems() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& __cordl_internal_get_m_SelectedItems() const;

constexpr ::UnityEngine::UIElements::SelectionType const& __cordl_internal_get_m_SelectionType() const;

constexpr ::UnityEngine::UIElements::SelectionType& __cordl_internal_get_m_SelectionType() ;

constexpr ::UnityEngine::UIElements::AlternatingRowBackground const& __cordl_internal_get_m_ShowAlternatingRowBackgrounds() const;

constexpr ::UnityEngine::UIElements::AlternatingRowBackground& __cordl_internal_get_m_ShowAlternatingRowBackgrounds() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_TouchDownPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_TouchDownPosition() ;

constexpr ::UnityEngine::UIElements::CollectionViewController*& __cordl_internal_get_m_ViewController() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::CollectionViewController*> const& __cordl_internal_get_m_ViewController() const;

constexpr ::UnityEngine::UIElements::CollectionVirtualizationController*& __cordl_internal_get_m_VirtualizationController() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::CollectionVirtualizationController*> const& __cordl_internal_get_m_VirtualizationController() const;

constexpr ::UnityEngine::UIElements::CollectionVirtualizationMethod const& __cordl_internal_get_m_VirtualizationMethod() const;

constexpr ::UnityEngine::UIElements::CollectionVirtualizationMethod& __cordl_internal_get_m_VirtualizationMethod() ;

constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __cordl_internal_get_selectedIndicesChanged() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> const& __cordl_internal_get_selectedIndicesChanged() const;

constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*& __cordl_internal_get_selectionChanged() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*> const& __cordl_internal_get_selectionChanged() const;

constexpr ::System::Action*& __cordl_internal_get_selectionNotChanged() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_selectionNotChanged() const;

constexpr ::UnityEngine::UIElements::SerializedVirtualizationData*& __cordl_internal_get_serializedVirtualizationData() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::SerializedVirtualizationData*> const& __cordl_internal_get_serializedVirtualizationData() const;

constexpr ::System::Func_2<::UnityEngine::UIElements::SetupDragAndDropArgs,::UnityEngine::UIElements::StartDragArgs>*& __cordl_internal_get_setupDragAndDrop() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::UIElements::SetupDragAndDropArgs,::UnityEngine::UIElements::StartDragArgs>*> const& __cordl_internal_get_setupDragAndDrop() const;

constexpr void __cordl_internal_set_canStartDrag(::System::Func_2<::UnityEngine::UIElements::CanStartDragArgs,bool>*  value) ;

constexpr void __cordl_internal_set_dragAndDropUpdate(::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*  value) ;

constexpr void __cordl_internal_set_handleDrop(::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*  value) ;

constexpr void __cordl_internal_set_itemIndexChanged(::System::Action_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_itemsChosen(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  value) ;

constexpr void __cordl_internal_set_itemsSourceChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set_m_Dragger(::UnityEngine::UIElements::ListViewDragger*  value) ;

constexpr void __cordl_internal_set_m_FixedItemHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_HorizontalScrollingEnabled(bool  value) ;

constexpr void __cordl_internal_set_m_IsRangeSelectionDirectionUp(bool  value) ;

constexpr void __cordl_internal_set_m_ItemHeightIsInline(bool  value) ;

constexpr void __cordl_internal_set_m_ItemIndexChangedCallback(::System::Action_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_m_ItemsSourceChangedCallback(::System::Action*  value) ;

constexpr void __cordl_internal_set_m_LastHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_NavigationManipulator(::UnityEngine::UIElements::KeyboardNavigationManipulator*  value) ;

constexpr void __cordl_internal_set_m_ScrollView(::UnityEngine::UIElements::ScrollView*  value) ;

constexpr void __cordl_internal_set_m_SelectedIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_SelectedIndices(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_SelectedItems(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_m_SelectionType(::UnityEngine::UIElements::SelectionType  value) ;

constexpr void __cordl_internal_set_m_ShowAlternatingRowBackgrounds(::UnityEngine::UIElements::AlternatingRowBackground  value) ;

constexpr void __cordl_internal_set_m_TouchDownPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_ViewController(::UnityEngine::UIElements::CollectionViewController*  value) ;

constexpr void __cordl_internal_set_m_VirtualizationController(::UnityEngine::UIElements::CollectionVirtualizationController*  value) ;

constexpr void __cordl_internal_set_m_VirtualizationMethod(::UnityEngine::UIElements::CollectionVirtualizationMethod  value) ;

constexpr void __cordl_internal_set_selectedIndicesChanged(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*  value) ;

constexpr void __cordl_internal_set_selectionChanged(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  value) ;

constexpr void __cordl_internal_set_selectionNotChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set_serializedVirtualizationData(::UnityEngine::UIElements::SerializedVirtualizationData*  value) ;

constexpr void __cordl_internal_set_setupDragAndDrop(::System::Func_2<::UnityEngine::UIElements::SetupDragAndDropArgs,::UnityEngine::UIElements::StartDragArgs>*  value) ;

/// @brief Method <.ctor>b__158_0, addr 0x48f5698, size 0xc, virtual false, abstract: false, final false
inline void __ctor_b__158_0(float_t  v) ;

/// @brief Method .ctor, addr 0x48f0264, size 0x5c0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x48ee17c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::IList*  itemsSource, float_t  itemHeight) ;

static inline ::StringW getStaticF_backgroundFillUssClassName() ;

static inline ::StringW getStaticF_borderUssClassName() ;

static inline ::StringW getStaticF_dragHoverBarUssClassName() ;

static inline ::StringW getStaticF_dragHoverMarkerUssClassName() ;

static inline ::StringW getStaticF_itemAlternativeBackgroundUssClassName() ;

static inline ::StringW getStaticF_itemDragHoverUssClassName() ;

static inline ::StringW getStaticF_itemSelectedVariantUssClassName() ;

static inline ::StringW getStaticF_itemUssClassName() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>* getStaticF_k_EmptyItems() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_RebuildMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_RefreshMarker() ;

static inline ::StringW getStaticF_listScrollViewUssClassName() ;

static inline int32_t getStaticF_s_DefaultItemHeight() ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<int32_t> getStaticF_s_ItemHeightProperty() ;

static inline ::StringW getStaticF_ussClassName() ;

/// @brief Method get_activeItems, addr 0x48ef904, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* get_activeItems() ;

/// @brief Method get_contentContainer, addr 0x48ef7c0, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* get_contentContainer() ;

/// @brief Method get_dragger, addr 0x48ef984, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::ListViewDragger* get_dragger() ;

/// @brief Method get_fixedItemHeight, addr 0x48eff9c, size 0x8, virtual false, abstract: false, final false
inline float_t get_fixedItemHeight() ;

/// @brief Method get_itemsSource, addr 0x48ef6f8, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::IList* get_itemsSource() ;

/// @brief Method get_lastHeight, addr 0x48f009c, size 0x8, virtual false, abstract: false, final false
inline float_t get_lastHeight() ;

/// @brief Method get_reorderable, addr 0x48efb2c, size 0xf0, virtual false, abstract: false, final false
inline bool get_reorderable() ;

/// @brief Method get_scrollView, addr 0x48ef97c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::ScrollView* get_scrollView() ;

/// @brief Method get_selectedIds, addr 0x48ef8fc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_selectedIds() ;

/// @brief Method get_selectedIndex, addr 0x48ee904, size 0x74, virtual false, abstract: false, final false
inline int32_t get_selectedIndex() ;

/// @brief Method get_selectedIndices, addr 0x48ef8f4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_selectedIndices() ;

/// @brief Method get_selectionType, addr 0x48ef7c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::SelectionType get_selectionType() ;

/// @brief Method get_showAlternatingRowBackgrounds, addr 0x48eff38, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::AlternatingRowBackground get_showAlternatingRowBackgrounds() ;

/// @brief Method get_viewController, addr 0x48ef9ec, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::CollectionViewController* get_viewController() ;

/// @brief Method get_virtualizationController, addr 0x48ef98c, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::CollectionVirtualizationController* get_virtualizationController() ;

/// @brief Method get_virtualizationMethod, addr 0x48eff58, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::CollectionVirtualizationMethod get_virtualizationMethod() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

static inline void setStaticF_backgroundFillUssClassName(::StringW  value) ;

static inline void setStaticF_borderUssClassName(::StringW  value) ;

static inline void setStaticF_dragHoverBarUssClassName(::StringW  value) ;

static inline void setStaticF_dragHoverMarkerUssClassName(::StringW  value) ;

static inline void setStaticF_itemAlternativeBackgroundUssClassName(::StringW  value) ;

static inline void setStaticF_itemDragHoverUssClassName(::StringW  value) ;

static inline void setStaticF_itemSelectedVariantUssClassName(::StringW  value) ;

static inline void setStaticF_itemUssClassName(::StringW  value) ;

static inline void setStaticF_k_EmptyItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>*  value) ;

static inline void setStaticF_k_RebuildMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_RefreshMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_listScrollViewUssClassName(::StringW  value) ;

static inline void setStaticF_s_DefaultItemHeight(int32_t  value) ;

static inline void setStaticF_s_ItemHeightProperty(::UnityEngine::UIElements::CustomStyleProperty_1<int32_t>  value) ;

static inline void setStaticF_ussClassName(::StringW  value) ;

/// @brief Method set_fixedItemHeight, addr 0x48effa4, size 0xf8, virtual false, abstract: false, final false
inline void set_fixedItemHeight(float_t  value) ;

/// @brief Method set_horizontalScrollingEnabled, addr 0x48efec8, size 0x70, virtual false, abstract: false, final false
inline void set_horizontalScrollingEnabled(bool  value) ;

/// @brief Method set_itemsSource, addr 0x48ef710, size 0x68, virtual false, abstract: false, final false
inline void set_itemsSource(::System::Collections::IList*  value) ;

/// @brief Method set_reorderable, addr 0x48efc1c, size 0x13c, virtual false, abstract: false, final false
inline void set_reorderable(bool  value) ;

/// @brief Method set_selectedIndex, addr 0x48ef8f0, size 0x4, virtual false, abstract: false, final false
inline void set_selectedIndex(int32_t  value) ;

/// @brief Method set_selectionType, addr 0x48ef7d0, size 0xa4, virtual false, abstract: false, final false
inline void set_selectionType(::UnityEngine::UIElements::SelectionType  value) ;

/// @brief Method set_showAlternatingRowBackgrounds, addr 0x48eff40, size 0x18, virtual false, abstract: false, final false
inline void set_showAlternatingRowBackgrounds(::UnityEngine::UIElements::AlternatingRowBackground  value) ;

/// @brief Method set_showBorder, addr 0x48efaac, size 0x80, virtual false, abstract: false, final false
inline void set_showBorder(bool  value) ;

/// @brief Method set_virtualizationMethod, addr 0x48eff60, size 0x3c, virtual false, abstract: false, final false
inline void set_virtualizationMethod(::UnityEngine::UIElements::CollectionVirtualizationMethod  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseVerticalCollectionView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseVerticalCollectionView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseVerticalCollectionView(BaseVerticalCollectionView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseVerticalCollectionView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseVerticalCollectionView(BaseVerticalCollectionView const& ) = delete;

/// @brief Field itemsChosen, offset: 0x3d8, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  ___itemsChosen;

/// @brief Field selectionChanged, offset: 0x3e0, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  ___selectionChanged;

/// @brief Field selectedIndicesChanged, offset: 0x3e8, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*  ___selectedIndicesChanged;

/// @brief Field itemIndexChanged, offset: 0x3f0, size: 0x8, def value: None
 ::System::Action_2<int32_t,int32_t>*  ___itemIndexChanged;

/// @brief Field itemsSourceChanged, offset: 0x3f8, size: 0x8, def value: None
 ::System::Action*  ___itemsSourceChanged;

/// @brief Field selectionNotChanged, offset: 0x400, size: 0x8, def value: None
 ::System::Action*  ___selectionNotChanged;

/// @brief Field canStartDrag, offset: 0x408, size: 0x8, def value: None
 ::System::Func_2<::UnityEngine::UIElements::CanStartDragArgs,bool>*  ___canStartDrag;

/// @brief Field setupDragAndDrop, offset: 0x410, size: 0x8, def value: None
 ::System::Func_2<::UnityEngine::UIElements::SetupDragAndDropArgs,::UnityEngine::UIElements::StartDragArgs>*  ___setupDragAndDrop;

/// @brief Field dragAndDropUpdate, offset: 0x418, size: 0x8, def value: None
 ::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*  ___dragAndDropUpdate;

/// @brief Field handleDrop, offset: 0x420, size: 0x8, def value: None
 ::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*  ___handleDrop;

/// @brief Field m_SelectionType, offset: 0x428, size: 0x4, def value: None
 ::UnityEngine::UIElements::SelectionType  ___m_SelectionType;

/// @brief Field m_HorizontalScrollingEnabled, offset: 0x42c, size: 0x1, def value: None
 bool  ___m_HorizontalScrollingEnabled;

/// @brief Field m_ShowAlternatingRowBackgrounds, offset: 0x430, size: 0x4, def value: None
 ::UnityEngine::UIElements::AlternatingRowBackground  ___m_ShowAlternatingRowBackgrounds;

/// @brief Field m_FixedItemHeight, offset: 0x434, size: 0x4, def value: None
 float_t  ___m_FixedItemHeight;

/// @brief Field m_ItemHeightIsInline, offset: 0x438, size: 0x1, def value: None
 bool  ___m_ItemHeightIsInline;

/// @brief Field m_VirtualizationMethod, offset: 0x43c, size: 0x4, def value: None
 ::UnityEngine::UIElements::CollectionVirtualizationMethod  ___m_VirtualizationMethod;

/// @brief Field m_ScrollView, offset: 0x440, size: 0x8, def value: None
 ::UnityEngine::UIElements::ScrollView*  ___m_ScrollView;

/// @brief Field m_ViewController, offset: 0x448, size: 0x8, def value: None
 ::UnityEngine::UIElements::CollectionViewController*  ___m_ViewController;

/// @brief Field m_VirtualizationController, offset: 0x450, size: 0x8, def value: None
 ::UnityEngine::UIElements::CollectionVirtualizationController*  ___m_VirtualizationController;

/// @brief Field m_NavigationManipulator, offset: 0x458, size: 0x8, def value: None
 ::UnityEngine::UIElements::KeyboardNavigationManipulator*  ___m_NavigationManipulator;

/// @brief Field serializedVirtualizationData, offset: 0x460, size: 0x8, def value: None
 ::UnityEngine::UIElements::SerializedVirtualizationData*  ___serializedVirtualizationData;

/// @brief Field m_SelectedIds, offset: 0x468, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_SelectedIds;

/// @brief Field m_SelectedIndices, offset: 0x470, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_SelectedIndices;

/// @brief Field m_SelectedItems, offset: 0x478, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ___m_SelectedItems;

/// @brief Field m_LastHeight, offset: 0x480, size: 0x4, def value: None
 float_t  ___m_LastHeight;

/// @brief Field m_IsRangeSelectionDirectionUp, offset: 0x484, size: 0x1, def value: None
 bool  ___m_IsRangeSelectionDirectionUp;

/// @brief Field m_Dragger, offset: 0x488, size: 0x8, def value: None
 ::UnityEngine::UIElements::ListViewDragger*  ___m_Dragger;

/// @brief Field m_ItemIndexChangedCallback, offset: 0x490, size: 0x8, def value: None
 ::System::Action_2<int32_t,int32_t>*  ___m_ItemIndexChangedCallback;

/// @brief Field m_ItemsSourceChangedCallback, offset: 0x498, size: 0x8, def value: None
 ::System::Action*  ___m_ItemsSourceChangedCallback;

/// @brief Field m_TouchDownPosition, offset: 0x4a0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_TouchDownPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVerticalCollectionView, 0x4b0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___itemsChosen) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___selectionChanged) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___selectedIndicesChanged) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___itemIndexChanged) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___itemsSourceChanged) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___selectionNotChanged) == 0x400, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___canStartDrag) == 0x408, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___setupDragAndDrop) == 0x410, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___dragAndDropUpdate) == 0x418, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___handleDrop) == 0x420, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_SelectionType) == 0x428, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_HorizontalScrollingEnabled) == 0x42c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_ShowAlternatingRowBackgrounds) == 0x430, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_FixedItemHeight) == 0x434, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_ItemHeightIsInline) == 0x438, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_VirtualizationMethod) == 0x43c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_ScrollView) == 0x440, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_ViewController) == 0x448, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_VirtualizationController) == 0x450, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_NavigationManipulator) == 0x458, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___serializedVirtualizationData) == 0x460, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_SelectedIds) == 0x468, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_SelectedIndices) == 0x470, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_SelectedItems) == 0x478, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_LastHeight) == 0x480, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_IsRangeSelectionDirectionUp) == 0x484, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_Dragger) == 0x488, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_ItemIndexChangedCallback) == 0x490, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_ItemsSourceChangedCallback) == 0x498, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_TouchDownPosition) == 0x4a0, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseVerticalCollectionView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVerticalCollectionView*, "UnityEngine.UIElements", "BaseVerticalCollectionView");
NEED_NO_BOX(::UnityEngine::UIElements::__BaseVerticalCollectionView__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__BaseVerticalCollectionView__UxmlTraits*, "UnityEngine.UIElements", "BaseVerticalCollectionView/UxmlTraits");
NEED_NO_BOX(::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass161_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass161_0*, "UnityEngine.UIElements", "BaseVerticalCollectionView/<>c__DisplayClass161_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass170_0, "UnityEngine.UIElements", "BaseVerticalCollectionView/<>c__DisplayClass170_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__BaseVerticalCollectionView____c__DisplayClass181_0, "UnityEngine.UIElements", "BaseVerticalCollectionView/<>c__DisplayClass181_0");
