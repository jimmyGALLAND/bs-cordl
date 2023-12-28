#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FpCurve)
namespace Org::BouncyCastle::Math::EC {
class FpPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class FpCurve;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::FpCurve);
// Type: Org.BouncyCastle.Math.EC::FpCurve
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1364))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1566))
// CS Name: ::Org.BouncyCastle.Math.EC::FpCurve*
class CORDL_TYPE FpCurve : public ::Org::BouncyCastle::Math::EC::AbstractFpCurve {
public:
  // Declarations
  /// @brief Field m_q, offset 0x50, size 0x8
  __declspec(property(get = __get_m_q, put = __set_m_q))::Org::BouncyCastle::Math::BigInteger* m_q;

  /// @brief Field m_r, offset 0x58, size 0x8
  __declspec(property(get = __get_m_r, put = __set_m_r))::Org::BouncyCastle::Math::BigInteger* m_r;

  /// @brief Field m_infinity, offset 0x60, size 0x8
  __declspec(property(get = __get_m_infinity, put = __set_m_infinity))::Org::BouncyCastle::Math::EC::FpPoint* m_infinity;

  __declspec(property(get = get_Q))::Org::BouncyCastle::Math::BigInteger* Q;

  __declspec(property(get = get_Infinity))::Org::BouncyCastle::Math::EC::ECPoint* Infinity;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_m_q();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_m_q() const;

  constexpr void __set_m_q(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_m_r();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_m_r() const;

  constexpr void __set_m_r(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::EC::FpPoint*& __get_m_infinity();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::FpPoint*> const& __get_m_infinity() const;

  constexpr void __set_m_infinity(::Org::BouncyCastle::Math::EC::FpPoint* value);

  static inline ::Org::BouncyCastle::Math::EC::FpCurve* New_ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b);

  /// @brief Method .ctor addr 0x104cd34 size 0xc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b);

  static inline ::Org::BouncyCastle::Math::EC::FpCurve* New_ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b,
                                                                 ::Org::BouncyCastle::Math::BigInteger* order, ::Org::BouncyCastle::Math::BigInteger* cofactor);

  /// @brief Method .ctor addr 0x104cd40 size 0xf8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b, ::Org::BouncyCastle::Math::BigInteger* order,
                    ::Org::BouncyCastle::Math::BigInteger* cofactor);

  static inline ::Org::BouncyCastle::Math::EC::FpCurve* New_ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::EC::ECFieldElement* a,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method .ctor addr 0x104cfe8 size 0xc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::EC::ECFieldElement* a,
                    ::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  static inline ::Org::BouncyCastle::Math::EC::FpCurve* New_ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::EC::ECFieldElement* a,
                                                                 ::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::BigInteger* order,
                                                                 ::Org::BouncyCastle::Math::BigInteger* cofactor);

  /// @brief Method .ctor addr 0x104cff4 size 0xc4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::EC::ECFieldElement* a,
                    ::Org::BouncyCastle::Math::EC::ECFieldElement* b, ::Org::BouncyCastle::Math::BigInteger* order, ::Org::BouncyCastle::Math::BigInteger* cofactor);

  /// @brief Method CloneCurve addr 0x104d0b8 size 0x90 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();

  /// @brief Method SupportsCoordinateSystem addr 0x104d148 size 0x20 virtual true final false
  inline bool SupportsCoordinateSystem(int32_t coord);

  /// @brief Method get_Q addr 0x104d168 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Q();

  /// @brief Method get_Infinity addr 0x104d170 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();

  /// @brief Method get_FieldSize addr 0x104d178 size 0x1c virtual true final false
  inline int32_t get_FieldSize();

  /// @brief Method FromBigInteger addr 0x104d194 size 0x78 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method CreateRawPoint addr 0x104d2c8 size 0x88 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);

  /// @brief Method CreateRawPoint addr 0x104d350 size 0x94 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement* x, ::Org::BouncyCastle::Math::EC::ECFieldElement* y,
                                                                ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> zs,
                                                                bool withCompression);

  /// @brief Method ImportPoint addr 0x104d3f0 size 0x224 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* ImportPoint(::Org::BouncyCastle::Math::EC::ECPoint* p);

  // Ctor Parameters [CppParam { name: "", ty: "FpCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FpCurve(FpCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FpCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FpCurve(FpCurve const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FpCurve();

public:
  /// @brief Field m_q, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_q;

  /// @brief Field m_r, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_r;

  /// @brief Field m_infinity, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::FpPoint* ___m_infinity;

  /// @brief Field FP_DEFAULT_COORDS offset 0xffffffff size 0x4
  static constexpr int32_t FP_DEFAULT_COORDS{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::FpCurve, 0x68>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::FpCurve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::FpCurve*, "Org.BouncyCastle.Math.EC", "FpCurve");
