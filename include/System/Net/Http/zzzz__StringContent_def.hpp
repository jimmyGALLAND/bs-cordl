#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__ByteArrayContent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringContent)
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::Net::Http {
class StringContent;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::StringContent);
// Type: System.Net.Http::StringContent
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14640))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14657))
// CS Name: ::System.Net.Http::StringContent*
class CORDL_TYPE StringContent : public ::System::Net::Http::ByteArrayContent {
public:
  // Declarations
  static inline ::System::Net::Http::StringContent* New_ctor(::StringW content);

  /// @brief Method .ctor addr 0x283466c size 0xc virtual false final false
  inline void _ctor(::StringW content);

  static inline ::System::Net::Http::StringContent* New_ctor(::StringW content, ::System::Text::Encoding* encoding, ::StringW mediaType);

  /// @brief Method .ctor addr 0x2834678 size 0x108 virtual false final false
  inline void _ctor(::StringW content, ::System::Text::Encoding* encoding, ::StringW mediaType);

  /// @brief Method GetByteArray addr 0x2834780 size 0x3c virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetByteArray(::StringW content, ::System::Text::Encoding* encoding);

  // Ctor Parameters [CppParam { name: "", ty: "StringContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringContent(StringContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringContent(StringContent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringContent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::StringContent, 0x38>, "Size mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::StringContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::StringContent*, "System.Net.Http", "StringContent");
