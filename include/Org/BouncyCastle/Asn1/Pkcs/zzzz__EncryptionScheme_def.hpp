#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/EncryptionScheme.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
CORDL_MODULE_EXPORT(EncryptionScheme)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
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
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptionScheme;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme);
// Type: Org.BouncyCastle.Asn1.Pkcs::EncryptionScheme
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::EncryptionScheme*
class CORDL_TYPE EncryptionScheme : public ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier {
public:
// Declarations
 __declspec(property(get=get_Asn1Object)) ::Org::BouncyCastle::Asn1::Asn1Object*  Asn1Object;

/// @brief Method GetInstance, addr 0x23c1a84, size 0x17c, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  objectID) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  objectID, ::Org::BouncyCastle::Asn1::Asn1Encodable*  parameters) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method ToAsn1Object, addr 0x23c1c28, size 0x10c, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

/// @brief Method .ctor, addr 0x23c196c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  objectID) ;

/// @brief Method .ctor, addr 0x23c1994, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  objectID, ::Org::BouncyCastle::Asn1::Asn1Encodable*  parameters) ;

/// @brief Method .ctor, addr 0x23c19c0, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method get_Asn1Object, addr 0x23c1c00, size 0x28, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* get_Asn1Object() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EncryptionScheme() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EncryptionScheme", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EncryptionScheme(EncryptionScheme && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EncryptionScheme", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EncryptionScheme(EncryptionScheme const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*, "Org.BouncyCastle.Asn1.Pkcs", "EncryptionScheme");
