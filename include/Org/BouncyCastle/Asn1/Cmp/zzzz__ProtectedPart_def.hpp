#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(ProtectedPart)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeader;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiBody;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class ProtectedPart;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::ProtectedPart);
// Type: Org.BouncyCastle.Asn1.Cmp::ProtectedPart
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(48))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::ProtectedPart*
class CORDL_TYPE ProtectedPart : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field header, offset 0x10, size 0x8
  __declspec(property(get = __get_header, put = __set_header))::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header;

  /// @brief Field body, offset 0x18, size 0x8
  __declspec(property(get = __get_body, put = __set_body))::Org::BouncyCastle::Asn1::Cmp::PkiBody* body;

  __declspec(property(get = get_Header))::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Header;

  __declspec(property(get = get_Body))::Org::BouncyCastle::Asn1::Cmp::PkiBody* Body;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiHeader*& __get_header();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*> const& __get_header() const;

  constexpr void __set_header(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* value);

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiBody*& __get_body();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiBody*> const& __get_body() const;

  constexpr void __set_body(::Org::BouncyCastle::Asn1::Cmp::PkiBody* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::ProtectedPart* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe6e19c size 0xac virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xe6e248 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::ProtectedPart* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::ProtectedPart* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body);

  /// @brief Method .ctor addr 0xe6e3d0 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body);

  /// @brief Method get_Header addr 0xe6e3fc size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* get_Header();

  /// @brief Method get_Body addr 0xe6e404 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiBody* get_Body();

  /// @brief Method ToAsn1Object addr 0xe6e40c size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "ProtectedPart", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProtectedPart(ProtectedPart&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProtectedPart", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProtectedPart(ProtectedPart const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProtectedPart();

public:
  /// @brief Field header, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* ___header;

  /// @brief Field body, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiBody* ___body;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::ProtectedPart);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*, "Org.BouncyCastle.Asn1.Cmp", "ProtectedPart");
