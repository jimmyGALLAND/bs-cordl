#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DesKeyGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesEdeKeyGenerator)
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DesEdeKeyGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::DesEdeKeyGenerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(889))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(890))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::DesEdeKeyGenerator*
class CORDL_TYPE DesEdeKeyGenerator : public ::Org::BouncyCastle::Crypto::Generators::DesKeyGenerator {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator* New_ctor();

  /// @brief Method .ctor addr 0xef6f34 size 0x10 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator* New_ctor(int32_t defaultStrength);

  /// @brief Method .ctor addr 0xef6f44 size 0x4 virtual false final false
  inline void _ctor(int32_t defaultStrength);

  /// @brief Method engineInit addr 0xef6f48 size 0x230 virtual true final false
  inline void engineInit(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters);

  /// @brief Method engineGenerateKey addr 0xef7178 size 0xdc virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> engineGenerateKey();

  // Ctor Parameters [CppParam { name: "", ty: "DesEdeKeyGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesEdeKeyGenerator(DesEdeKeyGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesEdeKeyGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesEdeKeyGenerator(DesEdeKeyGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesEdeKeyGenerator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator*, "Org.BouncyCastle.Crypto.Generators", "DesEdeKeyGenerator");
