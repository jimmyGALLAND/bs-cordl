#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventCallbackListPool)
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace UnityEngine::UIElements {
class EventCallbackList;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventCallbackListPool;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventCallbackListPool);
// Type: UnityEngine.UIElements::EventCallbackListPool
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7165))
// CS Name: ::UnityEngine.UIElements::EventCallbackListPool*
class CORDL_TYPE EventCallbackListPool : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Stack, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Stack, put = __set_m_Stack))::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList*>* m_Stack;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList*>*& __get_m_Stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList*>*> const& __get_m_Stack() const;

  constexpr void __set_m_Stack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList*>* value);

  /// @brief Method Get addr 0x2e4ad94 size 0xc4 virtual false final false
  inline ::UnityEngine::UIElements::EventCallbackList* Get(::UnityEngine::UIElements::EventCallbackList* initializer);

  /// @brief Method Release addr 0x2e4b0f8 size 0x64 virtual false final false
  inline void Release(::UnityEngine::UIElements::EventCallbackList* element);

  static inline ::UnityEngine::UIElements::EventCallbackListPool* New_ctor();

  /// @brief Method .ctor addr 0x2e4b1c8 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackListPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventCallbackListPool(EventCallbackListPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventCallbackListPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventCallbackListPool(EventCallbackListPool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventCallbackListPool();

public:
  /// @brief Field m_Stack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList*>* ___m_Stack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventCallbackListPool, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventCallbackListPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventCallbackListPool*, "UnityEngine.UIElements", "EventCallbackListPool");
