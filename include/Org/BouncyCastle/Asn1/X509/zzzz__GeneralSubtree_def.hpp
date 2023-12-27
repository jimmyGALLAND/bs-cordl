#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(GeneralSubtree)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralSubtree;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::GeneralSubtree);
// Type: Org.BouncyCastle.Asn1.X509::GeneralSubtree
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(363))
// CS Name: ::Org.BouncyCastle.Asn1.X509::GeneralSubtree*
class CORDL_TYPE GeneralSubtree : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field baseName, offset 0x10, size 0x8
  __declspec(property(get = __get_baseName, put = __set_baseName))::Org::BouncyCastle::Asn1::X509::GeneralName* baseName;

  /// @brief Field minimum, offset 0x18, size 0x8
  __declspec(property(get = __get_minimum, put = __set_minimum))::Org::BouncyCastle::Asn1::DerInteger* minimum;

  /// @brief Field maximum, offset 0x20, size 0x8
  __declspec(property(get = __get_maximum, put = __set_maximum))::Org::BouncyCastle::Asn1::DerInteger* maximum;

  __declspec(property(get = get_Base))::Org::BouncyCastle::Asn1::X509::GeneralName* Base;

  __declspec(property(get = get_Minimum))::Org::BouncyCastle::Math::BigInteger* Minimum;

  __declspec(property(get = get_Maximum))::Org::BouncyCastle::Math::BigInteger* Maximum;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __get_baseName();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __get_baseName() const;

  constexpr void __set_baseName(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_minimum();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_minimum() const;

  constexpr void __set_minimum(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_maximum();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_maximum() const;

  constexpr void __set_maximum(::Org::BouncyCastle::Asn1::DerInteger* value);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralSubtree* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x118f670 size 0x28c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralSubtree* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* baseName, ::Org::BouncyCastle::Math::BigInteger* minimum,
                                                                          ::Org::BouncyCastle::Math::BigInteger* maximum);

  /// @brief Method .ctor addr 0x118f8fc size 0xb0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* baseName, ::Org::BouncyCastle::Math::BigInteger* minimum, ::Org::BouncyCastle::Math::BigInteger* maximum);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralSubtree* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* baseName);

  /// @brief Method .ctor addr 0x118f9ac size 0x4c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* baseName);

  /// @brief Method GetInstance addr 0x118f9f8 size 0x84 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::GeneralSubtree* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* o, bool isExplicit);

  /// @brief Method GetInstance addr 0x118fa7c size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::GeneralSubtree* GetInstance(::System::Object* obj);

  /// @brief Method get_Base addr 0x118fb20 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_Base();

  /// @brief Method get_Minimum addr 0x118fb28 size 0x74 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Minimum();

  /// @brief Method get_Maximum addr 0x118fb9c size 0x14 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Maximum();

  /// @brief Method ToAsn1Object addr 0x118fbb0 size 0x17c virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "GeneralSubtree", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeneralSubtree(GeneralSubtree&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeneralSubtree", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneralSubtree(GeneralSubtree const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneralSubtree();

public:
  /// @brief Field baseName, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___baseName;

  /// @brief Field minimum, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___minimum;

  /// @brief Field maximum, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___maximum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::GeneralSubtree, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::GeneralSubtree);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::GeneralSubtree*, "Org.BouncyCastle.Asn1.X509", "GeneralSubtree");
