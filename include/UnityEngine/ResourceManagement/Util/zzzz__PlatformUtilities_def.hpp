#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlatformUtilities)
namespace UnityEngine {
struct RuntimePlatform;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class PlatformUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::PlatformUtilities);
// Type: UnityEngine.ResourceManagement.Util::PlatformUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13974))
// CS Name: ::UnityEngine.ResourceManagement.Util::PlatformUtilities*
class CORDL_TYPE PlatformUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method PlatformUsesMultiThreading addr 0x2bd2000 size 0xc virtual false final false
  static inline bool PlatformUsesMultiThreading(::UnityEngine::RuntimePlatform platform);

  static inline ::UnityEngine::ResourceManagement::Util::PlatformUtilities* New_ctor();

  /// @brief Method .ctor addr 0x2bd200c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlatformUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformUtilities(PlatformUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformUtilities(PlatformUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::PlatformUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::PlatformUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::PlatformUtilities*, "UnityEngine.ResourceManagement.Util", "PlatformUtilities");
