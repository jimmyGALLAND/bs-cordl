#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MissionLevelFailedController)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class LevelFailedTextEffect;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class __MissionLevelFailedController__InitData;
}
namespace GlobalNamespace {
class __MissionLevelFailedController___LevelFailedCoroutine_d__13;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelFailedController;
}
namespace GlobalNamespace {
class __MissionLevelFailedController__InitData;
}
namespace GlobalNamespace {
class __MissionLevelFailedController___LevelFailedCoroutine_d__13;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelFailedController);
MARK_REF_PTR_T(::GlobalNamespace::__MissionLevelFailedController__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionLevelFailedController::InitData*
class CORDL_TYPE __MissionLevelFailedController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field autoRestart, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_autoRestart, put = __cordl_internal_set_autoRestart)) bool autoRestart;

  static inline ::GlobalNamespace::__MissionLevelFailedController__InitData* New_ctor(bool autoRestart);

  constexpr bool const& __cordl_internal_get_autoRestart() const;

  constexpr bool& __cordl_internal_get_autoRestart();

  constexpr void __cordl_internal_set_autoRestart(bool value);

  /// @brief Method .ctor, addr 0x25e8ac0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool autoRestart);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionLevelFailedController__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelFailedController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionLevelFailedController__InitData(__MissionLevelFailedController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelFailedController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionLevelFailedController__InitData(__MissionLevelFailedController__InitData const&) = delete;

  /// @brief Field autoRestart, offset: 0x10, size: 0x1, def value: None
  bool ___autoRestart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionLevelFailedController__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionLevelFailedController__InitData, ___autoRestart) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LevelFailedCoroutine>d__13
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionLevelFailedController::<LevelFailedCoroutine>d__13*
class CORDL_TYPE __MissionLevelFailedController___LevelFailedCoroutine_d__13 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MissionLevelFailedController> __4__this;

  /// @brief Field <missionCompletionResults>5__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__missionCompletionResults_5__2,
                      put = __cordl_internal_set__missionCompletionResults_5__2))::GlobalNamespace::MissionCompletionResults* _missionCompletionResults_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x25e8aec, size 0x178, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x25e8c64, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x25e8c6c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x25e8cac, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x25e8ae8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelFailedController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelFailedController>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::MissionCompletionResults*& __cordl_internal_get__missionCompletionResults_5__2();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionCompletionResults*> const& __cordl_internal_get__missionCompletionResults_5__2() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionLevelFailedController> value);

  constexpr void __cordl_internal_set__missionCompletionResults_5__2(::GlobalNamespace::MissionCompletionResults* value);

  /// @brief Method .ctor, addr 0x25e8a90, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionLevelFailedController___LevelFailedCoroutine_d__13();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelFailedController___LevelFailedCoroutine_d__13", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionLevelFailedController___LevelFailedCoroutine_d__13(__MissionLevelFailedController___LevelFailedCoroutine_d__13&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelFailedController___LevelFailedCoroutine_d__13", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionLevelFailedController___LevelFailedCoroutine_d__13(__MissionLevelFailedController___LevelFailedCoroutine_d__13 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelFailedController> _____4__this;

  /// @brief Field <missionCompletionResults>5__2, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MissionCompletionResults* ____missionCompletionResults_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13, ____missionCompletionResults_5__2) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MissionLevelFailedController
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionLevelFailedController*
class CORDL_TYPE MissionLevelFailedController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__MissionLevelFailedController__InitData;

  using _LevelFailedCoroutine_d__13 = ::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13;

  /// @brief Field _beatmapObjectManager, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _beatmapObjectSpawnController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectSpawnController,
                      put = __cordl_internal_set__beatmapObjectSpawnController))::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> _beatmapObjectSpawnController;

  /// @brief Field _gameSongController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__gameSongController, put = __cordl_internal_set__gameSongController))::UnityW<::GlobalNamespace::GameSongController> _gameSongController;

  /// @brief Field _gameplayManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayManager, put = __cordl_internal_set__gameplayManager))::GlobalNamespace::ILevelEndActions* _gameplayManager;

  /// @brief Field _initData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__MissionLevelFailedController__InitData* _initData;

  /// @brief Field _levelFailedTextEffect, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelFailedTextEffect, put = __cordl_internal_set__levelFailedTextEffect))::UnityW<::GlobalNamespace::LevelFailedTextEffect> _levelFailedTextEffect;

  /// @brief Field _missionLevelSceneSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelSceneSetupData,
                      put = __cordl_internal_set__missionLevelSceneSetupData))::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> _missionLevelSceneSetupData;

  /// @brief Field _missionObjectiveCheckersManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjectiveCheckersManager,
                      put = __cordl_internal_set__missionObjectiveCheckersManager))::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> _missionObjectiveCheckersManager;

  /// @brief Field _prepareLevelCompletionResults, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__prepareLevelCompletionResults,
                      put = __cordl_internal_set__prepareLevelCompletionResults))::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> _prepareLevelCompletionResults;

  /// @brief Method HandleLevelFailed, addr 0x25e8a08, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelFailed();

  /// @brief Method LevelFailedCoroutine, addr 0x25e8a28, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* LevelFailedCoroutine();

  static inline ::GlobalNamespace::MissionLevelFailedController* New_ctor();

  /// @brief Method OnDestroy, addr 0x25e8900, size 0x108, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x25e8814, size 0xec, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> const& __cordl_internal_get__beatmapObjectSpawnController() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController>& __cordl_internal_get__beatmapObjectSpawnController();

  constexpr ::UnityW<::GlobalNamespace::GameSongController> const& __cordl_internal_get__gameSongController() const;

  constexpr ::UnityW<::GlobalNamespace::GameSongController>& __cordl_internal_get__gameSongController();

  constexpr ::GlobalNamespace::ILevelEndActions*& __cordl_internal_get__gameplayManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> const& __cordl_internal_get__gameplayManager() const;

  constexpr ::GlobalNamespace::__MissionLevelFailedController__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MissionLevelFailedController__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::UnityW<::GlobalNamespace::LevelFailedTextEffect> const& __cordl_internal_get__levelFailedTextEffect() const;

  constexpr ::UnityW<::GlobalNamespace::LevelFailedTextEffect>& __cordl_internal_get__levelFailedTextEffect();

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__missionLevelSceneSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& __cordl_internal_get__missionLevelSceneSetupData();

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> const& __cordl_internal_get__missionObjectiveCheckersManager() const;

  constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>& __cordl_internal_get__missionObjectiveCheckersManager();

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> const& __cordl_internal_get__prepareLevelCompletionResults() const;

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>& __cordl_internal_get__prepareLevelCompletionResults();

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__beatmapObjectSpawnController(::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> value);

  constexpr void __cordl_internal_set__gameSongController(::UnityW<::GlobalNamespace::GameSongController> value);

  constexpr void __cordl_internal_set__gameplayManager(::GlobalNamespace::ILevelEndActions* value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__MissionLevelFailedController__InitData* value);

  constexpr void __cordl_internal_set__levelFailedTextEffect(::UnityW<::GlobalNamespace::LevelFailedTextEffect> value);

  constexpr void __cordl_internal_set__missionLevelSceneSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__missionObjectiveCheckersManager(::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> value);

  constexpr void __cordl_internal_set__prepareLevelCompletionResults(::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> value);

  /// @brief Method .ctor, addr 0x25e8ab8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelFailedController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelFailedController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelFailedController(MissionLevelFailedController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelFailedController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelFailedController(MissionLevelFailedController const&) = delete;

  /// @brief Field _prepareLevelCompletionResults, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> ____prepareLevelCompletionResults;

  /// @brief Field _levelFailedTextEffect, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelFailedTextEffect> ____levelFailedTextEffect;

  /// @brief Field _missionLevelSceneSetupData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> ____missionLevelSceneSetupData;

  /// @brief Field _missionObjectiveCheckersManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> ____missionObjectiveCheckersManager;

  /// @brief Field _initData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__MissionLevelFailedController__InitData* ____initData;

  /// @brief Field _beatmapObjectSpawnController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> ____beatmapObjectSpawnController;

  /// @brief Field _gameSongController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameSongController> ____gameSongController;

  /// @brief Field _gameplayManager, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::ILevelEndActions* ____gameplayManager;

  /// @brief Field _beatmapObjectManager, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelFailedController, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelFailedController, ____prepareLevelCompletionResults) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelFailedController, ____levelFailedTextEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelFailedController, ____missionLevelSceneSetupData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelFailedController, ____missionObjectiveCheckersManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelFailedController, ____initData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelFailedController, ____beatmapObjectSpawnController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelFailedController, ____gameSongController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelFailedController, ____gameplayManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelFailedController, ____beatmapObjectManager) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelFailedController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelFailedController*, "", "MissionLevelFailedController");
NEED_NO_BOX(::GlobalNamespace::__MissionLevelFailedController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionLevelFailedController__InitData*, "", "MissionLevelFailedController/InitData");
NEED_NO_BOX(::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13*, "", "MissionLevelFailedController/<LevelFailedCoroutine>d__13");
