#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/TraceJsonWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TraceJsonWriter)
namespace Newtonsoft::Json {
class JsonTextWriter;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::IO {
class StringWriter;
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
struct Guid;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class TraceJsonWriter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::TraceJsonWriter);
// Type: Newtonsoft.Json.Serialization::TraceJsonWriter
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::TraceJsonWriter*
class CORDL_TYPE TraceJsonWriter : public ::Newtonsoft::Json::JsonWriter {
public:
// Declarations
/// @brief Field _innerWriter, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__innerWriter, put=__cordl_internal_set__innerWriter)) ::Newtonsoft::Json::JsonWriter*  _innerWriter;

/// @brief Field _sw, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__sw, put=__cordl_internal_set__sw)) ::System::IO::StringWriter*  _sw;

/// @brief Field _textWriter, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__textWriter, put=__cordl_internal_set__textWriter)) ::Newtonsoft::Json::JsonTextWriter*  _textWriter;

/// @brief Method Close, addr 0x3e70494, size 0x4c, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Flush, addr 0x3e704e0, size 0x40, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method GetSerializedJsonMessage, addr 0x3e6e9d0, size 0x20, virtual false, abstract: false, final false
inline ::StringW GetSerializedJsonMessage() ;

static inline ::Newtonsoft::Json::Serialization::TraceJsonWriter* New_ctor(::Newtonsoft::Json::JsonWriter*  innerWriter) ;

/// @brief Method WriteComment, addr 0x3e700cc, size 0x60, virtual true, abstract: false, final false
inline void WriteComment(::StringW  text) ;

/// @brief Method WriteEndArray, addr 0x3e70178, size 0x4c, virtual true, abstract: false, final false
inline void WriteEndArray() ;

/// @brief Method WriteEndConstructor, addr 0x3e70224, size 0x4c, virtual true, abstract: false, final false
inline void WriteEndConstructor() ;

/// @brief Method WriteEndObject, addr 0x3e70388, size 0x4c, virtual true, abstract: false, final false
inline void WriteEndObject() ;

/// @brief Method WriteNull, addr 0x3e6f314, size 0x4c, virtual true, abstract: false, final false
inline void WriteNull() ;

/// @brief Method WritePropertyName, addr 0x3e70270, size 0x60, virtual true, abstract: false, final false
inline void WritePropertyName(::StringW  name) ;

/// @brief Method WritePropertyName, addr 0x3e702d0, size 0x6c, virtual true, abstract: false, final false
inline void WritePropertyName(::StringW  name, bool  escape) ;

/// @brief Method WriteRaw, addr 0x3e70434, size 0x60, virtual true, abstract: false, final false
inline void WriteRaw(::StringW  json) ;

/// @brief Method WriteRawValue, addr 0x3e703d4, size 0x60, virtual true, abstract: false, final false
inline void WriteRawValue(::StringW  json) ;

/// @brief Method WriteStartArray, addr 0x3e7012c, size 0x4c, virtual true, abstract: false, final false
inline void WriteStartArray() ;

/// @brief Method WriteStartConstructor, addr 0x3e701c4, size 0x60, virtual true, abstract: false, final false
inline void WriteStartConstructor(::StringW  name) ;

/// @brief Method WriteStartObject, addr 0x3e7033c, size 0x4c, virtual true, abstract: false, final false
inline void WriteStartObject() ;

/// @brief Method WriteUndefined, addr 0x3e6f2c8, size 0x4c, virtual true, abstract: false, final false
inline void WriteUndefined() ;

/// @brief Method WriteValue, addr 0x3e6eeb0, size 0x74, virtual true, abstract: false, final false
inline void WriteValue(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method WriteValue, addr 0x3e6faec, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(::StringW  value) ;

/// @brief Method WriteValue, addr 0x3e6ef24, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(::System::DateTime  value) ;

/// @brief Method WriteValue, addr 0x3e6f044, size 0x6c, virtual true, abstract: false, final false
inline void WriteValue(::System::DateTimeOffset  value) ;

/// @brief Method WriteValue, addr 0x3e6e9f0, size 0x6c, virtual true, abstract: false, final false
inline void WriteValue(::System::Decimal  value) ;

/// @brief Method WriteValue, addr 0x3e6f470, size 0x6c, virtual true, abstract: false, final false
inline void WriteValue(::System::Guid  value) ;

/// @brief Method WriteValue, addr 0x3e6ef84, size 0xc0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::DateTime>  value) ;

/// @brief Method WriteValue, addr 0x3e6f0b0, size 0xf4, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method WriteValue, addr 0x3e6ea5c, size 0x11c, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::Decimal>  value) ;

/// @brief Method WriteValue, addr 0x3e6f4dc, size 0xf8, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::Guid>  value) ;

/// @brief Method WriteValue, addr 0x3e6fbac, size 0xc0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<::System::TimeSpan>  value) ;

/// @brief Method WriteValue, addr 0x3e6ebdc, size 0xb4, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<bool>  value) ;

/// @brief Method WriteValue, addr 0x3e6ee00, size 0xb0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<char16_t>  value) ;

/// @brief Method WriteValue, addr 0x3e6f204, size 0xc4, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<double_t>  value) ;

/// @brief Method WriteValue, addr 0x3e6f3c0, size 0xb0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<float_t>  value) ;

/// @brief Method WriteValue, addr 0x3e6fa3c, size 0xb0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int16_t>  value) ;

/// @brief Method WriteValue, addr 0x3e6f634, size 0xac, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int32_t>  value) ;

/// @brief Method WriteValue, addr 0x3e6f740, size 0xc0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int64_t>  value) ;

/// @brief Method WriteValue, addr 0x3e6f92c, size 0xb0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<int8_t>  value) ;

/// @brief Method WriteValue, addr 0x3e6ffbc, size 0xb0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint16_t>  value) ;

/// @brief Method WriteValue, addr 0x3e6fccc, size 0xac, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint32_t>  value) ;

/// @brief Method WriteValue, addr 0x3e6fdd8, size 0xc0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint64_t>  value) ;

/// @brief Method WriteValue, addr 0x3e6ecf0, size 0xb0, virtual true, abstract: false, final false
inline void WriteValue(::System::Nullable_1<uint8_t>  value) ;

/// @brief Method WriteValue, addr 0x3e6f800, size 0xcc, virtual true, abstract: false, final false
inline void WriteValue(::System::Object*  value) ;

/// @brief Method WriteValue, addr 0x3e6fb4c, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(::System::TimeSpan  value) ;

/// @brief Method WriteValue, addr 0x3e6fe98, size 0xc4, virtual true, abstract: false, final false
inline void WriteValue(::System::Uri*  value) ;

/// @brief Method WriteValue, addr 0x3e6eb78, size 0x64, virtual true, abstract: false, final false
inline void WriteValue(bool  value) ;

/// @brief Method WriteValue, addr 0x3e6eda0, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(char16_t  value) ;

/// @brief Method WriteValue, addr 0x3e6f1a4, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(double_t  value) ;

/// @brief Method WriteValue, addr 0x3e6f360, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(float_t  value) ;

/// @brief Method WriteValue, addr 0x3e6f9dc, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(int16_t  value) ;

/// @brief Method WriteValue, addr 0x3e6f5d4, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(int32_t  value) ;

/// @brief Method WriteValue, addr 0x3e6f6e0, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(int64_t  value) ;

/// @brief Method WriteValue, addr 0x3e6f8cc, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(int8_t  value) ;

/// @brief Method WriteValue, addr 0x3e6ff5c, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(uint16_t  value) ;

/// @brief Method WriteValue, addr 0x3e6fc6c, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(uint32_t  value) ;

/// @brief Method WriteValue, addr 0x3e6fd78, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(uint64_t  value) ;

/// @brief Method WriteValue, addr 0x3e6ec90, size 0x60, virtual true, abstract: false, final false
inline void WriteValue(uint8_t  value) ;

/// @brief Method WriteWhitespace, addr 0x3e7006c, size 0x60, virtual true, abstract: false, final false
inline void WriteWhitespace(::StringW  ws) ;

constexpr ::Newtonsoft::Json::JsonWriter*& __cordl_internal_get__innerWriter() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonWriter*> const& __cordl_internal_get__innerWriter() const;

constexpr ::System::IO::StringWriter*& __cordl_internal_get__sw() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::StringWriter*> const& __cordl_internal_get__sw() const;

constexpr ::Newtonsoft::Json::JsonTextWriter*& __cordl_internal_get__textWriter() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonTextWriter*> const& __cordl_internal_get__textWriter() const;

constexpr void __cordl_internal_set__innerWriter(::Newtonsoft::Json::JsonWriter*  value) ;

constexpr void __cordl_internal_set__sw(::System::IO::StringWriter*  value) ;

constexpr void __cordl_internal_set__textWriter(::Newtonsoft::Json::JsonTextWriter*  value) ;

/// @brief Method .ctor, addr 0x3e6e80c, size 0x1c4, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::JsonWriter*  innerWriter) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TraceJsonWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TraceJsonWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TraceJsonWriter(TraceJsonWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TraceJsonWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TraceJsonWriter(TraceJsonWriter const& ) = delete;

/// @brief Field _innerWriter, offset: 0x60, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonWriter*  ____innerWriter;

/// @brief Field _textWriter, offset: 0x68, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextWriter*  ____textWriter;

/// @brief Field _sw, offset: 0x70, size: 0x8, def value: None
 ::System::IO::StringWriter*  ____sw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::TraceJsonWriter, 0x78>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonWriter, ____innerWriter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonWriter, ____textWriter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonWriter, ____sw) == 0x70, "Offset mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::TraceJsonWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::TraceJsonWriter*, "Newtonsoft.Json.Serialization", "TraceJsonWriter");
