#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Macs/SkeinMac.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SkeinMac)
namespace Org::BouncyCastle::Crypto::Digests {
class SkeinEngine;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class SkeinMac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::SkeinMac);
// Type: Org.BouncyCastle.Crypto.Macs::SkeinMac
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Macs::SkeinMac*
class CORDL_TYPE SkeinMac : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Field engine, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_engine, put=__cordl_internal_set_engine)) ::Org::BouncyCastle::Crypto::Digests::SkeinEngine*  engine;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
constexpr operator  ::Org::BouncyCastle::Crypto::IMac*() noexcept;

/// @brief Method BlockUpdate, addr 0x234f01c, size 0x1c, virtual true, abstract: false, final true
inline void BlockUpdate(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  len) ;

/// @brief Method DoFinal, addr 0x234f038, size 0x1c, virtual true, abstract: false, final true
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method GetMacSize, addr 0x234efc8, size 0x1c, virtual true, abstract: false, final true
inline int32_t GetMacSize() ;

/// @brief Method Init, addr 0x234eda4, size 0x224, virtual true, abstract: false, final true
inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

static inline ::Org::BouncyCastle::Crypto::Macs::SkeinMac* New_ctor(::Org::BouncyCastle::Crypto::Macs::SkeinMac*  mac) ;

static inline ::Org::BouncyCastle::Crypto::Macs::SkeinMac* New_ctor(int32_t  stateSizeBits, int32_t  digestSizeBits) ;

/// @brief Method Reset, addr 0x234efe4, size 0x1c, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method Update, addr 0x234f000, size 0x1c, virtual true, abstract: false, final true
inline void Update(uint8_t  inByte) ;

constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine*& __cordl_internal_get_engine() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*> const& __cordl_internal_get_engine() const;

constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Digests::SkeinEngine*  value) ;

/// @brief Method .ctor, addr 0x234eb78, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::Macs::SkeinMac*  mac) ;

/// @brief Method .ctor, addr 0x234eafc, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(int32_t  stateSizeBits, int32_t  digestSizeBits) ;

/// @brief Method get_AlgorithmName, addr 0x234ebf0, size 0x1b4, virtual true, abstract: false, final true
inline ::StringW get_AlgorithmName() ;

/// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
constexpr ::Org::BouncyCastle::Crypto::IMac* i___Org__BouncyCastle__Crypto__IMac() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkeinMac() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkeinMac", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SkeinMac(SkeinMac && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkeinMac", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkeinMac(SkeinMac const& ) = delete;

/// @brief Field engine, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Digests::SkeinEngine*  ___engine;

/// @brief Field SKEIN_1024 offset 0xffffffff size 0x4
static constexpr int32_t  SKEIN_1024{static_cast<int32_t>(0x400)};

/// @brief Field SKEIN_256 offset 0xffffffff size 0x4
static constexpr int32_t  SKEIN_256{static_cast<int32_t>(0x100)};

/// @brief Field SKEIN_512 offset 0xffffffff size 0x4
static constexpr int32_t  SKEIN_512{static_cast<int32_t>(0x200)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::SkeinMac, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::SkeinMac, ___engine) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::SkeinMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::SkeinMac*, "Org.BouncyCastle.Crypto.Macs", "SkeinMac");
