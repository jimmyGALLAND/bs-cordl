#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TwofishEngine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class TwofishEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::TwofishEngine);
// Type: Org.BouncyCastle.Crypto.Engines::TwofishEngine
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(881))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::TwofishEngine*
class CORDL_TYPE TwofishEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field encrypting, offset 0x10, size 0x1
  __declspec(property(get = __get_encrypting, put = __set_encrypting)) bool encrypting;

  /// @brief Field gMDS0, offset 0x18, size 0x8
  __declspec(property(get = __get_gMDS0, put = __set_gMDS0))::ArrayW<int32_t, ::Array<int32_t>*> gMDS0;

  /// @brief Field gMDS1, offset 0x20, size 0x8
  __declspec(property(get = __get_gMDS1, put = __set_gMDS1))::ArrayW<int32_t, ::Array<int32_t>*> gMDS1;

  /// @brief Field gMDS2, offset 0x28, size 0x8
  __declspec(property(get = __get_gMDS2, put = __set_gMDS2))::ArrayW<int32_t, ::Array<int32_t>*> gMDS2;

  /// @brief Field gMDS3, offset 0x30, size 0x8
  __declspec(property(get = __get_gMDS3, put = __set_gMDS3))::ArrayW<int32_t, ::Array<int32_t>*> gMDS3;

  /// @brief Field gSubKeys, offset 0x38, size 0x8
  __declspec(property(get = __get_gSubKeys, put = __set_gSubKeys))::ArrayW<int32_t, ::Array<int32_t>*> gSubKeys;

  /// @brief Field gSBox, offset 0x40, size 0x8
  __declspec(property(get = __get_gSBox, put = __set_gSBox))::ArrayW<int32_t, ::Array<int32_t>*> gSBox;

  /// @brief Field k64Cnt, offset 0x48, size 0x4
  __declspec(property(get = __get_k64Cnt, put = __set_k64Cnt)) int32_t k64Cnt;

  /// @brief Field workingKey, offset 0x50, size 0x8
  __declspec(property(get = __get_workingKey, put = __set_workingKey))::ArrayW<uint8_t, ::Array<uint8_t>*> workingKey;

  /// @brief Field P, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_P, put = setStaticF_P)) Il2CppObject* P;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  constexpr bool& __get_encrypting();

  constexpr bool const& __get_encrypting() const;

  constexpr void __set_encrypting(bool value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_gMDS0();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_gMDS0() const;

  constexpr void __set_gMDS0(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_gMDS1();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_gMDS1() const;

  constexpr void __set_gMDS1(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_gMDS2();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_gMDS2() const;

  constexpr void __set_gMDS2(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_gMDS3();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_gMDS3() const;

  constexpr void __set_gMDS3(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_gSubKeys();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_gSubKeys() const;

  constexpr void __set_gSubKeys(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_gSBox();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_gSBox() const;

  constexpr void __set_gSBox(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __get_k64Cnt();

  constexpr int32_t const& __get_k64Cnt() const;

  constexpr void __set_k64Cnt(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_workingKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_workingKey() const;

  constexpr void __set_workingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_P(Il2CppObject* value);

  static inline Il2CppObject* getStaticF_P();

  static inline ::Org::BouncyCastle::Crypto::Engines::TwofishEngine* New_ctor();

  /// @brief Method .ctor addr 0xef258c size 0x2f0 virtual false final false
  inline void _ctor();

  /// @brief Method Init addr 0xef28d8 size 0x164 virtual true final true
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_AlgorithmName addr 0xef324c size 0x40 virtual true final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay addr 0xef328c size 0x8 virtual true final true
  inline bool get_IsPartialBlockOkay();

  /// @brief Method ProcessBlock addr 0xef3294 size 0x138 virtual true final true
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xef38bc size 0x10 virtual true final true
  inline void Reset();

  /// @brief Method GetBlockSize addr 0xef38cc size 0x8 virtual true final true
  inline int32_t GetBlockSize();

  /// @brief Method SetKey addr 0xef2a3c size 0x810 virtual false final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method EncryptBlock addr 0xef33cc size 0x278 virtual false final false
  inline void EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcIndex, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstIndex);

  /// @brief Method DecryptBlock addr 0xef3644 size 0x278 virtual false final false
  inline void DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcIndex, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstIndex);

  /// @brief Method F32 addr 0xef39e4 size 0x458 virtual false final false
  inline int32_t F32(int32_t x, ::ArrayW<int32_t, ::Array<int32_t>*> k32);

  /// @brief Method RS_MDS_Encode addr 0xef3944 size 0xa0 virtual false final false
  inline int32_t RS_MDS_Encode(int32_t k0, int32_t k1);

  /// @brief Method RS_rem addr 0xef3ffc size 0x40 virtual false final false
  inline int32_t RS_rem(int32_t x);

  /// @brief Method LFSR1 addr 0xef403c size 0x14 virtual false final false
  inline int32_t LFSR1(int32_t x);

  /// @brief Method LFSR2 addr 0xef4050 size 0x24 virtual false final false
  inline int32_t LFSR2(int32_t x);

  /// @brief Method Mx_X addr 0xef287c size 0x28 virtual false final false
  inline int32_t Mx_X(int32_t x);

  /// @brief Method Mx_Y addr 0xef28a4 size 0x34 virtual false final false
  inline int32_t Mx_Y(int32_t x);

  /// @brief Method M_b0 addr 0xef3e3c size 0x8 virtual false final false
  inline int32_t M_b0(int32_t x);

  /// @brief Method M_b1 addr 0xef3e44 size 0x8 virtual false final false
  inline int32_t M_b1(int32_t x);

  /// @brief Method M_b2 addr 0xef3e4c size 0x8 virtual false final false
  inline int32_t M_b2(int32_t x);

  /// @brief Method M_b3 addr 0xef3e54 size 0x8 virtual false final false
  inline int32_t M_b3(int32_t x);

  /// @brief Method Fe32_0 addr 0xef3e5c size 0x8c virtual false final false
  inline int32_t Fe32_0(int32_t x);

  /// @brief Method Fe32_3 addr 0xef3ee8 size 0x94 virtual false final false
  inline int32_t Fe32_3(int32_t x);

  /// @brief Method BytesTo32Bits addr 0xef38d4 size 0x70 virtual false final false
  inline int32_t BytesTo32Bits(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t p);

  /// @brief Method Bits32ToBytes addr 0xef3f7c size 0x80 virtual false final false
  inline void Bits32ToBytes(int32_t inData, ::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t offset);

  // Ctor Parameters [CppParam { name: "", ty: "TwofishEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TwofishEngine(TwofishEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TwofishEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TwofishEngine(TwofishEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TwofishEngine();

public:
  /// @brief Field encrypting, offset: 0x10, size: 0x1, def value: None
  bool ___encrypting;

  /// @brief Field gMDS0, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___gMDS0;

  /// @brief Field gMDS1, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___gMDS1;

  /// @brief Field gMDS2, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___gMDS2;

  /// @brief Field gMDS3, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___gMDS3;

  /// @brief Field gSubKeys, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___gSubKeys;

  /// @brief Field gSBox, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___gSBox;

  /// @brief Field k64Cnt, offset: 0x48, size: 0x4, def value: None
  int32_t ___k64Cnt;

  /// @brief Field workingKey, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___workingKey;

  /// @brief Field P_00 offset 0xffffffff size 0x4
  static constexpr int32_t P_00{ static_cast<int32_t>(0x1) };

  /// @brief Field P_01 offset 0xffffffff size 0x4
  static constexpr int32_t P_01{ static_cast<int32_t>(0x0) };

  /// @brief Field P_02 offset 0xffffffff size 0x4
  static constexpr int32_t P_02{ static_cast<int32_t>(0x0) };

  /// @brief Field P_03 offset 0xffffffff size 0x4
  static constexpr int32_t P_03{ static_cast<int32_t>(0x1) };

  /// @brief Field P_04 offset 0xffffffff size 0x4
  static constexpr int32_t P_04{ static_cast<int32_t>(0x1) };

  /// @brief Field P_10 offset 0xffffffff size 0x4
  static constexpr int32_t P_10{ static_cast<int32_t>(0x0) };

  /// @brief Field P_11 offset 0xffffffff size 0x4
  static constexpr int32_t P_11{ static_cast<int32_t>(0x0) };

  /// @brief Field P_12 offset 0xffffffff size 0x4
  static constexpr int32_t P_12{ static_cast<int32_t>(0x1) };

  /// @brief Field P_13 offset 0xffffffff size 0x4
  static constexpr int32_t P_13{ static_cast<int32_t>(0x1) };

  /// @brief Field P_14 offset 0xffffffff size 0x4
  static constexpr int32_t P_14{ static_cast<int32_t>(0x0) };

  /// @brief Field P_20 offset 0xffffffff size 0x4
  static constexpr int32_t P_20{ static_cast<int32_t>(0x1) };

  /// @brief Field P_21 offset 0xffffffff size 0x4
  static constexpr int32_t P_21{ static_cast<int32_t>(0x1) };

  /// @brief Field P_22 offset 0xffffffff size 0x4
  static constexpr int32_t P_22{ static_cast<int32_t>(0x0) };

  /// @brief Field P_23 offset 0xffffffff size 0x4
  static constexpr int32_t P_23{ static_cast<int32_t>(0x0) };

  /// @brief Field P_24 offset 0xffffffff size 0x4
  static constexpr int32_t P_24{ static_cast<int32_t>(0x0) };

  /// @brief Field P_30 offset 0xffffffff size 0x4
  static constexpr int32_t P_30{ static_cast<int32_t>(0x0) };

  /// @brief Field P_31 offset 0xffffffff size 0x4
  static constexpr int32_t P_31{ static_cast<int32_t>(0x1) };

  /// @brief Field P_32 offset 0xffffffff size 0x4
  static constexpr int32_t P_32{ static_cast<int32_t>(0x1) };

  /// @brief Field P_33 offset 0xffffffff size 0x4
  static constexpr int32_t P_33{ static_cast<int32_t>(0x0) };

  /// @brief Field P_34 offset 0xffffffff size 0x4
  static constexpr int32_t P_34{ static_cast<int32_t>(0x1) };

  /// @brief Field GF256_FDBK offset 0xffffffff size 0x4
  static constexpr int32_t GF256_FDBK{ static_cast<int32_t>(0x169) };

  /// @brief Field GF256_FDBK_2 offset 0xffffffff size 0x4
  static constexpr int32_t GF256_FDBK_2{ static_cast<int32_t>(0xb4) };

  /// @brief Field GF256_FDBK_4 offset 0xffffffff size 0x4
  static constexpr int32_t GF256_FDBK_4{ static_cast<int32_t>(0x5a) };

  /// @brief Field RS_GF_FDBK offset 0xffffffff size 0x4
  static constexpr int32_t RS_GF_FDBK{ static_cast<int32_t>(0x14d) };

  /// @brief Field ROUNDS offset 0xffffffff size 0x4
  static constexpr int32_t ROUNDS{ static_cast<int32_t>(0x10) };

  /// @brief Field MAX_ROUNDS offset 0xffffffff size 0x4
  static constexpr int32_t MAX_ROUNDS{ static_cast<int32_t>(0x10) };

  /// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_SIZE{ static_cast<int32_t>(0x10) };

  /// @brief Field MAX_KEY_BITS offset 0xffffffff size 0x4
  static constexpr int32_t MAX_KEY_BITS{ static_cast<int32_t>(0x100) };

  /// @brief Field INPUT_WHITEN offset 0xffffffff size 0x4
  static constexpr int32_t INPUT_WHITEN{ static_cast<int32_t>(0x0) };

  /// @brief Field OUTPUT_WHITEN offset 0xffffffff size 0x4
  static constexpr int32_t OUTPUT_WHITEN{ static_cast<int32_t>(0x4) };

  /// @brief Field ROUND_SUBKEYS offset 0xffffffff size 0x4
  static constexpr int32_t ROUND_SUBKEYS{ static_cast<int32_t>(0x8) };

  /// @brief Field TOTAL_SUBKEYS offset 0xffffffff size 0x4
  static constexpr int32_t TOTAL_SUBKEYS{ static_cast<int32_t>(0x28) };

  /// @brief Field SK_STEP offset 0xffffffff size 0x4
  static constexpr int32_t SK_STEP{ static_cast<int32_t>(0x2020202) };

  /// @brief Field SK_BUMP offset 0xffffffff size 0x4
  static constexpr int32_t SK_BUMP{ static_cast<int32_t>(0x1010101) };

  /// @brief Field SK_ROTL offset 0xffffffff size 0x4
  static constexpr int32_t SK_ROTL{ static_cast<int32_t>(0x9) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::TwofishEngine, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::TwofishEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::TwofishEngine*, "Org.BouncyCastle.Crypto.Engines", "TwofishEngine");
