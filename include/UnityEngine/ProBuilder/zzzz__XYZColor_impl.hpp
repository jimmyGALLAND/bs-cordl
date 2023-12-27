#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__XYZColor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::XYZColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::XYZColor::*)(float_t, float_t, float_t)>(
    &::UnityEngine::ProBuilder::XYZColor::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b3d64c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::XYZColor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::XYZColor.FromRGB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::XYZColor* (*)(::UnityEngine::Color)>(&::UnityEngine::ProBuilder::XYZColor::FromRGB)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b3d688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::XYZColor*>::get(), "FromRGB", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::XYZColor.FromRGB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::XYZColor* (*)(float_t, float_t, float_t)>(&::UnityEngine::ProBuilder::XYZColor::FromRGB)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b3d778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::XYZColor*>::get(), "FromRGB", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::XYZColor.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ProBuilder::XYZColor::*)()>(&::UnityEngine::ProBuilder::XYZColor::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b3d988;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::XYZColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::XYZColor*>::get(), 3));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::ProBuilder::XYZColor::__get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___x;
}
constexpr float_t const& UnityEngine::ProBuilder::XYZColor::__get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___x;
}
constexpr void UnityEngine::ProBuilder::XYZColor::__set_x(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___x = value;
}
constexpr float_t& UnityEngine::ProBuilder::XYZColor::__get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___y;
}
constexpr float_t const& UnityEngine::ProBuilder::XYZColor::__get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___y;
}
constexpr void UnityEngine::ProBuilder::XYZColor::__set_y(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___y = value;
}
constexpr float_t& UnityEngine::ProBuilder::XYZColor::__get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___z;
}
constexpr float_t const& UnityEngine::ProBuilder::XYZColor::__get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___z;
}
constexpr void UnityEngine::ProBuilder::XYZColor::__set_z(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___z = value;
}
inline ::UnityEngine::ProBuilder::XYZColor* UnityEngine::ProBuilder::XYZColor::New_ctor(float_t x, float_t y, float_t z) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::XYZColor*>(x, y, z));
}
inline void UnityEngine::ProBuilder::XYZColor::_ctor(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::XYZColor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, y, z);
}
inline ::UnityEngine::ProBuilder::XYZColor* UnityEngine::ProBuilder::XYZColor::FromRGB(::UnityEngine::Color col) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::XYZColor*>::get(), "FromRGB", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::XYZColor*, false>(nullptr, ___internal_method, col);
}
inline ::UnityEngine::ProBuilder::XYZColor* UnityEngine::ProBuilder::XYZColor::FromRGB(float_t R, float_t G, float_t B) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::XYZColor*>::get(), "FromRGB", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::XYZColor*, false>(nullptr, ___internal_method, R, G, B);
}
inline ::StringW UnityEngine::ProBuilder::XYZColor::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::XYZColor*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::XYZColor::XYZColor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
