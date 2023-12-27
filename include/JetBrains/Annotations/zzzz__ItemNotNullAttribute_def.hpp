#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ItemNotNullAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class ItemNotNullAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::ItemNotNullAttribute);
// Type: JetBrains.Annotations::ItemNotNullAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15738))
// CS Name: ::JetBrains.Annotations::ItemNotNullAttribute*
class CORDL_TYPE ItemNotNullAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::ItemNotNullAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2eb9f60 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ItemNotNullAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ItemNotNullAttribute(ItemNotNullAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ItemNotNullAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ItemNotNullAttribute(ItemNotNullAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ItemNotNullAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::ItemNotNullAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::ItemNotNullAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::ItemNotNullAttribute*, "JetBrains.Annotations", "ItemNotNullAttribute");
