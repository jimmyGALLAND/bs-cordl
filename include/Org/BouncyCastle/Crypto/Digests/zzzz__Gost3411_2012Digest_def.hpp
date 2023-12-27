#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost3411_2012Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Gost3411_2012Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest);
// Type: Org.BouncyCastle.Crypto.Digests::Gost3411_2012Digest
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(752))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::Gost3411_2012Digest*
class CORDL_TYPE Gost3411_2012Digest : public ::System::Object {
public:
  // Declarations
  /// @brief Field IV, offset 0x10, size 0x8
  __declspec(property(get = __get_IV, put = __set_IV))::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  /// @brief Field N, offset 0x18, size 0x8
  __declspec(property(get = __get_N, put = __set_N))::ArrayW<uint8_t, ::Array<uint8_t>*> N;

  /// @brief Field Sigma, offset 0x20, size 0x8
  __declspec(property(get = __get_Sigma, put = __set_Sigma))::ArrayW<uint8_t, ::Array<uint8_t>*> Sigma;

  /// @brief Field Ki, offset 0x28, size 0x8
  __declspec(property(get = __get_Ki, put = __set_Ki))::ArrayW<uint8_t, ::Array<uint8_t>*> Ki;

  /// @brief Field m, offset 0x30, size 0x8
  __declspec(property(get = __get_m, put = __set_m))::ArrayW<uint8_t, ::Array<uint8_t>*> m;

  /// @brief Field h, offset 0x38, size 0x8
  __declspec(property(get = __get_h, put = __set_h))::ArrayW<uint8_t, ::Array<uint8_t>*> h;

  /// @brief Field tmp, offset 0x40, size 0x8
  __declspec(property(get = __get_tmp, put = __set_tmp))::ArrayW<uint8_t, ::Array<uint8_t>*> tmp;

  /// @brief Field block, offset 0x48, size 0x8
  __declspec(property(get = __get_block, put = __set_block))::ArrayW<uint8_t, ::Array<uint8_t>*> block;

  /// @brief Field bOff, offset 0x50, size 0x4
  __declspec(property(get = __get_bOff, put = __set_bOff)) int32_t bOff;

  /// @brief Field C, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_C, put = setStaticF_C))::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> C;

  /// @brief Field Zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero))::ArrayW<uint8_t, ::Array<uint8_t>*> Zero;

  /// @brief Field T, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_T, put = setStaticF_T))::ArrayW<::ArrayW<uint64_t, ::Array<uint64_t>*>, ::Array<::ArrayW<uint64_t, ::Array<uint64_t>*>>*> T;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_IV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_IV() const;

  constexpr void __set_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_N();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_N() const;

  constexpr void __set_N(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_Sigma();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_Sigma() const;

  constexpr void __set_Sigma(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_Ki();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_Ki() const;

  constexpr void __set_Ki(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_m();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_m() const;

  constexpr void __set_m(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_h();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_h() const;

  constexpr void __set_h(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_tmp();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_tmp() const;

  constexpr void __set_tmp(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_block();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_block() const;

  constexpr void __set_block(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_bOff();

  constexpr int32_t const& __get_bOff() const;

  constexpr void __set_bOff(int32_t value);

  static inline void setStaticF_C(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  static inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> getStaticF_C();

  static inline void setStaticF_Zero(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Zero();

  static inline void setStaticF_T(::ArrayW<::ArrayW<uint64_t, ::Array<uint64_t>*>, ::Array<::ArrayW<uint64_t, ::Array<uint64_t>*>>*> value);

  static inline ::ArrayW<::ArrayW<uint64_t, ::Array<uint64_t>*>, ::Array<::ArrayW<uint64_t, ::Array<uint64_t>*>>*> getStaticF_T();

  static inline ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> IV);

  /// @brief Method .ctor addr 0x12231b8 size 0x104 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> IV);

  /// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method DoFinal addr 0x12232bc size 0x178 virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method GetByteLength addr 0x12236a8 size 0x8 virtual true final true
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetDigestSize();

  /// @brief Method Reset addr 0x1223604 size 0xa4 virtual true final true
  inline void Reset();

  /// @brief Method Reset addr 0x12236b0 size 0x14c virtual true final true
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  /// @brief Method Update addr 0x12237fc size 0x7c virtual true final true
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate addr 0x1223878 size 0x140 virtual true final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method F addr 0x12239b8 size 0xb54 virtual false final false
  inline void F(::ArrayW<uint8_t, ::Array<uint8_t>*> V);

  /// @brief Method xor512 addr 0x122450c size 0x5c virtual false final false
  inline void xor512(::ArrayW<uint8_t, ::Array<uint8_t>*> A, ::ArrayW<uint8_t, ::Array<uint8_t>*> B);

  /// @brief Method E addr 0x1224568 size 0x11c virtual false final false
  inline void E(::ArrayW<uint8_t, ::Array<uint8_t>*> K, ::ArrayW<uint8_t, ::Array<uint8_t>*> m);

  /// @brief Method g_N addr 0x1223434 size 0x80 virtual false final false
  inline void g_N(::ArrayW<uint8_t, ::Array<uint8_t>*> h, ::ArrayW<uint8_t, ::Array<uint8_t>*> N, ::ArrayW<uint8_t, ::Array<uint8_t>*> m);

  /// @brief Method addMod512 addr 0x12234b4 size 0x80 virtual false final false
  inline void addMod512(::ArrayW<uint8_t, ::Array<uint8_t>*> A, int32_t num);

  /// @brief Method addMod512 addr 0x1223534 size 0x60 virtual false final false
  inline void addMod512(::ArrayW<uint8_t, ::Array<uint8_t>*> A, ::ArrayW<uint8_t, ::Array<uint8_t>*> B);

  /// @brief Method reverse addr 0x1223594 size 0x70 virtual false final false
  inline void reverse(::ArrayW<uint8_t, ::Array<uint8_t>*> src, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst);

  // Ctor Parameters [CppParam { name: "", ty: "Gost3411_2012Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3411_2012Digest(Gost3411_2012Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3411_2012Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3411_2012Digest(Gost3411_2012Digest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3411_2012Digest();

public:
  /// @brief Field IV, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___IV;

  /// @brief Field N, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___N;

  /// @brief Field Sigma, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Sigma;

  /// @brief Field Ki, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Ki;

  /// @brief Field m, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m;

  /// @brief Field h, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___h;

  /// @brief Field tmp, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___tmp;

  /// @brief Field block, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___block;

  /// @brief Field bOff, offset: 0x50, size: 0x4, def value: None
  int32_t ___bOff;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*, "Org.BouncyCastle.Crypto.Digests", "Gost3411_2012Digest");
