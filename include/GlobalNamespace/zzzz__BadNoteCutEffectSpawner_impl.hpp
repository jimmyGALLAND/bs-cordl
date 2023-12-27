#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BadNoteCutEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__FlyingSpriteSpawner_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BadNoteCutEffectSpawner.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BadNoteCutEffectSpawner::*)()>(&::GlobalNamespace::BadNoteCutEffectSpawner::Start)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x23a0eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadNoteCutEffectSpawner.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BadNoteCutEffectSpawner::*)()>(&::GlobalNamespace::BadNoteCutEffectSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x23a0f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadNoteCutEffectSpawner.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BadNoteCutEffectSpawner::*)(
    ::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::BadNoteCutEffectSpawner::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x23a0ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(), "HandleNoteWasCut", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadNoteCutEffectSpawner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BadNoteCutEffectSpawner::*)()>(&::GlobalNamespace::BadNoteCutEffectSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a1310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FlyingSpriteSpawner*& GlobalNamespace::BadNoteCutEffectSpawner::__get__failFlyingSpriteSpawner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____failFlyingSpriteSpawner;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FlyingSpriteSpawner*> const& GlobalNamespace::BadNoteCutEffectSpawner::__get__failFlyingSpriteSpawner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____failFlyingSpriteSpawner;
}
constexpr void GlobalNamespace::BadNoteCutEffectSpawner::__set__failFlyingSpriteSpawner(::GlobalNamespace::FlyingSpriteSpawner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____failFlyingSpriteSpawner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::BadNoteCutEffectSpawner::__get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& GlobalNamespace::BadNoteCutEffectSpawner::__get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::BadNoteCutEffectSpawner::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioTimeSyncController*& GlobalNamespace::BadNoteCutEffectSpawner::__get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& GlobalNamespace::BadNoteCutEffectSpawner::__get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::BadNoteCutEffectSpawner::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__CoreGameHUDController__InitData*& GlobalNamespace::BadNoteCutEffectSpawner::__get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CoreGameHUDController__InitData*> const& GlobalNamespace::BadNoteCutEffectSpawner::__get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::BadNoteCutEffectSpawner::__set__initData(::GlobalNamespace::__CoreGameHUDController__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BadNoteCutEffectSpawner::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BadNoteCutEffectSpawner::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BadNoteCutEffectSpawner::HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(), "HandleNoteWasCut", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController, noteCutInfo);
}
inline ::GlobalNamespace::BadNoteCutEffectSpawner* GlobalNamespace::BadNoteCutEffectSpawner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BadNoteCutEffectSpawner*>());
}
inline void GlobalNamespace::BadNoteCutEffectSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BadNoteCutEffectSpawner::BadNoteCutEffectSpawner() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
