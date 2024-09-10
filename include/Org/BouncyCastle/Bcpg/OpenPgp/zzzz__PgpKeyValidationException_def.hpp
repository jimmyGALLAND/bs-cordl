#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpKeyValidationException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PgpKeyValidationException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpKeyValidationException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpKeyValidationException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpKeyValidationException*
class CORDL_TYPE PgpKeyValidationException : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpException {
public:
// Declarations
static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException* New_ctor() ;

static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException* New_ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor, addr 0x24e3304, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x24e3308, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x24e330c, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PgpKeyValidationException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PgpKeyValidationException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PgpKeyValidationException(PgpKeyValidationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PgpKeyValidationException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PgpKeyValidationException(PgpKeyValidationException const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyValidationException*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpKeyValidationException");
