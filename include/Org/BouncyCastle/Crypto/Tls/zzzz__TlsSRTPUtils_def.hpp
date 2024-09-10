#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsSRTPUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsSRTPUtils)
namespace Org::BouncyCastle::Crypto::Tls {
class UseSrtpData;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSRTPUtils;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils);
// Type: Org.BouncyCastle.Crypto.Tls::TlsSRTPUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsSRTPUtils*
class CORDL_TYPE TlsSRTPUtils : public ::System::Object {
public:
// Declarations
/// @brief Method AddUseSrtpExtension, addr 0x23f11f0, size 0xf0, virtual false, abstract: false, final false
static inline void AddUseSrtpExtension(::System::Collections::IDictionary*  extensions, ::Org::BouncyCastle::Crypto::Tls::UseSrtpData*  useSRTPData) ;

/// @brief Method CreateUseSrtpExtension, addr 0x23f12e0, size 0x118, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> CreateUseSrtpExtension(::Org::BouncyCastle::Crypto::Tls::UseSrtpData*  useSrtpData) ;

/// @brief Method GetUseSrtpExtension, addr 0x23f13f8, size 0x6c, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::Tls::UseSrtpData* GetUseSrtpExtension(::System::Collections::IDictionary*  extensions) ;

static inline ::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils* New_ctor() ;

/// @brief Method ReadUseSrtpExtension, addr 0x23f1464, size 0x174, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Crypto::Tls::UseSrtpData* ReadUseSrtpExtension(::ArrayW<uint8_t,::Array<uint8_t>*>  extensionData) ;

/// @brief Method .ctor, addr 0x23f1788, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TlsSRTPUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TlsSRTPUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsSRTPUtils(TlsSRTPUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsSRTPUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsSRTPUtils(TlsSRTPUtils const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils*, "Org.BouncyCastle.Crypto.Tls", "TlsSRTPUtils");
