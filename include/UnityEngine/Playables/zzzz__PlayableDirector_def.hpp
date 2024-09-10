#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableDirector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayableDirector)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Playables {
struct DirectorUpdateMode;
}
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
namespace UnityEngine::Playables {
struct FrameRate;
}
namespace UnityEngine::Playables {
struct PlayState;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class IExposedPropertyTable;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct PropertyName;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::Playables {
class PlayableDirector;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Playables::PlayableDirector);
// Type: UnityEngine.Playables::PlayableDirector
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: ::UnityEngine.Playables::PlayableDirector*
class CORDL_TYPE PlayableDirector : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_duration)) double_t  duration;

 __declspec(property(get=get_extrapolationMode, put=set_extrapolationMode)) ::UnityEngine::Playables::DirectorWrapMode  extrapolationMode;

 __declspec(property(get=get_initialTime, put=set_initialTime)) double_t  initialTime;

/// @brief Field paused, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_paused, put=__cordl_internal_set_paused)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  paused;

 __declspec(property(get=get_playOnAwake, put=set_playOnAwake)) bool  playOnAwake;

 __declspec(property(get=get_playableAsset, put=set_playableAsset)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  playableAsset;

 __declspec(property(get=get_playableGraph)) ::UnityEngine::Playables::PlayableGraph  playableGraph;

/// @brief Field played, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_played, put=__cordl_internal_set_played)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  played;

 __declspec(property(get=get_state)) ::UnityEngine::Playables::PlayState  state;

/// @brief Field stopped, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_stopped, put=__cordl_internal_set_stopped)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  stopped;

 __declspec(property(get=get_time, put=set_time)) double_t  time;

 __declspec(property(get=get_timeUpdateMode, put=set_timeUpdateMode)) ::UnityEngine::Playables::DirectorUpdateMode  timeUpdateMode;

/// @brief Convert operator to "::UnityEngine::IExposedPropertyTable"
constexpr operator  ::UnityEngine::IExposedPropertyTable*() noexcept;

/// @brief Method ClearGenericBinding, addr 0x484033c, size 0x44, virtual false, abstract: false, final false
inline void ClearGenericBinding(::UnityEngine::Object*  key) ;

/// @brief Method ClearReferenceValue, addr 0x4840114, size 0x48, virtual true, abstract: false, final true
inline void ClearReferenceValue(::UnityEngine::PropertyName  id) ;

/// @brief Method ClearReferenceValue_Injected, addr 0x484015c, size 0x44, virtual true, abstract: false, final true
inline void ClearReferenceValue_Injected(ByRef<::UnityEngine::PropertyName>  id) ;

/// @brief Method DeferredEvaluate, addr 0x483f9c8, size 0x3c, virtual false, abstract: false, final false
inline void DeferredEvaluate() ;

/// @brief Method Evaluate, addr 0x483ffa4, size 0x3c, virtual false, abstract: false, final false
inline void Evaluate() ;

/// @brief Method EvaluateNextFrame, addr 0x483fa04, size 0x3c, virtual false, abstract: false, final false
inline void EvaluateNextFrame() ;

/// @brief Method GetGenericBinding, addr 0x48402f8, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> GetGenericBinding(::UnityEngine::Object*  key) ;

/// @brief Method GetGraphHandle, addr 0x483f874, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableGraph GetGraphHandle() ;

/// @brief Method GetGraphHandle_Injected, addr 0x484043c, size 0x44, virtual false, abstract: false, final false
inline void GetGraphHandle_Injected(ByRef<::UnityEngine::Playables::PlayableGraph>  ret) ;

/// @brief Method GetPlayOnAwake, addr 0x483f904, size 0x3c, virtual false, abstract: false, final false
inline bool GetPlayOnAwake() ;

/// @brief Method GetPlayState, addr 0x483f5d0, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayState GetPlayState() ;

/// @brief Method GetReferenceValue, addr 0x484024c, size 0x58, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Object> GetReferenceValue(::UnityEngine::PropertyName  id, ByRef<bool>  idValid) ;

/// @brief Method GetReferenceValue_Injected, addr 0x48402a4, size 0x54, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Object> GetReferenceValue_Injected(ByRef<::UnityEngine::PropertyName>  id, ByRef<bool>  idValid) ;

/// @brief Method GetWrapMode, addr 0x483f6d0, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::DirectorWrapMode GetWrapMode() ;

/// @brief Method HasGenericBinding, addr 0x48403f8, size 0x44, virtual false, abstract: false, final false
inline bool HasGenericBinding(::UnityEngine::Object*  key) ;

/// @brief Method Internal_GetPlayableAsset, addr 0x483f7ac, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ScriptableObject> Internal_GetPlayableAsset() ;

/// @brief Method Internal_SetGenericBinding, addr 0x483fd84, size 0x54, virtual false, abstract: false, final false
inline void Internal_SetGenericBinding(::UnityEngine::Object*  key, ::UnityEngine::Object*  value) ;

static inline ::UnityEngine::Playables::PlayableDirector* New_ctor() ;

/// @brief Method Pause, addr 0x4840060, size 0x3c, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method Play, addr 0x483fcf4, size 0x3c, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Play, addr 0x483fad0, size 0xec, virtual false, abstract: false, final false
inline void Play(::UnityEngine::Playables::PlayableAsset*  asset) ;

/// @brief Method Play, addr 0x483fbbc, size 0x138, virtual false, abstract: false, final false
inline void Play(::UnityEngine::Playables::PlayableAsset*  asset, ::UnityEngine::Playables::DirectorWrapMode  mode) ;

/// @brief Method Play, addr 0x483fa40, size 0x48, virtual false, abstract: false, final false
inline void Play(::UnityEngine::Playables::FrameRate  frameRate) ;

/// @brief Method PlayOnFrame, addr 0x483fa88, size 0x48, virtual false, abstract: false, final false
inline void PlayOnFrame(::UnityEngine::Playables::FrameRate  frameRate) ;

/// @brief Method PlayOnFrame_Injected, addr 0x483ffe0, size 0x44, virtual false, abstract: false, final false
inline void PlayOnFrame_Injected(ByRef<::UnityEngine::Playables::FrameRate>  frameRate) ;

/// @brief Method ProcessPendingGraphChanges, addr 0x48403bc, size 0x3c, virtual false, abstract: false, final false
inline void ProcessPendingGraphChanges() ;

/// @brief Method RebindPlayableGraphOutputs, addr 0x4840380, size 0x3c, virtual false, abstract: false, final false
inline void RebindPlayableGraphOutputs() ;

/// @brief Method RebuildGraph, addr 0x48400d8, size 0x3c, virtual false, abstract: false, final false
inline void RebuildGraph() ;

/// @brief Method ResetFrameTiming, addr 0x48408a0, size 0x28, virtual false, abstract: false, final false
static inline void ResetFrameTiming() ;

/// @brief Method Resume, addr 0x484009c, size 0x3c, virtual false, abstract: false, final false
inline void Resume() ;

/// @brief Method SendOnPlayableDirectorPause, addr 0x48408e8, size 0x20, virtual false, abstract: false, final false
inline void SendOnPlayableDirectorPause() ;

/// @brief Method SendOnPlayableDirectorPlay, addr 0x48408c8, size 0x20, virtual false, abstract: false, final false
inline void SendOnPlayableDirectorPlay() ;

/// @brief Method SendOnPlayableDirectorStop, addr 0x4840908, size 0x20, virtual false, abstract: false, final false
inline void SendOnPlayableDirectorStop() ;

/// @brief Method SetGenericBinding, addr 0x483fd30, size 0x54, virtual false, abstract: false, final false
inline void SetGenericBinding(::UnityEngine::Object*  key, ::UnityEngine::Object*  value) ;

/// @brief Method SetPlayOnAwake, addr 0x483f984, size 0x44, virtual false, abstract: false, final false
inline void SetPlayOnAwake(bool  on) ;

/// @brief Method SetPlayableAsset, addr 0x483f82c, size 0x44, virtual false, abstract: false, final false
inline void SetPlayableAsset(::UnityEngine::ScriptableObject*  asset) ;

/// @brief Method SetReferenceValue, addr 0x48401a0, size 0x58, virtual true, abstract: false, final true
inline void SetReferenceValue(::UnityEngine::PropertyName  id, ::UnityEngine::Object*  value) ;

/// @brief Method SetReferenceValue_Injected, addr 0x48401f8, size 0x54, virtual true, abstract: false, final true
inline void SetReferenceValue_Injected(ByRef<::UnityEngine::PropertyName>  id, ::UnityEngine::Object*  value) ;

/// @brief Method SetWrapMode, addr 0x483f650, size 0x44, virtual false, abstract: false, final false
inline void SetWrapMode(::UnityEngine::Playables::DirectorWrapMode  mode) ;

/// @brief Method Stop, addr 0x4840024, size 0x3c, virtual false, abstract: false, final false
inline void Stop() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_paused() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*> const& __cordl_internal_get_paused() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_played() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*> const& __cordl_internal_get_played() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_stopped() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*> const& __cordl_internal_get_stopped() const;

constexpr void __cordl_internal_set_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

constexpr void __cordl_internal_set_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

constexpr void __cordl_internal_set_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method .ctor, addr 0x4840928, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_paused, addr 0x48405e0, size 0xb0, virtual false, abstract: false, final false
inline void add_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method add_played, addr 0x4840480, size 0xb0, virtual false, abstract: false, final false
inline void add_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method add_stopped, addr 0x4840740, size 0xb0, virtual false, abstract: false, final false
inline void add_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method get_duration, addr 0x483ff68, size 0x3c, virtual false, abstract: false, final false
inline double_t get_duration() ;

/// @brief Method get_extrapolationMode, addr 0x483f694, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::DirectorWrapMode get_extrapolationMode() ;

/// @brief Method get_initialTime, addr 0x483ff2c, size 0x3c, virtual false, abstract: false, final false
inline double_t get_initialTime() ;

/// @brief Method get_playOnAwake, addr 0x483f8c8, size 0x3c, virtual false, abstract: false, final false
inline bool get_playOnAwake() ;

/// @brief Method get_playableAsset, addr 0x483f70c, size 0xa0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Playables::PlayableAsset> get_playableAsset() ;

/// @brief Method get_playableGraph, addr 0x483f870, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableGraph get_playableGraph() ;

/// @brief Method get_state, addr 0x483f594, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayState get_state() ;

/// @brief Method get_time, addr 0x483fea4, size 0x3c, virtual false, abstract: false, final false
inline double_t get_time() ;

/// @brief Method get_timeUpdateMode, addr 0x483fe1c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::DirectorUpdateMode get_timeUpdateMode() ;

/// @brief Convert to "::UnityEngine::IExposedPropertyTable"
constexpr ::UnityEngine::IExposedPropertyTable* i___UnityEngine__IExposedPropertyTable() noexcept;

/// @brief Method remove_paused, addr 0x4840690, size 0xb0, virtual false, abstract: false, final false
inline void remove_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method remove_played, addr 0x4840530, size 0xb0, virtual false, abstract: false, final false
inline void remove_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method remove_stopped, addr 0x48407f0, size 0xb0, virtual false, abstract: false, final false
inline void remove_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method set_extrapolationMode, addr 0x483f60c, size 0x44, virtual false, abstract: false, final false
inline void set_extrapolationMode(::UnityEngine::Playables::DirectorWrapMode  value) ;

/// @brief Method set_initialTime, addr 0x483fee0, size 0x4c, virtual false, abstract: false, final false
inline void set_initialTime(double_t  value) ;

/// @brief Method set_playOnAwake, addr 0x483f940, size 0x44, virtual false, abstract: false, final false
inline void set_playOnAwake(bool  value) ;

/// @brief Method set_playableAsset, addr 0x483f7e8, size 0x44, virtual false, abstract: false, final false
inline void set_playableAsset(::UnityEngine::Playables::PlayableAsset*  value) ;

/// @brief Method set_time, addr 0x483fe58, size 0x4c, virtual false, abstract: false, final false
inline void set_time(double_t  value) ;

/// @brief Method set_timeUpdateMode, addr 0x483fdd8, size 0x44, virtual false, abstract: false, final false
inline void set_timeUpdateMode(::UnityEngine::Playables::DirectorUpdateMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayableDirector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayableDirector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayableDirector(PlayableDirector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayableDirector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayableDirector(PlayableDirector const& ) = delete;

/// @brief Field played, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  ___played;

/// @brief Field paused, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  ___paused;

/// @brief Field stopped, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  ___stopped;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableDirector, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___played) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___paused) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___stopped) == 0x28, "Offset mismatch!");

} // namespace end def UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::PlayableDirector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableDirector*, "UnityEngine.Playables", "PlayableDirector");
