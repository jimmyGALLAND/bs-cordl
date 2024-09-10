#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlInt16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlInt16)
namespace System::Data::SqlTypes {
class INullable;
}
namespace System::Data::SqlTypes {
struct SqlBoolean;
}
namespace System::Data::SqlTypes {
struct SqlByte;
}
namespace System::Data::SqlTypes {
struct SqlDouble;
}
namespace System::Data::SqlTypes {
struct SqlInt64;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml::Serialization {
class IXmlSerializable;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data::SqlTypes {
struct SqlInt16;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlInt16);
// Type: System.Data.SqlTypes::SqlInt16
// SizeInfo { instance_size: 4, native_size: 8, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 2, packing: None, specified_packing: None }
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: ::System.Data.SqlTypes::SqlInt16
struct CORDL_TYPE SqlInt16 {
public:
// Declarations
 __declspec(property(get=get_IsNull)) bool  IsNull;

/// @brief Field MaxValue, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_MaxValue, put=setStaticF_MaxValue)) ::System::Data::SqlTypes::SqlInt16  MaxValue;

/// @brief Field MinValue, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_MinValue, put=setStaticF_MinValue)) ::System::Data::SqlTypes::SqlInt16  MinValue;

/// @brief Field Null, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::System::Data::SqlTypes::SqlInt16  Null;

 __declspec(property(get=get_Value)) int16_t  Value;

/// @brief Field Zero, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_Zero, put=setStaticF_Zero)) ::System::Data::SqlTypes::SqlInt16  Zero;

/// @brief Field s_MASKI2, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_s_MASKI2, put=setStaticF_s_MASKI2)) int32_t  s_MASKI2;

/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr operator  ::System::Data::SqlTypes::INullable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr operator  ::System::Xml::Serialization::IXmlSerializable*() ;

/// @brief Method CompareTo, addr 0x413b758, size 0x150, virtual false, abstract: false, final false
inline int32_t CompareTo(::System::Data::SqlTypes::SqlInt16  value) ;

/// @brief Method CompareTo, addr 0x413b654, size 0x104, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  value) ;

/// @brief Method Equals, addr 0x413b8a8, size 0x140, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method GetHashCode, addr 0x413b9e8, size 0x90, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetXsdType, addr 0x413bcd0, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet*  schemaSet) ;

/// @brief Method GreaterThan, addr 0x413b470, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlInt16  x, ::System::Data::SqlTypes::SqlInt16  y) ;

/// @brief Method LessThan, addr 0x413b404, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlInt16  x, ::System::Data::SqlTypes::SqlInt16  y) ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x413ba78, size 0x8, virtual true, abstract: false, final true
inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema() ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x413ba80, size 0x120, virtual true, abstract: false, final true
inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader*  reader) ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x413bba0, size 0x130, virtual true, abstract: false, final true
inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter*  writer) ;

/// @brief Method ToSqlDouble, addr 0x413b4dc, size 0x58, virtual false, abstract: false, final false
inline ::System::Data::SqlTypes::SqlDouble ToSqlDouble() ;

/// @brief Method ToSqlInt64, addr 0x413b534, size 0x58, virtual false, abstract: false, final false
inline ::System::Data::SqlTypes::SqlInt64 ToSqlInt64() ;

/// @brief Method ToString, addr 0x413a9b8, size 0x74, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x413a98c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(bool  fNull) ;

/// @brief Method .ctor, addr 0x413a998, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int16_t  value) ;

static inline ::System::Data::SqlTypes::SqlInt16 getStaticF_MaxValue() ;

static inline ::System::Data::SqlTypes::SqlInt16 getStaticF_MinValue() ;

static inline ::System::Data::SqlTypes::SqlInt16 getStaticF_Null() ;

static inline ::System::Data::SqlTypes::SqlInt16 getStaticF_Zero() ;

static inline int32_t getStaticF_s_MASKI2() ;

/// @brief Method get_IsNull, addr 0x4136144, size 0x10, virtual true, abstract: false, final true
inline bool get_IsNull() ;

/// @brief Method get_Value, addr 0x4136154, size 0x48, virtual false, abstract: false, final false
inline int16_t get_Value() ;

/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable() ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable() ;

/// @brief Method op_Addition, addr 0x413aac8, size 0x110, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt16 op_Addition(::System::Data::SqlTypes::SqlInt16  x, ::System::Data::SqlTypes::SqlInt16  y) ;

/// @brief Method op_Division, addr 0x413ae34, size 0x160, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt16 op_Division(::System::Data::SqlTypes::SqlInt16  x, ::System::Data::SqlTypes::SqlInt16  y) ;

/// @brief Method op_Equality, addr 0x413b17c, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlInt16  x, ::System::Data::SqlTypes::SqlInt16  y) ;

/// @brief Method op_Explicit, addr 0x413b064, size 0x118, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt16 op_Explicit___System__Data__SqlTypes__SqlInt16(::System::Data::SqlTypes::SqlInt64  x) ;

/// @brief Method op_GreaterThan, addr 0x413b32c, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlInt16  x, ::System::Data::SqlTypes::SqlInt16  y) ;

/// @brief Method op_Implicit, addr 0x413af94, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt16 op_Implicit___System__Data__SqlTypes__SqlInt16(::System::Data::SqlTypes::SqlByte  x) ;

/// @brief Method op_Implicit, addr 0x413a9a8, size 0x10, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt16 op_Implicit___System__Data__SqlTypes__SqlInt16(int16_t  x) ;

/// @brief Method op_LessThan, addr 0x413b254, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlInt16  x, ::System::Data::SqlTypes::SqlInt16  y) ;

/// @brief Method op_Multiply, addr 0x413ace8, size 0x14c, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt16 op_Multiply(::System::Data::SqlTypes::SqlInt16  x, ::System::Data::SqlTypes::SqlInt16  y) ;

/// @brief Method op_Subtraction, addr 0x413abd8, size 0x110, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt16 op_Subtraction(::System::Data::SqlTypes::SqlInt16  x, ::System::Data::SqlTypes::SqlInt16  y) ;

/// @brief Method op_UnaryNegation, addr 0x413aa2c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt16 op_UnaryNegation(::System::Data::SqlTypes::SqlInt16  x) ;

static inline void setStaticF_MaxValue(::System::Data::SqlTypes::SqlInt16  value) ;

static inline void setStaticF_MinValue(::System::Data::SqlTypes::SqlInt16  value) ;

static inline void setStaticF_Null(::System::Data::SqlTypes::SqlInt16  value) ;

static inline void setStaticF_Zero(::System::Data::SqlTypes::SqlInt16  value) ;

static inline void setStaticF_s_MASKI2(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SqlInt16() ;

// Ctor Parameters [CppParam { name: "m_fNotNull", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_value", ty: "int16_t", modifiers: "", def_value: None }]
constexpr SqlInt16(bool  m_fNotNull, int16_t  m_value) noexcept;

/// @brief Field m_fNotNull, offset: 0x0, size: 0x1, def value: None
 bool  m_fNotNull;

/// @brief Field m_value, offset: 0x2, size: 0x2, def value: None
 int16_t  m_value;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlInt16, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlInt16, m_fNotNull) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlInt16, m_value) == 0x2, "Offset mismatch!");

} // namespace end def System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlInt16, "System.Data.SqlTypes", "SqlInt16");
