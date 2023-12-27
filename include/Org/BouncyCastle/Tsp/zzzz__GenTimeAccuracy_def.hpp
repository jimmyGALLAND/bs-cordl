#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenTimeAccuracy)
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Tsp {
class Accuracy;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class GenTimeAccuracy;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::GenTimeAccuracy);
// Type: Org.BouncyCastle.Tsp::GenTimeAccuracy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1763))
// CS Name: ::Org.BouncyCastle.Tsp::GenTimeAccuracy*
class CORDL_TYPE GenTimeAccuracy : public ::System::Object {
public:
  // Declarations
  /// @brief Field accuracy, offset 0x10, size 0x8
  __declspec(property(get = __get_accuracy, put = __set_accuracy))::Org::BouncyCastle::Asn1::Tsp::Accuracy* accuracy;

  __declspec(property(get = get_Seconds)) int32_t Seconds;

  __declspec(property(get = get_Millis)) int32_t Millis;

  __declspec(property(get = get_Micros)) int32_t Micros;

  constexpr ::Org::BouncyCastle::Asn1::Tsp::Accuracy*& __get_accuracy();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Tsp::Accuracy*> const& __get_accuracy() const;

  constexpr void __set_accuracy(::Org::BouncyCastle::Asn1::Tsp::Accuracy* value);

  static inline ::Org::BouncyCastle::Tsp::GenTimeAccuracy* New_ctor(::Org::BouncyCastle::Asn1::Tsp::Accuracy* accuracy);

  /// @brief Method .ctor addr 0x114ef5c size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Tsp::Accuracy* accuracy);

  /// @brief Method get_Seconds addr 0x114ef84 size 0x2c virtual false final false
  inline int32_t get_Seconds();

  /// @brief Method get_Millis addr 0x114efc8 size 0x2c virtual false final false
  inline int32_t get_Millis();

  /// @brief Method get_Micros addr 0x114eff4 size 0x2c virtual false final false
  inline int32_t get_Micros();

  /// @brief Method GetTimeComponent addr 0x114efb0 size 0x18 virtual false final false
  inline int32_t GetTimeComponent(::Org::BouncyCastle::Asn1::DerInteger* time);

  /// @brief Method ToString addr 0x114f020 size 0x1bc virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "GenTimeAccuracy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenTimeAccuracy(GenTimeAccuracy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenTimeAccuracy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenTimeAccuracy(GenTimeAccuracy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenTimeAccuracy();

public:
  /// @brief Field accuracy, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Tsp::Accuracy* ___accuracy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::GenTimeAccuracy, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::GenTimeAccuracy);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::GenTimeAccuracy*, "Org.BouncyCastle.Tsp", "GenTimeAccuracy");
