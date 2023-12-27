#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputEventBuffer)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class ICloneable;
}
namespace Unity::Collections {
struct Allocator;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputEventBuffer__Enumerator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputEventBuffer__Enumerator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputEventBuffer);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__InputEventBuffer__Enumerator);
// Type: ::Enumerator
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6531))
// CS Name: ::InputEventBuffer::Enumerator
struct CORDL_TYPE __InputEventBuffer__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current))::UnityEngine::InputSystem::LowLevel::InputEventPtr Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor addr 0x2aeaf5c size 0x38 virtual false final false
  inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputEventBuffer buffer);

  /// @brief Method MoveNext addr 0x2aeb14c size 0x6c virtual true final true
  inline bool MoveNext();

  /// @brief Method Reset addr 0x2aeb1b8 size 0xc virtual true final true
  inline void Reset();

  /// @brief Method Dispose addr 0x2aeb1c4 size 0x4 virtual true final true
  inline void Dispose();

  /// @brief Method get_Current addr 0x2aeb1c8 size 0x8 virtual true final true
  inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2aeb1d0 size 0x5c virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None }, CppParam { name: "m_EventCount",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentEvent", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None
  // }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputEventBuffer__Enumerator(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_Buffer, int32_t m_EventCount,
                                           ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentEvent, int32_t m_CurrentIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputEventBuffer__Enumerator();

  /// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_Buffer;

  /// @brief Field m_EventCount, offset: 0x8, size: 0x4, def value: None
  int32_t m_EventCount;

  /// @brief Field m_CurrentEvent, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentEvent;

  /// @brief Field m_CurrentIndex, offset: 0x18, size: 0x4, def value: None
  int32_t m_CurrentIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputEventBuffer__Enumerator, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputEventBuffer
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 45, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9999)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 741 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6532))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputEventBuffer
struct CORDL_TYPE InputEventBuffer {
public:
  // Declarations
  using Enumerator = ::UnityEngine::InputSystem::LowLevel::__InputEventBuffer__Enumerator;

  __declspec(property(get = get_eventCount)) int32_t eventCount;

  __declspec(property(get = get_sizeInBytes)) int64_t sizeInBytes;

  __declspec(property(get = get_capacityInBytes)) int64_t capacityInBytes;

  __declspec(property(get = get_data))::Unity::Collections::NativeArray_1<uint8_t> data;

  __declspec(property(get = get_bufferPtr))::UnityEngine::InputSystem::LowLevel::InputEventPtr bufferPtr;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*();

  /// @brief Method get_eventCount addr 0x2aea6f8 size 0x8 virtual false final false
  inline int32_t get_eventCount();

  /// @brief Method get_sizeInBytes addr 0x2aea700 size 0x8 virtual false final false
  inline int64_t get_sizeInBytes();

  /// @brief Method get_capacityInBytes addr 0x2aea708 size 0x5c virtual false final false
  inline int64_t get_capacityInBytes();

  /// @brief Method get_data addr 0x2aea764 size 0xc virtual false final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> get_data();

  /// @brief Method get_bufferPtr addr 0x2aea770 size 0x48 virtual false final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr get_bufferPtr();

  /// @brief Method .ctor addr 0x2aea7bc size 0x1c0 virtual false final false
  inline void _ctor(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr, int32_t eventCount, int32_t sizeInBytes, int32_t capacityInBytes);

  /// @brief Method .ctor addr 0x2aea97c size 0x14c virtual false final false
  inline void _ctor(::Unity::Collections::NativeArray_1<uint8_t> buffer, int32_t eventCount, int32_t sizeInBytes, bool transferNativeArrayOwnership);

  /// @brief Method AppendEvent addr 0x2aeaac8 size 0x80 virtual false final false
  inline void AppendEvent(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr, int32_t capacityIncrementInBytes, ::Unity::Collections::Allocator allocator);

  /// @brief Method AllocateEvent addr 0x2aeab48 size 0x2c8 virtual false final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> AllocateEvent(int32_t sizeInBytes, int32_t capacityIncrementInBytes, ::Unity::Collections::Allocator allocator);

  /// @brief Method Contains addr 0x2aea61c size 0x88 virtual false final false
  inline bool Contains(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr);

  /// @brief Method Reset addr 0x2aeae10 size 0x18 virtual false final false
  inline void Reset();

  /// @brief Method AdvanceToNextEvent addr 0x2aeae28 size 0xc0 virtual false final false
  inline void AdvanceToNextEvent(ByRef<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>> currentReadPos,
                                 ByRef<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>> currentWritePos, ByRef<int32_t> numEventsRetainedInBuffer,
                                 ByRef<int32_t> numRemainingEvents, bool leaveEventInBuffer);

  /// @brief Method GetEnumerator addr 0x2aeaee8 size 0x74 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2aeaf94 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Dispose addr 0x2aeaf98 size 0x60 virtual true final true
  inline void Dispose();

  /// @brief Method Clone addr 0x2aeaff8 size 0xe8 virtual false final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventBuffer Clone();

  /// @brief Method System.ICloneable.Clone addr 0x2aeb0e0 size 0x68 virtual true final true
  inline ::System::Object* System_ICloneable_Clone();

  // Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_SizeInBytes", ty: "int64_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_EventCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_WeOwnTheBuffer", ty: "bool", modifiers: "", def_value: None }]
  constexpr InputEventBuffer(::Unity::Collections::NativeArray_1<uint8_t> m_Buffer, int64_t m_SizeInBytes, int32_t m_EventCount, bool m_WeOwnTheBuffer) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEventBuffer();

  /// @brief Field m_Buffer, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> m_Buffer;

  /// @brief Field m_SizeInBytes, offset: 0x10, size: 0x8, def value: None
  int64_t m_SizeInBytes;

  /// @brief Field m_EventCount, offset: 0x18, size: 0x4, def value: None
  int32_t m_EventCount;

  /// @brief Field m_WeOwnTheBuffer, offset: 0x1c, size: 0x1, def value: None
  bool m_WeOwnTheBuffer;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field BufferSizeUnknown offset 0xffffffff size 0x8
  static constexpr int64_t BufferSizeUnknown{ static_cast<int64_t>(0xffffffffffffffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventBuffer, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventBuffer, "UnityEngine.InputSystem.LowLevel", "InputEventBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputEventBuffer__Enumerator, "UnityEngine.InputSystem.LowLevel", "InputEventBuffer/Enumerator");
