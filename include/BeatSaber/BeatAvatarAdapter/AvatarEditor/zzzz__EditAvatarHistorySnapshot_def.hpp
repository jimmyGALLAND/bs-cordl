#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPart_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(EditAvatarHistorySnapshot)
namespace BeatSaber::BeatAvatarSDK {
struct AvatarPart;
}
namespace BeatSaber::BeatAvatarSDK {
class AvatarData;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
struct EditAvatarHistorySnapshot;
}
// Write type traits
MARK_VAL_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot);
// Type: BeatSaber.BeatAvatarAdapter.AvatarEditor::EditAvatarHistorySnapshot
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15683))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15271))
// CS Name: ::BeatSaber.BeatAvatarAdapter.AvatarEditor::EditAvatarHistorySnapshot
struct CORDL_TYPE EditAvatarHistorySnapshot {
public:
  // Declarations
  /// @brief Method .ctor addr 0xe14ef0 size 0xc virtual false final false
  inline void _ctor(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData, ::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart);

  // Ctor Parameters [CppParam { name: "avatarEditPart", ty: "::BeatSaber::BeatAvatarSDK::AvatarPart", modifiers: "", def_value: None }, CppParam { name: "avatarData", ty:
  // "::BeatSaber::BeatAvatarSDK::AvatarData*", modifiers: "", def_value: None }]
  constexpr EditAvatarHistorySnapshot(::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart, ::BeatSaber::BeatAvatarSDK::AvatarData* avatarData) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EditAvatarHistorySnapshot();

  /// @brief Field avatarEditPart, offset: 0x0, size: 0x4, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarPart avatarEditPart;

  /// @brief Field avatarData, offset: 0x8, size: 0x8, def value: None
  ::BeatSaber::BeatAvatarSDK::AvatarData* avatarData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot, 0x10>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter::AvatarEditor
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot, "BeatSaber.BeatAvatarAdapter.AvatarEditor", "EditAvatarHistorySnapshot");
