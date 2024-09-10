#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlExtensions)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBlock;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
namespace UnityEngine::InputSystem {
template<typename TValue>
class InputControl_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
struct __InputControlExtensions__ControlBuilder;
}
namespace UnityEngine::InputSystem {
struct __InputControlExtensions__DeviceBuilder;
}
namespace UnityEngine::InputSystem {
struct __InputControlExtensions__Enumerate;
}
namespace UnityEngine::InputSystem {
struct __InputControlExtensions__InputEventControlCollection;
}
namespace UnityEngine::InputSystem {
struct __InputControlExtensions__InputEventControlEnumerator;
}
namespace UnityEngine::InputSystem {
class __InputControlExtensions___GetAllButtonPresses_d__43;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct __InputControlExtensions__Enumerate;
}
namespace UnityEngine::InputSystem {
class InputControlExtensions;
}
namespace UnityEngine::InputSystem {
class __InputControlExtensions___GetAllButtonPresses_d__43;
}
namespace UnityEngine::InputSystem {
struct __InputControlExtensions__ControlBuilder;
}
namespace UnityEngine::InputSystem {
struct __InputControlExtensions__DeviceBuilder;
}
namespace UnityEngine::InputSystem {
struct __InputControlExtensions__InputEventControlCollection;
}
namespace UnityEngine::InputSystem {
struct __InputControlExtensions__InputEventControlEnumerator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::__InputControlExtensions__Enumerate);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputControlExtensions);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43);
MARK_VAL_T(::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder);
MARK_VAL_T(::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder);
MARK_VAL_T(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection);
MARK_VAL_T(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator);
// Type: ::Enumerate
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputControlExtensions::Enumerate
struct CORDL_TYPE __InputControlExtensions__Enumerate {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____InputControlExtensions__Enumerate_Unwrapped
enum struct ____InputControlExtensions__Enumerate_Unwrapped : int32_t {
__E_IgnoreControlsInDefaultState = static_cast<int32_t>(0x1),
__E_IgnoreControlsInCurrentState = static_cast<int32_t>(0x2),
__E_IncludeSyntheticControls = static_cast<int32_t>(0x4),
__E_IncludeNoisyControls = static_cast<int32_t>(0x8),
__E_IncludeNonLeafControls = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____InputControlExtensions__Enumerate_Unwrapped () const noexcept {
return static_cast<____InputControlExtensions__Enumerate_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __InputControlExtensions__Enumerate() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputControlExtensions__Enumerate(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field IgnoreControlsInCurrentState value: static_cast<int32_t>(0x2)
static ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate const IgnoreControlsInCurrentState;

/// @brief Field IgnoreControlsInDefaultState value: static_cast<int32_t>(0x1)
static ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate const IgnoreControlsInDefaultState;

/// @brief Field IncludeNoisyControls value: static_cast<int32_t>(0x8)
static ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate const IncludeNoisyControls;

/// @brief Field IncludeNonLeafControls value: static_cast<int32_t>(0x10)
static ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate const IncludeNonLeafControls;

/// @brief Field IncludeSyntheticControls value: static_cast<int32_t>(0x4)
static ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate const IncludeSyntheticControls;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlExtensions__Enumerate, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__Enumerate, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::InputEventControlCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputControlExtensions::InputEventControlCollection
struct CORDL_TYPE __InputControlExtensions__InputEventControlCollection {
public:
// Declarations
 __declspec(property(get=get_eventPtr)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method GetEnumerator, addr 0x44ec380, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator, addr 0x44ecc74, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x44ecd18, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_eventPtr, addr 0x44ecaac, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr get_eventPtr() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputControl__() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

// Ctor Parameters []
// @brief default ctor
constexpr __InputControlExtensions__InputEventControlCollection() ;

// Ctor Parameters [CppParam { name: "m_Device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None }, CppParam { name: "m_EventPtr", ty: "::UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::InputSystem::__InputControlExtensions__Enumerate", modifiers: "", def_value: None }, CppParam { name: "m_MagnitudeThreshold", ty: "float_t", modifiers: "", def_value: None }]
constexpr __InputControlExtensions__InputEventControlCollection(::UnityEngine::InputSystem::InputDevice*  m_Device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  m_EventPtr, ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate  m_Flags, float_t  m_MagnitudeThreshold) noexcept;

/// @brief Field m_Device, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputDevice*  m_Device;

/// @brief Field m_EventPtr, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputEventPtr  m_EventPtr;

/// @brief Field m_Flags, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate  m_Flags;

/// @brief Field m_MagnitudeThreshold, offset: 0x14, size: 0x4, def value: None
 float_t  m_MagnitudeThreshold;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection, m_Device) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection, m_EventPtr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection, m_Flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection, m_MagnitudeThreshold) == 0x14, "Offset mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::InputEventControlEnumerator
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 124, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputControlExtensions::InputEventControlEnumerator
struct CORDL_TYPE __InputControlExtensions__InputEventControlEnumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::InputControl*  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method CheckCurrent, addr 0x44ed228, size 0x20, virtual false, abstract: false, final false
inline bool CheckCurrent(uint32_t  numBits) ;

/// @brief Method CheckDefault, addr 0x44ed204, size 0x24, virtual false, abstract: false, final false
inline bool CheckDefault(uint32_t  numBits) ;

/// @brief Method Dispose, addr 0x44ed264, size 0x8, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x44ec3a8, size 0x384, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x44ecdbc, size 0x448, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x44ed274, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x44ecab4, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate  flags, float_t  magnitudeThreshold) ;

/// @brief Method get_Current, addr 0x44ed26c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::InputControl* get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputControl__() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr __InputControlExtensions__InputEventControlEnumerator() ;

// Ctor Parameters [CppParam { name: "m_Flags", ty: "::UnityEngine::InputSystem::__InputControlExtensions__Enumerate", modifiers: "", def_value: None }, CppParam { name: "m_Device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None }, CppParam { name: "m_StateOffsetToControlIndex", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>", modifiers: "", def_value: None }, CppParam { name: "m_StateOffsetToControlIndexLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllControls", ty: "::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>", modifiers: "", def_value: None }, CppParam { name: "m_DefaultState", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_CurrentState", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_NoiseMask", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_EventPtr", ty: "::UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: None }, CppParam { name: "m_CurrentControl", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: None }, CppParam { name: "m_CurrentIndexInStateOffsetToControlIndexMap", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentControlStateBitOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_EventState", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_CurrentBitOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_EndBitOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_MagnitudeThreshold", ty: "float_t", modifiers: "", def_value: None }]
constexpr __InputControlExtensions__InputEventControlEnumerator(::UnityEngine::InputSystem::__InputControlExtensions__Enumerate  m_Flags, ::UnityEngine::InputSystem::InputDevice*  m_Device, ::ArrayW<uint32_t,::Array<uint32_t>*>  m_StateOffsetToControlIndex, int32_t  m_StateOffsetToControlIndexLength, ::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>  m_AllControls, ::cordl_internals::Ptr<uint8_t>  m_DefaultState, ::cordl_internals::Ptr<uint8_t>  m_CurrentState, ::cordl_internals::Ptr<uint8_t>  m_NoiseMask, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  m_EventPtr, ::UnityEngine::InputSystem::InputControl*  m_CurrentControl, int32_t  m_CurrentIndexInStateOffsetToControlIndexMap, uint32_t  m_CurrentControlStateBitOffset, ::cordl_internals::Ptr<uint8_t>  m_EventState, uint32_t  m_CurrentBitOffset, uint32_t  m_EndBitOffset, float_t  m_MagnitudeThreshold) noexcept;

/// @brief Field m_Flags, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate  m_Flags;

/// @brief Field m_Device, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputDevice*  m_Device;

/// @brief Field m_StateOffsetToControlIndex, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint32_t,::Array<uint32_t>*>  m_StateOffsetToControlIndex;

/// @brief Field m_StateOffsetToControlIndexLength, offset: 0x18, size: 0x4, def value: None
 int32_t  m_StateOffsetToControlIndexLength;

/// @brief Field m_AllControls, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>  m_AllControls;

/// @brief Field m_DefaultState, offset: 0x28, size: 0x8, def value: None
 ::cordl_internals::Ptr<uint8_t>  m_DefaultState;

/// @brief Field m_CurrentState, offset: 0x30, size: 0x8, def value: None
 ::cordl_internals::Ptr<uint8_t>  m_CurrentState;

/// @brief Field m_NoiseMask, offset: 0x38, size: 0x8, def value: None
 ::cordl_internals::Ptr<uint8_t>  m_NoiseMask;

/// @brief Field m_EventPtr, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputEventPtr  m_EventPtr;

/// @brief Field m_CurrentControl, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputControl*  m_CurrentControl;

/// @brief Field m_CurrentIndexInStateOffsetToControlIndexMap, offset: 0x50, size: 0x4, def value: None
 int32_t  m_CurrentIndexInStateOffsetToControlIndexMap;

/// @brief Field m_CurrentControlStateBitOffset, offset: 0x54, size: 0x4, def value: None
 uint32_t  m_CurrentControlStateBitOffset;

/// @brief Field m_EventState, offset: 0x58, size: 0x8, def value: None
 ::cordl_internals::Ptr<uint8_t>  m_EventState;

/// @brief Field m_CurrentBitOffset, offset: 0x60, size: 0x4, def value: None
 uint32_t  m_CurrentBitOffset;

/// @brief Field m_EndBitOffset, offset: 0x64, size: 0x4, def value: None
 uint32_t  m_EndBitOffset;

/// @brief Field m_MagnitudeThreshold, offset: 0x68, size: 0x4, def value: None
 float_t  m_MagnitudeThreshold;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, m_Flags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, m_Device) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, m_StateOffsetToControlIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, m_StateOffsetToControlIndexLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, m_AllControls) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, m_DefaultState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, m_CurrentState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, m_NoiseMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, m_EventPtr) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, m_CurrentControl) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, m_CurrentIndexInStateOffsetToControlIndexMap) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, m_CurrentControlStateBitOffset) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, m_EventState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, m_CurrentBitOffset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, m_EndBitOffset) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, m_MagnitudeThreshold) == 0x68, "Offset mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::ControlBuilder
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputControlExtensions::ControlBuilder
struct CORDL_TYPE __InputControlExtensions__ControlBuilder {
public:
// Declarations
 __declspec(property(get=get_control, put=set_control)) ::UnityEngine::InputSystem::InputControl*  control;

/// @brief Method At, addr 0x44ed28c, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder At(::UnityEngine::InputSystem::InputDevice*  device, int32_t  index) ;

/// @brief Method DontReset, addr 0x44ed5a4, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder DontReset(bool  value) ;

/// @brief Method Finish, addr 0x44ed64c, size 0x24, virtual false, abstract: false, final false
inline void Finish() ;

/// @brief Method IsButton, addr 0x44ed614, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder IsButton(bool  value) ;

/// @brief Method IsNoisy, addr 0x44ed544, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder IsNoisy(bool  value) ;

/// @brief Method IsSynthetic, addr 0x44ed56c, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder IsSynthetic(bool  value) ;

/// @brief Method WithAliases, addr 0x44ed45c, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder WithAliases(int32_t  startIndex, int32_t  count) ;

/// @brief Method WithChildren, addr 0x44ed47c, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder WithChildren(int32_t  startIndex, int32_t  count) ;

/// @brief Method WithDefaultState, addr 0x44ed4bc, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder WithDefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue  value) ;

/// @brief Method WithDisplayName, addr 0x44ed37c, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder WithDisplayName(::StringW  displayName) ;

/// @brief Method WithLayout, addr 0x44ed41c, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder WithLayout(::UnityEngine::InputSystem::Utilities::InternedString  layout) ;

/// @brief Method WithMinAndMax, addr 0x44ed518, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder WithMinAndMax(::UnityEngine::InputSystem::Utilities::PrimitiveValue  min, ::UnityEngine::InputSystem::Utilities::PrimitiveValue  max) ;

/// @brief Method WithName, addr 0x44ed334, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder WithName(::StringW  name) ;

/// @brief Method WithParent, addr 0x44ed314, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder WithParent(::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method WithProcessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TProcessor,typename TValue>
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder WithProcessor(TProcessor  processor) ;

/// @brief Method WithShortDisplayName, addr 0x44ed3cc, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder WithShortDisplayName(::StringW  shortDisplayName) ;

/// @brief Method WithStateBlock, addr 0x44ed49c, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder WithStateBlock(::UnityEngine::InputSystem::LowLevel::InputStateBlock  stateBlock) ;

/// @brief Method WithUsages, addr 0x44ed43c, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder WithUsages(int32_t  startIndex, int32_t  count) ;

/// @brief Method get_control, addr 0x44ed27c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControl* get_control() ;

/// @brief Method set_control, addr 0x44ed284, size 0x8, virtual false, abstract: false, final false
inline void set_control(::UnityEngine::InputSystem::InputControl*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr __InputControlExtensions__ControlBuilder() ;

// Ctor Parameters [CppParam { name: "_control_k__BackingField", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: None }]
constexpr __InputControlExtensions__ControlBuilder(::UnityEngine::InputSystem::InputControl*  _control_k__BackingField) noexcept;

/// @brief Field <control>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputControl*  _control_k__BackingField;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, _control_k__BackingField) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::DeviceBuilder
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputControlExtensions::DeviceBuilder
struct CORDL_TYPE __InputControlExtensions__DeviceBuilder {
public:
// Declarations
 __declspec(property(get=get_device, put=set_device)) ::UnityEngine::InputSystem::InputDevice*  device;

/// @brief Method Finish, addr 0x44eda18, size 0x24, virtual false, abstract: false, final false
inline void Finish() ;

/// @brief Method IsNoisy, addr 0x44ed7c8, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder IsNoisy(bool  value) ;

/// @brief Method WithChildren, addr 0x44ed788, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder WithChildren(int32_t  startIndex, int32_t  count) ;

/// @brief Method WithControlAlias, addr 0x44ed894, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder WithControlAlias(int32_t  controlIndex, ::UnityEngine::InputSystem::Utilities::InternedString  alias) ;

/// @brief Method WithControlTree, addr 0x44ed8f4, size 0x124, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder WithControlTree(::ArrayW<uint8_t,::Array<uint8_t>*>  controlTreeNodes, ::ArrayW<uint16_t,::Array<uint16_t>*>  controlTreeIndicies) ;

/// @brief Method WithControlUsage, addr 0x44ed7f0, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder WithControlUsage(int32_t  controlIndex, ::UnityEngine::InputSystem::Utilities::InternedString  usage, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method WithDisplayName, addr 0x44ed6c8, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder WithDisplayName(::StringW  displayName) ;

/// @brief Method WithLayout, addr 0x44ed768, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder WithLayout(::UnityEngine::InputSystem::Utilities::InternedString  layout) ;

/// @brief Method WithName, addr 0x44ed680, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder WithName(::StringW  name) ;

/// @brief Method WithShortDisplayName, addr 0x44ed718, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder WithShortDisplayName(::StringW  shortDisplayName) ;

/// @brief Method WithStateBlock, addr 0x44ed7a8, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder WithStateBlock(::UnityEngine::InputSystem::LowLevel::InputStateBlock  stateBlock) ;

/// @brief Method WithStateOffsetToControlIndexMap, addr 0x44ed8d4, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder WithStateOffsetToControlIndexMap(::ArrayW<uint32_t,::Array<uint32_t>*>  map) ;

/// @brief Method get_device, addr 0x44ed670, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* get_device() ;

/// @brief Method set_device, addr 0x44ed678, size 0x8, virtual false, abstract: false, final false
inline void set_device(::UnityEngine::InputSystem::InputDevice*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr __InputControlExtensions__DeviceBuilder() ;

// Ctor Parameters [CppParam { name: "_device_k__BackingField", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None }]
constexpr __InputControlExtensions__DeviceBuilder(::UnityEngine::InputSystem::InputDevice*  _device_k__BackingField) noexcept;

/// @brief Field <device>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputDevice*  _device_k__BackingField;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder, _device_k__BackingField) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: ::<GetAllButtonPresses>d__43
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputControlExtensions::<GetAllButtonPresses>d__43*
class CORDL_TYPE __InputControlExtensions___GetAllButtonPresses_d__43 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current)) ::UnityEngine::InputSystem::InputControl*  System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityEngine::InputSystem::InputControl*  __2__current;

/// @brief Field <>3__buttonControlsOnly, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get___3__buttonControlsOnly, put=__cordl_internal_set___3__buttonControlsOnly)) bool  __3__buttonControlsOnly;

/// @brief Field <>3__eventPtr, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__eventPtr, put=__cordl_internal_set___3__eventPtr)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr  __3__eventPtr;

/// @brief Field <>3__magnitude, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get___3__magnitude, put=__cordl_internal_set___3__magnitude)) float_t  __3__magnitude;

/// @brief Field <>7__wrap1, offset 0x48, size 0x70 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator  __7__wrap1;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field buttonControlsOnly, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_buttonControlsOnly, put=__cordl_internal_set_buttonControlsOnly)) bool  buttonControlsOnly;

/// @brief Field eventPtr, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventPtr, put=__cordl_internal_set_eventPtr)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr;

/// @brief Field magnitude, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_magnitude, put=__cordl_internal_set_magnitude)) float_t  magnitude;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x44eda60, size 0x23c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator, addr 0x44edcf4, size 0xac, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControl__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControl>.get_Current, addr 0x44edcac, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::InputControl* System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControl__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x44edda0, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x44edcb4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x44edcec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x44eda3c, size 0x24, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityEngine::InputSystem::InputControl*& __cordl_internal_get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputControl*> const& __cordl_internal_get___2__current() const;

constexpr bool const& __cordl_internal_get___3__buttonControlsOnly() const;

constexpr bool& __cordl_internal_get___3__buttonControlsOnly() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& __cordl_internal_get___3__eventPtr() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& __cordl_internal_get___3__eventPtr() ;

constexpr float_t const& __cordl_internal_get___3__magnitude() const;

constexpr float_t& __cordl_internal_get___3__magnitude() ;

constexpr ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator const& __cordl_internal_get___7__wrap1() const;

constexpr ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr bool const& __cordl_internal_get_buttonControlsOnly() const;

constexpr bool& __cordl_internal_get_buttonControlsOnly() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& __cordl_internal_get_eventPtr() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& __cordl_internal_get_eventPtr() ;

constexpr float_t const& __cordl_internal_get_magnitude() const;

constexpr float_t& __cordl_internal_get_magnitude() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityEngine::InputSystem::InputControl*  value) ;

constexpr void __cordl_internal_set___3__buttonControlsOnly(bool  value) ;

constexpr void __cordl_internal_set___3__eventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr  value) ;

