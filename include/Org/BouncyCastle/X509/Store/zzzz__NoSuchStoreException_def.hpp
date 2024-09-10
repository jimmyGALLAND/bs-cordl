#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/NoSuchStoreException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/Store/zzzz__X509StoreException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NoSuchStoreException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class NoSuchStoreException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::NoSuchStoreException);
// Type: Org.BouncyCastle.X509.Store::NoSuchStoreException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// CS Name: ::Org.BouncyCastle.X509.Store::NoSuchStoreException*
class CORDL_TYPE NoSuchStoreException : public ::Org::BouncyCastle::X509::Store::X509StoreException {
public:
// Declarations
static inline ::Org::BouncyCastle::X509::Store::NoSuchStoreException* New_ctor() ;

static inline ::Org::BouncyCastle::X509::Store::NoSuchStoreException* New_ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::X509::Store::NoSuchStoreException* New_ctor(::StringW  message, ::System::Exception*  e) ;

/// @brief Method .ctor, addr 0x259dbc0, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x259dbc4, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x259dbc8, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  e) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoSuchStoreException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoSuchStoreException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoSuchStoreException(NoSuchStoreException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoSuchStoreException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoSuchStoreException(NoSuchStoreException const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Store::NoSuchStoreException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::NoSuchStoreException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::NoSuchStoreException*, "Org.BouncyCastle.X509.Store", "NoSuchStoreException");
