#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChangeCipherSpec)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ChangeCipherSpec;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ChangeCipherSpec);
// Type: Org.BouncyCastle.Crypto.Tls::ChangeCipherSpec
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1196))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::ChangeCipherSpec*
class CORDL_TYPE ChangeCipherSpec : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::ChangeCipherSpec* New_ctor();

  /// @brief Method .ctor addr 0xf61e24 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ChangeCipherSpec", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChangeCipherSpec(ChangeCipherSpec&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChangeCipherSpec", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChangeCipherSpec(ChangeCipherSpec const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChangeCipherSpec();

public:
  /// @brief Field change_cipher_spec offset 0xffffffff size 0x1
  static constexpr uint8_t change_cipher_spec{ static_cast<uint8_t>(0x1u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ChangeCipherSpec, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ChangeCipherSpec);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ChangeCipherSpec*, "Org.BouncyCastle.Crypto.Tls", "ChangeCipherSpec");
