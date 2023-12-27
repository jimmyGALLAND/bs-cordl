#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__LightTranslationGroupEffect_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationGroupEffect_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallback_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LightTranslationGroupEffect__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightTranslationGroupEffect__InitData::*)(
    int32_t, int32_t, bool, bool, bool, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2,
    ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::GlobalNamespace::__LightTranslationGroupEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23ab8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightTranslationGroupEffect__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
            ::std::vector<Il2CppType const*>{
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___groupId;
}
constexpr int32_t const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___groupId;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___groupId = value;
}
constexpr int32_t& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___elementId;
}
constexpr int32_t const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___elementId;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___elementId = value;
}
constexpr bool& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_xMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___xMirrored;
}
constexpr bool const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_xMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___xMirrored;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_xMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___xMirrored = value;
}
constexpr bool& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_yMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___yMirrored;
}
constexpr bool const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_yMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___yMirrored;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_yMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___yMirrored = value;
}
constexpr bool& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_zMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___zMirrored;
}
constexpr bool const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_zMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___zMirrored;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_zMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___zMirrored = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_xTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___xTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_xTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___xTransform;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_xTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_yTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___yTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_yTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___yTransform;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_yTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___yTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_zTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___zTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_zTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___zTransform;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_zTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___zTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_xTranslationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___xTranslationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_xTranslationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___xTranslationLimits;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_xTranslationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___xTranslationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_xDistributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___xDistributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_xDistributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___xDistributionLimits;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_xDistributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___xDistributionLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_yTranslationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___yTranslationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_yTranslationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___yTranslationLimits;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_yTranslationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___yTranslationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_yDistributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___yDistributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_yDistributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___yDistributionLimits;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_yDistributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___yDistributionLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_zTranslationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___zTranslationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_zTranslationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___zTranslationLimits;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_zTranslationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___zTranslationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_zDistributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___zDistributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_zDistributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___zDistributionLimits;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_zDistributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___zDistributionLimits = value;
}
inline ::GlobalNamespace::__LightTranslationGroupEffect__InitData*
GlobalNamespace::__LightTranslationGroupEffect__InitData::New_ctor(int32_t groupId, int32_t elementId, bool xMirrored, bool yMirrored, bool zMirrored, ::UnityEngine::Transform* xTransform,
                                                                   ::UnityEngine::Transform* yTransform, ::UnityEngine::Transform* zTransform, ::UnityEngine::Vector2 xTranslationLimits,
                                                                   ::UnityEngine::Vector2 xDistributionLimits, ::UnityEngine::Vector2 yTranslationLimits, ::UnityEngine::Vector2 yDistributionLimits,
                                                                   ::UnityEngine::Vector2 zTranslationLimits, ::UnityEngine::Vector2 zDistributionLimits) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LightTranslationGroupEffect__InitData*>(groupId, elementId, xMirrored, yMirrored, zMirrored, xTransform, yTransform, zTransform,
                                                                                                       xTranslationLimits, xDistributionLimits, yTranslationLimits, yDistributionLimits,
                                                                                                       zTranslationLimits, zDistributionLimits));
}
inline void GlobalNamespace::__LightTranslationGroupEffect__InitData::_ctor(int32_t groupId, int32_t elementId, bool xMirrored, bool yMirrored, bool zMirrored, ::UnityEngine::Transform* xTransform,
                                                                            ::UnityEngine::Transform* yTransform, ::UnityEngine::Transform* zTransform, ::UnityEngine::Vector2 xTranslationLimits,
                                                                            ::UnityEngine::Vector2 xDistributionLimits, ::UnityEngine::Vector2 yTranslationLimits,
                                                                            ::UnityEngine::Vector2 yDistributionLimits, ::UnityEngine::Vector2 zTranslationLimits,
                                                                            ::UnityEngine::Vector2 zDistributionLimits) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightTranslationGroupEffect__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
          ::std::vector<Il2CppType const*>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, xMirrored, yMirrored, zMirrored, xTransform, yTransform, zTransform, xTranslationLimits,
                                                          xDistributionLimits, yTranslationLimits, yDistributionLimits, zTranslationLimits, zDistributionLimits);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LightTranslationGroupEffect__InitData::__LightTranslationGroupEffect__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::*)()>(
    &::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ab694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0._GetTranslationEventHandler_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::*)(
    ::GlobalNamespace::LightTranslationBeatmapEventData*)>(&::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::_GetTranslationEventHandler_b__0)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x23ab9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0*>::get(), "<GetTranslationEventHandler>b__0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightTranslationBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Tweening::FloatTween*& GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get_translationTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___translationTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get_translationTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___translationTween;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__set_translationTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___translationTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get_translationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___translationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get_translationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___translationLimits;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__set_translationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___translationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get_distributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___distributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get_distributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___distributionLimits;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__set_distributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___distributionLimits = value;
}
constexpr bool& GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get_mirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mirrored;
}
constexpr bool const& GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get_mirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mirrored;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__set_mirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___mirrored = value;
}
constexpr ::GlobalNamespace::LightTranslationGroupEffect*& GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightTranslationGroupEffect*> const& GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__set___4__this(::GlobalNamespace::LightTranslationGroupEffect* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0* GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0*>());
}
inline void GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::_GetTranslationEventHandler_b__0(::GlobalNamespace::LightTranslationBeatmapEventData* currentEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0*>::get(), "<GetTranslationEventHandler>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightTranslationBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentEventData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__LightTranslationGroupEffect____c__DisplayClass12_0() {}
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffect::*)(
    ::GlobalNamespace::__LightTranslationGroupEffect__InitData*, ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::LightTranslationGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0xac0;
  constexpr static std::size_t addrs = 0x23aaa7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightTranslationGroupEffect__InitData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::SongTimeTweeningManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffect::*)()>(
    &::GlobalNamespace::LightTranslationGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23ab62c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(),
                                                                               "Cleanup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect.GetTranslationEventHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataCallback_1<::GlobalNamespace::LightTranslationBeatmapEventData*>* (
    ::GlobalNamespace::LightTranslationGroupEffect::*)(::Tweening::FloatTween*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, bool)>(
    &::GlobalNamespace::LightTranslationGroupEffect::GetTranslationEventHandler)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23ab53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "GetTranslationEventHandler", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::FloatTween*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect.SetTranslation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffect::*)(float_t)>(
    &::GlobalNamespace::LightTranslationGroupEffect::SetTranslation)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x23ab69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "SetTranslation",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect.SetTweenData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Tweening::FloatTween*, float_t, float_t, float_t, float_t, ::GlobalNamespace::EaseType)>(
    &::GlobalNamespace::LightTranslationGroupEffect::SetTweenData)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23ab864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "SetTweenData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::FloatTween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect.ComputeTranslation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, ::UnityEngine::Vector2, float_t, ::UnityEngine::Vector2, bool)>(
    &::GlobalNamespace::LightTranslationGroupEffect::ComputeTranslation)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23ab8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "ComputeTranslation", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::Tweening::SongTimeTweeningManager*& GlobalNamespace::LightTranslationGroupEffect::__get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tweeningManager;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> const& GlobalNamespace::LightTranslationGroupEffect::__get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__tweeningManager(::Tweening::SongTimeTweeningManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::LightTranslationGroupEffect::__get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::LightTranslationGroupEffect::__get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>>*& GlobalNamespace::LightTranslationGroupEffect::__get__transformMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transformMask;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>>*> const&
GlobalNamespace::LightTranslationGroupEffect::__get__transformMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transformMask;
}
constexpr void
GlobalNamespace::LightTranslationGroupEffect::__set__transformMask(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformMask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::LightTranslationGroupEffect::__get__xTranslationTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____xTranslationTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& GlobalNamespace::LightTranslationGroupEffect::__get__xTranslationTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____xTranslationTween;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__xTranslationTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____xTranslationTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::LightTranslationGroupEffect::__get__yTranslationTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____yTranslationTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& GlobalNamespace::LightTranslationGroupEffect::__get__yTranslationTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____yTranslationTween;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__yTranslationTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____yTranslationTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::LightTranslationGroupEffect::__get__zTranslationTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____zTranslationTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& GlobalNamespace::LightTranslationGroupEffect::__get__zTranslationTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____zTranslationTween;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__zTranslationTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____zTranslationTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::LightTranslationGroupEffect::__get__lightTranslationXBeatmapEventCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightTranslationXBeatmapEventCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::LightTranslationGroupEffect::__get__lightTranslationXBeatmapEventCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightTranslationXBeatmapEventCallbackWrapper;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__lightTranslationXBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightTranslationXBeatmapEventCallbackWrapper)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::LightTranslationGroupEffect::__get__lightTranslationYBeatmapEventCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightTranslationYBeatmapEventCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::LightTranslationGroupEffect::__get__lightTranslationYBeatmapEventCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightTranslationYBeatmapEventCallbackWrapper;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__lightTranslationYBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightTranslationYBeatmapEventCallbackWrapper)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::LightTranslationGroupEffect::__get__lightTranslationZBeatmapEventCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightTranslationZBeatmapEventCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::LightTranslationGroupEffect::__get__lightTranslationZBeatmapEventCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightTranslationZBeatmapEventCallbackWrapper;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__lightTranslationZBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightTranslationZBeatmapEventCallbackWrapper)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::LightTranslationGroupEffect* GlobalNamespace::LightTranslationGroupEffect::New_ctor(::GlobalNamespace::__LightTranslationGroupEffect__InitData* initData,
                                                                                                              ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                                                              ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightTranslationGroupEffect*>(initData, tweeningManager, beatmapCallbacksController));
}
inline void GlobalNamespace::LightTranslationGroupEffect::_ctor(::GlobalNamespace::__LightTranslationGroupEffect__InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightTranslationGroupEffect__InitData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::SongTimeTweeningManager*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initData, tweeningManager, beatmapCallbacksController);
}
inline void GlobalNamespace::LightTranslationGroupEffect::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "Cleanup",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataCallback_1<::GlobalNamespace::LightTranslationBeatmapEventData*>*
GlobalNamespace::LightTranslationGroupEffect::GetTranslationEventHandler(::Tweening::FloatTween* translationTween, ::UnityEngine::Vector2 translationLimits, ::UnityEngine::Vector2 distributionLimits,
                                                                         bool mirrored) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "GetTranslationEventHandler", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::FloatTween*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallback_1<::GlobalNamespace::LightTranslationBeatmapEventData*>*, false>(this, ___internal_method, translationTween,
                                                                                                                                                     translationLimits, distributionLimits, mirrored);
}
inline void GlobalNamespace::LightTranslationGroupEffect::SetTranslation(float_t _) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "SetTranslation",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
inline void GlobalNamespace::LightTranslationGroupEffect::SetTweenData(::Tweening::FloatTween* tween, float_t from, float_t to, float_t startTime, float_t endTime,
                                                                       ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "SetTweenData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::FloatTween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tween, from, to, startTime, endTime, easeType);
}
inline float_t GlobalNamespace::LightTranslationGroupEffect::ComputeTranslation(float_t translation, ::UnityEngine::Vector2 translationLimits, float_t distribution,
                                                                                ::UnityEngine::Vector2 distributionLimits, bool mirrored) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(), "ComputeTranslation", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, translation, translationLimits, distribution, distributionLimits, mirrored);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightTranslationGroupEffect::LightTranslationGroupEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
