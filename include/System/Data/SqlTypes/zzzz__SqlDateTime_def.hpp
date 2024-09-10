#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlDateTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlDateTime)
namespace System::Data::SqlTypes {
class INullable;
}
namespace System::Data::SqlTypes {
struct SqlBoolean;
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
struct DateTime;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Data::SqlTypes {
struct SqlDateTime;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlDateTime);
// Type: System.Data.SqlTypes::SqlDateTime
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: ::System.Data.SqlTypes::SqlDateTime
struct CORDL_TYPE SqlDateTime {
public:
// Declarations
 __declspec(property(get=get_DayTicks)) int32_t  DayTicks;

 __declspec(property(get=get_IsNull)) bool  IsNull;

/// @brief Field MaxValue, offset 0xffffffff, size 0xc 
static __declspec(property(get=getStaticF_MaxValue, put=setStaticF_MaxValue)) ::System::Data::SqlTypes::SqlDateTime  MaxValue;

/// @brief Field MinValue, offset 0xffffffff, size 0xc 
static __declspec(property(get=getStaticF_MinValue, put=setStaticF_MinValue)) ::System::Data::SqlTypes::SqlDateTime  MinValue;

/// @brief Field Null, offset 0xffffffff, size 0xc 
static __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::System::Data::SqlTypes::SqlDateTime  Null;

/// @brief Field SQLTicksPerHour, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_SQLTicksPerHour, put=setStaticF_SQLTicksPerHour)) int32_t  SQLTicksPerHour;

/// @brief Field SQLTicksPerMinute, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_SQLTicksPerMinute, put=setStaticF_SQLTicksPerMinute)) int32_t  SQLTicksPerMinute;

/// @brief Field SQLTicksPerSecond, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_SQLTicksPerSecond, put=setStaticF_SQLTicksPerSecond)) int32_t  SQLTicksPerSecond;

 __declspec(property(get=get_TimeTicks)) int32_t  TimeTicks;

 __declspec(property(get=get_Value)) ::System::DateTime  Value;

/// @brief Field s_ISO8601_DateTimeFormat, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_ISO8601_DateTimeFormat, put=setStaticF_s_ISO8601_DateTimeFormat)) ::StringW  s_ISO8601_DateTimeFormat;

/// @brief Field s_SQLBaseDate, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_SQLBaseDate, put=setStaticF_s_SQLBaseDate)) ::System::DateTime  s_SQLBaseDate;

/// @brief Field s_SQLBaseDateTicks, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_SQLBaseDateTicks, put=setStaticF_s_SQLBaseDateTicks)) int64_t  s_SQLBaseDateTicks;

/// @brief Field s_SQLTicksPerDay, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_s_SQLTicksPerDay, put=setStaticF_s_SQLTicksPerDay)) int32_t  s_SQLTicksPerDay;

/// @brief Field s_SQLTicksPerMillisecond, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_SQLTicksPerMillisecond, put=setStaticF_s_SQLTicksPerMillisecond)) double_t  s_SQLTicksPerMillisecond;

/// @brief Field s_dateTimeFormats, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_dateTimeFormats, put=setStaticF_s_dateTimeFormats)) ::ArrayW<::StringW,::Array<::StringW>*>  s_dateTimeFormats;

/// @brief Field s_dayBase, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_s_dayBase, put=setStaticF_s_dayBase)) int32_t  s_dayBase;

/// @brief Field s_daysToMonth365, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_daysToMonth365, put=setStaticF_s_daysToMonth365)) ::ArrayW<int32_t,::Array<int32_t>*>  s_daysToMonth365;

/// @brief Field s_daysToMonth366, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_daysToMonth366, put=setStaticF_s_daysToMonth366)) ::ArrayW<int32_t,::Array<int32_t>*>  s_daysToMonth366;

/// @brief Field s_maxDateTime, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_maxDateTime, put=setStaticF_s_maxDateTime)) ::System::DateTime  s_maxDateTime;

/// @brief Field s_maxDay, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_s_maxDay, put=setStaticF_s_maxDay)) int32_t  s_maxDay;

/// @brief Field s_maxTime, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_s_maxTime, put=setStaticF_s_maxTime)) int32_t  s_maxTime;

/// @brief Field s_maxTimeSpan, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_maxTimeSpan, put=setStaticF_s_maxTimeSpan)) ::System::TimeSpan  s_maxTimeSpan;

/// @brief Field s_maxYear, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_s_maxYear, put=setStaticF_s_maxYear)) int32_t  s_maxYear;

/// @brief Field s_minDateTime, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_minDateTime, put=setStaticF_s_minDateTime)) ::System::DateTime  s_minDateTime;

/// @brief Field s_minDay, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_s_minDay, put=setStaticF_s_minDay)) int32_t  s_minDay;

/// @brief Field s_minTime, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_s_minTime, put=setStaticF_s_minTime)) int32_t  s_minTime;

/// @brief Field s_minTimeSpan, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_minTimeSpan, put=setStaticF_s_minTimeSpan)) ::System::TimeSpan  s_minTimeSpan;

/// @brief Field s_minYear, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_s_minYear, put=setStaticF_s_minYear)) int32_t  s_minYear;

/// @brief Field s_ticksPerSecond, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_ticksPerSecond, put=setStaticF_s_ticksPerSecond)) int64_t  s_ticksPerSecond;

/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr operator  ::System::Data::SqlTypes::INullable*() ;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() ;

/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr operator  ::System::Xml::Serialization::IXmlSerializable*() ;

/// @brief Method CompareTo, addr 0x4131010, size 0x174, virtual false, abstract: false, final false
inline int32_t CompareTo(::System::Data::SqlTypes::SqlDateTime  value) ;

/// @brief Method CompareTo, addr 0x4130f04, size 0x10c, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  value) ;

/// @brief Method Equals, addr 0x4131184, size 0x14c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method FromDateTime, addr 0x4130378, size 0xe4, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDateTime FromDateTime(::System::DateTime  value) ;

/// @brief Method FromTimeSpan, addr 0x41306e4, size 0x1fc, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDateTime FromTimeSpan(::System::TimeSpan  value) ;

/// @brief Method GetHashCode, addr 0x41312d0, size 0xb8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetXsdType, addr 0x41316ec, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet*  schemaSet) ;

/// @brief Method GreaterThan, addr 0x4130e80, size 0x84, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlDateTime  x, ::System::Data::SqlTypes::SqlDateTime  y) ;

/// @brief Method LessThan, addr 0x4130dfc, size 0x84, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlDateTime  x, ::System::Data::SqlTypes::SqlDateTime  y) ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x4131388, size 0x8, virtual true, abstract: false, final true
inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema() ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x4131390, size 0x200, virtual true, abstract: false, final true
inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader*  reader) ;

/// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x4131590, size 0x15c, virtual true, abstract: false, final true
inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter*  writer) ;

