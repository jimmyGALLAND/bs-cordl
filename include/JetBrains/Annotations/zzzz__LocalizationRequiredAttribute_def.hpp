#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(LocalizationRequiredAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class LocalizationRequiredAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::LocalizationRequiredAttribute);
// Type: JetBrains.Annotations::LocalizationRequiredAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15745))
// CS Name: ::JetBrains.Annotations::LocalizationRequiredAttribute*
class CORDL_TYPE LocalizationRequiredAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Required>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__Required_k__BackingField, put = __set__Required_k__BackingField)) bool _Required_k__BackingField;

  __declspec(property(get = get_Required, put = set_Required)) bool Required;

  constexpr bool& __get__Required_k__BackingField();

  constexpr bool const& __get__Required_k__BackingField() const;

  constexpr void __set__Required_k__BackingField(bool value);

  static inline ::JetBrains::Annotations::LocalizationRequiredAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2eba0ac size 0x20 virtual false final false
  inline void _ctor();

  static inline ::JetBrains::Annotations::LocalizationRequiredAttribute* New_ctor(bool required);

  /// @brief Method .ctor addr 0x2eba0cc size 0x2c virtual false final false
  inline void _ctor(bool required);

  /// @brief Method get_Required addr 0x2eba0f8 size 0x8 virtual false final false
  inline bool get_Required();

  /// @brief Method set_Required addr 0x2eba100 size 0xc virtual false final false
  inline void set_Required(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationRequiredAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizationRequiredAttribute(LocalizationRequiredAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizationRequiredAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizationRequiredAttribute(LocalizationRequiredAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizationRequiredAttribute();

public:
  /// @brief Field <Required>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Required_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::LocalizationRequiredAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::LocalizationRequiredAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::LocalizationRequiredAttribute*, "JetBrains.Annotations", "LocalizationRequiredAttribute");
