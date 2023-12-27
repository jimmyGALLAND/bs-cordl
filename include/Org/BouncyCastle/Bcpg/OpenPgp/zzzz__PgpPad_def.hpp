#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpPad)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPad;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPad);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpPad
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1656))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpPad*
class CORDL_TYPE PgpPad : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPad* New_ctor();

  /// @brief Method .ctor addr 0x10b2254 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method PadSessionData addr 0x10b225c size 0x8 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PadSessionData(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionInfo);

  /// @brief Method PadSessionData addr 0x10acb08 size 0x108 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PadSessionData(::ArrayW<uint8_t, ::Array<uint8_t>*> sessionInfo, bool obfuscate);

  /// @brief Method UnpadSessionData addr 0x10b2264 size 0x138 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> UnpadSessionData(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  // Ctor Parameters [CppParam { name: "", ty: "PgpPad", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpPad(PgpPad&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpPad", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpPad(PgpPad const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpPad();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPad, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPad);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPad*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPad");
