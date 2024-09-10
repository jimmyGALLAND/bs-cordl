#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/PolicyMappings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PolicyMappings)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyMappings;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::PolicyMappings);
// Type: Org.BouncyCastle.Asn1.X509::PolicyMappings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509::PolicyMappings*
class CORDL_TYPE PolicyMappings : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Field seq, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_seq, put=__cordl_internal_set_seq)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  seq;

static inline ::Org::BouncyCastle::Asn1::X509::PolicyMappings* New_ctor(::System::Collections::Hashtable*  mappings) ;

static inline ::Org::BouncyCastle::Asn1::X509::PolicyMappings* New_ctor(::System::Collections::IDictionary*  mappings) ;

static inline ::Org::BouncyCastle::Asn1::X509::PolicyMappings* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method ToAsn1Object, addr 0x25c0f90, size 0x8, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_seq() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_seq() const;

constexpr void __cordl_internal_set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

/// @brief Method .ctor, addr 0x25c09b0, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Hashtable*  mappings) ;

/// @brief Method .ctor, addr 0x25c09b4, size 0x5dc, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::IDictionary*  mappings) ;

/// @brief Method .ctor, addr 0x25c0988, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PolicyMappings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PolicyMappings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PolicyMappings(PolicyMappings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolicyMappings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolicyMappings(PolicyMappings const& ) = delete;

/// @brief Field seq, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Asn1Sequence*  ___seq;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::PolicyMappings, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::PolicyMappings, ___seq) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::PolicyMappings);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::PolicyMappings*, "Org.BouncyCastle.Asn1.X509", "PolicyMappings");
