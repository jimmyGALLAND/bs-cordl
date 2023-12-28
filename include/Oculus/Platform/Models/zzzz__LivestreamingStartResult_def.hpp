#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__LivestreamingStartStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LivestreamingStartResult)
// Forward declare root types
namespace Oculus::Platform::Models {
class LivestreamingStartResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LivestreamingStartResult);
// Type: Oculus.Platform.Models::LivestreamingStartResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(13257))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13454))
// CS Name: ::Oculus.Platform.Models::LivestreamingStartResult*
class CORDL_TYPE LivestreamingStartResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field StreamingResult, offset 0x10, size 0x4
  __declspec(property(get = __get_StreamingResult, put = __set_StreamingResult))::Oculus::Platform::LivestreamingStartStatus StreamingResult;

  constexpr ::Oculus::Platform::LivestreamingStartStatus& __get_StreamingResult();

  constexpr ::Oculus::Platform::LivestreamingStartStatus const& __get_StreamingResult() const;

  constexpr void __set_StreamingResult(::Oculus::Platform::LivestreamingStartStatus value);

  static inline ::Oculus::Platform::Models::LivestreamingStartResult* New_ctor(void* o);

  /// @brief Method .ctor addr 0x270728c size 0x78 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "LivestreamingStartResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LivestreamingStartResult(LivestreamingStartResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LivestreamingStartResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LivestreamingStartResult(LivestreamingStartResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LivestreamingStartResult();

public:
  /// @brief Field StreamingResult, offset: 0x10, size: 0x4, def value: None
  ::Oculus::Platform::LivestreamingStartStatus ___StreamingResult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LivestreamingStartResult, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LivestreamingStartResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LivestreamingStartResult*, "Oculus.Platform.Models", "LivestreamingStartResult");
