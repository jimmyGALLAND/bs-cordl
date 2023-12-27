#pragma once
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingTextSpawner_def.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__FlyingTextEffect_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__IFlyingObjectEffectDidFinishEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlyingTextSpawner.SpawnText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingTextSpawner::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::StringW)>(&::GlobalNamespace::FlyingTextSpawner::SpawnText)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x23a1f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(), "SpawnText", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingTextSpawner.HandleFlyingObjectEffectDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingTextSpawner::*)(::GlobalNamespace::FlyingObjectEffect*)>(
    &::GlobalNamespace::FlyingTextSpawner::HandleFlyingObjectEffectDidFinish)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23a2110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(), "HandleFlyingObjectEffectDidFinish", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingObjectEffect*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingTextSpawner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingTextSpawner::*)()>(&::GlobalNamespace::FlyingTextSpawner::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23a222c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
constexpr GlobalNamespace::FlyingTextSpawner::operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept {
  return static_cast<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(static_cast<void*>(this));
}
constexpr float_t& GlobalNamespace::FlyingTextSpawner::__get__duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____duration;
}
constexpr float_t const& GlobalNamespace::FlyingTextSpawner::__get__duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____duration;
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____duration = value;
}
constexpr float_t& GlobalNamespace::FlyingTextSpawner::__get__xSpread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____xSpread;
}
constexpr float_t const& GlobalNamespace::FlyingTextSpawner::__get__xSpread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____xSpread;
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__xSpread(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____xSpread = value;
}
constexpr float_t& GlobalNamespace::FlyingTextSpawner::__get__targetYPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____targetYPos;
}
constexpr float_t const& GlobalNamespace::FlyingTextSpawner::__get__targetYPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____targetYPos;
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__targetYPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____targetYPos = value;
}
constexpr float_t& GlobalNamespace::FlyingTextSpawner::__get__targetZPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____targetZPos;
}
constexpr float_t const& GlobalNamespace::FlyingTextSpawner::__get__targetZPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____targetZPos;
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__targetZPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____targetZPos = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::FlyingTextSpawner::__get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::FlyingTextSpawner::__get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____color = value;
}
constexpr float_t& GlobalNamespace::FlyingTextSpawner::__get__fontSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____fontSize;
}
constexpr float_t const& GlobalNamespace::FlyingTextSpawner::__get__fontSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____fontSize;
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__fontSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____fontSize = value;
}
constexpr bool& GlobalNamespace::FlyingTextSpawner::__get__shake() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____shake;
}
constexpr bool const& GlobalNamespace::FlyingTextSpawner::__get__shake() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____shake;
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__shake(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____shake = value;
}
constexpr ::GlobalNamespace::__FlyingTextEffect__Pool*& GlobalNamespace::FlyingTextSpawner::__get__flyingTextEffectPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____flyingTextEffectPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingTextEffect__Pool*> const& GlobalNamespace::FlyingTextSpawner::__get__flyingTextEffectPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____flyingTextEffectPool;
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__flyingTextEffectPool(::GlobalNamespace::__FlyingTextEffect__Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____flyingTextEffectPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FlyingTextSpawner::SpawnText(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rotation, ::UnityEngine::Quaternion inverseRotation, ::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(), "SpawnText", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, rotation, inverseRotation, text);
}
inline void GlobalNamespace::FlyingTextSpawner::HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(), "HandleFlyingObjectEffectDidFinish", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingObjectEffect*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flyingObjectEffect);
}
inline ::GlobalNamespace::FlyingTextSpawner* GlobalNamespace::FlyingTextSpawner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FlyingTextSpawner*>());
}
inline void GlobalNamespace::FlyingTextSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingTextSpawner*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlyingTextSpawner::FlyingTextSpawner() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
