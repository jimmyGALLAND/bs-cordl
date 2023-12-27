#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatEffect_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__SongController_def.hpp"
#include "GlobalNamespace/zzzz__BeatEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__IBeatEffectDidFinishEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatEffectSpawner__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatEffectSpawner__InitData::*)(bool)>(
    &::GlobalNamespace::__BeatEffectSpawner__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23a19f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatEffectSpawner__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__BeatEffectSpawner__InitData::__get_hideNoteSpawnEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hideNoteSpawnEffect;
}
constexpr bool const& GlobalNamespace::__BeatEffectSpawner__InitData::__get_hideNoteSpawnEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hideNoteSpawnEffect;
}
constexpr void GlobalNamespace::__BeatEffectSpawner__InitData::__set_hideNoteSpawnEffect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___hideNoteSpawnEffect = value;
}
inline ::GlobalNamespace::__BeatEffectSpawner__InitData* GlobalNamespace::__BeatEffectSpawner__InitData::New_ctor(bool hideNoteSpawnEffect) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatEffectSpawner__InitData*>(hideNoteSpawnEffect));
}
inline void GlobalNamespace::__BeatEffectSpawner__InitData::_ctor(bool hideNoteSpawnEffect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatEffectSpawner__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hideNoteSpawnEffect);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatEffectSpawner__InitData::__BeatEffectSpawner__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)(::GlobalNamespace::__BeatEffect__Pool*)>(
    &::GlobalNamespace::BeatEffectSpawner::Init)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23a1318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(), "Init", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatEffect__Pool*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)()>(&::GlobalNamespace::BeatEffectSpawner::Start)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23a139c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)()>(&::GlobalNamespace::BeatEffectSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x23a1428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)()>(&::GlobalNamespace::BeatEffectSpawner::Update)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x23a14c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.HandleNoteDidStartJump
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::BeatEffectSpawner::HandleNoteDidStartJump)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x23a1644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(), "HandleNoteDidStartJump", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.HandleBeatEffectDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)(::GlobalNamespace::BeatEffect*)>(
    &::GlobalNamespace::BeatEffectSpawner::HandleBeatEffectDidFinish)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23a1904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(), "HandleBeatEffectDidFinish", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatEffect*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)()>(&::GlobalNamespace::BeatEffectSpawner::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23a19dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatEffectDidFinishEvent"
constexpr GlobalNamespace::BeatEffectSpawner::operator ::GlobalNamespace::IBeatEffectDidFinishEvent*() noexcept {
  return static_cast<::GlobalNamespace::IBeatEffectDidFinishEvent*>(static_cast<void*>(this));
}
constexpr float_t& GlobalNamespace::BeatEffectSpawner::__get__effectDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____effectDuration;
}
constexpr float_t const& GlobalNamespace::BeatEffectSpawner::__get__effectDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____effectDuration;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__effectDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____effectDuration = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BeatEffectSpawner::__get__bombColorEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bombColorEffect;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BeatEffectSpawner::__get__bombColorEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bombColorEffect;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__bombColorEffect(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____bombColorEffect = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::BeatEffectSpawner::__get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colorManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& GlobalNamespace::BeatEffectSpawner::__get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::BeatEffectSpawner::__get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& GlobalNamespace::BeatEffectSpawner::__get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioTimeSyncController*& GlobalNamespace::BeatEffectSpawner::__get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& GlobalNamespace::BeatEffectSpawner::__get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__BeatEffectSpawner__InitData*& GlobalNamespace::BeatEffectSpawner::__get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatEffectSpawner__InitData*> const& GlobalNamespace::BeatEffectSpawner::__get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__initData(::GlobalNamespace::__BeatEffectSpawner__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BloomFogSO*& GlobalNamespace::BeatEffectSpawner::__get__bloomFog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bloomFog;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogSO*> const& GlobalNamespace::BeatEffectSpawner::__get__bloomFog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bloomFog;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__bloomFog(::GlobalNamespace::BloomFogSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomFog)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SongController*& GlobalNamespace::BeatEffectSpawner::__get__songController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongController*> const& GlobalNamespace::BeatEffectSpawner::__get__songController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songController;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__songController(::GlobalNamespace::SongController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BeatEffect*>*& GlobalNamespace::BeatEffectSpawner::__get__beatEffectPoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatEffectPoolContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BeatEffect*>*> const&
GlobalNamespace::BeatEffectSpawner::__get__beatEffectPoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatEffectPoolContainer;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__set__beatEffectPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BeatEffect*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatEffectPoolContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BeatEffectSpawner::Init(::GlobalNamespace::__BeatEffect__Pool* beatEffectPool) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatEffect__Pool*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatEffectPool);
}
inline void GlobalNamespace::BeatEffectSpawner::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatEffectSpawner::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatEffectSpawner::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatEffectSpawner::HandleNoteDidStartJump(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(), "HandleNoteDidStartJump", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::BeatEffectSpawner::HandleBeatEffectDidFinish(::GlobalNamespace::BeatEffect* beatEffect) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(), "HandleBeatEffectDidFinish", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatEffect*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatEffect);
}
inline ::GlobalNamespace::BeatEffectSpawner* GlobalNamespace::BeatEffectSpawner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatEffectSpawner*>());
}
inline void GlobalNamespace::BeatEffectSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatEffectSpawner::BeatEffectSpawner() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
