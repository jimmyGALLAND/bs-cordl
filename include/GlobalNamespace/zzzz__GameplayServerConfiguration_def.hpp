#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DiscoveryPolicy_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerControlSettings_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerMode_def.hpp"
#include "GlobalNamespace/zzzz__InvitePolicy_def.hpp"
#include "GlobalNamespace/zzzz__SongSelectionMode_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayServerConfiguration)
namespace GlobalNamespace {
struct InvitePolicy;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
struct GameplayServerMode;
}
namespace LiteNetLib::Utils {
template <typename T> class INetImmutableSerializable_1;
}
namespace GlobalNamespace {
struct DiscoveryPolicy;
}
namespace GlobalNamespace {
struct GameplayServerControlSettings;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
struct SongSelectionMode;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameplayServerConfiguration);
// Type: ::GameplayServerConfiguration
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12759)), TypeDefinitionIndex(TypeDefinitionIndex(12721)), TypeDefinitionIndex(TypeDefinitionIndex(12768)),
// TypeDefinitionIndex(TypeDefinitionIndex(12959)), TypeDefinitionIndex(TypeDefinitionIndex(12804))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12758)) CS Name: ::GameplayServerConfiguration
struct CORDL_TYPE GameplayServerConfiguration {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>*();

  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>*();

  /// @brief Method .ctor addr 0xe38c60 size 0x14 virtual false final false
  inline void _ctor(int32_t maxPlayerCount, ::GlobalNamespace::DiscoveryPolicy discoveryPolicy, ::GlobalNamespace::InvitePolicy invitePolicy, ::GlobalNamespace::GameplayServerMode gameplayServerMode,
                    ::GlobalNamespace::SongSelectionMode songSelectionMode, ::GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings);

  /// @brief Method Equals addr 0xe3baec size 0x6c virtual false final false
  inline bool Equals(ByRef<::GlobalNamespace::GameplayServerConfiguration> other);

  /// @brief Method Equals addr 0xe3bb58 size 0x4 virtual true final true
  inline bool Equals(::GlobalNamespace::GameplayServerConfiguration other);

  /// @brief Method Equals addr 0xe3bb5c size 0xc8 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0xe3bc24 size 0x40 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0xe3bc64 size 0x4 virtual false final false
  static inline bool op_Equality(ByRef<::GlobalNamespace::GameplayServerConfiguration> a, ByRef<::GlobalNamespace::GameplayServerConfiguration> b);

  /// @brief Method op_Inequality addr 0xe3bc68 size 0x18 virtual false final false
  static inline bool op_Inequality(ByRef<::GlobalNamespace::GameplayServerConfiguration> a, ByRef<::GlobalNamespace::GameplayServerConfiguration> b);

  /// @brief Method Serialize addr 0xe3bc80 size 0x7c virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method CreateFromSerializedData addr 0xe3bcfc size 0x34 virtual true final true
  inline ::GlobalNamespace::GameplayServerConfiguration CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Deserialize addr 0xe3bd30 size 0x98 virtual false final false
  static inline ::GlobalNamespace::GameplayServerConfiguration Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method WithMaxPlayerCount addr 0xe3bdc8 size 0x1c virtual false final false
  inline ::GlobalNamespace::GameplayServerConfiguration WithMaxPlayerCount(int32_t maxPlayerCount);

  // Ctor Parameters [CppParam { name: "maxPlayerCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "discoveryPolicy", ty: "::GlobalNamespace::DiscoveryPolicy", modifiers: "",
  // def_value: None }, CppParam { name: "invitePolicy", ty: "::GlobalNamespace::InvitePolicy", modifiers: "", def_value: None }, CppParam { name: "gameplayServerMode", ty:
  // "::GlobalNamespace::GameplayServerMode", modifiers: "", def_value: None }, CppParam { name: "songSelectionMode", ty: "::GlobalNamespace::SongSelectionMode", modifiers: "", def_value: None },
  // CppParam { name: "gameplayServerControlSettings", ty: "::GlobalNamespace::GameplayServerControlSettings", modifiers: "", def_value: None }]
  constexpr GameplayServerConfiguration(int32_t maxPlayerCount, ::GlobalNamespace::DiscoveryPolicy discoveryPolicy, ::GlobalNamespace::InvitePolicy invitePolicy,
                                        ::GlobalNamespace::GameplayServerMode gameplayServerMode, ::GlobalNamespace::SongSelectionMode songSelectionMode,
                                        ::GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayServerConfiguration();

  /// @brief Field maxPlayerCount, offset: 0x0, size: 0x4, def value: None
  int32_t maxPlayerCount;

  /// @brief Field discoveryPolicy, offset: 0x4, size: 0x1, def value: None
  ::GlobalNamespace::DiscoveryPolicy discoveryPolicy;

  /// @brief Field invitePolicy, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::InvitePolicy invitePolicy;

  /// @brief Field gameplayServerMode, offset: 0xc, size: 0x4, def value: None
  ::GlobalNamespace::GameplayServerMode gameplayServerMode;

  /// @brief Field songSelectionMode, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::SongSelectionMode songSelectionMode;

  /// @brief Field gameplayServerControlSettings, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayServerConfiguration, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayServerConfiguration, "", "GameplayServerConfiguration");
