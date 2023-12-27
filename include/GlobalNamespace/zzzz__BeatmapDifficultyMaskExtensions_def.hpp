#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDifficultyMaskExtensions)
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDifficultyMaskExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDifficultyMaskExtensions);
// Type: ::BeatmapDifficultyMaskExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14720))
// CS Name: ::BeatmapDifficultyMaskExtensions*
class CORDL_TYPE BeatmapDifficultyMaskExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToMask addr 0xdfd7f0 size 0xc virtual false final false
  static inline ::GlobalNamespace::BeatmapDifficultyMask ToMask(::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method FromMask addr 0xdfd7fc size 0x54 virtual false final false
  static inline ::GlobalNamespace::BeatmapDifficulty FromMask(::GlobalNamespace::BeatmapDifficultyMask mask);

  /// @brief Method LocalizedKey addr 0xdfd850 size 0xdc virtual false final false
  static inline ::StringW LocalizedKey(::GlobalNamespace::BeatmapDifficultyMask mask);

  /// @brief Method ShortLocalizedKey addr 0xdfd92c size 0xdc virtual false final false
  static inline ::StringW ShortLocalizedKey(::GlobalNamespace::BeatmapDifficultyMask mask);

  /// @brief Method Contains addr 0xdfda08 size 0x18 virtual false final false
  static inline bool Contains(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method Contains addr 0xdfda20 size 0x10 virtual false final false
  static inline bool Contains(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficultyMask other);

  /// @brief Method DifferenceFrom addr 0xdfda30 size 0x3c virtual false final false
  static inline int32_t DifferenceFrom(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficultyMask other);

  /// @brief Method ToHexString addr 0xdfdaa0 size 0x5c virtual false final false
  static inline ::StringW ToHexString(::GlobalNamespace::BeatmapDifficultyMask mask);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultyMaskExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDifficultyMaskExtensions(BeatmapDifficultyMaskExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultyMaskExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDifficultyMaskExtensions(BeatmapDifficultyMaskExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDifficultyMaskExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDifficultyMaskExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDifficultyMaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultyMaskExtensions*, "", "BeatmapDifficultyMaskExtensions");
