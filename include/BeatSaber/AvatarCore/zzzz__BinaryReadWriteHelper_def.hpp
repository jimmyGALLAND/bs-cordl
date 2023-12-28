#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BinaryReadWriteHelper)
namespace System::IO {
class BinaryWriter;
}
namespace System::IO {
class BinaryReader;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class BinaryReadWriteHelper;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::BinaryReadWriteHelper);
// Type: BeatSaber.AvatarCore::BinaryReadWriteHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15186))
// CS Name: ::BeatSaber.AvatarCore::BinaryReadWriteHelper*
class CORDL_TYPE BinaryReadWriteHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method Write addr 0xe0ec54 size 0x88 virtual false final false
  static inline void Write(::System::IO::BinaryWriter* binaryWriter, ::UnityEngine::Color color);

  /// @brief Method ReadColor addr 0xe0ecdc size 0x90 virtual false final false
  static inline ::UnityEngine::Color ReadColor(::System::IO::BinaryReader* binaryReader);

  // Ctor Parameters [CppParam { name: "", ty: "BinaryReadWriteHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryReadWriteHelper(BinaryReadWriteHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryReadWriteHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryReadWriteHelper(BinaryReadWriteHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryReadWriteHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::BinaryReadWriteHelper, 0x10>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::BinaryReadWriteHelper);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::BinaryReadWriteHelper*, "BeatSaber.AvatarCore", "BinaryReadWriteHelper");
