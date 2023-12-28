#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__RangeAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::RangeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RangeAttribute::*)(float_t, float_t)>(&::UnityEngine::RangeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ccc1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RangeAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::RangeAttribute::__get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr float_t const& UnityEngine::RangeAttribute::__get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::RangeAttribute::__set_min(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
constexpr float_t& UnityEngine::RangeAttribute::__get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr float_t const& UnityEngine::RangeAttribute::__get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::RangeAttribute::__set_max(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
inline ::UnityEngine::RangeAttribute* UnityEngine::RangeAttribute::New_ctor(float_t min, float_t max) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::RangeAttribute*>(min, max));
}
inline void UnityEngine::RangeAttribute::_ctor(float_t min, float_t max) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RangeAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, min, max);
}
// Ctor Parameters []
constexpr ::UnityEngine::RangeAttribute::RangeAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
