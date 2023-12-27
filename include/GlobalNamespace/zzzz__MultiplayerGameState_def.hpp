#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerGameState)
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerGameState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerGameState);
// Type: ::MultiplayerGameState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12880))
// CS Name: ::MultiplayerGameState
struct CORDL_TYPE MultiplayerGameState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerGameState_Unwrapped
  enum struct __MultiplayerGameState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Lobby = static_cast<int32_t>(0x1),
    __E_Game = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerGameState_Unwrapped() const noexcept {
    return static_cast<__MultiplayerGameState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerGameState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerGameState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::MultiplayerGameState const None;

  /// @brief Field Lobby value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::MultiplayerGameState const Lobby;

  /// @brief Field Game value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::MultiplayerGameState const Game;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerGameState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerGameState, "", "MultiplayerGameState");
