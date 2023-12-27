#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PkiConfirmContent)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiConfirmContent;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::PkiConfirmContent);
// Type: Org.BouncyCastle.Asn1.Cmp::PkiConfirmContent
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(30))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::PkiConfirmContent*
class CORDL_TYPE PkiConfirmContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Method GetInstance addr 0xe69bc8 size 0x150 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiConfirmContent* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiConfirmContent* New_ctor();

  /// @brief Method .ctor addr 0xe6a23c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method ToAsn1Object addr 0xe6a244 size 0x58 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "PkiConfirmContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkiConfirmContent(PkiConfirmContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkiConfirmContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkiConfirmContent(PkiConfirmContent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiConfirmContent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PkiConfirmContent, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PkiConfirmContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiConfirmContent*, "Org.BouncyCastle.Asn1.Cmp", "PkiConfirmContent");
