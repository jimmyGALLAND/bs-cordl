#pragma once
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialLightWithIds_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithIds.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithIds::*)()>(&::GlobalNamespace::MaterialLightWithIds::Awake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2111c50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithIds.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithIds::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::MaterialLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2111cd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithIds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithIds::*)()>(&::GlobalNamespace::MaterialLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2111e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::MeshRenderer*& GlobalNamespace::MaterialLightWithIds::__get__meshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& GlobalNamespace::MaterialLightWithIds::__get__meshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____meshRenderer;
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__meshRenderer(::UnityEngine::MeshRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MaterialLightWithIds::__get__setAlphaOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____setAlphaOnly;
}
constexpr bool const& GlobalNamespace::MaterialLightWithIds::__get__setAlphaOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____setAlphaOnly;
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__setAlphaOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____setAlphaOnly = value;
}
constexpr bool& GlobalNamespace::MaterialLightWithIds::__get__alphaIntoColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____alphaIntoColor;
}
constexpr bool const& GlobalNamespace::MaterialLightWithIds::__get__alphaIntoColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____alphaIntoColor;
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__alphaIntoColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____alphaIntoColor = value;
}
constexpr bool& GlobalNamespace::MaterialLightWithIds::__get__setColorOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____setColorOnly;
}
constexpr bool const& GlobalNamespace::MaterialLightWithIds::__get__setColorOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____setColorOnly;
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__setColorOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____setColorOnly = value;
}
constexpr ::StringW& GlobalNamespace::MaterialLightWithIds::__get__colorProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colorProperty;
}
constexpr ::StringW const& GlobalNamespace::MaterialLightWithIds::__get__colorProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colorProperty;
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__colorProperty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorProperty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::MaterialLightWithIds::__get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MaterialLightWithIds::__get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____color = value;
}
constexpr float_t& GlobalNamespace::MaterialLightWithIds::__get__alpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____alpha;
}
constexpr float_t const& GlobalNamespace::MaterialLightWithIds::__get__alpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____alpha;
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__alpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____alpha = value;
}
constexpr int32_t& GlobalNamespace::MaterialLightWithIds::__get__propertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____propertyId;
}
constexpr int32_t const& GlobalNamespace::MaterialLightWithIds::__get__propertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____propertyId;
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__propertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____propertyId = value;
}
inline void GlobalNamespace::MaterialLightWithIds::setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  ::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get>(std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::MaterialLightWithIds::getStaticF__materialPropertyBlock() {
  return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get>();
}
inline void GlobalNamespace::MaterialLightWithIds::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialLightWithIds::ColorWasSet(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(), "ColorWasSet", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::GlobalNamespace::MaterialLightWithIds* GlobalNamespace::MaterialLightWithIds::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MaterialLightWithIds*>());
}
inline void GlobalNamespace::MaterialLightWithIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithIds*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialLightWithIds::MaterialLightWithIds() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
