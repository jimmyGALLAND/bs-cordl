#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X25519Field)
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
class X25519Field;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Rfc7748::X25519Field);
// Type: Org.BouncyCastle.Math.EC.Rfc7748::X25519Field
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1553))
// CS Name: ::Org.BouncyCastle.Math.EC.Rfc7748::X25519Field*
class CORDL_TYPE X25519Field : public ::System::Object {
public:
  // Declarations
  /// @brief Field RootNegOne, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RootNegOne, put = setStaticF_RootNegOne))::ArrayW<int32_t, ::Array<int32_t>*> RootNegOne;

  static inline void setStaticF_RootNegOne(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_RootNegOne();

  static inline ::Org::BouncyCastle::Math::EC::Rfc7748::X25519Field* New_ctor();

  /// @brief Method .ctor addr 0x103d00c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Add addr 0x103c2a0 size 0x70 virtual false final false
  static inline void Add(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method AddOne addr 0x103d014 size 0x2c virtual false final false
  static inline void AddOne(::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method AddOne addr 0x103d040 size 0x38 virtual false final false
  static inline void AddOne(::ArrayW<int32_t, ::Array<int32_t>*> z, int32_t zOff);

  /// @brief Method Apm addr 0x103b77c size 0x8c virtual false final false
  static inline void Apm(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y, ::ArrayW<int32_t, ::Array<int32_t>*> zp, ::ArrayW<int32_t, ::Array<int32_t>*> zm);

  /// @brief Method Carry addr 0x103d078 size 0x10c virtual false final false
  static inline void Carry(::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method CMov addr 0x103d184 size 0x80 virtual false final false
  static inline void CMov(int32_t cond, ::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t xOff, ::ArrayW<int32_t, ::Array<int32_t>*> z, int32_t zOff);

  /// @brief Method CNegate addr 0x103d204 size 0x4c virtual false final false
  static inline void CNegate(int32_t negate, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Copy addr 0x103cc0c size 0x70 virtual false final false
  static inline void Copy(::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t xOff, ::ArrayW<int32_t, ::Array<int32_t>*> z, int32_t zOff);

  /// @brief Method Create addr 0x103b738 size 0x44 virtual false final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Create();

  /// @brief Method CreateTable addr 0x103d250 size 0x4c virtual false final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> CreateTable(int32_t n);

  /// @brief Method CSwap addr 0x103cc7c size 0x70 virtual false final false
  static inline void CSwap(int32_t swap, ::ArrayW<int32_t, ::Array<int32_t>*> a, ::ArrayW<int32_t, ::Array<int32_t>*> b);

  /// @brief Method Decode addr 0x103cb60 size 0xac virtual false final false
  static inline void Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> x, int32_t xOff, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Decode128 addr 0x103d29c size 0x138 virtual false final false
  static inline void Decode128(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<int32_t, ::Array<int32_t>*> z, int32_t zOff);

  /// @brief Method Decode32 addr 0x103d3d4 size 0x68 virtual false final false
  static inline uint32_t Decode32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Encode addr 0x103ce08 size 0x84 virtual false final false
  static inline void Encode(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> z, int32_t zOff);

  /// @brief Method Encode128 addr 0x103d43c size 0x128 virtual false final false
  static inline void Encode128(::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t xOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Encode32 addr 0x103d564 size 0x80 virtual false final false
  static inline void Encode32(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Inv addr 0x103ccec size 0x98 virtual false final false
  static inline void Inv(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method IsZero addr 0x103d850 size 0x54 virtual false final false
  static inline int32_t IsZero(::ArrayW<int32_t, ::Array<int32_t>*> x);

  /// @brief Method IsZeroVar addr 0x103d8a4 size 0x60 virtual false final false
  static inline bool IsZeroVar(::ArrayW<int32_t, ::Array<int32_t>*> x);

  /// @brief Method Mul addr 0x103c140 size 0x160 virtual false final false
  static inline void Mul(::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t y, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Mul addr 0x103bb88 size 0x548 virtual false final false
  static inline void Mul(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Negate addr 0x103d904 size 0x58 virtual false final false
  static inline void Negate(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Normalize addr 0x103cd84 size 0x84 virtual false final false
  static inline void Normalize(::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method One addr 0x103da24 size 0x54 virtual false final false
  static inline void One(::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method PowPm5d8 addr 0x103d5e4 size 0x1cc virtual false final false
  static inline void PowPm5d8(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> rx2, ::ArrayW<int32_t, ::Array<int32_t>*> rz);

  /// @brief Method Reduce addr 0x103d95c size 0xc8 virtual false final false
  static inline void Reduce(::ArrayW<int32_t, ::Array<int32_t>*> z, int32_t x);

  /// @brief Method Sqr addr 0x103b808 size 0x380 virtual false final false
  static inline void Sqr(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Sqr addr 0x103d7b0 size 0xa0 virtual false final false
  static inline void Sqr(::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t n, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method SqrtRatioVar addr 0x103da78 size 0x1cc virtual false final false
  static inline bool SqrtRatioVar(::ArrayW<int32_t, ::Array<int32_t>*> u, ::ArrayW<int32_t, ::Array<int32_t>*> v, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Sub addr 0x103c0d0 size 0x70 virtual false final false
  static inline void Sub(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y, ::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method SubOne addr 0x103dc44 size 0x2c virtual false final false
  static inline void SubOne(::ArrayW<int32_t, ::Array<int32_t>*> z);

  /// @brief Method Zero addr 0x103dc70 size 0x3c virtual false final false
  static inline void Zero(::ArrayW<int32_t, ::Array<int32_t>*> z);

  // Ctor Parameters [CppParam { name: "", ty: "X25519Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X25519Field(X25519Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X25519Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X25519Field(X25519Field const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X25519Field();

public:
  /// @brief Field Size offset 0xffffffff size 0x4
  static constexpr int32_t Size{ static_cast<int32_t>(0xa) };

  /// @brief Field M24 offset 0xffffffff size 0x4
  static constexpr int32_t M24{ static_cast<int32_t>(0xffffff) };

  /// @brief Field M25 offset 0xffffffff size 0x4
  static constexpr int32_t M25{ static_cast<int32_t>(0x1ffffff) };

  /// @brief Field M26 offset 0xffffffff size 0x4
  static constexpr int32_t M26{ static_cast<int32_t>(0x3ffffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Rfc7748::X25519Field, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Rfc7748
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc7748::X25519Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc7748::X25519Field*, "Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field");
