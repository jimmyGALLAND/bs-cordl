#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/HkdfBytesGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HkdfBytesGenerator)
namespace Org::BouncyCastle::Crypto::Macs {
class HMac;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class HkdfBytesGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::HkdfBytesGenerator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Generators::HkdfBytesGenerator*
class CORDL_TYPE HkdfBytesGenerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Digest)) ::Org::BouncyCastle::Crypto::IDigest*  Digest;

/// @brief Field currentT, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentT, put=__cordl_internal_set_currentT)) ::ArrayW<uint8_t,::Array<uint8_t>*>  currentT;

/// @brief Field generatedBytes, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_generatedBytes, put=__cordl_internal_set_generatedBytes)) int32_t  generatedBytes;

/// @brief Field hMacHash, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_hMacHash, put=__cordl_internal_set_hMacHash)) ::Org::BouncyCastle::Crypto::Macs::HMac*  hMacHash;

/// @brief Field hashLen, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_hashLen, put=__cordl_internal_set_hashLen)) int32_t  hashLen;

/// @brief Field info, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_info, put=__cordl_internal_set_info)) ::ArrayW<uint8_t,::Array<uint8_t>*>  info;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr operator  ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept;

/// @brief Method ExpandNext, addr 0x233af68, size 0x100, virtual false, abstract: false, final false
inline void ExpandNext() ;

/// @brief Method Extract, addr 0x233ae04, size 0x164, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Extract(::ArrayW<uint8_t,::Array<uint8_t>*>  salt, ::ArrayW<uint8_t,::Array<uint8_t>*>  ikm) ;

/// @brief Method GenerateBytes, addr 0x233b088, size 0x1b8, virtual true, abstract: false, final false
inline int32_t GenerateBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff, int32_t  len) ;

/// @brief Method Init, addr 0x233ac34, size 0x1d0, virtual true, abstract: false, final false
inline void Init(::Org::BouncyCastle::Crypto::IDerivationParameters*  parameters) ;

static inline ::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest*  hash) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_currentT() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_currentT() ;

constexpr int32_t const& __cordl_internal_get_generatedBytes() const;

constexpr int32_t& __cordl_internal_get_generatedBytes() ;

constexpr ::Org::BouncyCastle::Crypto::Macs::HMac*& __cordl_internal_get_hMacHash() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Macs::HMac*> const& __cordl_internal_get_hMacHash() const;

constexpr int32_t const& __cordl_internal_get_hashLen() const;

constexpr int32_t& __cordl_internal_get_hashLen() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_info() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_info() ;

constexpr void __cordl_internal_set_currentT(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_generatedBytes(int32_t  value) ;

constexpr void __cordl_internal_set_hMacHash(::Org::BouncyCastle::Crypto::Macs::HMac*  value) ;

constexpr void __cordl_internal_set_hashLen(int32_t  value) ;

constexpr void __cordl_internal_set_info(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method .ctor, addr 0x233ab44, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IDigest*  hash) ;

/// @brief Method get_Digest, addr 0x233b068, size 0x20, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::IDigest* get_Digest() ;

/// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction* i___Org__BouncyCastle__Crypto__IDerivationFunction() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HkdfBytesGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HkdfBytesGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HkdfBytesGenerator(HkdfBytesGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HkdfBytesGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HkdfBytesGenerator(HkdfBytesGenerator const& ) = delete;

/// @brief Field hMacHash, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Macs::HMac*  ___hMacHash;

/// @brief Field hashLen, offset: 0x18, size: 0x4, def value: None
 int32_t  ___hashLen;

/// @brief Field info, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___info;

/// @brief Field currentT, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___currentT;

/// @brief Field generatedBytes, offset: 0x30, size: 0x4, def value: None
 int32_t  ___generatedBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator, ___hMacHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator, ___hashLen) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator, ___info) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator, ___currentT) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator, ___generatedBytes) == 0x30, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*, "Org.BouncyCastle.Crypto.Generators", "HkdfBytesGenerator");
