#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/PbeUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PbeUtilities)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class PbeParametersGenerator;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class PbeUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::PbeUtilities);
// Type: Org.BouncyCastle.Security::PbeUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Security::PbeUtilities*
class CORDL_TYPE PbeUtilities : public ::System::Object {
public:
// Declarations
/// @brief Field algorithmType, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_algorithmType, put=setStaticF_algorithmType)) ::System::Collections::IDictionary*  algorithmType;

/// @brief Field algorithms, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_algorithms, put=setStaticF_algorithms)) ::System::Collections::IDictionary*  algorithms;

/// @brief Field oids, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_oids, put=setStaticF_oids)) ::System::Collections::IDictionary*  oids;

/// @brief Method CreateEngine, addr 0x256bfd8, size 0x110, virtual false, abstract: false, final false
static inline ::System::Object* CreateEngine(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  algID) ;

/// @brief Method CreateEngine, addr 0x256bac4, size 0x514, virtual false, abstract: false, final false
static inline ::System::Object* CreateEngine(::StringW  algorithm) ;

/// @brief Method CreateEngine, addr 0x256ba64, size 0x60, virtual false, abstract: false, final false
static inline ::System::Object* CreateEngine(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  algorithmOid) ;

/// @brief Method FixDesParity, addr 0x256b850, size 0x214, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::ICipherParameters* FixDesParity(::StringW  mechanism, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method GenerateAlgorithmParameters, addr 0x2569fb4, size 0x124, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GenerateAlgorithmParameters(::StringW  algorithm, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt, int32_t  iterationCount) ;

/// @brief Method GenerateAlgorithmParameters, addr 0x2569f3c, size 0x78, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GenerateAlgorithmParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  algorithmOid, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt, int32_t  iterationCount) ;

/// @brief Method GenerateAlgorithmParameters, addr 0x256a0d8, size 0x3ac, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GenerateAlgorithmParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  cipherAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  hashAlgorithm, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt, int32_t  iterationCount, ::Org::BouncyCastle::Security::SecureRandom*  secureRandom) ;

/// @brief Method GenerateCipherParameters, addr 0x256b694, size 0xa4, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateCipherParameters(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  algID, ::ArrayW<char16_t,::Array<char16_t>*>  password) ;

/// @brief Method GenerateCipherParameters, addr 0x256b738, size 0xa8, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateCipherParameters(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  algID, ::ArrayW<char16_t,::Array<char16_t>*>  password, bool  wrongPkcs12Zero) ;

/// @brief Method GenerateCipherParameters, addr 0x256b7e0, size 0x70, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateCipherParameters(::StringW  algorithm, ::ArrayW<char16_t,::Array<char16_t>*>  password, ::Org::BouncyCastle::Asn1::Asn1Encodable*  pbeParameters) ;

/// @brief Method GenerateCipherParameters, addr 0x256a500, size 0x1114, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateCipherParameters(::StringW  algorithm, ::ArrayW<char16_t,::Array<char16_t>*>  password, bool  wrongPkcs12Zero, ::Org::BouncyCastle::Asn1::Asn1Encodable*  pbeParameters) ;

/// @brief Method GenerateCipherParameters, addr 0x256a484, size 0x7c, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateCipherParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  algorithmOid, ::ArrayW<char16_t,::Array<char16_t>*>  password, ::Org::BouncyCastle::Asn1::Asn1Encodable*  pbeParameters) ;

/// @brief Method GenerateCipherParameters, addr 0x256b614, size 0x80, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateCipherParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  algorithmOid, ::ArrayW<char16_t,::Array<char16_t>*>  password, bool  wrongPkcs12Zero, ::Org::BouncyCastle::Asn1::Asn1Encodable*  pbeParameters) ;

/// @brief Method GetEncodingName, addr 0x256c0e8, size 0x108, virtual false, abstract: false, final false
static inline ::StringW GetEncodingName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method GetObjectIdentifier, addr 0x25692ac, size 0x208, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetObjectIdentifier(::StringW  mechanism) ;

/// @brief Method IsOpenSsl, addr 0x2569b74, size 0x1fc, virtual false, abstract: false, final false
static inline bool IsOpenSsl(::StringW  algorithm) ;

/// @brief Method IsPbeAlgorithm, addr 0x2569d70, size 0x1cc, virtual false, abstract: false, final false
static inline bool IsPbeAlgorithm(::StringW  algorithm) ;

/// @brief Method IsPkcs12, addr 0x2569580, size 0x1fc, virtual false, abstract: false, final false
static inline bool IsPkcs12(::StringW  algorithm) ;

/// @brief Method IsPkcs5Scheme1, addr 0x256977c, size 0x1fc, virtual false, abstract: false, final false
static inline bool IsPkcs5Scheme1(::StringW  algorithm) ;

/// @brief Method IsPkcs5Scheme2, addr 0x2569978, size 0x1fc, virtual false, abstract: false, final false
static inline bool IsPkcs5Scheme2(::StringW  algorithm) ;

/// @brief Method MakePbeGenerator, addr 0x2569074, size 0x238, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::PbeParametersGenerator* MakePbeGenerator(::StringW  type, ::Org::BouncyCastle::Crypto::IDigest*  digest, ::ArrayW<uint8_t,::Array<uint8_t>*>  key, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt, int32_t  iterationCount) ;

static inline ::Org::BouncyCastle::Security::PbeUtilities* New_ctor() ;

/// @brief Method .ctor, addr 0x2563a68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::IDictionary* getStaticF_algorithmType() ;

static inline ::System::Collections::IDictionary* getStaticF_algorithms() ;

static inline ::System::Collections::IDictionary* getStaticF_oids() ;

/// @brief Method get_Algorithms, addr 0x25694b4, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Collections::ICollection* get_Algorithms() ;

static inline void setStaticF_algorithmType(::System::Collections::IDictionary*  value) ;

static inline void setStaticF_algorithms(::System::Collections::IDictionary*  value) ;

static inline void setStaticF_oids(::System::Collections::IDictionary*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PbeUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PbeUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PbeUtilities(PbeUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PbeUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PbeUtilities(PbeUtilities const& ) = delete;

/// @brief Field OpenSsl offset 0xffffffff size 0x8
static constexpr ::ConstString  OpenSsl{u"OpenSsl"};

/// @brief Field Pkcs12 offset 0xffffffff size 0x8
static constexpr ::ConstString  Pkcs12{u"Pkcs12"};

/// @brief Field Pkcs5S1 offset 0xffffffff size 0x8
static constexpr ::ConstString  Pkcs5S1{u"Pkcs5S1"};

/// @brief Field Pkcs5S2 offset 0xffffffff size 0x8
static constexpr ::ConstString  Pkcs5S2{u"Pkcs5S2"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::PbeUtilities, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::PbeUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::PbeUtilities*, "Org.BouncyCastle.Security", "PbeUtilities");
