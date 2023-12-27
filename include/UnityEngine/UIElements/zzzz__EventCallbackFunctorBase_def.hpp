#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__CallbackPhase_def.hpp"
#include "UnityEngine/UIElements/zzzz__InvokePolicy_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventCallbackFunctorBase)
namespace UnityEngine::UIElements {
struct CallbackPhase;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
struct PropagationPhase;
}
namespace System {
class Delegate;
}
namespace UnityEngine::UIElements {
struct InvokePolicy;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventCallbackFunctorBase;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventCallbackFunctorBase);
// Type: UnityEngine.UIElements::EventCallbackFunctorBase
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(7163)), TypeDefinitionIndex(TypeDefinitionIndex(7164))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7183))
// CS Name: ::UnityEngine.UIElements::EventCallbackFunctorBase*
class CORDL_TYPE EventCallbackFunctorBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field <phase>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__phase_k__BackingField, put = __set__phase_k__BackingField))::UnityEngine::UIElements::CallbackPhase _phase_k__BackingField;

  /// @brief Field <invokePolicy>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__invokePolicy_k__BackingField, put = __set__invokePolicy_k__BackingField))::UnityEngine::UIElements::InvokePolicy _invokePolicy_k__BackingField;

  __declspec(property(get = get_phase))::UnityEngine::UIElements::CallbackPhase phase;

  __declspec(property(get = get_invokePolicy))::UnityEngine::UIElements::InvokePolicy invokePolicy;

  constexpr ::UnityEngine::UIElements::CallbackPhase& __get__phase_k__BackingField();

  constexpr ::UnityEngine::UIElements::CallbackPhase const& __get__phase_k__BackingField() const;

  constexpr void __set__phase_k__BackingField(::UnityEngine::UIElements::CallbackPhase value);

  constexpr ::UnityEngine::UIElements::InvokePolicy& __get__invokePolicy_k__BackingField();

  constexpr ::UnityEngine::UIElements::InvokePolicy const& __get__invokePolicy_k__BackingField() const;

  constexpr void __set__invokePolicy_k__BackingField(::UnityEngine::UIElements::InvokePolicy value);

  /// @brief Method get_phase addr 0x2e4e050 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::CallbackPhase get_phase();

  /// @brief Method get_invokePolicy addr 0x2e4e058 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::InvokePolicy get_invokePolicy();

  static inline ::UnityEngine::UIElements::EventCallbackFunctorBase* New_ctor(::UnityEngine::UIElements::CallbackPhase phase, ::UnityEngine::UIElements::InvokePolicy invokePolicy);

  /// @brief Method .ctor addr 0x2e4e060 size 0x2c virtual false final false
  inline void _ctor(::UnityEngine::UIElements::CallbackPhase phase, ::UnityEngine::UIElements::InvokePolicy invokePolicy);

  /// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Invoke(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::PropagationPhase propagationPhase);

  /// @brief Method IsEquivalentTo addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool IsEquivalentTo(int64_t eventTypeId, ::System::Delegate* callback, ::UnityEngine::UIElements::CallbackPhase phase);

  /// @brief Method PhaseMatches addr 0x2e4e08c size 0x3c virtual false final false
  inline bool PhaseMatches(::UnityEngine::UIElements::PropagationPhase propagationPhase);

  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackFunctorBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventCallbackFunctorBase(EventCallbackFunctorBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackFunctorBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventCallbackFunctorBase(EventCallbackFunctorBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventCallbackFunctorBase();

public:
  /// @brief Field <phase>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::CallbackPhase ____phase_k__BackingField;

  /// @brief Field <invokePolicy>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::UIElements::InvokePolicy ____invokePolicy_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventCallbackFunctorBase, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventCallbackFunctorBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventCallbackFunctorBase*, "UnityEngine.UIElements", "EventCallbackFunctorBase");
