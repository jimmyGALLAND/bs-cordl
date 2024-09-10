#pragma once
// IWYU pragma private; include "GlobalNamespace/BadNoteCutEffectSpawner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BadNoteCutEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "GlobalNamespace/zzzz__FlyingSpriteSpawner_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BadNoteCutEffectSpawner.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BadNoteCutEffectSpawner::*)()>(&::GlobalNamespace::BadNoteCutEffectSpawner::Start)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3af31c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadNoteCutEffectSpawner.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BadNoteCutEffectSpawner::*)()>(&::GlobalNamespace::BadNoteCutEffectSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3af3270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadNoteCutEffectSpawner.HandleNoteWasCut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BadNoteCutEffectSpawner::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::BadNoteCutEffectSpawner::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3af3300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(),
                        "HandleNoteWasCut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BadNoteCutEffectSpawner._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BadNoteCutEffectSpawner::*)()>(&::GlobalNamespace::BadNoteCutEffectSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3af3604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FlyingSpriteSpawner>& GlobalNamespace::BadNoteCutEffectSpawner::__cordl_internal_get__failFlyingSpriteSpawner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____failFlyingSpriteSpawner;
}
constexpr ::UnityW<::GlobalNamespace::FlyingSpriteSpawner> const& GlobalNamespace::BadNoteCutEffectSpawner::__cordl_internal_get__failFlyingSpriteSpawner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____failFlyingSpriteSpawner;
}
constexpr void GlobalNamespace::BadNoteCutEffectSpawner::__cordl_internal_set__failFlyingSpriteSpawner(::UnityW<::GlobalNamespace::FlyingSpriteSpawner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____failFlyingSpriteSpawner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::BadNoteCutEffectSpawner::__cordl_internal_get__beatmapObjectManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& GlobalNamespace::BadNoteCutEffectSpawner::__cordl_internal_get__beatmapObjectManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::BadNoteCutEffectSpawner::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::BadNoteCutEffectSpawner::__cordl_internal_get__audioTimeSyncController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::BadNoteCutEffectSpawner::__cordl_internal_get__audioTimeSyncController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::BadNoteCutEffectSpawner::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__CoreGameHUDController__InitData*& GlobalNamespace::BadNoteCutEffectSpawner::__cordl_internal_get__initData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CoreGameHUDController__InitData*> const& GlobalNamespace::BadNoteCutEffectSpawner::__cordl_internal_get__initData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initData;
}
constexpr void GlobalNamespace::BadNoteCutEffectSpawner::__cordl_internal_set__initData(::GlobalNamespace::__CoreGameHUDController__InitData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BadNoteCutEffectSpawner::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BadNoteCutEffectSpawner::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BadNoteCutEffectSpawner::HandleNoteWasCut(::GlobalNamespace::NoteController*  noteController, ByRef<::GlobalNamespace::NoteCutInfo>  noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(),
                        "HandleNoteWasCut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController, noteCutInfo);
}
inline ::GlobalNamespace::BadNoteCutEffectSpawner* GlobalNamespace::BadNoteCutEffectSpawner::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BadNoteCutEffectSpawner*>());
}
inline void GlobalNamespace::BadNoteCutEffectSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BadNoteCutEffectSpawner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BadNoteCutEffectSpawner::BadNoteCutEffectSpawner()   {
}
