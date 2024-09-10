#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsEnvelopedDataGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsEnvelopedDataGenerator)
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedData;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilderWithKey;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedDataGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator);
// Type: Org.BouncyCastle.Cms::CmsEnvelopedDataGenerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Cms::CmsEnvelopedDataGenerator*
class CORDL_TYPE CmsEnvelopedDataGenerator : public ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator {
public:
// Declarations
/// @brief Method Generate, addr 0x2608bb0, size 0xc94, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable*  content, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*  cipherBuilder) ;

/// @brief Method Generate, addr 0x2608a0c, size 0x1a4, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable*  content, ::StringW  encryptionOid) ;

/// @brief Method Generate, addr 0x2607db0, size 0xc5c, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable*  content, ::StringW  encryptionOid, ::Org::BouncyCastle::Crypto::CipherKeyGenerator*  keyGen) ;

/// @brief Method Generate, addr 0x2609844, size 0x1a0, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable*  content, ::StringW  encryptionOid, int32_t  keySize) ;

static inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator* New_ctor() ;

static inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator* New_ctor(::Org::BouncyCastle::Security::SecureRandom*  rand) ;

/// @brief Method .ctor, addr 0x2607cf8, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x2607d4c, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Security::SecureRandom*  rand) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CmsEnvelopedDataGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsEnvelopedDataGenerator(CmsEnvelopedDataGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsEnvelopedDataGenerator(CmsEnvelopedDataGenerator const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator*, "Org.BouncyCastle.Cms", "CmsEnvelopedDataGenerator");
