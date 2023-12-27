#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X25519PublicKeyParameters)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class X25519PublicKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::X25519PublicKeyParameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1090))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::X25519PublicKeyParameters*
class CORDL_TYPE X25519PublicKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
  // Declarations
  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  /// @brief Field KeySize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_KeySize, put = setStaticF_KeySize)) int32_t KeySize;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_data();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_data() const;

  constexpr void __set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_KeySize(int32_t value);

  static inline int32_t getStaticF_KeySize();

  static inline ::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off);

  /// @brief Method .ctor addr 0xf3bd08 size 0xbc virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off);

  static inline ::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters* New_ctor(::System::IO::Stream* input);

  /// @brief Method .ctor addr 0xf3bf88 size 0x108 virtual false final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Method Encode addr 0xf3beb8 size 0x84 virtual false final false
  inline void Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off);

  /// @brief Method GetEncoded addr 0xf3c090 size 0x5c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  // Ctor Parameters [CppParam { name: "", ty: "X25519PublicKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X25519PublicKeyParameters(X25519PublicKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X25519PublicKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X25519PublicKeyParameters(X25519PublicKeyParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X25519PublicKeyParameters();

public:
  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "X25519PublicKeyParameters");
