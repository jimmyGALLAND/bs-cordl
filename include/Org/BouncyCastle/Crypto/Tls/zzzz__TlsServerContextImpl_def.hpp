#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsServerContextImpl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_def.hpp"
CORDL_MODULE_EXPORT(TlsServerContextImpl)
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContext;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContextImpl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl);
// Type: Org.BouncyCastle.Crypto.Tls::TlsServerContextImpl
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsServerContextImpl*
class CORDL_TYPE TlsServerContextImpl : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext {
public:
// Declarations
 __declspec(property(get=get_IsServer)) bool  IsServer;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsContext"
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsContext*() noexcept;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsServerContext"
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsServerContext*() noexcept;

static inline ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl* New_ctor(::Org::BouncyCastle::Security::SecureRandom*  secureRandom, ::Org::BouncyCastle::Crypto::Tls::SecurityParameters*  securityParameters) ;

/// @brief Method .ctor, addr 0x23eace8, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Security::SecureRandom*  secureRandom, ::Org::BouncyCastle::Crypto::Tls::SecurityParameters*  securityParameters) ;

/// @brief Method get_IsServer, addr 0x23ead58, size 0x8, virtual true, abstract: false, final false
inline bool get_IsServer() ;

/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsContext"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* i___Org__BouncyCastle__Crypto__Tls__TlsContext() noexcept;

/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsServerContext"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContext* i___Org__BouncyCastle__Crypto__Tls__TlsServerContext() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TlsServerContextImpl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TlsServerContextImpl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsServerContextImpl(TlsServerContextImpl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsServerContextImpl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsServerContextImpl(TlsServerContextImpl const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl, 0x48>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*, "Org.BouncyCastle.Crypto.Tls", "TlsServerContextImpl");
