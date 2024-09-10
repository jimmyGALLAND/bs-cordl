#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonConvert.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonConvert)
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace System::Numerics {
struct BigInteger;
}
namespace System::Xml::Linq {
class XDocument;
}
namespace System::Xml::Linq {
class XObject;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Type;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonConvert;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonConvert);
// Type: Newtonsoft.Json::JsonConvert
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::Newtonsoft.Json::JsonConvert*
class CORDL_TYPE JsonConvert : public ::System::Object {
public:
// Declarations
/// @brief Field False, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_False, put=setStaticF_False)) ::StringW  False;

/// @brief Field NaN, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_NaN, put=setStaticF_NaN)) ::StringW  NaN;

/// @brief Field NegativeInfinity, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_NegativeInfinity, put=setStaticF_NegativeInfinity)) ::StringW  NegativeInfinity;

/// @brief Field Null, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::StringW  Null;

/// @brief Field PositiveInfinity, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_PositiveInfinity, put=setStaticF_PositiveInfinity)) ::StringW  PositiveInfinity;

/// @brief Field True, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_True, put=setStaticF_True)) ::StringW  True;

/// @brief Field Undefined, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_Undefined, put=setStaticF_Undefined)) ::StringW  Undefined;

/// @brief Field <DefaultSettings>k__BackingField, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF__DefaultSettings_k__BackingField, put=setStaticF__DefaultSettings_k__BackingField)) ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*  _DefaultSettings_k__BackingField;

/// @brief Method DeserializeAnonymousType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T DeserializeAnonymousType(::StringW  value, T  anonymousTypeObject) ;

/// @brief Method DeserializeAnonymousType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T DeserializeAnonymousType(::StringW  value, T  anonymousTypeObject, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method DeserializeObject, addr 0x3de9978, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeObject(::StringW  value) ;

/// @brief Method DeserializeObject, addr 0x3de9c30, size 0x68, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeObject(::StringW  value, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method DeserializeObject, addr 0x3de9c98, size 0x68, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeObject(::StringW  value, ::System::Type*  type) ;

/// @brief Method DeserializeObject, addr 0x3de9d00, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeObject(::StringW  value, ::System::Type*  type, ::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>  converters) ;

/// @brief Method DeserializeObject, addr 0x3de99d4, size 0x25c, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeObject(::StringW  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T DeserializeObject(::StringW  value) ;

/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T DeserializeObject(::StringW  value, ::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>  converters) ;

/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T DeserializeObject(::StringW  value, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method DeserializeXNode, addr 0x3dea94c, size 0x58, virtual false, abstract: false, final false
static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW  value) ;

/// @brief Method DeserializeXNode, addr 0x3dea9a4, size 0x68, virtual false, abstract: false, final false
static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW  value, ::StringW  deserializeRootElementName) ;

/// @brief Method DeserializeXNode, addr 0x3deaa0c, size 0x70, virtual false, abstract: false, final false
static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW  value, ::StringW  deserializeRootElementName, bool  writeArrayAttribute) ;

/// @brief Method DeserializeXNode, addr 0x3deaa7c, size 0x1b0, virtual false, abstract: false, final false
static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW  value, ::StringW  deserializeRootElementName, bool  writeArrayAttribute, bool  encodeSpecialCharacters) ;

/// @brief Method DeserializeXmlNode, addr 0x3dea4b0, size 0x58, virtual false, abstract: false, final false
static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW  value) ;

/// @brief Method DeserializeXmlNode, addr 0x3dea508, size 0x68, virtual false, abstract: false, final false
static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW  value, ::StringW  deserializeRootElementName) ;

/// @brief Method DeserializeXmlNode, addr 0x3dea570, size 0x70, virtual false, abstract: false, final false
static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW  value, ::StringW  deserializeRootElementName, bool  writeArrayAttribute) ;

/// @brief Method DeserializeXmlNode, addr 0x3dea5e0, size 0x1b0, virtual false, abstract: false, final false
static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW  value, ::StringW  deserializeRootElementName, bool  writeArrayAttribute, bool  encodeSpecialCharacters) ;

/// @brief Method EnsureDecimalPlace, addr 0x3de8280, size 0x74, virtual false, abstract: false, final false
static inline ::StringW EnsureDecimalPlace(::StringW  text) ;

