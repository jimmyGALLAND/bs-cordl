#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__ScriptableRuntimeReflectionSystemWrapper_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__IScriptableRuntimeReflectionSystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper.get_implementation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* (
    ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::*)()>(&::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::get_implementation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf45ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>::get(),
                                                 "get_implementation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper.set_implementation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::*)(
    ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*)>(&::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::set_implementation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf45b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>::get(), "set_implementation",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper.Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::*)(ByRef<bool>)>(
    &::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2cf45bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>::get(),
                                                 "Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::*)()>(
    &::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf45a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*&
UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::__get__implementation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementation_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*> const&
UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::__get__implementation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____implementation_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::__set__implementation_k__BackingField(
    ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____implementation_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::get_implementation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>::get(),
                                               "get_implementation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::set_implementation(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>::get(), "set_implementation",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(ByRef<bool> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>::get(),
                                               "Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>());
}
inline void UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::ScriptableRuntimeReflectionSystemWrapper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
