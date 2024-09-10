#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLevelFinishedController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLevelFinishedController)
namespace GlobalNamespace {
class BeatmapBasicData;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class __MultiplayerLevelFinishedController___StartLevelFinished_d__20;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLevelFinishedController;
}
namespace GlobalNamespace {
class __MultiplayerLevelFinishedController___StartLevelFinished_d__20;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLevelFinishedController);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__20);
// Type: ::<StartLevelFinished>d__20
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLevelFinishedController::<StartLevelFinished>d__20*
class CORDL_TYPE __MultiplayerLevelFinishedController___StartLevelFinished_d__20 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MultiplayerLevelFinishedController>  __4__this;

/// @brief Field <isPlayingAlone>5__3, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__isPlayingAlone_5__3, put=__cordl_internal_set__isPlayingAlone_5__3)) bool  _isPlayingAlone_5__3;

/// @brief Field <resultsTimeoutLength>5__4, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__resultsTimeoutLength_5__4, put=__cordl_internal_set__resultsTimeoutLength_5__4)) float_t  _resultsTimeoutLength_5__4;

/// @brief Field <waitStartTime>5__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__waitStartTime_5__2, put=__cordl_internal_set__waitStartTime_5__2)) float_t  _waitStartTime_5__2;

/// @brief Field localPlayerResults, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_localPlayerResults, put=__cordl_internal_set_localPlayerResults)) ::GlobalNamespace::MultiplayerLevelCompletionResults*  localPlayerResults;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x3b1bd58, size 0x4a4, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__20* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3b1c1fc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x3b1c204, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3b1c23c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x3b1bd54, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelFinishedController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelFinishedController>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get__isPlayingAlone_5__3() const;

constexpr bool& __cordl_internal_get__isPlayingAlone_5__3() ;

constexpr float_t const& __cordl_internal_get__resultsTimeoutLength_5__4() const;

constexpr float_t& __cordl_internal_get__resultsTimeoutLength_5__4() ;

constexpr float_t const& __cordl_internal_get__waitStartTime_5__2() const;

constexpr float_t& __cordl_internal_get__waitStartTime_5__2() ;

constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults*& __cordl_internal_get_localPlayerResults() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelCompletionResults*> const& __cordl_internal_get_localPlayerResults() const;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MultiplayerLevelFinishedController>  value) ;

constexpr void __cordl_internal_set__isPlayingAlone_5__3(bool  value) ;

constexpr void __cordl_internal_set__resultsTimeoutLength_5__4(float_t  value) ;

constexpr void __cordl_internal_set__waitStartTime_5__2(float_t  value) ;

constexpr void __cordl_internal_set_localPlayerResults(::GlobalNamespace::MultiplayerLevelCompletionResults*  value) ;

/// @brief Method .ctor, addr 0x3b1ba48, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __MultiplayerLevelFinishedController___StartLevelFinished_d__20() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLevelFinishedController___StartLevelFinished_d__20", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerLevelFinishedController___StartLevelFinished_d__20(__MultiplayerLevelFinishedController___StartLevelFinished_d__20 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLevelFinishedController___StartLevelFinished_d__20", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerLevelFinishedController___StartLevelFinished_d__20(__MultiplayerLevelFinishedController___StartLevelFinished_d__20 const& ) = delete;

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field localPlayerResults, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::MultiplayerLevelCompletionResults*  ___localPlayerResults;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MultiplayerLevelFinishedController>  _____4__this;

/// @brief Field <waitStartTime>5__2, offset: 0x30, size: 0x4, def value: None
 float_t  ____waitStartTime_5__2;

/// @brief Field <isPlayingAlone>5__3, offset: 0x34, size: 0x1, def value: None
 bool  ____isPlayingAlone_5__3;

/// @brief Field <resultsTimeoutLength>5__4, offset: 0x38, size: 0x4, def value: None
 float_t  ____resultsTimeoutLength_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__20, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__20, ___localPlayerResults) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__20, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__20, ____waitStartTime_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__20, ____isPlayingAlone_5__3) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__20, ____resultsTimeoutLength_5__4) == 0x38, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MultiplayerLevelFinishedController
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLevelFinishedController*
class CORDL_TYPE MultiplayerLevelFinishedController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _StartLevelFinished_d__20 = ::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__20;

