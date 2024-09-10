#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Utilities/Pack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pack)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Utilities {
class Pack;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Utilities::Pack);
// Type: Org.BouncyCastle.Crypto.Utilities::Pack
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Utilities {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Utilities::Pack*
class CORDL_TYPE Pack : public ::System::Object {
public:
// Declarations
/// @brief Method BE_To_UInt16, addr 0x23f9a60, size 0x34, virtual false, abstract: false, final false
static inline uint16_t BE_To_UInt16(::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method BE_To_UInt16, addr 0x23f9a94, size 0x40, virtual false, abstract: false, final false
static inline uint16_t BE_To_UInt16(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method BE_To_UInt32, addr 0x23f9d7c, size 0x58, virtual false, abstract: false, final false
static inline uint32_t BE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method BE_To_UInt32, addr 0x23f9dd4, size 0x74, virtual false, abstract: false, final false
static inline uint32_t BE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method BE_To_UInt32, addr 0x23f9ebc, size 0x88, virtual false, abstract: false, final false
static inline void BE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  bsOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  ns, int32_t  nsOff, int32_t  nsLen) ;

/// @brief Method BE_To_UInt32, addr 0x23f9e48, size 0x74, virtual false, abstract: false, final false
static inline void BE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off, ::ArrayW<uint32_t,::Array<uint32_t>*>  ns) ;

/// @brief Method BE_To_UInt64, addr 0x23fa1c0, size 0x34, virtual false, abstract: false, final false
static inline uint64_t BE_To_UInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method BE_To_UInt64, addr 0x23fa1f4, size 0x38, virtual false, abstract: false, final false
static inline uint64_t BE_To_UInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method BE_To_UInt64, addr 0x23fa2c4, size 0xac, virtual false, abstract: false, final false
static inline void BE_To_UInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  bsOff, ::ArrayW<uint64_t,::Array<uint64_t>*>  ns, int32_t  nsOff, int32_t  nsLen) ;

/// @brief Method BE_To_UInt64, addr 0x23fa22c, size 0x98, virtual false, abstract: false, final false
static inline void BE_To_UInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off, ::ArrayW<uint64_t,::Array<uint64_t>*>  ns) ;

/// @brief Method LE_To_UInt16, addr 0x23fa3ec, size 0x2c, virtual false, abstract: false, final false
static inline uint16_t LE_To_UInt16(::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method LE_To_UInt16, addr 0x23fa418, size 0x40, virtual false, abstract: false, final false
static inline uint16_t LE_To_UInt16(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method LE_To_UInt32, addr 0x23fa840, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> LE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off, int32_t  count) ;

/// @brief Method LE_To_UInt32, addr 0x23fa678, size 0x58, virtual false, abstract: false, final false
static inline uint32_t LE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method LE_To_UInt32, addr 0x23fa6d0, size 0x74, virtual false, abstract: false, final false
static inline uint32_t LE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method LE_To_UInt32, addr 0x23fa7b8, size 0x88, virtual false, abstract: false, final false
static inline void LE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  bOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  ns, int32_t  nOff, int32_t  count) ;

/// @brief Method LE_To_UInt32, addr 0x23fa744, size 0x74, virtual false, abstract: false, final false
static inline void LE_To_UInt32(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off, ::ArrayW<uint32_t,::Array<uint32_t>*>  ns) ;

/// @brief Method LE_To_UInt64, addr 0x23fab64, size 0x38, virtual false, abstract: false, final false
static inline uint64_t LE_To_UInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method LE_To_UInt64, addr 0x23fab9c, size 0x3c, virtual false, abstract: false, final false
static inline uint64_t LE_To_UInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method LE_To_UInt64, addr 0x23fac70, size 0xac, virtual false, abstract: false, final false
static inline void LE_To_UInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  bsOff, ::ArrayW<uint64_t,::Array<uint64_t>*>  ns, int32_t  nsOff, int32_t  nsLen) ;

/// @brief Method LE_To_UInt64, addr 0x23fabd8, size 0x98, virtual false, abstract: false, final false
static inline void LE_To_UInt64(::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off, ::ArrayW<uint64_t,::Array<uint64_t>*>  ns) ;

static inline ::Org::BouncyCastle::Crypto::Utilities::Pack* New_ctor() ;

