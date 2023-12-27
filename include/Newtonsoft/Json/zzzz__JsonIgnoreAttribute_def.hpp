#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(JsonIgnoreAttribute)
// Forward declare root types
namespace Newtonsoft::Json {
class JsonIgnoreAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonIgnoreAttribute);
// Type: Newtonsoft.Json::JsonIgnoreAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11826))
// CS Name: ::Newtonsoft.Json::JsonIgnoreAttribute*
class CORDL_TYPE JsonIgnoreAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Newtonsoft::Json::JsonIgnoreAttribute* New_ctor();

  /// @brief Method .ctor addr 0x26482d4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "JsonIgnoreAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonIgnoreAttribute(JsonIgnoreAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonIgnoreAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonIgnoreAttribute(JsonIgnoreAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonIgnoreAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonIgnoreAttribute, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonIgnoreAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonIgnoreAttribute*, "Newtonsoft.Json", "JsonIgnoreAttribute");
