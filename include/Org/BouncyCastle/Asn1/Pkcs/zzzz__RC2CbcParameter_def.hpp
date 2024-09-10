#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/RC2CbcParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC2CbcParameter)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
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
namespace Org::BouncyCastle::Asn1::Pkcs {
class RC2CbcParameter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter);
// Type: Org.BouncyCastle.Asn1.Pkcs::RC2CbcParameter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::RC2CbcParameter*
class CORDL_TYPE RC2CbcParameter : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
 __declspec(property(get=get_RC2ParameterVersion)) ::Org::BouncyCastle::Math::BigInteger*  RC2ParameterVersion;

/// @brief Field iv, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_iv, put=__cordl_internal_set_iv)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  iv;

/// @brief Field version, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger*  version;

/// @brief Method GetIV, addr 0x23c6a58, size 0x78, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetIV() ;

/// @brief Method GetInstance, addr 0x23c665c, size 0x158, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  iv) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter* New_ctor(int32_t  parameterVersion, ::ArrayW<uint8_t,::Array<uint8_t>*>  iv) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method ToAsn1Object, addr 0x23c6ad0, size 0x114, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_iv() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_iv() const;

constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_version() const;

constexpr void __cordl_internal_set_iv(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

/// @brief Method .ctor, addr 0x23c6920, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  iv) ;

/// @brief Method .ctor, addr 0x23c6994, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  parameterVersion, ::ArrayW<uint8_t,::Array<uint8_t>*>  iv) ;

/// @brief Method .ctor, addr 0x23c67b4, size 0x16c, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method get_RC2ParameterVersion, addr 0x23c6a44, size 0x14, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Math::BigInteger* get_RC2ParameterVersion() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RC2CbcParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RC2CbcParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RC2CbcParameter(RC2CbcParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RC2CbcParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RC2CbcParameter(RC2CbcParameter const& ) = delete;

/// @brief Field version, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::DerInteger*  ___version;

/// @brief Field iv, offset: 0x18, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Asn1OctetString*  ___iv;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter, ___iv) == 0x18, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter*, "Org.BouncyCastle.Asn1.Pkcs", "RC2CbcParameter");
