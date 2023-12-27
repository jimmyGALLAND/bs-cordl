#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ExecuteInEditMode)
// Forward declare root types
namespace UnityEngine {
class ExecuteInEditMode;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ExecuteInEditMode);
// Type: UnityEngine::ExecuteInEditMode
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10218))
// CS Name: ::UnityEngine::ExecuteInEditMode*
class CORDL_TYPE ExecuteInEditMode : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::ExecuteInEditMode* New_ctor();

  /// @brief Method .ctor addr 0x2cd28e8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ExecuteInEditMode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecuteInEditMode(ExecuteInEditMode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecuteInEditMode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecuteInEditMode(ExecuteInEditMode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecuteInEditMode();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ExecuteInEditMode, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ExecuteInEditMode);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExecuteInEditMode*, "UnityEngine", "ExecuteInEditMode");