constexpr void __cordl_internal_set___3__magnitude(float_t  value) ;

constexpr void __cordl_internal_set___7__wrap1(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_buttonControlsOnly(bool  value) ;

constexpr void __cordl_internal_set_eventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr  value) ;

constexpr void __cordl_internal_set_magnitude(float_t  value) ;

/// @brief Method <>m__Finally1, addr 0x44edc9c, size 0x10, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method .ctor, addr 0x44ec7c0, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputControl__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputControl__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __InputControlExtensions___GetAllButtonPresses_d__43() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__InputControlExtensions___GetAllButtonPresses_d__43", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputControlExtensions___GetAllButtonPresses_d__43(__InputControlExtensions___GetAllButtonPresses_d__43 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputControlExtensions___GetAllButtonPresses_d__43", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputControlExtensions___GetAllButtonPresses_d__43(__InputControlExtensions___GetAllButtonPresses_d__43 const& ) = delete;

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputControl*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field eventPtr, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputEventPtr  ___eventPtr;

/// @brief Field <>3__eventPtr, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputEventPtr  _____3__eventPtr;

/// @brief Field magnitude, offset: 0x38, size: 0x4, def value: None
 float_t  ___magnitude;

/// @brief Field <>3__magnitude, offset: 0x3c, size: 0x4, def value: None
 float_t  _____3__magnitude;