/// @brief Field _beatmapBasicData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatmapBasicData, put=__cordl_internal_set__beatmapBasicData)) ::GlobalNamespace::BeatmapBasicData*  _beatmapBasicData;

/// @brief Field _gameFinishReported, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__gameFinishReported, put=__cordl_internal_set__gameFinishReported)) bool  _gameFinishReported;

/// @brief Field _levelEndActionsPublisher, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__levelEndActionsPublisher, put=__cordl_internal_set__levelEndActionsPublisher)) ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*  _levelEndActionsPublisher;

/// @brief Field _localPlayerResults, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__localPlayerResults, put=__cordl_internal_set__localPlayerResults)) ::GlobalNamespace::MultiplayerLevelCompletionResults*  _localPlayerResults;

/// @brief Field _multiplayerSessionManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__multiplayerSessionManager, put=__cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager*  _multiplayerSessionManager;

/// @brief Field _otherPlayersCompletionResults, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__otherPlayersCompletionResults, put=__cordl_internal_set__otherPlayersCompletionResults)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*  _otherPlayersCompletionResults;

/// @brief Field _rpcManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rpcManager, put=__cordl_internal_set__rpcManager)) ::GlobalNamespace::IGameplayRpcManager*  _rpcManager;

/// @brief Field _sceneLoadTime, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sceneLoadTime, put=__cordl_internal_set__sceneLoadTime)) float_t  _sceneLoadTime;

/// @brief Field allResultsCollectedEvent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_allResultsCollectedEvent, put=__cordl_internal_set_allResultsCollectedEvent)) ::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*>*  allResultsCollectedEvent;

 __declspec(property(get=get_gameResultsReady)) bool  gameResultsReady;

 __declspec(property(get=get_localPlayerResults)) ::GlobalNamespace::MultiplayerLevelCompletionResults*  localPlayerResults;

 __declspec(property(get=get_otherPlayersCompletionResults)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*  otherPlayersCompletionResults;

/// @brief Method HandlePlayerDidFinish, addr 0x3b1ba70, size 0x20, virtual false, abstract: false, final false
inline void HandlePlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults*  levelCompletionResults) ;

/// @brief Method HandlePlayerNetworkDidFailed, addr 0x3b1ba90, size 0x34, virtual false, abstract: false, final false
inline void HandlePlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults*  levelCompletionResults) ;

/// @brief Method HandleRpcLevelFinished, addr 0x3b1bac4, size 0x214, virtual false, abstract: false, final false
inline void HandleRpcLevelFinished(::StringW  userId, ::GlobalNamespace::MultiplayerLevelCompletionResults*  results) ;

static inline ::GlobalNamespace::MultiplayerLevelFinishedController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x3b1b774, size 0x268, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x3b1b518, size 0x25c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartLevelFinished, addr 0x3b1b9dc, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* StartLevelFinished(::GlobalNamespace::MultiplayerLevelCompletionResults*  localPlayerResults) ;

constexpr ::GlobalNamespace::BeatmapBasicData*& __cordl_internal_get__beatmapBasicData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapBasicData*> const& __cordl_internal_get__beatmapBasicData() const;

constexpr bool const& __cordl_internal_get__gameFinishReported() const;

constexpr bool& __cordl_internal_get__gameFinishReported() ;

constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*& __cordl_internal_get__levelEndActionsPublisher() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*> const& __cordl_internal_get__levelEndActionsPublisher() const;

constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults*& __cordl_internal_get__localPlayerResults() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelCompletionResults*> const& __cordl_internal_get__localPlayerResults() const;

constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __cordl_internal_get__otherPlayersCompletionResults() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const& __cordl_internal_get__otherPlayersCompletionResults() const;

constexpr ::GlobalNamespace::IGameplayRpcManager*& __cordl_internal_get__rpcManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> const& __cordl_internal_get__rpcManager() const;

