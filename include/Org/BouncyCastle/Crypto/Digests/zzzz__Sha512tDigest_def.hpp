#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__LongDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Sha512tDigest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Sha512tDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Sha512tDigest);
// Type: Org.BouncyCastle.Crypto.Digests::Sha512tDigest
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(756))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(772))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::Sha512tDigest*
class CORDL_TYPE Sha512tDigest : public ::Org::BouncyCastle::Crypto::Digests::LongDigest {
public:
  // Declarations
  /// @brief Field digestLength, offset 0x84, size 0x4
  __declspec(property(get = __get_digestLength, put = __set_digestLength)) int32_t digestLength;

  /// @brief Field H1t, offset 0x88, size 0x8
  __declspec(property(get = __get_H1t, put = __set_H1t)) uint64_t H1t;

  /// @brief Field H2t, offset 0x90, size 0x8
  __declspec(property(get = __get_H2t, put = __set_H2t)) uint64_t H2t;

  /// @brief Field H3t, offset 0x98, size 0x8
  __declspec(property(get = __get_H3t, put = __set_H3t)) uint64_t H3t;

  /// @brief Field H4t, offset 0xa0, size 0x8
  __declspec(property(get = __get_H4t, put = __set_H4t)) uint64_t H4t;

  /// @brief Field H5t, offset 0xa8, size 0x8
  __declspec(property(get = __get_H5t, put = __set_H5t)) uint64_t H5t;

  /// @brief Field H6t, offset 0xb0, size 0x8
  __declspec(property(get = __get_H6t, put = __set_H6t)) uint64_t H6t;

  /// @brief Field H7t, offset 0xb8, size 0x8
  __declspec(property(get = __get_H7t, put = __set_H7t)) uint64_t H7t;

  /// @brief Field H8t, offset 0xc0, size 0x8
  __declspec(property(get = __get_H8t, put = __set_H8t)) uint64_t H8t;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  constexpr int32_t& __get_digestLength();

  constexpr int32_t const& __get_digestLength() const;

  constexpr void __set_digestLength(int32_t value);

  constexpr uint64_t& __get_H1t();

  constexpr uint64_t const& __get_H1t() const;

  constexpr void __set_H1t(uint64_t value);

  constexpr uint64_t& __get_H2t();

  constexpr uint64_t const& __get_H2t() const;

  constexpr void __set_H2t(uint64_t value);

  constexpr uint64_t& __get_H3t();

  constexpr uint64_t const& __get_H3t() const;

  constexpr void __set_H3t(uint64_t value);

  constexpr uint64_t& __get_H4t();

  constexpr uint64_t const& __get_H4t() const;

  constexpr void __set_H4t(uint64_t value);

  constexpr uint64_t& __get_H5t();

  constexpr uint64_t const& __get_H5t() const;

  constexpr void __set_H5t(uint64_t value);

  constexpr uint64_t& __get_H6t();

  constexpr uint64_t const& __get_H6t() const;

  constexpr void __set_H6t(uint64_t value);

  constexpr uint64_t& __get_H7t();

  constexpr uint64_t const& __get_H7t() const;

  constexpr void __set_H7t(uint64_t value);

  constexpr uint64_t& __get_H8t();

  constexpr uint64_t const& __get_H8t() const;

  constexpr void __set_H8t(uint64_t value);

  static inline ::Org::BouncyCastle::Crypto::Digests::Sha512tDigest* New_ctor(int32_t bitLength);

  /// @brief Method .ctor addr 0xea4c34 size 0x168 virtual false final false
  inline void _ctor(int32_t bitLength);

  static inline ::Org::BouncyCastle::Crypto::Digests::Sha512tDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Sha512tDigest* t);

  /// @brief Method .ctor addr 0xea4f24 size 0x90 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::Sha512tDigest* t);

  /// @brief Method get_AlgorithmName addr 0xea4fb4 size 0x88 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetDigestSize addr 0xea503c size 0x8 virtual true final false
  inline int32_t GetDigestSize();

  /// @brief Method DoFinal addr 0xea5044 size 0xfc virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xea51a4 size 0x38 virtual true final false
  inline void Reset();

  /// @brief Method tIvGenerate addr 0xea4d9c size 0x188 virtual false final false
  inline void tIvGenerate(int32_t bitLength);

  /// @brief Method UInt64_To_BE addr 0xea5140 size 0x64 virtual false final false
  static inline void UInt64_To_BE(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, int32_t max);

  /// @brief Method UInt32_To_BE addr 0xea51dc size 0xc0 virtual false final false
  static inline void UInt32_To_BE(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, int32_t max);

  /// @brief Method Copy addr 0xea529c size 0x60 virtual true final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method Reset addr 0xea52fc size 0x10c virtual true final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  // Ctor Parameters [CppParam { name: "", ty: "Sha512tDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Sha512tDigest(Sha512tDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Sha512tDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Sha512tDigest(Sha512tDigest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Sha512tDigest();

public:
  /// @brief Field digestLength, offset: 0x84, size: 0x4, def value: None
  int32_t ___digestLength;

  /// @brief Field H1t, offset: 0x88, size: 0x8, def value: None
  uint64_t ___H1t;

  /// @brief Field H2t, offset: 0x90, size: 0x8, def value: None
  uint64_t ___H2t;

  /// @brief Field H3t, offset: 0x98, size: 0x8, def value: None
  uint64_t ___H3t;

  /// @brief Field H4t, offset: 0xa0, size: 0x8, def value: None
  uint64_t ___H4t;

  /// @brief Field H5t, offset: 0xa8, size: 0x8, def value: None
  uint64_t ___H5t;

  /// @brief Field H6t, offset: 0xb0, size: 0x8, def value: None
  uint64_t ___H6t;

  /// @brief Field H7t, offset: 0xb8, size: 0x8, def value: None
  uint64_t ___H7t;

  /// @brief Field H8t, offset: 0xc0, size: 0x8, def value: None
  uint64_t ___H8t;

  /// @brief Field A5 offset 0xffffffff size 0x8
  static constexpr uint64_t A5{ static_cast<uint64_t>(0xa5a5a5a5a5a5a5a5u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Sha512tDigest, 0xc8>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Sha512tDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Sha512tDigest*, "Org.BouncyCastle.Crypto.Digests", "Sha512tDigest");
