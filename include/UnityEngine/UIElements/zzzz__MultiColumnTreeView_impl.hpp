#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MultiColumnTreeView.hpp"
#include "UnityEngine/UIElements/zzzz__BaseTreeView_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MultiColumnTreeView_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__Column_def.hpp"
#include "UnityEngine/UIElements/zzzz__Columns_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextualMenuPopulateEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__MultiColumnTreeViewController_def.hpp"
#include "UnityEngine/UIElements/zzzz__MultiColumnTreeView_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescriptions_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__MultiColumnTreeView__UxmlFactory._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__MultiColumnTreeView__UxmlFactory::*)()>(&::UnityEngine::UIElements::__MultiColumnTreeView__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x496a544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MultiColumnTreeView__UxmlFactory*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::__MultiColumnTreeView__UxmlFactory* UnityEngine::UIElements::__MultiColumnTreeView__UxmlFactory::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__MultiColumnTreeView__UxmlFactory*>());
}
inline void UnityEngine::UIElements::__MultiColumnTreeView__UxmlFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MultiColumnTreeView__UxmlFactory*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__MultiColumnTreeView__UxmlFactory::__MultiColumnTreeView__UxmlFactory()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x496a58c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits::*)()>(&::UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x496a6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits::__cordl_internal_get_m_SortingEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortingEnabled;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits::__cordl_internal_get_m_SortingEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortingEnabled;
}
constexpr void UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits::__cordl_internal_set_m_SortingEnabled(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SortingEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::Columns*>*& UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits::__cordl_internal_get_m_Columns()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Columns;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::Columns*>*> const& UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits::__cordl_internal_get_m_Columns() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Columns;
}
constexpr void UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits::__cordl_internal_set_m_Columns(::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::Columns*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Columns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescriptions*>*& UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits::__cordl_internal_get_m_SortColumnDescriptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortColumnDescriptions;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescriptions*>*> const& UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits::__cordl_internal_get_m_SortColumnDescriptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortColumnDescriptions;
}
constexpr void UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits::__cordl_internal_set_m_SortColumnDescriptions(::UnityEngine::UIElements::UxmlObjectAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescriptions*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SortColumnDescriptions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline ::UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits* UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits*>());
}
inline void UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__MultiColumnTreeView__UxmlTraits::__MultiColumnTreeView__UxmlTraits()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.get_viewController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MultiColumnTreeViewController* (::UnityEngine::UIElements::MultiColumnTreeView::*)()>(&::UnityEngine::UIElements::MultiColumnTreeView::get_viewController)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4969ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        "get_viewController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.get_columns
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Columns* (::UnityEngine::UIElements::MultiColumnTreeView::*)()>(&::UnityEngine::UIElements::MultiColumnTreeView::get_columns)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4969f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        "get_columns",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.set_columns
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)(::UnityEngine::UIElements::Columns*)>(&::UnityEngine::UIElements::MultiColumnTreeView::set_columns)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x4969f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        "set_columns",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Columns*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.get_sortColumnDescriptions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::SortColumnDescriptions* (::UnityEngine::UIElements::MultiColumnTreeView::*)()>(&::UnityEngine::UIElements::MultiColumnTreeView::get_sortColumnDescriptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4969fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        "get_sortColumnDescriptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.set_sortColumnDescriptions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)(::UnityEngine::UIElements::SortColumnDescriptions*)>(&::UnityEngine::UIElements::MultiColumnTreeView::set_sortColumnDescriptions)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4969fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        "set_sortColumnDescriptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescriptions*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.set_sortingEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)(bool)>(&::UnityEngine::UIElements::MultiColumnTreeView::set_sortingEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x496a07c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        "set_sortingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)()>(&::UnityEngine::UIElements::MultiColumnTreeView::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x496a0dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)(::UnityEngine::UIElements::Columns*)>(&::UnityEngine::UIElements::MultiColumnTreeView::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x496a134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Columns*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.CreateViewController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::CollectionViewController* (::UnityEngine::UIElements::MultiColumnTreeView::*)()>(&::UnityEngine::UIElements::MultiColumnTreeView::CreateViewController)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x496a268;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                                  105
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.SetViewController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)(::UnityEngine::UIElements::CollectionViewController*)>(&::UnityEngine::UIElements::MultiColumnTreeView::SetViewController)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x496a2f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                                  106
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.CreateVirtualizationController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)()>(&::UnityEngine::UIElements::MultiColumnTreeView::CreateVirtualizationController)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x496a4e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                                  104
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.RaiseColumnSortingChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)()>(&::UnityEngine::UIElements::MultiColumnTreeView::RaiseColumnSortingChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x496a060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        "RaiseColumnSortingChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MultiColumnTreeView.RaiseHeaderContextMenuPopulate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MultiColumnTreeView::*)(::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::UnityEngine::UIElements::Column*)>(&::UnityEngine::UIElements::MultiColumnTreeView::RaiseHeaderContextMenuPopulate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x496a528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        "RaiseHeaderContextMenuPopulate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Columns*& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_m_Columns()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Columns;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Columns*> const& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_m_Columns() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Columns;
}
constexpr void UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_set_m_Columns(::UnityEngine::UIElements::Columns*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Columns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_m_SortingEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortingEnabled;
}
constexpr bool const& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_m_SortingEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortingEnabled;
}
constexpr void UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_set_m_SortingEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SortingEnabled = value;
}
constexpr ::UnityEngine::UIElements::SortColumnDescriptions*& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_m_SortColumnDescriptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortColumnDescriptions;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::SortColumnDescriptions*> const& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_m_SortColumnDescriptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortColumnDescriptions;
}
constexpr void UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_set_m_SortColumnDescriptions(::UnityEngine::UIElements::SortColumnDescriptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SortColumnDescriptions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_m_SortedColumns()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortedColumns;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*> const& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_m_SortedColumns() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortedColumns;
}
constexpr void UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_set_m_SortedColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SortedColumns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_columnSortingChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___columnSortingChanged;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_columnSortingChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___columnSortingChanged;
}
constexpr void UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_set_columnSortingChanged(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___columnSortingChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*,::UnityEngine::UIElements::Column*>*& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_headerContextMenuPopulateEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headerContextMenuPopulateEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*,::UnityEngine::UIElements::Column*>*> const& UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_get_headerContextMenuPopulateEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headerContextMenuPopulateEvent;
}
constexpr void UnityEngine::UIElements::MultiColumnTreeView::__cordl_internal_set_headerContextMenuPopulateEvent(::System::Action_2<::UnityEngine::UIElements::ContextualMenuPopulateEvent*,::UnityEngine::UIElements::Column*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headerContextMenuPopulateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::MultiColumnTreeViewController* UnityEngine::UIElements::MultiColumnTreeView::get_viewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        "get_viewController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MultiColumnTreeViewController*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Columns* UnityEngine::UIElements::MultiColumnTreeView::get_columns()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        "get_columns",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Columns*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnTreeView::set_columns(::UnityEngine::UIElements::Columns*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        "set_columns",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Columns*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::SortColumnDescriptions* UnityEngine::UIElements::MultiColumnTreeView::get_sortColumnDescriptions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        "get_sortColumnDescriptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SortColumnDescriptions*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnTreeView::set_sortColumnDescriptions(::UnityEngine::UIElements::SortColumnDescriptions*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        "set_sortColumnDescriptions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescriptions*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::MultiColumnTreeView::set_sortingEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        "set_sortingEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::MultiColumnTreeView* UnityEngine::UIElements::MultiColumnTreeView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::MultiColumnTreeView*>());
}
inline void UnityEngine::UIElements::MultiColumnTreeView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MultiColumnTreeView* UnityEngine::UIElements::MultiColumnTreeView::New_ctor(::UnityEngine::UIElements::Columns*  columns)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::MultiColumnTreeView*>(columns));
}
inline void UnityEngine::UIElements::MultiColumnTreeView::_ctor(::UnityEngine::UIElements::Columns*  columns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Columns*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, columns);
}
inline ::UnityEngine::UIElements::CollectionViewController* UnityEngine::UIElements::MultiColumnTreeView::CreateViewController()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                    105
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::CollectionViewController*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnTreeView::SetViewController(::UnityEngine::UIElements::CollectionViewController*  controller)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                    106
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, controller);
}
inline void UnityEngine::UIElements::MultiColumnTreeView::CreateVirtualizationController()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                    104
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnTreeView::RaiseColumnSortingChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        "RaiseColumnSortingChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MultiColumnTreeView::RaiseHeaderContextMenuPopulate(::UnityEngine::UIElements::ContextualMenuPopulateEvent*  evt, ::UnityEngine::UIElements::Column*  column)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MultiColumnTreeView*>::get(),
                        "RaiseHeaderContextMenuPopulate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, column);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MultiColumnTreeView::MultiColumnTreeView()   {
}
