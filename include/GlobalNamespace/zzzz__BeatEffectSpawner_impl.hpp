#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatEffectSpawner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BeatEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__IBeatEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__SongController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatEffectSpawner__InitData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatEffectSpawner__InitData::*)(bool)>(&::GlobalNamespace::__BeatEffectSpawner__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3af3cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatEffectSpawner__InitData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__BeatEffectSpawner__InitData::__cordl_internal_get_hideNoteSpawnEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideNoteSpawnEffect;
}
constexpr bool const& GlobalNamespace::__BeatEffectSpawner__InitData::__cordl_internal_get_hideNoteSpawnEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideNoteSpawnEffect;
}
constexpr void GlobalNamespace::__BeatEffectSpawner__InitData::__cordl_internal_set_hideNoteSpawnEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideNoteSpawnEffect = value;
}
inline ::GlobalNamespace::__BeatEffectSpawner__InitData* GlobalNamespace::__BeatEffectSpawner__InitData::New_ctor(bool  hideNoteSpawnEffect)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatEffectSpawner__InitData*>(hideNoteSpawnEffect));
}
inline void GlobalNamespace::__BeatEffectSpawner__InitData::_ctor(bool  hideNoteSpawnEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatEffectSpawner__InitData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hideNoteSpawnEffect);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatEffectSpawner__InitData::__BeatEffectSpawner__InitData()   {
}
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)(::GlobalNamespace::__BeatEffect__Pool*)>(&::GlobalNamespace::BeatEffectSpawner::Init)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3af360c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatEffect__Pool*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)()>(&::GlobalNamespace::BeatEffectSpawner::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3af3688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)()>(&::GlobalNamespace::BeatEffectSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3af3718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)()>(&::GlobalNamespace::BeatEffectSpawner::Update)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x3af37a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.HandleNoteDidStartJump
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)(::GlobalNamespace::NoteController*)>(&::GlobalNamespace::BeatEffectSpawner::HandleNoteDidStartJump)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x3af3928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(),
                        "HandleNoteDidStartJump",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner.HandleBeatEffectDidFinish
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)(::GlobalNamespace::BeatEffect*)>(&::GlobalNamespace::BeatEffectSpawner::HandleBeatEffectDidFinish)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3af3be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(),
                        "HandleBeatEffectDidFinish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatEffect*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffectSpawner._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatEffectSpawner::*)()>(&::GlobalNamespace::BeatEffectSpawner::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3af3cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatEffectDidFinishEvent"
constexpr  GlobalNamespace::BeatEffectSpawner::operator ::GlobalNamespace::IBeatEffectDidFinishEvent*() noexcept {
return static_cast<::GlobalNamespace::IBeatEffectDidFinishEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatEffectDidFinishEvent"
constexpr ::GlobalNamespace::IBeatEffectDidFinishEvent* GlobalNamespace::BeatEffectSpawner::i___GlobalNamespace__IBeatEffectDidFinishEvent() noexcept {
return static_cast<::GlobalNamespace::IBeatEffectDidFinishEvent*>(static_cast<void*>(this));
}
constexpr float_t& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__effectDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectDuration;
}
constexpr float_t const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__effectDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectDuration;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__effectDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____effectDuration = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__bombColorEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bombColorEffect;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__bombColorEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bombColorEffect;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__bombColorEffect(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bombColorEffect = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__colorManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__colorManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorManager;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__beatmapObjectManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__beatmapObjectManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__audioTimeSyncController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__audioTimeSyncController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__BeatEffectSpawner__InitData*& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__initData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatEffectSpawner__InitData*> const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__initData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initData;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__initData(::GlobalNamespace::__BeatEffectSpawner__InitData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__bloomFog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bloomFog;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__bloomFog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bloomFog;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomFog)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SongController>& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__songController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____songController;
}
constexpr ::UnityW<::GlobalNamespace::SongController> const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__songController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____songController;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__songController(::UnityW<::GlobalNamespace::SongController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BeatEffect>>*& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__beatEffectPoolContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatEffectPoolContainer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BeatEffect>>*> const& GlobalNamespace::BeatEffectSpawner::__cordl_internal_get__beatEffectPoolContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatEffectPoolContainer;
}
constexpr void GlobalNamespace::BeatEffectSpawner::__cordl_internal_set__beatEffectPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BeatEffect>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatEffectPoolContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BeatEffectSpawner::Init(::GlobalNamespace::__BeatEffect__Pool*  beatEffectPool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatEffect__Pool*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatEffectPool);
}
inline void GlobalNamespace::BeatEffectSpawner::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatEffectSpawner::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatEffectSpawner::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatEffectSpawner::HandleNoteDidStartJump(::GlobalNamespace::NoteController*  noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(),
                        "HandleNoteDidStartJump",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::BeatEffectSpawner::HandleBeatEffectDidFinish(::GlobalNamespace::BeatEffect*  beatEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(),
                        "HandleBeatEffectDidFinish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatEffect*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatEffect);
}
inline ::GlobalNamespace::BeatEffectSpawner* GlobalNamespace::BeatEffectSpawner::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatEffectSpawner*>());
}
inline void GlobalNamespace::BeatEffectSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffectSpawner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatEffectSpawner::BeatEffectSpawner()   {
}
