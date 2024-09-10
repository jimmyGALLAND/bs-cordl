#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_int.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_long_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Datatype_int)
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
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
class Datatype_int;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_int);
// Type: System.Xml.Schema::Datatype_int
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::Datatype_int*
class CORDL_TYPE Datatype_int : public ::System::Xml::Schema::Datatype_long {
public:
// Declarations
 __declspec(property(get=get_FacetsChecker)) ::System::Xml::Schema::FacetsChecker*  FacetsChecker;

 __declspec(property(get=get_ListValueType)) ::System::Type*  ListValueType;

 __declspec(property(get=get_TypeCode)) ::System::Xml::Schema::XmlTypeCode  TypeCode;

 __declspec(property(get=get_ValueType)) ::System::Type*  ValueType;

/// @brief Field atomicValueType, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_atomicValueType, put=setStaticF_atomicValueType)) ::System::Type*  atomicValueType;

/// @brief Field listValueType, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_listValueType, put=setStaticF_listValueType)) ::System::Type*  listValueType;

/// @brief Field numeric10FacetsChecker, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_numeric10FacetsChecker, put=setStaticF_numeric10FacetsChecker)) ::System::Xml::Schema::FacetsChecker*  numeric10FacetsChecker;

/// @brief Method Compare, addr 0x431c538, size 0x94, virtual true, abstract: false, final false
inline int32_t Compare(::System::Object*  value1, ::System::Object*  value2) ;

static inline ::System::Xml::Schema::Datatype_int* New_ctor() ;

/// @brief Method TryParseValue, addr 0x431c67c, size 0x140, virtual true, abstract: false, final false
inline ::System::Exception* TryParseValue(::StringW  s, ::System::Xml::XmlNameTable*  nameTable, ::System::Xml::IXmlNamespaceResolver*  nsmgr, ByRef<::System::Object*>  typedValue) ;

/// @brief Method .ctor, addr 0x4313780, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Type* getStaticF_atomicValueType() ;

static inline ::System::Type* getStaticF_listValueType() ;

static inline ::System::Xml::Schema::FacetsChecker* getStaticF_numeric10FacetsChecker() ;

/// @brief Method get_FacetsChecker, addr 0x431c4d8, size 0x58, virtual true, abstract: false, final false
inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker() ;

/// @brief Method get_ListValueType, addr 0x431c624, size 0x58, virtual true, abstract: false, final false
inline ::System::Type* get_ListValueType() ;

/// @brief Method get_TypeCode, addr 0x431c530, size 0x8, virtual true, abstract: false, final false
inline ::System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_ValueType, addr 0x431c5cc, size 0x58, virtual true, abstract: false, final false
inline ::System::Type* get_ValueType() ;

static inline void setStaticF_atomicValueType(::System::Type*  value) ;

static inline void setStaticF_listValueType(::System::Type*  value) ;

static inline void setStaticF_numeric10FacetsChecker(::System::Xml::Schema::FacetsChecker*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Datatype_int() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Datatype_int", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Datatype_int(Datatype_int && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_int", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Datatype_int(Datatype_int const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_int, 0x38>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_int);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_int*, "System.Xml.Schema", "Datatype_int");
