#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidancePathEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__BezierSplineEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::*)(
    ::GlobalNamespace::IAudioTimeSource*, ::GlobalNamespace::PlayerTransforms*, ::GlobalNamespace::BezierSplineEvaluator*, float_t, float_t, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2217174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerTransforms*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierSplineEvaluator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator.GetCurrentPathPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::*)()>(
    &::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::GetCurrentPathPosition)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x22171ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*>::get(),
                                                                               "GetCurrentPathPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__jumpStartZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpStartZ;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__jumpStartZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpStartZ;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__jumpStartZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpStartZ = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__jumpEndZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpEndZ;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__jumpEndZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpEndZ;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__jumpEndZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpEndZ = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__zOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zOffset;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__zOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zOffset;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__zOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zOffset = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__yOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yOffset;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__yOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yOffset;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__yOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yOffset = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__noteJumpSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpSpeed;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__noteJumpSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpSpeed;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__noteJumpSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpSpeed = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__moveToPlayerHeadTParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveToPlayerHeadTParam;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__moveToPlayerHeadTParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveToPlayerHeadTParam;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__moveToPlayerHeadTParam(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveToPlayerHeadTParam = value;
}
constexpr ::GlobalNamespace::BezierSplineEvaluator*& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__pathBezierCurveEvaluator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pathBezierCurveEvaluator;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BezierSplineEvaluator*> const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__pathBezierCurveEvaluator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pathBezierCurveEvaluator;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__pathBezierCurveEvaluator(::GlobalNamespace::BezierSplineEvaluator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pathBezierCurveEvaluator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerTransforms*& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__playerTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__playerTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__playerTransforms(::GlobalNamespace::PlayerTransforms* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator* GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::New_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource,
                                                                                                                              ::GlobalNamespace::PlayerTransforms* playerTransforms,
                                                                                                                              ::GlobalNamespace::BezierSplineEvaluator* pathBezierCurveEvaluator,
                                                                                                                              float_t jumpStartZ, float_t jumpEndZ, float_t yOffset, float_t zOffset,
                                                                                                                              float_t noteJumpSeed, float_t moveToPlayerHeadTParam) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*>(audioTimeSource, playerTransforms, pathBezierCurveEvaluator, jumpStartZ, jumpEndZ, yOffset, zOffset,
                                                                                                   noteJumpSeed, moveToPlayerHeadTParam));
}
inline void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::PlayerTransforms* playerTransforms,
                                                                        ::GlobalNamespace::BezierSplineEvaluator* pathBezierCurveEvaluator, float_t jumpStartZ, float_t jumpEndZ, float_t yOffset,
                                                                        float_t zOffset, float_t noteJumpSeed, float_t moveToPlayerHeadTParam) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerTransforms*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierSplineEvaluator*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioTimeSource, playerTransforms, pathBezierCurveEvaluator, jumpStartZ, jumpEndZ, yOffset, zOffset, noteJumpSeed,
                                                          moveToPlayerHeadTParam);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::GetCurrentPathPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*>::get(),
                                                                             "GetCurrentPathPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::BeatmapObjectAvoidancePathEvaluator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
