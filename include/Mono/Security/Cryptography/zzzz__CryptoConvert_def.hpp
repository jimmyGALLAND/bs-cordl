#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/CryptoConvert.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoConvert)
namespace System::Security::Cryptography {
struct RSAParameters;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class CryptoConvert;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::CryptoConvert);
// Type: Mono.Security.Cryptography::CryptoConvert
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: ::Mono.Security.Cryptography::CryptoConvert*
class CORDL_TYPE CryptoConvert : public ::System::Object {
public:
// Declarations
/// @brief Method FromCapiPrivateKeyBlob, addr 0x3bb6874, size 0x8, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::ArrayW<uint8_t,::Array<uint8_t>*>  blob) ;

/// @brief Method FromCapiPrivateKeyBlob, addr 0x3bb687c, size 0x230, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::ArrayW<uint8_t,::Array<uint8_t>*>  blob, int32_t  offset) ;

/// @brief Method GetParametersFromCapiPrivateKeyBlob, addr 0x3bb6aac, size 0x588, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSAParameters GetParametersFromCapiPrivateKeyBlob(::ArrayW<uint8_t,::Array<uint8_t>*>  blob, int32_t  offset) ;

/// @brief Method ToHex, addr 0x3bb7034, size 0x13c, virtual false, abstract: false, final false
static inline ::StringW ToHex(::ArrayW<uint8_t,::Array<uint8_t>*>  input) ;

/// @brief Method ToInt32LE, addr 0x3bb66d8, size 0x74, virtual false, abstract: false, final false
static inline int32_t ToInt32LE(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  offset) ;

/// @brief Method ToUInt32LE, addr 0x3bb674c, size 0x74, virtual false, abstract: false, final false
static inline uint32_t ToUInt32LE(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  offset) ;

/// @brief Method Trim, addr 0x3bb67c0, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Trim(::ArrayW<uint8_t,::Array<uint8_t>*>  array) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CryptoConvert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CryptoConvert", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CryptoConvert(CryptoConvert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CryptoConvert", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CryptoConvert(CryptoConvert const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::CryptoConvert, 0x10>, "Size mismatch!");

} // namespace end def Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::CryptoConvert);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::CryptoConvert*, "Mono.Security.Cryptography", "CryptoConvert");
