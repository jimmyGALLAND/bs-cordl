#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/InvalidParameterException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__KeyException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidParameterException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class InvalidParameterException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::InvalidParameterException);
// Type: Org.BouncyCastle.Security::InvalidParameterException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Security::InvalidParameterException*
class CORDL_TYPE InvalidParameterException : public ::Org::BouncyCastle::Security::KeyException {
public:
// Declarations
static inline ::Org::BouncyCastle::Security::InvalidParameterException* New_ctor() ;

static inline ::Org::BouncyCastle::Security::InvalidParameterException* New_ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Security::InvalidParameterException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor, addr 0x255e3d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x255e3dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x255e3e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InvalidParameterException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InvalidParameterException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvalidParameterException(InvalidParameterException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvalidParameterException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvalidParameterException(InvalidParameterException const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::InvalidParameterException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::InvalidParameterException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::InvalidParameterException*, "Org.BouncyCastle.Security", "InvalidParameterException");
