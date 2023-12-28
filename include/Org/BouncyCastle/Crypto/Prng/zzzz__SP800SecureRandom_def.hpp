#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SP800SecureRandom)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Prng {
class IDrbgProvider;
}
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class ISP80090Drbg;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class SP800SecureRandom;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom);
// Type: Org.BouncyCastle.Crypto.Prng::SP800SecureRandom
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1111))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1112))
// CS Name: ::Org.BouncyCastle.Crypto.Prng::SP800SecureRandom*
class CORDL_TYPE SP800SecureRandom : public ::Org::BouncyCastle::Security::SecureRandom {
public:
  // Declarations
  /// @brief Field mDrbgProvider, offset 0x28, size 0x8
  __declspec(property(get = __get_mDrbgProvider, put = __set_mDrbgProvider))::Org::BouncyCastle::Crypto::Prng::IDrbgProvider* mDrbgProvider;

  /// @brief Field mPredictionResistant, offset 0x30, size 0x1
  __declspec(property(get = __get_mPredictionResistant, put = __set_mPredictionResistant)) bool mPredictionResistant;

  /// @brief Field mRandomSource, offset 0x38, size 0x8
  __declspec(property(get = __get_mRandomSource, put = __set_mRandomSource))::Org::BouncyCastle::Security::SecureRandom* mRandomSource;

  /// @brief Field mEntropySource, offset 0x40, size 0x8
  __declspec(property(get = __get_mEntropySource, put = __set_mEntropySource))::Org::BouncyCastle::Crypto::IEntropySource* mEntropySource;

  /// @brief Field mDrbg, offset 0x48, size 0x8
  __declspec(property(get = __get_mDrbg, put = __set_mDrbg))::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* mDrbg;

  constexpr ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*& __get_mDrbgProvider();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*> const& __get_mDrbgProvider() const;

  constexpr void __set_mDrbgProvider(::Org::BouncyCastle::Crypto::Prng::IDrbgProvider* value);

  constexpr bool& __get_mPredictionResistant();

  constexpr bool const& __get_mPredictionResistant() const;

  constexpr void __set_mPredictionResistant(bool value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_mRandomSource();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_mRandomSource() const;

  constexpr void __set_mRandomSource(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr ::Org::BouncyCastle::Crypto::IEntropySource*& __get_mEntropySource();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IEntropySource*> const& __get_mEntropySource() const;

  constexpr void __set_mEntropySource(::Org::BouncyCastle::Crypto::IEntropySource* value);

  constexpr ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*& __get_mDrbg();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*> const& __get_mDrbg() const;

  constexpr void __set_mDrbg(::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* value);

  static inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* New_ctor(::Org::BouncyCastle::Security::SecureRandom* randomSource, ::Org::BouncyCastle::Crypto::IEntropySource* entropySource,
                                                                               ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider* drbgProvider, bool predictionResistant);

  /// @brief Method .ctor addr 0xf43c90 size 0x88 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* randomSource, ::Org::BouncyCastle::Crypto::IEntropySource* entropySource,
                    ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider* drbgProvider, bool predictionResistant);

  /// @brief Method SetSeed addr 0xf43d18 size 0xb4 virtual true final false
  inline void SetSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method SetSeed addr 0xf43dcc size 0xb4 virtual true final false
  inline void SetSeed(int64_t seed);

  /// @brief Method NextBytes addr 0xf43e80 size 0x2e0 virtual true final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method NextBytes addr 0xf44160 size 0x98 virtual true final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method GenerateSeed addr 0xf441f8 size 0x8 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSeed(int32_t numBytes);

  /// @brief Method Reseed addr 0xf44200 size 0x1d4 virtual true final false
  inline void Reseed(::ArrayW<uint8_t, ::Array<uint8_t>*> additionalInput);

  // Ctor Parameters [CppParam { name: "", ty: "SP800SecureRandom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SP800SecureRandom(SP800SecureRandom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SP800SecureRandom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SP800SecureRandom(SP800SecureRandom const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SP800SecureRandom();

public:
  /// @brief Field mDrbgProvider, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider* ___mDrbgProvider;

  /// @brief Field mPredictionResistant, offset: 0x30, size: 0x1, def value: None
  bool ___mPredictionResistant;

  /// @brief Field mRandomSource, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___mRandomSource;

  /// @brief Field mEntropySource, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IEntropySource* ___mEntropySource;

  /// @brief Field mDrbg, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* ___mDrbg;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom*, "Org.BouncyCastle.Crypto.Prng", "SP800SecureRandom");
