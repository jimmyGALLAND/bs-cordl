#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/BeatmapDataLoader.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__BeatmapDataLoader_def.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__BeatmapDataLoader_def.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__AudioSaveData_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatmapSaveData_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ChainBeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightshowSaveData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentKeywords_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentInfo_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::*)()>(&::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26bdce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0._GetBeatmapDataFromSaveDataJsonAsync_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapData* (::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::*)()>(&::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::_GetBeatmapDataFromSaveDataJsonAsync_b__0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26c08d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0*>::get(),
                        "<GetBeatmapDataFromSaveDataJsonAsync>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_audioDataJson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioDataJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_audioDataJson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioDataJson;
}
constexpr void BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_set_audioDataJson(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioDataJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_beatmapJson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beatmapJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_beatmapJson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beatmapJson;
}
constexpr void BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_set_beatmapJson(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_lightshowJson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightshowJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_lightshowJson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightshowJson;
}
constexpr void BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_set_lightshowJson(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightshowJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_defaultLightshowJson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLightshowJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_defaultLightshowJson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLightshowJson;
}
constexpr void BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_set_defaultLightshowJson(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultLightshowJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_beatmapDifficulty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_beatmapDifficulty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beatmapDifficulty;
}
constexpr void BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beatmapDifficulty = value;
}
constexpr float_t& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_startBpm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startBpm;
}
constexpr float_t const& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_startBpm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startBpm;
}
constexpr void BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_set_startBpm(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startBpm = value;
}
constexpr bool& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_loadingForDesignatedEnvironment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingForDesignatedEnvironment;
}
constexpr bool const& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_loadingForDesignatedEnvironment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingForDesignatedEnvironment;
}
constexpr void BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_set_loadingForDesignatedEnvironment(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingForDesignatedEnvironment = value;
}
constexpr ::GlobalNamespace::IEnvironmentInfo*& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_environmentInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___environmentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IEnvironmentInfo*> const& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_environmentInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___environmentInfo;
}
constexpr void BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_set_environmentInfo(::GlobalNamespace::IEnvironmentInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelDataVersion& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_beatmapLevelDataVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beatmapLevelDataVersion;
}
constexpr ::GlobalNamespace::BeatmapLevelDataVersion const& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_beatmapLevelDataVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beatmapLevelDataVersion;
}
constexpr void BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_set_beatmapLevelDataVersion(::GlobalNamespace::BeatmapLevelDataVersion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beatmapLevelDataVersion = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_gameplayModifiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameplayModifiers;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_gameplayModifiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameplayModifiers;
}
constexpr void BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_playerSpecificSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerSpecificSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_get_playerSpecificSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerSpecificSettings;
}
constexpr void BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0* BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0*>());
}
inline void BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapData* BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::_GetBeatmapDataFromSaveDataJsonAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0*>::get(),
                        "<GetBeatmapDataFromSaveDataJsonAsync>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass0_0::__BeatmapDataLoader____c__DisplayClass0_0()   {
}
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0::*)()>(&::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26bddd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0._GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataBasicInfo* (::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0::*)()>(&::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0::_GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c0918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0*>::get(),
                        "<GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_beatmapJson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beatmapJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_get_beatmapJson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beatmapJson;
}
constexpr void BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0::__cordl_internal_set_beatmapJson(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0* BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0*>());
}
inline void BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataBasicInfo* BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0::_GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0*>::get(),
                        "<GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataBasicInfo*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass1_0::__BeatmapDataLoader____c__DisplayClass1_0()   {
}
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0::*)()>(&::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26bed44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0._GetBeatmapDataBasicInfoFromSaveDataJson_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0::*)(::BeatmapSaveDataVersion4::ChainBeatIndex*)>(&::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0::_GetBeatmapDataBasicInfoFromSaveDataJson_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x26c0920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0*>::get(),
                        "<GetBeatmapDataBasicInfoFromSaveDataJson>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::ChainBeatIndex*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion4::BeatmapSaveData*& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0::__cordl_internal_get_beatmapSaveData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beatmapSaveData;
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion4::BeatmapSaveData*> const& BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0::__cordl_internal_get_beatmapSaveData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beatmapSaveData;
}
constexpr void BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0::__cordl_internal_set_beatmapSaveData(::BeatmapSaveDataVersion4::BeatmapSaveData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapSaveData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0* BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0*>());
}
inline void BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0::_GetBeatmapDataBasicInfoFromSaveDataJson_b__0(::BeatmapSaveDataVersion4::ChainBeatIndex*  chainBeatIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0*>::get(),
                        "<GetBeatmapDataBasicInfoFromSaveDataJson>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::ChainBeatIndex*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chainBeatIndex);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::__BeatmapDataLoader____c__DisplayClass4_0::__BeatmapDataLoader____c__DisplayClass4_0()   {
}
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.GetBeatmapDataFromSaveDataJsonAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>* (*)(::StringW, ::StringW, ::StringW, ::StringW, ::GlobalNamespace::BeatmapDifficulty, float_t, bool, ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::BeatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*)>(&::BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataFromSaveDataJsonAsync)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x26bdb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "GetBeatmapDataFromSaveDataJsonAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 11>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.GetBeatmapDataBasicInfoFromSaveDataJsonAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* (*)(::StringW)>(&::BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJsonAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x26bdcec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "GetBeatmapDataBasicInfoFromSaveDataJsonAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.GetBeatmapDataFromSaveDataJson
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapData* (*)(::StringW, ::StringW, ::StringW, ::StringW, ::GlobalNamespace::BeatmapDifficulty, float_t, bool, ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::BeatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*)>(&::BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataFromSaveDataJson)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x26bdde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "GetBeatmapDataFromSaveDataJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 11>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.LoadLightshow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::BeatmapData*, ::BeatmapSaveDataVersion4::LightshowSaveData*, ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::EnvironmentKeywords*, ::GlobalNamespace::IEnvironmentLightGroups*)>(&::BeatmapDataLoaderVersion4::BeatmapDataLoader::LoadLightshow)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26be1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "LoadLightshow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.GetBeatmapDataBasicInfoFromSaveDataJson
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataBasicInfo* (*)(::StringW)>(&::BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJson)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x26beb9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "GetBeatmapDataBasicInfoFromSaveDataJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.GetBeatmapDataFromSaveData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapData* (*)(::BeatmapLevelSaveDataVersion4::AudioSaveData*, ::BeatmapSaveDataVersion4::BeatmapSaveData*, ::BeatmapSaveDataVersion4::LightshowSaveData*, ::BeatmapSaveDataVersion4::LightshowSaveData*, ::GlobalNamespace::BeatmapDifficulty, float_t, bool, ::GlobalNamespace::EnvironmentKeywords*, ::GlobalNamespace::IEnvironmentLightGroups*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*)>(&::BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataFromSaveData)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x26bdf84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "GetBeatmapDataFromSaveData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 11>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapLevelSaveDataVersion4::AudioSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatmapSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.ConvertBeatmapObjects
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::BeatmapData*, ::BeatmapSaveDataVersion4::BeatmapSaveData*, ::BeatmapSaveDataVersion4::LightshowSaveData*, ::GlobalNamespace::BpmTimeProcessor*)>(&::BeatmapDataLoaderVersion4::BeatmapDataLoader::ConvertBeatmapObjects)> {
  constexpr static std::size_t size = 0x9a0;
  constexpr static std::size_t addrs = 0x26bed4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "ConvertBeatmapObjects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatmapSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.ConvertBasicEvents
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::BeatmapData*, ::BeatmapSaveDataVersion4::LightshowSaveData*, ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::EnvironmentKeywords*)>(&::BeatmapDataLoaderVersion4::BeatmapDataLoader::ConvertBasicEvents)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x26be218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "ConvertBasicEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.ConvertEventBoxGroups
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::BeatmapData*, ::BeatmapSaveDataVersion4::LightshowSaveData*, ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::IEnvironmentLightGroups*)>(&::BeatmapDataLoaderVersion4::BeatmapDataLoader::ConvertEventBoxGroups)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x26be928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "ConvertEventBoxGroups",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>* BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataFromSaveDataJsonAsync(::StringW  audioDataJson, ::StringW  beatmapJson, ::StringW  lightshowJson, ::StringW  defaultLightshowJson, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, float_t  startBpm, bool  loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo*  environmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion  beatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "GetBeatmapDataFromSaveDataJsonAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 11>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>*, false>(nullptr, ___internal_method, audioDataJson, beatmapJson, lightshowJson, defaultLightshowJson, beatmapDifficulty, startBpm, loadingForDesignatedEnvironment, environmentInfo, beatmapLevelDataVersion, gameplayModifiers, playerSpecificSettings);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJsonAsync(::StringW  beatmapJson)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "GetBeatmapDataBasicInfoFromSaveDataJsonAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>*, false>(nullptr, ___internal_method, beatmapJson);
}
inline ::GlobalNamespace::BeatmapData* BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataFromSaveDataJson(::StringW  audioDataJson, ::StringW  beatmapJson, ::StringW  lightshowJson, ::StringW  defaultLightshowJson, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, float_t  startBpm, bool  loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo*  environmentInfo, ::GlobalNamespace::BeatmapLevelDataVersion  beatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "GetBeatmapDataFromSaveDataJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 11>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(nullptr, ___internal_method, audioDataJson, beatmapJson, lightshowJson, defaultLightshowJson, beatmapDifficulty, startBpm, loadingForDesignatedEnvironment, environmentInfo, beatmapLevelDataVersion, gameplayModifiers, playerSpecificSettings);
}
inline void BeatmapDataLoaderVersion4::BeatmapDataLoader::LoadLightshow(::GlobalNamespace::BeatmapData*  beatmapData, ::BeatmapSaveDataVersion4::LightshowSaveData*  lightshowSaveData, ::GlobalNamespace::BpmTimeProcessor*  bpmTimeProcessor, ::GlobalNamespace::EnvironmentKeywords*  environmentKeywords, ::GlobalNamespace::IEnvironmentLightGroups*  environmentLightGroups)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "LoadLightshow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, beatmapData, lightshowSaveData, bpmTimeProcessor, environmentKeywords, environmentLightGroups);
}
inline ::GlobalNamespace::BeatmapDataBasicInfo* BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJson(::StringW  beatmapDataJson)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "GetBeatmapDataBasicInfoFromSaveDataJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataBasicInfo*, false>(nullptr, ___internal_method, beatmapDataJson);
}
inline ::GlobalNamespace::BeatmapData* BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataFromSaveData(::BeatmapLevelSaveDataVersion4::AudioSaveData*  audioSaveData, ::BeatmapSaveDataVersion4::BeatmapSaveData*  beatmapSaveData, ::BeatmapSaveDataVersion4::LightshowSaveData*  lightshowSaveData, ::BeatmapSaveDataVersion4::LightshowSaveData*  defaultLightshowSaveData, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, float_t  startBpm, bool  loadingForDesignatedEnvironment, ::GlobalNamespace::EnvironmentKeywords*  environmentKeywords, ::GlobalNamespace::IEnvironmentLightGroups*  environmentLightGroups, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "GetBeatmapDataFromSaveData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 11>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapLevelSaveDataVersion4::AudioSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatmapSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*, false>(nullptr, ___internal_method, audioSaveData, beatmapSaveData, lightshowSaveData, defaultLightshowSaveData, beatmapDifficulty, startBpm, loadingForDesignatedEnvironment, environmentKeywords, environmentLightGroups, gameplayModifiers, playerSpecificSettings);
}
inline void BeatmapDataLoaderVersion4::BeatmapDataLoader::ConvertBeatmapObjects(::GlobalNamespace::BeatmapData*  beatmapData, ::BeatmapSaveDataVersion4::BeatmapSaveData*  beatmapSaveData, ::BeatmapSaveDataVersion4::LightshowSaveData*  lightshowSaveData, ::GlobalNamespace::BpmTimeProcessor*  bpmTimeProcessor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "ConvertBeatmapObjects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::BeatmapSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, beatmapData, beatmapSaveData, lightshowSaveData, bpmTimeProcessor);
}
inline void BeatmapDataLoaderVersion4::BeatmapDataLoader::ConvertBasicEvents(::GlobalNamespace::BeatmapData*  beatmapData, ::BeatmapSaveDataVersion4::LightshowSaveData*  lightshowSaveData, ::GlobalNamespace::BpmTimeProcessor*  bpmTimeProcessor, ::GlobalNamespace::EnvironmentKeywords*  environmentKeywords)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "ConvertBasicEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentKeywords*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, beatmapData, lightshowSaveData, bpmTimeProcessor, environmentKeywords);
}
inline void BeatmapDataLoaderVersion4::BeatmapDataLoader::ConvertEventBoxGroups(::GlobalNamespace::BeatmapData*  beatmapData, ::BeatmapSaveDataVersion4::LightshowSaveData*  lightshowSaveData, ::GlobalNamespace::BpmTimeProcessor*  bpmTimeProcessor, ::GlobalNamespace::IEnvironmentLightGroups*  environmentLightGroups)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>::get(),
                        "ConvertEventBoxGroups",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion4::LightshowSaveData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BpmTimeProcessor*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, beatmapData, lightshowSaveData, bpmTimeProcessor, environmentLightGroups);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::BeatmapDataLoader::BeatmapDataLoader()   {
}
