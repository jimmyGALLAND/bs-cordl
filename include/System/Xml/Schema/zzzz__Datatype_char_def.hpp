#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_char.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Datatype_char)
namespace System::Xml::Schema {
struct RestrictionFlags;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_char;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_char);
// Type: System.Xml.Schema::Datatype_char
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::Datatype_char*
class CORDL_TYPE Datatype_char : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
// Declarations
 __declspec(property(get=get_ListValueType)) ::System::Type*  ListValueType;

 __declspec(property(get=get_ValidRestrictionFlags)) ::System::Xml::Schema::RestrictionFlags  ValidRestrictionFlags;

 __declspec(property(get=get_ValueType)) ::System::Type*  ValueType;

/// @brief Field atomicValueType, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_atomicValueType, put=setStaticF_atomicValueType)) ::System::Type*  atomicValueType;

/// @brief Field listValueType, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_listValueType, put=setStaticF_listValueType)) ::System::Type*  listValueType;

/// @brief Method Compare, addr 0x431eea0, size 0xa4, virtual true, abstract: false, final false
inline int32_t Compare(::System::Object*  value1, ::System::Object*  value2) ;

static inline ::System::Xml::Schema::Datatype_char* New_ctor() ;

/// @brief Method ParseValue, addr 0x431ef44, size 0x1d0, virtual true, abstract: false, final false
inline ::System::Object* ParseValue(::StringW  s, ::System::Xml::XmlNameTable*  nameTable, ::System::Xml::IXmlNamespaceResolver*  nsmgr) ;

/// @brief Method TryParseValue, addr 0x431f114, size 0xac, virtual true, abstract: false, final false
inline ::System::Exception* TryParseValue(::StringW  s, ::System::Xml::XmlNameTable*  nameTable, ::System::Xml::IXmlNamespaceResolver*  nsmgr, ByRef<::System::Object*>  typedValue) ;

/// @brief Method .ctor, addr 0x4313144, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Type* getStaticF_atomicValueType() ;

static inline ::System::Type* getStaticF_listValueType() ;

/// @brief Method get_ListValueType, addr 0x431ee40, size 0x58, virtual true, abstract: false, final false
inline ::System::Type* get_ListValueType() ;

/// @brief Method get_ValidRestrictionFlags, addr 0x431ee98, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags() ;

/// @brief Method get_ValueType, addr 0x431ede8, size 0x58, virtual true, abstract: false, final false
inline ::System::Type* get_ValueType() ;

static inline void setStaticF_atomicValueType(::System::Type*  value) ;

static inline void setStaticF_listValueType(::System::Type*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Datatype_char() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Datatype_char", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Datatype_char(Datatype_char && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_char", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Datatype_char(Datatype_char const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_char, 0x38>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_char);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_char*, "System.Xml.Schema", "Datatype_char");
