#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/BerSequenceGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__BerGenerator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BerSequenceGenerator)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerSequenceGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerSequenceGenerator);
// Type: Org.BouncyCastle.Asn1::BerSequenceGenerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::BerSequenceGenerator*
class CORDL_TYPE BerSequenceGenerator : public ::Org::BouncyCastle::Asn1::BerGenerator {
public:
// Declarations
static inline ::Org::BouncyCastle::Asn1::BerSequenceGenerator* New_ctor(::System::IO::Stream*  outStream) ;

static inline ::Org::BouncyCastle::Asn1::BerSequenceGenerator* New_ctor(::System::IO::Stream*  outStream, int32_t  tagNo, bool  isExplicit) ;

/// @brief Method .ctor, addr 0x25e8e14, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  outStream) ;

/// @brief Method .ctor, addr 0x25e8e48, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  outStream, int32_t  tagNo, bool  isExplicit) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BerSequenceGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BerSequenceGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BerSequenceGenerator(BerSequenceGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BerSequenceGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BerSequenceGenerator(BerSequenceGenerator const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerSequenceGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerSequenceGenerator*, "Org.BouncyCastle.Asn1", "BerSequenceGenerator");
