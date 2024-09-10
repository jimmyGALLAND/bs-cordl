#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X9/ECNamedCurveTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ECNamedCurveTable)
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class ECNamedCurveTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable);
// Type: Org.BouncyCastle.Asn1.X9::ECNamedCurveTable
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X9::ECNamedCurveTable*
class CORDL_TYPE ECNamedCurveTable : public ::System::Object {
public:
// Declarations
/// @brief Method GetByName, addr 0x25d4b60, size 0x19c, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByName(::StringW  name) ;

/// @brief Method GetByOid, addr 0x25d5034, size 0x168, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method GetName, addr 0x25d4cfc, size 0x19c, virtual false, abstract: false, final false
static inline ::StringW GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method GetOid, addr 0x25d4e98, size 0x19c, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOid(::StringW  name) ;

static inline ::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable* New_ctor() ;

/// @brief Method .ctor, addr 0x25d53a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Names, addr 0x25d519c, size 0x204, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerable* get_Names() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ECNamedCurveTable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ECNamedCurveTable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ECNamedCurveTable(ECNamedCurveTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ECNamedCurveTable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ECNamedCurveTable(ECNamedCurveTable const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::ECNamedCurveTable*, "Org.BouncyCastle.Asn1.X9", "ECNamedCurveTable");
