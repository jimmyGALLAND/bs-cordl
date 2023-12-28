#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ASCIIEncoding)
namespace System::Text {
class Encoder;
}
namespace System::Text {
class EncoderNLS;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class __ASCIIEncoding__ASCIIEncodingSealed;
}
namespace System::Text {
class DecoderNLS;
}
// Forward declare root types
namespace System::Text {
class ASCIIEncoding;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::ASCIIEncoding);
// Type: System.Text::ASCIIEncoding
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2874))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2826))
// CS Name: ::System.Text::ASCIIEncoding*
class CORDL_TYPE ASCIIEncoding : public ::System::Text::Encoding {
public:
  // Declarations
  using ASCIIEncodingSealed = ::System::Text::__ASCIIEncoding__ASCIIEncodingSealed;

  /// @brief Field s_default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_default, put = setStaticF_s_default))::System::Text::__ASCIIEncoding__ASCIIEncodingSealed* s_default;

  static inline void setStaticF_s_default(::System::Text::__ASCIIEncoding__ASCIIEncodingSealed* value);

  static inline ::System::Text::__ASCIIEncoding__ASCIIEncodingSealed* getStaticF_s_default();

  static inline ::System::Text::ASCIIEncoding* New_ctor();

  /// @brief Method .ctor addr 0x262dee4 size 0xc virtual false final false
  inline void _ctor();

  /// @brief Method SetDefaultFallbacks addr 0x262def0 size 0x20 virtual true final false
  inline void SetDefaultFallbacks();

  /// @brief Method GetByteCount addr 0x262e048 size 0x184 virtual true final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method GetByteCount addr 0x262e1cc size 0x90 virtual true final false
  inline int32_t GetByteCount(::StringW chars);

  /// @brief Method GetByteCount addr 0x262e25c size 0xd8 virtual true final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count);

  /// @brief Method GetBytes addr 0x262e334 size 0x260 virtual true final false
  inline int32_t GetBytes(::StringW chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes addr 0x262e594 size 0x27c virtual true final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes addr 0x262e810 size 0x100 virtual true final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount);

  /// @brief Method GetCharCount addr 0x262e910 size 0x184 virtual true final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount addr 0x262ea94 size 0xd8 virtual true final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count);

  /// @brief Method GetChars addr 0x262eb6c size 0x27c virtual true final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetChars addr 0x262ede8 size 0x100 virtual true final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount);

  /// @brief Method GetString addr 0x262eee8 size 0x1c8 virtual true final false
  inline ::StringW GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount);

  /// @brief Method GetByteCount addr 0x262f0b0 size 0x2f8 virtual true final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetBytes addr 0x262f444 size 0x42c virtual true final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetCharCount addr 0x262f870 size 0x150 virtual true final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, ::System::Text::DecoderNLS* decoder);

  /// @brief Method GetChars addr 0x262fa04 size 0x288 virtual true final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::System::Text::DecoderNLS* decoder);

  /// @brief Method GetMaxByteCount addr 0x262fc9c size 0x108 virtual true final false
  inline int32_t GetMaxByteCount(int32_t charCount);

  /// @brief Method GetMaxCharCount addr 0x262fda4 size 0x104 virtual true final false
  inline int32_t GetMaxCharCount(int32_t byteCount);

  /// @brief Method GetDecoder addr 0x262fea8 size 0x60 virtual true final false
  inline ::System::Text::Decoder* GetDecoder();

  /// @brief Method GetEncoder addr 0x262ff4c size 0x64 virtual true final false
  inline ::System::Text::Encoder* GetEncoder();

  // Ctor Parameters [CppParam { name: "", ty: "ASCIIEncoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ASCIIEncoding(ASCIIEncoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ASCIIEncoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ASCIIEncoding(ASCIIEncoding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ASCIIEncoding();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::ASCIIEncoding, 0x38>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::ASCIIEncoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::ASCIIEncoding*, "System.Text", "ASCIIEncoding");
