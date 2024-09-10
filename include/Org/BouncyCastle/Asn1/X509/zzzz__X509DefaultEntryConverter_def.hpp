#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/X509DefaultEntryConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509NameEntryConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(X509DefaultEntryConverter)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509DefaultEntryConverter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter);
// Type: Org.BouncyCastle.Asn1.X509::X509DefaultEntryConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509::X509DefaultEntryConverter*
class CORDL_TYPE X509DefaultEntryConverter : public ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter {
public:
// Declarations
/// @brief Method GetConvertedValue, addr 0x25c9a0c, size 0x380, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* GetConvertedValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid, ::StringW  value) ;

static inline ::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter* New_ctor() ;

/// @brief Method .ctor, addr 0x25c9d8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509DefaultEntryConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509DefaultEntryConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509DefaultEntryConverter(X509DefaultEntryConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509DefaultEntryConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509DefaultEntryConverter(X509DefaultEntryConverter const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509DefaultEntryConverter*, "Org.BouncyCastle.Asn1.X509", "X509DefaultEntryConverter");
