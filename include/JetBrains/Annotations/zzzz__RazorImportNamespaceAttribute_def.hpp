#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RazorImportNamespaceAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class RazorImportNamespaceAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::RazorImportNamespaceAttribute);
// Type: JetBrains.Annotations::RazorImportNamespaceAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15801))
// CS Name: ::JetBrains.Annotations::RazorImportNamespaceAttribute*
class CORDL_TYPE RazorImportNamespaceAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Name_k__BackingField, put = __set__Name_k__BackingField))::StringW _Name_k__BackingField;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  constexpr ::StringW& __get__Name_k__BackingField();

  constexpr ::StringW const& __get__Name_k__BackingField() const;

  constexpr void __set__Name_k__BackingField(::StringW value);

  static inline ::JetBrains::Annotations::RazorImportNamespaceAttribute* New_ctor(::StringW name);

  /// @brief Method .ctor addr 0x2eba868 size 0x28 virtual false final false
  inline void _ctor(::StringW name);

  /// @brief Method get_Name addr 0x2eba890 size 0x8 virtual false final false
  inline ::StringW get_Name();

  /// @brief Method set_Name addr 0x2eba898 size 0x8 virtual false final false
  inline void set_Name(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "RazorImportNamespaceAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RazorImportNamespaceAttribute(RazorImportNamespaceAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RazorImportNamespaceAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RazorImportNamespaceAttribute(RazorImportNamespaceAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RazorImportNamespaceAttribute();

public:
  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::RazorImportNamespaceAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::RazorImportNamespaceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::RazorImportNamespaceAttribute*, "JetBrains.Annotations", "RazorImportNamespaceAttribute");
