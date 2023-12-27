#pragma once
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EventsTestGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__EventsTestGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupList_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConvertor_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor::*)(float_t)>(
    &::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23b8b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor.ConvertBeatToTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor::*)(float_t)>(
    &::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor::ConvertBeatToTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23bb80c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor*>::get(), "ConvertBeatToTime",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatToTimeConvertor"
constexpr GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor::operator ::GlobalNamespace::IBeatToTimeConvertor*() noexcept {
  return static_cast<::GlobalNamespace::IBeatToTimeConvertor*>(static_cast<void*>(this));
}
constexpr float_t& GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor::__get__bpm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bpm;
}
constexpr float_t const& GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor::__get__bpm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bpm;
}
constexpr void GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor::__set__bpm(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____bpm = value;
}
inline ::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor* GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor::New_ctor(float_t bpm) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor*>(bpm));
}
inline void GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor::_ctor(float_t bpm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpm);
}
inline float_t GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor::ConvertBeatToTime(float_t beat) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor*>::get(), "ConvertBeatToTime",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, beat);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EventsTestGameplayManager__MockBeatToTimeConvertor::__EventsTestGameplayManager__MockBeatToTimeConvertor() {}
//  Writing Method size for method: ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0::*)()>(
    &::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bb198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0._AddEventsForLightGroup_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0::*)(::GlobalNamespace::LightGroup*)>(
    &::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0::_AddEventsForLightGroup_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23bb824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0*>::get(), "<AddEventsForLightGroup>b__0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0::__get_lightGroupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lightGroupId;
}
constexpr int32_t const& GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0::__get_lightGroupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lightGroupId;
}
constexpr void GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0::__set_lightGroupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lightGroupId = value;
}
inline ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0* GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0*>());
}
inline void GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0::_AddEventsForLightGroup_b__0(::GlobalNamespace::LightGroup* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0*>::get(), "<AddEventsForLightGroup>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass18_0::__EventsTestGameplayManager____c__DisplayClass18_0() {}
//  Writing Method size for method: ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0::*)()>(
    &::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bb1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0._AddInstantToggleEventsForLightGroup_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0::*)(::GlobalNamespace::LightGroup*)>(
    &::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0::_AddInstantToggleEventsForLightGroup_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23bb854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0*>::get(), "<AddInstantToggleEventsForLightGroup>b__0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0::__get_lightGroupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lightGroupId;
}
constexpr int32_t const& GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0::__get_lightGroupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lightGroupId;
}
constexpr void GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0::__set_lightGroupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lightGroupId = value;
}
inline ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0* GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0*>());
}
inline void GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0::_AddInstantToggleEventsForLightGroup_b__0(::GlobalNamespace::LightGroup* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0*>::get(), "<AddInstantToggleEventsForLightGroup>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass19_0::__EventsTestGameplayManager____c__DisplayClass19_0() {}
//  Writing Method size for method: ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0::*)()>(
    &::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23bb1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0._AddToggleEventsForLightGroup_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0::*)(::GlobalNamespace::LightGroup*)>(
    &::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0::_AddToggleEventsForLightGroup_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23bb884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0*>::get(), "<AddToggleEventsForLightGroup>b__0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0::__get_lightGroupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lightGroupId;
}
constexpr int32_t const& GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0::__get_lightGroupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lightGroupId;
}
constexpr void GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0::__set_lightGroupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lightGroupId = value;
}
inline ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0* GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0*>());
}
inline void GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0::_AddToggleEventsForLightGroup_b__0(::GlobalNamespace::LightGroup* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0*>::get(), "<AddToggleEventsForLightGroup>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EventsTestGameplayManager____c__DisplayClass20_0::__EventsTestGameplayManager____c__DisplayClass20_0() {}
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)()>(&::GlobalNamespace::EventsTestGameplayManager::Start)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x23b8a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)()>(&::GlobalNamespace::EventsTestGameplayManager::Update)> {
  constexpr static std::size_t size = 0x87c;
  constexpr static std::size_t addrs = 0x23b8b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.AddEventsForLightGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)(int32_t)>(
    &::GlobalNamespace::EventsTestGameplayManager::AddEventsForLightGroup)> {
  constexpr static std::size_t size = 0x950;
  constexpr static std::size_t addrs = 0x23b93c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "AddEventsForLightGroup",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.AddInstantToggleEventsForLightGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)(int32_t)>(
    &::GlobalNamespace::EventsTestGameplayManager::AddInstantToggleEventsForLightGroup)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x23ba2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "AddInstantToggleEventsForLightGroup",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.AddToggleEventsForLightGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)(int32_t, ::GlobalNamespace::EnvironmentColorType)>(
    &::GlobalNamespace::EventsTestGameplayManager::AddToggleEventsForLightGroup)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x23b9d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "AddToggleEventsForLightGroup", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.AddTestBox
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)()>(
    &::GlobalNamespace::EventsTestGameplayManager::AddTestBox)> {
  constexpr static std::size_t size = 0xa54;
  constexpr static std::size_t addrs = 0x23ba744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(),
                                                                               "AddTestBox", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)()>(&::GlobalNamespace::EventsTestGameplayManager::_ctor)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x23bb1b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::EventsTestGameplayManager::__get__moveTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____moveTime;
}
constexpr bool const& GlobalNamespace::EventsTestGameplayManager::__get__moveTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____moveTime;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__set__moveTime(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____moveTime = value;
}
constexpr bool& GlobalNamespace::EventsTestGameplayManager::__get__spawnTestBox() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____spawnTestBox;
}
constexpr bool const& GlobalNamespace::EventsTestGameplayManager::__get__spawnTestBox() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____spawnTestBox;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__set__spawnTestBox(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____spawnTestBox = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::EventsTestGameplayManager::__get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::EventsTestGameplayManager::__get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapData*& GlobalNamespace::EventsTestGameplayManager::__get__beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapData*> const& GlobalNamespace::EventsTestGameplayManager::__get__beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapData;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__set__beatmapData(::GlobalNamespace::BeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::EventsTestGameplayManager::__get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioTimeSource;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& GlobalNamespace::EventsTestGameplayManager::__get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::EventsTestGameplayManager::__get__basicBeatmapEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____basicBeatmapEventType;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::EventsTestGameplayManager::__get__basicBeatmapEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____basicBeatmapEventType;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__set__basicBeatmapEventType(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____basicBeatmapEventType = value;
}
constexpr float_t& GlobalNamespace::EventsTestGameplayManager::__get__floatValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____floatValue;
}
constexpr float_t const& GlobalNamespace::EventsTestGameplayManager::__get__floatValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____floatValue;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__set__floatValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____floatValue = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*, ::Array<::GlobalNamespace::BeatmapEventDataBoxGroupList*>*>&
GlobalNamespace::EventsTestGameplayManager::__get__beatmapEventDataBoxGroupLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapEventDataBoxGroupLists;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*, ::Array<::GlobalNamespace::BeatmapEventDataBoxGroupList*>*> const&
GlobalNamespace::EventsTestGameplayManager::__get__beatmapEventDataBoxGroupLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapEventDataBoxGroupLists;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__set__beatmapEventDataBoxGroupLists(
    ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*, ::Array<::GlobalNamespace::BeatmapEventDataBoxGroupList*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapEventDataBoxGroupLists)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<bool, ::Array<bool>*>& GlobalNamespace::EventsTestGameplayManager::__get_groupState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___groupState;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& GlobalNamespace::EventsTestGameplayManager::__get_groupState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___groupState;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__set_groupState(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___groupState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>*&
GlobalNamespace::EventsTestGameplayManager::__get__beatmapEventTypeBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapEventTypeBindings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>*> const&
GlobalNamespace::EventsTestGameplayManager::__get__beatmapEventTypeBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapEventTypeBindings;
}
constexpr void
GlobalNamespace::EventsTestGameplayManager::__set__beatmapEventTypeBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapEventTypeBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>*& GlobalNamespace::EventsTestGameplayManager::__get__intBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____intBindings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>*> const&
GlobalNamespace::EventsTestGameplayManager::__get__intBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____intBindings;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__set__intBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____intBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>*& GlobalNamespace::EventsTestGameplayManager::__get__beatmapValuesBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapValuesBindings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>*> const&
GlobalNamespace::EventsTestGameplayManager::__get__beatmapValuesBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapValuesBindings;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__set__beatmapValuesBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapValuesBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>*& GlobalNamespace::EventsTestGameplayManager::__get__floatValuesBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____floatValuesBindings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>*> const&
GlobalNamespace::EventsTestGameplayManager::__get__floatValuesBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____floatValuesBindings;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__set__floatValuesBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floatValuesBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::EventsTestGameplayManager::__get__rotatingLasers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rotatingLasers;
}
constexpr bool const& GlobalNamespace::EventsTestGameplayManager::__get__rotatingLasers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rotatingLasers;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__set__rotatingLasers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____rotatingLasers = value;
}
inline void GlobalNamespace::EventsTestGameplayManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EventsTestGameplayManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EventsTestGameplayManager::AddEventsForLightGroup(int32_t lightGroupId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "AddEventsForLightGroup",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightGroupId);
}
inline void GlobalNamespace::EventsTestGameplayManager::AddInstantToggleEventsForLightGroup(int32_t lightGroupId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "AddInstantToggleEventsForLightGroup",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightGroupId);
}
inline void GlobalNamespace::EventsTestGameplayManager::AddToggleEventsForLightGroup(int32_t lightGroupId, ::GlobalNamespace::EnvironmentColorType color) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "AddToggleEventsForLightGroup", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightGroupId, color);
}
inline void GlobalNamespace::EventsTestGameplayManager::AddTestBox() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "AddTestBox",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EventsTestGameplayManager* GlobalNamespace::EventsTestGameplayManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EventsTestGameplayManager*>());
}
inline void GlobalNamespace::EventsTestGameplayManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventsTestGameplayManager::EventsTestGameplayManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
