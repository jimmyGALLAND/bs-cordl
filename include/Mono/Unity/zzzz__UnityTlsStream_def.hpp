#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
CORDL_MODULE_EXPORT(UnityTlsStream)
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
class SslStream;
}
namespace Mono::Net::Security {
class MonoSslAuthenticationOptions;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace Mono::Net::Security {
class MobileTlsContext;
}
// Forward declare root types
namespace Mono::Unity {
class UnityTlsStream;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Unity::UnityTlsStream);
// Type: Mono.Unity::UnityTlsStream
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 172, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8836))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8813))
// CS Name: ::Mono.Unity::UnityTlsStream*
class CORDL_TYPE UnityTlsStream : public ::Mono::Net::Security::MobileAuthenticatedStream {
public:
  // Declarations
  static inline ::Mono::Unity::UnityTlsStream* New_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::SslStream* owner,
                                                        ::Mono::Security::Interface::MonoTlsSettings* settings, ::Mono::Net::Security::MobileTlsProvider* provider);

  /// @brief Method .ctor addr 0x281cccc size 0x94 virtual false final false
  inline void _ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::System::Net::Security::SslStream* owner, ::Mono::Security::Interface::MonoTlsSettings* settings,
                    ::Mono::Net::Security::MobileTlsProvider* provider);

  /// @brief Method CreateContext addr 0x281d81c size 0x70 virtual true final false
  inline ::Mono::Net::Security::MobileTlsContext* CreateContext(::Mono::Net::Security::MonoSslAuthenticationOptions* options);

  // Ctor Parameters [CppParam { name: "", ty: "UnityTlsStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityTlsStream(UnityTlsStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityTlsStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityTlsStream(UnityTlsStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityTlsStream();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::UnityTlsStream, 0xb0>, "Size mismatch!");

} // namespace Mono::Unity
NEED_NO_BOX(::Mono::Unity::UnityTlsStream);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTlsStream*, "Mono.Unity", "UnityTlsStream");
