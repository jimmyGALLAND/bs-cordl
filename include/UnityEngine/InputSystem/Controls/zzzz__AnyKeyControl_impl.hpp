#pragma once
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AnyKeyControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AnyKeyControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::AnyKeyControl::*)()>(
    &::UnityEngine::InputSystem::Controls::AnyKeyControl::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2b09994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AnyKeyControl*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AnyKeyControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Controls::AnyKeyControl::*)(::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::Controls::AnyKeyControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b09a8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AnyKeyControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AnyKeyControl*>::get(), 16));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Controls::AnyKeyControl* UnityEngine::InputSystem::Controls::AnyKeyControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Controls::AnyKeyControl*>());
}
inline void UnityEngine::InputSystem::Controls::AnyKeyControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AnyKeyControl*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Controls::AnyKeyControl::ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AnyKeyControl*>::get(), "ReadUnprocessedValueFromState",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, statePtr);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::AnyKeyControl::AnyKeyControl() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
