#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/OcspListID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(OcspListID)
namespace Org::BouncyCastle::Asn1::Esf {
class OcspResponsesID;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OcspListID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::OcspListID);
// Type: Org.BouncyCastle.Asn1.Esf::OcspListID
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Esf::OcspListID*
class CORDL_TYPE OcspListID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Field ocspResponses, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ocspResponses, put=__cordl_internal_set_ocspResponses)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  ocspResponses;

/// @brief Method GetInstance, addr 0x22d3b74, size 0x17c, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::Esf::OcspListID* GetInstance(::System::Object*  obj) ;

/// @brief Method GetOcspResponses, addr 0x22d5388, size 0x120, virtual false, abstract: false, final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*,::Array<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>*> GetOcspResponses() ;

static inline ::Org::BouncyCastle::Asn1::Esf::OcspListID* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*,::Array<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>*>  ocspResponses) ;

static inline ::Org::BouncyCastle::Asn1::Esf::OcspListID* New_ctor(::System::Collections::IEnumerable*  ocspResponses) ;

static inline ::Org::BouncyCastle::Asn1::Esf::OcspListID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method ToAsn1Object, addr 0x22d54a8, size 0x60, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_ocspResponses() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_ocspResponses() const;

constexpr void __cordl_internal_set_ocspResponses(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

/// @brief Method .ctor, addr 0x22d513c, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*,::Array<::Org::BouncyCastle::Asn1::Esf::OcspResponsesID*>*>  ocspResponses) ;

/// @brief Method .ctor, addr 0x22d51f4, size 0x194, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::IEnumerable*  ocspResponses) ;

/// @brief Method .ctor, addr 0x22d4b48, size 0x478, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OcspListID() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OcspListID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OcspListID(OcspListID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OcspListID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OcspListID(OcspListID const& ) = delete;

/// @brief Field ocspResponses, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Asn1Sequence*  ___ocspResponses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OcspListID, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OcspListID, ___ocspResponses) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OcspListID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OcspListID*, "Org.BouncyCastle.Asn1.Esf", "OcspListID");
