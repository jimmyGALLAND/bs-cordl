#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DifficultyBeatmapSerializedMethods)
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class DifficultyBeatmapSerializedMethods;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DifficultyBeatmapSerializedMethods);
// Type: ::DifficultyBeatmapSerializedMethods
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4395))
// CS Name: ::DifficultyBeatmapSerializedMethods*
class CORDL_TYPE DifficultyBeatmapSerializedMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method SerializedName addr 0x23492e0 size 0x26c virtual false final false
  static inline ::StringW SerializedName(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  // Ctor Parameters [CppParam { name: "", ty: "DifficultyBeatmapSerializedMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DifficultyBeatmapSerializedMethods(DifficultyBeatmapSerializedMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DifficultyBeatmapSerializedMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DifficultyBeatmapSerializedMethods(DifficultyBeatmapSerializedMethods const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DifficultyBeatmapSerializedMethods();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DifficultyBeatmapSerializedMethods, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DifficultyBeatmapSerializedMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DifficultyBeatmapSerializedMethods*, "", "DifficultyBeatmapSerializedMethods");
