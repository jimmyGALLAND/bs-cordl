#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LivestreamingApplicationStatus)
// Forward declare root types
namespace Oculus::Platform::Models {
class LivestreamingApplicationStatus;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LivestreamingApplicationStatus);
// Type: Oculus.Platform.Models::LivestreamingApplicationStatus
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13453))
// CS Name: ::Oculus.Platform.Models::LivestreamingApplicationStatus*
class CORDL_TYPE LivestreamingApplicationStatus : public ::System::Object {
public:
  // Declarations
  /// @brief Field StreamingEnabled, offset 0x10, size 0x1
  __declspec(property(get = __get_StreamingEnabled, put = __set_StreamingEnabled)) bool StreamingEnabled;

  constexpr bool& __get_StreamingEnabled();

  constexpr bool const& __get_StreamingEnabled() const;

  constexpr void __set_StreamingEnabled(bool value);

  static inline ::Oculus::Platform::Models::LivestreamingApplicationStatus* New_ctor(void* o);

  /// @brief Method .ctor addr 0x2707210 size 0x7c virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "LivestreamingApplicationStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LivestreamingApplicationStatus(LivestreamingApplicationStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LivestreamingApplicationStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LivestreamingApplicationStatus(LivestreamingApplicationStatus const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LivestreamingApplicationStatus();

public:
  /// @brief Field StreamingEnabled, offset: 0x10, size: 0x1, def value: None
  bool ___StreamingEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LivestreamingApplicationStatus, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LivestreamingApplicationStatus);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LivestreamingApplicationStatus*, "Oculus.Platform.Models", "LivestreamingApplicationStatus");
