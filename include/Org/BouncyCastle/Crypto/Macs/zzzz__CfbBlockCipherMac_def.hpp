#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CfbBlockCipherMac)
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Macs {
class MacCFBBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class CfbBlockCipherMac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac);
// Type: Org.BouncyCastle.Crypto.Macs::CfbBlockCipherMac
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(937))
// CS Name: ::Org.BouncyCastle.Crypto.Macs::CfbBlockCipherMac*
class CORDL_TYPE CfbBlockCipherMac : public ::System::Object {
public:
  // Declarations
  /// @brief Field mac, offset 0x10, size 0x8
  __declspec(property(get = __get_mac, put = __set_mac))::ArrayW<uint8_t, ::Array<uint8_t>*> mac;

  /// @brief Field Buffer, offset 0x18, size 0x8
  __declspec(property(get = __get_Buffer, put = __set_Buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  /// @brief Field bufOff, offset 0x20, size 0x4
  __declspec(property(get = __get_bufOff, put = __set_bufOff)) int32_t bufOff;

  /// @brief Field cipher, offset 0x28, size 0x8
  __declspec(property(get = __get_cipher, put = __set_cipher))::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher* cipher;

  /// @brief Field padding, offset 0x30, size 0x8
  __declspec(property(get = __get_padding, put = __set_padding))::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding;

  /// @brief Field macSize, offset 0x38, size 0x4
  __declspec(property(get = __get_macSize, put = __set_macSize)) int32_t macSize;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mac() const;

  constexpr void __set_mac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_Buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_Buffer() const;

  constexpr void __set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_bufOff();

  constexpr int32_t const& __get_bufOff() const;

  constexpr void __set_bufOff(int32_t value);

  constexpr ::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*& __get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*> const& __get_cipher() const;

  constexpr void __set_cipher(::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher* value);

  constexpr ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*& __get_padding();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*> const& __get_padding() const;

  constexpr void __set_padding(::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* value);

  constexpr int32_t& __get_macSize();

  constexpr int32_t const& __get_macSize() const;

  constexpr void __set_macSize(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  /// @brief Method .ctor addr 0xf0a5e4 size 0xd0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  static inline ::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding);

  /// @brief Method .ctor addr 0xf0a85c size 0xdc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding);

  static inline ::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t cfbBitSize, int32_t macSizeInBits);

  /// @brief Method .ctor addr 0xf0a938 size 0x8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t cfbBitSize, int32_t macSizeInBits);

  static inline ::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t cfbBitSize, int32_t macSizeInBits,
                                                                               ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding);

  /// @brief Method .ctor addr 0xf0a6b4 size 0x1a8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t cfbBitSize, int32_t macSizeInBits, ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding);

  /// @brief Method get_AlgorithmName addr 0xf0a940 size 0x18 virtual true final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init addr 0xf0a958 size 0x34 virtual true final true
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetMacSize addr 0xf0a9c4 size 0x8 virtual true final true
  inline int32_t GetMacSize();

  /// @brief Method Update addr 0xf0a9cc size 0x8c virtual true final true
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate addr 0xf0aa58 size 0x144 virtual true final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal addr 0xf0ab9c size 0x164 virtual true final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xf0a98c size 0x38 virtual true final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "CfbBlockCipherMac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CfbBlockCipherMac(CfbBlockCipherMac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CfbBlockCipherMac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CfbBlockCipherMac(CfbBlockCipherMac const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CfbBlockCipherMac();

public:
  /// @brief Field mac, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mac;

  /// @brief Field Buffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Buffer;

  /// @brief Field bufOff, offset: 0x20, size: 0x4, def value: None
  int32_t ___bufOff;

  /// @brief Field cipher, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher* ___cipher;

  /// @brief Field padding, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* ___padding;

  /// @brief Field macSize, offset: 0x38, size: 0x4, def value: None
  int32_t ___macSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::CfbBlockCipherMac*, "Org.BouncyCastle.Crypto.Macs", "CfbBlockCipherMac");
