#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonConstructorAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(JsonConstructorAttribute)
// Forward declare root types
namespace Newtonsoft::Json {
class JsonConstructorAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonConstructorAttribute);
// Type: Newtonsoft.Json::JsonConstructorAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::Newtonsoft.Json::JsonConstructorAttribute*
class CORDL_TYPE JsonConstructorAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Newtonsoft::Json::JsonConstructorAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x3de6f0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonConstructorAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonConstructorAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonConstructorAttribute(JsonConstructorAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonConstructorAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonConstructorAttribute(JsonConstructorAttribute const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonConstructorAttribute, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonConstructorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonConstructorAttribute*, "Newtonsoft.Json", "JsonConstructorAttribute");
