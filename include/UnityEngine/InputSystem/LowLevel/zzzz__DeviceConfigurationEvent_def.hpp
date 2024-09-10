#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/DeviceConfigurationEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeviceConfigurationEvent)
namespace UnityEngine::InputSystem::LowLevel {
class IInputEventTypeInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct DeviceConfigurationEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent);
// Type: UnityEngine.InputSystem.LowLevel::DeviceConfigurationEvent
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 1, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.LowLevel::DeviceConfigurationEvent
#pragma pack(push, 0)
struct CORDL_TYPE DeviceConfigurationEvent {
public:
// Declarations
/// @brief Field baseEvent, offset 0x0, size 0x14 
 __declspec(property(get=__cordl_internal_get_baseEvent, put=__cordl_internal_set_baseEvent)) ::UnityEngine::InputSystem::LowLevel::InputEvent  baseEvent;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*() ;

/// @brief Method Create, addr 0x4577c98, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent Create(int32_t  deviceId, double_t  time) ;

/// @brief Method ToEventPtr, addr 0x4577c94, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr ToEventPtr() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& __cordl_internal_get_baseEvent() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& __cordl_internal_get_baseEvent() ;

constexpr void __cordl_internal_set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent  value) ;

/// @brief Method get_typeStatic, addr 0x4577c88, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputEventTypeInfo() ;

// Ctor Parameters []
// @brief default ctor
constexpr DeviceConfigurationEvent() ;

// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }]
constexpr DeviceConfigurationEvent(::UnityEngine::InputSystem::LowLevel::InputEvent  baseEvent) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___baseEvent_padding[0x0];
/// @brief Field baseEvent, offset: 0x0, size: 0x14, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputEvent  ___baseEvent;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___baseEvent_padding_forAlignment[0x0];
/// @brief Field baseEvent, offset: 0x0, size: 0x14, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputEvent  ___baseEvent_forAlignment;
};
};
public:

/// @brief Field Type offset 0xffffffff size 0x4
static constexpr int32_t  Type{static_cast<int32_t>(0x44434647)};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent, 0x14>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent, "UnityEngine.InputSystem.LowLevel", "DeviceConfigurationEvent");
