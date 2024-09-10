#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/CertificateStatusType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateStatusType)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatusType;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::CertificateStatusType);
// Type: Org.BouncyCastle.Crypto.Tls::CertificateStatusType
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::CertificateStatusType*
class CORDL_TYPE CertificateStatusType : public ::System::Object {
public:
// Declarations
static inline ::Org::BouncyCastle::Crypto::Tls::CertificateStatusType* New_ctor() ;

/// @brief Method .ctor, addr 0x239a2a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CertificateStatusType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CertificateStatusType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertificateStatusType(CertificateStatusType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertificateStatusType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertificateStatusType(CertificateStatusType const& ) = delete;

/// @brief Field ocsp offset 0xffffffff size 0x1
static constexpr uint8_t  ocsp{static_cast<uint8_t>(0x1u)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::CertificateStatusType, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CertificateStatusType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CertificateStatusType*, "Org.BouncyCastle.Crypto.Tls", "CertificateStatusType");
