#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PgpObject)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpObject;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpObject
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpObject*
class CORDL_TYPE PgpObject : public ::System::Object {
public:
// Declarations
static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject* New_ctor() ;

/// @brief Method .ctor, addr 0x24d88b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PgpObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PgpObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PgpObject(PgpObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PgpObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PgpObject(PgpObject const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpObject");
