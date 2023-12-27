#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CrlDistPoint)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPoint;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CrlDistPoint;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::CrlDistPoint);
// Type: Org.BouncyCastle.Asn1.X509::CrlDistPoint
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(352))
// CS Name: ::Org.BouncyCastle.Asn1.X509::CrlDistPoint*
class CORDL_TYPE CrlDistPoint : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field seq, offset 0x10, size 0x8
  __declspec(property(get = __get_seq, put = __set_seq))::Org::BouncyCastle::Asn1::Asn1Sequence* seq;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_seq();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_seq() const;

  constexpr void __set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance addr 0x118aa38 size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::CrlDistPoint* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0x118aa50 size 0xa8 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::CrlDistPoint* GetInstance(::System::Object* obj);

  /// @brief Method FromExtensions addr 0x118ab20 size 0x74 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::CrlDistPoint* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  static inline ::Org::BouncyCastle::Asn1::X509::CrlDistPoint* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x118aaf8 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::CrlDistPoint*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::Array<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>*> points);

  /// @brief Method .ctor addr 0x118aba0 size 0x7c virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::Array<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>*> points);

  /// @brief Method GetDistributionPoints addr 0x118ac1c size 0x110 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::Array<::Org::BouncyCastle::Asn1::X509::DistributionPoint*>*> GetDistributionPoints();

  /// @brief Method ToAsn1Object addr 0x118aea4 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString addr 0x118aeac size 0x154 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "CrlDistPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrlDistPoint(CrlDistPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrlDistPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrlDistPoint(CrlDistPoint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrlDistPoint();

public:
  /// @brief Field seq, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___seq;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::CrlDistPoint, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CrlDistPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CrlDistPoint*, "Org.BouncyCastle.Asn1.X509", "CrlDistPoint");
