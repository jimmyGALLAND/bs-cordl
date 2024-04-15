#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VoipOptions)
namespace Oculus::Platform {
struct VoipBitrate;
}
namespace Oculus::Platform {
struct VoipDtxState;
}
// Forward declare root types
namespace Oculus::Platform {
class VoipOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::VoipOptions);
// Type: Oculus.Platform::VoipOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::VoipOptions*
class CORDL_TYPE VoipOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Handle, put = __cordl_internal_set_Handle)) void* Handle;

  /// @brief Method Finalize, addr 0x29dab10, size 0xd4, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Oculus::Platform::VoipOptions* New_ctor();

  /// @brief Method SetBitrateForNewConnections, addr 0x29daa40, size 0x68, virtual false, abstract: false, final false
  inline void SetBitrateForNewConnections(::Oculus::Platform::VoipBitrate value);

  /// @brief Method SetCreateNewConnectionUseDtx, addr 0x29daaa8, size 0x68, virtual false, abstract: false, final false
  inline void SetCreateNewConnectionUseDtx(::Oculus::Platform::VoipDtxState value);

  constexpr void* const& __cordl_internal_get_Handle() const;

  constexpr void*& __cordl_internal_get_Handle();

  constexpr void __cordl_internal_set_Handle(void* value);

  /// @brief Method .ctor, addr 0x29da9dc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method op_Explicit, addr 0x29d12a4, size 0x58, virtual false, abstract: false, final false
  static inline void* op_Explicit_void_(::Oculus::Platform::VoipOptions* options);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VoipOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VoipOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VoipOptions(VoipOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VoipOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VoipOptions(VoipOptions const&) = delete;

  /// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
  void* ___Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::VoipOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::VoipOptions, ___Handle) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::VoipOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::VoipOptions*, "Oculus.Platform", "VoipOptions");