constexpr float_t const& __cordl_internal_get__sceneLoadTime() const;

constexpr float_t& __cordl_internal_get__sceneLoadTime() ;

constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*>*& __cordl_internal_get_allResultsCollectedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*>*> const& __cordl_internal_get_allResultsCollectedEvent() const;

constexpr void __cordl_internal_set__beatmapBasicData(::GlobalNamespace::BeatmapBasicData*  value) ;

constexpr void __cordl_internal_set__gameFinishReported(bool  value) ;

constexpr void __cordl_internal_set__levelEndActionsPublisher(::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*  value) ;

constexpr void __cordl_internal_set__localPlayerResults(::GlobalNamespace::MultiplayerLevelCompletionResults*  value) ;

constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value) ;

constexpr void __cordl_internal_set__otherPlayersCompletionResults(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*  value) ;

constexpr void __cordl_internal_set__rpcManager(::GlobalNamespace::IGameplayRpcManager*  value) ;

constexpr void __cordl_internal_set__sceneLoadTime(float_t  value) ;

constexpr void __cordl_internal_set_allResultsCollectedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*>*  value) ;

/// @brief Method .ctor, addr 0x3b1bcd8, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_allResultsCollectedEvent, addr 0x3b1b3a0, size 0xb0, virtual false, abstract: false, final false
inline void add_allResultsCollectedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*>*  value) ;

/// @brief Method get_gameResultsReady, addr 0x3b1b500, size 0x8, virtual false, abstract: false, final false
inline bool get_gameResultsReady() ;

/// @brief Method get_localPlayerResults, addr 0x3b1b510, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MultiplayerLevelCompletionResults* get_localPlayerResults() ;

/// @brief Method get_otherPlayersCompletionResults, addr 0x3b1b508, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>* get_otherPlayersCompletionResults() ;

/// @brief Method remove_allResultsCollectedEvent, addr 0x3b1b450, size 0xb0, virtual false, abstract: false, final false
inline void remove_allResultsCollectedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiplayerLevelFinishedController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelFinishedController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLevelFinishedController(MultiplayerLevelFinishedController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelFinishedController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLevelFinishedController(MultiplayerLevelFinishedController const& ) = delete;

/// @brief Field _levelEndActionsPublisher, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*  ____levelEndActionsPublisher;

/// @brief Field _rpcManager, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::IGameplayRpcManager*  ____rpcManager;

/// @brief Field _multiplayerSessionManager, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::IMultiplayerSessionManager*  ____multiplayerSessionManager;

/// @brief Field _beatmapBasicData, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::BeatmapBasicData*  ____beatmapBasicData;

/// @brief Field allResultsCollectedEvent, offset: 0x40, size: 0x8, def value: None
 ::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*>*  ___allResultsCollectedEvent;

/// @brief Field _otherPlayersCompletionResults, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults*>*  ____otherPlayersCompletionResults;

/// @brief Field _localPlayerResults, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::MultiplayerLevelCompletionResults*  ____localPlayerResults;

/// @brief Field _gameFinishReported, offset: 0x58, size: 0x1, def value: None
 bool  ____gameFinishReported;

/// @brief Field _sceneLoadTime, offset: 0x5c, size: 0x4, def value: None
 float_t  ____sceneLoadTime;

/// @brief Field kMinSceneDuration offset 0xffffffff size 0x4
static constexpr float_t  kMinSceneDuration{2.0};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelFinishedController, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelFinishedController, ____levelEndActionsPublisher) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelFinishedController, ____rpcManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelFinishedController, ____multiplayerSessionManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelFinishedController, ____beatmapBasicData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelFinishedController, ___allResultsCollectedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelFinishedController, ____otherPlayersCompletionResults) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelFinishedController, ____localPlayerResults) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelFinishedController, ____gameFinishReported) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelFinishedController, ____sceneLoadTime) == 0x5c, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelFinishedController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelFinishedController*, "", "MultiplayerLevelFinishedController");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__20);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLevelFinishedController___StartLevelFinished_d__20*, "", "MultiplayerLevelFinishedController/<StartLevelFinished>d__20");
