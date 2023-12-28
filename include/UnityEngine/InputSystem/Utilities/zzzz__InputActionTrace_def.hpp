#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventBuffer_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionTrace)
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::InputSystem::Utilities {
struct __InputActionTrace__Enumerator;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct __InputActionTrace__ActionEventPtr;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct ActionEvent;
}
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class InputActionTrace;
}
namespace UnityEngine::InputSystem::Utilities {
struct __InputActionTrace__ActionEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
struct __InputActionTrace__Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::InputActionTrace);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator);
// Type: ::ActionEventPtr
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6653))
// CS Name: ::InputActionTrace::ActionEventPtr
struct CORDL_TYPE __InputActionTrace__ActionEventPtr {
public:
  // Declarations
  __declspec(property(get = get_action))::UnityEngine::InputSystem::InputAction* action;

  __declspec(property(get = get_phase))::UnityEngine::InputSystem::InputActionPhase phase;

  __declspec(property(get = get_control))::UnityEngine::InputSystem::InputControl* control;

  __declspec(property(get = get_interaction))::UnityEngine::InputSystem::IInputInteraction* interaction;

  __declspec(property(get = get_time)) double_t time;

  __declspec(property(get = get_startTime)) double_t startTime;

  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_valueSizeInBytes)) int32_t valueSizeInBytes;

  /// @brief Method get_action addr 0x2b0eb90 size 0x28 virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* get_action();

  /// @brief Method get_phase addr 0x2b0ebb8 size 0xc virtual false final false
  inline ::UnityEngine::InputSystem::InputActionPhase get_phase();

  /// @brief Method get_control addr 0x2b0ebc4 size 0x40 virtual false final false
  inline ::UnityEngine::InputSystem::InputControl* get_control();

  /// @brief Method get_interaction addr 0x2b0ec04 size 0x58 virtual false final false
  inline ::UnityEngine::InputSystem::IInputInteraction* get_interaction();

  /// @brief Method get_time addr 0x2b0ec5c size 0x1c virtual false final false
  inline double_t get_time();

  /// @brief Method get_startTime addr 0x2b0ec78 size 0xc virtual false final false
  inline double_t get_startTime();

  /// @brief Method get_duration addr 0x2b0ec84 size 0x30 virtual false final false
  inline double_t get_duration();

  /// @brief Method get_valueSizeInBytes addr 0x2b0ecb4 size 0xc virtual false final false
  inline int32_t get_valueSizeInBytes();

  /// @brief Method ReadValueAsObject addr 0x2b0ecc0 size 0x244 virtual false final false
  inline ::System::Object* ReadValueAsObject();

  /// @brief Method ReadValue addr 0x2b0ef04 size 0x104 virtual false final false
  inline void ReadValue(::cordl_internals::Ptr<void> buffer, int32_t bufferSize);

  /// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TValue> inline TValue ReadValue();

  /// @brief Method ToString addr 0x2b0e4dc size 0x2f4 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: None }, CppParam { name: "m_Ptr", ty:
  // "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>", modifiers: "", def_value: None }]
  constexpr __InputActionTrace__ActionEventPtr(::UnityEngine::InputSystem::InputActionState* m_State, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> m_Ptr) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionTrace__ActionEventPtr();

  /// @brief Field m_State, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionState* m_State;

  /// @brief Field m_Ptr, offset: 0x8, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> m_Ptr;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6654))
