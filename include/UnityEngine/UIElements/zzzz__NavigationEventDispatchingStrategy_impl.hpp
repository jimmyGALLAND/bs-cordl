#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventDispatchingStrategy_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventDispatchingStrategy_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationEventDispatchingStrategy.CanDispatchEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::NavigationEventDispatchingStrategy::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::NavigationEventDispatchingStrategy::CanDispatchEvent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2e4ea28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationEventDispatchingStrategy*>::get(), "CanDispatchEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationEventDispatchingStrategy.DispatchEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationEventDispatchingStrategy::*)(
    ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::NavigationEventDispatchingStrategy::DispatchEvent)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2e4ea7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationEventDispatchingStrategy*>::get(), "DispatchEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigationEventDispatchingStrategy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::NavigationEventDispatchingStrategy::*)()>(
    &::UnityEngine::UIElements::NavigationEventDispatchingStrategy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e4ebc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationEventDispatchingStrategy*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IEventDispatchingStrategy"
constexpr UnityEngine::UIElements::NavigationEventDispatchingStrategy::operator ::UnityEngine::UIElements::IEventDispatchingStrategy*() noexcept {
  return static_cast<::UnityEngine::UIElements::IEventDispatchingStrategy*>(static_cast<void*>(this));
}
inline bool UnityEngine::UIElements::NavigationEventDispatchingStrategy::CanDispatchEvent(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationEventDispatchingStrategy*>::get(), "CanDispatchEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::NavigationEventDispatchingStrategy::DispatchEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationEventDispatchingStrategy*>::get(), "DispatchEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, panel);
}
inline ::UnityEngine::UIElements::NavigationEventDispatchingStrategy* UnityEngine::UIElements::NavigationEventDispatchingStrategy::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::NavigationEventDispatchingStrategy*>());
}
inline void UnityEngine::UIElements::NavigationEventDispatchingStrategy::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::NavigationEventDispatchingStrategy*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::NavigationEventDispatchingStrategy::NavigationEventDispatchingStrategy() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
