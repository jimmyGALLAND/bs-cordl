#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PublicAPIAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class PublicAPIAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::PublicAPIAttribute);
// Type: JetBrains.Annotations::PublicAPIAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15752))
// CS Name: ::JetBrains.Annotations::PublicAPIAttribute*
class CORDL_TYPE PublicAPIAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Comment>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Comment_k__BackingField, put = __set__Comment_k__BackingField))::StringW _Comment_k__BackingField;

  __declspec(property(get = get_Comment, put = set_Comment))::StringW Comment;

  constexpr ::StringW& __get__Comment_k__BackingField();

  constexpr ::StringW const& __get__Comment_k__BackingField() const;

  constexpr void __set__Comment_k__BackingField(::StringW value);

  static inline ::JetBrains::Annotations::PublicAPIAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2eba2dc size 0x8 virtual false final false
  inline void _ctor();

  static inline ::JetBrains::Annotations::PublicAPIAttribute* New_ctor(::StringW comment);

  /// @brief Method .ctor addr 0x2eba2e4 size 0x28 virtual false final false
  inline void _ctor(::StringW comment);

  /// @brief Method get_Comment addr 0x2eba30c size 0x8 virtual false final false
  inline ::StringW get_Comment();

  /// @brief Method set_Comment addr 0x2eba314 size 0x8 virtual false final false
  inline void set_Comment(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "PublicAPIAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PublicAPIAttribute(PublicAPIAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PublicAPIAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PublicAPIAttribute(PublicAPIAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PublicAPIAttribute();

public:
  /// @brief Field <Comment>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Comment_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::PublicAPIAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::PublicAPIAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::PublicAPIAttribute*, "JetBrains.Annotations", "PublicAPIAttribute");
