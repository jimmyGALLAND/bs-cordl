#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HttpMessageHandler)
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class IDisposable;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
// Forward declare root types
namespace System::Net::Http {
class HttpMessageHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpMessageHandler);
// Type: System.Net.Http::HttpMessageHandler
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14650))
// CS Name: ::System.Net.Http::HttpMessageHandler*
class CORDL_TYPE HttpMessageHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose addr 0x2833428 size 0x10 virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x282cbfc size 0x4 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method SendAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                  ::System::Threading::CancellationToken cancellationToken);

  static inline ::System::Net::Http::HttpMessageHandler* New_ctor();

  /// @brief Method .ctor addr 0x282c8c0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HttpMessageHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpMessageHandler(HttpMessageHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpMessageHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpMessageHandler(HttpMessageHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpMessageHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpMessageHandler, 0x10>, "Size mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpMessageHandler*, "System.Net.Http", "HttpMessageHandler");
