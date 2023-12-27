#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_DetailPrototype_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_DetailPrototype._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_DetailPrototype::*)()>(&::HoudiniEngineUnity::HEU_DetailPrototype::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21ea814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailPrototype*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_DetailPrototype.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_DetailPrototype::*)(::HoudiniEngineUnity::HEU_DetailPrototype*)>(
    &::HoudiniEngineUnity::HEU_DetailPrototype::IsEquivalentTo)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x21ea910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailPrototype*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailPrototype*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailPrototype*>"
constexpr HoudiniEngineUnity::HEU_DetailPrototype::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*>(static_cast<void*>(this));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_DetailPrototype::__get__prototypePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prototypePrefab;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_DetailPrototype::__get__prototypePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prototypePrefab;
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__prototypePrefab(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prototypePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_DetailPrototype::__get__prototypeTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prototypeTexture;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_DetailPrototype::__get__prototypeTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____prototypeTexture;
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__prototypeTexture(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prototypeTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HoudiniEngineUnity::HEU_DetailPrototype::__get__bendFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bendFactor;
}
constexpr float_t const& HoudiniEngineUnity::HEU_DetailPrototype::__get__bendFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bendFactor;
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__bendFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____bendFactor = value;
}
constexpr ::UnityEngine::Color& HoudiniEngineUnity::HEU_DetailPrototype::__get__dryColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____dryColor;
}
constexpr ::UnityEngine::Color const& HoudiniEngineUnity::HEU_DetailPrototype::__get__dryColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____dryColor;
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__dryColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____dryColor = value;
}
constexpr ::UnityEngine::Color& HoudiniEngineUnity::HEU_DetailPrototype::__get__healthyColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____healthyColor;
}
constexpr ::UnityEngine::Color const& HoudiniEngineUnity::HEU_DetailPrototype::__get__healthyColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____healthyColor;
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__healthyColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____healthyColor = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_DetailPrototype::__get__maxHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maxHeight;
}
constexpr float_t const& HoudiniEngineUnity::HEU_DetailPrototype::__get__maxHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maxHeight;
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__maxHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____maxHeight = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_DetailPrototype::__get__maxWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maxWidth;
}
constexpr float_t const& HoudiniEngineUnity::HEU_DetailPrototype::__get__maxWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maxWidth;
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__maxWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____maxWidth = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_DetailPrototype::__get__minHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minHeight;
}
constexpr float_t const& HoudiniEngineUnity::HEU_DetailPrototype::__get__minHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minHeight;
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__minHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____minHeight = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_DetailPrototype::__get__minWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minWidth;
}
constexpr float_t const& HoudiniEngineUnity::HEU_DetailPrototype::__get__minWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minWidth;
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__minWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____minWidth = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_DetailPrototype::__get__noiseSpread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noiseSpread;
}
constexpr float_t const& HoudiniEngineUnity::HEU_DetailPrototype::__get__noiseSpread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noiseSpread;
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__noiseSpread(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____noiseSpread = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_DetailPrototype::__get__renderMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renderMode;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_DetailPrototype::__get__renderMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renderMode;
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__renderMode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____renderMode = value;
}
inline ::HoudiniEngineUnity::HEU_DetailPrototype* HoudiniEngineUnity::HEU_DetailPrototype::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_DetailPrototype*>());
}
inline void HoudiniEngineUnity::HEU_DetailPrototype::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailPrototype*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_DetailPrototype::IsEquivalentTo(::HoudiniEngineUnity::HEU_DetailPrototype* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailPrototype*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailPrototype*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_DetailPrototype::HEU_DetailPrototype() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
