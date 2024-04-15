#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MainSystemInit_def.hpp"
#include "GlobalNamespace/zzzz__AchievementIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsPromoDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLightsUpdateSystem_def.hpp"
#include "GlobalNamespace/zzzz__CampaignProgressModel_def.hpp"
#include "GlobalNamespace/zzzz__CoroutineStarter_def.hpp"
#include "GlobalNamespace/zzzz__CustomLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__DevicelessVRHelper_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentAudioEffectsPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ExternalCamerasManager_def.hpp"
#include "GlobalNamespace/zzzz__GameLiftNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsModel_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectGraphicsSettingsPresetsSO_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__MainSystemInit_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererGraphicsSettingsPresets_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__NetworkConfigSO_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerEntitlementChecker_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductCollectionModel_def.hpp"
#include "GlobalNamespace/zzzz__OculusNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__OculusVRHelper_def.hpp"
#include "GlobalNamespace/zzzz__PS5ActivityIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__PSVR2Helper_def.hpp"
#include "GlobalNamespace/zzzz__PSVRHelper_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataFileManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumePerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__RichPresenceManager_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyAchievementIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__SteamNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__TimeHelper_def.hpp"
#include "GlobalNamespace/zzzz__UnityXRHelper_def.hpp"
#include "GlobalNamespace/zzzz__VoipManager_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MainSystemInit____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSystemInit____c::*)()>(&::GlobalNamespace::__MainSystemInit____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x250b544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainSystemInit____c._InstallBindings_b__51_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PerceivedLoudnessPerLevelModel* (
    ::GlobalNamespace::__MainSystemInit____c::*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*)>(
    &::GlobalNamespace::__MainSystemInit____c::_InstallBindings_b__51_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x250b54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get(), "<InstallBindings>b__51_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainSystemInit____c._InstallBindings_b__51_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::RelativeSfxVolumePerLevelModel* (
    ::GlobalNamespace::__MainSystemInit____c::*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*)>(
    &::GlobalNamespace::__MainSystemInit____c::_InstallBindings_b__51_1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x250b5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get(), "<InstallBindings>b__51_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainSystemInit____c._InstallBindings_b__51_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OculusLevelProductCollectionModel* (
    ::GlobalNamespace::__MainSystemInit____c::*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*)>(
    &::GlobalNamespace::__MainSystemInit____c::_InstallBindings_b__51_2)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x250b628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get(), "<InstallBindings>b__51_2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainSystemInit____c._InstallPlatformLeaderboardsModel_b__55_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LeaderboardIdsModel* (
    ::GlobalNamespace::__MainSystemInit____c::*)(::GlobalNamespace::BeatmapLevelsModel*)>(&::GlobalNamespace::__MainSystemInit____c::_InstallPlatformLeaderboardsModel_b__55_0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x250b6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get(), "<InstallPlatformLeaderboardsModel>b__55_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsModel*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__MainSystemInit____c::setStaticF___9(::GlobalNamespace::__MainSystemInit____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__MainSystemInit____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get>(
      std::forward<::GlobalNamespace::__MainSystemInit____c*>(value));
}
inline ::GlobalNamespace::__MainSystemInit____c* GlobalNamespace::__MainSystemInit____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__MainSystemInit____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get>();
}
inline void GlobalNamespace::__MainSystemInit____c::setStaticF___9__51_0(
    ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::PerceivedLoudnessPerLevelModel*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::PerceivedLoudnessPerLevelModel*>*, "<>9__51_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::PerceivedLoudnessPerLevelModel*>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::PerceivedLoudnessPerLevelModel*>*
GlobalNamespace::__MainSystemInit____c::getStaticF___9__51_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::PerceivedLoudnessPerLevelModel*>*, "<>9__51_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get>();
}
inline void GlobalNamespace::__MainSystemInit____c::setStaticF___9__51_1(
    ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::RelativeSfxVolumePerLevelModel*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::RelativeSfxVolumePerLevelModel*>*, "<>9__51_1",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::RelativeSfxVolumePerLevelModel*>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::RelativeSfxVolumePerLevelModel*>*
GlobalNamespace::__MainSystemInit____c::getStaticF___9__51_1() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::RelativeSfxVolumePerLevelModel*>*, "<>9__51_1",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get>();
}
inline void GlobalNamespace::__MainSystemInit____c::setStaticF___9__51_2(
    ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::OculusLevelProductCollectionModel*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::OculusLevelProductCollectionModel*>*, "<>9__51_2",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get>(
      std::forward<::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::OculusLevelProductCollectionModel*>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::OculusLevelProductCollectionModel*>*
GlobalNamespace::__MainSystemInit____c::getStaticF___9__51_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, ::GlobalNamespace::OculusLevelProductCollectionModel*>*, "<>9__51_2",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get>();
}
inline void GlobalNamespace::__MainSystemInit____c::setStaticF___9__55_0(::System::Func_2<::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::LeaderboardIdsModel*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::LeaderboardIdsModel*>*, "<>9__55_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::LeaderboardIdsModel*>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::LeaderboardIdsModel*>* GlobalNamespace::__MainSystemInit____c::getStaticF___9__55_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::LeaderboardIdsModel*>*, "<>9__55_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get>();
}
inline ::GlobalNamespace::__MainSystemInit____c* GlobalNamespace::__MainSystemInit____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MainSystemInit____c*>());
}
inline void GlobalNamespace::__MainSystemInit____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PerceivedLoudnessPerLevelModel*
GlobalNamespace::__MainSystemInit____c::_InstallBindings_b__51_0(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get(), "<InstallBindings>b__51_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PerceivedLoudnessPerLevelModel*, false>(this, ___internal_method, packDefinitions);
}
inline ::GlobalNamespace::RelativeSfxVolumePerLevelModel*
GlobalNamespace::__MainSystemInit____c::_InstallBindings_b__51_1(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get(), "<InstallBindings>b__51_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RelativeSfxVolumePerLevelModel*, false>(this, ___internal_method, packDefinitions);
}
inline ::GlobalNamespace::OculusLevelProductCollectionModel*
GlobalNamespace::__MainSystemInit____c::_InstallBindings_b__51_2(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get(), "<InstallBindings>b__51_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OculusLevelProductCollectionModel*, false>(this, ___internal_method, packDefinitions);
}
inline ::GlobalNamespace::LeaderboardIdsModel* GlobalNamespace::__MainSystemInit____c::_InstallPlatformLeaderboardsModel_b__55_0(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSystemInit____c*>::get(), "<InstallPlatformLeaderboardsModel>b__55_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LeaderboardIdsModel*, false>(this, ___internal_method, beatmapLevelsModel);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MainSystemInit____c::__MainSystemInit____c() {}
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)()>(&::GlobalNamespace::MainSystemInit::Init)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x25090c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*, bool)>(
    &::GlobalNamespace::MainSystemInit::InstallBindings)> {
  constexpr static std::size_t size = 0x19b0;
  constexpr static std::size_t addrs = 0x2509518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallBindings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallHapticsController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::MainSystemInit::InstallHapticsController)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x250b304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallHapticsController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallRichPresence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*, bool)>(
    &::GlobalNamespace::MainSystemInit::InstallRichPresence)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x250afe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallRichPresence", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallOculusDestinationBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::MainSystemInit::InstallOculusDestinationBindings)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x250aef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallOculusDestinationBindings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallPlatformLeaderboardsModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*, bool)>(
    &::GlobalNamespace::MainSystemInit::InstallPlatformLeaderboardsModel)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x250b0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallPlatformLeaderboardsModel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallPS5Bindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::MainSystemInit::InstallPS5Bindings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x250b4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallPS5Bindings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit.InstallPS4Bindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)(::Zenject::DiContainer*)>(
    &::GlobalNamespace::MainSystemInit::InstallPS4Bindings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x250b4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallPS4Bindings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSystemInit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSystemInit::*)()>(&::GlobalNamespace::MainSystemInit::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x250b4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__mainSettingsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__mainSettingsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSettingsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets>& GlobalNamespace::MainSystemInit::__cordl_internal_get__mirrorRendererGraphicsSettingsPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRendererGraphicsSettingsPresets;
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__mirrorRendererGraphicsSettingsPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRendererGraphicsSettingsPresets;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__mirrorRendererGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirrorRendererGraphicsSettingsPresets)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__mainEffectGraphicsSettingsPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectGraphicsSettingsPresets;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__mainEffectGraphicsSettingsPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectGraphicsSettingsPresets;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__mainEffectGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainEffectGraphicsSettingsPresets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__bloomPrePassGraphicsSettingsPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassGraphicsSettingsPresets;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__bloomPrePassGraphicsSettingsPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassGraphicsSettingsPresets;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__bloomPrePassGraphicsSettingsPresets(::UnityW<::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassGraphicsSettingsPresets)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__mirrorRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRenderer;
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__mirrorRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRenderer;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__mirrorRenderer(::UnityW<::GlobalNamespace::MirrorRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirrorRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__mainEffectContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectContainer;
}
constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__mainEffectContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectContainer;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__mainEffectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainEffectContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__bloomPrePassEffectContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassEffectContainer;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__bloomPrePassEffectContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassEffectContainer;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__bloomPrePassEffectContainer(::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassEffectContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SongPackMasksModelSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__songPackMasksModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr ::UnityW<::GlobalNamespace::SongPackMasksModelSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__songPackMasksModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__songPackMasksModel(::UnityW<::GlobalNamespace::SongPackMasksModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackMasksModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__playerDataFileManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataFileManager;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__playerDataFileManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataFileManager;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__playerDataFileManager(::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataFileManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__standardLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__standardLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__standardLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____standardLevelScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__missionLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__missionLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__missionLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionLevelScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__multiplayerLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerLevelScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper>& GlobalNamespace::MainSystemInit::__cordl_internal_get__timeHelperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelperPrefab;
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__timeHelperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelperPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__timeHelperPrefab(::UnityW<::GlobalNamespace::TimeHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeHelperPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::MainSystemInit::__cordl_internal_get__playerDataModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModelPrefab;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__playerDataModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__playerDataModelPrefab(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModelPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel>& GlobalNamespace::MainSystemInit::__cordl_internal_get__campaignProgressModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____campaignProgressModelPrefab;
}
constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__campaignProgressModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____campaignProgressModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__campaignProgressModelPrefab(::UnityW<::GlobalNamespace::CampaignProgressModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____campaignProgressModelPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::CustomLevelLoader>& GlobalNamespace::MainSystemInit::__cordl_internal_get__customLevelLoaderPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelLoaderPrefab;
}
constexpr ::UnityW<::GlobalNamespace::CustomLevelLoader> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__customLevelLoaderPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelLoaderPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__customLevelLoaderPrefab(::UnityW<::GlobalNamespace::CustomLevelLoader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customLevelLoaderPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ExternalCamerasManager>& GlobalNamespace::MainSystemInit::__cordl_internal_get__externalCamerasManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____externalCamerasManagerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::ExternalCamerasManager> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__externalCamerasManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____externalCamerasManagerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__externalCamerasManagerPrefab(::UnityW<::GlobalNamespace::ExternalCamerasManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____externalCamerasManagerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerSessionManager>& GlobalNamespace::MainSystemInit::__cordl_internal_get__multiplayerSessionManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManagerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerSessionManager> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__multiplayerSessionManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManagerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__multiplayerSessionManagerPrefab(::UnityW<::GlobalNamespace::MultiplayerSessionManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManagerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::VoipManager>& GlobalNamespace::MainSystemInit::__cordl_internal_get__voipManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____voipManagerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::VoipManager> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__voipManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____voipManagerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__voipManagerPrefab(::UnityW<::GlobalNamespace::VoipManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____voipManagerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel>& GlobalNamespace::MainSystemInit::__cordl_internal_get__gameLiftNetworkPlayerModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameLiftNetworkPlayerModelPrefab;
}
constexpr ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__gameLiftNetworkPlayerModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameLiftNetworkPlayerModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__gameLiftNetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameLiftNetworkPlayerModelPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker>& GlobalNamespace::MainSystemInit::__cordl_internal_get__networkPlayerEntitlementCheckerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkPlayerEntitlementCheckerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__networkPlayerEntitlementCheckerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkPlayerEntitlementCheckerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__networkPlayerEntitlementCheckerPrefab(::UnityW<::GlobalNamespace::NetworkPlayerEntitlementChecker> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____networkPlayerEntitlementCheckerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& GlobalNamespace::MainSystemInit::__cordl_internal_get__hapticFeedbackControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__hapticFeedbackControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackControllerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__hapticFeedbackControllerPrefab(::UnityW<::GlobalNamespace::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticFeedbackControllerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Tweening::TimeTweeningManager>& GlobalNamespace::MainSystemInit::__cordl_internal_get__tweeningManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManagerPrefab;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__tweeningManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManagerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__tweeningManagerPrefab(::UnityW<::Tweening::TimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tweeningManagerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem>& GlobalNamespace::MainSystemInit::__cordl_internal_get__lightsUpdateSystemPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsUpdateSystemPrefab;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__lightsUpdateSystemPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsUpdateSystemPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__lightsUpdateSystemPrefab(::UnityW<::GlobalNamespace::BloomPrePassLightsUpdateSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightsUpdateSystemPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer>& GlobalNamespace::MainSystemInit::__cordl_internal_get__environmentAudioEffectsPlayerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentAudioEffectsPlayerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__environmentAudioEffectsPlayerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentAudioEffectsPlayerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__environmentAudioEffectsPlayerPrefab(::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentAudioEffectsPlayerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager>& GlobalNamespace::MainSystemInit::__cordl_internal_get__nodePoseSyncStateManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManagerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__nodePoseSyncStateManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManagerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__nodePoseSyncStateManagerPrefab(::UnityW<::GlobalNamespace::NodePoseSyncStateManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodePoseSyncStateManagerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PSVRHelper>& GlobalNamespace::MainSystemInit::__cordl_internal_get__psVRHelperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____psVRHelperPrefab;
}
constexpr ::UnityW<::GlobalNamespace::PSVRHelper> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__psVRHelperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____psVRHelperPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__psVRHelperPrefab(::UnityW<::GlobalNamespace::PSVRHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____psVRHelperPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PSVR2Helper>& GlobalNamespace::MainSystemInit::__cordl_internal_get__psVR2HelperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____psVR2HelperPrefab;
}
constexpr ::UnityW<::GlobalNamespace::PSVR2Helper> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__psVR2HelperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____psVR2HelperPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__psVR2HelperPrefab(::UnityW<::GlobalNamespace::PSVR2Helper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____psVR2HelperPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OculusVRHelper>& GlobalNamespace::MainSystemInit::__cordl_internal_get__oculusVRHelperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusVRHelperPrefab;
}
constexpr ::UnityW<::GlobalNamespace::OculusVRHelper> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__oculusVRHelperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusVRHelperPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__oculusVRHelperPrefab(::UnityW<::GlobalNamespace::OculusVRHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oculusVRHelperPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::UnityXRHelper>& GlobalNamespace::MainSystemInit::__cordl_internal_get__unityXRHelperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unityXRHelperPrefab;
}
constexpr ::UnityW<::GlobalNamespace::UnityXRHelper> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__unityXRHelperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unityXRHelperPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__unityXRHelperPrefab(::UnityW<::GlobalNamespace::UnityXRHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unityXRHelperPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::DevicelessVRHelper>& GlobalNamespace::MainSystemInit::__cordl_internal_get__devicelessVRHelperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicelessVRHelperPrefab;
}
constexpr ::UnityW<::GlobalNamespace::DevicelessVRHelper> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__devicelessVRHelperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____devicelessVRHelperPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__devicelessVRHelperPrefab(::UnityW<::GlobalNamespace::DevicelessVRHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____devicelessVRHelperPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::RichPresenceManager>& GlobalNamespace::MainSystemInit::__cordl_internal_get__richPresenceManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____richPresenceManagerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::RichPresenceManager> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__richPresenceManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____richPresenceManagerPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__richPresenceManagerPrefab(::UnityW<::GlobalNamespace::RichPresenceManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____richPresenceManagerPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__dlcPromoPanelData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelData;
}
constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__dlcPromoPanelData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelData;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__dlcPromoPanelData(::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dlcPromoPanelData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__beatmapLevelsPromoData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsPromoData;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__beatmapLevelsPromoData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsPromoData;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__beatmapLevelsPromoData(::UnityW<::GlobalNamespace::BeatmapLevelsPromoDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsPromoData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__networkConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__networkConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__networkConfig(::UnityW<::GlobalNamespace::NetworkConfigSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____networkConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SteamNetworkPlayerModel>& GlobalNamespace::MainSystemInit::__cordl_internal_get__steamNetworkPlayerModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamNetworkPlayerModelPrefab;
}
constexpr ::UnityW<::GlobalNamespace::SteamNetworkPlayerModel> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__steamNetworkPlayerModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamNetworkPlayerModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__steamNetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::SteamNetworkPlayerModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____steamNetworkPlayerModelPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OculusNetworkPlayerModel>& GlobalNamespace::MainSystemInit::__cordl_internal_get__oculusNetworkPlayerModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusNetworkPlayerModelPrefab;
}
constexpr ::UnityW<::GlobalNamespace::OculusNetworkPlayerModel> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__oculusNetworkPlayerModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusNetworkPlayerModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__oculusNetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::OculusNetworkPlayerModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oculusNetworkPlayerModelPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SonyNetworkPlayerModel>& GlobalNamespace::MainSystemInit::__cordl_internal_get__sonyNetworkPlayerModelPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyNetworkPlayerModelPrefab;
}
constexpr ::UnityW<::GlobalNamespace::SonyNetworkPlayerModel> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__sonyNetworkPlayerModelPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyNetworkPlayerModelPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__sonyNetworkPlayerModelPrefab(::UnityW<::GlobalNamespace::SonyNetworkPlayerModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sonyNetworkPlayerModelPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader>& GlobalNamespace::MainSystemInit::__cordl_internal_get__leaderboardScoreUploader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardScoreUploader;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__leaderboardScoreUploader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardScoreUploader;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__leaderboardScoreUploader(::UnityW<::GlobalNamespace::LeaderboardScoreUploader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardScoreUploader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>& GlobalNamespace::MainSystemInit::__cordl_internal_get__platformLeaderboardsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformLeaderboardsModel;
}
constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__platformLeaderboardsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformLeaderboardsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__platformLeaderboardsModel(::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformLeaderboardsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__ps4AchievementIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4AchievementIdsModel;
}
constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__ps4AchievementIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4AchievementIdsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__ps4AchievementIdsModel(::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps4AchievementIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__ps5AchievmentIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5AchievmentIdsModel;
}
constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__ps5AchievmentIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5AchievmentIdsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__ps5AchievmentIdsModel(::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps5AchievmentIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__achievementIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementIdsModel;
}
constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__achievementIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementIdsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__achievementIdsModel(::UnityW<::GlobalNamespace::AchievementIdsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____achievementIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AchievementsModelSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__achievementsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementsModel;
}
constexpr ::UnityW<::GlobalNamespace::AchievementsModelSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__achievementsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__achievementsModel(::UnityW<::GlobalNamespace::AchievementsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____achievementsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PS5ActivityIdsModelSO>& GlobalNamespace::MainSystemInit::__cordl_internal_get__ps5ActivityIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5ActivityIdsModel;
}
constexpr ::UnityW<::GlobalNamespace::PS5ActivityIdsModelSO> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__ps5ActivityIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5ActivityIdsModel;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__ps5ActivityIdsModel(::UnityW<::GlobalNamespace::PS5ActivityIdsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps5ActivityIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::CoroutineStarter>& GlobalNamespace::MainSystemInit::__cordl_internal_get__coroutineStarter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr ::UnityW<::GlobalNamespace::CoroutineStarter> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__coroutineStarter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__coroutineStarter(::UnityW<::GlobalNamespace::CoroutineStarter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coroutineStarter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& GlobalNamespace::MainSystemInit::__cordl_internal_get__menuTransitionHelperPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionHelperPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& GlobalNamespace::MainSystemInit::__cordl_internal_get__menuTransitionHelperPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionHelperPrefab;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__menuTransitionHelperPrefab(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuTransitionHelperPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MainSystemInit::__cordl_internal_get__defaultMaxCachedBeatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultMaxCachedBeatmapLevels;
}
constexpr int32_t const& GlobalNamespace::MainSystemInit::__cordl_internal_get__defaultMaxCachedBeatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultMaxCachedBeatmapLevels;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__defaultMaxCachedBeatmapLevels(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultMaxCachedBeatmapLevels = value;
}
constexpr int32_t& GlobalNamespace::MainSystemInit::__cordl_internal_get__ps4MaxCachedBeatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4MaxCachedBeatmapLevels;
}
constexpr int32_t const& GlobalNamespace::MainSystemInit::__cordl_internal_get__ps4MaxCachedBeatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4MaxCachedBeatmapLevels;
}
constexpr void GlobalNamespace::MainSystemInit::__cordl_internal_set__ps4MaxCachedBeatmapLevels(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ps4MaxCachedBeatmapLevels = value;
}
inline void GlobalNamespace::MainSystemInit::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainSystemInit::InstallBindings(::Zenject::DiContainer* container, bool isRunningFromTests) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallBindings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, isRunningFromTests);
}
inline void GlobalNamespace::MainSystemInit::InstallHapticsController(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallHapticsController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void GlobalNamespace::MainSystemInit::InstallRichPresence(::Zenject::DiContainer* container, bool isRunningFromTests) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallRichPresence", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, isRunningFromTests);
}
inline void GlobalNamespace::MainSystemInit::InstallOculusDestinationBindings(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallOculusDestinationBindings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void GlobalNamespace::MainSystemInit::InstallPlatformLeaderboardsModel(::Zenject::DiContainer* container, bool isRunningFromTests) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(),
                                                                             "InstallPlatformLeaderboardsModel", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, isRunningFromTests);
}
inline void GlobalNamespace::MainSystemInit::InstallPS5Bindings(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallPS5Bindings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void GlobalNamespace::MainSystemInit::InstallPS4Bindings(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), "InstallPS4Bindings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::GlobalNamespace::MainSystemInit* GlobalNamespace::MainSystemInit::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MainSystemInit*>());
}
inline void GlobalNamespace::MainSystemInit::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSystemInit*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainSystemInit::MainSystemInit() {}
