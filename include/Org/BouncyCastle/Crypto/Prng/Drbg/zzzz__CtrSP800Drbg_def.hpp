#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CtrSP800Drbg)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class ISP80090Drbg;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class CtrSP800Drbg;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg);
// Type: Org.BouncyCastle.Crypto.Prng.Drbg::CtrSP800Drbg
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1095))
// CS Name: ::Org.BouncyCastle.Crypto.Prng.Drbg::CtrSP800Drbg*
class CORDL_TYPE CtrSP800Drbg : public ::System::Object {
public:
  // Declarations
  /// @brief Field mEntropySource, offset 0x10, size 0x8
  __declspec(property(get = __get_mEntropySource, put = __set_mEntropySource))::Org::BouncyCastle::Crypto::IEntropySource* mEntropySource;

  /// @brief Field mEngine, offset 0x18, size 0x8
  __declspec(property(get = __get_mEngine, put = __set_mEngine))::Org::BouncyCastle::Crypto::IBlockCipher* mEngine;

  /// @brief Field mKeySizeInBits, offset 0x20, size 0x4
  __declspec(property(get = __get_mKeySizeInBits, put = __set_mKeySizeInBits)) int32_t mKeySizeInBits;

  /// @brief Field mSeedLength, offset 0x24, size 0x4
  __declspec(property(get = __get_mSeedLength, put = __set_mSeedLength)) int32_t mSeedLength;

  /// @brief Field mSecurityStrength, offset 0x28, size 0x4
  __declspec(property(get = __get_mSecurityStrength, put = __set_mSecurityStrength)) int32_t mSecurityStrength;

  /// @brief Field mKey, offset 0x30, size 0x8
  __declspec(property(get = __get_mKey, put = __set_mKey))::ArrayW<uint8_t, ::Array<uint8_t>*> mKey;

  /// @brief Field mV, offset 0x38, size 0x8
  __declspec(property(get = __get_mV, put = __set_mV))::ArrayW<uint8_t, ::Array<uint8_t>*> mV;

  /// @brief Field mReseedCounter, offset 0x40, size 0x8
  __declspec(property(get = __get_mReseedCounter, put = __set_mReseedCounter)) int64_t mReseedCounter;

  /// @brief Field mIsTdea, offset 0x48, size 0x1
  __declspec(property(get = __get_mIsTdea, put = __set_mIsTdea)) bool mIsTdea;

  /// @brief Field TDEA_RESEED_MAX, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TDEA_RESEED_MAX, put = setStaticF_TDEA_RESEED_MAX)) int64_t TDEA_RESEED_MAX;

  /// @brief Field AES_RESEED_MAX, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AES_RESEED_MAX, put = setStaticF_AES_RESEED_MAX)) int64_t AES_RESEED_MAX;

  /// @brief Field TDEA_MAX_BITS_REQUEST, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_TDEA_MAX_BITS_REQUEST, put = setStaticF_TDEA_MAX_BITS_REQUEST)) int32_t TDEA_MAX_BITS_REQUEST;

  /// @brief Field AES_MAX_BITS_REQUEST, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_AES_MAX_BITS_REQUEST, put = setStaticF_AES_MAX_BITS_REQUEST)) int32_t AES_MAX_BITS_REQUEST;

  /// @brief Field K_BITS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_K_BITS, put = setStaticF_K_BITS))::ArrayW<uint8_t, ::Array<uint8_t>*> K_BITS;

  __declspec(property(get = get_BlockSize)) int32_t BlockSize;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IEntropySource*& __get_mEntropySource();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IEntropySource*> const& __get_mEntropySource() const;

  constexpr void __set_mEntropySource(::Org::BouncyCastle::Crypto::IEntropySource* value);

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __get_mEngine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __get_mEngine() const;

