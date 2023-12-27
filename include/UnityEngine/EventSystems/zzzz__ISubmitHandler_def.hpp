#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISubmitHandler)
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::ISubmitHandler);
// Type: UnityEngine.EventSystems::ISubmitHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13187))
// CS Name: ::UnityEngine.EventSystems::ISubmitHandler*
class CORDL_TYPE ISubmitHandler {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Method OnSubmit addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  // Ctor Parameters [CppParam { name: "", ty: "ISubmitHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISubmitHandler(ISubmitHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISubmitHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISubmitHandler(ISubmitHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::ISubmitHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::ISubmitHandler*, "UnityEngine.EventSystems", "ISubmitHandler");
