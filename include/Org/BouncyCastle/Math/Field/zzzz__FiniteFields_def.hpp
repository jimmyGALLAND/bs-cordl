#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FiniteFields)
namespace Org::BouncyCastle::Math::Field {
class IPolynomialExtensionField;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class FiniteFields;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Field::FiniteFields);
// Type: Org.BouncyCastle.Math.Field::FiniteFields
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1580))
// CS Name: ::Org.BouncyCastle.Math.Field::FiniteFields*
class CORDL_TYPE FiniteFields : public ::System::Object {
public:
  // Declarations
  /// @brief Field GF_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GF_2, put = setStaticF_GF_2))::Org::BouncyCastle::Math::Field::IFiniteField* GF_2;

  /// @brief Field GF_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GF_3, put = setStaticF_GF_3))::Org::BouncyCastle::Math::Field::IFiniteField* GF_3;

  static inline void setStaticF_GF_2(::Org::BouncyCastle::Math::Field::IFiniteField* value);

  static inline ::Org::BouncyCastle::Math::Field::IFiniteField* getStaticF_GF_2();

  static inline void setStaticF_GF_3(::Org::BouncyCastle::Math::Field::IFiniteField* value);

  static inline ::Org::BouncyCastle::Math::Field::IFiniteField* getStaticF_GF_3();

  /// @brief Method GetBinaryExtensionField addr 0x105b0c4 size 0x194 virtual false final false
  static inline ::Org::BouncyCastle::Math::Field::IPolynomialExtensionField* GetBinaryExtensionField(::ArrayW<int32_t, ::Array<int32_t>*> exponents);

  /// @brief Method GetPrimeField addr 0x105b2fc size 0x180 virtual false final false
  static inline ::Org::BouncyCastle::Math::Field::IFiniteField* GetPrimeField(::Org::BouncyCastle::Math::BigInteger* characteristic);

  static inline ::Org::BouncyCastle::Math::Field::FiniteFields* New_ctor();

  /// @brief Method .ctor addr 0x105b59c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FiniteFields", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FiniteFields(FiniteFields&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FiniteFields", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FiniteFields(FiniteFields const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FiniteFields();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Field::FiniteFields, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Field
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::FiniteFields);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::FiniteFields*, "Org.BouncyCastle.Math.Field", "FiniteFields");
