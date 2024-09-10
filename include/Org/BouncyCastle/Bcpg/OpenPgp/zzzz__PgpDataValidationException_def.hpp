#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpDataValidationException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PgpDataValidationException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpDataValidationException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpDataValidationException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpDataValidationException*
class CORDL_TYPE PgpDataValidationException : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpException {
public:
// Declarations
static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException* New_ctor() ;

static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException* New_ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor, addr 0x24dcb98, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x24dcb9c, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x24dcba0, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PgpDataValidationException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PgpDataValidationException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PgpDataValidationException(PgpDataValidationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PgpDataValidationException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PgpDataValidationException(PgpDataValidationException const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpDataValidationException*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpDataValidationException");
