#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerAvatarData)
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerAvatarData);
// Type: ::MultiplayerAvatarData
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15020))
// CS Name: ::MultiplayerAvatarData
struct CORDL_TYPE MultiplayerAvatarData {
public:
  // Declarations
  /// @brief Method .ctor addr 0x12a341c size 0xc virtual false final false
  inline void _ctor(uint32_t avatarTypeIdentifierHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  // Ctor Parameters [CppParam { name: "avatarTypeIdentifierHash", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "",
  // def_value: None }]
  constexpr MultiplayerAvatarData(uint32_t avatarTypeIdentifierHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerAvatarData();

  /// @brief Field avatarTypeIdentifierHash, offset: 0x0, size: 0x4, def value: None
  uint32_t avatarTypeIdentifierHash;

  /// @brief Field data, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerAvatarData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerAvatarData, "", "MultiplayerAvatarData");
