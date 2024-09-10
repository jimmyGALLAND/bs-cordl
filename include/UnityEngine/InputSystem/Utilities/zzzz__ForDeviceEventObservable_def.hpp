#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/ForDeviceEventObservable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ForDeviceEventObservable)
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace System {
template<typename T>
class IObserver_1;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
class __ForDeviceEventObservable__ForDevice;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class ForDeviceEventObservable;
}
namespace UnityEngine::InputSystem::Utilities {
class __ForDeviceEventObservable__ForDevice;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice);
// Type: ::ForDevice
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: ::ForDeviceEventObservable::ForDevice*
class CORDL_TYPE __ForDeviceEventObservable__ForDevice : public ::System::Object {
public:
// Declarations
/// @brief Field m_Device, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Device, put=__cordl_internal_set_m_Device)) ::UnityEngine::InputSystem::InputDevice*  m_Device;

/// @brief Field m_DeviceType, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeviceType, put=__cordl_internal_set_m_DeviceType)) ::System::Type*  m_DeviceType;

/// @brief Field m_Observer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Observer, put=__cordl_internal_set_m_Observer)) ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  m_Observer;

/// @brief Convert operator to "::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr operator  ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() noexcept;

static inline ::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice* New_ctor(::System::Type*  deviceType, ::UnityEngine::InputSystem::InputDevice*  device, ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  observer) ;

/// @brief Method OnCompleted, addr 0x44dc0a4, size 0x4, virtual true, abstract: false, final true
inline void OnCompleted() ;

/// @brief Method OnError, addr 0x44dc0a8, size 0x58, virtual true, abstract: false, final true
inline void OnError(::System::Exception*  error) ;

/// @brief Method OnNext, addr 0x44dc100, size 0x184, virtual true, abstract: false, final true
inline void OnNext(::UnityEngine::InputSystem::LowLevel::InputEventPtr  value) ;

constexpr ::UnityEngine::InputSystem::InputDevice*& __cordl_internal_get_m_Device() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputDevice*> const& __cordl_internal_get_m_Device() const;

constexpr ::System::Type*& __cordl_internal_get_m_DeviceType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_m_DeviceType() const;

constexpr ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& __cordl_internal_get_m_Observer() ;

constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const& __cordl_internal_get_m_Observer() const;

constexpr void __cordl_internal_set_m_Device(::UnityEngine::InputSystem::InputDevice*  value) ;

constexpr void __cordl_internal_set_m_DeviceType(::System::Type*  value) ;

constexpr void __cordl_internal_set_m_Observer(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value) ;

/// @brief Method .ctor, addr 0x44dc068, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  deviceType, ::UnityEngine::InputSystem::InputDevice*  device, ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  observer) ;

/// @brief Convert to "::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* i___System__IObserver_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __ForDeviceEventObservable__ForDevice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__ForDeviceEventObservable__ForDevice", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ForDeviceEventObservable__ForDevice(__ForDeviceEventObservable__ForDevice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ForDeviceEventObservable__ForDevice", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ForDeviceEventObservable__ForDevice(__ForDeviceEventObservable__ForDevice const& ) = delete;

/// @brief Field m_Observer, offset: 0x10, size: 0x8, def value: None
 ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  ___m_Observer;

/// @brief Field m_Device, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputDevice*  ___m_Device;

/// @brief Field m_DeviceType, offset: 0x20, size: 0x8, def value: None
 ::System::Type*  ___m_DeviceType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice, ___m_Observer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice, ___m_Device) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice, ___m_DeviceType) == 0x20, "Offset mismatch!");

} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ForDeviceEventObservable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Utilities::ForDeviceEventObservable*
class CORDL_TYPE ForDeviceEventObservable : public ::System::Object {
public:
// Declarations
using ForDevice = ::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice;

/// @brief Field m_Device, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Device, put=__cordl_internal_set_m_Device)) ::UnityEngine::InputSystem::InputDevice*  m_Device;

/// @brief Field m_DeviceType, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeviceType, put=__cordl_internal_set_m_DeviceType)) ::System::Type*  m_DeviceType;

/// @brief Field m_Source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Source, put=__cordl_internal_set_m_Source)) ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  m_Source;

/// @brief Convert operator to "::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr operator  ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() noexcept;

static inline ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable* New_ctor(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  source, ::System::Type*  deviceType, ::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method Subscribe, addr 0x44dbf7c, size 0xec, virtual true, abstract: false, final true
inline ::System::IDisposable* Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  observer) ;

constexpr ::UnityEngine::InputSystem::InputDevice*& __cordl_internal_get_m_Device() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputDevice*> const& __cordl_internal_get_m_Device() const;

constexpr ::System::Type*& __cordl_internal_get_m_DeviceType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_m_DeviceType() const;

constexpr ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& __cordl_internal_get_m_Source() ;

constexpr ::cordl_internals::to_const_pointer<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const& __cordl_internal_get_m_Source() const;

constexpr void __cordl_internal_set_m_Device(::UnityEngine::InputSystem::InputDevice*  value) ;

constexpr void __cordl_internal_set_m_DeviceType(::System::Type*  value) ;

constexpr void __cordl_internal_set_m_Source(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value) ;

/// @brief Method .ctor, addr 0x44dbf40, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  source, ::System::Type*  deviceType, ::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Convert to "::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* i___System__IObservable_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ForDeviceEventObservable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ForDeviceEventObservable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ForDeviceEventObservable(ForDeviceEventObservable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ForDeviceEventObservable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ForDeviceEventObservable(ForDeviceEventObservable const& ) = delete;

/// @brief Field m_Source, offset: 0x10, size: 0x8, def value: None
 ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  ___m_Source;

/// @brief Field m_Device, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputDevice*  ___m_Device;

/// @brief Field m_DeviceType, offset: 0x20, size: 0x8, def value: None
 ::System::Type*  ___m_DeviceType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable, ___m_Source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable, ___m_Device) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable, ___m_DeviceType) == 0x20, "Offset mismatch!");

} // namespace end def UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable*, "UnityEngine.InputSystem.Utilities", "ForDeviceEventObservable");
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice*, "UnityEngine.InputSystem.Utilities", "ForDeviceEventObservable/ForDevice");
