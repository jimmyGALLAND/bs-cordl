#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpUserAttributeSubpacketVectorGenerator)
namespace Org::BouncyCastle::Bcpg::Attr {
struct __ImageAttrib__Format;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVector;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVectorGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpUserAttributeSubpacketVectorGenerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1672))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpUserAttributeSubpacketVectorGenerator*
class CORDL_TYPE PgpUserAttributeSubpacketVectorGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __get_list, put = __set_list))::System::Collections::IList* list;

  constexpr ::System::Collections::IList*& __get_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_list() const;

  constexpr void __set_list(::System::Collections::IList* value);

  /// @brief Method SetImageAttribute addr 0x10cd76c size 0x150 virtual true final false
  inline void SetImageAttribute(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format imageType, ::ArrayW<uint8_t, ::Array<uint8_t>*> imageData);

  /// @brief Method Generate addr 0x10cd8bc size 0x2c8 virtual true final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* Generate();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator* New_ctor();

  /// @brief Method .ctor addr 0x10cdb84 size 0x64 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PgpUserAttributeSubpacketVectorGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpUserAttributeSubpacketVectorGenerator(PgpUserAttributeSubpacketVectorGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpUserAttributeSubpacketVectorGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpUserAttributeSubpacketVectorGenerator(PgpUserAttributeSubpacketVectorGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpUserAttributeSubpacketVectorGenerator();

public:
  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpUserAttributeSubpacketVectorGenerator");
