#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBeatmapLevelCollection)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatmapLevelCollection);
// Type: ::IBeatmapLevelCollection
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4344))
// CS Name: ::IBeatmapLevelCollection*
class CORDL_TYPE IBeatmapLevelCollection {
public:
  // Declarations
  __declspec(property(get = get_beatmapLevels))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* beatmapLevels;

  /// @brief Method get_beatmapLevels addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* get_beatmapLevels();

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLevelCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBeatmapLevelCollection(IBeatmapLevelCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLevelCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapLevelCollection(IBeatmapLevelCollection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapLevelCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapLevelCollection*, "", "IBeatmapLevelCollection");
