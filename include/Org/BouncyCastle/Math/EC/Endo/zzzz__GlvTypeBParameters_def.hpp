#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GlvTypeBParameters)
namespace Org::BouncyCastle::Math::EC::Endo {
class ScalarSplitParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvTypeBParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters);
// Type: Org.BouncyCastle.Math.EC.Endo::GlvTypeBParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1524))
// CS Name: ::Org.BouncyCastle.Math.EC.Endo::GlvTypeBParameters*
class CORDL_TYPE GlvTypeBParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_beta, offset 0x10, size 0x8
  __declspec(property(get = __get_m_beta, put = __set_m_beta))::Org::BouncyCastle::Math::BigInteger* m_beta;

  /// @brief Field m_lambda, offset 0x18, size 0x8
  __declspec(property(get = __get_m_lambda, put = __set_m_lambda))::Org::BouncyCastle::Math::BigInteger* m_lambda;

  /// @brief Field m_splitParams, offset 0x20, size 0x8
  __declspec(property(get = __get_m_splitParams, put = __set_m_splitParams))::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* m_splitParams;

  __declspec(property(get = get_Beta))::Org::BouncyCastle::Math::BigInteger* Beta;

  __declspec(property(get = get_Lambda))::Org::BouncyCastle::Math::BigInteger* Lambda;

  __declspec(property(get = get_SplitParams))::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* SplitParams;

  __declspec(property(get = get_V1))::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> V1;

  __declspec(property(get = get_V2))::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> V2;

  __declspec(property(get = get_G1))::Org::BouncyCastle::Math::BigInteger* G1;

  __declspec(property(get = get_G2))::Org::BouncyCastle::Math::BigInteger* G2;

  __declspec(property(get = get_Bits)) int32_t Bits;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_m_beta();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_m_beta() const;

  constexpr void __set_m_beta(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_m_lambda();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_m_lambda() const;

  constexpr void __set_m_lambda(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*& __get_m_splitParams();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*> const& __get_m_splitParams() const;

  constexpr void __set_m_splitParams(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* value);

  static inline ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* beta, ::Org::BouncyCastle::Math::BigInteger* lambda,
                                                                                  ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> v1,
                                                                                  ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> v2,
                                                                                  ::Org::BouncyCastle::Math::BigInteger* g1, ::Org::BouncyCastle::Math::BigInteger* g2, int32_t bits);

  /// @brief Method .ctor addr 0x10356a4 size 0xbc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* beta, ::Org::BouncyCastle::Math::BigInteger* lambda,
                    ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> v1,
                    ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> v2, ::Org::BouncyCastle::Math::BigInteger* g1,
                    ::Org::BouncyCastle::Math::BigInteger* g2, int32_t bits);

  static inline ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* beta, ::Org::BouncyCastle::Math::BigInteger* lambda,
                                                                                  ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* splitParams);

  /// @brief Method .ctor addr 0x103585c size 0x3c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* beta, ::Org::BouncyCastle::Math::BigInteger* lambda, ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* splitParams);

  /// @brief Method get_Beta addr 0x1035898 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Beta();

  /// @brief Method get_Lambda addr 0x10358a0 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Lambda();

  /// @brief Method get_SplitParams addr 0x10358a8 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* get_SplitParams();

  /// @brief Method get_V1 addr 0x10358b0 size 0xec virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> get_V1();

  /// @brief Method get_V2 addr 0x103599c size 0xec virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> get_V2();

  /// @brief Method get_G1 addr 0x1035a88 size 0x20 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_G1();

  /// @brief Method get_G2 addr 0x1035aa8 size 0x20 virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_G2();

  /// @brief Method get_Bits addr 0x1035ac8 size 0x20 virtual true final false
  inline int32_t get_Bits();

  // Ctor Parameters [CppParam { name: "", ty: "GlvTypeBParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlvTypeBParameters(GlvTypeBParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlvTypeBParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlvTypeBParameters(GlvTypeBParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlvTypeBParameters();

public:
  /// @brief Field m_beta, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_beta;

  /// @brief Field m_lambda, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___m_lambda;

  /// @brief Field m_splitParams, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* ___m_splitParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*, "Org.BouncyCastle.Math.EC.Endo", "GlvTypeBParameters");
