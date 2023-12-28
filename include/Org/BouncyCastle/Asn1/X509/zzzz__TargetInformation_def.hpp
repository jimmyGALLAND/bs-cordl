#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TargetInformation)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Targets;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Target;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class TargetInformation;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::TargetInformation);
// Type: Org.BouncyCastle.Asn1.X509::TargetInformation
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(387))
// CS Name: ::Org.BouncyCastle.Asn1.X509::TargetInformation*
class CORDL_TYPE TargetInformation : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field targets, offset 0x10, size 0x8
  __declspec(property(get = __get_targets, put = __set_targets))::Org::BouncyCastle::Asn1::Asn1Sequence* targets;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_targets();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_targets() const;

  constexpr void __set_targets(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance addr 0x1197e8c size 0x18c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::TargetInformation* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::TargetInformation* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* targets);

  /// @brief Method .ctor addr 0x1198018 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* targets);

  /// @brief Method GetTargetsObjects addr 0x1198040 size 0x110 virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::Targets*, ::Array<::Org::BouncyCastle::Asn1::X509::Targets*>*> GetTargetsObjects();

  static inline ::Org::BouncyCastle::Asn1::X509::TargetInformation* New_ctor(::Org::BouncyCastle::Asn1::X509::Targets* targets);

  /// @brief Method .ctor addr 0x11982dc size 0x7c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::Targets* targets);

  static inline ::Org::BouncyCastle::Asn1::X509::TargetInformation* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::Target*, ::Array<::Org::BouncyCastle::Asn1::X509::Target*>*> targets);

  /// @brief Method .ctor addr 0x1198358 size 0x70 virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::Target*, ::Array<::Org::BouncyCastle::Asn1::X509::Target*>*> targets);

  /// @brief Method ToAsn1Object addr 0x1198444 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "TargetInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TargetInformation(TargetInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TargetInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TargetInformation(TargetInformation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TargetInformation();

public:
  /// @brief Field targets, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___targets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::TargetInformation, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::TargetInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::TargetInformation*, "Org.BouncyCastle.Asn1.X509", "TargetInformation");