/// @brief Method EnsureDecimalPlace, addr 0x3de7df4, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW EnsureDecimalPlace(double_t  value, ::StringW  text) ;

/// @brief Method EnsureFloatFormat, addr 0x3de7fa8, size 0x124, virtual false, abstract: false, final false
static inline ::StringW EnsureFloatFormat(double_t  value, ::StringW  text, ::Newtonsoft::Json::FloatFormatHandling  floatFormatHandling, char16_t  quoteChar, bool  nullable) ;

/// @brief Method PopulateObject, addr 0x3de9f08, size 0x68, virtual false, abstract: false, final false
static inline void PopulateObject(::StringW  value, ::System::Object*  target) ;

/// @brief Method PopulateObject, addr 0x3de9f70, size 0x2a8, virtual false, abstract: false, final false
static inline void PopulateObject(::StringW  value, ::System::Object*  target, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method SerializeObject, addr 0x3de9214, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value) ;

/// @brief Method SerializeObject, addr 0x3de93c4, size 0xa4, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>  converters) ;

/// @brief Method SerializeObject, addr 0x3de92ec, size 0x68, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::Newtonsoft::Json::Formatting  formatting) ;

/// @brief Method SerializeObject, addr 0x3de94e8, size 0xb4, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::Newtonsoft::Json::Formatting  formatting, ::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>  converters) ;

/// @brief Method SerializeObject, addr 0x3de9354, size 0x70, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::Newtonsoft::Json::Formatting  formatting, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method SerializeObject, addr 0x3de9634, size 0x68, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method SerializeObject, addr 0x3de959c, size 0x98, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::System::Type*  type, ::Newtonsoft::Json::Formatting  formatting, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method SerializeObject, addr 0x3de9270, size 0x7c, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method SerializeObjectInternal, addr 0x3de96d0, size 0x298, virtual false, abstract: false, final false
static inline ::StringW SerializeObjectInternal(::System::Object*  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializer*  jsonSerializer) ;

/// @brief Method SerializeXNode, addr 0x3dea790, size 0x58, virtual false, abstract: false, final false
static inline ::StringW SerializeXNode(::System::Xml::Linq::XObject*  node) ;

/// @brief Method SerializeXNode, addr 0x3dea7e8, size 0x68, virtual false, abstract: false, final false
static inline ::StringW SerializeXNode(::System::Xml::Linq::XObject*  node, ::Newtonsoft::Json::Formatting  formatting) ;

/// @brief Method SerializeXNode, addr 0x3dea850, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW SerializeXNode(::System::Xml::Linq::XObject*  node, ::Newtonsoft::Json::Formatting  formatting, bool  omitRootObject) ;

/// @brief Method SerializeXmlNode, addr 0x3dea26c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW SerializeXmlNode(::System::Xml::XmlNode*  node) ;

/// @brief Method SerializeXmlNode, addr 0x3dea2c4, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW SerializeXmlNode(::System::Xml::XmlNode*  node, ::Newtonsoft::Json::Formatting  formatting) ;

/// @brief Method SerializeXmlNode, addr 0x3dea3b4, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW SerializeXmlNode(::System::Xml::XmlNode*  node, ::Newtonsoft::Json::Formatting  formatting, bool  omitRootObject) ;

/// @brief Method ToString, addr 0x3de7954, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ToString(::StringW  value) ;

/// @brief Method ToString, addr 0x3de8704, size 0x68, virtual false, abstract: false, final false
static inline ::StringW ToString(::StringW  value, char16_t  delimiter) ;

/// @brief Method ToString, addr 0x3de8898, size 0xe4, virtual false, abstract: false, final false
static inline ::StringW ToString(::StringW  value, char16_t  delimiter, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling) ;

/// @brief Method ToString, addr 0x3de72e0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::DateTime  value) ;

/// @brief Method ToString, addr 0x3de733c, size 0x26c, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::DateTime  value, ::Newtonsoft::Json::DateFormatHandling  format, ::Newtonsoft::Json::DateTimeZoneHandling  timeZoneHandling) ;

/// @brief Method ToString, addr 0x3de75a8, size 0x68, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::DateTimeOffset  value) ;

/// @brief Method ToString, addr 0x3de7610, size 0x24c, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::DateTimeOffset  value, ::Newtonsoft::Json::DateFormatHandling  format) ;

/// @brief Method ToString, addr 0x3de83cc, size 0xf4, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Decimal  value) ;

