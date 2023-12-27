#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputUpdateDelegate)
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace System {
class AsyncCallback;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputUpdateDelegate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate);
// Type: UnityEngine.InputSystem.LowLevel::InputUpdateDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6548))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputUpdateDelegate*
class CORDL_TYPE InputUpdateDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2af0a28 size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2af0aec size 0x14 virtual true final false
  inline void Invoke(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer);

  /// @brief Method BeginInvoke addr 0x2af0b00 size 0xb8 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x2af0bb8 size 0x1c virtual true final false
  inline void EndInvoke(ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "InputUpdateDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputUpdateDelegate(InputUpdateDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputUpdateDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputUpdateDelegate(InputUpdateDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUpdateDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*, "UnityEngine.InputSystem.LowLevel", "InputUpdateDelegate");
