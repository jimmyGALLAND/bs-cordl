#pragma once
// IWYU pragma private; include "BGLib/JsonExtension/Vector3Converter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(Vector3Converter)
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
class Type;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BGLib::JsonExtension {
class Vector3Converter;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::JsonExtension::Vector3Converter);
// Type: BGLib.JsonExtension::Vector3Converter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::JsonExtension {
// Is value type: false
// CS Name: ::BGLib.JsonExtension::Vector3Converter*
class CORDL_TYPE Vector3Converter : public ::Newtonsoft::Json::JsonConverter_1<::UnityEngine::Vector3> {
public:
// Declarations
static inline ::BGLib::JsonExtension::Vector3Converter* New_ctor() ;

/// @brief Method ReadJson, addr 0x225afb4, size 0xa0, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 ReadJson(::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, ::UnityEngine::Vector3  existingValue, bool  hasExistingValue, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method WriteJson, addr 0x225b054, size 0x148, virtual true, abstract: false, final false
inline void WriteJson(::Newtonsoft::Json::JsonWriter*  writer, ::UnityEngine::Vector3  value, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method .ctor, addr 0x225b19c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector3Converter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector3Converter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector3Converter(Vector3Converter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector3Converter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector3Converter(Vector3Converter const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::JsonExtension::Vector3Converter, 0x10>, "Size mismatch!");

} // namespace end def BGLib::JsonExtension
NEED_NO_BOX(::BGLib::JsonExtension::Vector3Converter);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::JsonExtension::Vector3Converter*, "BGLib.JsonExtension", "Vector3Converter");