/// @brief Method UInt16_To_BE, addr 0x23f99e4, size 0x34, virtual false, abstract: false, final false
static inline void UInt16_To_BE(uint16_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method UInt16_To_BE, addr 0x23f9a18, size 0x48, virtual false, abstract: false, final false
static inline void UInt16_To_BE(uint16_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt16_To_LE, addr 0x23fa370, size 0x34, virtual false, abstract: false, final false
static inline void UInt16_To_LE(uint16_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method UInt16_To_LE, addr 0x23fa3a4, size 0x48, virtual false, abstract: false, final false
static inline void UInt16_To_LE(uint16_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt32_To_BE, addr 0x23f9ad4, size 0x64, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UInt32_To_BE(uint32_t  n) ;

/// @brief Method UInt32_To_BE, addr 0x23f9c0c, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UInt32_To_BE(::ArrayW<uint32_t,::Array<uint32_t>*>  ns) ;

/// @brief Method UInt32_To_BE, addr 0x23f9bb8, size 0x54, virtual false, abstract: false, final false
static inline void UInt32_To_BE(uint32_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method UInt32_To_BE, addr 0x23f9b38, size 0x80, virtual false, abstract: false, final false
static inline void UInt32_To_BE(uint32_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt32_To_BE, addr 0x23f9c7c, size 0x78, virtual false, abstract: false, final false
static inline void UInt32_To_BE(::ArrayW<uint32_t,::Array<uint32_t>*>  ns, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt32_To_BE, addr 0x23f9cf4, size 0x88, virtual false, abstract: false, final false
static inline void UInt32_To_BE(::ArrayW<uint32_t,::Array<uint32_t>*>  ns, int32_t  nsOff, int32_t  nsLen, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  bsOff) ;

/// @brief Method UInt32_To_LE, addr 0x23fa458, size 0x64, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UInt32_To_LE(uint32_t  n) ;

/// @brief Method UInt32_To_LE, addr 0x23fa590, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UInt32_To_LE(::ArrayW<uint32_t,::Array<uint32_t>*>  ns) ;

/// @brief Method UInt32_To_LE, addr 0x23fa53c, size 0x54, virtual false, abstract: false, final false
static inline void UInt32_To_LE(uint32_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method UInt32_To_LE, addr 0x23fa4bc, size 0x80, virtual false, abstract: false, final false
static inline void UInt32_To_LE(uint32_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt32_To_LE, addr 0x23fa600, size 0x78, virtual false, abstract: false, final false
static inline void UInt32_To_LE(::ArrayW<uint32_t,::Array<uint32_t>*>  ns, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt64_To_BE, addr 0x23f9f44, size 0x74, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UInt64_To_BE(uint64_t  n) ;

/// @brief Method UInt64_To_BE, addr 0x23fa01c, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UInt64_To_BE(::ArrayW<uint64_t,::Array<uint64_t>*>  ns) ;

/// @brief Method UInt64_To_BE, addr 0x23f9fec, size 0x30, virtual false, abstract: false, final false
static inline void UInt64_To_BE(uint64_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method UInt64_To_BE, addr 0x23f9fb8, size 0x34, virtual false, abstract: false, final false
static inline void UInt64_To_BE(uint64_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt64_To_BE, addr 0x23fa08c, size 0x94, virtual false, abstract: false, final false
static inline void UInt64_To_BE(::ArrayW<uint64_t,::Array<uint64_t>*>  ns, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt64_To_BE, addr 0x23fa120, size 0xa0, virtual false, abstract: false, final false
static inline void UInt64_To_BE(::ArrayW<uint64_t,::Array<uint64_t>*>  ns, int32_t  nsOff, int32_t  nsLen, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  bsOff) ;

/// @brief Method UInt64_To_LE, addr 0x23fa8f0, size 0x74, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UInt64_To_LE(uint64_t  n) ;

/// @brief Method UInt64_To_LE, addr 0x23fa9c0, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UInt64_To_LE(::ArrayW<uint64_t,::Array<uint64_t>*>  ns) ;

/// @brief Method UInt64_To_LE, addr 0x23fa994, size 0x2c, virtual false, abstract: false, final false
static inline void UInt64_To_LE(uint64_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs) ;

/// @brief Method UInt64_To_LE, addr 0x23fa964, size 0x30, virtual false, abstract: false, final false
static inline void UInt64_To_LE(uint64_t  n, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt64_To_LE, addr 0x23faa30, size 0x94, virtual false, abstract: false, final false
static inline void UInt64_To_LE(::ArrayW<uint64_t,::Array<uint64_t>*>  ns, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  off) ;

/// @brief Method UInt64_To_LE, addr 0x23faac4, size 0xa0, virtual false, abstract: false, final false
static inline void UInt64_To_LE(::ArrayW<uint64_t,::Array<uint64_t>*>  ns, int32_t  nsOff, int32_t  nsLen, ::ArrayW<uint8_t,::Array<uint8_t>*>  bs, int32_t  bsOff) ;

/// @brief Method .ctor, addr 0x23f99dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Pack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Pack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Pack(Pack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pack(Pack const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Utilities::Pack, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Utilities::Pack);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Utilities::Pack*, "Org.BouncyCastle.Crypto.Utilities", "Pack");
