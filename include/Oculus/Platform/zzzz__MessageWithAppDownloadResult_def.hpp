#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__AppDownloadResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithAppDownloadResult)
namespace Oculus::Platform::Models {
class AppDownloadResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAppDownloadResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAppDownloadResult);
// Type: Oculus.Platform::MessageWithAppDownloadResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4574 }), TypeDefinitionIndex(TypeDefinitionIndex(13413)),
// TypeDefinitionIndex(TypeDefinitionIndex(13262))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13272)) CS Name: ::Oculus.Platform::MessageWithAppDownloadResult*
class CORDL_TYPE MessageWithAppDownloadResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AppDownloadResult*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithAppDownloadResult* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x26eea58 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetAppDownloadResult addr 0x26f0be8 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::AppDownloadResult* GetAppDownloadResult();

  /// @brief Method GetDataFromMessage addr 0x26f0c24 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::AppDownloadResult* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAppDownloadResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithAppDownloadResult(MessageWithAppDownloadResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAppDownloadResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithAppDownloadResult(MessageWithAppDownloadResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithAppDownloadResult();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAppDownloadResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAppDownloadResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAppDownloadResult*, "Oculus.Platform", "MessageWithAppDownloadResult");
