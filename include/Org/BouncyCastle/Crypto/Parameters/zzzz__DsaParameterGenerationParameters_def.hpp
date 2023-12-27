#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DsaParameterGenerationParameters)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameterGenerationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::DsaParameterGenerationParameters
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1028))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::DsaParameterGenerationParameters*
class CORDL_TYPE DsaParameterGenerationParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field l, offset 0x10, size 0x4
  __declspec(property(get = __get_l, put = __set_l)) int32_t l;

  /// @brief Field n, offset 0x14, size 0x4
  __declspec(property(get = __get_n, put = __set_n)) int32_t n;

  /// @brief Field certainty, offset 0x18, size 0x4
  __declspec(property(get = __get_certainty, put = __set_certainty)) int32_t certainty;

  /// @brief Field random, offset 0x20, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Field usageIndex, offset 0x28, size 0x4
  __declspec(property(get = __get_usageIndex, put = __set_usageIndex)) int32_t usageIndex;

  __declspec(property(get = get_L)) int32_t L;

  __declspec(property(get = get_N)) int32_t N;

  __declspec(property(get = get_UsageIndex)) int32_t UsageIndex;

  __declspec(property(get = get_Certainty)) int32_t Certainty;

  __declspec(property(get = get_Random))::Org::BouncyCastle::Security::SecureRandom* Random;

  constexpr int32_t& __get_l();

  constexpr int32_t const& __get_l() const;

  constexpr void __set_l(int32_t value);

  constexpr int32_t& __get_n();

  constexpr int32_t const& __get_n() const;

  constexpr void __set_n(int32_t value);

  constexpr int32_t& __get_certainty();

  constexpr int32_t const& __get_certainty() const;

  constexpr void __set_certainty(int32_t value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_random() const;

  constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr int32_t& __get_usageIndex();

  constexpr int32_t const& __get_usageIndex() const;

  constexpr void __set_usageIndex(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters* New_ctor(int32_t L, int32_t N, int32_t certainty, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method .ctor addr 0xf31a7c size 0x4c virtual false final false
  inline void _ctor(int32_t L, int32_t N, int32_t certainty, ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters* New_ctor(int32_t L, int32_t N, int32_t certainty, ::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                                    int32_t usageIndex);

  /// @brief Method .ctor addr 0xf31ac8 size 0x54 virtual false final false
  inline void _ctor(int32_t L, int32_t N, int32_t certainty, ::Org::BouncyCastle::Security::SecureRandom* random, int32_t usageIndex);

  /// @brief Method get_L addr 0xf31b1c size 0x8 virtual true final false
  inline int32_t get_L();

  /// @brief Method get_N addr 0xf31b24 size 0x8 virtual true final false
  inline int32_t get_N();

  /// @brief Method get_UsageIndex addr 0xf31b2c size 0x8 virtual true final false
  inline int32_t get_UsageIndex();

  /// @brief Method get_Certainty addr 0xf31b34 size 0x8 virtual true final false
  inline int32_t get_Certainty();

  /// @brief Method get_Random addr 0xf31b3c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Security::SecureRandom* get_Random();

  // Ctor Parameters [CppParam { name: "", ty: "DsaParameterGenerationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DsaParameterGenerationParameters(DsaParameterGenerationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DsaParameterGenerationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DsaParameterGenerationParameters(DsaParameterGenerationParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DsaParameterGenerationParameters();

public:
  /// @brief Field l, offset: 0x10, size: 0x4, def value: None
  int32_t ___l;

  /// @brief Field n, offset: 0x14, size: 0x4, def value: None
  int32_t ___n;

  /// @brief Field certainty, offset: 0x18, size: 0x4, def value: None
  int32_t ___certainty;

  /// @brief Field random, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  /// @brief Field usageIndex, offset: 0x28, size: 0x4, def value: None
  int32_t ___usageIndex;

  /// @brief Field DigitalSignatureUsage offset 0xffffffff size 0x4
  static constexpr int32_t DigitalSignatureUsage{ static_cast<int32_t>(0x1) };

  /// @brief Field KeyEstablishmentUsage offset 0xffffffff size 0x4
  static constexpr int32_t KeyEstablishmentUsage{ static_cast<int32_t>(0x2) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "DsaParameterGenerationParameters");
