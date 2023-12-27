#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ImageWithHint_def.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
CORDL_MODULE_EXPORT(ImageWithHintItemsList)
// Forward declare root types
namespace GlobalNamespace {
class ImageWithHintItemsList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ImageWithHintItemsList);
// Type: ::ImageWithHintItemsList
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13674)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13674), inst: 5218 }),
// TypeDefinitionIndex(TypeDefinitionIndex(13628))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5426)) CS Name: ::ImageWithHintItemsList*
class CORDL_TYPE ImageWithHintItemsList : public ::HMUI::UIItemsList_1<::HMUI::ImageWithHint*> {
public:
  // Declarations
  static inline ::GlobalNamespace::ImageWithHintItemsList* New_ctor();

  /// @brief Method .ctor addr 0x227a9d0 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ImageWithHintItemsList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageWithHintItemsList(ImageWithHintItemsList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageWithHintItemsList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageWithHintItemsList(ImageWithHintItemsList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageWithHintItemsList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ImageWithHintItemsList, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ImageWithHintItemsList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ImageWithHintItemsList*, "", "ImageWithHintItemsList");
