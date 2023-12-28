#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
CORDL_MODULE_EXPORT(PlayersLobbyPermissionConfigurationNetSerializable)
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class PlayerLobbyPermissionConfigurationNetSerializable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayersLobbyPermissionConfigurationNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable);
// Type: ::PlayersLobbyPermissionConfigurationNetSerializable
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15033))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15031))
// CS Name: ::PlayersLobbyPermissionConfigurationNetSerializable*
class CORDL_TYPE PlayersLobbyPermissionConfigurationNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
  // Declarations
  /// @brief Field _playersPermission, offset 0x18, size 0x8
  __declspec(property(get = __get__playersPermission,
                      put = __set__playersPermission))::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* _playersPermission;

  __declspec(property(get = get_playersPermission))::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* playersPermission;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>*& __get__playersPermission();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>*> const& __get__playersPermission() const;

  constexpr void __set__playersPermission(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* value);

  /// @brief Method get_playersPermission addr 0x12a5788 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* get_playersPermission();

  /// @brief Method Obtain addr 0x12a5790 size 0x64 virtual false final false
  static inline ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* Obtain();

  /// @brief Method Init addr 0x12a57f4 size 0x60 virtual false final false
  inline ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*
  Init(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* playersPermission);

  static inline ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* New_ctor();

  /// @brief Method .ctor addr 0x12a5854 size 0xa0 virtual false final false
  inline void _ctor();

  /// @brief Method Serialize addr 0x12a58f4 size 0x180 virtual true final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0x12a5a74 size 0x168 virtual true final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Release addr 0x12a5bdc size 0xc4 virtual true final false
  inline void Release();

  /// @brief Method Retain addr 0x12a5d10 size 0x9c virtual true final false
  inline void Retain();

  // Ctor Parameters [CppParam { name: "", ty: "PlayersLobbyPermissionConfigurationNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayersLobbyPermissionConfigurationNetSerializable(PlayersLobbyPermissionConfigurationNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayersLobbyPermissionConfigurationNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayersLobbyPermissionConfigurationNetSerializable(PlayersLobbyPermissionConfigurationNetSerializable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayersLobbyPermissionConfigurationNetSerializable();

public:
  /// @brief Field _playersPermission, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>* ____playersPermission;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*, "", "PlayersLobbyPermissionConfigurationNetSerializable");
