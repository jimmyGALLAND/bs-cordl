#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityAction)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Events {
class UnityAction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::UnityAction);
// Type: UnityEngine.Events::UnityAction
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10470))
// CS Name: ::UnityEngine.Events::UnityAction*
class CORDL_TYPE UnityAction : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::Events::UnityAction* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2cfa270 size 0xbc virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2cfa32c size 0x14 virtual true final false
  inline void Invoke();

  // Ctor Parameters [CppParam { name: "", ty: "UnityAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityAction(UnityAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityAction(UnityAction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityAction();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::UnityAction, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::UnityAction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::UnityAction*, "UnityEngine.Events", "UnityAction");
