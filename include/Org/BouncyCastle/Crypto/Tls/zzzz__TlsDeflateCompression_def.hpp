#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZOutputStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsDeflateCompression)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __TlsDeflateCompression__DeflateOutputStream;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDeflateCompression;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __TlsDeflateCompression__DeflateOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__TlsDeflateCompression__DeflateOutputStream);
// Type: ::DeflateOutputStream
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1297))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1295))
// CS Name: ::TlsDeflateCompression::DeflateOutputStream*
class CORDL_TYPE __TlsDeflateCompression__DeflateOutputStream : public ::Org::BouncyCastle::Utilities::Zlib::ZOutputStream {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::__TlsDeflateCompression__DeflateOutputStream* New_ctor(::System::IO::Stream* output, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z, bool compress);

  /// @brief Method .ctor addr 0xfa3038 size 0x38 virtual false final false
  inline void _ctor(::System::IO::Stream* output, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z, bool compress);

  /// @brief Method Flush addr 0xfa3214 size 0x4 virtual true final false
  inline void Flush();

  // Ctor Parameters [CppParam { name: "", ty: "__TlsDeflateCompression__DeflateOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TlsDeflateCompression__DeflateOutputStream(__TlsDeflateCompression__DeflateOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TlsDeflateCompression__DeflateOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TlsDeflateCompression__DeflateOutputStream(__TlsDeflateCompression__DeflateOutputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TlsDeflateCompression__DeflateOutputStream();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__TlsDeflateCompression__DeflateOutputStream, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::TlsDeflateCompression
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1296))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsDeflateCompression*
class CORDL_TYPE TlsDeflateCompression : public ::System::Object {
public:
  // Declarations
  using DeflateOutputStream = ::Org::BouncyCastle::Crypto::Tls::__TlsDeflateCompression__DeflateOutputStream;

  /// @brief Field zIn, offset 0x10, size 0x8
  __declspec(property(get = __get_zIn, put = __set_zIn))::Org::BouncyCastle::Utilities::Zlib::ZStream* zIn;

  /// @brief Field zOut, offset 0x18, size 0x8
  __declspec(property(get = __get_zOut, put = __set_zOut))::Org::BouncyCastle::Utilities::Zlib::ZStream* zOut;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCompression"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCompression*() noexcept;

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& __get_zIn();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::ZStream*> const& __get_zIn() const;

  constexpr void __set_zIn(::Org::BouncyCastle::Utilities::Zlib::ZStream* value);

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& __get_zOut();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::ZStream*> const& __get_zOut() const;

  constexpr void __set_zOut(::Org::BouncyCastle::Utilities::Zlib::ZStream* value);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression* New_ctor();

  /// @brief Method .ctor addr 0xfa2ef0 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression* New_ctor(int32_t level);

  /// @brief Method .ctor addr 0xfa2ef8 size 0xac virtual false final false
  inline void _ctor(int32_t level);

  /// @brief Method Compress addr 0xfa2fa4 size 0x94 virtual true final false
  inline ::System::IO::Stream* Compress(::System::IO::Stream* output);

  /// @brief Method Decompress addr 0xfa3070 size 0x90 virtual true final false
  inline ::System::IO::Stream* Decompress(::System::IO::Stream* output);

  // Ctor Parameters [CppParam { name: "", ty: "TlsDeflateCompression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsDeflateCompression(TlsDeflateCompression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsDeflateCompression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsDeflateCompression(TlsDeflateCompression const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsDeflateCompression();

public:
  /// @brief Field zIn, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::ZStream* ___zIn;

  /// @brief Field zOut, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::ZStream* ___zOut;

  /// @brief Field LEVEL_NONE offset 0xffffffff size 0x4
  static constexpr int32_t LEVEL_NONE{ static_cast<int32_t>(0x0) };

  /// @brief Field LEVEL_FASTEST offset 0xffffffff size 0x4
  static constexpr int32_t LEVEL_FASTEST{ static_cast<int32_t>(0x1) };

  /// @brief Field LEVEL_SMALLEST offset 0xffffffff size 0x4
  static constexpr int32_t LEVEL_SMALLEST{ static_cast<int32_t>(0x9) };

  /// @brief Field LEVEL_DEFAULT offset 0xffffffff size 0x4
  static constexpr int32_t LEVEL_DEFAULT{ static_cast<int32_t>(0xffffffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsDeflateCompression*, "Org.BouncyCastle.Crypto.Tls", "TlsDeflateCompression");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__TlsDeflateCompression__DeflateOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__TlsDeflateCompression__DeflateOutputStream*, "Org.BouncyCastle.Crypto.Tls", "TlsDeflateCompression/DeflateOutputStream");
