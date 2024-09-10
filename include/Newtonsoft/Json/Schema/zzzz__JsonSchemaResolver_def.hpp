#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/JsonSchemaResolver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonSchemaResolver)
namespace Newtonsoft::Json::Schema {
class JsonSchema;
}
namespace Newtonsoft::Json::Schema {
class __JsonSchemaResolver____c__DisplayClass5_0;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Schema {
class JsonSchemaResolver;
}
namespace Newtonsoft::Json::Schema {
class __JsonSchemaResolver____c__DisplayClass5_0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::JsonSchemaResolver);
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::__JsonSchemaResolver____c__DisplayClass5_0);
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: ::JsonSchemaResolver::<>c__DisplayClass5_0*
class CORDL_TYPE __JsonSchemaResolver____c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field reference, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_reference, put=__cordl_internal_set_reference)) ::StringW  reference;

static inline ::Newtonsoft::Json::Schema::__JsonSchemaResolver____c__DisplayClass5_0* New_ctor() ;

/// @brief Method <GetSchema>b__0, addr 0x3e7ae40, size 0x28, virtual false, abstract: false, final false
inline bool _GetSchema_b__0(::Newtonsoft::Json::Schema::JsonSchema*  s) ;

/// @brief Method <GetSchema>b__1, addr 0x3e7ae68, size 0x28, virtual false, abstract: false, final false
inline bool _GetSchema_b__1(::Newtonsoft::Json::Schema::JsonSchema*  s) ;

constexpr ::StringW const& __cordl_internal_get_reference() const;

constexpr ::StringW& __cordl_internal_get_reference() ;

constexpr void __cordl_internal_set_reference(::StringW  value) ;

/// @brief Method .ctor, addr 0x3e7ae38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __JsonSchemaResolver____c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__JsonSchemaResolver____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__JsonSchemaResolver____c__DisplayClass5_0(__JsonSchemaResolver____c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__JsonSchemaResolver____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__JsonSchemaResolver____c__DisplayClass5_0(__JsonSchemaResolver____c__DisplayClass5_0 const& ) = delete;

/// @brief Field reference, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___reference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::__JsonSchemaResolver____c__DisplayClass5_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::__JsonSchemaResolver____c__DisplayClass5_0, ___reference) == 0x10, "Offset mismatch!");

} // namespace end def Newtonsoft::Json::Schema
// Type: Newtonsoft.Json.Schema::JsonSchemaResolver
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Schema::JsonSchemaResolver*
class CORDL_TYPE JsonSchemaResolver : public ::System::Object {
public:
// Declarations
using __c__DisplayClass5_0 = ::Newtonsoft::Json::Schema::__JsonSchemaResolver____c__DisplayClass5_0;

 __declspec(property(get=get_LoadedSchemas, put=set_LoadedSchemas)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>*  LoadedSchemas;

/// @brief Field <LoadedSchemas>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__LoadedSchemas_k__BackingField, put=__cordl_internal_set__LoadedSchemas_k__BackingField)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>*  _LoadedSchemas_k__BackingField;

/// @brief Method GetSchema, addr 0x3e7ad00, size 0x138, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Schema::JsonSchema* GetSchema(::StringW  reference) ;

static inline ::Newtonsoft::Json::Schema::JsonSchemaResolver* New_ctor() ;

constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>*& __cordl_internal_get__LoadedSchemas_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>*> const& __cordl_internal_get__LoadedSchemas_k__BackingField() const;

constexpr void __cordl_internal_set__LoadedSchemas_k__BackingField(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>*  value) ;

/// @brief Method .ctor, addr 0x3e70ef8, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LoadedSchemas, addr 0x3e7acf0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* get_LoadedSchemas() ;

/// @brief Method set_LoadedSchemas, addr 0x3e7acf8, size 0x8, virtual false, abstract: false, final false
inline void set_LoadedSchemas(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonSchemaResolver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonSchemaResolver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonSchemaResolver(JsonSchemaResolver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonSchemaResolver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonSchemaResolver(JsonSchemaResolver const& ) = delete;

/// @brief Field <LoadedSchemas>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>*  ____LoadedSchemas_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::JsonSchemaResolver, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaResolver, ____LoadedSchemas_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace end def Newtonsoft::Json::Schema
NEED_NO_BOX(::Newtonsoft::Json::Schema::JsonSchemaResolver);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::JsonSchemaResolver*, "Newtonsoft.Json.Schema", "JsonSchemaResolver");
NEED_NO_BOX(::Newtonsoft::Json::Schema::__JsonSchemaResolver____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::__JsonSchemaResolver____c__DisplayClass5_0*, "Newtonsoft.Json.Schema", "JsonSchemaResolver/<>c__DisplayClass5_0");
