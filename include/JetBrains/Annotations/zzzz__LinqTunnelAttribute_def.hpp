#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(LinqTunnelAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class LinqTunnelAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::LinqTunnelAttribute);
// Type: JetBrains.Annotations::LinqTunnelAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15789))
// CS Name: ::JetBrains.Annotations::LinqTunnelAttribute*
class CORDL_TYPE LinqTunnelAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::LinqTunnelAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2eba75c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LinqTunnelAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinqTunnelAttribute(LinqTunnelAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinqTunnelAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinqTunnelAttribute(LinqTunnelAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinqTunnelAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::LinqTunnelAttribute, 0x10>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::LinqTunnelAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::LinqTunnelAttribute*, "JetBrains.Annotations", "LinqTunnelAttribute");
