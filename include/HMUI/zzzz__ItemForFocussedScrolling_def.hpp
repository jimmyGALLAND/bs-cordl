#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ItemForFocussedScrolling)
// Forward declare root types
namespace HMUI {
class ItemForFocussedScrolling;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ItemForFocussedScrolling);
// Type: HMUI::ItemForFocussedScrolling
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13638))
// CS Name: ::HMUI::ItemForFocussedScrolling*
class CORDL_TYPE ItemForFocussedScrolling : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::HMUI::ItemForFocussedScrolling* New_ctor();

  /// @brief Method .ctor addr 0x2142de8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ItemForFocussedScrolling", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ItemForFocussedScrolling(ItemForFocussedScrolling&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ItemForFocussedScrolling", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ItemForFocussedScrolling(ItemForFocussedScrolling const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ItemForFocussedScrolling();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ItemForFocussedScrolling, 0x18>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ItemForFocussedScrolling);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ItemForFocussedScrolling*, "HMUI", "ItemForFocussedScrolling");