/// @brief Method ToDateTime, addr 0x413063c, size 0xa8, virtual false, abstract: false, final false
static inline ::System::DateTime ToDateTime(::System::Data::SqlTypes::SqlDateTime  value) ;

/// @brief Method ToString, addr 0x4130a38, size 0xcc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToTimeSpan, addr 0x4130594, size 0xa8, virtual false, abstract: false, final false
static inline ::System::TimeSpan ToTimeSpan(::System::Data::SqlTypes::SqlDateTime  value) ;

/// @brief Method .ctor, addr 0x413045c, size 0x128, virtual false, abstract: false, final false
inline void _ctor(int32_t  dayTicks, int32_t  timeTicks) ;

/// @brief Method .ctor, addr 0x4130300, size 0xc, virtual false, abstract: false, final false
inline void _ctor(bool  fNull) ;

/// @brief Method .ctor, addr 0x413030c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::System::DateTime  value) ;

static inline ::System::Data::SqlTypes::SqlDateTime getStaticF_MaxValue() ;

static inline ::System::Data::SqlTypes::SqlDateTime getStaticF_MinValue() ;

static inline ::System::Data::SqlTypes::SqlDateTime getStaticF_Null() ;

static inline int32_t getStaticF_SQLTicksPerHour() ;

static inline int32_t getStaticF_SQLTicksPerMinute() ;

static inline int32_t getStaticF_SQLTicksPerSecond() ;

static inline ::StringW getStaticF_s_ISO8601_DateTimeFormat() ;

static inline ::System::DateTime getStaticF_s_SQLBaseDate() ;

static inline int64_t getStaticF_s_SQLBaseDateTicks() ;

static inline int32_t getStaticF_s_SQLTicksPerDay() ;

static inline double_t getStaticF_s_SQLTicksPerMillisecond() ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_s_dateTimeFormats() ;

static inline int32_t getStaticF_s_dayBase() ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_s_daysToMonth365() ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_s_daysToMonth366() ;

static inline ::System::DateTime getStaticF_s_maxDateTime() ;

static inline int32_t getStaticF_s_maxDay() ;

static inline int32_t getStaticF_s_maxTime() ;

static inline ::System::TimeSpan getStaticF_s_maxTimeSpan() ;

static inline int32_t getStaticF_s_maxYear() ;

