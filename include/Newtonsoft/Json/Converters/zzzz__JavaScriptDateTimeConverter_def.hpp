#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__DateTimeConverterBase_def.hpp"
CORDL_MODULE_EXPORT(JavaScriptDateTimeConverter)
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class JavaScriptDateTimeConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::JavaScriptDateTimeConverter);
// Type: Newtonsoft.Json.Converters::JavaScriptDateTimeConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12032))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12047))
// CS Name: ::Newtonsoft.Json.Converters::JavaScriptDateTimeConverter*
class CORDL_TYPE JavaScriptDateTimeConverter : public ::Newtonsoft::Json::Converters::DateTimeConverterBase {
public:
  // Declarations
  /// @brief Method WriteJson addr 0x26b919c size 0x1bc virtual true final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method ReadJson addr 0x26b9358 size 0x46c virtual true final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  static inline ::Newtonsoft::Json::Converters::JavaScriptDateTimeConverter* New_ctor();

  /// @brief Method .ctor addr 0x26b97c4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "JavaScriptDateTimeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JavaScriptDateTimeConverter(JavaScriptDateTimeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JavaScriptDateTimeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JavaScriptDateTimeConverter(JavaScriptDateTimeConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JavaScriptDateTimeConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::JavaScriptDateTimeConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::JavaScriptDateTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::JavaScriptDateTimeConverter*, "Newtonsoft.Json.Converters", "JavaScriptDateTimeConverter");
