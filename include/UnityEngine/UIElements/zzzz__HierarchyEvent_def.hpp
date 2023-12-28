#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyEvent)
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class HierarchyEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::HierarchyEvent);
// Type: UnityEngine.UIElements::HierarchyEvent
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6868))
// CS Name: ::UnityEngine.UIElements::HierarchyEvent*
class CORDL_TYPE HierarchyEvent : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::HierarchyEvent* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2dc87a4 size 0x130 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2dc88d4 size 0x14 virtual true final false
  inline void Invoke(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType changeType);

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyEvent(HierarchyEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyEvent(HierarchyEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::HierarchyEvent, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::HierarchyEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::HierarchyEvent*, "UnityEngine.UIElements", "HierarchyEvent");
