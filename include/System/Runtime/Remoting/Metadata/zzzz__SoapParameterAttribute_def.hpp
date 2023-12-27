#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_def.hpp"
CORDL_MODULE_EXPORT(SoapParameterAttribute)
// Forward declare root types
namespace System::Runtime::Remoting::Metadata {
class SoapParameterAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Metadata::SoapParameterAttribute);
// Type: System.Runtime.Remoting.Metadata::SoapParameterAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Metadata {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3141))
// CS Name: ::System.Runtime.Remoting.Metadata::SoapParameterAttribute*
class CORDL_TYPE SoapParameterAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute {
public:
  // Declarations
  static inline ::System::Runtime::Remoting::Metadata::SoapParameterAttribute* New_ctor();

  /// @brief Method .ctor addr 0x24a5f28 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SoapParameterAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoapParameterAttribute(SoapParameterAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoapParameterAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoapParameterAttribute(SoapParameterAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoapParameterAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Metadata::SoapParameterAttribute, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Metadata
NEED_NO_BOX(::System::Runtime::Remoting::Metadata::SoapParameterAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Metadata::SoapParameterAttribute*, "System.Runtime.Remoting.Metadata", "SoapParameterAttribute");
