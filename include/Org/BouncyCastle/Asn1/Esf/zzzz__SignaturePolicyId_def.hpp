#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/SignaturePolicyId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SignaturePolicyId)
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHashAlgAndValue;
}
namespace Org::BouncyCastle::Asn1::Esf {
class SigPolicyQualifierInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class SignaturePolicyId;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId);
// Type: Org.BouncyCastle.Asn1.Esf::SignaturePolicyId
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Esf::SignaturePolicyId*
class CORDL_TYPE SignaturePolicyId : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
 __declspec(property(get=get_SigPolicyHash)) ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  SigPolicyHash;

 __declspec(property(get=get_SigPolicyIdentifier)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  SigPolicyIdentifier;

/// @brief Field sigPolicyHash, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sigPolicyHash, put=__cordl_internal_set_sigPolicyHash)) ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  sigPolicyHash;

/// @brief Field sigPolicyIdentifier, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sigPolicyIdentifier, put=__cordl_internal_set_sigPolicyIdentifier)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  sigPolicyIdentifier;

/// @brief Field sigPolicyQualifiers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sigPolicyQualifiers, put=__cordl_internal_set_sigPolicyQualifiers)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  sigPolicyQualifiers;

/// @brief Method GetInstance, addr 0x22d88f8, size 0x17c, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* GetInstance(::System::Object*  obj) ;

/// @brief Method GetSigPolicyQualifiers, addr 0x22d9024, size 0x114, virtual false, abstract: false, final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*,::Array<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>*> GetSigPolicyQualifiers() ;

static inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  sigPolicyIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  sigPolicyHash) ;

static inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  sigPolicyIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  sigPolicyHash, ::ArrayW<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*,::Array<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>*>  sigPolicyQualifiers) ;

static inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  sigPolicyIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  sigPolicyHash, ::System::Collections::IEnumerable*  sigPolicyQualifiers) ;

/// @brief Method ToAsn1Object, addr 0x22d92b4, size 0x154, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*& __cordl_internal_get_sigPolicyHash() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*> const& __cordl_internal_get_sigPolicyHash() const;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_sigPolicyIdentifier() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_sigPolicyIdentifier() const;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_sigPolicyQualifiers() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_sigPolicyQualifiers() const;

constexpr void __cordl_internal_set_sigPolicyHash(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  value) ;

constexpr void __cordl_internal_set_sigPolicyIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr void __cordl_internal_set_sigPolicyQualifiers(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

/// @brief Method .ctor, addr 0x22d8a74, size 0x2d4, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor, addr 0x22d8d48, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  sigPolicyIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  sigPolicyHash) ;

/// @brief Method .ctor, addr 0x22d8d50, size 0xf4, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  sigPolicyIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  sigPolicyHash, ::ArrayW<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*,::Array<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>*>  sigPolicyQualifiers) ;

/// @brief Method .ctor, addr 0x22d8e44, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  sigPolicyIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  sigPolicyHash, ::System::Collections::IEnumerable*  sigPolicyQualifiers) ;

/// @brief Method get_SigPolicyHash, addr 0x22d901c, size 0x8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* get_SigPolicyHash() ;

/// @brief Method get_SigPolicyIdentifier, addr 0x22d9014, size 0x8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_SigPolicyIdentifier() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignaturePolicyId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignaturePolicyId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignaturePolicyId(SignaturePolicyId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignaturePolicyId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignaturePolicyId(SignaturePolicyId const& ) = delete;

/// @brief Field sigPolicyIdentifier, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  ___sigPolicyIdentifier;

/// @brief Field sigPolicyHash, offset: 0x18, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  ___sigPolicyHash;

/// @brief Field sigPolicyQualifiers, offset: 0x20, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Asn1Sequence*  ___sigPolicyQualifiers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId, ___sigPolicyIdentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId, ___sigPolicyHash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId, ___sigPolicyQualifiers) == 0x20, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*, "Org.BouncyCastle.Asn1.Esf", "SignaturePolicyId");
