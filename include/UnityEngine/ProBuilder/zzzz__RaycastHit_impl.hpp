#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::RaycastHit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::RaycastHit::*)(float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t)>(
    &::UnityEngine::ProBuilder::RaycastHit::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b639d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::RaycastHit*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::ProBuilder::RaycastHit::__get_distance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___distance;
}
constexpr float_t const& UnityEngine::ProBuilder::RaycastHit::__get_distance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___distance;
}
constexpr void UnityEngine::ProBuilder::RaycastHit::__set_distance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___distance = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::ProBuilder::RaycastHit::__get_point() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___point;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::ProBuilder::RaycastHit::__get_point() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___point;
}
constexpr void UnityEngine::ProBuilder::RaycastHit::__set_point(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___point = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::ProBuilder::RaycastHit::__get_normal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___normal;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::ProBuilder::RaycastHit::__get_normal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___normal;
}
constexpr void UnityEngine::ProBuilder::RaycastHit::__set_normal(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___normal = value;
}
constexpr int32_t& UnityEngine::ProBuilder::RaycastHit::__get_face() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___face;
}
constexpr int32_t const& UnityEngine::ProBuilder::RaycastHit::__get_face() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___face;
}
constexpr void UnityEngine::ProBuilder::RaycastHit::__set_face(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___face = value;
}
inline ::UnityEngine::ProBuilder::RaycastHit* UnityEngine::ProBuilder::RaycastHit::New_ctor(float_t distance, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal, int32_t face) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::RaycastHit*>(distance, point, normal, face));
}
inline void UnityEngine::ProBuilder::RaycastHit::_ctor(float_t distance, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal, int32_t face) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::RaycastHit*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, distance, point, normal, face);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::RaycastHit::RaycastHit() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
