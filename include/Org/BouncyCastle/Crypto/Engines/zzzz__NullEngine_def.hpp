#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/NullEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullEngine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class NullEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::NullEngine);
// Type: Org.BouncyCastle.Crypto.Engines::NullEngine
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::NullEngine*
class CORDL_TYPE NullEngine : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

 __declspec(property(get=get_IsPartialBlockOkay)) bool  IsPartialBlockOkay;

/// @brief Field initialised, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialised, put=__cordl_internal_set_initialised)) bool  initialised;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

/// @brief Method GetBlockSize, addr 0x2317acc, size 0x8, virtual true, abstract: false, final false
inline int32_t GetBlockSize() ;

/// @brief Method Init, addr 0x2317a78, size 0xc, virtual true, abstract: false, final false
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

static inline ::Org::BouncyCastle::Crypto::Engines::NullEngine* New_ctor() ;

/// @brief Method ProcessBlock, addr 0x2317ad4, size 0x130, virtual true, abstract: false, final false
inline int32_t ProcessBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset, addr 0x2317c04, size 0x4, virtual true, abstract: false, final false
inline void Reset() ;

constexpr bool const& __cordl_internal_get_initialised() const;

constexpr bool& __cordl_internal_get_initialised() ;

constexpr void __cordl_internal_set_initialised(bool  value) ;

/// @brief Method .ctor, addr 0x2317a70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AlgorithmName, addr 0x2317a84, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay, addr 0x2317ac4, size 0x8, virtual true, abstract: false, final false
inline bool get_IsPartialBlockOkay() ;

/// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NullEngine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NullEngine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NullEngine(NullEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NullEngine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NullEngine(NullEngine const& ) = delete;

/// @brief Field initialised, offset: 0x10, size: 0x1, def value: None
 bool  ___initialised;

/// @brief Field BlockSize offset 0xffffffff size 0x4
static constexpr int32_t  BlockSize{static_cast<int32_t>(0x1)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::NullEngine, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::NullEngine, ___initialised) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::NullEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::NullEngine*, "Org.BouncyCastle.Crypto.Engines", "NullEngine");
