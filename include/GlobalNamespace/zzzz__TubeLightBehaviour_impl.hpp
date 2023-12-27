#pragma once
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__TubeLightBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "GlobalNamespace/zzzz__TubeLightBehaviour_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__TubeLightBehaviour__ParameterType::__TubeLightBehaviour__ParameterType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TubeLightBehaviour__ParameterType::__TubeLightBehaviour__ParameterType() {}
constexpr ::GlobalNamespace::__TubeLightBehaviour__ParameterType GlobalNamespace::__TubeLightBehaviour__ParameterType::Values{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__TubeLightBehaviour__ParameterType GlobalNamespace::__TubeLightBehaviour__ParameterType::References{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::TubeLightBehaviour.ProcessFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightBehaviour::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::GlobalNamespace::TubeLightBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x2317dc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightBehaviour.OnPlayableDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::GlobalNamespace::TubeLightBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x23181c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightBehaviour._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightBehaviour::*)()>(&::GlobalNamespace::TubeLightBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2318294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::TubeLightBehaviour::__get__noPredefinedStartValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noPredefinedStartValue;
}
constexpr bool const& GlobalNamespace::TubeLightBehaviour::__get__noPredefinedStartValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noPredefinedStartValue;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set__noPredefinedStartValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____noPredefinedStartValue = value;
}
constexpr ::GlobalNamespace::ColorSO*& GlobalNamespace::TubeLightBehaviour::__get_startColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___startColor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& GlobalNamespace::TubeLightBehaviour::__get_startColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___startColor;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set_startColor(::GlobalNamespace::ColorSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorSO*& GlobalNamespace::TubeLightBehaviour::__get_endColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___endColor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> const& GlobalNamespace::TubeLightBehaviour::__get_endColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___endColor;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set_endColor(::GlobalNamespace::ColorSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___endColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::TubeLightBehaviour::__get_blend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___blend;
}
constexpr float_t const& GlobalNamespace::TubeLightBehaviour::__get_blend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___blend;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set_blend(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___blend = value;
}
constexpr bool& GlobalNamespace::TubeLightBehaviour::__get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::TubeLightBehaviour::__get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____initialized = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::TubeLightBehaviour::__get__originalColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____originalColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::TubeLightBehaviour::__get__originalColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____originalColor;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set__originalColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____originalColor = value;
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>& GlobalNamespace::TubeLightBehaviour::__get__tubeLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tubeLights;
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const& GlobalNamespace::TubeLightBehaviour::__get__tubeLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tubeLights;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set__tubeLights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tubeLights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*, ::Array<::GlobalNamespace::DirectionalLight*>*>& GlobalNamespace::TubeLightBehaviour::__get__directionalLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____directionalLights;
}
constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*, ::Array<::GlobalNamespace::DirectionalLight*>*> const& GlobalNamespace::TubeLightBehaviour::__get__directionalLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____directionalLights;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set__directionalLights(::ArrayW<::GlobalNamespace::DirectionalLight*, ::Array<::GlobalNamespace::DirectionalLight*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directionalLights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::TubeLightBehaviour::__get_started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___started;
}
constexpr bool const& GlobalNamespace::TubeLightBehaviour::__get_started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___started;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set_started(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___started = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::TubeLightBehaviour::__get__firstFrameColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____firstFrameColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::TubeLightBehaviour::__get__firstFrameColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____firstFrameColor;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__set__firstFrameColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____firstFrameColor = value;
}
inline void GlobalNamespace::TubeLightBehaviour::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(), "ProcessFrame", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void GlobalNamespace::TubeLightBehaviour::OnPlayableDestroy(::UnityEngine::Playables::Playable playable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(), "OnPlayableDestroy", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable);
}
inline ::GlobalNamespace::TubeLightBehaviour* GlobalNamespace::TubeLightBehaviour::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TubeLightBehaviour*>());
}
inline void GlobalNamespace::TubeLightBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeLightBehaviour::TubeLightBehaviour() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
