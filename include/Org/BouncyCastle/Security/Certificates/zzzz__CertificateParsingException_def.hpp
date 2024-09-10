#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/Certificates/CertificateParsingException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/Certificates/zzzz__CertificateException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CertificateParsingException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security::Certificates {
class CertificateParsingException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::Certificates::CertificateParsingException);
// Type: Org.BouncyCastle.Security.Certificates::CertificateParsingException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security::Certificates {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Security.Certificates::CertificateParsingException*
class CORDL_TYPE CertificateParsingException : public ::Org::BouncyCastle::Security::Certificates::CertificateException {
public:
// Declarations
static inline ::Org::BouncyCastle::Security::Certificates::CertificateParsingException* New_ctor() ;

static inline ::Org::BouncyCastle::Security::Certificates::CertificateParsingException* New_ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Security::Certificates::CertificateParsingException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor, addr 0x254de00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x254de08, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x254de10, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CertificateParsingException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CertificateParsingException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertificateParsingException(CertificateParsingException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertificateParsingException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertificateParsingException(CertificateParsingException const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::Certificates::CertificateParsingException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Security::Certificates
NEED_NO_BOX(::Org::BouncyCastle::Security::Certificates::CertificateParsingException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::Certificates::CertificateParsingException*, "Org.BouncyCastle.Security.Certificates", "CertificateParsingException");
