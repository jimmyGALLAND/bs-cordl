#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidanceTiltEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__BezierSplineEvaluator_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::*)(
    ::GlobalNamespace::IAudioTimeSource*, ::GlobalNamespace::BezierSplineEvaluator*, ::UnityEngine::Vector2)>(&::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2217308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierSplineEvaluator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator.GetTiltAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::*)()>(
    &::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::GetTiltAngle)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x22173e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*>::get(),
                                                                               "GetTiltAngle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__gravity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gravity;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__gravity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gravity;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__set__gravity(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gravity = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__normalizedGravity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizedGravity;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__normalizedGravity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizedGravity;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__set__normalizedGravity(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalizedGravity = value;
}
constexpr ::GlobalNamespace::BezierSplineEvaluator*& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__bezierSplineEvaluator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bezierSplineEvaluator;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BezierSplineEvaluator*> const& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__bezierSplineEvaluator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bezierSplineEvaluator;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__set__bezierSplineEvaluator(::GlobalNamespace::BezierSplineEvaluator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bezierSplineEvaluator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__currentAcceleration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentAcceleration;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__currentAcceleration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentAcceleration;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__set__currentAcceleration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentAcceleration = value;
}
inline ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator* GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::New_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource,
                                                                                                                              ::GlobalNamespace::BezierSplineEvaluator* bezierSplineEvaluator,
                                                                                                                              ::UnityEngine::Vector2 gravity) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*>(audioTimeSource, bezierSplineEvaluator, gravity));
}
inline void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BezierSplineEvaluator* bezierSplineEvaluator,
                                                                        ::UnityEngine::Vector2 gravity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierSplineEvaluator*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioTimeSource, bezierSplineEvaluator, gravity);
}
inline float_t GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::GetTiltAngle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*>::get(),
                                                                             "GetTiltAngle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::BeatmapObjectAvoidanceTiltEvaluator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
