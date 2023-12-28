#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HttpMessageInvoker)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class IDisposable;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
class HttpMessageHandler;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::Net::Http {
class HttpMessageInvoker;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpMessageInvoker);
// Type: System.Net.Http::HttpMessageInvoker
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14651))
// CS Name: ::System.Net.Http::HttpMessageInvoker*
class CORDL_TYPE HttpMessageInvoker : public ::System::Object {
public:
  // Declarations
  /// @brief Field handler, offset 0x10, size 0x8
  __declspec(property(get = __get_handler, put = __set_handler))::System::Net::Http::HttpMessageHandler* handler;

  /// @brief Field disposeHandler, offset 0x18, size 0x1
  __declspec(property(get = __get_disposeHandler, put = __set_disposeHandler)) bool disposeHandler;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Net::Http::HttpMessageHandler*& __get_handler();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpMessageHandler*> const& __get_handler() const;

  constexpr void __set_handler(::System::Net::Http::HttpMessageHandler* value);

  constexpr bool& __get_disposeHandler();

  constexpr bool const& __get_disposeHandler() const;

  constexpr void __set_disposeHandler(bool value);

  static inline ::System::Net::Http::HttpMessageInvoker* New_ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler);

  /// @brief Method .ctor addr 0x2830cfc size 0x84 virtual false final false
  inline void _ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler);

  /// @brief Method Dispose addr 0x2833438 size 0x10 virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x2830f28 size 0x38 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method SendAsync addr 0x283196c size 0x20 virtual true final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                  ::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "HttpMessageInvoker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpMessageInvoker(HttpMessageInvoker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpMessageInvoker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpMessageInvoker(HttpMessageInvoker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpMessageInvoker();

public:
  /// @brief Field handler, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Http::HttpMessageHandler* ___handler;

  /// @brief Field disposeHandler, offset: 0x18, size: 0x1, def value: None
  bool ___disposeHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpMessageInvoker, 0x20>, "Size mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpMessageInvoker);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpMessageInvoker*, "System.Net.Http", "HttpMessageInvoker");
