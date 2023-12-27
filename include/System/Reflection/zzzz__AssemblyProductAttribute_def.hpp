#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssemblyProductAttribute)
// Forward declare root types
namespace System::Reflection {
class AssemblyProductAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AssemblyProductAttribute);
// Type: System.Reflection::AssemblyProductAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3455))
// CS Name: ::System.Reflection::AssemblyProductAttribute*
class CORDL_TYPE AssemblyProductAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Product>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Product_k__BackingField, put = __set__Product_k__BackingField))::StringW _Product_k__BackingField;

  constexpr ::StringW& __get__Product_k__BackingField();

  constexpr ::StringW const& __get__Product_k__BackingField() const;

  constexpr void __set__Product_k__BackingField(::StringW value);

  static inline ::System::Reflection::AssemblyProductAttribute* New_ctor(::StringW product);

  /// @brief Method .ctor addr 0x24e6038 size 0x28 virtual false final false
  inline void _ctor(::StringW product);

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyProductAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyProductAttribute(AssemblyProductAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyProductAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyProductAttribute(AssemblyProductAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyProductAttribute();

public:
  /// @brief Field <Product>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Product_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyProductAttribute, 0x18>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyProductAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyProductAttribute*, "System.Reflection", "AssemblyProductAttribute");
