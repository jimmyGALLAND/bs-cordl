#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerSetGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerGenerator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerSetGenerator)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerSetGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerSetGenerator);
// Type: Org.BouncyCastle.Asn1::DerSetGenerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::DerSetGenerator*
class CORDL_TYPE DerSetGenerator : public ::Org::BouncyCastle::Asn1::DerGenerator {
public:
// Declarations
/// @brief Field _bOut, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__bOut, put=__cordl_internal_set__bOut)) ::System::IO::MemoryStream*  _bOut;

/// @brief Method AddObject, addr 0x25eea04, size 0x80, virtual true, abstract: false, final false
inline void AddObject(::Org::BouncyCastle::Asn1::Asn1Encodable*  obj) ;

/// @brief Method Close, addr 0x25eea8c, size 0x38, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method GetRawOutputStream, addr 0x25eea84, size 0x8, virtual true, abstract: false, final false
inline ::System::IO::Stream* GetRawOutputStream() ;

static inline ::Org::BouncyCastle::Asn1::DerSetGenerator* New_ctor(::System::IO::Stream*  outStream) ;

static inline ::Org::BouncyCastle::Asn1::DerSetGenerator* New_ctor(::System::IO::Stream*  outStream, int32_t  tagNo, bool  isExplicit) ;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get__bOut() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> const& __cordl_internal_get__bOut() const;

constexpr void __cordl_internal_set__bOut(::System::IO::MemoryStream*  value) ;

/// @brief Method .ctor, addr 0x25ee8f0, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  outStream) ;

/// @brief Method .ctor, addr 0x25ee968, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  outStream, int32_t  tagNo, bool  isExplicit) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DerSetGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DerSetGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DerSetGenerator(DerSetGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DerSetGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DerSetGenerator(DerSetGenerator const& ) = delete;

/// @brief Field _bOut, offset: 0x20, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ____bOut;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerSetGenerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerSetGenerator, ____bOut) == 0x20, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerSetGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerSetGenerator*, "Org.BouncyCastle.Asn1", "DerSetGenerator");
