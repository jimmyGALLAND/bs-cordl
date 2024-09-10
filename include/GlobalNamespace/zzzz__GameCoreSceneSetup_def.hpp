#pragma once
// IWYU pragma private; include "GlobalNamespace/GameCoreSceneSetup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameCoreSceneSetup)
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
class ScreenCaptureAfterDelay;
}
namespace GlobalNamespace {
class SettingsManager;
}
// Forward declare root types
namespace GlobalNamespace {
class GameCoreSceneSetup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameCoreSceneSetup);
// Type: ::GameCoreSceneSetup
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameCoreSceneSetup*
class CORDL_TYPE GameCoreSceneSetup : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief Field _bloomFog, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__bloomFog, put=__cordl_internal_set__bloomFog)) ::UnityW<::GlobalNamespace::BloomFogSO>  _bloomFog;

/// @brief Field _screenCaptureAfterDelayPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__screenCaptureAfterDelayPrefab, put=__cordl_internal_set__screenCaptureAfterDelayPrefab)) ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay>  _screenCaptureAfterDelayPrefab;

/// @brief Field _settingsManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsManager, put=__cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager*  _settingsManager;

/// @brief Method InstallBindings, addr 0x3aaa794, size 0x428, virtual true, abstract: false, final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::GameCoreSceneSetup* New_ctor() ;

/// @brief Method OnDestroy, addr 0x3aaabbc, size 0x48, virtual true, abstract: false, final false
inline void OnDestroy() ;

constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& __cordl_internal_get__bloomFog() const;

constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& __cordl_internal_get__bloomFog() ;

constexpr ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> const& __cordl_internal_get__screenCaptureAfterDelayPrefab() const;

constexpr ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay>& __cordl_internal_get__screenCaptureAfterDelayPrefab() ;

constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsManager*> const& __cordl_internal_get__settingsManager() const;

constexpr void __cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO>  value) ;

constexpr void __cordl_internal_set__screenCaptureAfterDelayPrefab(::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay>  value) ;

constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager*  value) ;

/// @brief Method .ctor, addr 0x3aaac04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameCoreSceneSetup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameCoreSceneSetup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameCoreSceneSetup(GameCoreSceneSetup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameCoreSceneSetup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameCoreSceneSetup(GameCoreSceneSetup const& ) = delete;

/// @brief Field _screenCaptureAfterDelayPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay>  ____screenCaptureAfterDelayPrefab;

/// @brief Field _bloomFog, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BloomFogSO>  ____bloomFog;

/// @brief Field _settingsManager, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::SettingsManager*  ____settingsManager;

/// @brief Field kPauseButtonPressDuration offset 0xffffffff size 0x4
static constexpr float_t  kPauseButtonPressDuration{0.75};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameCoreSceneSetup, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameCoreSceneSetup, ____screenCaptureAfterDelayPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameCoreSceneSetup, ____bloomFog) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameCoreSceneSetup, ____settingsManager) == 0x38, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameCoreSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameCoreSceneSetup*, "", "GameCoreSceneSetup");
