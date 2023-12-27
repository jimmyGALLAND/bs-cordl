#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Transform2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Transform2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Transform2D::*)(::UnityEngine::Vector2, float_t, ::UnityEngine::Vector2)>(
    &::UnityEngine::ProBuilder::Transform2D::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2b7c03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Transform2D*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Transform2D.TransformPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ProBuilder::Transform2D::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::ProBuilder::Transform2D::TransformPoint)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b7c08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Transform2D*>::get(), "TransformPoint", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Transform2D.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ProBuilder::Transform2D::*)()>(&::UnityEngine::ProBuilder::Transform2D::ToString)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2b7c0f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Transform2D*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Transform2D*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& UnityEngine::ProBuilder::Transform2D::__get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___position;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::ProBuilder::Transform2D::__get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___position;
}
constexpr void UnityEngine::ProBuilder::Transform2D::__set_position(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___position = value;
}
constexpr float_t& UnityEngine::ProBuilder::Transform2D::__get_rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rotation;
}
constexpr float_t const& UnityEngine::ProBuilder::Transform2D::__get_rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rotation;
}
constexpr void UnityEngine::ProBuilder::Transform2D::__set_rotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___rotation = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::ProBuilder::Transform2D::__get_scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___scale;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::ProBuilder::Transform2D::__get_scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___scale;
}
constexpr void UnityEngine::ProBuilder::Transform2D::__set_scale(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___scale = value;
}
inline ::UnityEngine::ProBuilder::Transform2D* UnityEngine::ProBuilder::Transform2D::New_ctor(::UnityEngine::Vector2 position, float_t rotation, ::UnityEngine::Vector2 scale) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::Transform2D*>(position, rotation, scale));
}
inline void UnityEngine::ProBuilder::Transform2D::_ctor(::UnityEngine::Vector2 position, float_t rotation, ::UnityEngine::Vector2 scale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Transform2D*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, rotation, scale);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::Transform2D::TransformPoint(::UnityEngine::Vector2 p) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Transform2D*>::get(), "TransformPoint", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, p);
}
inline ::StringW UnityEngine::ProBuilder::Transform2D::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Transform2D*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Transform2D::Transform2D() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
