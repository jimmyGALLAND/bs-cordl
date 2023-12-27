#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SM2P256V1Curve)
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC::Custom::GM {
class __SM2P256V1Curve__SM2P256V1LookupTable;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC::Custom::GM {
class SM2P256V1Point;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::GM {
class SM2P256V1Curve;
}
namespace Org::BouncyCastle::Math::EC::Custom::GM {
class __SM2P256V1Curve__SM2P256V1LookupTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::GM::__SM2P256V1Curve__SM2P256V1LookupTable);
// Type: ::SM2P256V1LookupTable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::GM {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1363))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1377))
// CS Name: ::SM2P256V1Curve::SM2P256V1LookupTable*
class CORDL_TYPE __SM2P256V1Curve__SM2P256V1LookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
  // Declarations
  /// @brief Field m_outer, offset 0x10, size 0x8
  __declspec(property(get = __get_m_outer, put = __set_m_outer))::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve* m_outer;

  /// @brief Field m_table, offset 0x18, size 0x8
  __declspec(property(get = __get_m_table, put = __set_m_table))::ArrayW<uint32_t, ::Array<uint32_t>*> m_table;

  /// @brief Field m_size, offset 0x20, size 0x4
  __declspec(property(get = __get_m_size, put = __set_m_size)) int32_t m_size;

  __declspec(property(get = get_Size)) int32_t Size;

  constexpr ::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve*& __get_m_outer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve*> const& __get_m_outer() const;

  constexpr void __set_m_outer(::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve* value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_m_table();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_m_table() const;

  constexpr void __set_m_table(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr int32_t& __get_m_size();

  constexpr int32_t const& __get_m_size() const;

  constexpr void __set_m_size(int32_t value);

  static inline ::Org::BouncyCastle::Math::EC::Custom::GM::__SM2P256V1Curve__SM2P256V1LookupTable* New_ctor(::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve* outer,
                                                                                                            ::ArrayW<uint32_t, ::Array<uint32_t>*> table, int32_t size);

  /// @brief Method .ctor addr 0xfd2b7c size 0x3c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve* outer, ::ArrayW<uint32_t, ::Array<uint32_t>*> table, int32_t size);

  /// @brief Method get_Size addr 0xfd2fa0 size 0x8 virtual true final false
  inline int32_t get_Size();

  /// @brief Method Lookup addr 0xfd2fa8 size 0x118 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int32_t index);

  /// @brief Method LookupVar addr 0xfd31a0 size 0xc4 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int32_t index);

  /// @brief Method CreatePoint addr 0xfd30c0 size 0xe0 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  // Ctor Parameters [CppParam { name: "", ty: "__SM2P256V1Curve__SM2P256V1LookupTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SM2P256V1Curve__SM2P256V1LookupTable(__SM2P256V1Curve__SM2P256V1LookupTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SM2P256V1Curve__SM2P256V1LookupTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SM2P256V1Curve__SM2P256V1LookupTable(__SM2P256V1Curve__SM2P256V1LookupTable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SM2P256V1Curve__SM2P256V1LookupTable();

public:
  /// @brief Field m_outer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve* ___m_outer;

  /// @brief Field m_table, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___m_table;

  /// @brief Field m_size, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::GM::__SM2P256V1Curve__SM2P256V1LookupTable, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::GM
// Type: Org.BouncyCastle.Math.EC.Custom.GM::SM2P256V1Curve
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::GM {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1364))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1378))
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.GM::SM2P256V1Curve*
class CORDL_TYPE SM2P256V1Curve : public ::Org::BouncyCastle::Math::EC::AbstractFpCurve {
public:
  // Declarations
  using SM2P256V1LookupTable = ::Org::BouncyCastle::Math::EC::Custom::GM::__SM2P256V1Curve__SM2P256V1LookupTable;

  /// @brief Field m_infinity, offset 0x50, size 0x8
  __declspec(property(get = __get_m_infinity, put = __set_m_infinity))::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Point* m_infinity;

  /// @brief Field q, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_q, put = setStaticF_q))::Org::BouncyCastle::Math::BigInteger* q;

  /// @brief Field SM2P256V1_AFFINE_ZS, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_SM2P256V1_AFFINE_ZS,
               put = setStaticF_SM2P256V1_AFFINE_ZS))::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> SM2P256V1_AFFINE_ZS;

  __declspec(property(get = get_Q))::Org::BouncyCastle::Math::BigInteger* Q;

  __declspec(property(get = get_Infinity))::Org::BouncyCastle::Math::EC::ECPoint* Infinity;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  constexpr ::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Point*& __get_m_infinity();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Point*> const& __get_m_infinity() const;

  constexpr void __set_m_infinity(::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Point* value);

  static inline void setStaticF_q(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_q();

  static inline void setStaticF_SM2P256V1_AFFINE_ZS(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> value);

  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> getStaticF_SM2P256V1_AFFINE_ZS();

  static inline ::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve* New_ctor();

  /// @brief Method .ctor addr 0xfd2370 size 0x218 virtual false final false
  inline void _ctor();

  /// @brief Method CloneCurve addr 0xfd2590 size 0x58 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();

  /// @brief Method SupportsCoordinateSystem addr 0xfd25e8 size 0xc virtual true final false
  inline bool SupportsCoordinateSystem(int32_t coord);

  /// @brief Method get_Q addr 0xfd25f4 size 0x58 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Q();

  /// @brief Method get_Infinity addr 0xfd264c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();

  /// @brief Method get_FieldSize addr 0xfd2654 size 0x64 virtual true final false
  inline int32_t get_FieldSize();

  /// @brief Method FromBigInteger addr 0xfd26b8 size 0x60 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method CreateRawPoint addr 0xfd2830 size 0x88 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method CreateRawPoint addr 0xfd2940 size 0x90 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                bool withCompression);

  /// @brief Method CreateCacheSafeLookupTable addr 0xfd29d8 size 0x1a4 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points,
                                                                                  int32_t off, int32_t len);

  /// @brief Method RandomFieldElement addr 0xfd2bb8 size 0xa4 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElement(::Org::BouncyCastle::Security::SecureRandom* r);

  /// @brief Method RandomFieldElementMult addr 0xfd2d5c size 0xa4 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r);

  // Ctor Parameters [CppParam { name: "", ty: "SM2P256V1Curve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SM2P256V1Curve(SM2P256V1Curve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SM2P256V1Curve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SM2P256V1Curve(SM2P256V1Curve const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SM2P256V1Curve();

public:
  /// @brief Field m_infinity, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Point* ___m_infinity;

  /// @brief Field SM2P256V1_DEFAULT_COORDS offset 0xffffffff size 0x4
  static constexpr int32_t SM2P256V1_DEFAULT_COORDS{ static_cast<int32_t>(0x2) };

  /// @brief Field SM2P256V1_FE_INTS offset 0xffffffff size 0x4
  static constexpr int32_t SM2P256V1_FE_INTS{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::GM
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve*, "Org.BouncyCastle.Math.EC.Custom.GM", "SM2P256V1Curve");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::GM::__SM2P256V1Curve__SM2P256V1LookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::GM::__SM2P256V1Curve__SM2P256V1LookupTable*, "Org.BouncyCastle.Math.EC.Custom.GM", "SM2P256V1Curve/SM2P256V1LookupTable");
