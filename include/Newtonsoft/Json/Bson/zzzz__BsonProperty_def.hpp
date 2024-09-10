#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonProperty.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BsonProperty)
namespace Newtonsoft::Json::Bson {
class BsonString;
}
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonProperty;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonProperty);
// Type: Newtonsoft.Json.Bson::BsonProperty
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Bson {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Bson::BsonProperty*
class CORDL_TYPE BsonProperty : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Name, put=set_Name)) ::Newtonsoft::Json::Bson::BsonString*  Name;

 __declspec(property(get=get_Value, put=set_Value)) ::Newtonsoft::Json::Bson::BsonToken*  Value;

/// @brief Field <Name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::Newtonsoft::Json::Bson::BsonString*  _Name_k__BackingField;

/// @brief Field <Value>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) ::Newtonsoft::Json::Bson::BsonToken*  _Value_k__BackingField;

static inline ::Newtonsoft::Json::Bson::BsonProperty* New_ctor() ;

constexpr ::Newtonsoft::Json::Bson::BsonString*& __cordl_internal_get__Name_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Bson::BsonString*> const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::Newtonsoft::Json::Bson::BsonToken*& __cordl_internal_get__Value_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Bson::BsonToken*> const& __cordl_internal_get__Value_k__BackingField() const;

constexpr void __cordl_internal_set__Name_k__BackingField(::Newtonsoft::Json::Bson::BsonString*  value) ;

constexpr void __cordl_internal_set__Value_k__BackingField(::Newtonsoft::Json::Bson::BsonToken*  value) ;

/// @brief Method .ctor, addr 0x3ec21d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0x3ec26fc, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Bson::BsonString* get_Name() ;

/// @brief Method get_Value, addr 0x3ec270c, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Bson::BsonToken* get_Value() ;

/// @brief Method set_Name, addr 0x3ec2704, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::Newtonsoft::Json::Bson::BsonString*  value) ;

/// @brief Method set_Value, addr 0x3ec2714, size 0x8, virtual false, abstract: false, final false
inline void set_Value(::Newtonsoft::Json::Bson::BsonToken*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BsonProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BsonProperty", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BsonProperty(BsonProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BsonProperty", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BsonProperty(BsonProperty const& ) = delete;

/// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Newtonsoft::Json::Bson::BsonString*  ____Name_k__BackingField;

/// @brief Field <Value>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Newtonsoft::Json::Bson::BsonToken*  ____Value_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonProperty, 0x20>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonProperty, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonProperty, ____Value_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonProperty);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonProperty*, "Newtonsoft.Json.Bson", "BsonProperty");