  constexpr void __set_mEngine(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr int32_t& __get_mKeySizeInBits();

  constexpr int32_t const& __get_mKeySizeInBits() const;

  constexpr void __set_mKeySizeInBits(int32_t value);

  constexpr int32_t& __get_mSeedLength();

  constexpr int32_t const& __get_mSeedLength() const;

  constexpr void __set_mSeedLength(int32_t value);

  constexpr int32_t& __get_mSecurityStrength();

  constexpr int32_t const& __get_mSecurityStrength() const;

  constexpr void __set_mSecurityStrength(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mKey() const;

  constexpr void __set_mKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mV() const;

  constexpr void __set_mV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int64_t& __get_mReseedCounter();

  constexpr int64_t const& __get_mReseedCounter() const;

  constexpr void __set_mReseedCounter(int64_t value);

  constexpr bool& __get_mIsTdea();

  constexpr bool const& __get_mIsTdea() const;

  constexpr void __set_mIsTdea(bool value);

  static inline void setStaticF_TDEA_RESEED_MAX(int64_t value);

  static inline int64_t getStaticF_TDEA_RESEED_MAX();

  static inline void setStaticF_AES_RESEED_MAX(int64_t value);

  static inline int64_t getStaticF_AES_RESEED_MAX();

  static inline void setStaticF_TDEA_MAX_BITS_REQUEST(int32_t value);

  static inline int32_t getStaticF_TDEA_MAX_BITS_REQUEST();

  static inline void setStaticF_AES_MAX_BITS_REQUEST(int32_t value);

  static inline int32_t getStaticF_AES_MAX_BITS_REQUEST();

  static inline void setStaticF_K_BITS(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_K_BITS();

  static inline ::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine, int32_t keySizeInBits, int32_t securityStrength,
                                                                                ::Org::BouncyCastle::Crypto::IEntropySource* entropySource, ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString,
                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method .ctor addr 0xf3c968 size 0x254 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine, int32_t keySizeInBits, int32_t securityStrength, ::Org::BouncyCastle::Crypto::IEntropySource* entropySource,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method CTR_DRBG_Instantiate_algorithm addr 0xf3cf10 size 0x21c virtual false final false
  inline void CTR_DRBG_Instantiate_algorithm(::ArrayW<uint8_t, ::Array<uint8_t>*> entropy, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, ::ArrayW<uint8_t, ::Array<uint8_t>*> personalisationString);

  /// @brief Method CTR_DRBG_Update addr 0xf3d604 size 0x348 virtual false final false
  inline void CTR_DRBG_Update(::ArrayW<uint8_t, ::Array<uint8_t>*> seed, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> v);

  /// @brief Method CTR_DRBG_Reseed_algorithm addr 0xf3daec size 0xa4 virtual false final false
  inline void CTR_DRBG_Reseed_algorithm(::ArrayW<uint8_t, ::Array<uint8_t>*> additionalInput);

  /// @brief Method XOR addr 0xf3da58 size 0x94 virtual false final false
  inline void XOR(::ArrayW<uint8_t, ::Array<uint8_t>*> output, ::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t bOff);

  /// @brief Method AddOneTo addr 0xf3d9f0 size 0x68 virtual false final false
  inline void AddOneTo(::ArrayW<uint8_t, ::Array<uint8_t>*> longer);

  /// @brief Method GetEntropy addr 0xf3cdf8 size 0x118 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEntropy();

  /// @brief Method Block_Cipher_df addr 0xf3d12c size 0x4d8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Block_Cipher_df(::ArrayW<uint8_t, ::Array<uint8_t>*> inputString, int32_t bitLength);

  /// @brief Method BCC addr 0xf3dc10 size 0x30c virtual false final false
  inline void BCC(::ArrayW<uint8_t, ::Array<uint8_t>*> bccOut, ::ArrayW<uint8_t, ::Array<uint8_t>*> k, ::ArrayW<uint8_t, ::Array<uint8_t>*> iV, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method copyIntToByteArray addr 0xf3db90 size 0x80 virtual false final false
  inline void copyIntToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t value, int32_t offSet);

  /// @brief Method get_BlockSize addr 0xf3df1c size 0x20 virtual true final true
  inline int32_t get_BlockSize();

  /// @brief Method Generate addr 0xf3df3c size 0x4a4 virtual true final true
  inline int32_t Generate(::ArrayW<uint8_t, ::Array<uint8_t>*> output, ::ArrayW<uint8_t, ::Array<uint8_t>*> additionalInput, bool predictionResistant);

  /// @brief Method Reseed addr 0xf3e3f4 size 0x4 virtual true final true
  inline void Reseed(::ArrayW<uint8_t, ::Array<uint8_t>*> additionalInput);

  /// @brief Method IsTdea addr 0xf3cca8 size 0x150 virtual false final false
  inline bool IsTdea(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method GetMaxSecurityStrength addr 0xf3cbbc size 0xec virtual false final false
  inline int32_t GetMaxSecurityStrength(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t keySizeInBits);

  /// @brief Method ExpandKey addr 0xf3d94c size 0xa4 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExpandKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method PadKey addr 0xf3e3f8 size 0x290 virtual false final false
  inline void PadKey(::ArrayW<uint8_t, ::Array<uint8_t>*> keyMaster, int32_t keyOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> tmp, int32_t tmpOff);

  // Ctor Parameters [CppParam { name: "", ty: "CtrSP800Drbg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CtrSP800Drbg(CtrSP800Drbg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CtrSP800Drbg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CtrSP800Drbg(CtrSP800Drbg const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CtrSP800Drbg();

public:
  /// @brief Field mEntropySource, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IEntropySource* ___mEntropySource;

  /// @brief Field mEngine, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___mEngine;

  /// @brief Field mKeySizeInBits, offset: 0x20, size: 0x4, def value: None
  int32_t ___mKeySizeInBits;

  /// @brief Field mSeedLength, offset: 0x24, size: 0x4, def value: None
  int32_t ___mSeedLength;

  /// @brief Field mSecurityStrength, offset: 0x28, size: 0x4, def value: None
  int32_t ___mSecurityStrength;

  /// @brief Field mKey, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mKey;

  /// @brief Field mV, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mV;

  /// @brief Field mReseedCounter, offset: 0x40, size: 0x8, def value: None
  int64_t ___mReseedCounter;

  /// @brief Field mIsTdea, offset: 0x48, size: 0x1, def value: None
  bool ___mIsTdea;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng::Drbg
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg*, "Org.BouncyCastle.Crypto.Prng.Drbg", "CtrSP800Drbg");
