#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CLSCompliantAttribute)
// Forward declare root types
namespace System {
class CLSCompliantAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::CLSCompliantAttribute);
// Type: System::CLSCompliantAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2361))
// CS Name: ::System::CLSCompliantAttribute*
class CORDL_TYPE CLSCompliantAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _compliant, offset 0x10, size 0x1
  __declspec(property(get = __get__compliant, put = __set__compliant)) bool _compliant;

  constexpr bool& __get__compliant();

  constexpr bool const& __get__compliant() const;

  constexpr void __set__compliant(bool value);

  static inline ::System::CLSCompliantAttribute* New_ctor(bool isCompliant);

  /// @brief Method .ctor addr 0x2525328 size 0x28 virtual false final false
  inline void _ctor(bool isCompliant);

  // Ctor Parameters [CppParam { name: "", ty: "CLSCompliantAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CLSCompliantAttribute(CLSCompliantAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CLSCompliantAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CLSCompliantAttribute(CLSCompliantAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CLSCompliantAttribute();

public:
  /// @brief Field _compliant, offset: 0x10, size: 0x1, def value: None
  bool ____compliant;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::CLSCompliantAttribute, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::CLSCompliantAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::CLSCompliantAttribute*, "System", "CLSCompliantAttribute");
