#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__PbeParametersGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs12ParametersGenerator)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Pkcs12ParametersGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::Pkcs12ParametersGenerator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(916))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(918))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::Pkcs12ParametersGenerator*
class CORDL_TYPE Pkcs12ParametersGenerator : public ::Org::BouncyCastle::Crypto::PbeParametersGenerator {
public:
  // Declarations
  /// @brief Field digest, offset 0x28, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field u, offset 0x30, size 0x4
  __declspec(property(get = __get_u, put = __set_u)) int32_t u;

  /// @brief Field v, offset 0x34, size 0x4
  __declspec(property(get = __get_v, put = __set_v)) int32_t v;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_digest() const;

  constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr int32_t& __get_u();

  constexpr int32_t const& __get_u() const;

  constexpr void __set_u(int32_t value);

  constexpr int32_t& __get_v();

  constexpr int32_t const& __get_v() const;

  constexpr void __set_v(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor addr 0xf033e0 size 0x11c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method Adjust addr 0xf034fc size 0xd4 virtual false final false
  inline void Adjust(::ArrayW<uint8_t, ::Array<uint8_t>*> a, int32_t aOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method GenerateDerivedKey addr 0xf035d0 size 0x5f0 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateDerivedKey(int32_t idByte, int32_t n);

  /// @brief Method GenerateDerivedParameters addr 0xf03bc0 size 0xa0 virtual true final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(int32_t keySize);

  /// @brief Method GenerateDerivedParameters addr 0xf03c60 size 0x9c virtual true final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::StringW algorithm, int32_t keySize);

  /// @brief Method GenerateDerivedParameters addr 0xf03cfc size 0x10c virtual true final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(int32_t keySize, int32_t ivSize);

  /// @brief Method GenerateDerivedParameters addr 0xf03e08 size 0x11c virtual true final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::StringW algorithm, int32_t keySize, int32_t ivSize);

  /// @brief Method GenerateDerivedMacParameters addr 0xf03f24 size 0xa0 virtual true final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedMacParameters(int32_t keySize);

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs12ParametersGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs12ParametersGenerator(Pkcs12ParametersGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs12ParametersGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs12ParametersGenerator(Pkcs12ParametersGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs12ParametersGenerator();

public:
  /// @brief Field digest, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field u, offset: 0x30, size: 0x4, def value: None
  int32_t ___u;

  /// @brief Field v, offset: 0x34, size: 0x4, def value: None
  int32_t ___v;

  /// @brief Field KeyMaterial offset 0xffffffff size 0x4
  static constexpr int32_t KeyMaterial{ static_cast<int32_t>(0x1) };

  /// @brief Field IVMaterial offset 0xffffffff size 0x4
  static constexpr int32_t IVMaterial{ static_cast<int32_t>(0x2) };

  /// @brief Field MacMaterial offset 0xffffffff size 0x4
  static constexpr int32_t MacMaterial{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*, "Org.BouncyCastle.Crypto.Generators", "Pkcs12ParametersGenerator");
