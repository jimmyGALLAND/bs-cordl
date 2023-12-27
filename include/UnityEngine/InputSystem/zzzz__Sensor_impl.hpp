#pragma once
#include "UnityEngine/InputSystem/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Sensor.get_samplingFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Sensor::*)()>(&::UnityEngine::InputSystem::Sensor::get_samplingFrequency)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2aa7a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Sensor*>::get(),
                                                                               "get_samplingFrequency", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Sensor.set_samplingFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Sensor::*)(float_t)>(&::UnityEngine::InputSystem::Sensor::set_samplingFrequency)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2aa7b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Sensor*>::get(), "set_samplingFrequency",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Sensor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Sensor::*)()>(&::UnityEngine::InputSystem::Sensor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa7bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Sensor*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline float_t UnityEngine::InputSystem::Sensor::get_samplingFrequency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Sensor*>::get(),
                                                                             "get_samplingFrequency", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Sensor::set_samplingFrequency(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Sensor*>::get(), "set_samplingFrequency", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Sensor* UnityEngine::InputSystem::Sensor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Sensor*>());
}
inline void UnityEngine::InputSystem::Sensor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Sensor*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Sensor::Sensor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