static inline ::System::DateTime getStaticF_s_minDateTime() ;

static inline int32_t getStaticF_s_minDay() ;

static inline int32_t getStaticF_s_minTime() ;

static inline ::System::TimeSpan getStaticF_s_minTimeSpan() ;

static inline int32_t getStaticF_s_minYear() ;

static inline int64_t getStaticF_s_ticksPerSecond() ;

/// @brief Method get_DayTicks, addr 0x4130978, size 0x48, virtual false, abstract: false, final false
inline int32_t get_DayTicks() ;

/// @brief Method get_IsNull, addr 0x4130584, size 0x10, virtual true, abstract: false, final true
inline bool get_IsNull() ;

/// @brief Method get_TimeTicks, addr 0x41309c0, size 0x48, virtual false, abstract: false, final false
inline int32_t get_TimeTicks() ;

/// @brief Method get_Value, addr 0x41308e0, size 0x98, virtual false, abstract: false, final false
inline ::System::DateTime get_Value() ;

/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable() ;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() ;

/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable() ;

/// @brief Method op_Equality, addr 0x4130b04, size 0xf8, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlDateTime  x, ::System::Data::SqlTypes::SqlDateTime  y) ;

/// @brief Method op_GreaterThan, addr 0x4130cfc, size 0x100, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlDateTime  x, ::System::Data::SqlTypes::SqlDateTime  y) ;

/// @brief Method op_Implicit, addr 0x4130a08, size 0x30, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlDateTime op_Implicit___System__Data__SqlTypes__SqlDateTime(::System::DateTime  value) ;

/// @brief Method op_LessThan, addr 0x4130bfc, size 0x100, virtual false, abstract: false, final false
static inline ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlDateTime  x, ::System::Data::SqlTypes::SqlDateTime  y) ;

static inline void setStaticF_MaxValue(::System::Data::SqlTypes::SqlDateTime  value) ;

static inline void setStaticF_MinValue(::System::Data::SqlTypes::SqlDateTime  value) ;

static inline void setStaticF_Null(::System::Data::SqlTypes::SqlDateTime  value) ;

static inline void setStaticF_SQLTicksPerHour(int32_t  value) ;

static inline void setStaticF_SQLTicksPerMinute(int32_t  value) ;

static inline void setStaticF_SQLTicksPerSecond(int32_t  value) ;

static inline void setStaticF_s_ISO8601_DateTimeFormat(::StringW  value) ;

static inline void setStaticF_s_SQLBaseDate(::System::DateTime  value) ;

static inline void setStaticF_s_SQLBaseDateTicks(int64_t  value) ;

static inline void setStaticF_s_SQLTicksPerDay(int32_t  value) ;

static inline void setStaticF_s_SQLTicksPerMillisecond(double_t  value) ;

static inline void setStaticF_s_dateTimeFormats(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline void setStaticF_s_dayBase(int32_t  value) ;

static inline void setStaticF_s_daysToMonth365(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline void setStaticF_s_daysToMonth366(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline void setStaticF_s_maxDateTime(::System::DateTime  value) ;

static inline void setStaticF_s_maxDay(int32_t  value) ;

static inline void setStaticF_s_maxTime(int32_t  value) ;

static inline void setStaticF_s_maxTimeSpan(::System::TimeSpan  value) ;

static inline void setStaticF_s_maxYear(int32_t  value) ;

static inline void setStaticF_s_minDateTime(::System::DateTime  value) ;

static inline void setStaticF_s_minDay(int32_t  value) ;

static inline void setStaticF_s_minTime(int32_t  value) ;

static inline void setStaticF_s_minTimeSpan(::System::TimeSpan  value) ;

static inline void setStaticF_s_minYear(int32_t  value) ;

static inline void setStaticF_s_ticksPerSecond(int64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SqlDateTime() ;

// Ctor Parameters [CppParam { name: "m_fNotNull", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_day", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_time", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SqlDateTime(bool  m_fNotNull, int32_t  m_day, int32_t  m_time) noexcept;

/// @brief Field m_fNotNull, offset: 0x0, size: 0x1, def value: None
 bool  m_fNotNull;

/// @brief Field m_day, offset: 0x4, size: 0x4, def value: None
 int32_t  m_day;

/// @brief Field m_time, offset: 0x8, size: 0x4, def value: None
 int32_t  m_time;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlDateTime, 0xc>, "Size mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlDateTime, m_fNotNull) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlDateTime, m_day) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlDateTime, m_time) == 0x8, "Offset mismatch!");

} // namespace end def System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlDateTime, "System.Data.SqlTypes", "SqlDateTime");
