#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DisconnectedPlayer)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
// Forward declare root types
namespace GlobalNamespace {
class DisconnectedPlayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisconnectedPlayer);
// Type: ::DisconnectedPlayer
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15021)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12719))
// CS Name: ::DisconnectedPlayer*
class CORDL_TYPE DisconnectedPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field <userId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__userId_k__BackingField, put = __set__userId_k__BackingField))::StringW _userId_k__BackingField;

  /// @brief Field <userName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__userName_k__BackingField, put = __set__userName_k__BackingField))::StringW _userName_k__BackingField;

  /// @brief Field <sortIndex>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__sortIndex_k__BackingField, put = __set__sortIndex_k__BackingField)) int32_t _sortIndex_k__BackingField;

  /// @brief Field <multiplayerAvatarsData>k__BackingField, offset 0x28, size 0x18
  __declspec(property(get = __get__multiplayerAvatarsData_k__BackingField,
                      put = __set__multiplayerAvatarsData_k__BackingField))::GlobalNamespace::MultiplayerAvatarsData _multiplayerAvatarsData_k__BackingField;

  __declspec(property(get = get_offsetSyncTime)) int64_t offsetSyncTime;

  __declspec(property(get = get_isFailed)) bool isFailed;

  __declspec(property(get = get_isMe)) bool isMe;

  __declspec(property(get = get_userId, put = set_userId))::StringW userId;

  __declspec(property(get = get_userName, put = set_userName))::StringW userName;

  __declspec(property(get = get_hasValidLatency)) bool hasValidLatency;

  __declspec(property(get = get_currentLatency)) int64_t currentLatency;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_disconnectedReason))::GlobalNamespace::DisconnectedReason disconnectedReason;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_sortIndex)) int32_t sortIndex;

  __declspec(property(get = get_multiplayerAvatarsData))::GlobalNamespace::MultiplayerAvatarsData multiplayerAvatarsData;

  __declspec(property(get = get_isKicked)) bool isKicked;

  /// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
  constexpr operator ::GlobalNamespace::IConnectedPlayer*() noexcept;

  constexpr ::StringW& __get__userId_k__BackingField();

  constexpr ::StringW const& __get__userId_k__BackingField() const;

  constexpr void __set__userId_k__BackingField(::StringW value);

  constexpr ::StringW& __get__userName_k__BackingField();

  constexpr ::StringW const& __get__userName_k__BackingField() const;

  constexpr void __set__userName_k__BackingField(::StringW value);

  constexpr int32_t& __get__sortIndex_k__BackingField();

  constexpr int32_t const& __get__sortIndex_k__BackingField() const;

  constexpr void __set__sortIndex_k__BackingField(int32_t value);

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __get__multiplayerAvatarsData_k__BackingField();

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __get__multiplayerAvatarsData_k__BackingField() const;

  constexpr void __set__multiplayerAvatarsData_k__BackingField(::GlobalNamespace::MultiplayerAvatarsData value);

  /// @brief Method get_offsetSyncTime addr 0xe33aa8 size 0x8 virtual true final true
  inline int64_t get_offsetSyncTime();

  /// @brief Method get_isFailed addr 0xe33ab0 size 0x8 virtual false final false
  inline bool get_isFailed();

  /// @brief Method get_isMe addr 0xe33ab8 size 0x8 virtual true final true
  inline bool get_isMe();

  /// @brief Method get_userId addr 0xe33ac0 size 0x8 virtual true final true
  inline ::StringW get_userId();

  /// @brief Method set_userId addr 0xe33ac8 size 0x8 virtual false final false
  inline void set_userId(::StringW value);

  /// @brief Method get_userName addr 0xe33ad0 size 0x8 virtual true final true
  inline ::StringW get_userName();

  /// @brief Method set_userName addr 0xe33ad8 size 0x8 virtual false final false
  inline void set_userName(::StringW value);

  /// @brief Method get_hasValidLatency addr 0xe33ae0 size 0x8 virtual true final true
  inline bool get_hasValidLatency();

  /// @brief Method get_currentLatency addr 0xe33ae8 size 0x8 virtual true final true
  inline int64_t get_currentLatency();

  /// @brief Method get_isConnected addr 0xe33af0 size 0x8 virtual true final true
  inline bool get_isConnected();

  /// @brief Method get_disconnectedReason addr 0xe33af8 size 0x8 virtual true final true
  inline ::GlobalNamespace::DisconnectedReason get_disconnectedReason();

  /// @brief Method get_isConnectionOwner addr 0xe33b00 size 0x8 virtual true final true
  inline bool get_isConnectionOwner();

  /// @brief Method get_sortIndex addr 0xe33b08 size 0x8 virtual true final true
  inline int32_t get_sortIndex();

  /// @brief Method get_multiplayerAvatarsData addr 0xe33b10 size 0x14 virtual true final true
  inline ::GlobalNamespace::MultiplayerAvatarsData get_multiplayerAvatarsData();

  /// @brief Method get_isKicked addr 0xe33b24 size 0x8 virtual true final true
  inline bool get_isKicked();

  /// @brief Method HasState addr 0xe33b2c size 0x8 virtual true final true
  inline bool HasState(::StringW state);

  static inline ::GlobalNamespace::DisconnectedPlayer* New_ctor(::StringW userId, ::StringW userName, int32_t sortIndex);

  /// @brief Method .ctor addr 0xe33b34 size 0x44 virtual false final false
  inline void _ctor(::StringW userId, ::StringW userName, int32_t sortIndex);

  // Ctor Parameters [CppParam { name: "", ty: "DisconnectedPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisconnectedPlayer(DisconnectedPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisconnectedPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisconnectedPlayer(DisconnectedPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisconnectedPlayer();

public:
  /// @brief Field <userId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____userId_k__BackingField;

  /// @brief Field <userName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____userName_k__BackingField;

  /// @brief Field <sortIndex>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____sortIndex_k__BackingField;

  /// @brief Field <multiplayerAvatarsData>k__BackingField, offset: 0x28, size: 0x18, def value: None
  ::GlobalNamespace::MultiplayerAvatarsData ____multiplayerAvatarsData_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisconnectedPlayer, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisconnectedPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisconnectedPlayer*, "", "DisconnectedPlayer");
