#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__GeneralDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Sha1Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Sha1Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Sha1Digest);
// Type: Org.BouncyCastle.Crypto.Digests::Sha1Digest
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(750))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(766))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::Sha1Digest*
class CORDL_TYPE Sha1Digest : public ::Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
  // Declarations
  /// @brief Field H1, offset 0x28, size 0x4
  __declspec(property(get = __get_H1, put = __set_H1)) uint32_t H1;

  /// @brief Field H2, offset 0x2c, size 0x4
  __declspec(property(get = __get_H2, put = __set_H2)) uint32_t H2;

  /// @brief Field H3, offset 0x30, size 0x4
  __declspec(property(get = __get_H3, put = __set_H3)) uint32_t H3;

  /// @brief Field H4, offset 0x34, size 0x4
  __declspec(property(get = __get_H4, put = __set_H4)) uint32_t H4;

  /// @brief Field H5, offset 0x38, size 0x4
  __declspec(property(get = __get_H5, put = __set_H5)) uint32_t H5;

  /// @brief Field X, offset 0x40, size 0x8
  __declspec(property(get = __get_X, put = __set_X))::ArrayW<uint32_t, ::Array<uint32_t>*> X;

  /// @brief Field xOff, offset 0x48, size 0x4
  __declspec(property(get = __get_xOff, put = __set_xOff)) int32_t xOff;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  constexpr uint32_t& __get_H1();

  constexpr uint32_t const& __get_H1() const;

  constexpr void __set_H1(uint32_t value);

  constexpr uint32_t& __get_H2();

  constexpr uint32_t const& __get_H2() const;

  constexpr void __set_H2(uint32_t value);

  constexpr uint32_t& __get_H3();

  constexpr uint32_t const& __get_H3() const;

  constexpr void __set_H3(uint32_t value);

  constexpr uint32_t& __get_H4();

  constexpr uint32_t const& __get_H4() const;

  constexpr void __set_H4(uint32_t value);

  constexpr uint32_t& __get_H5();

  constexpr uint32_t const& __get_H5() const;

  constexpr void __set_H5(uint32_t value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_X();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_X() const;

  constexpr void __set_X(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr int32_t& __get_xOff();

  constexpr int32_t const& __get_xOff() const;

  constexpr void __set_xOff(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Digests::Sha1Digest* New_ctor();

  /// @brief Method .ctor addr 0xea22d8 size 0x6c virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::Sha1Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Sha1Digest* t);

  /// @brief Method .ctor addr 0xea2344 size 0x74 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::Sha1Digest* t);

  /// @brief Method CopyIn addr 0xea23b8 size 0x64 virtual false final false
  inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::Sha1Digest* t);

  /// @brief Method get_AlgorithmName addr 0xea241c size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetDigestSize addr 0xea245c size 0x8 virtual true final false
  inline int32_t GetDigestSize();

  /// @brief Method ProcessWord addr 0xea2464 size 0x80 virtual true final false
  inline void ProcessWord(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method ProcessLength addr 0xea24e4 size 0x6c virtual true final false
  inline void ProcessLength(int64_t bitLength);

  /// @brief Method DoFinal addr 0xea2550 size 0xa4 virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xea25f4 size 0x4c virtual true final false
  inline void Reset();

  /// @brief Method F addr 0xea2640 size 0x10 virtual false final false
  static inline uint32_t F(uint32_t u, uint32_t v, uint32_t w);

  /// @brief Method H addr 0xea2650 size 0xc virtual false final false
  static inline uint32_t H(uint32_t u, uint32_t v, uint32_t w);

  /// @brief Method G addr 0xea265c size 0x14 virtual false final false
  static inline uint32_t G(uint32_t u, uint32_t v, uint32_t w);

  /// @brief Method ProcessBlock addr 0xea2670 size 0x53c virtual true final false
  inline void ProcessBlock();

  /// @brief Method Copy addr 0xea2bac size 0x60 virtual true final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method Reset addr 0xea2c0c size 0x84 virtual true final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  // Ctor Parameters [CppParam { name: "", ty: "Sha1Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Sha1Digest(Sha1Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Sha1Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Sha1Digest(Sha1Digest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Sha1Digest();

public:
  /// @brief Field H1, offset: 0x28, size: 0x4, def value: None
  uint32_t ___H1;

  /// @brief Field H2, offset: 0x2c, size: 0x4, def value: None
  uint32_t ___H2;

  /// @brief Field H3, offset: 0x30, size: 0x4, def value: None
  uint32_t ___H3;

  /// @brief Field H4, offset: 0x34, size: 0x4, def value: None
  uint32_t ___H4;

  /// @brief Field H5, offset: 0x38, size: 0x4, def value: None
  uint32_t ___H5;

  /// @brief Field X, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___X;

  /// @brief Field xOff, offset: 0x48, size: 0x4, def value: None
  int32_t ___xOff;

  /// @brief Field DigestLength offset 0xffffffff size 0x4
  static constexpr int32_t DigestLength{ static_cast<int32_t>(0x14) };

  /// @brief Field Y1 offset 0xffffffff size 0x4
  static constexpr uint32_t Y1{ static_cast<uint32_t>(0x827999f0u) };

  /// @brief Field Y2 offset 0xffffffff size 0x4
  static constexpr uint32_t Y2{ static_cast<uint32_t>(0xd9eba1f0u) };

  /// @brief Field Y3 offset 0xffffffff size 0x4
  static constexpr uint32_t Y3{ static_cast<uint32_t>(0x1bbcdcf0u) };

  /// @brief Field Y4 offset 0xffffffff size 0x4
  static constexpr uint32_t Y4{ static_cast<uint32_t>(0x62c1d6f0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Sha1Digest, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Sha1Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Sha1Digest*, "Org.BouncyCastle.Crypto.Digests", "Sha1Digest");
