#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalPlayerInstaller)
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerLevelSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalPlayerInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalPlayerInstaller);
// Type: ::MultiplayerLocalPlayerInstaller
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLocalPlayerInstaller*
class CORDL_TYPE MultiplayerLocalPlayerInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _levelSceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelSceneSetupData, put = __cordl_internal_set__levelSceneSetupData))::GlobalNamespace::MultiplayerLevelSceneSetupData* _levelSceneSetupData;

  /// @brief Field _multiplayerSessionManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field _startState, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__startState, put = __cordl_internal_set__startState))::GlobalNamespace::MultiplayerPlayerStartState _startState;

  /// @brief Method InstallBindings, addr 0x26316b8, size 0x238, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MultiplayerLocalPlayerInstaller* New_ctor();

  constexpr ::GlobalNamespace::MultiplayerLevelSceneSetupData*& __cordl_internal_get__levelSceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelSceneSetupData*> const& __cordl_internal_get__levelSceneSetupData() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::MultiplayerPlayerStartState const& __cordl_internal_get__startState() const;

  constexpr ::GlobalNamespace::MultiplayerPlayerStartState& __cordl_internal_get__startState();

  constexpr void __cordl_internal_set__levelSceneSetupData(::GlobalNamespace::MultiplayerLevelSceneSetupData* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set__startState(::GlobalNamespace::MultiplayerPlayerStartState value);

  /// @brief Method .ctor, addr 0x26318f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalPlayerInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalPlayerInstaller(MultiplayerLocalPlayerInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalPlayerInstaller(MultiplayerLocalPlayerInstaller const&) = delete;

  /// @brief Field _levelSceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLevelSceneSetupData* ____levelSceneSetupData;

  /// @brief Field _multiplayerSessionManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  /// @brief Field _startState, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerPlayerStartState ____startState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalPlayerInstaller, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalPlayerInstaller, ____levelSceneSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalPlayerInstaller, ____multiplayerSessionManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalPlayerInstaller, ____startState) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalPlayerInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalPlayerInstaller*, "", "MultiplayerLocalPlayerInstaller");
