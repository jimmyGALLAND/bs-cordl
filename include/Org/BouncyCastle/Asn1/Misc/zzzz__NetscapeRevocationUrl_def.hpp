#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Misc/NetscapeRevocationUrl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NetscapeRevocationUrl)
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Misc {
class NetscapeRevocationUrl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl);
// Type: Org.BouncyCastle.Asn1.Misc::NetscapeRevocationUrl
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Misc {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Misc::NetscapeRevocationUrl*
class CORDL_TYPE NetscapeRevocationUrl : public ::Org::BouncyCastle::Asn1::DerIA5String {
public:
// Declarations
static inline ::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl* New_ctor(::Org::BouncyCastle::Asn1::DerIA5String*  str) ;

/// @brief Method ToString, addr 0x23b6a94, size 0x60, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x23b6a5c, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerIA5String*  str) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetscapeRevocationUrl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetscapeRevocationUrl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetscapeRevocationUrl(NetscapeRevocationUrl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetscapeRevocationUrl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetscapeRevocationUrl(NetscapeRevocationUrl const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Misc
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl*, "Org.BouncyCastle.Asn1.Misc", "NetscapeRevocationUrl");
