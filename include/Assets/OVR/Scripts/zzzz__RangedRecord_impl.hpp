#pragma once
#include "Assets/OVR/Scripts/zzzz__Record_impl.hpp"
#include "Assets/OVR/Scripts/zzzz__RangedRecord_def.hpp"
//  Writing Method size for method: ::Assets::OVR::Scripts::RangedRecord._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Assets::OVR::Scripts::RangedRecord::*)(int32_t, ::StringW, ::StringW, float_t, float_t, float_t)>(
    &::Assets::OVR::Scripts::RangedRecord::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x27f84d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::RangedRecord*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& Assets::OVR::Scripts::RangedRecord::__get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
constexpr float_t const& Assets::OVR::Scripts::RangedRecord::__get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
constexpr void Assets::OVR::Scripts::RangedRecord::__set_value(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___value = value;
}
constexpr float_t& Assets::OVR::Scripts::RangedRecord::__get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___min;
}
constexpr float_t const& Assets::OVR::Scripts::RangedRecord::__get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___min;
}
constexpr void Assets::OVR::Scripts::RangedRecord::__set_min(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___min = value;
}
constexpr float_t& Assets::OVR::Scripts::RangedRecord::__get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___max;
}
constexpr float_t const& Assets::OVR::Scripts::RangedRecord::__get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___max;
}
constexpr void Assets::OVR::Scripts::RangedRecord::__set_max(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___max = value;
}
inline ::Assets::OVR::Scripts::RangedRecord* Assets::OVR::Scripts::RangedRecord::New_ctor(int32_t order, ::StringW cat, ::StringW msg, float_t val, float_t minVal, float_t maxVal) {
  return THROW_UNLESS(::il2cpp_utils::New<::Assets::OVR::Scripts::RangedRecord*>(order, cat, msg, val, minVal, maxVal));
}
inline void Assets::OVR::Scripts::RangedRecord::_ctor(int32_t order, ::StringW cat, ::StringW msg, float_t val, float_t minVal, float_t maxVal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::RangedRecord*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, order, cat, msg, val, minVal, maxVal);
}
// Ctor Parameters []
constexpr ::Assets::OVR::Scripts::RangedRecord::RangedRecord() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
