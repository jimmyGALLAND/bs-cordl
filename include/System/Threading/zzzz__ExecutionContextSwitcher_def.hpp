#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ExecutionContextSwitcher)
namespace System {
class Object;
}
namespace System::Threading {
class Thread;
}
namespace System::Threading {
struct __ExecutionContext__Reader;
}
// Forward declare root types
namespace System::Threading {
struct ExecutionContextSwitcher;
}
// Write type traits
MARK_VAL_T(::System::Threading::ExecutionContextSwitcher);
// Type: System.Threading::ExecutionContextSwitcher
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2712))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2710))
// CS Name: ::System.Threading::ExecutionContextSwitcher
struct CORDL_TYPE ExecutionContextSwitcher {
public:
  // Declarations
  /// @brief Method UndoNoThrow addr 0x2616c48 size 0x88 virtual false final false
  inline bool UndoNoThrow();

  /// @brief Method Undo addr 0x2616cd0 size 0x88 virtual false final false
  inline void Undo();

  // Ctor Parameters [CppParam { name: "outerEC", ty: "::System::Threading::__ExecutionContext__Reader", modifiers: "", def_value: None }, CppParam { name: "outerECBelongsToScope", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "hecsw", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "thread", ty: "::System::Threading::Thread*", modifiers:
  // "", def_value: None }]
  constexpr ExecutionContextSwitcher(::System::Threading::__ExecutionContext__Reader outerEC, bool outerECBelongsToScope, ::System::Object* hecsw, ::System::Threading::Thread* thread) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecutionContextSwitcher();

  /// @brief Field outerEC, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::__ExecutionContext__Reader outerEC;

  /// @brief Field outerECBelongsToScope, offset: 0x8, size: 0x1, def value: None
  bool outerECBelongsToScope;

  /// @brief Field hecsw, offset: 0x10, size: 0x8, def value: None
  ::System::Object* hecsw;

  /// @brief Field thread, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Thread* thread;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ExecutionContextSwitcher, 0x20>, "Size mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ExecutionContextSwitcher, "System.Threading", "ExecutionContextSwitcher");
