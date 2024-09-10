#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerSongTimeSyncController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerSongTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerSongTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::*)(float_t, float_t, float_t)>(&::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3b23d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__cordl_internal_get_startSongTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSongTime;
}
constexpr float_t const& GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__cordl_internal_get_startSongTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSongTime;
}
constexpr void GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__cordl_internal_set_startSongTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startSongTime = value;
}
constexpr float_t& GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__cordl_internal_get_songTimeOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___songTimeOffset;
}
constexpr float_t const& GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__cordl_internal_get_songTimeOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___songTimeOffset;
}
constexpr void GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__cordl_internal_set_songTimeOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___songTimeOffset = value;
}
constexpr float_t& GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__cordl_internal_get_timeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeScale;
}
constexpr float_t const& GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__cordl_internal_get_timeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeScale;
}
constexpr void GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__cordl_internal_set_timeScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeScale = value;
}
inline ::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData* GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::New_ctor(float_t  startSongTime, float_t  songTimeOffset, float_t  timeScale)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*>(startSongTime, songTimeOffset, timeScale));
}
inline void GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::_ctor(float_t  startSongTime, float_t  songTimeOffset, float_t  timeScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startSongTime, songTimeOffset, timeScale);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__MultiplayerConnectedPlayerSongTimeSyncController__InitData()   {
}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_songTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b24320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "get_songTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.set_songTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(float_t)>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_songTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b24328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "set_songTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_lastFrameDeltaSongTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_lastFrameDeltaSongTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b24330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "get_lastFrameDeltaSongTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.set_lastFrameDeltaSongTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(float_t)>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_lastFrameDeltaSongTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b24338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "set_lastFrameDeltaSongTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_songEndTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songEndTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3b24340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "get_songEndTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_songLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3b2434c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "get_songLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_timeScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_timeScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b24358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "get_timeScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_isReady
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_isReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b24360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "get_isReady",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3b24368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Update)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3b24374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.StartSong
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(int64_t)>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StartSong)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3b224a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "StartSong",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.SetConnectedPlayerSongTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(int64_t, float_t)>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::SetConnectedPlayerSongTime)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3b244d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "SetConnectedPlayerSongTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.StopSong
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StopSong)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3b2275c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "StopSong",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3b2450c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IAudioTimeSource"
constexpr  GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::operator ::GlobalNamespace::IAudioTimeSource*() noexcept {
return static_cast<::GlobalNamespace::IAudioTimeSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioTimeSource"
constexpr ::GlobalNamespace::IAudioTimeSource* GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::i___GlobalNamespace__IAudioTimeSource() noexcept {
return static_cast<::GlobalNamespace::IAudioTimeSource*>(static_cast<void*>(this));
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__audioSyncLerpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSyncLerpSpeed;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__audioSyncLerpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSyncLerpSpeed;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__audioSyncLerpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioSyncLerpSpeed = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__forcedSyncDeltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forcedSyncDeltaTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__forcedSyncDeltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forcedSyncDeltaTime;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__forcedSyncDeltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forcedSyncDeltaTime = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__startSyncDeltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startSyncDeltaTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__startSyncDeltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startSyncDeltaTime;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__startSyncDeltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startSyncDeltaTime = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__stopSyncDeltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopSyncDeltaTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__stopSyncDeltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopSyncDeltaTime;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__stopSyncDeltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stopSyncDeltaTime = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__settingsManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsManager*> const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__settingsManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsManager;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__initData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*> const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__initData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initData;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__initData(::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__connectedPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectedPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__connectedPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__songTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____songTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__songTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____songTime_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__songTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____songTime_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__lastFrameDeltaSongTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFrameDeltaSongTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__lastFrameDeltaSongTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFrameDeltaSongTime_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__lastFrameDeltaSongTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastFrameDeltaSongTime_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__timeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeScale;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__timeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeScale;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__timeScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeScale = value;
}
constexpr int64_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__startSongSyncTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startSongSyncTime;
}
constexpr int64_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__startSongSyncTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startSongSyncTime;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__startSongSyncTime(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startSongSyncTime = value;
}
constexpr bool& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__fixingAudioSyncError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixingAudioSyncError;
}
constexpr bool const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__fixingAudioSyncError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixingAudioSyncError;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__fixingAudioSyncError(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fixingAudioSyncError = value;
}
constexpr bool& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__isReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isReady;
}
constexpr bool const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_get__isReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isReady;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__cordl_internal_set__isReady(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isReady = value;
}
inline float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "get_songTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_songTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "set_songTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_lastFrameDeltaSongTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "get_lastFrameDeltaSongTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_lastFrameDeltaSongTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "set_lastFrameDeltaSongTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songEndTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "get_songEndTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "get_songLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_timeScale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "get_timeScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_isReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "get_isReady",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StartSong(int64_t  songStartSyncTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "StartSong",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songStartSyncTime);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::SetConnectedPlayerSongTime(int64_t  syncTime, float_t  songTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "SetConnectedPlayerSongTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, syncTime, songTime);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StopSong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        "StopSong",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>());
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::MultiplayerConnectedPlayerSongTimeSyncController()   {
}
