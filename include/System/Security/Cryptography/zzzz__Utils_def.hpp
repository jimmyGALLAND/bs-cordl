#pragma once
// IWYU pragma private; include "System/Security/Cryptography/Utils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
namespace System::Security::Cryptography {
class RNGCryptoServiceProvider;
}
// Forward declare root types
namespace System::Security::Cryptography {
class Utils;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::Utils);
// Type: System.Security.Cryptography::Utils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::Utils*
class CORDL_TYPE Utils : public ::System::Object {
public:
// Declarations
/// @brief Field _rng, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF__rng, put=setStaticF__rng)) ::System::Security::Cryptography::RNGCryptoServiceProvider*  _rng;

/// @brief Method ConvertByteArrayToInt, addr 0x3c1daf8, size 0x58, virtual false, abstract: false, final false
static inline int32_t ConvertByteArrayToInt(::ArrayW<uint8_t,::Array<uint8_t>*>  input) ;

/// @brief Method ConvertIntToByteArray, addr 0x3c1db50, size 0x124, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ConvertIntToByteArray(int32_t  dwInput) ;

/// @brief Method DWORDFromBigEndian, addr 0x3c191b8, size 0x54, virtual false, abstract: false, final false
static inline void DWORDFromBigEndian(::cordl_internals::Ptr<uint32_t>  x, int32_t  digits, ::cordl_internals::Ptr<uint8_t>  block) ;

/// @brief Method DWORDFromLittleEndian, addr 0x3c1dc74, size 0x50, virtual false, abstract: false, final false
static inline void DWORDFromLittleEndian(::cordl_internals::Ptr<uint32_t>  x, int32_t  digits, ::cordl_internals::Ptr<uint8_t>  block) ;

/// @brief Method DWORDToBigEndian, addr 0x3c190c4, size 0xf4, virtual false, abstract: false, final false
static inline void DWORDToBigEndian(::ArrayW<uint8_t,::Array<uint8_t>*>  block, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  digits) ;

/// @brief Method DWORDToLittleEndian, addr 0x3c1dcc4, size 0xf4, virtual false, abstract: false, final false
static inline void DWORDToLittleEndian(::ArrayW<uint8_t,::Array<uint8_t>*>  block, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  digits) ;

/// @brief Method DiscardWhiteSpaces, addr 0x3c1790c, size 0x1c, virtual false, abstract: false, final false
static inline ::StringW DiscardWhiteSpaces(::StringW  inputBuffer) ;

/// @brief Method DiscardWhiteSpaces, addr 0x3c1d970, size 0x188, virtual false, abstract: false, final false
static inline ::StringW DiscardWhiteSpaces(::StringW  inputBuffer, int32_t  inputOffset, int32_t  inputCount) ;

/// @brief Method FixupKeyParity, addr 0x3c1d1a0, size 0xc8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FixupKeyParity(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method GenerateRandom, addr 0x3c1d900, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GenerateRandom(int32_t  keySize) ;

/// @brief Method HasAlgorithm, addr 0x3c1d514, size 0x8, virtual false, abstract: false, final false
static inline bool HasAlgorithm(int32_t  dwCalg, int32_t  dwKeySize) ;

/// @brief Method QuadWordFromBigEndian, addr 0x3c1ad5c, size 0x84, virtual false, abstract: false, final false
static inline void QuadWordFromBigEndian(::cordl_internals::Ptr<uint64_t>  x, int32_t  digits, ::cordl_internals::Ptr<uint8_t>  block) ;

/// @brief Method QuadWordToBigEndian, addr 0x3c1aba0, size 0x1bc, virtual false, abstract: false, final false
static inline void QuadWordToBigEndian(::ArrayW<uint8_t,::Array<uint8_t>*>  block, ::ArrayW<uint64_t,::Array<uint64_t>*>  x, int32_t  digits) ;

/// @brief Method _ProduceLegacyHmacValues, addr 0x3c1ddb8, size 0x8, virtual false, abstract: false, final false
static inline bool _ProduceLegacyHmacValues() ;

static inline ::System::Security::Cryptography::RNGCryptoServiceProvider* getStaticF__rng() ;

/// @brief Method get_StaticRandomNumberGenerator, addr 0x3c1d7fc, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RNGCryptoServiceProvider* get_StaticRandomNumberGenerator() ;

static inline void setStaticF__rng(::System::Security::Cryptography::RNGCryptoServiceProvider*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Utils(Utils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utils(Utils const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::Utils, 0x10>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::Utils);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::Utils*, "System.Security.Cryptography", "Utils");
