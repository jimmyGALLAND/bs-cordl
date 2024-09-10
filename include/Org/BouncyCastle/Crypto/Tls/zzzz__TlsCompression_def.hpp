#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsCompression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(TlsCompression)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsCompression);
// Type: Org.BouncyCastle.Crypto.Tls::TlsCompression
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsCompression*
class CORDL_TYPE TlsCompression {
public:
// Declarations
/// @brief Method Compress, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::IO::Stream* Compress(::System::IO::Stream*  output) ;

/// @brief Method Decompress, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::IO::Stream* Decompress(::System::IO::Stream*  output) ;

// Ctor Parameters [CppParam { name: "", ty: "TlsCompression", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsCompression(TlsCompression && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsCompression", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsCompression(TlsCompression const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsCompression);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsCompression*, "Org.BouncyCastle.Crypto.Tls", "TlsCompression");
