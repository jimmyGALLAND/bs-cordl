#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerConnectionInternal)
namespace System {
struct Guid;
}
namespace UnityEngine {
class IPlayerEditorConnectionNative;
}
// Forward declare root types
namespace UnityEngine {
class PlayerConnectionInternal;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PlayerConnectionInternal);
// Type: UnityEngine::PlayerConnectionInternal
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10142))
// CS Name: ::UnityEngine::PlayerConnectionInternal*
class CORDL_TYPE PlayerConnectionInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::IPlayerEditorConnectionNative"
  constexpr operator ::UnityEngine::IPlayerEditorConnectionNative*() noexcept;

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.SendMessage addr 0x2cc5578 size 0x12c virtual true final true
  inline void UnityEngine_IPlayerEditorConnectionNative_SendMessage(::System::Guid messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.TrySendMessage addr 0x2cc56f8 size 0x130 virtual true final true
  inline bool UnityEngine_IPlayerEditorConnectionNative_TrySendMessage(::System::Guid messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.Poll addr 0x2cc587c size 0x28 virtual true final true
  inline void UnityEngine_IPlayerEditorConnectionNative_Poll();

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.RegisterInternal addr 0x2cc58cc size 0x84 virtual true final true
  inline void UnityEngine_IPlayerEditorConnectionNative_RegisterInternal(::System::Guid messageId);

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal addr 0x2cc598c size 0x84 virtual true final true
  inline void UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal(::System::Guid messageId);

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.Initialize addr 0x2cc5a4c size 0x28 virtual true final true
  inline void UnityEngine_IPlayerEditorConnectionNative_Initialize();

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.IsConnected addr 0x2cc5a9c size 0x28 virtual true final true
  inline bool UnityEngine_IPlayerEditorConnectionNative_IsConnected();

  /// @brief Method UnityEngine.IPlayerEditorConnectionNative.DisconnectAll addr 0x2cc5aec size 0x28 virtual true final true
  inline void UnityEngine_IPlayerEditorConnectionNative_DisconnectAll();

  /// @brief Method IsConnected addr 0x2cc5ac4 size 0x28 virtual false final false
  static inline bool IsConnected();

  /// @brief Method Initialize addr 0x2cc5a74 size 0x28 virtual false final false
  static inline void Initialize();

  /// @brief Method RegisterInternal addr 0x2cc5950 size 0x3c virtual false final false
  static inline void RegisterInternal(::StringW messageId);

  /// @brief Method UnregisterInternal addr 0x2cc5a10 size 0x3c virtual false final false
  static inline void UnregisterInternal(::StringW messageId);

  /// @brief Method SendMessage addr 0x2cc56a4 size 0x54 virtual false final false
  static inline void SendMessage(::StringW messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  /// @brief Method TrySendMessage addr 0x2cc5828 size 0x54 virtual false final false
  static inline bool TrySendMessage(::StringW messageId, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t playerId);

  /// @brief Method PollInternal addr 0x2cc58a4 size 0x28 virtual false final false
  static inline void PollInternal();

  /// @brief Method DisconnectAll addr 0x2cc5b14 size 0x28 virtual false final false
  static inline void DisconnectAll();

  static inline ::UnityEngine::PlayerConnectionInternal* New_ctor();

  /// @brief Method .ctor addr 0x2cc5b3c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerConnectionInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerConnectionInternal(PlayerConnectionInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerConnectionInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerConnectionInternal(PlayerConnectionInternal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerConnectionInternal();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerConnectionInternal, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::PlayerConnectionInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerConnectionInternal*, "UnityEngine", "PlayerConnectionInternal");
