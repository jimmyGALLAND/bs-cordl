#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerOffsetPositionByLocalPlayerPosition)
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerOffsetPositionByLocalPlayerPosition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition);
// Type: ::MultiplayerOffsetPositionByLocalPlayerPosition
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerOffsetPositionByLocalPlayerPosition*
class CORDL_TYPE MultiplayerOffsetPositionByLocalPlayerPosition : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lastParentPosition, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get__lastParentPosition, put = __cordl_internal_set__lastParentPosition))::UnityEngine::Vector3 _lastParentPosition;

  /// @brief Field _lastParentRotation, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__lastParentRotation, put = __cordl_internal_set__lastParentRotation))::UnityEngine::Quaternion _lastParentRotation;

  /// @brief Field _multiplayerPlayersManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerPlayersManager,
                      put = __cordl_internal_set__multiplayerPlayersManager))::UnityW<::GlobalNamespace::MultiplayerPlayersManager> _multiplayerPlayersManager;

  /// @brief Field _positionOffset, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get__positionOffset, put = __cordl_internal_set__positionOffset))::UnityEngine::Vector3 _positionOffset;

  /// @brief Field _rotationOffset, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get__rotationOffset, put = __cordl_internal_set__rotationOffset))::UnityEngine::Quaternion _rotationOffset;

  /// @brief Method Awake, addr 0x2614e08, size 0x50, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* New_ctor();

  /// @brief Method SetEnabled, addr 0x260faf8, size 0xc, virtual false, abstract: false, final false
  inline void SetEnabled(bool isEnabled);

  /// @brief Method Update, addr 0x2614e58, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdatePositionAndRotationIfNeeded, addr 0x2614e5c, size 0x208, virtual false, abstract: false, final false
  inline void UpdatePositionAndRotationIfNeeded();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastParentPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastParentPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__lastParentRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__lastParentRotation();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& __cordl_internal_get__multiplayerPlayersManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& __cordl_internal_get__multiplayerPlayersManager();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__positionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__positionOffset();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__rotationOffset() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__rotationOffset();

  constexpr void __cordl_internal_set__lastParentPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__lastParentRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__multiplayerPlayersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value);

  constexpr void __cordl_internal_set__positionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__rotationOffset(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x26150e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerOffsetPositionByLocalPlayerPosition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerOffsetPositionByLocalPlayerPosition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerOffsetPositionByLocalPlayerPosition(MultiplayerOffsetPositionByLocalPlayerPosition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerOffsetPositionByLocalPlayerPosition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerOffsetPositionByLocalPlayerPosition(MultiplayerOffsetPositionByLocalPlayerPosition const&) = delete;

  /// @brief Field _multiplayerPlayersManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> ____multiplayerPlayersManager;

  /// @brief Field _positionOffset, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____positionOffset;

  /// @brief Field _rotationOffset, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____rotationOffset;

  /// @brief Field _lastParentPosition, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____lastParentPosition;

  /// @brief Field _lastParentRotation, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____lastParentRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition, ____multiplayerPlayersManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition, ____positionOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition, ____rotationOffset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition, ____lastParentPosition) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition, ____lastParentRotation) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*, "", "MultiplayerOffsetPositionByLocalPlayerPosition");
