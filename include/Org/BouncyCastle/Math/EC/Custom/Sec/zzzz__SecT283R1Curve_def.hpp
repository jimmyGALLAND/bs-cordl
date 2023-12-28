#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecT283R1Curve)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class __SecT283R1Curve__SecT283R1LookupTable;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT283R1Point;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT283R1Curve;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class __SecT283R1Curve__SecT283R1LookupTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT283R1Curve__SecT283R1LookupTable);
// Type: ::SecT283R1LookupTable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1363))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1496))
// CS Name: ::SecT283R1Curve::SecT283R1LookupTable*
class CORDL_TYPE __SecT283R1Curve__SecT283R1LookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
  // Declarations
  /// @brief Field m_outer, offset 0x10, size 0x8
  __declspec(property(get = __get_m_outer, put = __set_m_outer))::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve* m_outer;

  /// @brief Field m_table, offset 0x18, size 0x8
  __declspec(property(get = __get_m_table, put = __set_m_table))::ArrayW<uint64_t, ::Array<uint64_t>*> m_table;

  /// @brief Field m_size, offset 0x20, size 0x4
  __declspec(property(get = __get_m_size, put = __set_m_size)) int32_t m_size;

  __declspec(property(get = get_Size)) int32_t Size;

  constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve*& __get_m_outer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve*> const& __get_m_outer() const;

  constexpr void __set_m_outer(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve* value);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __get_m_table();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __get_m_table() const;

  constexpr void __set_m_table(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr int32_t& __get_m_size();

  constexpr int32_t const& __get_m_size() const;

  constexpr void __set_m_size(int32_t value);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT283R1Curve__SecT283R1LookupTable* New_ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve* outer,
                                                                                                             ::ArrayW<uint64_t, ::Array<uint64_t>*> table, int32_t size);

  /// @brief Method .ctor addr 0x10284a4 size 0x3c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve* outer, ::ArrayW<uint64_t, ::Array<uint64_t>*> table, int32_t size);

  /// @brief Method get_Size addr 0x10285ec size 0x8 virtual true final false
  inline int32_t get_Size();

  /// @brief Method Lookup addr 0x10285f4 size 0x108 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int32_t index);

  /// @brief Method LookupVar addr 0x10287dc size 0xcc virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int32_t index);

  /// @brief Method CreatePoint addr 0x10286fc size 0xe0 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y);

  // Ctor Parameters [CppParam { name: "", ty: "__SecT283R1Curve__SecT283R1LookupTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SecT283R1Curve__SecT283R1LookupTable(__SecT283R1Curve__SecT283R1LookupTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SecT283R1Curve__SecT283R1LookupTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SecT283R1Curve__SecT283R1LookupTable(__SecT283R1Curve__SecT283R1LookupTable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SecT283R1Curve__SecT283R1LookupTable();

public:
  /// @brief Field m_outer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve* ___m_outer;

  /// @brief Field m_table, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___m_table;

  /// @brief Field m_size, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT283R1Curve__SecT283R1LookupTable, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT283R1Curve
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1443))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1497))
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecT283R1Curve*
class CORDL_TYPE SecT283R1Curve : public ::Org::BouncyCastle::Math::EC::AbstractF2mCurve {
public:
  // Declarations
  using SecT283R1LookupTable = ::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT283R1Curve__SecT283R1LookupTable;

  /// @brief Field m_infinity, offset 0x58, size 0x8
  __declspec(property(get = __get_m_infinity, put = __set_m_infinity))::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point* m_infinity;

  /// @brief Field SECT283R1_AFFINE_ZS, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_SECT283R1_AFFINE_ZS,
               put = setStaticF_SECT283R1_AFFINE_ZS))::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> SECT283R1_AFFINE_ZS;

  __declspec(property(get = get_Infinity))::Org::BouncyCastle::Math::EC::ECPoint* Infinity;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  __declspec(property(get = get_IsKoblitz)) bool IsKoblitz;

  __declspec(property(get = get_M)) int32_t M;

  __declspec(property(get = get_IsTrinomial)) bool IsTrinomial;

  __declspec(property(get = get_K1)) int32_t K1;

  __declspec(property(get = get_K2)) int32_t K2;

  __declspec(property(get = get_K3)) int32_t K3;

  constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point*& __get_m_infinity();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point*> const& __get_m_infinity() const;

  constexpr void __set_m_infinity(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point* value);

  static inline void setStaticF_SECT283R1_AFFINE_ZS(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> value);

  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> getStaticF_SECT283R1_AFFINE_ZS();

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve* New_ctor();

  /// @brief Method .ctor addr 0x1027e7c size 0x1c0 virtual false final false
  inline void _ctor();

  /// @brief Method CloneCurve addr 0x1028044 size 0x58 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();

  /// @brief Method SupportsCoordinateSystem addr 0x102809c size 0xc virtual true final false
  inline bool SupportsCoordinateSystem(int32_t coord);

  /// @brief Method get_Infinity addr 0x10280a8 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();

  /// @brief Method get_FieldSize addr 0x10280b0 size 0x8 virtual true final false
  inline int32_t get_FieldSize();

  /// @brief Method FromBigInteger addr 0x10280b8 size 0x60 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method CreateRawPoint addr 0x1028118 size 0x88 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method CreateRawPoint addr 0x102822c size 0x94 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                bool withCompression);

  /// @brief Method get_IsKoblitz addr 0x10282cc size 0x8 virtual true final false
  inline bool get_IsKoblitz();

  /// @brief Method get_M addr 0x10282d4 size 0x8 virtual true final false
  inline int32_t get_M();

  /// @brief Method get_IsTrinomial addr 0x10282dc size 0x8 virtual true final false
  inline bool get_IsTrinomial();

  /// @brief Method get_K1 addr 0x10282e4 size 0x8 virtual true final false
  inline int32_t get_K1();

  /// @brief Method get_K2 addr 0x10282ec size 0x8 virtual true final false
  inline int32_t get_K2();

  /// @brief Method get_K3 addr 0x10282f4 size 0x8 virtual true final false
  inline int32_t get_K3();

  /// @brief Method CreateCacheSafeLookupTable addr 0x10282fc size 0x1a8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*, ::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> points,
                                                                                  int32_t off, int32_t len);

  // Ctor Parameters [CppParam { name: "", ty: "SecT283R1Curve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecT283R1Curve(SecT283R1Curve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecT283R1Curve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecT283R1Curve(SecT283R1Curve const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecT283R1Curve();

public:
  /// @brief Field m_infinity, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Point* ___m_infinity;

  /// @brief Field SECT283R1_DEFAULT_COORDS offset 0xffffffff size 0x4
  static constexpr int32_t SECT283R1_DEFAULT_COORDS{ static_cast<int32_t>(0x6) };

  /// @brief Field SECT283R1_FE_LONGS offset 0xffffffff size 0x4
  static constexpr int32_t SECT283R1_FE_LONGS{ static_cast<int32_t>(0x5) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT283R1Curve*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT283R1Curve");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT283R1Curve__SecT283R1LookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecT283R1Curve__SecT283R1LookupTable*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT283R1Curve/SecT283R1LookupTable");
