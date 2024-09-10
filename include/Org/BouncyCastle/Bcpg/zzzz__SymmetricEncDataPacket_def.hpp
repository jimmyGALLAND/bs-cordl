#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/SymmetricEncDataPacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
CORDL_MODULE_EXPORT(SymmetricEncDataPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class SymmetricEncDataPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::SymmetricEncDataPacket);
// Type: Org.BouncyCastle.Bcpg::SymmetricEncDataPacket
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg::SymmetricEncDataPacket*
class CORDL_TYPE SymmetricEncDataPacket : public ::Org::BouncyCastle::Bcpg::InputStreamPacket {
public:
// Declarations
static inline ::Org::BouncyCastle::Bcpg::SymmetricEncDataPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn) ;

/// @brief Method .ctor, addr 0x25f91d4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SymmetricEncDataPacket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SymmetricEncDataPacket", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SymmetricEncDataPacket(SymmetricEncDataPacket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SymmetricEncDataPacket", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SymmetricEncDataPacket(SymmetricEncDataPacket const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::SymmetricEncDataPacket, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::SymmetricEncDataPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::SymmetricEncDataPacket*, "Org.BouncyCastle.Bcpg", "SymmetricEncDataPacket");
