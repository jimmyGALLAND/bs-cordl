#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObjectiveListItem_def.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
CORDL_MODULE_EXPORT(ObjectiveListItemsList)
// Forward declare root types
namespace GlobalNamespace {
class ObjectiveListItemsList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObjectiveListItemsList);
// Type: ::ObjectiveListItemsList
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13674), inst: 5219 }), TypeDefinitionIndex(TypeDefinitionIndex(13674)),
// TypeDefinitionIndex(TypeDefinitionIndex(5800))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5801)) CS Name: ::ObjectiveListItemsList*
class CORDL_TYPE ObjectiveListItemsList : public ::HMUI::UIItemsList_1<::GlobalNamespace::ObjectiveListItem*> {
public:
  // Declarations
  static inline ::GlobalNamespace::ObjectiveListItemsList* New_ctor();

  /// @brief Method .ctor addr 0x22e795c size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ObjectiveListItemsList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectiveListItemsList(ObjectiveListItemsList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectiveListItemsList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectiveListItemsList(ObjectiveListItemsList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectiveListItemsList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObjectiveListItemsList, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObjectiveListItemsList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectiveListItemsList*, "", "ObjectiveListItemsList");
