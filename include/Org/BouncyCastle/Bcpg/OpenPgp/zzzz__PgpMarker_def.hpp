#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpMarker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
CORDL_MODULE_EXPORT(PgpMarker)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class MarkerPacket;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpMarker;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpMarker
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpMarker*
class CORDL_TYPE PgpMarker : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
// Declarations
/// @brief Field data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::Org::BouncyCastle::Bcpg::MarkerPacket*  data;

static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgInput) ;

constexpr ::Org::BouncyCastle::Bcpg::MarkerPacket*& __cordl_internal_get_data() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::MarkerPacket*> const& __cordl_internal_get_data() const;

constexpr void __cordl_internal_set_data(::Org::BouncyCastle::Bcpg::MarkerPacket*  value) ;

/// @brief Method .ctor, addr 0x24e3ac0, size 0x118, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgInput) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PgpMarker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PgpMarker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PgpMarker(PgpMarker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PgpMarker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PgpMarker(PgpMarker const& ) = delete;

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Bcpg::MarkerPacket*  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker, ___data) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpMarker");
