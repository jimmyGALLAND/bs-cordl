#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/Ed25519PublicKeyParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ed25519PublicKeyParameters)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519PublicKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::Ed25519PublicKeyParameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::Ed25519PublicKeyParameters*
class CORDL_TYPE Ed25519PublicKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
// Declarations
/// @brief Field KeySize, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_KeySize, put=setStaticF_KeySize)) int32_t  KeySize;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  data;

/// @brief Method Encode, addr 0x2370d60, size 0x84, virtual false, abstract: false, final false
inline void Encode(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off) ;

/// @brief Method GetEncoded, addr 0x2370f60, size 0x5c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetEncoded() ;

static inline ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* New_ctor(::System::IO::Stream*  input) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_data() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_data(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method .ctor, addr 0x2370a10, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off) ;

/// @brief Method .ctor, addr 0x2370e5c, size 0x104, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  input) ;

static inline int32_t getStaticF_KeySize() ;

static inline void setStaticF_KeySize(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Ed25519PublicKeyParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Ed25519PublicKeyParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Ed25519PublicKeyParameters(Ed25519PublicKeyParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ed25519PublicKeyParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ed25519PublicKeyParameters(Ed25519PublicKeyParameters const& ) = delete;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters, ___data) == 0x18, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "Ed25519PublicKeyParameters");
