#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/RegexConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(RegexConverter)
namespace Newtonsoft::Json::Bson {
class BsonWriter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class RegexConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::RegexConverter);
// Type: Newtonsoft.Json.Converters::RegexConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::RegexConverter*
class CORDL_TYPE RegexConverter : public ::Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief Method CanConvert, addr 0x3eb0d7c, size 0x7c, virtual true, abstract: false, final false
inline bool CanConvert(::System::Type*  objectType) ;

/// @brief Method HasFlag, addr 0x3eb08d4, size 0xc, virtual false, abstract: false, final false
inline bool HasFlag(::System::Text::RegularExpressions::RegexOptions  options, ::System::Text::RegularExpressions::RegexOptions  flag) ;

/// @brief Method IsRegex, addr 0x3eb0df8, size 0x88, virtual false, abstract: false, final false
inline bool IsRegex(::System::Type*  objectType) ;

static inline ::Newtonsoft::Json::Converters::RegexConverter* New_ctor() ;

/// @brief Method ReadJson, addr 0x3eb08e0, size 0xb0, virtual true, abstract: false, final false
inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, ::System::Object*  existingValue, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method ReadRegexObject, addr 0x3eb0990, size 0x284, virtual false, abstract: false, final false
inline ::System::Text::RegularExpressions::Regex* ReadRegexObject(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method ReadRegexString, addr 0x3eb0c14, size 0x168, virtual false, abstract: false, final false
inline ::System::Object* ReadRegexString(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method WriteBson, addr 0x3eb05d8, size 0x138, virtual false, abstract: false, final false
inline void WriteBson(::Newtonsoft::Json::Bson::BsonWriter*  writer, ::System::Text::RegularExpressions::Regex*  regex) ;

/// @brief Method WriteJson, addr 0x3eb0710, size 0x1c4, virtual false, abstract: false, final false
inline void WriteJson(::Newtonsoft::Json::JsonWriter*  writer, ::System::Text::RegularExpressions::Regex*  regex, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method WriteJson, addr 0x3eb04b8, size 0x120, virtual true, abstract: false, final false
inline void WriteJson(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method .ctor, addr 0x3eb0e80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegexConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegexConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RegexConverter(RegexConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegexConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegexConverter(RegexConverter const& ) = delete;

/// @brief Field OptionsName offset 0xffffffff size 0x8
static constexpr ::ConstString  OptionsName{u"Options"};

/// @brief Field PatternName offset 0xffffffff size 0x8
static constexpr ::ConstString  PatternName{u"Pattern"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::RegexConverter, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::RegexConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::RegexConverter*, "Newtonsoft.Json.Converters", "RegexConverter");