/// @brief Method ToString, addr 0x3de84c0, size 0x68, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Guid  value) ;

/// @brief Method ToString, addr 0x3de8528, size 0xe4, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Guid  value, char16_t  quoteChar) ;

/// @brief Method ToString, addr 0x3de897c, size 0x898, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Object*  value) ;

/// @brief Method ToString, addr 0x3de860c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::TimeSpan  value) ;

/// @brief Method ToString, addr 0x3de8664, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::TimeSpan  value, char16_t  quoteChar) ;

/// @brief Method ToString, addr 0x3de876c, size 0xb4, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Uri*  value) ;

/// @brief Method ToString, addr 0x3de8820, size 0x78, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Uri*  value, char16_t  quoteChar) ;

/// @brief Method ToString, addr 0x3de79ac, size 0x54, virtual false, abstract: false, final false
static inline ::StringW ToString(::bs_hook::EnumPtr  value) ;

/// @brief Method ToString, addr 0x3de785c, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ToString(bool  value) ;

/// @brief Method ToString, addr 0x3de78c8, size 0x8c, virtual false, abstract: false, final false
static inline ::StringW ToString(char16_t  value) ;

/// @brief Method ToString, addr 0x3de80cc, size 0xc8, virtual false, abstract: false, final false
static inline ::StringW ToString(double_t  value) ;

/// @brief Method ToString, addr 0x3de8194, size 0xec, virtual false, abstract: false, final false
static inline ::StringW ToString(double_t  value, ::Newtonsoft::Json::FloatFormatHandling  floatFormatHandling, char16_t  quoteChar, bool  nullable) ;

/// @brief Method ToString, addr 0x3de7d28, size 0xcc, virtual false, abstract: false, final false
static inline ::StringW ToString(float_t  value) ;

/// @brief Method ToString, addr 0x3de7eb8, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW ToString(float_t  value, ::Newtonsoft::Json::FloatFormatHandling  floatFormatHandling, char16_t  quoteChar, bool  nullable) ;

/// @brief Method ToString, addr 0x3de7a6c, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ToString(int16_t  value) ;

/// @brief Method ToString, addr 0x3de7a00, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ToString(int32_t  value) ;

/// @brief Method ToString, addr 0x3de7bb0, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ToString(int64_t  value) ;

/// @brief Method ToString, addr 0x3de8360, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ToString(int8_t  value) ;

/// @brief Method ToString, addr 0x3de7ad8, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ToString(uint16_t  value) ;

/// @brief Method ToString, addr 0x3de7b44, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ToString(uint32_t  value) ;

/// @brief Method ToString, addr 0x3de7cbc, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ToString(uint64_t  value) ;

/// @brief Method ToString, addr 0x3de82f4, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ToString(uint8_t  value) ;

/// @brief Method ToStringInternal, addr 0x3de7c1c, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW ToStringInternal(::System::Numerics::BigInteger  value) ;

static inline ::StringW getStaticF_False() ;

static inline ::StringW getStaticF_NaN() ;

static inline ::StringW getStaticF_NegativeInfinity() ;

static inline ::StringW getStaticF_Null() ;

static inline ::StringW getStaticF_PositiveInfinity() ;

static inline ::StringW getStaticF_True() ;

static inline ::StringW getStaticF_Undefined() ;

static inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* getStaticF__DefaultSettings_k__BackingField() ;

/// @brief Method get_DefaultSettings, addr 0x3de722c, size 0x58, virtual false, abstract: false, final false
static inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* get_DefaultSettings() ;

static inline void setStaticF_False(::StringW  value) ;

static inline void setStaticF_NaN(::StringW  value) ;

static inline void setStaticF_NegativeInfinity(::StringW  value) ;

static inline void setStaticF_Null(::StringW  value) ;

static inline void setStaticF_PositiveInfinity(::StringW  value) ;

static inline void setStaticF_True(::StringW  value) ;

static inline void setStaticF_Undefined(::StringW  value) ;

static inline void setStaticF__DefaultSettings_k__BackingField(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*  value) ;

/// @brief Method set_DefaultSettings, addr 0x3de7284, size 0x5c, virtual false, abstract: false, final false
static inline void set_DefaultSettings(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonConvert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonConvert(JsonConvert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonConvert(JsonConvert const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonConvert, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonConvert);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonConvert*, "Newtonsoft.Json", "JsonConvert");
