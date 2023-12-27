#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ArcVisibilityTypeSettingsDropdown)
namespace GlobalNamespace {
struct ArcVisibilityType;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class ArcVisibilityTypeSettingsDropdown;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ArcVisibilityTypeSettingsDropdown);
// Type: ::ArcVisibilityTypeSettingsDropdown
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4606)), TypeDefinitionIndex(TypeDefinitionIndex(5602)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5602), inst: 4729
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5589)) CS Name: ::ArcVisibilityTypeSettingsDropdown*
class CORDL_TYPE ArcVisibilityTypeSettingsDropdown : public ::GlobalNamespace::ValueDropdownController_1<::GlobalNamespace::ArcVisibilityType> {
public:
  // Declarations
  /// @brief Method GetNamedValues addr 0x22a9d60 size 0x164 virtual true final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::ArcVisibilityType, ::StringW>*>* GetNamedValues();

  static inline ::GlobalNamespace::ArcVisibilityTypeSettingsDropdown* New_ctor();

  /// @brief Method .ctor addr 0x22a9ec4 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ArcVisibilityTypeSettingsDropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArcVisibilityTypeSettingsDropdown(ArcVisibilityTypeSettingsDropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArcVisibilityTypeSettingsDropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArcVisibilityTypeSettingsDropdown(ArcVisibilityTypeSettingsDropdown const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArcVisibilityTypeSettingsDropdown();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ArcVisibilityTypeSettingsDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*, "", "ArcVisibilityTypeSettingsDropdown");
