#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputControl_1)
namespace UnityEngine::InputSystem {
template <typename TValue> class InputProcessor_1;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
template <typename TValue> class InputControl_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::InputControl_1);
// Type: UnityEngine.InputSystem::InputControl`1
// SizeInfo { instance_size: 240, native_size: 240, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// cpp template
template <typename TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 3865 }), TypeDefinitionIndex(TypeDefinitionIndex(6669)),
// TypeDefinitionIndex(TypeDefinitionIndex(6236)), TypeDefinitionIndex(TypeDefinitionIndex(6215)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6236), inst: 3898 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(6216)) CS Name: ::UnityEngine.InputSystem::InputControl`1<TValue>*
class CORDL_TYPE InputControl_1 : public ::UnityEngine::InputSystem::InputControl {
public:
  // Declarations
  /// @brief Field m_ProcessorStack, offset 0xd8, size 0x18
  __declspec(property(get = __get_m_ProcessorStack,
                      put = __set_m_ProcessorStack))::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*> m_ProcessorStack;

  __declspec(property(get = get_valueType))::System::Type* valueType;

  __declspec(property(get = get_valueSizeInBytes)) int32_t valueSizeInBytes;

  __declspec(property(get = get_processors))::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<TValue>*, ::Array<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>*> processors;

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>& __get_m_ProcessorStack();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*> const& __get_m_ProcessorStack() const;

  constexpr void __set_m_ProcessorStack(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*> value);

  /// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Type* get_valueType();

  /// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_valueSizeInBytes();

  /// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValue ReadValue();

  /// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValue ReadValueFromPreviousFrame();

  /// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValue ReadDefaultValue();

  /// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValue ReadValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValue ReadUnprocessedValue();

  /// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
  inline TValue ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void> statePtr, ::cordl_internals::Ptr<void> bufferPtr, int32_t bufferSize);

  /// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void WriteValueFromBufferIntoState(::cordl_internals::Ptr<void> bufferPtr, int32_t bufferSize, ::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void WriteValueFromObjectIntoState(::System::Object* value, ::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void WriteValueIntoState(TValue value, ::cordl_internals::Ptr<void> statePtr);

  /// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void> buffer, int32_t bufferSize);

  /// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool CompareValue(::cordl_internals::Ptr<void> firstStatePtr, ::cordl_internals::Ptr<void> secondStatePtr);

  /// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValue ProcessValue(TValue value);

  /// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TProcessor> inline TProcessor TryGetProcessor();

  /// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void AddProcessor(::System::Object* processor);

  /// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<TValue>*, ::Array<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>*> get_processors();

  static inline ::UnityEngine::InputSystem::InputControl_1<TValue>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputControl_1(InputControl_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputControl_1(InputControl_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControl_1();

public:
  /// @brief Field m_ProcessorStack, offset: 0xd8, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*> ___m_ProcessorStack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::InputControl_1, "UnityEngine.InputSystem", "InputControl`1");
