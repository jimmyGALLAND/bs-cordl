#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsSrpUtilities)
namespace System::IO {
class Stream;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities);
// Type: Org.BouncyCastle.Crypto.Tls::TlsSrpUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1328))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsSrpUtilities*
class CORDL_TYPE TlsSrpUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddSrpExtension addr 0xfb8a78 size 0xf0 virtual false final false
  static inline void AddSrpExtension(::System::Collections::IDictionary* extensions, ::ArrayW<uint8_t, ::Array<uint8_t>*> identity);

  /// @brief Method GetSrpExtension addr 0xfb8bfc size 0x6c virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSrpExtension(::System::Collections::IDictionary* extensions);

  /// @brief Method CreateSrpExtension addr 0xfb8b68 size 0x94 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateSrpExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> identity);

  /// @brief Method ReadSrpExtension addr 0xfb8c68 size 0xf4 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadSrpExtension(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionData);

  /// @brief Method ReadSrpParameter addr 0xfb86a0 size 0x9c virtual false final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ReadSrpParameter(::System::IO::Stream* input);

  /// @brief Method WriteSrpParameter addr 0xfb8454 size 0x78 virtual false final false
  static inline void WriteSrpParameter(::Org::BouncyCastle::Math::BigInteger* x, ::System::IO::Stream* output);

  /// @brief Method IsSrpCipherSuite addr 0xfb8dec size 0x14 virtual false final false
  static inline bool IsSrpCipherSuite(int32_t cipherSuite);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities* New_ctor();

  /// @brief Method .ctor addr 0xfb8e00 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TlsSrpUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsSrpUtilities(TlsSrpUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsSrpUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsSrpUtilities(TlsSrpUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsSrpUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsSrpUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsSrpUtilities");
