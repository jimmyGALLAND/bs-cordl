#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecT239Field)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT239Field;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239Field);
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT239Field
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1486))
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecT239Field*
class CORDL_TYPE SecT239Field : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add addr 0x1020110 size 0xd8 virtual false final false
  static inline void Add(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method AddExt addr 0x10201e8 size 0x198 virtual false final false
  static inline void AddExt(::ArrayW<uint64_t, ::Array<uint64_t>*> xx, ::ArrayW<uint64_t, ::Array<uint64_t>*> yy, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method AddOne addr 0x1020380 size 0x8c virtual false final false
  static inline void AddOne(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method AddTo addr 0x102040c size 0xa8 virtual false final false
  static inline void AddTo(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method FromBigInteger addr 0x10204b4 size 0x10 virtual false final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method HalfTrace addr 0x10204c4 size 0x8c virtual false final false
  static inline void HalfTrace(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Invert addr 0x10206e0 size 0x1f4 virtual false final false
  static inline void Invert(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Multiply addr 0x1020910 size 0x4c virtual false final false
  static inline void Multiply(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method MultiplyAddToExt addr 0x1020d48 size 0x50 virtual false final false
  static inline void MultiplyAddToExt(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method Reduce addr 0x10205ec size 0xf4 virtual false final false
  static inline void Reduce(::ArrayW<uint64_t, ::Array<uint64_t>*> xx, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Reduce17 addr 0x1020d98 size 0x80 virtual false final false
  static inline void Reduce17(::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method Sqrt addr 0x1020e18 size 0x26c virtual false final false
  static inline void Sqrt(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Square addr 0x10208d4 size 0x3c virtual false final false
  static inline void Square(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method SquareAddToExt addr 0x1021084 size 0x40 virtual false final false
  static inline void SquareAddToExt(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method SquareN addr 0x102095c size 0x7c virtual false final false
  static inline void SquareN(::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t n, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Trace addr 0x10210c4 size 0x4c virtual false final false
  static inline uint32_t Trace(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method ImplCompactExt addr 0x1021110 size 0xb4 virtual false final false
  static inline void ImplCompactExt(::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method ImplExpand addr 0x10211c4 size 0x8c virtual false final false
  static inline void ImplExpand(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method ImplMultiply addr 0x10209d8 size 0x370 virtual false final false
  static inline void ImplMultiply(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method ImplMulwAcc addr 0x1021250 size 0x1d0 virtual false final false
  static inline void ImplMulwAcc(uint64_t x, uint64_t y, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method ImplSquare addr 0x1020550 size 0x9c virtual false final false
  static inline void ImplSquare(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239Field* New_ctor();

  /// @brief Method .ctor addr 0x1021420 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SecT239Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecT239Field(SecT239Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecT239Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecT239Field(SecT239Field const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecT239Field();

public:
  /// @brief Field M47 offset 0xffffffff size 0x8
  static constexpr uint64_t M47{ static_cast<uint64_t>(0x7fffffffffffu) };

  /// @brief Field M60 offset 0xffffffff size 0x8
  static constexpr uint64_t M60{ static_cast<uint64_t>(0xfffffffffffffffu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239Field, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT239Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT239Field");
