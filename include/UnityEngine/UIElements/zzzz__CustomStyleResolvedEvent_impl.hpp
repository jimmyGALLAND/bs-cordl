#pragma once
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleResolvedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICustomStyle_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::CustomStyleResolvedEvent.get_customStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ICustomStyle* (::UnityEngine::UIElements::CustomStyleResolvedEvent::*)()>(
    &::UnityEngine::UIElements::CustomStyleResolvedEvent::get_customStyle)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3394610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CustomStyleResolvedEvent*>::get(),
                                                                               "get_customStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::CustomStyleResolvedEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CustomStyleResolvedEvent::*)()>(
    &::UnityEngine::UIElements::CustomStyleResolvedEvent::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x339fa58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CustomStyleResolvedEvent*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::ICustomStyle* UnityEngine::UIElements::CustomStyleResolvedEvent::get_customStyle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CustomStyleResolvedEvent*>::get(),
                                                                             "get_customStyle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ICustomStyle*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::CustomStyleResolvedEvent* UnityEngine::UIElements::CustomStyleResolvedEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::CustomStyleResolvedEvent*>());
}
inline void UnityEngine::UIElements::CustomStyleResolvedEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CustomStyleResolvedEvent*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CustomStyleResolvedEvent::CustomStyleResolvedEvent() {}
