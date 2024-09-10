#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseTreeView.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseTreeView_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseTreeViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseTreeView_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICollectionDragAndDropController_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__BaseTreeView__UxmlTraits.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__BaseTreeView__UxmlTraits::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::__BaseTreeView__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x48ef308;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BaseTreeView__UxmlTraits*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BaseTreeView__UxmlTraits*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__BaseTreeView__UxmlTraits._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__BaseTreeView__UxmlTraits::*)()>(&::UnityEngine::UIElements::__BaseTreeView__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x48ef3fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BaseTreeView__UxmlTraits*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::__BaseTreeView__UxmlTraits::__cordl_internal_get_m_AutoExpand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoExpand;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& UnityEngine::UIElements::__BaseTreeView__UxmlTraits::__cordl_internal_get_m_AutoExpand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoExpand;
}
constexpr void UnityEngine::UIElements::__BaseTreeView__UxmlTraits::__cordl_internal_set_m_AutoExpand(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AutoExpand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::__BaseTreeView__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BaseTreeView__UxmlTraits*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline ::UnityEngine::UIElements::__BaseTreeView__UxmlTraits* UnityEngine::UIElements::__BaseTreeView__UxmlTraits::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__BaseTreeView__UxmlTraits*>());
}
inline void UnityEngine::UIElements::__BaseTreeView__UxmlTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BaseTreeView__UxmlTraits*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__BaseTreeView__UxmlTraits::__BaseTreeView__UxmlTraits()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.get_itemsSource
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (::UnityEngine::UIElements::BaseTreeView::*)()>(&::UnityEngine::UIElements::BaseTreeView::get_itemsSource)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x48edb58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "get_itemsSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.get_viewController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BaseTreeViewController* (::UnityEngine::UIElements::BaseTreeView::*)()>(&::UnityEngine::UIElements::BaseTreeView::get_viewController)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x48edb78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "get_viewController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.CreateVirtualizationController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)()>(&::UnityEngine::UIElements::BaseTreeView::CreateVirtualizationController)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x48edbf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                                  104
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.SetViewController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(::UnityEngine::UIElements::CollectionViewController*)>(&::UnityEngine::UIElements::BaseTreeView::SetViewController)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x48edc3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                                  106
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.OnItemIndexChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(int32_t, int32_t)>(&::UnityEngine::UIElements::BaseTreeView::OnItemIndexChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x48ede00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "OnItemIndexChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.CreateDragAndDropController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ICollectionDragAndDropController* (::UnityEngine::UIElements::BaseTreeView::*)()>(&::UnityEngine::UIElements::BaseTreeView::CreateDragAndDropController)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x48edf74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                                  108
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.get_autoExpand
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseTreeView::*)()>(&::UnityEngine::UIElements::BaseTreeView::get_autoExpand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48edfd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "get_autoExpand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.set_autoExpand
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(bool)>(&::UnityEngine::UIElements::BaseTreeView::set_autoExpand)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x48edfd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "set_autoExpand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.get_expandedItemIds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<int32_t>* (::UnityEngine::UIElements::BaseTreeView::*)()>(&::UnityEngine::UIElements::BaseTreeView::get_expandedItemIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ee004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "get_expandedItemIds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.set_expandedItemIds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::UIElements::BaseTreeView::set_expandedItemIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ee00c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "set_expandedItemIds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)()>(&::UnityEngine::UIElements::BaseTreeView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ee014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(int32_t)>(&::UnityEngine::UIElements::BaseTreeView::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x48ee01c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.OnViewDataReady
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)()>(&::UnityEngine::UIElements::BaseTreeView::OnViewDataReady)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48ee230;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                                  96
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.HandleItemNavigation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseTreeView::*)(bool, bool)>(&::UnityEngine::UIElements::BaseTreeView::HandleItemNavigation)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x48ee2bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                                  111
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.SetSelectionById
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(int32_t)>(&::UnityEngine::UIElements::BaseTreeView::SetSelectionById)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x48ee978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "SetSelectionById",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.SetSelectionById
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::UnityEngine::UIElements::BaseTreeView::SetSelectionById)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48eeb84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "SetSelectionById",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.SetSelectionInternalById
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(::System::Collections::Generic::IEnumerable_1<int32_t>*, bool)>(&::UnityEngine::UIElements::BaseTreeView::SetSelectionInternalById)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x48eeb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "SetSelectionInternalById",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.GetItemIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::BaseTreeView::*)(int32_t, bool)>(&::UnityEngine::UIElements::BaseTreeView::GetItemIndex)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x48eefbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "GetItemIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.IsExpanded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseTreeView::*)(int32_t)>(&::UnityEngine::UIElements::BaseTreeView::IsExpanded)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x48ef0bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "IsExpanded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.CollapseItem
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(int32_t, bool)>(&::UnityEngine::UIElements::BaseTreeView::CollapseItem)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x48ef0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "CollapseItem",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.ExpandItem
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(int32_t, bool)>(&::UnityEngine::UIElements::BaseTreeView::ExpandItem)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x48ef120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "ExpandItem",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.OnTreeViewPointerUp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(::UnityEngine::UIElements::PointerUpEvent*)>(&::UnityEngine::UIElements::BaseTreeView::OnTreeViewPointerUp)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x48ef158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "OnTreeViewPointerUp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerUpEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.IsExpandedByIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseTreeView::*)(int32_t)>(&::UnityEngine::UIElements::BaseTreeView::IsExpandedByIndex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x48ee7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "IsExpandedByIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.CollapseItemByIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(int32_t, bool)>(&::UnityEngine::UIElements::BaseTreeView::CollapseItemByIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x48ee890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "CollapseItemByIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView.ExpandItemByIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseTreeView::*)(int32_t, bool)>(&::UnityEngine::UIElements::BaseTreeView::ExpandItemByIndex)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x48ee818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "ExpandItemByIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseTreeView._SetSelectionInternalById_b__47_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::BaseTreeView::*)(int32_t)>(&::UnityEngine::UIElements::BaseTreeView::_SetSelectionInternalById_b__47_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48ef300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "<SetSelectionInternalById>b__47_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::BaseTreeView::__cordl_internal_get_m_AutoExpand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoExpand;
}
constexpr bool const& UnityEngine::UIElements::BaseTreeView::__cordl_internal_get_m_AutoExpand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoExpand;
}
constexpr void UnityEngine::UIElements::BaseTreeView::__cordl_internal_set_m_AutoExpand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutoExpand = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::UIElements::BaseTreeView::__cordl_internal_get_m_ExpandedItemIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExpandedItemIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& UnityEngine::UIElements::BaseTreeView::__cordl_internal_get_m_ExpandedItemIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExpandedItemIds;
}
constexpr void UnityEngine::UIElements::BaseTreeView::__cordl_internal_set_m_ExpandedItemIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ExpandedItemIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::BaseTreeView::setStaticF_ussClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseTreeView::getStaticF_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get>();
}
inline void UnityEngine::UIElements::BaseTreeView::setStaticF_itemUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseTreeView::getStaticF_itemUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get>();
}
inline void UnityEngine::UIElements::BaseTreeView::setStaticF_itemToggleUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "itemToggleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseTreeView::getStaticF_itemToggleUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "itemToggleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get>();
}
inline void UnityEngine::UIElements::BaseTreeView::setStaticF_itemIndentsContainerUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "itemIndentsContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseTreeView::getStaticF_itemIndentsContainerUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "itemIndentsContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get>();
}
inline void UnityEngine::UIElements::BaseTreeView::setStaticF_itemIndentUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "itemIndentUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseTreeView::getStaticF_itemIndentUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "itemIndentUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get>();
}
inline void UnityEngine::UIElements::BaseTreeView::setStaticF_itemContentContainerUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "itemContentContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseTreeView::getStaticF_itemContentContainerUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "itemContentContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get>();
}
inline ::System::Collections::IList* UnityEngine::UIElements::BaseTreeView::get_itemsSource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "get_itemsSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseTreeViewController* UnityEngine::UIElements::BaseTreeView::get_viewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "get_viewController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseTreeViewController*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseTreeView::CreateVirtualizationController()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                    104
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseTreeView::SetViewController(::UnityEngine::UIElements::CollectionViewController*  controller)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                    106
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, controller);
}
inline void UnityEngine::UIElements::BaseTreeView::OnItemIndexChanged(int32_t  srcIndex, int32_t  dstIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "OnItemIndexChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, srcIndex, dstIndex);
}
inline ::UnityEngine::UIElements::ICollectionDragAndDropController* UnityEngine::UIElements::BaseTreeView::CreateDragAndDropController()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                    108
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ICollectionDragAndDropController*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::BaseTreeView::get_autoExpand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "get_autoExpand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseTreeView::set_autoExpand(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "set_autoExpand",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::UIElements::BaseTreeView::get_expandedItemIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "get_expandedItemIds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseTreeView::set_expandedItemIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "set_expandedItemIds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::BaseTreeView* UnityEngine::UIElements::BaseTreeView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BaseTreeView*>());
}
inline void UnityEngine::UIElements::BaseTreeView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseTreeView* UnityEngine::UIElements::BaseTreeView::New_ctor(int32_t  itemHeight)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BaseTreeView*>(itemHeight));
}
inline void UnityEngine::UIElements::BaseTreeView::_ctor(int32_t  itemHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemHeight);
}
inline void UnityEngine::UIElements::BaseTreeView::OnViewDataReady()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                    96
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::BaseTreeView::HandleItemNavigation(bool  moveIn, bool  altPressed)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                    111
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, moveIn, altPressed);
}
inline void UnityEngine::UIElements::BaseTreeView::SetSelectionById(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "SetSelectionById",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void UnityEngine::UIElements::BaseTreeView::SetSelectionById(::System::Collections::Generic::IEnumerable_1<int32_t>*  ids)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "SetSelectionById",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ids);
}
inline void UnityEngine::UIElements::BaseTreeView::SetSelectionInternalById(::System::Collections::Generic::IEnumerable_1<int32_t>*  ids, bool  sendNotification)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "SetSelectionInternalById",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ids, sendNotification);
}
/// @param expand: bool (default: false)
inline int32_t UnityEngine::UIElements::BaseTreeView::GetItemIndex(int32_t  id, bool  expand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "GetItemIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, id, expand);
}
inline bool UnityEngine::UIElements::BaseTreeView::IsExpanded(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "IsExpanded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id);
}
/// @param collapseAllChildren: bool (default: false)
inline void UnityEngine::UIElements::BaseTreeView::CollapseItem(int32_t  id, bool  collapseAllChildren)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "CollapseItem",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, collapseAllChildren);
}
/// @param expandAllChildren: bool (default: false)
inline void UnityEngine::UIElements::BaseTreeView::ExpandItem(int32_t  id, bool  expandAllChildren)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "ExpandItem",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, expandAllChildren);
}
inline void UnityEngine::UIElements::BaseTreeView::OnTreeViewPointerUp(::UnityEngine::UIElements::PointerUpEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "OnTreeViewPointerUp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerUpEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::BaseTreeView::IsExpandedByIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "IsExpandedByIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::BaseTreeView::CollapseItemByIndex(int32_t  index, bool  collapseAll)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "CollapseItemByIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, collapseAll);
}
inline void UnityEngine::UIElements::BaseTreeView::ExpandItemByIndex(int32_t  index, bool  expandAll)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "ExpandItemByIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, expandAll);
}
inline int32_t UnityEngine::UIElements::BaseTreeView::_SetSelectionInternalById_b__47_0(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseTreeView*>::get(),
                        "<SetSelectionInternalById>b__47_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, id);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseTreeView::BaseTreeView()   {
}
