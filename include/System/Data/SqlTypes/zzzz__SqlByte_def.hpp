#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlByte.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlByte)
namespace System::Data::SqlTypes {
class INullable;
}
namespace System::Data::SqlTypes {
struct SqlBoolean;
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
struct SqlByte;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlByte);
// Type: System.Data.SqlTypes::SqlByte
// SizeInfo { instance_size: 2, native_size: 8, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 1, packing: None, specified_packing: None }
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: ::System.Data.SqlTypes::SqlByte
struct CORDL_TYPE SqlByte {
public:
// Declarations
 __declspec(property(get=get_IsNull)) bool  IsNull;

/// @brief Field MaxValue, offset 0xffffffff, size 0x2 
static __declspec(property(get=getStaticF_MaxValue, put=setStaticF_MaxValue)) ::System::Data::SqlTypes::SqlByte  MaxValue;

/// @brief Field MinValue, offset 0xffffffff, size 0x2 
static __declspec(property(get=getStaticF_MinValue, put=setStaticF_MinValue)) ::System::Data::SqlTypes::SqlByte  MinValue;

/// @brief Field Null, offset 0xffffffff, size 0x2 
static __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::System::Data::SqlTypes::SqlByte  Null;

 __declspec(property(get=get_Value)) uint8_t  Value;

/// @brief Field Zero, offset 0xffffffff, size 0x2 
static __declspec(property(get=getStaticF_Zero, put=setStaticF_Zero)) ::System::Data::SqlTypes::SqlByte  Zero;

/// @brief Field s_iBitNotByteMax, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_s_iBitNotByteMax, put=setStaticF_s_iBitNotByteMax)) int32_t  s_iBitNotByteMax;

/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr operator  ::System::Data::SqlTypes::INullable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr operator  ::System::Xml::Serialization::IXmlSerializable*() ;

/// @brief Method CompareTo, addr 0x412e9f0, size 0x148, virtual false, abstract: false, final false
inline int32_t CompareTo(::System::Data::SqlTypes::SqlByte  value) ;

/// @brief Method CompareTo, addr 0x412e8ec, size 0x104, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  value) ;

/// @brief Method Equals, addr 0x412eb38, size 0x138, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method GetHashCode, addr 0x412ec70, size 0x90, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetXsdType, addr 0x412ef58, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet*  schemaSet) ;

/// @brief Method GreaterThan, addr 0x412e7c8, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlByte  x, ::System::Data::SqlTypes::SqlByte  y) ;

/// @brief Method LessThan, addr 0x412e75c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlByte  x, ::System::Data::SqlTypes::SqlByte  y) ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x412ed00, size 0x8, virtual true, abstract: false, final true
inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema() ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x412ed08, size 0x120, virtual true, abstract: false, final true
inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader*  reader) ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x412ee28, size 0x130, virtual true, abstract: false, final true
inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter*  writer) ;

/// @brief Method ToSqlDouble, addr 0x412e834, size 0x5c, virtual false, abstract: false, final false
inline ::System::Data::SqlTypes::SqlDouble ToSqlDouble() ;

/// @brief Method ToSqlInt64, addr 0x412e890, size 0x5c, virtual false, abstract: false, final false
inline ::System::Data::SqlTypes::SqlInt64 ToSqlInt64() ;

/// @brief Method ToString, addr 0x412de48, size 0x9c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x412ddc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(bool  fNull) ;

/// @brief Method .ctor, addr 0x412ddcc, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint8_t  value) ;

static inline ::System::Data::SqlTypes::SqlByte getStaticF_MaxValue() ;

static inline ::System::Data::SqlTypes::SqlByte getStaticF_MinValue() ;

static inline ::System::Data::SqlTypes::SqlByte getStaticF_Null() ;

static inline ::System::Data::SqlTypes::SqlByte getStaticF_Zero() ;

static inline int32_t getStaticF_s_iBitNotByteMax() ;

/// @brief Method get_IsNull, addr 0x412dddc, size 0x10, virtual true, abstract: false, final true
inline bool get_IsNull() ;

/// @brief Method get_Value, addr 0x412ddec, size 0x4c, virtual false, abstract: false, final false
inline uint8_t get_Value() ;

/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable() ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable() ;

/// @brief Method op_Addition, addr 0x412dee4, size 0x12c, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlByte op_Addition(::System::Data::SqlTypes::SqlByte  x, ::System::Data::SqlTypes::SqlByte  y) ;

/// @brief Method op_Division, addr 0x412e26c, size 0x104, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlByte op_Division(::System::Data::SqlTypes::SqlByte  x, ::System::Data::SqlTypes::SqlByte  y) ;

/// @brief Method op_Equality, addr 0x412e504, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlByte  x, ::System::Data::SqlTypes::SqlByte  y) ;

/// @brief Method op_Explicit, addr 0x412e370, size 0x194, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlByte op_Explicit___System__Data__SqlTypes__SqlByte(::System::Data::SqlTypes::SqlInt64  x) ;

/// @brief Method op_GreaterThan, addr 0x412e694, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlByte  x, ::System::Data::SqlTypes::SqlByte  y) ;

/// @brief Method op_Implicit, addr 0x412de38, size 0x10, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlByte op_Implicit___System__Data__SqlTypes__SqlByte(uint8_t  x) ;

/// @brief Method op_LessThan, addr 0x412e5cc, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlByte  x, ::System::Data::SqlTypes::SqlByte  y) ;

/// @brief Method op_Multiply, addr 0x412e13c, size 0x130, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlByte op_Multiply(::System::Data::SqlTypes::SqlByte  x, ::System::Data::SqlTypes::SqlByte  y) ;

/// @brief Method op_Subtraction, addr 0x412e010, size 0x12c, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlByte op_Subtraction(::System::Data::SqlTypes::SqlByte  x, ::System::Data::SqlTypes::SqlByte  y) ;

static inline void setStaticF_MaxValue(::System::Data::SqlTypes::SqlByte  value) ;

static inline void setStaticF_MinValue(::System::Data::SqlTypes::SqlByte  value) ;

static inline void setStaticF_Null(::System::Data::SqlTypes::SqlByte  value) ;

static inline void setStaticF_Zero(::System::Data::SqlTypes::SqlByte  value) ;

static inline void setStaticF_s_iBitNotByteMax(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SqlByte() ;

// Ctor Parameters [CppParam { name: "m_fNotNull", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_value", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr SqlByte(bool  m_fNotNull, uint8_t  m_value) noexcept;

/// @brief Field m_fNotNull, offset: 0x0, size: 0x1, def value: None
 bool  m_fNotNull;

/// @brief Field m_value, offset: 0x1, size: 0x1, def value: None
 uint8_t  m_value;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlByte, 0x2>, "Size mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlByte, m_fNotNull) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlByte, m_value) == 0x1, "Offset mismatch!");

} // namespace end def System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlByte, "System.Data.SqlTypes", "SqlByte");
