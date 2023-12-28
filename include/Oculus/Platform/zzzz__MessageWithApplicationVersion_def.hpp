#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__ApplicationVersion_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithApplicationVersion)
namespace Oculus::Platform::Models {
class ApplicationVersion;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithApplicationVersion;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithApplicationVersion);
// Type: Oculus.Platform::MessageWithApplicationVersion
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13416)), TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst:
// 4576 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(13274)) CS Name: ::Oculus.Platform::MessageWithApplicationVersion*
class CORDL_TYPE MessageWithApplicationVersion : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ApplicationVersion*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithApplicationVersion* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x26eeb08 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetApplicationVersion addr 0x26f0d98 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::ApplicationVersion* GetApplicationVersion();

  /// @brief Method GetDataFromMessage addr 0x26f0dd4 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::ApplicationVersion* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithApplicationVersion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithApplicationVersion(MessageWithApplicationVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithApplicationVersion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithApplicationVersion(MessageWithApplicationVersion const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithApplicationVersion();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithApplicationVersion, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithApplicationVersion);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithApplicationVersion*, "Oculus.Platform", "MessageWithApplicationVersion");
