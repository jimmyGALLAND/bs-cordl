#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(YieldInstruction)
// Forward declare root types
namespace UnityEngine {
class YieldInstruction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::YieldInstruction);
// Type: UnityEngine::YieldInstruction
// SizeInfo { instance_size: 16, native_size: 1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10191))
// CS Name: ::UnityEngine::YieldInstruction*
class CORDL_TYPE YieldInstruction : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::YieldInstruction* New_ctor();

  /// @brief Method .ctor addr 0x2ccd2d8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "YieldInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  YieldInstruction(YieldInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "YieldInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  YieldInstruction(YieldInstruction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr YieldInstruction();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::YieldInstruction, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::YieldInstruction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::YieldInstruction*, "UnityEngine", "YieldInstruction");
