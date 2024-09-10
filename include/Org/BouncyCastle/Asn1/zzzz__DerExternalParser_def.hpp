#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerExternalParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(DerExternalParser)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1StreamParser;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerExternalParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerExternalParser);
// Type: Org.BouncyCastle.Asn1::DerExternalParser
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::DerExternalParser*
class CORDL_TYPE DerExternalParser : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Field _parser, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__parser, put=__cordl_internal_set__parser)) ::Org::BouncyCastle::Asn1::Asn1StreamParser*  _parser;

static inline ::Org::BouncyCastle::Asn1::DerExternalParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser*  parser) ;

/// @brief Method ReadObject, addr 0x25ec0dc, size 0x20, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject() ;

/// @brief Method ToAsn1Object, addr 0x25ec0fc, size 0x70, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser*& __cordl_internal_get__parser() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1StreamParser*> const& __cordl_internal_get__parser() const;

constexpr void __cordl_internal_set__parser(::Org::BouncyCastle::Asn1::Asn1StreamParser*  value) ;

/// @brief Method .ctor, addr 0x25e14cc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser*  parser) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DerExternalParser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DerExternalParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DerExternalParser(DerExternalParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DerExternalParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DerExternalParser(DerExternalParser const& ) = delete;

/// @brief Field _parser, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Asn1StreamParser*  ____parser;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerExternalParser, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerExternalParser, ____parser) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerExternalParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerExternalParser*, "Org.BouncyCastle.Asn1", "DerExternalParser");
