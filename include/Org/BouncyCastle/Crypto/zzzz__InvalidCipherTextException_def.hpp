#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/InvalidCipherTextException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__CryptoException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidCipherTextException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class InvalidCipherTextException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::InvalidCipherTextException);
// Type: Org.BouncyCastle.Crypto::InvalidCipherTextException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::InvalidCipherTextException*
class CORDL_TYPE InvalidCipherTextException : public ::Org::BouncyCastle::Crypto::CryptoException {
public:
// Declarations
static inline ::Org::BouncyCastle::Crypto::InvalidCipherTextException* New_ctor() ;

static inline ::Org::BouncyCastle::Crypto::InvalidCipherTextException* New_ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Crypto::InvalidCipherTextException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor, addr 0x23fdae8, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x23fdaec, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x23fdaf0, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InvalidCipherTextException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InvalidCipherTextException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvalidCipherTextException(InvalidCipherTextException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvalidCipherTextException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvalidCipherTextException(InvalidCipherTextException const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::InvalidCipherTextException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::InvalidCipherTextException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::InvalidCipherTextException*, "Org.BouncyCastle.Crypto", "InvalidCipherTextException");
