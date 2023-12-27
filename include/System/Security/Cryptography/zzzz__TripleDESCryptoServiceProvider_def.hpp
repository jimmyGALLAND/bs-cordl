#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__TripleDES_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TripleDESCryptoServiceProvider)
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Forward declare root types
namespace System::Security::Cryptography {
class TripleDESCryptoServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::TripleDESCryptoServiceProvider);
// Type: System.Security.Cryptography::TripleDESCryptoServiceProvider
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2974))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2975))
// CS Name: ::System.Security.Cryptography::TripleDESCryptoServiceProvider*
class CORDL_TYPE TripleDESCryptoServiceProvider : public ::System::Security::Cryptography::TripleDES {
public:
  // Declarations
  static inline ::System::Security::Cryptography::TripleDESCryptoServiceProvider* New_ctor();

  /// @brief Method .ctor addr 0x246b2c4 size 0x60 virtual false final false
  inline void _ctor();

  /// @brief Method CreateEncryptor addr 0x246b708 size 0x114 virtual true final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method CreateDecryptor addr 0x246bb3c size 0x114 virtual true final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method GenerateKey addr 0x246bc50 size 0xc8 virtual true final false
  inline void GenerateKey();

  /// @brief Method GenerateIV addr 0x246bdb8 size 0x68 virtual true final false
  inline void GenerateIV();

  // Ctor Parameters [CppParam { name: "", ty: "TripleDESCryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TripleDESCryptoServiceProvider(TripleDESCryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TripleDESCryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TripleDESCryptoServiceProvider(TripleDESCryptoServiceProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TripleDESCryptoServiceProvider();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::TripleDESCryptoServiceProvider, 0x48>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::TripleDESCryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::TripleDESCryptoServiceProvider*, "System.Security.Cryptography", "TripleDESCryptoServiceProvider");
