#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/SerpentEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__SerpentEngineBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerpentEngine)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SerpentEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::SerpentEngine);
// Type: Org.BouncyCastle.Crypto.Engines::SerpentEngine
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::SerpentEngine*
class CORDL_TYPE SerpentEngine : public ::Org::BouncyCastle::Crypto::Engines::SerpentEngineBase {
public:
// Declarations
/// @brief Method DecryptBlock, addr 0x2324280, size 0x1720, virtual true, abstract: false, final false
inline void DecryptBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method EncryptBlock, addr 0x2322d98, size 0x14e8, virtual true, abstract: false, final false
inline void EncryptBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method MakeWorkingKey, addr 0x232181c, size 0x157c, virtual true, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> MakeWorkingKey(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

static inline ::Org::BouncyCastle::Crypto::Engines::SerpentEngine* New_ctor() ;

/// @brief Method .ctor, addr 0x23259a0, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerpentEngine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerpentEngine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerpentEngine(SerpentEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerpentEngine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerpentEngine(SerpentEngine const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::SerpentEngine, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SerpentEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SerpentEngine*, "Org.BouncyCastle.Crypto.Engines", "SerpentEngine");