// CS Name: ::InputActionTrace::Enumerator
struct CORDL_TYPE __InputActionTrace__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current))::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor addr 0x2b0e7e8 size 0x48 virtual false final false
  inline void _ctor(::UnityEngine::InputSystem::Utilities::InputActionTrace* trace);

  /// @brief Method MoveNext addr 0x2b0f008 size 0x64 virtual true final true
  inline bool MoveNext();

  /// @brief Method Reset addr 0x2b0f06c size 0xc virtual true final true
  inline void Reset();

  /// @brief Method Dispose addr 0x2b0f078 size 0x4 virtual true final true
  inline void Dispose();

  /// @brief Method get_Current addr 0x2b0f07c size 0x64 virtual true final true
  inline ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2b0f0e0 size 0x64 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "m_Trace", ty: "::UnityEngine::InputSystem::Utilities::InputActionTrace*", modifiers: "", def_value: None }, CppParam { name: "m_Buffer", ty:
  // "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>", modifiers: "", def_value: None }, CppParam { name: "m_EventCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "m_CurrentEvent", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>", modifiers: "", def_value: None }, CppParam { name: "m_CurrentIndex", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr __InputActionTrace__Enumerator(::UnityEngine::InputSystem::Utilities::InputActionTrace* m_Trace, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> m_Buffer,
                                           int32_t m_EventCount, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> m_CurrentEvent, int32_t m_CurrentIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionTrace__Enumerator();

  /// @brief Field m_Trace, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Utilities::InputActionTrace* m_Trace;

  /// @brief Field m_Buffer, offset: 0x8, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> m_Buffer;

  /// @brief Field m_EventCount, offset: 0x10, size: 0x4, def value: None
  int32_t m_EventCount;

  /// @brief Field m_CurrentEvent, offset: 0x18, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> m_CurrentEvent;

  /// @brief Field m_CurrentIndex, offset: 0x20, size: 0x4, def value: None
  int32_t m_CurrentIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InputActionTrace
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6669)), TypeDefinitionIndex(TypeDefinitionIndex(6532)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 3867
// }), TypeDefinitionIndex(TypeDefinitionIndex(6134)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 3104 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 3103 }), TypeDefinitionIndex(TypeDefinitionIndex(6181)), TypeDefinitionIndex(TypeDefinitionIndex(6152))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(6655)) CS Name: ::UnityEngine.InputSystem.Utilities::InputActionTrace*
class CORDL_TYPE InputActionTrace : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator;

  using ActionEventPtr = ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr;

  /// @brief Field m_SubscribedToAll, offset 0x10, size 0x1
  __declspec(property(get = __get_m_SubscribedToAll, put = __set_m_SubscribedToAll)) bool m_SubscribedToAll;

  /// @brief Field m_OnActionChangeHooked, offset 0x11, size 0x1
  __declspec(property(get = __get_m_OnActionChangeHooked, put = __set_m_OnActionChangeHooked)) bool m_OnActionChangeHooked;

  /// @brief Field m_SubscribedActions, offset 0x18, size 0x18
  __declspec(property(get = __get_m_SubscribedActions,
                      put = __set_m_SubscribedActions))::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*> m_SubscribedActions;

  /// @brief Field m_SubscribedActionMaps, offset 0x30, size 0x18
  __declspec(property(get = __get_m_SubscribedActionMaps,
                      put = __set_m_SubscribedActionMaps))::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*> m_SubscribedActionMaps;

  /// @brief Field m_EventBuffer, offset 0x48, size 0x20
  __declspec(property(get = __get_m_EventBuffer, put = __set_m_EventBuffer))::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_EventBuffer;

  /// @brief Field m_ActionMapStates, offset 0x68, size 0x18
  __declspec(property(get = __get_m_ActionMapStates,
                      put = __set_m_ActionMapStates))::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> m_ActionMapStates;

  /// @brief Field m_ActionMapStateClones, offset 0x80, size 0x18
  __declspec(property(get = __get_m_ActionMapStateClones,
                      put = __set_m_ActionMapStateClones))::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> m_ActionMapStateClones;

  /// @brief Field m_CallbackDelegate, offset 0x98, size 0x8
  __declspec(property(get = __get_m_CallbackDelegate, put = __set_m_CallbackDelegate))::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* m_CallbackDelegate;

  /// @brief Field m_ActionChangeDelegate, offset 0xa0, size 0x8
  __declspec(property(get = __get_m_ActionChangeDelegate,
                      put = __set_m_ActionChangeDelegate))::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* m_ActionChangeDelegate;

  __declspec(property(get = get_buffer))::UnityEngine::InputSystem::LowLevel::InputEventBuffer buffer;

  __declspec(property(get = get_count)) int32_t count;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr bool& __get_m_SubscribedToAll();

  constexpr bool const& __get_m_SubscribedToAll() const;

  constexpr void __set_m_SubscribedToAll(bool value);

  constexpr bool& __get_m_OnActionChangeHooked();

  constexpr bool const& __get_m_OnActionChangeHooked() const;

  constexpr void __set_m_OnActionChangeHooked(bool value);

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*>& __get_m_SubscribedActions();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*> const& __get_m_SubscribedActions() const;

  constexpr void __set_m_SubscribedActions(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*> value);

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*>& __get_m_SubscribedActionMaps();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*> const& __get_m_SubscribedActionMaps() const;

  constexpr void __set_m_SubscribedActionMaps(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*> value);

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventBuffer& __get_m_EventBuffer();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEventBuffer const& __get_m_EventBuffer() const;

  constexpr void __set_m_EventBuffer(::UnityEngine::InputSystem::LowLevel::InputEventBuffer value);

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>& __get_m_ActionMapStates();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> const& __get_m_ActionMapStates() const;

  constexpr void __set_m_ActionMapStates(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> value);

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>& __get_m_ActionMapStateClones();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> const& __get_m_ActionMapStateClones() const;

  constexpr void __set_m_ActionMapStateClones(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> value);

  constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*& __get_m_CallbackDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const& __get_m_CallbackDelegate() const;

  constexpr void __set_m_CallbackDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value);

  constexpr ::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*& __get_m_ActionChangeDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*> const& __get_m_ActionChangeDelegate() const;

  constexpr void __set_m_ActionChangeDelegate(::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* value);

  /// @brief Method get_buffer addr 0x2b0d4f4 size 0x10 virtual false final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventBuffer get_buffer();

  /// @brief Method get_count addr 0x2b0d504 size 0x8 virtual false final false
  inline int32_t get_count();

  static inline ::UnityEngine::InputSystem::Utilities::InputActionTrace* New_ctor();

  /// @brief Method .ctor addr 0x2b0d50c size 0x8 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Utilities::InputActionTrace* New_ctor(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method .ctor addr 0x2b0d514 size 0x7c virtual false final false
  inline void _ctor(::UnityEngine::InputSystem::InputAction* action);

  static inline ::UnityEngine::InputSystem::Utilities::InputActionTrace* New_ctor(::UnityEngine::InputSystem::InputActionMap* actionMap);

  /// @brief Method .ctor addr 0x2b0d6c4 size 0x7c virtual false final false
  inline void _ctor(::UnityEngine::InputSystem::InputActionMap* actionMap);

  /// @brief Method SubscribeToAll addr 0x2b0d854 size 0xdc virtual false final false
  inline void SubscribeToAll();

  /// @brief Method UnsubscribeFromAll addr 0x2b0dc0c size 0xd8 virtual false final false
  inline void UnsubscribeFromAll();

  /// @brief Method SubscribeTo addr 0x2b0d590 size 0x134 virtual false final false
  inline void SubscribeTo(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method SubscribeTo addr 0x2b0d740 size 0x114 virtual false final false
  inline void SubscribeTo(::UnityEngine::InputSystem::InputActionMap* actionMap);

  /// @brief Method UnsubscribeFrom addr 0x2b0d9f4 size 0x11c virtual false final false
  inline void UnsubscribeFrom(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method UnsubscribeFrom addr 0x2b0db10 size 0xfc virtual false final false
  inline void UnsubscribeFrom(::UnityEngine::InputSystem::InputActionMap* actionMap);

  /// @brief Method RecordAction addr 0x2b0dd50 size 0x1d0 virtual false final false
  inline void RecordAction(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method Clear addr 0x2b0df20 size 0x54 virtual false final false
  inline void Clear();

  /// @brief Method Finalize addr 0x2b0df74 size 0x94 virtual true final false
  inline void Finalize();

  /// @brief Method ToString addr 0x2b0e108 size 0x35c virtual true final false
  inline ::StringW ToString();

  /// @brief Method Dispose addr 0x2b0e7d0 size 0x18 virtual true final true
  inline void Dispose();

  /// @brief Method DisposeInternal addr 0x2b0e008 size 0x100 virtual false final false
  inline void DisposeInternal();

  /// @brief Method GetEnumerator addr 0x2b0e464 size 0x78 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2b0e830 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method HookOnActionChange addr 0x2b0d930 size 0xc4 virtual false final false
  inline void HookOnActionChange();

  /// @brief Method UnhookOnActionChange addr 0x2b0dce4 size 0x6c virtual false final false
  inline void UnhookOnActionChange();

  /// @brief Method OnActionChange addr 0x2b0e834 size 0x264 virtual false final false
  inline void OnActionChange(::System::Object* actionOrMapOrAsset, ::UnityEngine::InputSystem::InputActionChange change);

  /// @brief Method CloneActionStateBeforeBindingsChange addr 0x2b0ea98 size 0xf8 virtual false final false
  inline void CloneActionStateBeforeBindingsChange(::UnityEngine::InputSystem::InputActionMap* actionMap);

  // Ctor Parameters [CppParam { name: "", ty: "InputActionTrace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionTrace(InputActionTrace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionTrace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionTrace(InputActionTrace const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionTrace();

public:
  /// @brief Field m_SubscribedToAll, offset: 0x10, size: 0x1, def value: None
  bool ___m_SubscribedToAll;

  /// @brief Field m_OnActionChangeHooked, offset: 0x11, size: 0x1, def value: None
  bool ___m_OnActionChangeHooked;

  /// @brief Field m_SubscribedActions, offset: 0x18, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*> ___m_SubscribedActions;

  /// @brief Field m_SubscribedActionMaps, offset: 0x30, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*> ___m_SubscribedActionMaps;

  /// @brief Field m_EventBuffer, offset: 0x48, size: 0x20, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventBuffer ___m_EventBuffer;

  /// @brief Field m_ActionMapStates, offset: 0x68, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> ___m_ActionMapStates;

  /// @brief Field m_ActionMapStateClones, offset: 0x80, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> ___m_ActionMapStateClones;

  /// @brief Field m_CallbackDelegate, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* ___m_CallbackDelegate;

  /// @brief Field m_ActionChangeDelegate, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* ___m_ActionChangeDelegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::InputActionTrace, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::InputActionTrace);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::InputActionTrace*, "UnityEngine.InputSystem.Utilities", "InputActionTrace");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr, "UnityEngine.InputSystem.Utilities", "InputActionTrace/ActionEventPtr");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator, "UnityEngine.InputSystem.Utilities", "InputActionTrace/Enumerator");