/// @brief Field buttonControlsOnly, offset: 0x40, size: 0x1, def value: None
 bool  ___buttonControlsOnly;

/// @brief Field <>3__buttonControlsOnly, offset: 0x41, size: 0x1, def value: None
 bool  _____3__buttonControlsOnly;

/// @brief Field <>7__wrap1, offset: 0x48, size: 0x70, def value: None
 ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43, 0xb8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43, ___eventPtr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43, _____3__eventPtr) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43, ___magnitude) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43, _____3__magnitude) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43, ___buttonControlsOnly) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43, _____3__buttonControlsOnly) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43, _____7__wrap1) == 0x48, "Offset mismatch!");

} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControlExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::InputControlExtensions*
class CORDL_TYPE InputControlExtensions : public ::System::Object {
public:
// Declarations
using ControlBuilder = ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder;

using DeviceBuilder = ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder;

using Enumerate = ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate;

using InputEventControlCollection = ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection;

using InputEventControlEnumerator = ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator;

using _GetAllButtonPresses_d__43 = ::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43;

/// @brief Method AccumulateValueInEvent, addr 0x44ebd68, size 0x100, virtual false, abstract: false, final false
static inline void AccumulateValueInEvent(::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>*  control, ::cordl_internals::Ptr<void>  currentStatePtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  newState) ;

/// @brief Method AccumulateValueInEvent, addr 0x44ebc6c, size 0xfc, virtual false, abstract: false, final false
static inline void AccumulateValueInEvent(::UnityEngine::InputSystem::InputControl_1<float_t>*  control, ::cordl_internals::Ptr<void>  currentStatePtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  newState) ;

/// @brief Method BuildPath, addr 0x44ebe68, size 0x2d0, virtual false, abstract: false, final false
static inline ::StringW BuildPath(::UnityEngine::InputSystem::InputControl*  control, ::StringW  deviceLayout, ::System::Text::StringBuilder*  builder) ;

/// @brief Method CheckStateIsAtDefault, addr 0x44eaa80, size 0x74, virtual false, abstract: false, final false
static inline bool CheckStateIsAtDefault(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method CheckStateIsAtDefault, addr 0x44eb128, size 0xd8, virtual false, abstract: false, final false
static inline bool CheckStateIsAtDefault(::UnityEngine::InputSystem::InputControl*  control, ::cordl_internals::Ptr<void>  statePtr, ::cordl_internals::Ptr<void>  maskPtr) ;

/// @brief Method CheckStateIsAtDefaultIgnoringNoise, addr 0x44eb368, size 0x70, virtual false, abstract: false, final false
static inline bool CheckStateIsAtDefaultIgnoringNoise(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method CheckStateIsAtDefaultIgnoringNoise, addr 0x44eb3d8, size 0xc8, virtual false, abstract: false, final false
static inline bool CheckStateIsAtDefaultIgnoringNoise(::UnityEngine::InputSystem::InputControl*  control, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method CompareState, addr 0x44eb200, size 0x168, virtual false, abstract: false, final false
static inline bool CompareState(::UnityEngine::InputSystem::InputControl*  control, ::cordl_internals::Ptr<void>  firstStatePtr, ::cordl_internals::Ptr<void>  secondStatePtr, ::cordl_internals::Ptr<void>  maskPtr) ;

/// @brief Method CompareState, addr 0x44eb584, size 0xac, virtual false, abstract: false, final false
static inline bool CompareState(::UnityEngine::InputSystem::InputControl*  control, ::cordl_internals::Ptr<void>  statePtr, ::cordl_internals::Ptr<void>  maskPtr) ;

/// @brief Method CompareStateIgnoringNoise, addr 0x44eb4a0, size 0xe4, virtual false, abstract: false, final false
static inline bool CompareStateIgnoringNoise(::UnityEngine::InputSystem::InputControl*  control, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method CopyState, addr 0x44eafa8, size 0x180, virtual false, abstract: false, final false
static inline void CopyState(::UnityEngine::InputSystem::InputDevice*  device, ::cordl_internals::Ptr<void>  buffer, int32_t  bufferSizeInBytes) ;

/// @brief Method CopyState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TState>
static inline void CopyState(::UnityEngine::InputSystem::InputDevice*  device, ByRef<TState>  state) ;

/// @brief Method EnumerateChangedControls, addr 0x44ec32c, size 0x38, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection EnumerateChangedControls(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::InputDevice*  device, float_t  magnitudeThreshold) ;

/// @brief Method EnumerateControls, addr 0x44ec138, size 0x1f4, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection EnumerateControls(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::__InputControlExtensions__Enumerate  flags, ::UnityEngine::InputSystem::InputDevice*  device, float_t  magnitudeThreshold) ;

/// @brief Method FindControlsRecursive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
static inline void FindControlsRecursive(::UnityEngine::InputSystem::InputControl*  parent, ::System::Collections::Generic::IList_1<TControl>*  controls, ::System::Func_2<TControl,bool>*  predicate) ;

/// @brief Method FindInParentChain, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TControl>
static inline TControl FindInParentChain(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method GetAllButtonPresses, addr 0x44ec72c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>* GetAllButtonPresses(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, float_t  magnitude, bool  buttonControlsOnly) ;

/// @brief Method GetFirstButtonPressOrNull, addr 0x44e87c0, size 0x194, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputControl* GetFirstButtonPressOrNull(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, float_t  magnitude, bool  buttonControlsOnly) ;

/// @brief Method GetStatePtrFromStateEvent, addr 0x44eaccc, size 0xb8, virtual false, abstract: false, final false
static inline ::cordl_internals::Ptr<void> GetStatePtrFromStateEvent(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// @brief Method GetStatePtrFromStateEventUnchecked, addr 0x44eb7b4, size 0x2f8, virtual false, abstract: false, final false
static inline ::cordl_internals::Ptr<void> GetStatePtrFromStateEventUnchecked(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::Utilities::FourCC  eventType) ;

/// @brief Method HasButtonPress, addr 0x44ec364, size 0x1c, virtual false, abstract: false, final false
static inline bool HasButtonPress(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, float_t  magnitude, bool  buttonControlsOnly) ;

/// @brief Method HasValueChangeInEvent, addr 0x44eb6dc, size 0xd8, virtual false, abstract: false, final false
static inline bool HasValueChangeInEvent(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// @brief Method HasValueChangeInState, addr 0x44eb630, size 0xac, virtual false, abstract: false, final false
static inline bool HasValueChangeInState(::UnityEngine::InputSystem::InputControl*  control, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method IsActuated, addr 0x44ea9b4, size 0xcc, virtual false, abstract: false, final false
static inline bool IsActuated(::UnityEngine::InputSystem::InputControl*  control, float_t  threshold) ;

/// @brief Method IsPressed, addr 0x44ea870, size 0x144, virtual false, abstract: false, final false
static inline bool IsPressed(::UnityEngine::InputSystem::InputControl*  control, float_t  buttonPressPoint) ;

/// @brief Method QueueValueChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
static inline void QueueValueChange(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, TValue  value, double_t  time) ;

/// @brief Method ReadDefaultValueAsObject, addr 0x44eaba8, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Object* ReadDefaultValueAsObject(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ReadUnprocessedValueFromEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
static inline TValue ReadUnprocessedValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// @brief Method ReadUnprocessedValueFromEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
static inline bool ReadUnprocessedValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  inputEvent, ByRef<TValue>  value) ;

/// @brief Method ReadValueAsObject, addr 0x44e96fc, size 0x78, virtual false, abstract: false, final false
static inline ::System::Object* ReadValueAsObject(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ReadValueFromEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
static inline TValue ReadValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  inputEvent) ;

/// @brief Method ReadValueFromEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
static inline bool ReadValueFromEvent(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  inputEvent, ByRef<TValue>  value) ;

/// @brief Method ReadValueFromEventAsObject, addr 0x44eac4c, size 0x80, virtual false, abstract: false, final false
static inline ::System::Object* ReadValueFromEventAsObject(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  inputEvent) ;

/// @brief Method ReadValueIntoBuffer, addr 0x44eaaf4, size 0xb4, virtual false, abstract: false, final false
static inline void ReadValueIntoBuffer(::UnityEngine::InputSystem::InputControl*  control, ::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method ResetToDefaultStateInEvent, addr 0x44ebab8, size 0x1b4, virtual false, abstract: false, final false
static inline bool ResetToDefaultStateInEvent(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// @brief Method Setup, addr 0x44ec7f4, size 0xc4, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder Setup(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Setup, addr 0x44ec8b8, size 0x1f4, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder Setup(::UnityEngine::InputSystem::InputDevice*  device, int32_t  controlCount, int32_t  usageCount, int32_t  aliasCount) ;

/// @brief Method WriteValueFromObjectIntoEvent, addr 0x44ead84, size 0x90, virtual false, abstract: false, final false
static inline void WriteValueFromObjectIntoEvent(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::System::Object*  value) ;

/// @brief Method WriteValueIntoEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
static inline void WriteValueIntoEvent(::UnityEngine::InputSystem::InputControl*  control, TValue  value, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// @brief Method WriteValueIntoEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
static inline void WriteValueIntoEvent(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, TValue  value, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// @brief Method WriteValueIntoState, addr 0x44eae14, size 0x194, virtual false, abstract: false, final false
static inline void WriteValueIntoState(::UnityEngine::InputSystem::InputControl*  control, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
static inline void WriteValueIntoState(::UnityEngine::InputSystem::InputControl*  control, TValue  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
static inline void WriteValueIntoState(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue,typename TState>
static inline void WriteValueIntoState(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, TValue  value, ByRef<TState>  state) ;

/// @brief Method WriteValueIntoState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
static inline void WriteValueIntoState(::UnityEngine::InputSystem::InputControl_1<TValue>*  control, TValue  value, ::cordl_internals::Ptr<void>  statePtr) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputControlExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputControlExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControlExtensions(InputControlExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControlExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControlExtensions(InputControlExtensions const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputControlExtensions, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlExtensions__Enumerate, "UnityEngine.InputSystem", "InputControlExtensions/Enumerate");
NEED_NO_BOX(::UnityEngine::InputSystem::InputControlExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControlExtensions*, "UnityEngine.InputSystem", "InputControlExtensions");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlExtensions___GetAllButtonPresses_d__43*, "UnityEngine.InputSystem", "InputControlExtensions/<GetAllButtonPresses>d__43");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlExtensions__ControlBuilder, "UnityEngine.InputSystem", "InputControlExtensions/ControlBuilder");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlExtensions__DeviceBuilder, "UnityEngine.InputSystem", "InputControlExtensions/DeviceBuilder");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlCollection, "UnityEngine.InputSystem", "InputControlExtensions/InputEventControlCollection");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControlExtensions__InputEventControlEnumerator, "UnityEngine.InputSystem", "InputControlExtensions/InputEventControlEnumerator");
