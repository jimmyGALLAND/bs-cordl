#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrimeField)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class PrimeField;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Field::PrimeField);
// Type: Org.BouncyCastle.Math.Field::PrimeField
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1587))
// CS Name: ::Org.BouncyCastle.Math.Field::PrimeField*
class CORDL_TYPE PrimeField : public ::System::Object {
public:
  // Declarations
  /// @brief Field characteristic, offset 0x10, size 0x8
  __declspec(property(get = __get_characteristic, put = __set_characteristic))::Org::BouncyCastle::Math::BigInteger* characteristic;

  __declspec(property(get = get_Characteristic))::Org::BouncyCastle::Math::BigInteger* Characteristic;

  __declspec(property(get = get_Dimension)) int32_t Dimension;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::Field::IFiniteField"
  constexpr operator ::Org::BouncyCastle::Math::Field::IFiniteField*() noexcept;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_characteristic();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_characteristic() const;

  constexpr void __set_characteristic(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::Field::PrimeField* New_ctor(::Org::BouncyCastle::Math::BigInteger* characteristic);

  /// @brief Method .ctor addr 0x105b47c size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* characteristic);

  /// @brief Method get_Characteristic addr 0x105bb00 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Characteristic();

  /// @brief Method get_Dimension addr 0x105bb08 size 0x8 virtual true final false
  inline int32_t get_Dimension();

  /// @brief Method Equals addr 0x105bb10 size 0xb4 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x105bbc4 size 0x20 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "PrimeField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimeField(PrimeField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimeField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimeField(PrimeField const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimeField();

public:
  /// @brief Field characteristic, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___characteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Field::PrimeField, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Field
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::PrimeField);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::PrimeField*, "Org.BouncyCastle.Math.Field", "PrimeField");
