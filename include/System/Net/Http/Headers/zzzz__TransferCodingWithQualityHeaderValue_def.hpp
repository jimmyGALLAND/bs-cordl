#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/Headers/zzzz__TransferCodingHeaderValue_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TransferCodingWithQualityHeaderValue)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System::Net::Http::Headers {
class Lexer;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class TransferCodingWithQualityHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue);
// Type: System.Net.Http.Headers::TransferCodingWithQualityHeaderValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14708))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14709))
// CS Name: ::System.Net.Http.Headers::TransferCodingWithQualityHeaderValue*
class CORDL_TYPE TransferCodingWithQualityHeaderValue : public ::System::Net::Http::Headers::TransferCodingHeaderValue {
public:
  // Declarations
  static inline ::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue* New_ctor();

  /// @brief Method .ctor addr 0x28423e8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method TryParse addr 0x28423f0 size 0xb0 virtual false final false
  static inline bool TryParse(::StringW input, int32_t minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>*> result);

  /// @brief Method TryParseElement addr 0x28424a0 size 0x144 virtual false final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*> parsedValue,
                                     ByRef<::System::Net::Http::Headers::Token> t);

  // Ctor Parameters [CppParam { name: "", ty: "TransferCodingWithQualityHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransferCodingWithQualityHeaderValue(TransferCodingWithQualityHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransferCodingWithQualityHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransferCodingWithQualityHeaderValue(TransferCodingWithQualityHeaderValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransferCodingWithQualityHeaderValue();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue, 0x20>, "Size mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*, "System.Net.Http.Headers", "TransferCodingWithQualityHeaderValue");
