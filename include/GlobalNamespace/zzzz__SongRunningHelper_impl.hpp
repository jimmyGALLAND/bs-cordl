#pragma once
// IWYU pragma private; include "GlobalNamespace/SongRunningHelper.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SongRunningHelper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__SongRunningHelper_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SongRunningHelper__QueuedSongParams._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongRunningHelper__QueuedSongParams::*)(::GlobalNamespace::BeatmapLevel*, ::StringW, ::GlobalNamespace::BeatmapDifficulty, bool, ::GlobalNamespace::__GameplayModifiers__SongSpeed, ::GlobalNamespace::__RecordingToolManager__SetupData, ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>,::GlobalNamespace::LevelCompletionResults*>*)>(&::GlobalNamespace::__SongRunningHelper__QueuedSongParams::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3a51c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayModifiers__SongSpeed>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RecordingToolManager__SetupData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>,::GlobalNamespace::LevelCompletionResults*>*>::get()}
                    )));
    return ___internal_method;
  }
};
/// @param songFinishedCallback: ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>,::GlobalNamespace::LevelCompletionResults*>* (default: nullptr)
inline void GlobalNamespace::__SongRunningHelper__QueuedSongParams::_ctor(::GlobalNamespace::BeatmapLevel*  beatmapLevel, ::StringW  characteristic, ::GlobalNamespace::BeatmapDifficulty  difficulty, bool  advancedHud, ::GlobalNamespace::__GameplayModifiers__SongSpeed  songSpeed, ::GlobalNamespace::__RecordingToolManager__SetupData  recordingToolData, ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>,::GlobalNamespace::LevelCompletionResults*>*  songFinishedCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayModifiers__SongSpeed>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RecordingToolManager__SetupData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>,::GlobalNamespace::LevelCompletionResults*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevel, characteristic, difficulty, advancedHud, songSpeed, recordingToolData, songFinishedCallback);
}
// Ctor Parameters [CppParam { name: "beatmapLevel", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "difficulty", ty: "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: Some("{}") }, CppParam { name: "characteristic", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "advancedHud", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "songSpeed", ty: "::GlobalNamespace::__GameplayModifiers__SongSpeed", modifiers: "", def_value: Some("{}") }, CppParam { name: "recordingToolData", ty: "::GlobalNamespace::__RecordingToolManager__SetupData", modifiers: "", def_value: Some("{}") }, CppParam { name: "songFinishedCallback", ty: "::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>,::GlobalNamespace::LevelCompletionResults*>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__SongRunningHelper__QueuedSongParams::__SongRunningHelper__QueuedSongParams(::GlobalNamespace::BeatmapLevel*  beatmapLevel, ::GlobalNamespace::BeatmapDifficulty  difficulty, ::StringW  characteristic, bool  advancedHud, ::GlobalNamespace::__GameplayModifiers__SongSpeed  songSpeed, ::GlobalNamespace::__RecordingToolManager__SetupData  recordingToolData, ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>,::GlobalNamespace::LevelCompletionResults*>*  songFinishedCallback) noexcept  {
this->beatmapLevel = beatmapLevel;
this->difficulty = difficulty;
this->characteristic = characteristic;
this->advancedHud = advancedHud;
this->songSpeed = songSpeed;
this->recordingToolData = recordingToolData;
this->songFinishedCallback = songFinishedCallback;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SongRunningHelper__QueuedSongParams::__SongRunningHelper__QueuedSongParams()   {
}
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper.FindBeatmapLevelPackBeatmaps
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::BeatmapLevel*,::Array<::GlobalNamespace::BeatmapLevel*>*> (::GlobalNamespace::SongRunningHelper::*)(::StringW)>(&::GlobalNamespace::SongRunningHelper::FindBeatmapLevelPackBeatmaps)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x3a512ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                        "FindBeatmapLevelPackBeatmaps",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper.EnqueueLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SongRunningHelper::*)(::GlobalNamespace::__SongRunningHelper__QueuedSongParams)>(&::GlobalNamespace::SongRunningHelper::EnqueueLevel)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3a51520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                        "EnqueueLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper.StartLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongRunningHelper::*)(::GlobalNamespace::__SongRunningHelper__QueuedSongParams)>(&::GlobalNamespace::SongRunningHelper::StartLevel)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x3a515e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                        "StartLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper.StopAllLevels
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongRunningHelper::*)()>(&::GlobalNamespace::SongRunningHelper::StopAllLevels)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3a519a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                        "StopAllLevels",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper.StopCurrentLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongRunningHelper::*)()>(&::GlobalNamespace::SongRunningHelper::StopCurrentLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a51a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                        "StopCurrentLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongRunningHelper::*)()>(&::GlobalNamespace::SongRunningHelper::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3a51a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongRunningHelper._StartLevel_g__HandleLevelDidFinishCallback_9_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongRunningHelper::*)(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::SongRunningHelper::_StartLevel_g__HandleLevelDidFinishCallback_9_0)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x3a51a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                        "<StartLevel>g__HandleLevelDidFinishCallback|9_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& GlobalNamespace::SongRunningHelper::__cordl_internal_get__beatmapCharacteristics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapCharacteristics;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> const& GlobalNamespace::SongRunningHelper::__cordl_internal_get__beatmapCharacteristics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapCharacteristics;
}
constexpr void GlobalNamespace::SongRunningHelper::__cordl_internal_set__beatmapCharacteristics(::GlobalNamespace::BeatmapCharacteristicCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& GlobalNamespace::SongRunningHelper::__cordl_internal_get__menuTransitionsHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuTransitionsHelper;
}
constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& GlobalNamespace::SongRunningHelper::__cordl_internal_get__menuTransitionsHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuTransitionsHelper;
}
constexpr void GlobalNamespace::SongRunningHelper::__cordl_internal_set__menuTransitionsHelper(::UnityW<::GlobalNamespace::MenuTransitionsHelper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuTransitionsHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::SongRunningHelper::__cordl_internal_get__beatmapLevels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapLevels;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& GlobalNamespace::SongRunningHelper::__cordl_internal_get__beatmapLevels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapLevels;
}
constexpr void GlobalNamespace::SongRunningHelper::__cordl_internal_set__beatmapLevels(::GlobalNamespace::BeatmapLevelsModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentsListModel*& GlobalNamespace::SongRunningHelper::__cordl_internal_get__environmentsListModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentsListModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListModel*> const& GlobalNamespace::SongRunningHelper::__cordl_internal_get__environmentsListModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____environmentsListModel;
}
constexpr void GlobalNamespace::SongRunningHelper::__cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentsListModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*& GlobalNamespace::SongRunningHelper::__cordl_internal_get__playQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playQueue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*> const& GlobalNamespace::SongRunningHelper::__cordl_internal_get__playQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playQueue;
}
constexpr void GlobalNamespace::SongRunningHelper::__cordl_internal_set__playQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>& GlobalNamespace::SongRunningHelper::__cordl_internal_get__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
constexpr ::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> const& GlobalNamespace::SongRunningHelper::__cordl_internal_get__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
constexpr void GlobalNamespace::SongRunningHelper::__cordl_internal_set__current(::System::Nullable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____current = value;
}
inline ::ArrayW<::GlobalNamespace::BeatmapLevel*,::Array<::GlobalNamespace::BeatmapLevel*>*> GlobalNamespace::SongRunningHelper::FindBeatmapLevelPackBeatmaps(::StringW  packId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                        "FindBeatmapLevelPackBeatmaps",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapLevel*,::Array<::GlobalNamespace::BeatmapLevel*>*>, false>(this, ___internal_method, packId);
}
inline bool GlobalNamespace::SongRunningHelper::EnqueueLevel(::GlobalNamespace::__SongRunningHelper__QueuedSongParams  queuedSongParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                        "EnqueueLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, queuedSongParams);
}
inline void GlobalNamespace::SongRunningHelper::StartLevel(::GlobalNamespace::__SongRunningHelper__QueuedSongParams  queuedSongParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                        "StartLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, queuedSongParams);
}
inline void GlobalNamespace::SongRunningHelper::StopAllLevels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                        "StopAllLevels",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongRunningHelper::StopCurrentLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                        "StopCurrentLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SongRunningHelper* GlobalNamespace::SongRunningHelper::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SongRunningHelper*>());
}
inline void GlobalNamespace::SongRunningHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SongRunningHelper::_StartLevel_g__HandleLevelDidFinishCallback_9_0(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  standardLevelScenesTransition, ::GlobalNamespace::LevelCompletionResults*  results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongRunningHelper*>::get(),
                        "<StartLevel>g__HandleLevelDidFinishCallback|9_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, standardLevelScenesTransition, results);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongRunningHelper::SongRunningHelper()   {
}
