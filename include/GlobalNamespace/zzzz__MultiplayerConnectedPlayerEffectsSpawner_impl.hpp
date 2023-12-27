#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerEffectsSpawner_def.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BombExplosionEffect_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayerBeatmapObjectEventManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23d4748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>::get(), "Start",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x23d4838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>::get(), "OnDestroy",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner.HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)(
    ::GlobalNamespace::NoteCutInfoNetSerializable*)>(&::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x23d4940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>::get(),
                                                 "HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d4b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NoteDebrisSpawner*& GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__get__noteDebrisSpawner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noteDebrisSpawner;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteDebrisSpawner*> const& GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__get__noteDebrisSpawner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noteDebrisSpawner;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__set__noteDebrisSpawner(::GlobalNamespace::NoteDebrisSpawner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteDebrisSpawner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BombExplosionEffect*& GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__get__bombExplosionEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bombExplosionEffect;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BombExplosionEffect*> const& GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__get__bombExplosionEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bombExplosionEffect;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__set__bombExplosionEffect(::GlobalNamespace::BombExplosionEffect* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombExplosionEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*& GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__get__beatmapObjectEventManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapObjectEventManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*> const&
GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__get__beatmapObjectEventManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapObjectEventManager;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::__set__beatmapObjectEventManager(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectEventManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::Start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>::get(), "Start",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>::get(), "OnDestroy",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut(::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>::get(), "HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteCutInfo);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner* GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>());
}
inline void GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner::MultiplayerConnectedPlayerEffectsSpawner() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
