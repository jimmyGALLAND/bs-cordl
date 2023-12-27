#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecT193Field)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT193Field;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193Field);
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT193Field
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1470))
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecT193Field*
class CORDL_TYPE SecT193Field : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add addr 0x10151b8 size 0xd8 virtual false final false
  static inline void Add(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method AddExt addr 0x1015290 size 0x168 virtual false final false
  static inline void AddExt(::ArrayW<uint64_t, ::Array<uint64_t>*> xx, ::ArrayW<uint64_t, ::Array<uint64_t>*> yy, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method AddOne addr 0x10153f8 size 0x8c virtual false final false
  static inline void AddOne(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method AddTo addr 0x1015484 size 0xa8 virtual false final false
  static inline void AddTo(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method FromBigInteger addr 0x101552c size 0x10 virtual false final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method HalfTrace addr 0x101553c size 0x8c virtual false final false
  static inline void HalfTrace(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Invert addr 0x1015754 size 0x18c virtual false final false
  static inline void Invert(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Multiply addr 0x1015998 size 0x4c virtual false final false
  static inline void Multiply(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method MultiplyAddToExt addr 0x1015d54 size 0x50 virtual false final false
  static inline void MultiplyAddToExt(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method Reduce addr 0x1015670 size 0xe4 virtual false final false
  static inline void Reduce(::ArrayW<uint64_t, ::Array<uint64_t>*> xx, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Reduce63 addr 0x1015da4 size 0x84 virtual false final false
  static inline void Reduce63(::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method Sqrt addr 0x1015e28 size 0xfc virtual false final false
  static inline void Sqrt(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Square addr 0x10158e0 size 0x3c virtual false final false
  static inline void Square(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method SquareAddToExt addr 0x1015f24 size 0x40 virtual false final false
  static inline void SquareAddToExt(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method SquareN addr 0x101591c size 0x7c virtual false final false
  static inline void SquareN(::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t n, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Trace addr 0x1015f64 size 0x28 virtual false final false
  static inline uint32_t Trace(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method ImplCompactExt addr 0x1015f8c size 0xb4 virtual false final false
  static inline void ImplCompactExt(::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method ImplExpand addr 0x1016040 size 0x8c virtual false final false
  static inline void ImplExpand(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method ImplMultiply addr 0x10159e4 size 0x370 virtual false final false
  static inline void ImplMultiply(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method ImplMulwAcc addr 0x10160cc size 0x1f8 virtual false final false
  static inline void ImplMulwAcc(uint64_t x, uint64_t y, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method ImplSquare addr 0x10155c8 size 0xa8 virtual false final false
  static inline void ImplSquare(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193Field* New_ctor();

  /// @brief Method .ctor addr 0x10162c4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SecT193Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecT193Field(SecT193Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecT193Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecT193Field(SecT193Field const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecT193Field();

public:
  /// @brief Field M01 offset 0xffffffff size 0x8
  static constexpr uint64_t M01{ static_cast<uint64_t>(0x1u) };

  /// @brief Field M49 offset 0xffffffff size 0x8
  static constexpr uint64_t M49{ static_cast<uint64_t>(0x1ffffffffffffu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193Field, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT193Field");
