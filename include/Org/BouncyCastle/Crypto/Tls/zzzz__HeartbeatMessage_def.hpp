#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HeartbeatMessage)
namespace Org::BouncyCastle::Crypto::Tls {
class __HeartbeatMessage__PayloadBuffer;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class HeartbeatMessage;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __HeartbeatMessage__PayloadBuffer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer);
// Type: ::PayloadBuffer
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1248))
// CS Name: ::HeartbeatMessage::PayloadBuffer*
class CORDL_TYPE __HeartbeatMessage__PayloadBuffer : public ::System::IO::MemoryStream {
public:
  // Declarations
  /// @brief Method ToTruncatedByteArray addr 0xf91dec size 0xa8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToTruncatedByteArray(int32_t payloadLength);

  static inline ::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer* New_ctor();

  /// @brief Method .ctor addr 0xf91de4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HeartbeatMessage__PayloadBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HeartbeatMessage__PayloadBuffer(__HeartbeatMessage__PayloadBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HeartbeatMessage__PayloadBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HeartbeatMessage__PayloadBuffer(__HeartbeatMessage__PayloadBuffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HeartbeatMessage__PayloadBuffer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::HeartbeatMessage
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1249))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::HeartbeatMessage*
class CORDL_TYPE HeartbeatMessage : public ::System::Object {
public:
  // Declarations
  using PayloadBuffer = ::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer;

  /// @brief Field mType, offset 0x10, size 0x1
  __declspec(property(get = __get_mType, put = __set_mType)) uint8_t mType;

  /// @brief Field mPayload, offset 0x18, size 0x8
  __declspec(property(get = __get_mPayload, put = __set_mPayload))::ArrayW<uint8_t, ::Array<uint8_t>*> mPayload;

  /// @brief Field mPaddingLength, offset 0x20, size 0x4
  __declspec(property(get = __get_mPaddingLength, put = __set_mPaddingLength)) int32_t mPaddingLength;

  constexpr uint8_t& __get_mType();

  constexpr uint8_t const& __get_mType() const;

  constexpr void __set_mType(uint8_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mPayload();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mPayload() const;

  constexpr void __set_mPayload(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_mPaddingLength();

  constexpr int32_t const& __get_mPaddingLength() const;

  constexpr void __set_mPaddingLength(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage* New_ctor(uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> payload, int32_t paddingLength);

  /// @brief Method .ctor addr 0xf918dc size 0x130 virtual false final false
  inline void _ctor(uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> payload, int32_t paddingLength);

  /// @brief Method Encode addr 0xf91a20 size 0x1fc virtual true final false
  inline void Encode(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::System::IO::Stream* output);

  /// @brief Method Parse addr 0xf91c1c size 0x1c8 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage* Parse(::System::IO::Stream* input);

  // Ctor Parameters [CppParam { name: "", ty: "HeartbeatMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeartbeatMessage(HeartbeatMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeartbeatMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeartbeatMessage(HeartbeatMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeartbeatMessage();

public:
  /// @brief Field mType, offset: 0x10, size: 0x1, def value: None
  uint8_t ___mType;

  /// @brief Field mPayload, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPayload;

  /// @brief Field mPaddingLength, offset: 0x20, size: 0x4, def value: None
  int32_t ___mPaddingLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage*, "Org.BouncyCastle.Crypto.Tls", "HeartbeatMessage");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__HeartbeatMessage__PayloadBuffer*, "Org.BouncyCastle.Crypto.Tls", "HeartbeatMessage/PayloadBuffer");
