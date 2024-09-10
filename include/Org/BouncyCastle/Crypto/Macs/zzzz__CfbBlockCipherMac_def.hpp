#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Macs/CfbBlockCipherMac.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CfbBlockCipherMac)
namespace Org::BouncyCastle::Crypto::Macs {
class MacCFBBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class CfbBlockCipherMac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac);
// Type: Org.BouncyCastle.Crypto.Macs::CfbBlockCipherMac
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Macs::CfbBlockCipherMac*
class CORDL_TYPE CfbBlockCipherMac : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Field Buffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Buffer, put=__cordl_internal_set_Buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Buffer;

/// @brief Field bufOff, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_bufOff, put=__cordl_internal_set_bufOff)) int32_t  bufOff;

/// @brief Field cipher, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cipher, put=__cordl_internal_set_cipher)) ::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*  cipher;

/// @brief Field mac, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mac, put=__cordl_internal_set_mac)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mac;

/// @brief Field macSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_macSize, put=__cordl_internal_set_macSize)) int32_t  macSize;

/// @brief Field padding, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_padding, put=__cordl_internal_set_padding)) ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*  padding;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
constexpr operator  ::Org::BouncyCastle::Crypto::IMac*() noexcept;

/// @brief Method BlockUpdate, addr 0x234875c, size 0x140, virtual true, abstract: false, final true
inline void BlockUpdate(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  len) ;

/// @brief Method DoFinal, addr 0x234889c, size 0x164, virtual true, abstract: false, final true
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method GetMacSize, addr 0x23486c8, size 0x8, virtual true, abstract: false, final true
inline int32_t GetMacSize() ;

/// @brief Method Init, addr 0x234865c, size 0x34, virtual true, abstract: false, final true
inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

static inline ::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher) ;

static inline ::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher, int32_t  cfbBitSize, int32_t  macSizeInBits) ;

static inline ::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher, int32_t  cfbBitSize, int32_t  macSizeInBits, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*  padding) ;

static inline ::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*  padding) ;

/// @brief Method Reset, addr 0x2348690, size 0x38, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method Update, addr 0x23486d0, size 0x8c, virtual true, abstract: false, final true
inline void Update(uint8_t  input) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_Buffer() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_Buffer() ;

constexpr int32_t const& __cordl_internal_get_bufOff() const;

constexpr int32_t& __cordl_internal_get_bufOff() ;

constexpr ::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*& __cordl_internal_get_cipher() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*> const& __cordl_internal_get_cipher() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_mac() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_mac() ;

constexpr int32_t const& __cordl_internal_get_macSize() const;

constexpr int32_t& __cordl_internal_get_macSize() ;

constexpr ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*& __cordl_internal_get_padding() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*> const& __cordl_internal_get_padding() const;

constexpr void __cordl_internal_set_Buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_bufOff(int32_t  value) ;

constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*  value) ;

constexpr void __cordl_internal_set_mac(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_macSize(int32_t  value) ;

constexpr void __cordl_internal_set_padding(::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*  value) ;

/// @brief Method .ctor, addr 0x23482ec, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher) ;

/// @brief Method .ctor, addr 0x234863c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher, int32_t  cfbBitSize, int32_t  macSizeInBits) ;

/// @brief Method .ctor, addr 0x23483bc, size 0x1a4, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher, int32_t  cfbBitSize, int32_t  macSizeInBits, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*  padding) ;

/// @brief Method .ctor, addr 0x2348560, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher*  cipher, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*  padding) ;

/// @brief Method get_AlgorithmName, addr 0x2348644, size 0x18, virtual true, abstract: false, final true
inline ::StringW get_AlgorithmName() ;

/// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
constexpr ::Org::BouncyCastle::Crypto::IMac* i___Org__BouncyCastle__Crypto__IMac() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CfbBlockCipherMac() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CfbBlockCipherMac", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CfbBlockCipherMac(CfbBlockCipherMac && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CfbBlockCipherMac", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CfbBlockCipherMac(CfbBlockCipherMac const& ) = delete;

/// @brief Field mac, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___mac;

/// @brief Field Buffer, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___Buffer;

/// @brief Field bufOff, offset: 0x20, size: 0x4, def value: None
 int32_t  ___bufOff;

/// @brief Field cipher, offset: 0x28, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*  ___cipher;

/// @brief Field padding, offset: 0x30, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*  ___padding;

/// @brief Field macSize, offset: 0x38, size: 0x4, def value: None
 int32_t  ___macSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac, ___mac) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac, ___Buffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac, ___bufOff) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac, ___cipher) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac, ___padding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac, ___macSize) == 0x38, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac*, "Org.BouncyCastle.Crypto.Macs", "CfbBlockCipherMac");
