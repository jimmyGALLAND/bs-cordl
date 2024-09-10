#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseTreeView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseTreeView)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IList;
}
namespace UnityEngine::UIElements {
class BaseTreeViewController;
}
namespace UnityEngine::UIElements {
class CollectionViewController;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __BaseTreeView__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseTreeView;
}
namespace UnityEngine::UIElements {
class __BaseTreeView__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseTreeView);
MARK_REF_PTR_T(::UnityEngine::UIElements::__BaseTreeView__UxmlTraits);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::BaseTreeView::UxmlTraits*
class CORDL_TYPE __BaseTreeView__UxmlTraits : public ::UnityEngine::UIElements::__BaseVerticalCollectionView__UxmlTraits {
public:
// Declarations
/// @brief Field m_AutoExpand, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AutoExpand, put=__cordl_internal_set_m_AutoExpand)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  m_AutoExpand;

/// @brief Method Init, addr 0x48ef308, size 0xf4, virtual true, abstract: false, final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::__BaseTreeView__UxmlTraits* New_ctor() ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_AutoExpand() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_AutoExpand() const;

constexpr void __cordl_internal_set_m_AutoExpand(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value) ;

/// @brief Method .ctor, addr 0x48ef3fc, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __BaseTreeView__UxmlTraits() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__BaseTreeView__UxmlTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BaseTreeView__UxmlTraits(__BaseTreeView__UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BaseTreeView__UxmlTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BaseTreeView__UxmlTraits(__BaseTreeView__UxmlTraits const& ) = delete;

/// @brief Field m_AutoExpand, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  ___m_AutoExpand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__BaseTreeView__UxmlTraits, 0xb8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BaseTreeView__UxmlTraits, ___m_AutoExpand) == 0xb0, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseTreeView
// SizeInfo { instance_size: 1208, native_size: -1, calculated_instance_size: 1208, calculated_native_size: 1208, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::BaseTreeView*
class CORDL_TYPE BaseTreeView : public ::UnityEngine::UIElements::BaseVerticalCollectionView {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::__BaseTreeView__UxmlTraits;

 __declspec(property(get=get_autoExpand, put=set_autoExpand)) bool  autoExpand;

 __declspec(property(get=get_expandedItemIds, put=set_expandedItemIds)) ::System::Collections::Generic::List_1<int32_t>*  expandedItemIds;

/// @brief Field itemContentContainerUssClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_itemContentContainerUssClassName, put=setStaticF_itemContentContainerUssClassName)) ::StringW  itemContentContainerUssClassName;

/// @brief Field itemIndentUssClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_itemIndentUssClassName, put=setStaticF_itemIndentUssClassName)) ::StringW  itemIndentUssClassName;

/// @brief Field itemIndentsContainerUssClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_itemIndentsContainerUssClassName, put=setStaticF_itemIndentsContainerUssClassName)) ::StringW  itemIndentsContainerUssClassName;

/// @brief Field itemToggleUssClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_itemToggleUssClassName, put=setStaticF_itemToggleUssClassName)) ::StringW  itemToggleUssClassName;

/// @brief Field itemUssClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_itemUssClassName, put=setStaticF_itemUssClassName)) ::StringW  itemUssClassName;

 __declspec(property(get=get_itemsSource)) ::System::Collections::IList*  itemsSource;

/// @brief Field m_AutoExpand, offset 0x4ac, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutoExpand, put=__cordl_internal_set_m_AutoExpand)) bool  m_AutoExpand;

/// @brief Field m_ExpandedItemIds, offset 0x4b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ExpandedItemIds, put=__cordl_internal_set_m_ExpandedItemIds)) ::System::Collections::Generic::List_1<int32_t>*  m_ExpandedItemIds;

/// @brief Field ussClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_ussClassName, put=setStaticF_ussClassName)) ::StringW  ussClassName;

