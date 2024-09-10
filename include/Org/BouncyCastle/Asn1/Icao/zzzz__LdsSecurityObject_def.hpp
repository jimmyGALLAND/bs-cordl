#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Icao/LdsSecurityObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LdsSecurityObject)
namespace Org::BouncyCastle::Asn1::Icao {
class DataGroupHash;
}
namespace Org::BouncyCastle::Asn1::Icao {
class LdsVersionInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Icao {
class LdsSecurityObject;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject);
// Type: Org.BouncyCastle.Asn1.Icao::LdsSecurityObject
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Icao {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Icao::LdsSecurityObject*
class CORDL_TYPE LdsSecurityObject : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
 __declspec(property(get=get_DigestAlgorithmIdentifier)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  DigestAlgorithmIdentifier;

 __declspec(property(get=get_Version)) ::Org::BouncyCastle::Math::BigInteger*  Version;

 __declspec(property(get=get_VersionInfo)) ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*  VersionInfo;

/// @brief Field datagroupHash, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_datagroupHash, put=__cordl_internal_set_datagroupHash)) ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*,::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*>  datagroupHash;

/// @brief Field digestAlgorithmIdentifier, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_digestAlgorithmIdentifier, put=__cordl_internal_set_digestAlgorithmIdentifier)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  digestAlgorithmIdentifier;

/// @brief Field version, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger*  version;

/// @brief Field versionInfo, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_versionInfo, put=__cordl_internal_set_versionInfo)) ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*  versionInfo;

/// @brief Method CheckDatagroupHashSeqSize, addr 0x23aed98, size 0xa4, virtual false, abstract: false, final false
inline void CheckDatagroupHashSeqSize(int32_t  size) ;

/// @brief Method GetDatagroupHash, addr 0x23aefb4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*,::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*> GetDatagroupHash() ;

/// @brief Method GetInstance, addr 0x23ae644, size 0xa4, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  digestAlgorithmIdentifier, ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*,::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*>  datagroupHash) ;

static inline ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  digestAlgorithmIdentifier, ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*,::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*>  datagroupHash, ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*  versionInfo) ;

static inline ::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method ToAsn1Object, addr 0x23aefc4, size 0x1bc, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*,::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*> const& __cordl_internal_get_datagroupHash() const;

constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*,::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*>& __cordl_internal_get_datagroupHash() ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_digestAlgorithmIdentifier() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_digestAlgorithmIdentifier() const;

constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_version() const;

constexpr ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*& __cordl_internal_get_versionInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*> const& __cordl_internal_get_versionInfo() const;

constexpr void __cordl_internal_set_datagroupHash(::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*,::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*>  value) ;

constexpr void __cordl_internal_set_digestAlgorithmIdentifier(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr void __cordl_internal_set_versionInfo(::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*  value) ;

/// @brief Method .ctor, addr 0x23aee3c, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  digestAlgorithmIdentifier, ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*,::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*>  datagroupHash) ;

/// @brief Method .ctor, addr 0x23aeee0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  digestAlgorithmIdentifier, ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*,::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*>  datagroupHash, ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*  versionInfo) ;

/// @brief Method .ctor, addr 0x23ae6e8, size 0x568, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method get_DigestAlgorithmIdentifier, addr 0x23aefac, size 0x8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestAlgorithmIdentifier() ;

/// @brief Method get_Version, addr 0x23aef90, size 0x1c, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Version() ;

/// @brief Method get_VersionInfo, addr 0x23aefbc, size 0x8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* get_VersionInfo() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LdsSecurityObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LdsSecurityObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LdsSecurityObject(LdsSecurityObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LdsSecurityObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LdsSecurityObject(LdsSecurityObject const& ) = delete;

/// @brief Field version, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::DerInteger*  ___version;

/// @brief Field digestAlgorithmIdentifier, offset: 0x18, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  ___digestAlgorithmIdentifier;

/// @brief Field datagroupHash, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*,::Array<::Org::BouncyCastle::Asn1::Icao::DataGroupHash*>*>  ___datagroupHash;

/// @brief Field versionInfo, offset: 0x28, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*  ___versionInfo;

/// @brief Field UBDataGroups offset 0xffffffff size 0x4
static constexpr int32_t  UBDataGroups{static_cast<int32_t>(0x10)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject, ___digestAlgorithmIdentifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject, ___datagroupHash) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject, ___versionInfo) == 0x28, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Icao
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*, "Org.BouncyCastle.Asn1.Icao", "LdsSecurityObject");
