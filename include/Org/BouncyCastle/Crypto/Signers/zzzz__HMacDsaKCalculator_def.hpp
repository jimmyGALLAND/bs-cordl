#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/HMacDsaKCalculator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMacDsaKCalculator)
namespace Org::BouncyCastle::Crypto::Macs {
class HMac;
}
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaKCalculator;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class HMacDsaKCalculator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator);
// Type: Org.BouncyCastle.Crypto.Signers::HMacDsaKCalculator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Signers::HMacDsaKCalculator*
class CORDL_TYPE HMacDsaKCalculator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsDeterministic)) bool  IsDeterministic;

/// @brief Field K, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_K, put=__cordl_internal_set_K)) ::ArrayW<uint8_t,::Array<uint8_t>*>  K;

/// @brief Field V, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_V, put=__cordl_internal_set_V)) ::ArrayW<uint8_t,::Array<uint8_t>*>  V;

/// @brief Field hMac, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_hMac, put=__cordl_internal_set_hMac)) ::Org::BouncyCastle::Crypto::Macs::HMac*  hMac;

/// @brief Field n, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_n, put=__cordl_internal_set_n)) ::Org::BouncyCastle::Math::BigInteger*  n;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator"
constexpr operator  ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*() noexcept;

/// @brief Method BitsToInt, addr 0x23899c4, size 0xc8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Math::BigInteger* BitsToInt(::ArrayW<uint8_t,::Array<uint8_t>*>  t) ;

/// @brief Method Init, addr 0x23895ac, size 0x418, virtual true, abstract: false, final true
inline void Init(::Org::BouncyCastle::Math::BigInteger*  n, ::Org::BouncyCastle::Math::BigInteger*  d, ::ArrayW<uint8_t,::Array<uint8_t>*>  message) ;

/// @brief Method Init, addr 0x2389560, size 0x4c, virtual true, abstract: false, final false
inline void Init(::Org::BouncyCastle::Math::BigInteger*  n, ::Org::BouncyCastle::Security::SecureRandom*  random) ;

static inline ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator* New_ctor(::Org::BouncyCastle::Crypto::IDigest*  digest) ;

/// @brief Method NextK, addr 0x2389a8c, size 0x278, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::BigInteger* NextK() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_K() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_K() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_V() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_V() ;

constexpr ::Org::BouncyCastle::Crypto::Macs::HMac*& __cordl_internal_get_hMac() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Macs::HMac*> const& __cordl_internal_get_hMac() const;

constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_n() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_n() const;

constexpr void __cordl_internal_set_K(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_V(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_hMac(::Org::BouncyCastle::Crypto::Macs::HMac*  value) ;

constexpr void __cordl_internal_set_n(::Org::BouncyCastle::Math::BigInteger*  value) ;

/// @brief Method .ctor, addr 0x2389470, size 0xe8, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IDigest*  digest) ;

/// @brief Method get_IsDeterministic, addr 0x2389558, size 0x8, virtual true, abstract: false, final false
inline bool get_IsDeterministic() ;

/// @brief Convert to "::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator"
constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* i___Org__BouncyCastle__Crypto__Signers__IDsaKCalculator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HMacDsaKCalculator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HMacDsaKCalculator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HMacDsaKCalculator(HMacDsaKCalculator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HMacDsaKCalculator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HMacDsaKCalculator(HMacDsaKCalculator const& ) = delete;

/// @brief Field hMac, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Macs::HMac*  ___hMac;

/// @brief Field K, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___K;

/// @brief Field V, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___V;

/// @brief Field n, offset: 0x28, size: 0x8, def value: None
 ::Org::BouncyCastle::Math::BigInteger*  ___n;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator, ___hMac) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator, ___K) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator, ___V) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator, ___n) == 0x28, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*, "Org.BouncyCastle.Crypto.Signers", "HMacDsaKCalculator");
