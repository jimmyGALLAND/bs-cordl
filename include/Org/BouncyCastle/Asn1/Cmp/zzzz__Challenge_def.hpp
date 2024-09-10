#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/Challenge.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(Challenge)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class Challenge;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::Challenge);
// Type: Org.BouncyCastle.Asn1.Cmp::Challenge
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::Challenge*
class CORDL_TYPE Challenge : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
 __declspec(property(get=get_Owf)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  Owf;

/// @brief Field challenge, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_challenge, put=__cordl_internal_set_challenge)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  challenge;

/// @brief Field owf, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_owf, put=__cordl_internal_set_owf)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  owf;

/// @brief Field witness, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_witness, put=__cordl_internal_set_witness)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  witness;

/// @brief Method GetInstance, addr 0x22a8f88, size 0x17c, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::Cmp::Challenge* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::Challenge* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method ToAsn1Object, addr 0x22a910c, size 0x17c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_challenge() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_challenge() const;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_owf() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_owf() const;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_witness() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_witness() const;

constexpr void __cordl_internal_set_challenge(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

constexpr void __cordl_internal_set_owf(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr void __cordl_internal_set_witness(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

/// @brief Method .ctor, addr 0x22a8ed4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method get_Owf, addr 0x22a9104, size 0x8, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Owf() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Challenge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Challenge", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Challenge(Challenge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Challenge", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Challenge(Challenge const& ) = delete;

/// @brief Field owf, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  ___owf;

/// @brief Field witness, offset: 0x18, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Asn1OctetString*  ___witness;

/// @brief Field challenge, offset: 0x20, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Asn1OctetString*  ___challenge;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::Challenge, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::Challenge, ___owf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::Challenge, ___witness) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::Challenge, ___challenge) == 0x20, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::Challenge);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::Challenge*, "Org.BouncyCastle.Asn1.Cmp", "Challenge");
