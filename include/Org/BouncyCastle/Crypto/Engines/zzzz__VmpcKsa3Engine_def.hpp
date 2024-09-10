#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/VmpcKsa3Engine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__VmpcEngine_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VmpcKsa3Engine)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class VmpcKsa3Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine);
// Type: Org.BouncyCastle.Crypto.Engines::VmpcKsa3Engine
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::VmpcKsa3Engine*
class CORDL_TYPE VmpcKsa3Engine : public ::Org::BouncyCastle::Crypto::Engines::VmpcEngine {
public:
// Declarations
 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Method InitKey, addr 0x2332948, size 0x2a0, virtual true, abstract: false, final false
inline void InitKey(::ArrayW<uint8_t,::Array<uint8_t>*>  keyBytes, ::ArrayW<uint8_t,::Array<uint8_t>*>  ivBytes) ;

static inline ::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine* New_ctor() ;

/// @brief Method .ctor, addr 0x2332be8, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AlgorithmName, addr 0x2332908, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_AlgorithmName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VmpcKsa3Engine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VmpcKsa3Engine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VmpcKsa3Engine(VmpcKsa3Engine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VmpcKsa3Engine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VmpcKsa3Engine(VmpcKsa3Engine const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine, 0x38>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine*, "Org.BouncyCastle.Crypto.Engines", "VmpcKsa3Engine");
