#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__AsyncReadOrWriteRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncWriteRequest)
namespace Mono::Net::Security {
struct AsyncOperationStatus;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
// Forward declare root types
namespace Mono::Net::Security {
class AsyncWriteRequest;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::AsyncWriteRequest);
// Type: Mono.Net.Security::AsyncWriteRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8824))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8826))
// CS Name: ::Mono.Net.Security::AsyncWriteRequest*
class CORDL_TYPE AsyncWriteRequest : public ::Mono::Net::Security::AsyncReadOrWriteRequest {
public:
  // Declarations
  static inline ::Mono::Net::Security::AsyncWriteRequest* New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset,
                                                                   int32_t size);

  /// @brief Method .ctor addr 0x281fd40 size 0x8 virtual false final false
  inline void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method Run addr 0x281fd48 size 0x78 virtual true final false
  inline ::Mono::Net::Security::AsyncOperationStatus Run(::Mono::Net::Security::AsyncOperationStatus status);

  // Ctor Parameters [CppParam { name: "", ty: "AsyncWriteRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncWriteRequest(AsyncWriteRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncWriteRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncWriteRequest(AsyncWriteRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncWriteRequest();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::AsyncWriteRequest, 0x48>, "Size mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::AsyncWriteRequest);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::AsyncWriteRequest*, "Mono.Net.Security", "AsyncWriteRequest");
