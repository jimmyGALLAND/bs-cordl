#pragma once
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_impl.hpp"
#include "GlobalNamespace/zzzz__OpenXRRuntimeBasedActionBindingComposite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite.ReadValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::*)(
    ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::ReadValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ff28c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::*)(
    ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x20ff294;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20ff308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>::get(), "Init",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::*)()>(
    &::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x20ff30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::__get_oculusRuntime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oculusRuntime;
}
constexpr int32_t const& GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::__get_oculusRuntime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oculusRuntime;
}
constexpr void GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::__set_oculusRuntime(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oculusRuntime = value;
}
constexpr int32_t& GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::__get_otherRuntimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherRuntimes;
}
constexpr int32_t const& GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::__get_otherRuntimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherRuntimes;
}
constexpr void GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::__set_otherRuntimes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___otherRuntimes = value;
}
inline float_t GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>::get(), "ReadValue", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, context);
}
inline float_t GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::EvaluateMagnitude(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>::get(), "EvaluateMagnitude", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, context);
}
inline void GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::Init() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>::get(), "Init",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite* GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>());
}
inline void GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OpenXRRuntimeBasedActionBindingComposite::OpenXRRuntimeBasedActionBindingComposite() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
