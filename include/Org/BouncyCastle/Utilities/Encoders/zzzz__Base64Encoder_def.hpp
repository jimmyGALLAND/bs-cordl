#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Base64Encoder)
namespace Org::BouncyCastle::Utilities::Encoders {
class IEncoder;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class Base64Encoder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Encoders::Base64Encoder);
// Type: Org.BouncyCastle.Utilities.Encoders::Base64Encoder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1795))
// CS Name: ::Org.BouncyCastle.Utilities.Encoders::Base64Encoder*
class CORDL_TYPE Base64Encoder : public ::System::Object {
public:
  // Declarations
  /// @brief Field encodingTable, offset 0x10, size 0x8
  __declspec(property(get = __get_encodingTable, put = __set_encodingTable))::ArrayW<uint8_t, ::Array<uint8_t>*> encodingTable;

  /// @brief Field padding, offset 0x18, size 0x1
  __declspec(property(get = __get_padding, put = __set_padding)) uint8_t padding;

  /// @brief Field decodingTable, offset 0x20, size 0x8
  __declspec(property(get = __get_decodingTable, put = __set_decodingTable))::ArrayW<uint8_t, ::Array<uint8_t>*> decodingTable;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::Encoders::IEncoder"
  constexpr operator ::Org::BouncyCastle::Utilities::Encoders::IEncoder*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_encodingTable();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_encodingTable() const;

  constexpr void __set_encodingTable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr uint8_t& __get_padding();

  constexpr uint8_t const& __get_padding() const;

  constexpr void __set_padding(uint8_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_decodingTable();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_decodingTable() const;

  constexpr void __set_decodingTable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method InitialiseDecodingTable addr 0x115bd34 size 0xbc virtual false final false
  inline void InitialiseDecodingTable();

  static inline ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder* New_ctor();

  /// @brief Method .ctor addr 0x115bdf0 size 0xa4 virtual false final false
  inline void _ctor();

  /// @brief Method Encode addr 0x115be94 size 0x390 virtual false final false
  inline int32_t Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> inBuf, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBuf, int32_t outOff);

  /// @brief Method Encode addr 0x115c224 size 0x12c virtual true final true
  inline int32_t Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, ::System::IO::Stream* outStream);

  /// @brief Method ignore addr 0x115c350 size 0x38 virtual false final false
  inline bool ignore(char16_t c);

  /// @brief Method Decode addr 0x115c388 size 0x3f8 virtual true final true
  inline int32_t Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t off, int32_t length, ::System::IO::Stream* outStream);

  /// @brief Method nextI addr 0x115c780 size 0x74 virtual false final false
  inline int32_t nextI(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t i, int32_t finish);

  /// @brief Method DecodeString addr 0x115c9f8 size 0x408 virtual true final true
  inline int32_t DecodeString(::StringW data, ::System::IO::Stream* outStream);

  /// @brief Method decodeLastBlock addr 0x115c7f4 size 0x204 virtual false final false
  inline int32_t decodeLastBlock(::System::IO::Stream* outStream, char16_t c1, char16_t c2, char16_t c3, char16_t c4);

  /// @brief Method nextI addr 0x115ce00 size 0x84 virtual false final false
  inline int32_t nextI(::StringW data, int32_t i, int32_t finish);

  // Ctor Parameters [CppParam { name: "", ty: "Base64Encoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Base64Encoder(Base64Encoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Base64Encoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Base64Encoder(Base64Encoder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Base64Encoder();

public:
  /// @brief Field encodingTable, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___encodingTable;

  /// @brief Field padding, offset: 0x18, size: 0x1, def value: None
  uint8_t ___padding;

  /// @brief Field decodingTable, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___decodingTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Encoders::Base64Encoder, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::Base64Encoder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::Base64Encoder*, "Org.BouncyCastle.Utilities.Encoders", "Base64Encoder");
