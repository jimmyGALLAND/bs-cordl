#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonFormatterConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonFormatterConverter)
namespace Newtonsoft::Json::Serialization {
class JsonISerializableContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonProperty;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonFormatterConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonFormatterConverter);
// Type: Newtonsoft.Json.Serialization::JsonFormatterConverter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::JsonFormatterConverter*
class CORDL_TYPE JsonFormatterConverter : public ::System::Object {
public:
// Declarations
/// @brief Field _contract, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__contract, put=__cordl_internal_set__contract)) ::Newtonsoft::Json::Serialization::JsonISerializableContract*  _contract;

/// @brief Field _member, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__member, put=__cordl_internal_set__member)) ::Newtonsoft::Json::Serialization::JsonProperty*  _member;

/// @brief Field _reader, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__reader, put=__cordl_internal_set__reader)) ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*  _reader;

/// @brief Convert operator to "::System::Runtime::Serialization::IFormatterConverter"
constexpr operator  ::System::Runtime::Serialization::IFormatterConverter*() noexcept;

/// @brief Method Convert, addr 0x3e56654, size 0x114, virtual true, abstract: false, final true
inline ::System::Object* Convert(::System::Object*  value, ::System::Type*  type) ;

/// @brief Method Convert, addr 0x3e5688c, size 0x108, virtual true, abstract: false, final true
inline ::System::Object* Convert(::System::Object*  value, ::System::TypeCode  typeCode) ;

/// @brief Method GetTokenValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetTokenValue(::System::Object*  value) ;

static inline ::Newtonsoft::Json::Serialization::JsonFormatterConverter* New_ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*  reader, ::Newtonsoft::Json::Serialization::JsonISerializableContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member) ;

/// @brief Method ToBoolean, addr 0x3e56994, size 0x58, virtual true, abstract: false, final true
inline bool ToBoolean(::System::Object*  value) ;

/// @brief Method ToByte, addr 0x3e569ec, size 0x58, virtual true, abstract: false, final true
inline uint8_t ToByte(::System::Object*  value) ;

/// @brief Method ToChar, addr 0x3e56a44, size 0x58, virtual true, abstract: false, final true
inline char16_t ToChar(::System::Object*  value) ;

/// @brief Method ToDateTime, addr 0x3e56a9c, size 0x58, virtual true, abstract: false, final true
inline ::System::DateTime ToDateTime(::System::Object*  value) ;

/// @brief Method ToDecimal, addr 0x3e56af4, size 0x58, virtual true, abstract: false, final true
inline ::System::Decimal ToDecimal(::System::Object*  value) ;

/// @brief Method ToDouble, addr 0x3e56b4c, size 0x58, virtual true, abstract: false, final true
inline double_t ToDouble(::System::Object*  value) ;

/// @brief Method ToInt16, addr 0x3e56ba4, size 0x58, virtual true, abstract: false, final true
inline int16_t ToInt16(::System::Object*  value) ;

/// @brief Method ToInt32, addr 0x3e56bfc, size 0x58, virtual true, abstract: false, final true
inline int32_t ToInt32(::System::Object*  value) ;

/// @brief Method ToInt64, addr 0x3e56c54, size 0x58, virtual true, abstract: false, final true
inline int64_t ToInt64(::System::Object*  value) ;

/// @brief Method ToSByte, addr 0x3e56cac, size 0x58, virtual true, abstract: false, final true
inline int8_t ToSByte(::System::Object*  value) ;

/// @brief Method ToSingle, addr 0x3e56d04, size 0x58, virtual true, abstract: false, final true
inline float_t ToSingle(::System::Object*  value) ;

/// @brief Method ToString, addr 0x3e56d5c, size 0x58, virtual true, abstract: false, final true
inline ::StringW ToString(::System::Object*  value) ;

/// @brief Method ToUInt16, addr 0x3e56db4, size 0x58, virtual true, abstract: false, final true
inline uint16_t ToUInt16(::System::Object*  value) ;

/// @brief Method ToUInt32, addr 0x3e56e0c, size 0x58, virtual true, abstract: false, final true
inline uint32_t ToUInt32(::System::Object*  value) ;

/// @brief Method ToUInt64, addr 0x3e56e64, size 0x58, virtual true, abstract: false, final true
inline uint64_t ToUInt64(::System::Object*  value) ;

constexpr ::Newtonsoft::Json::Serialization::JsonISerializableContract*& __cordl_internal_get__contract() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonISerializableContract*> const& __cordl_internal_get__contract() const;

constexpr ::Newtonsoft::Json::Serialization::JsonProperty*& __cordl_internal_get__member() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonProperty*> const& __cordl_internal_get__member() const;

constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*& __cordl_internal_get__reader() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*> const& __cordl_internal_get__reader() const;

constexpr void __cordl_internal_set__contract(::Newtonsoft::Json::Serialization::JsonISerializableContract*  value) ;

constexpr void __cordl_internal_set__member(::Newtonsoft::Json::Serialization::JsonProperty*  value) ;

constexpr void __cordl_internal_set__reader(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*  value) ;

/// @brief Method .ctor, addr 0x3e565b8, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*  reader, ::Newtonsoft::Json::Serialization::JsonISerializableContract*  contract, ::Newtonsoft::Json::Serialization::JsonProperty*  member) ;

/// @brief Convert to "::System::Runtime::Serialization::IFormatterConverter"
constexpr ::System::Runtime::Serialization::IFormatterConverter* i___System__Runtime__Serialization__IFormatterConverter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonFormatterConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonFormatterConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonFormatterConverter(JsonFormatterConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonFormatterConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonFormatterConverter(JsonFormatterConverter const& ) = delete;

/// @brief Field _reader, offset: 0x10, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*  ____reader;

/// @brief Field _contract, offset: 0x18, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::JsonISerializableContract*  ____contract;

/// @brief Field _member, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::JsonProperty*  ____member;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonFormatterConverter, 0x28>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonFormatterConverter, ____reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonFormatterConverter, ____contract) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonFormatterConverter, ____member) == 0x20, "Offset mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonFormatterConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonFormatterConverter*, "Newtonsoft.Json.Serialization", "JsonFormatterConverter");
