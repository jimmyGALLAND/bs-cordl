#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DirectionalLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DirectionalLightWithId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::DirectionalLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x210f098;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithId*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithId*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DirectionalLightWithId::*)()>(&::GlobalNamespace::DirectionalLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x210f0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithId*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DirectionalLight*& GlobalNamespace::DirectionalLightWithId::__get__light() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____light;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DirectionalLight*> const& GlobalNamespace::DirectionalLightWithId::__get__light() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____light;
}
constexpr void GlobalNamespace::DirectionalLightWithId::__set__light(::GlobalNamespace::DirectionalLight* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____light)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DirectionalLightWithId::__get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::DirectionalLightWithId::__get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::DirectionalLightWithId::__set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::DirectionalLightWithId::__get__minIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minIntensity;
}
constexpr float_t const& GlobalNamespace::DirectionalLightWithId::__get__minIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minIntensity;
}
constexpr void GlobalNamespace::DirectionalLightWithId::__set__minIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____minIntensity = value;
}
inline void GlobalNamespace::DirectionalLightWithId::ColorWasSet(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithId*>::get(), "ColorWasSet", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::GlobalNamespace::DirectionalLightWithId* GlobalNamespace::DirectionalLightWithId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DirectionalLightWithId*>());
}
inline void GlobalNamespace::DirectionalLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithId*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DirectionalLightWithId::DirectionalLightWithId() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
