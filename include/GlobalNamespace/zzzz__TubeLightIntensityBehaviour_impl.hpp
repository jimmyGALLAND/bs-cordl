#pragma once
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TubeLightIntensityBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TubeLightIntensityBehaviour.ProcessFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightIntensityBehaviour::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::GlobalNamespace::TubeLightIntensityBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x2318354;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightIntensityBehaviour.EnableObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightIntensityBehaviour::*)(bool)>(
    &::GlobalNamespace::TubeLightIntensityBehaviour::EnableObjects)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x23186c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(), "EnableObjects",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightIntensityBehaviour.OnPlayableDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightIntensityBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::GlobalNamespace::TubeLightIntensityBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2318798;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightIntensityBehaviour._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightIntensityBehaviour::*)()>(&::GlobalNamespace::TubeLightIntensityBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2318864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::TubeLightIntensityBehaviour::__get__noPredefinedStartValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noPredefinedStartValue;
}
constexpr bool const& GlobalNamespace::TubeLightIntensityBehaviour::__get__noPredefinedStartValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noPredefinedStartValue;
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__noPredefinedStartValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____noPredefinedStartValue = value;
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__startLightIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____startLightIntensity;
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__startLightIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____startLightIntensity;
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__startLightIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____startLightIntensity = value;
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__startLaserIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____startLaserIntensity;
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__startLaserIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____startLaserIntensity;
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__startLaserIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____startLaserIntensity = value;
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__endLightIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____endLightIntensity;
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__endLightIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____endLightIntensity;
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__endLightIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____endLightIntensity = value;
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__endLaserIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____endLaserIntensity;
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__endLaserIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____endLaserIntensity;
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__endLaserIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____endLaserIntensity = value;
}
constexpr bool& GlobalNamespace::TubeLightIntensityBehaviour::__get__disableWhenFinished() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____disableWhenFinished;
}
constexpr bool const& GlobalNamespace::TubeLightIntensityBehaviour::__get__disableWhenFinished() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____disableWhenFinished;
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__disableWhenFinished(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____disableWhenFinished = value;
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__blend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____blend;
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__blend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____blend;
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__blend(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____blend = value;
}
constexpr bool& GlobalNamespace::TubeLightIntensityBehaviour::__get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::TubeLightIntensityBehaviour::__get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____initialized = value;
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__originalLightIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____originalLightIntensity;
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__originalLightIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____originalLightIntensity;
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__originalLightIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____originalLightIntensity = value;
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__originalLaserIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____originalLaserIntensity;
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__originalLaserIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____originalLaserIntensity;
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__originalLaserIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____originalLaserIntensity = value;
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>& GlobalNamespace::TubeLightIntensityBehaviour::__get__tubeLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tubeLights;
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const& GlobalNamespace::TubeLightIntensityBehaviour::__get__tubeLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tubeLights;
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__tubeLights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tubeLights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*, ::Array<::GlobalNamespace::DirectionalLight*>*>& GlobalNamespace::TubeLightIntensityBehaviour::__get__directionalLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____directionalLights;
}
constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*, ::Array<::GlobalNamespace::DirectionalLight*>*> const& GlobalNamespace::TubeLightIntensityBehaviour::__get__directionalLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____directionalLights;
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__directionalLights(::ArrayW<::GlobalNamespace::DirectionalLight*, ::Array<::GlobalNamespace::DirectionalLight*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directionalLights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::TubeLightIntensityBehaviour::__get__started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____started;
}
constexpr bool const& GlobalNamespace::TubeLightIntensityBehaviour::__get__started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____started;
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__started(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____started = value;
}
constexpr bool& GlobalNamespace::TubeLightIntensityBehaviour::__get__finished() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____finished;
}
constexpr bool const& GlobalNamespace::TubeLightIntensityBehaviour::__get__finished() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____finished;
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__finished(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____finished = value;
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__firstFrameLightIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____firstFrameLightIntensity;
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__firstFrameLightIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____firstFrameLightIntensity;
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__firstFrameLightIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____firstFrameLightIntensity = value;
}
constexpr float_t& GlobalNamespace::TubeLightIntensityBehaviour::__get__firstFrameLaserIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____firstFrameLaserIntensity;
}
constexpr float_t const& GlobalNamespace::TubeLightIntensityBehaviour::__get__firstFrameLaserIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____firstFrameLaserIntensity;
}
constexpr void GlobalNamespace::TubeLightIntensityBehaviour::__set__firstFrameLaserIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____firstFrameLaserIntensity = value;
}
inline void GlobalNamespace::TubeLightIntensityBehaviour::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(), "ProcessFrame", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void GlobalNamespace::TubeLightIntensityBehaviour::EnableObjects(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(), "EnableObjects",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void GlobalNamespace::TubeLightIntensityBehaviour::OnPlayableDestroy(::UnityEngine::Playables::Playable playable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(), "OnPlayableDestroy", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable);
}
inline ::GlobalNamespace::TubeLightIntensityBehaviour* GlobalNamespace::TubeLightIntensityBehaviour::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TubeLightIntensityBehaviour*>());
}
inline void GlobalNamespace::TubeLightIntensityBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightIntensityBehaviour*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeLightIntensityBehaviour::TubeLightIntensityBehaviour() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
