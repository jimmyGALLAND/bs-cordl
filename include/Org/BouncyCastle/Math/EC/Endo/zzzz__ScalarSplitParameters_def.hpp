#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScalarSplitParameters)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class ScalarSplitParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters);
// Type: Org.BouncyCastle.Math.EC.Endo::ScalarSplitParameters
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1525))
// CS Name: ::Org.BouncyCastle.Math.EC.Endo::ScalarSplitParameters*
class CORDL_TYPE ScalarSplitParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_v1A, offset 0x10, size 0x8
  __declspec(property(get = __get_m_v1A, put = __set_m_v1A))::Org::BouncyCastle::Math::BigInteger* m_v1A;

  /// @brief Field m_v1B, offset 0x18, size 0x8
  __declspec(property(get = __get_m_v1B, put = __set_m_v1B))::Org::BouncyCastle::Math::BigInteger* m_v1B;

  /// @brief Field m_v2A, offset 0x20, size 0x8
  __declspec(property(get = __get_m_v2A, put = __set_m_v2A))::Org::BouncyCastle::Math::BigInteger* m_v2A;

  /// @brief Field m_v2B, offset 0x28, size 0x8
  __declspec(property(get = __get_m_v2B, put = __set_m_v2B))::Org::BouncyCastle::Math::BigInteger* m_v2B;

  /// @brief Field m_g1, offset 0x30, size 0x8
  __declspec(property(get = __get_m_g1, put = __set_m_g1))::Org::BouncyCastle::Math::BigInteger* m_g1;

  /// @brief Field m_g2, offset 0x38, size 0x8
  __declspec(property(get = __get_m_g2, put = __set_m_g2))::Org::BouncyCastle::Math::BigInteger* m_g2;

  /// @brief Field m_bits, offset 0x40, size 0x4
  __declspec(property(get = __get_m_bits, put = __set_m_bits)) int32_t m_bits;

  __declspec(property(get = get_V1A))::Org::BouncyCastle::Math::BigInteger* V1A;

  __declspec(property(get = get_V1B))::Org::BouncyCastle::Math::BigInteger* V1B;

  __declspec(property(get = get_V2A))::Org::BouncyCastle::Math::BigInteger* V2A;

  __declspec(property(get = get_V2B))::Org::BouncyCastle::Math::BigInteger* V2B;

  __declspec(property(get = get_G1))::Org::BouncyCastle::Math::BigInteger* G1;

  __declspec(property(get = get_G2))::Org::BouncyCastle::Math::BigInteger* G2;

  __declspec(property(get = get_Bits)) int32_t Bits;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_m_v1A();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_m_v1A() const;

  constexpr void __set_m_v1A(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_m_v1B();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_m_v1B() const;

  constexpr void __set_m_v1B(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_m_v2A();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_m_v2A() const;

  constexpr void __set_m_v2A(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_m_v2B();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_m_v2B() const;

  constexpr void __set_m_v2B(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_m_g1();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_m_g1() const;

  constexpr void __set_m_g1(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_m_g2();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_m_g2() const;

  constexpr void __set_m_g2(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr int32_t& __get_m_bits();

  constexpr int32_t const& __get_m_bits() const;

  constexpr void __set_m_bits(int32_t value);

  /// @brief Method CheckVector addr 0x1035ae8 size 0x88 virtual false final false
  static inline void CheckVector(::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> v, ::StringW name);

  static inline ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* New_ctor(::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> v1,
                                                                                     ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> v2,
                                                                                     ::Org::BouncyCastle::Math::BigInteger* g1, ::Org::BouncyCastle::Math::BigInteger* g2, int32_t bits);

  /// @brief Method .ctor addr 0x1035760 size 0xfc virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> v1,
                    ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> v2, ::Org::BouncyCastle::Math::BigInteger* g1,
                    ::Org::BouncyCastle::Math::BigInteger* g2, int32_t bits);

  /// @brief Method get_V1A addr 0x1035b70 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_V1A();

  /// @brief Method get_V1B addr 0x1035b78 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_V1B();

  /// @brief Method get_V2A addr 0x1035b80 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_V2A();

  /// @brief Method get_V2B addr 0x1035b88 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_V2B();

  /// @brief Method get_G1 addr 0x1035b90 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_G1();

  /// @brief Method get_G2 addr 0x1035b98 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_G2();

  /// @brief Method get_Bits addr 0x1035ba0 size 0x8 virtual true final false
  inline int32_t get_Bits();

  // Ctor Parameters [CppParam { name: "", ty: "ScalarSplitParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScalarSplitParameters(ScalarSplitParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScalarSplitParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScalarSplitParameters(ScalarSplitParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScalarSplitParameters();

public:
  /// @brief Field m_v1A, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_v1A;

  /// @brief Field m_v1B, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_v1B;

  /// @brief Field m_v2A, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_v2A;

  /// @brief Field m_v2B, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_v2B;

  /// @brief Field m_g1, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_g1;

  /// @brief Field m_g2, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_g2;

  /// @brief Field m_bits, offset: 0x40, size: 0x4, def value: None
  int32_t ___m_bits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*, "Org.BouncyCastle.Math.EC.Endo", "ScalarSplitParameters");
