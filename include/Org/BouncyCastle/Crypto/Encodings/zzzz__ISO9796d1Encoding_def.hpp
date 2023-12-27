#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ISO9796d1Encoding)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Encodings {
class ISO9796d1Encoding;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding);
// Type: Org.BouncyCastle.Crypto.Encodings::ISO9796d1Encoding
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Encodings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(819))
// CS Name: ::Org.BouncyCastle.Crypto.Encodings::ISO9796d1Encoding*
class CORDL_TYPE ISO9796d1Encoding : public ::System::Object {
public:
  // Declarations
  /// @brief Field engine, offset 0x10, size 0x8
  __declspec(property(get = __get_engine, put = __set_engine))::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* engine;

  /// @brief Field forEncryption, offset 0x18, size 0x1
  __declspec(property(get = __get_forEncryption, put = __set_forEncryption)) bool forEncryption;

  /// @brief Field bitSize, offset 0x1c, size 0x4
  __declspec(property(get = __get_bitSize, put = __set_bitSize)) int32_t bitSize;

  /// @brief Field padBits, offset 0x20, size 0x4
  __declspec(property(get = __get_padBits, put = __set_padBits)) int32_t padBits;

  /// @brief Field modulus, offset 0x28, size 0x8
  __declspec(property(get = __get_modulus, put = __set_modulus))::Org::BouncyCastle::Math::BigInteger* modulus;

  /// @brief Field Sixteen, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Sixteen, put = setStaticF_Sixteen))::Org::BouncyCastle::Math::BigInteger* Sixteen;

  /// @brief Field Six, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Six, put = setStaticF_Six))::Org::BouncyCastle::Math::BigInteger* Six;

  /// @brief Field shadows, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_shadows, put = setStaticF_shadows))::ArrayW<uint8_t, ::Array<uint8_t>*> shadows;

  /// @brief Field inverse, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inverse, put = setStaticF_inverse))::ArrayW<uint8_t, ::Array<uint8_t>*> inverse;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& __get_engine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*> const& __get_engine() const;

  constexpr void __set_engine(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value);

  constexpr bool& __get_forEncryption();

  constexpr bool const& __get_forEncryption() const;

  constexpr void __set_forEncryption(bool value);

  constexpr int32_t& __get_bitSize();

  constexpr int32_t const& __get_bitSize() const;

  constexpr void __set_bitSize(int32_t value);

  constexpr int32_t& __get_padBits();

  constexpr int32_t const& __get_padBits() const;

  constexpr void __set_padBits(int32_t value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __get_modulus();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __get_modulus() const;

  constexpr void __set_modulus(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_Sixteen(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Sixteen();

  static inline void setStaticF_Six(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Six();

  static inline void setStaticF_shadows(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_shadows();

  static inline void setStaticF_inverse(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_inverse();

  static inline ::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher);

  /// @brief Method .ctor addr 0xeb2014 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher);

  /// @brief Method get_AlgorithmName addr 0xeb2040 size 0xc0 virtual true final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetUnderlyingCipher addr 0xeb2100 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* GetUnderlyingCipher();

  /// @brief Method Init addr 0xeb2108 size 0x1ac virtual true final true
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetInputBlockSize addr 0xeb22b4 size 0xc4 virtual true final true
  inline int32_t GetInputBlockSize();

  /// @brief Method GetOutputBlockSize addr 0xeb2378 size 0xc4 virtual true final true
  inline int32_t GetOutputBlockSize();

  /// @brief Method SetPadBits addr 0xeb243c size 0x64 virtual false final false
  inline void SetPadBits(int32_t padBits);

  /// @brief Method GetPadBits addr 0xeb24a0 size 0x8 virtual false final false
  inline int32_t GetPadBits();

  /// @brief Method ProcessBlock addr 0xeb24a8 size 0x10 virtual true final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method EncodeBlock addr 0xeb24b8 size 0x34c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  /// @brief Method DecodeBlock addr 0xeb2804 size 0x4e0 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  // Ctor Parameters [CppParam { name: "", ty: "ISO9796d1Encoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISO9796d1Encoding(ISO9796d1Encoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISO9796d1Encoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISO9796d1Encoding(ISO9796d1Encoding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ISO9796d1Encoding();

public:
  /// @brief Field engine, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* ___engine;

  /// @brief Field forEncryption, offset: 0x18, size: 0x1, def value: None
  bool ___forEncryption;

  /// @brief Field bitSize, offset: 0x1c, size: 0x4, def value: None
  int32_t ___bitSize;

  /// @brief Field padBits, offset: 0x20, size: 0x4, def value: None
  int32_t ___padBits;

  /// @brief Field modulus, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___modulus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Encodings
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*, "Org.BouncyCastle.Crypto.Encodings", "ISO9796d1Encoding");
