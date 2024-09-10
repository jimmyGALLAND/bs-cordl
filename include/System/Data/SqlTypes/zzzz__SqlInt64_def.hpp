#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlInt64.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlInt64)
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
struct SqlDecimal;
}
namespace System::Data::SqlTypes {
struct SqlDouble;
}
namespace System::Data::SqlTypes {
struct SqlInt16;
}
namespace System::Data::SqlTypes {
struct SqlInt32;
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
struct SqlInt64;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlInt64);
// Type: System.Data.SqlTypes::SqlInt64
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: ::System.Data.SqlTypes::SqlInt64
struct CORDL_TYPE SqlInt64 {
public:
// Declarations
 __declspec(property(get=get_IsNull)) bool  IsNull;

/// @brief Field MaxValue, offset 0xffffffff, size 0x10 
static __declspec(property(get=getStaticF_MaxValue, put=setStaticF_MaxValue)) ::System::Data::SqlTypes::SqlInt64  MaxValue;

/// @brief Field MinValue, offset 0xffffffff, size 0x10 
static __declspec(property(get=getStaticF_MinValue, put=setStaticF_MinValue)) ::System::Data::SqlTypes::SqlInt64  MinValue;

/// @brief Field Null, offset 0xffffffff, size 0x10 
static __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::System::Data::SqlTypes::SqlInt64  Null;

 __declspec(property(get=get_Value)) int64_t  Value;

/// @brief Field Zero, offset 0xffffffff, size 0x10 
static __declspec(property(get=getStaticF_Zero, put=setStaticF_Zero)) ::System::Data::SqlTypes::SqlInt64  Zero;

/// @brief Field s_lHighIntMask, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_lHighIntMask, put=setStaticF_s_lHighIntMask)) int64_t  s_lHighIntMask;

/// @brief Field s_lLowIntMask, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_lLowIntMask, put=setStaticF_s_lLowIntMask)) int64_t  s_lLowIntMask;

/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr operator  ::System::Data::SqlTypes::INullable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr operator  ::System::Xml::Serialization::IXmlSerializable*() ;

/// @brief Method CompareTo, addr 0x413e2dc, size 0x168, virtual false, abstract: false, final false
inline int32_t CompareTo(::System::Data::SqlTypes::SqlInt64  value) ;

/// @brief Method CompareTo, addr 0x413e1d4, size 0x108, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  value) ;

/// @brief Method Equals, addr 0x413e444, size 0x144, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method GetHashCode, addr 0x413e588, size 0x90, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetXsdType, addr 0x413e870, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet*  schemaSet) ;

/// @brief Method GreaterThan, addr 0x413df44, size 0x84, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlInt64  x, ::System::Data::SqlTypes::SqlInt64  y) ;

/// @brief Method LessThan, addr 0x413dec0, size 0x84, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlInt64  x, ::System::Data::SqlTypes::SqlInt64  y) ;

/// @brief Method SameSignLong, addr 0x413d5d4, size 0x10, virtual false, abstract: false, final false
static inline bool SameSignLong(int64_t  x, int64_t  y) ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x413e618, size 0x8, virtual true, abstract: false, final true
inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema() ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x413e620, size 0x120, virtual true, abstract: false, final true
inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader*  reader) ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x413e740, size 0x130, virtual true, abstract: false, final true
inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter*  writer) ;

/// @brief Method ToSqlByte, addr 0x413dfc8, size 0x68, virtual false, abstract: false, final false
inline ::System::Data::SqlTypes::SqlByte ToSqlByte() ;

/// @brief Method ToSqlDecimal, addr 0x413e14c, size 0x88, virtual false, abstract: false, final false
inline ::System::Data::SqlTypes::SqlDecimal ToSqlDecimal() ;

/// @brief Method ToSqlDouble, addr 0x413e030, size 0x5c, virtual false, abstract: false, final false
inline ::System::Data::SqlTypes::SqlDouble ToSqlDouble() ;

/// @brief Method ToSqlInt16, addr 0x413e08c, size 0x64, virtual false, abstract: false, final false
inline ::System::Data::SqlTypes::SqlInt16 ToSqlInt16() ;

/// @brief Method ToSqlInt32, addr 0x413e0f0, size 0x5c, virtual false, abstract: false, final false
inline ::System::Data::SqlTypes::SqlInt32 ToSqlInt32() ;

/// @brief Method ToString, addr 0x413d388, size 0x74, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x413d360, size 0xc, virtual false, abstract: false, final false
inline void _ctor(bool  fNull) ;

/// @brief Method .ctor, addr 0x413d36c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int64_t  value) ;

static inline ::System::Data::SqlTypes::SqlInt64 getStaticF_MaxValue() ;

