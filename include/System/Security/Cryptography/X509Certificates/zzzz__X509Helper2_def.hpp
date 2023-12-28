#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X509Helper2)
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace System {
class Exception;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainImpl;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Helper2;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509Helper2);
// Type: System.Security.Cryptography.X509Certificates::X509Helper2
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9014))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509Helper2*
class CORDL_TYPE X509Helper2 : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetMonoCertificate addr 0x2985260 size 0xd4 virtual false final false
  static inline ::Mono::Security::X509::X509Certificate* GetMonoCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);

  /// @brief Method CreateChainImpl addr 0x2985334 size 0x64 virtual false final false
  static inline ::System::Security::Cryptography::X509Certificates::X509ChainImpl* CreateChainImpl(bool useMachineContext);

  /// @brief Method IsValid addr 0x2985398 size 0x14 virtual false final false
  static inline bool IsValid(::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl);

  /// @brief Method ThrowIfContextInvalid addr 0x29853ac size 0x40 virtual false final false
  static inline void ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl);

  /// @brief Method GetInvalidChainContextException addr 0x29853ec size 0x88 virtual false final false
  static inline ::System::Exception* GetInvalidChainContextException();

  // Ctor Parameters [CppParam { name: "", ty: "X509Helper2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Helper2(X509Helper2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Helper2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Helper2(X509Helper2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Helper2();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Helper2, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Helper2);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Helper2*, "System.Security.Cryptography.X509Certificates", "X509Helper2");
