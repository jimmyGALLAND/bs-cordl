#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/Sig/PreferredAlgorithms.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PreferredAlgorithms)
namespace Org::BouncyCastle::Bcpg {
struct SignatureSubpacketTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class PreferredAlgorithms;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms);
// Type: Org.BouncyCastle.Bcpg.Sig::PreferredAlgorithms
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.Sig::PreferredAlgorithms*
class CORDL_TYPE PreferredAlgorithms : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief Method GetPreferences, addr 0x25f2ce8, size 0xa8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> GetPreferences() ;

/// @brief Method IntToByteArray, addr 0x25f2bac, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> IntToByteArray(::ArrayW<int32_t,::Array<int32_t>*>  v) ;

static inline ::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms* New_ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  type, bool  critical, bool  isLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

static inline ::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms* New_ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  type, bool  critical, ::ArrayW<int32_t,::Array<int32_t>*>  preferences) ;

/// @brief Method .ctor, addr 0x25f2c4c, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  type, bool  critical, bool  isLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method .ctor, addr 0x25f2c94, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag  type, bool  critical, ::ArrayW<int32_t,::Array<int32_t>*>  preferences) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreferredAlgorithms() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreferredAlgorithms", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PreferredAlgorithms(PreferredAlgorithms && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreferredAlgorithms", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreferredAlgorithms(PreferredAlgorithms const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms*, "Org.BouncyCastle.Bcpg.Sig", "PreferredAlgorithms");