static inline ::System::Data::SqlTypes::SqlInt64 getStaticF_MinValue() ;

static inline ::System::Data::SqlTypes::SqlInt64 getStaticF_Null() ;

static inline ::System::Data::SqlTypes::SqlInt64 getStaticF_Zero() ;

static inline int64_t getStaticF_s_lHighIntMask() ;

static inline int64_t getStaticF_s_lLowIntMask() ;

/// @brief Method get_IsNull, addr 0x41363fc, size 0x10, virtual true, abstract: false, final true
inline bool get_IsNull() ;

/// @brief Method get_Value, addr 0x413640c, size 0x48, virtual false, abstract: false, final false
inline int64_t get_Value() ;

/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable() ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable() ;

/// @brief Method op_Addition, addr 0x413d498, size 0x13c, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt64 op_Addition(::System::Data::SqlTypes::SqlInt64  x, ::System::Data::SqlTypes::SqlInt64  y) ;

/// @brief Method op_Division, addr 0x413d8a8, size 0x150, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt64 op_Division(::System::Data::SqlTypes::SqlInt64  x, ::System::Data::SqlTypes::SqlInt64  y) ;

/// @brief Method op_Equality, addr 0x413dc14, size 0xe4, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlInt64  x, ::System::Data::SqlTypes::SqlInt64  y) ;

/// @brief Method op_Explicit, addr 0x41373f8, size 0x1c8, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt64 op_Explicit___System__Data__SqlTypes__SqlInt64(::System::Data::SqlTypes::SqlDecimal  x) ;

/// @brief Method op_GreaterThan, addr 0x413dddc, size 0xe4, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlInt64  x, ::System::Data::SqlTypes::SqlInt64  y) ;

/// @brief Method op_Implicit, addr 0x413db4c, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt64 op_Implicit___System__Data__SqlTypes__SqlInt64(::System::Data::SqlTypes::SqlByte  x) ;

/// @brief Method op_Implicit, addr 0x413b58c, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt64 op_Implicit___System__Data__SqlTypes__SqlInt64(::System::Data::SqlTypes::SqlInt16  x) ;

/// @brief Method op_Implicit, addr 0x413cb1c, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt64 op_Implicit___System__Data__SqlTypes__SqlInt64(::System::Data::SqlTypes::SqlInt32  x) ;

/// @brief Method op_Implicit, addr 0x413d37c, size 0xc, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt64 op_Implicit___System__Data__SqlTypes__SqlInt64(int64_t  x) ;

/// @brief Method op_LessThan, addr 0x413dcf8, size 0xe4, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlInt64  x, ::System::Data::SqlTypes::SqlInt64  y) ;

/// @brief Method op_Modulus, addr 0x413d9f8, size 0x154, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt64 op_Modulus(::System::Data::SqlTypes::SqlInt64  x, ::System::Data::SqlTypes::SqlInt64  y) ;

/// @brief Method op_Multiply, addr 0x413d720, size 0x188, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt64 op_Multiply(::System::Data::SqlTypes::SqlInt64  x, ::System::Data::SqlTypes::SqlInt64  y) ;

/// @brief Method op_Subtraction, addr 0x413d5e4, size 0x13c, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt64 op_Subtraction(::System::Data::SqlTypes::SqlInt64  x, ::System::Data::SqlTypes::SqlInt64  y) ;

/// @brief Method op_UnaryNegation, addr 0x413d3fc, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlInt64 op_UnaryNegation(::System::Data::SqlTypes::SqlInt64  x) ;

static inline void setStaticF_MaxValue(::System::Data::SqlTypes::SqlInt64  value) ;

static inline void setStaticF_MinValue(::System::Data::SqlTypes::SqlInt64  value) ;

static inline void setStaticF_Null(::System::Data::SqlTypes::SqlInt64  value) ;

static inline void setStaticF_Zero(::System::Data::SqlTypes::SqlInt64  value) ;

static inline void setStaticF_s_lHighIntMask(int64_t  value) ;

static inline void setStaticF_s_lLowIntMask(int64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SqlInt64() ;

// Ctor Parameters [CppParam { name: "m_fNotNull", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_value", ty: "int64_t", modifiers: "", def_value: None }]
constexpr SqlInt64(bool  m_fNotNull, int64_t  m_value) noexcept;

/// @brief Field m_fNotNull, offset: 0x0, size: 0x1, def value: None
 bool  m_fNotNull;

/// @brief Field m_value, offset: 0x8, size: 0x8, def value: None
 int64_t  m_value;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlInt64, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlInt64, m_fNotNull) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlInt64, m_value) == 0x8, "Offset mismatch!");

} // namespace end def System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlInt64, "System.Data.SqlTypes", "SqlInt64");
