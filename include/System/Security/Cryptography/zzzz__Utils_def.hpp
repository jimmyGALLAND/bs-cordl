#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
namespace System::Security::Cryptography {
class RNGCryptoServiceProvider;
}
// Forward declare root types
namespace System::Security::Cryptography {
class Utils;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::Utils);
// Type: System.Security.Cryptography::Utils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::Utils*
class CORDL_TYPE Utils : public ::System::Object {
public:
  // Declarations
  /// @brief Field _rng, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__rng, put = setStaticF__rng))::System::Security::Cryptography::RNGCryptoServiceProvider* _rng;

  /// @brief Method ConvertByteArrayToInt, addr 0x26ef728, size 0x60, virtual false, abstract: false, final false
  static inline int32_t ConvertByteArrayToInt(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method ConvertIntToByteArray, addr 0x26ef788, size 0x120, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConvertIntToByteArray(int32_t dwInput);

  /// @brief Method DWORDFromBigEndian, addr 0x26ead28, size 0x50, virtual false, abstract: false, final false
  static inline void DWORDFromBigEndian(::cordl_internals::Ptr<uint32_t> x, int32_t digits, ::cordl_internals::Ptr<uint8_t> block);

  /// @brief Method DWORDFromLittleEndian, addr 0x26ef8a8, size 0x4c, virtual false, abstract: false, final false
  static inline void DWORDFromLittleEndian(::cordl_internals::Ptr<uint32_t> x, int32_t digits, ::cordl_internals::Ptr<uint8_t> block);

  /// @brief Method DWORDToBigEndian, addr 0x26eac34, size 0xf4, virtual false, abstract: false, final false
  static inline void DWORDToBigEndian(::ArrayW<uint8_t, ::Array<uint8_t>*> block, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t digits);

  /// @brief Method DWORDToLittleEndian, addr 0x26ef8f4, size 0xf4, virtual false, abstract: false, final false
  static inline void DWORDToLittleEndian(::ArrayW<uint8_t, ::Array<uint8_t>*> block, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t digits);

  /// @brief Method DiscardWhiteSpaces, addr 0x26e9424, size 0x1c, virtual false, abstract: false, final false
  static inline ::StringW DiscardWhiteSpaces(::StringW inputBuffer);

  /// @brief Method DiscardWhiteSpaces, addr 0x26ef5a0, size 0x188, virtual false, abstract: false, final false
  static inline ::StringW DiscardWhiteSpaces(::StringW inputBuffer, int32_t inputOffset, int32_t inputCount);

  /// @brief Method FixupKeyParity, addr 0x26eed6c, size 0xc8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FixupKeyParity(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method GenerateRandom, addr 0x26ef530, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateRandom(int32_t keySize);

  /// @brief Method HasAlgorithm, addr 0x26ef124, size 0x8, virtual false, abstract: false, final false
  static inline bool HasAlgorithm(int32_t dwCalg, int32_t dwKeySize);

  /// @brief Method QuadWordFromBigEndian, addr 0x26ec8cc, size 0x80, virtual false, abstract: false, final false
  static inline void QuadWordFromBigEndian(::cordl_internals::Ptr<uint64_t> x, int32_t digits, ::cordl_internals::Ptr<uint8_t> block);

  /// @brief Method QuadWordToBigEndian, addr 0x26ec710, size 0x1bc, virtual false, abstract: false, final false
  static inline void QuadWordToBigEndian(::ArrayW<uint8_t, ::Array<uint8_t>*> block, ::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t digits);

  /// @brief Method _ProduceLegacyHmacValues, addr 0x26ef9e8, size 0x8, virtual false, abstract: false, final false
  static inline bool _ProduceLegacyHmacValues();

  static inline ::System::Security::Cryptography::RNGCryptoServiceProvider* getStaticF__rng();

  /// @brief Method get_StaticRandomNumberGenerator, addr 0x26ef424, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RNGCryptoServiceProvider* get_StaticRandomNumberGenerator();

  static inline void setStaticF__rng(::System::Security::Cryptography::RNGCryptoServiceProvider* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Utils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Utils(Utils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Utils(Utils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::Utils, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::Utils);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::Utils*, "System.Security.Cryptography", "Utils");
