#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionProperty)
namespace System {
class Object;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputActionProperty);
// Type: UnityEngine.InputSystem::InputActionProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6164))
// CS Name: ::UnityEngine.InputSystem::InputActionProperty
struct CORDL_TYPE InputActionProperty {
public:
  // Declarations
  __declspec(property(get = get_action))::UnityEngine::InputSystem::InputAction* action;

  __declspec(property(get = get_reference))::UnityEngine::InputSystem::InputActionReference* reference;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::InputActionProperty>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::InputActionProperty>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::InputAction*>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::InputActionReference*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::InputActionReference*>*();

  /// @brief Method get_action addr 0x2a469c4 size 0x94 virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* get_action();

  /// @brief Method get_reference addr 0x2a46b04 size 0x18 virtual false final false
  inline ::UnityEngine::InputSystem::InputActionReference* get_reference();

  /// @brief Method .ctor addr 0x2a46b1c size 0xc virtual false final false
  inline void _ctor(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method .ctor addr 0x2a46b28 size 0x10 virtual false final false
  inline void _ctor(::UnityEngine::InputSystem::InputActionReference* reference);

  /// @brief Method Equals addr 0x2a46b38 size 0xa4 virtual true final true
  inline bool Equals(::UnityEngine::InputSystem::InputActionProperty other);

  /// @brief Method Equals addr 0x2a46bdc size 0x1c virtual true final true
  inline bool Equals(::UnityEngine::InputSystem::InputAction* other);

  /// @brief Method Equals addr 0x2a46bf8 size 0x6c virtual true final true
  inline bool Equals(::UnityEngine::InputSystem::InputActionReference* other);

  /// @brief Method Equals addr 0x2a46c64 size 0xcc virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2a46d30 size 0x9c virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x2a46dcc size 0x30 virtual false final false
  static inline bool op_Equality(::UnityEngine::InputSystem::InputActionProperty left, ::UnityEngine::InputSystem::InputActionProperty right);

  /// @brief Method op_Inequality addr 0x2a46dfc size 0x34 virtual false final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::InputActionProperty left, ::UnityEngine::InputSystem::InputActionProperty right);

  // Ctor Parameters [CppParam { name: "m_UseReference", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Action", ty: "::UnityEngine::InputSystem::InputAction*", modifiers: "",
  // def_value: None }, CppParam { name: "m_Reference", ty: "::UnityEngine::InputSystem::InputActionReference*", modifiers: "", def_value: None }]
  constexpr InputActionProperty(bool m_UseReference, ::UnityEngine::InputSystem::InputAction* m_Action, ::UnityEngine::InputSystem::InputActionReference* m_Reference) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionProperty();

  /// @brief Field m_UseReference, offset: 0x0, size: 0x1, def value: None
  bool m_UseReference;

  /// @brief Field m_Action, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* m_Action;

  /// @brief Field m_Reference, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionReference* m_Reference;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionProperty, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionProperty, "UnityEngine.InputSystem", "InputActionProperty");
