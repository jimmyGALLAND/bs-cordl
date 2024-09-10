#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IO/SignerSink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignerSink)
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class SignerSink;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IO::SignerSink);
// Type: Org.BouncyCastle.Crypto.IO::SignerSink
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.IO::SignerSink*
class CORDL_TYPE SignerSink : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
 __declspec(property(get=get_Signer)) ::Org::BouncyCastle::Crypto::ISigner*  Signer;

/// @brief Field mSigner, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mSigner, put=__cordl_internal_set_mSigner)) ::Org::BouncyCastle::Crypto::ISigner*  mSigner;

static inline ::Org::BouncyCastle::Crypto::IO::SignerSink* New_ctor(::Org::BouncyCastle::Crypto::ISigner*  signer) ;

/// @brief Method Write, addr 0x23467d0, size 0xdc, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len) ;

/// @brief Method WriteByte, addr 0x2346724, size 0xac, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  b) ;

constexpr ::Org::BouncyCastle::Crypto::ISigner*& __cordl_internal_get_mSigner() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> const& __cordl_internal_get_mSigner() const;

constexpr void __cordl_internal_set_mSigner(::Org::BouncyCastle::Crypto::ISigner*  value) ;

/// @brief Method .ctor, addr 0x23466f4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::ISigner*  signer) ;

/// @brief Method get_Signer, addr 0x234671c, size 0x8, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Crypto::ISigner* get_Signer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignerSink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignerSink", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignerSink(SignerSink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignerSink", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignerSink(SignerSink const& ) = delete;

/// @brief Field mSigner, offset: 0x30, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::ISigner*  ___mSigner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::IO::SignerSink, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::IO::SignerSink, ___mSigner) == 0x30, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::IO
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IO::SignerSink);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IO::SignerSink*, "Org.BouncyCastle.Crypto.IO", "SignerSink");
