#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__VRIKCalibrator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/FinalIK/zzzz__VRIK_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "RootMotion/FinalIK/zzzz__VRIKCalibrator_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverVR_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__VRIKCalibrator__Settings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__VRIKCalibrator__Settings::*)()>(
    &::RootMotion::FinalIK::__VRIKCalibrator__Settings::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x129d3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_scaleMlp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___scaleMlp;
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_scaleMlp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___scaleMlp;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_scaleMlp(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___scaleMlp = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_headTrackerForward() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___headTrackerForward;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_headTrackerForward() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___headTrackerForward;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_headTrackerForward(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___headTrackerForward = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_headTrackerUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___headTrackerUp;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_headTrackerUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___headTrackerUp;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_headTrackerUp(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___headTrackerUp = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_bodyTrackerForward() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bodyTrackerForward;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_bodyTrackerForward() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bodyTrackerForward;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_bodyTrackerForward(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___bodyTrackerForward = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_bodyTrackerUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bodyTrackerUp;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_bodyTrackerUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bodyTrackerUp;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_bodyTrackerUp(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___bodyTrackerUp = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_handTrackerForward() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___handTrackerForward;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_handTrackerForward() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___handTrackerForward;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_handTrackerForward(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___handTrackerForward = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_handTrackerUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___handTrackerUp;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_handTrackerUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___handTrackerUp;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_handTrackerUp(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___handTrackerUp = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footTrackerForward() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___footTrackerForward;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footTrackerForward() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___footTrackerForward;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_footTrackerForward(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___footTrackerForward = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footTrackerUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___footTrackerUp;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footTrackerUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___footTrackerUp;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_footTrackerUp(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___footTrackerUp = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_headOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___headOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_headOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___headOffset;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_headOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___headOffset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_handOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___handOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_handOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___handOffset;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_handOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___handOffset = value;
}
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footForwardOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___footForwardOffset;
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footForwardOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___footForwardOffset;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_footForwardOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___footForwardOffset = value;
}
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footInwardOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___footInwardOffset;
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footInwardOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___footInwardOffset;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_footInwardOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___footInwardOffset = value;
}
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footHeadingOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___footHeadingOffset;
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_footHeadingOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___footHeadingOffset;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_footHeadingOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___footHeadingOffset = value;
}
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_pelvisPositionWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pelvisPositionWeight;
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_pelvisPositionWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pelvisPositionWeight;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_pelvisPositionWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___pelvisPositionWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_pelvisRotationWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pelvisRotationWeight;
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__Settings::__get_pelvisRotationWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pelvisRotationWeight;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__Settings::__set_pelvisRotationWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___pelvisRotationWeight = value;
}
inline ::RootMotion::FinalIK::__VRIKCalibrator__Settings* RootMotion::FinalIK::__VRIKCalibrator__Settings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>());
}
inline void RootMotion::FinalIK::__VRIKCalibrator__Settings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__VRIKCalibrator__Settings::__VRIKCalibrator__Settings() {}
//  Writing Method size for method: ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::*)(::UnityEngine::Transform*)>(
    &::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x129c650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target.SetTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::*)(::UnityEngine::Transform*)>(
    &::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::SetTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x129cff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>::get(), "SetTo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__get_used() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___used;
}
constexpr bool const& GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__get_used() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___used;
}
constexpr void GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__set_used(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___used = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__get_localPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___localPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__get_localPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___localPosition;
}
constexpr void GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__set_localPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___localPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__get_localRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___localRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__get_localRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___localRotation;
}
constexpr void GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__set_localRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___localRotation = value;
}
inline ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::New_ctor(::UnityEngine::Transform* t) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>(t));
}
inline void GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::_ctor(::UnityEngine::Transform* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline void GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::SetTo(::UnityEngine::Transform* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*>::get(), "SetTo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target::__VRIKCalibrator__CalibrationData__Target() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::*)()>(
    &::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x129bdd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___scale;
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___scale;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___scale = value;
}
constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___head;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> const& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___head;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_head(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___head)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_leftHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___leftHand;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> const& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_leftHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___leftHand;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_leftHand(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_rightHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rightHand;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> const& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_rightHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rightHand;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_rightHand(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_pelvis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pelvis;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> const& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_pelvis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pelvis;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_pelvis(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pelvis)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_leftFoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___leftFoot;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> const& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_leftFoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___leftFoot;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_leftFoot(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftFoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_rightFoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rightFoot;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> const& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_rightFoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rightFoot;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_rightFoot(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightFoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_leftLegGoal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___leftLegGoal;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> const& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_leftLegGoal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___leftLegGoal;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_leftLegGoal(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftLegGoal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_rightLegGoal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rightLegGoal;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target*> const& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_rightLegGoal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rightLegGoal;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_rightLegGoal(::GlobalNamespace::__VRIKCalibrator__CalibrationData__Target* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightLegGoal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_pelvisTargetRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pelvisTargetRight;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_pelvisTargetRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pelvisTargetRight;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_pelvisTargetRight(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___pelvisTargetRight = value;
}
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_pelvisPositionWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pelvisPositionWeight;
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_pelvisPositionWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pelvisPositionWeight;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_pelvisPositionWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___pelvisPositionWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_pelvisRotationWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pelvisRotationWeight;
}
constexpr float_t const& RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__get_pelvisRotationWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pelvisRotationWeight;
}
constexpr void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__set_pelvisRotationWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___pelvisRotationWeight = value;
}
inline ::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData* RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*>());
}
inline void RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData::__VRIKCalibrator__CalibrationData() {}
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKCalibrator.RecalibrateScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::RootMotion::FinalIK::VRIK*, ::RootMotion::FinalIK::__VRIKCalibrator__Settings*)>(
    &::RootMotion::FinalIK::VRIKCalibrator::RecalibrateScale)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x129aaa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(), "RecalibrateScale", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKCalibrator.Calibrate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData* (*)(::RootMotion::FinalIK::VRIK*, ::RootMotion::FinalIK::__VRIKCalibrator__Settings*, ::UnityEngine::Transform*,
                                                                              ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*,
                                                                              ::UnityEngine::Transform*)>(&::RootMotion::FinalIK::VRIKCalibrator::Calibrate)> {
  constexpr static std::size_t size = 0x123c;
  constexpr static std::size_t addrs = 0x129ab94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(), "Calibrate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKCalibrator.CalibrateLeg
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::RootMotion::FinalIK::__VRIKCalibrator__Settings*, ::UnityEngine::Transform*,
                                                                                           ::RootMotion::FinalIK::__IKSolverVR__Leg*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, bool)>(
    &::RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x129bdd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(), "CalibrateLeg", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKCalibrator.Calibrate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::RootMotion::FinalIK::VRIK*, ::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*,
                         ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::RootMotion::FinalIK::VRIKCalibrator::Calibrate)> {
  constexpr static std::size_t size = 0x8f4;
  constexpr static std::size_t addrs = 0x129c704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(), "Calibrate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKCalibrator.CalibrateLeg
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*, ::UnityEngine::Transform*,
                                                                                           ::RootMotion::FinalIK::__IKSolverVR__Leg*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, bool)>(
    &::RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x129d054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(), "CalibrateLeg", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void RootMotion::FinalIK::VRIKCalibrator::RecalibrateScale(::RootMotion::FinalIK::VRIK* ik, ::RootMotion::FinalIK::__VRIKCalibrator__Settings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(), "RecalibrateScale", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ik, settings);
}
/// @param bodyTracker: ::UnityEngine::Transform* (default: nullptr)
/// @param leftHandTracker: ::UnityEngine::Transform* (default: nullptr)
/// @param rightHandTracker: ::UnityEngine::Transform* (default: nullptr)
/// @param leftFootTracker: ::UnityEngine::Transform* (default: nullptr)
/// @param rightFootTracker: ::UnityEngine::Transform* (default: nullptr)
inline ::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData* RootMotion::FinalIK::VRIKCalibrator::Calibrate(::RootMotion::FinalIK::VRIK* ik,
                                                                                                                ::RootMotion::FinalIK::__VRIKCalibrator__Settings* settings,
                                                                                                                ::UnityEngine::Transform* headTracker, ::UnityEngine::Transform* bodyTracker,
                                                                                                                ::UnityEngine::Transform* leftHandTracker, ::UnityEngine::Transform* rightHandTracker,
                                                                                                                ::UnityEngine::Transform* leftFootTracker, ::UnityEngine::Transform* rightFootTracker) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(), "Calibrate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*, false>(nullptr, ___internal_method, ik, settings, headTracker, bodyTracker, leftHandTracker,
                                                                                                               rightHandTracker, leftFootTracker, rightFootTracker);
}
inline void RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg(::RootMotion::FinalIK::__VRIKCalibrator__Settings* settings, ::UnityEngine::Transform* tracker,
                                                              ::RootMotion::FinalIK::__IKSolverVR__Leg* leg, ::UnityEngine::Transform* lastBone, ::UnityEngine::Vector3 rootForward, bool isLeft) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(), "CalibrateLeg", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__Settings*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings, tracker, leg, lastBone, rootForward, isLeft);
}
/// @param bodyTracker: ::UnityEngine::Transform* (default: nullptr)
/// @param leftHandTracker: ::UnityEngine::Transform* (default: nullptr)
/// @param rightHandTracker: ::UnityEngine::Transform* (default: nullptr)
/// @param leftFootTracker: ::UnityEngine::Transform* (default: nullptr)
/// @param rightFootTracker: ::UnityEngine::Transform* (default: nullptr)
inline void RootMotion::FinalIK::VRIKCalibrator::Calibrate(::RootMotion::FinalIK::VRIK* ik, ::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData* data, ::UnityEngine::Transform* headTracker,
                                                           ::UnityEngine::Transform* bodyTracker, ::UnityEngine::Transform* leftHandTracker, ::UnityEngine::Transform* rightHandTracker,
                                                           ::UnityEngine::Transform* leftFootTracker, ::UnityEngine::Transform* rightFootTracker) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(), "Calibrate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ik, data, headTracker, bodyTracker, leftHandTracker, rightHandTracker, leftFootTracker, rightFootTracker);
}
inline void RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData* data, ::UnityEngine::Transform* tracker,
                                                              ::RootMotion::FinalIK::__IKSolverVR__Leg* leg, ::UnityEngine::Transform* lastBone, ::UnityEngine::Vector3 rootForward, bool isLeft) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator*>::get(), "CalibrateLeg", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__IKSolverVR__Leg*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, tracker, leg, lastBone, rootForward, isLeft);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::VRIKCalibrator::VRIKCalibrator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
