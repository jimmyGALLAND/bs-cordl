#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Asn1Exception.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Asn1Exception)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Exception;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1Exception);
// Type: Org.BouncyCastle.Asn1::Asn1Exception
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::Asn1Exception*
class CORDL_TYPE Asn1Exception : public ::System::IO::IOException {
public:
// Declarations
static inline ::Org::BouncyCastle::Asn1::Asn1Exception* New_ctor() ;

static inline ::Org::BouncyCastle::Asn1::Asn1Exception* New_ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::Asn1::Asn1Exception* New_ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method .ctor, addr 0x25dea38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x25dea40, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x25dea48, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Asn1Exception() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Asn1Exception", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Asn1Exception(Asn1Exception && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Exception", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Asn1Exception(Asn1Exception const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1Exception, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1Exception);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1Exception*, "Org.BouncyCastle.Asn1", "Asn1Exception");
