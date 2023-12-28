#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHParameters)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHValidationParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::DHParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::DHParameters
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1022))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::DHParameters*
class CORDL_TYPE DHParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field p, offset 0x10, size 0x8
  __declspec(property(get = __get_p, put = __set_p))::Org::BouncyCastle::Math::BigInteger* p;

  /// @brief Field g, offset 0x18, size 0x8
  __declspec(property(get = __get_g, put = __set_g))::Org::BouncyCastle::Math::BigInteger* g;

  /// @brief Field q, offset 0x20, size 0x8
  __declspec(property(get = __get_q, put = __set_q))::Org::BouncyCastle::Math::BigInteger* q;

  /// @brief Field j, offset 0x28, size 0x8
  __declspec(property(get = __get_j, put = __set_j))::Org::BouncyCastle::Math::BigInteger* j;

  /// @brief Field m, offset 0x30, size 0x4
  __declspec(property(get = __get_m, put = __set_m)) int32_t m;

  /// @brief Field l, offset 0x34, size 0x4
  __declspec(property(get = __get_l, put = __set_l)) int32_t l;

  /// @brief Field validation, offset 0x38, size 0x8
  __declspec(property(get = __get_validation, put = __set_validation))::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* validation;

  __declspec(property(get = get_P))::Org::BouncyCastle::Math::BigInteger* P;

  __declspec(property(get = get_G))::Org::BouncyCastle::Math::BigInteger* G;

  __declspec(property(get = get_Q))::Org::BouncyCastle::Math::BigInteger* Q;

  __declspec(property(get = get_J))::Org::BouncyCastle::Math::BigInteger* J;

  __declspec(property(get = get_M)) int32_t M;

  __declspec(property(get = get_L)) int32_t L;

  __declspec(property(get = get_ValidationParameters))::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* ValidationParameters;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_p() const;

  constexpr void __set_p(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_g();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_g() const;

  constexpr void __set_g(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_q();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_q() const;

  constexpr void __set_q(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_j();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_j() const;

  constexpr void __set_j(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr int32_t& __get_m();

  constexpr int32_t const& __get_m() const;

  constexpr void __set_m(int32_t value);

  constexpr int32_t& __get_l();

  constexpr int32_t const& __get_l() const;

  constexpr void __set_l(int32_t value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters*& __get_validation();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters*> const& __get_validation() const;

  constexpr void __set_validation(::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* value);

  /// @brief Method GetDefaultMParam addr 0xf306b0 size 0x70 virtual false final false
  static inline int32_t GetDefaultMParam(int32_t lParam);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g);

  /// @brief Method .ctor addr 0xf30720 size 0x74 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g,
                                                                                ::Org::BouncyCastle::Math::BigInteger* q);

  /// @brief Method .ctor addr 0xf307f8 size 0x78 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* q);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g,
                                                                                ::Org::BouncyCastle::Math::BigInteger* q, int32_t l);

  /// @brief Method .ctor addr 0xf30794 size 0x64 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* q, int32_t l);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g,
                                                                                ::Org::BouncyCastle::Math::BigInteger* q, int32_t m, int32_t l);

  /// @brief Method .ctor addr 0xf30c00 size 0x20 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* q, int32_t m, int32_t l);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g,
                                                                                ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* j,
                                                                                ::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* validation);

  /// @brief Method .ctor addr 0xf30c20 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* j,
                    ::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* validation);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g,
                                                                                ::Org::BouncyCastle::Math::BigInteger* q, int32_t m, int32_t l, ::Org::BouncyCastle::Math::BigInteger* j,
                                                                                ::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* validation);

  /// @brief Method .ctor addr 0xf30870 size 0x390 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* q, int32_t m, int32_t l,
                    ::Org::BouncyCastle::Math::BigInteger* j, ::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* validation);

  /// @brief Method get_P addr 0xf30c48 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_P();

  /// @brief Method get_G addr 0xf30c50 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_G();

  /// @brief Method get_Q addr 0xf30c58 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Q();

  /// @brief Method get_J addr 0xf30c60 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_J();

  /// @brief Method get_M addr 0xf30c68 size 0x8 virtual false final false
  inline int32_t get_M();

  /// @brief Method get_L addr 0xf30c70 size 0x8 virtual false final false
  inline int32_t get_L();

  /// @brief Method get_ValidationParameters addr 0xf30c78 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* get_ValidationParameters();

  /// @brief Method Equals addr 0xf30c80 size 0xa4 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0xf30d24 size 0x78 virtual true final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::DHParameters* other);

  /// @brief Method GetHashCode addr 0xf30d9c size 0x70 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "DHParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHParameters(DHParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHParameters(DHParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHParameters();

public:
  /// @brief Field p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___p;

  /// @brief Field g, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___g;

  /// @brief Field q, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___q;

  /// @brief Field j, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___j;

  /// @brief Field m, offset: 0x30, size: 0x4, def value: None
  int32_t ___m;

  /// @brief Field l, offset: 0x34, size: 0x4, def value: None
  int32_t ___l;

  /// @brief Field validation, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::DHValidationParameters* ___validation;

  /// @brief Field DefaultMinimumLength offset 0xffffffff size 0x4
  static constexpr int32_t DefaultMinimumLength{ static_cast<int32_t>(0xa0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::DHParameters, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DHParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DHParameters*, "Org.BouncyCastle.Crypto.Parameters", "DHParameters");