 __declspec(property(get=get_viewController)) ::UnityEngine::UIElements::BaseTreeViewController*  viewController;

/// @brief Method CollapseItem, addr 0x48ef0e0, size 0x40, virtual false, abstract: false, final false
inline void CollapseItem(int32_t  id, bool  collapseAllChildren) ;

/// @brief Method CollapseItemByIndex, addr 0x48ee890, size 0x74, virtual false, abstract: false, final false
inline void CollapseItemByIndex(int32_t  index, bool  collapseAll) ;

/// @brief Method CreateDragAndDropController, addr 0x48edf74, size 0x5c, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::ICollectionDragAndDropController* CreateDragAndDropController() ;

/// @brief Method CreateVirtualizationController, addr 0x48edbf4, size 0x48, virtual true, abstract: false, final false
inline void CreateVirtualizationController() ;

/// @brief Method ExpandItem, addr 0x48ef120, size 0x38, virtual false, abstract: false, final false
inline void ExpandItem(int32_t  id, bool  expandAllChildren) ;

/// @brief Method ExpandItemByIndex, addr 0x48ee818, size 0x78, virtual false, abstract: false, final false
inline void ExpandItemByIndex(int32_t  index, bool  expandAll) ;

/// @brief Method GetItemIndex, addr 0x48eefbc, size 0x100, virtual false, abstract: false, final false
inline int32_t GetItemIndex(int32_t  id, bool  expand) ;

/// @brief Method HandleItemNavigation, addr 0x48ee2bc, size 0x538, virtual true, abstract: false, final false
inline bool HandleItemNavigation(bool  moveIn, bool  altPressed) ;

/// @brief Method IsExpanded, addr 0x48ef0bc, size 0x24, virtual false, abstract: false, final false
inline bool IsExpanded(int32_t  id) ;

/// @brief Method IsExpandedByIndex, addr 0x48ee7f4, size 0x24, virtual false, abstract: false, final false
inline bool IsExpandedByIndex(int32_t  index) ;

static inline ::UnityEngine::UIElements::BaseTreeView* New_ctor() ;

static inline ::UnityEngine::UIElements::BaseTreeView* New_ctor(int32_t  itemHeight) ;

/// @brief Method OnItemIndexChanged, addr 0x48ede00, size 0x4, virtual false, abstract: false, final false
inline void OnItemIndexChanged(int32_t  srcIndex, int32_t  dstIndex) ;

/// @brief Method OnTreeViewPointerUp, addr 0x48ef158, size 0x38, virtual false, abstract: false, final false
inline void OnTreeViewPointerUp(::UnityEngine::UIElements::PointerUpEvent*  evt) ;

/// @brief Method OnViewDataReady, addr 0x48ee230, size 0x44, virtual true, abstract: false, final false
inline void OnViewDataReady() ;

/// @brief Method SetSelectionById, addr 0x48ee978, size 0x7c, virtual false, abstract: false, final false
inline void SetSelectionById(int32_t  id) ;

/// @brief Method SetSelectionById, addr 0x48eeb84, size 0x8, virtual false, abstract: false, final false
inline void SetSelectionById(::System::Collections::Generic::IEnumerable_1<int32_t>*  ids) ;

/// @brief Method SetSelectionInternalById, addr 0x48eeb8c, size 0xec, virtual false, abstract: false, final false
inline void SetSelectionInternalById(::System::Collections::Generic::IEnumerable_1<int32_t>*  ids, bool  sendNotification) ;

/// @brief Method SetViewController, addr 0x48edc3c, size 0x120, virtual true, abstract: false, final false
inline void SetViewController(::UnityEngine::UIElements::CollectionViewController*  controller) ;

/// @brief Method <SetSelectionInternalById>b__47_0, addr 0x48ef300, size 0x8, virtual false, abstract: false, final false
inline int32_t _SetSelectionInternalById_b__47_0(int32_t  id) ;

constexpr bool const& __cordl_internal_get_m_AutoExpand() const;

constexpr bool& __cordl_internal_get_m_AutoExpand() ;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_ExpandedItemIds() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_m_ExpandedItemIds() const;

constexpr void __cordl_internal_set_m_AutoExpand(bool  value) ;

constexpr void __cordl_internal_set_m_ExpandedItemIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x48ee014, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x48ee01c, size 0x160, virtual false, abstract: false, final false
inline void _ctor(int32_t  itemHeight) ;

static inline ::StringW getStaticF_itemContentContainerUssClassName() ;

static inline ::StringW getStaticF_itemIndentUssClassName() ;

static inline ::StringW getStaticF_itemIndentsContainerUssClassName() ;

static inline ::StringW getStaticF_itemToggleUssClassName() ;

static inline ::StringW getStaticF_itemUssClassName() ;

static inline ::StringW getStaticF_ussClassName() ;

/// @brief Method get_autoExpand, addr 0x48edfd0, size 0x8, virtual false, abstract: false, final false
inline bool get_autoExpand() ;

/// @brief Method get_expandedItemIds, addr 0x48ee004, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* get_expandedItemIds() ;

/// @brief Method get_itemsSource, addr 0x48edb58, size 0x20, virtual false, abstract: false, final false
inline ::System::Collections::IList* get_itemsSource() ;

/// @brief Method get_viewController, addr 0x48edb78, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::BaseTreeViewController* get_viewController() ;

static inline void setStaticF_itemContentContainerUssClassName(::StringW  value) ;

static inline void setStaticF_itemIndentUssClassName(::StringW  value) ;

static inline void setStaticF_itemIndentsContainerUssClassName(::StringW  value) ;

static inline void setStaticF_itemToggleUssClassName(::StringW  value) ;

static inline void setStaticF_itemUssClassName(::StringW  value) ;

static inline void setStaticF_ussClassName(::StringW  value) ;

/// @brief Method set_autoExpand, addr 0x48edfd8, size 0x2c, virtual false, abstract: false, final false
inline void set_autoExpand(bool  value) ;

/// @brief Method set_expandedItemIds, addr 0x48ee00c, size 0x8, virtual false, abstract: false, final false
inline void set_expandedItemIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseTreeView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseTreeView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseTreeView(BaseTreeView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseTreeView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseTreeView(BaseTreeView const& ) = delete;

/// @brief Field m_AutoExpand, offset: 0x4ac, size: 0x1, def value: None
 bool  ___m_AutoExpand;

/// @brief Field m_ExpandedItemIds, offset: 0x4b0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_ExpandedItemIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseTreeView, 0x4b8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeView, ___m_AutoExpand) == 0x4ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseTreeView, ___m_ExpandedItemIds) == 0x4b0, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseTreeView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseTreeView*, "UnityEngine.UIElements", "BaseTreeView");
NEED_NO_BOX(::UnityEngine::UIElements::__BaseTreeView__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__BaseTreeView__UxmlTraits*, "UnityEngine.UIElements", "BaseTreeView/UxmlTraits");
