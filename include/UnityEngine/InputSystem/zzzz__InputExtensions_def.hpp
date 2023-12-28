#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InputExtensions)
namespace UnityEngine::InputSystem {
struct Key;
}
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputExtensions);
// Type: UnityEngine.InputSystem::InputExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6290))
// CS Name: ::UnityEngine.InputSystem::InputExtensions*
class CORDL_TYPE InputExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsInProgress addr 0x2aaace0 size 0x10 virtual false final false
  static inline bool IsInProgress(::UnityEngine::InputSystem::InputActionPhase phase);

  /// @brief Method IsEndedOrCanceled addr 0x2aaacf0 size 0x10 virtual false final false
  static inline bool IsEndedOrCanceled(::UnityEngine::InputSystem::TouchPhase phase);

  /// @brief Method IsActive addr 0x2aaa5bc size 0x20 virtual false final false
  static inline bool IsActive(::UnityEngine::InputSystem::TouchPhase phase);

  /// @brief Method IsModifierKey addr 0x2aaad00 size 0x10 virtual false final false
  static inline bool IsModifierKey(::UnityEngine::InputSystem::Key key);

  /// @brief Method IsTextInputKey addr 0x2aaad10 size 0x2c virtual false final false
  static inline bool IsTextInputKey(::UnityEngine::InputSystem::Key key);

  // Ctor Parameters [CppParam { name: "", ty: "InputExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputExtensions(InputExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputExtensions(InputExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputExtensions*, "UnityEngine.InputSystem", "InputExtensions");
