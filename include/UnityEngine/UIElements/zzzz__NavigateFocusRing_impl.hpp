#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/NavigateFocusRing.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigateFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusController_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "UnityEngine/UIElements/zzzz__IFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigateFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection::*)(int32_t)>(&::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x49a2630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection::New_ctor(int32_t  i)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*>(i));
}
inline void UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection::_ctor(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection::__NavigateFocusRing__ChangeDirection()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal.ValidateHierarchyTraversal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::ValidateHierarchyTraversal)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x49a269c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal>::get(),
                        "ValidateHierarchyTraversal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal.ValidateElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::ValidateElement)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x49a2764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal>::get(),
                        "ValidateElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal.Order
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::Order)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x49a282c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal>::get(),
                        "Order",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal.StrictOrder
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::StrictOrder)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x49a2bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal>::get(),
                        "StrictOrder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal.StrictOrder
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(&::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::StrictOrder)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x49a2918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal>::get(),
                        "StrictOrder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal.TieBreaker
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(&::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::TieBreaker)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x49a2ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal>::get(),
                        "TieBreaker",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal.GetBestOverall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::GetBestOverall)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x49a22a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal>::get(),
                        "GetBestOverall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::ValidateHierarchyTraversal(::UnityEngine::UIElements::VisualElement*  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal>::get(),
                        "ValidateHierarchyTraversal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, v);
}
inline bool UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::ValidateElement(::UnityEngine::UIElements::VisualElement*  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal>::get(),
                        "ValidateElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, v);
}
inline int32_t UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::Order(::UnityEngine::UIElements::VisualElement*  a, ::UnityEngine::UIElements::VisualElement*  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal>::get(),
                        "Order",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline int32_t UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::StrictOrder(::UnityEngine::UIElements::VisualElement*  a, ::UnityEngine::UIElements::VisualElement*  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal>::get(),
                        "StrictOrder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline int32_t UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::StrictOrder(::UnityEngine::Rect  ra, ::UnityEngine::Rect  rb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal>::get(),
                        "StrictOrder",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, ra, rb);
}
inline int32_t UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::TieBreaker(::UnityEngine::Rect  ra, ::UnityEngine::Rect  rb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal>::get(),
                        "TieBreaker",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, ra, rb);
}
/// @param bestSoFar: ::UnityEngine::UIElements::VisualElement* (default: nullptr)
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::GetBestOverall(::UnityEngine::UIElements::VisualElement*  candidate, ::UnityEngine::UIElements::VisualElement*  bestSoFar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal>::get(),
                        "GetBestOverall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method, candidate, bestSoFar);
}
// Ctor Parameters [CppParam { name: "currentFocusable", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "validRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstPass", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "direction", ty: "::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::__NavigateFocusRing__FocusableHierarchyTraversal(::UnityEngine::UIElements::VisualElement*  currentFocusable, ::UnityEngine::Rect  validRect, bool  firstPass, ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*  direction) noexcept  {
this->currentFocusable = currentFocusable;
this->validRect = validRect;
this->firstPass = firstPass;
this->direction = direction;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal::__NavigateFocusRing__FocusableHierarchyTraversal()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.get_focusController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusController* (::UnityEngine::UIElements::NavigateFocusRing::*)()>(&::UnityEngine::UIElements::NavigateFocusRing::get_focusController)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x49a193c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get(),
                        "get_focusController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigateFocusRing::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::NavigateFocusRing::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x49a1960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.GetFocusChangeDirection
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusChangeDirection* (::UnityEngine::UIElements::NavigateFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::NavigateFocusRing::GetFocusChangeDirection)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x49a19dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get(),
                        "GetFocusChangeDirection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.GetNextFocusable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Focusable* (::UnityEngine::UIElements::NavigateFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*)>(&::UnityEngine::UIElements::NavigateFocusRing::GetNextFocusable)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x49a1d40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.GetNextFocusable2D
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Focusable* (::UnityEngine::UIElements::NavigateFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*)>(&::UnityEngine::UIElements::NavigateFocusRing::GetNextFocusable2D)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x49a1e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get(),
                        "GetNextFocusable2D",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.IsActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::NavigateFocusRing::IsActive)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x49a2380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get(),
                        "IsActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.IsNavigable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::Focusable*)>(&::UnityEngine::UIElements::NavigateFocusRing::IsNavigable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x49a2458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get(),
                        "IsNavigable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get()}
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IFocusRing"
constexpr  UnityEngine::UIElements::NavigateFocusRing::operator ::UnityEngine::UIElements::IFocusRing*() noexcept {
return static_cast<::UnityEngine::UIElements::IFocusRing*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IFocusRing"
constexpr ::UnityEngine::UIElements::IFocusRing* UnityEngine::UIElements::NavigateFocusRing::i___UnityEngine__UIElements__IFocusRing() noexcept {
return static_cast<::UnityEngine::UIElements::IFocusRing*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_get_m_Root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Root;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_get_m_Root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Root;
}
constexpr void UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_set_m_Root(::UnityEngine::UIElements::VisualElement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Root)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElementFocusRing*& UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_get_m_Ring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ring;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElementFocusRing*> const& UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_get_m_Ring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ring;
}
constexpr void UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_set_m_Ring(::UnityEngine::UIElements::VisualElementFocusRing*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Ring)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Left(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*, "Left", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get>(std::forward<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Left()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*, "Left", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get>();
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Right(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*, "Right", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get>(std::forward<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Right()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*, "Right", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get>();
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Up(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*, "Up", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get>(std::forward<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Up()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*, "Up", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get>();
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Down(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*, "Down", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get>(std::forward<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Down()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*, "Down", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get>();
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Next(::UnityEngine::UIElements::FocusChangeDirection*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::FocusChangeDirection*, "Next", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get>(std::forward<::UnityEngine::UIElements::FocusChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::FocusChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Next()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FocusChangeDirection*, "Next", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get>();
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Previous(::UnityEngine::UIElements::FocusChangeDirection*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::FocusChangeDirection*, "Previous", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get>(std::forward<::UnityEngine::UIElements::FocusChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::FocusChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Previous()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FocusChangeDirection*, "Previous", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get>();
}
inline ::UnityEngine::UIElements::FocusController* UnityEngine::UIElements::NavigateFocusRing::get_focusController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get(),
                        "get_focusController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusController*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::NavigateFocusRing* UnityEngine::UIElements::NavigateFocusRing::New_ctor(::UnityEngine::UIElements::VisualElement*  root)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::NavigateFocusRing*>(root));
}
inline void UnityEngine::UIElements::NavigateFocusRing::_ctor(::UnityEngine::UIElements::VisualElement*  root)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, root);
}
inline ::UnityEngine::UIElements::FocusChangeDirection* UnityEngine::UIElements::NavigateFocusRing::GetFocusChangeDirection(::UnityEngine::UIElements::Focusable*  currentFocusable, ::UnityEngine::UIElements::EventBase*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get(),
                        "GetFocusChangeDirection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusChangeDirection*, false>(this, ___internal_method, currentFocusable, e);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::NavigateFocusRing::GetNextFocusable(::UnityEngine::UIElements::Focusable*  currentFocusable, ::UnityEngine::UIElements::FocusChangeDirection*  direction)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*, false>(this, ___internal_method, currentFocusable, direction);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::NavigateFocusRing::GetNextFocusable2D(::UnityEngine::UIElements::Focusable*  currentFocusable, ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*  direction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get(),
                        "GetNextFocusable2D",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*, false>(this, ___internal_method, currentFocusable, direction);
}
inline bool UnityEngine::UIElements::NavigateFocusRing::IsActive(::UnityEngine::UIElements::VisualElement*  v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get(),
                        "IsActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, v);
}
inline bool UnityEngine::UIElements::NavigateFocusRing::IsNavigable(::UnityEngine::UIElements::Focusable*  focusable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigateFocusRing*>::get(),
                        "IsNavigable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Focusable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, focusable);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::NavigateFocusRing::NavigateFocusRing()   {
}
