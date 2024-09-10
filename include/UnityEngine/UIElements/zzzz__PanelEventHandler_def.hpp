#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__PenStatus_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelEventHandler)
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::EventSystems {
class ICancelHandler;
}
namespace UnityEngine::EventSystems {
class IDeselectHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IMoveHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class IPointerMoveHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class IScrollHandler;
}
namespace UnityEngine::EventSystems {
class ISelectHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
class BlurEvent;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FocusEvent;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class IRuntimePanelComponent;
}
namespace UnityEngine::UIElements {
struct __NavigationMoveEvent__Direction;
}
namespace UnityEngine::UIElements {
struct __PanelEventHandler__PointerEventType;
}
namespace UnityEngine::UIElements {
class __PanelEventHandler__PointerEvent;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct PenStatus;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __PanelEventHandler__PointerEventType;
}
namespace UnityEngine::UIElements {
class PanelEventHandler;
}
namespace UnityEngine::UIElements {
class __PanelEventHandler__PointerEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__PanelEventHandler__PointerEventType);
MARK_REF_PTR_T(::UnityEngine::UIElements::PanelEventHandler);
MARK_REF_PTR_T(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent);
// Type: ::PointerEventType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::PanelEventHandler::PointerEventType
struct CORDL_TYPE __PanelEventHandler__PointerEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____PanelEventHandler__PointerEventType_Unwrapped
enum struct ____PanelEventHandler__PointerEventType_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Down = static_cast<int32_t>(0x1),
__E_Up = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____PanelEventHandler__PointerEventType_Unwrapped () const noexcept {
return static_cast<____PanelEventHandler__PointerEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __PanelEventHandler__PointerEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __PanelEventHandler__PointerEventType(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Default value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType const Default;

/// @brief Field Down value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType const Down;

/// @brief Field Up value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType const Up;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PanelEventHandler__PointerEventType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEventType, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::PointerEvent
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::PanelEventHandler::PointerEvent*
class CORDL_TYPE __PanelEventHandler__PointerEvent : public ::System::Object {
public:
// Declarations
/// @brief Field <altitudeAngle>k__BackingField, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__altitudeAngle_k__BackingField, put=__cordl_internal_set__altitudeAngle_k__BackingField)) float_t  _altitudeAngle_k__BackingField;

/// @brief Field <azimuthAngle>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__azimuthAngle_k__BackingField, put=__cordl_internal_set__azimuthAngle_k__BackingField)) float_t  _azimuthAngle_k__BackingField;

/// @brief Field <button>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__button_k__BackingField, put=__cordl_internal_set__button_k__BackingField)) int32_t  _button_k__BackingField;

/// @brief Field <clickCount>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__clickCount_k__BackingField, put=__cordl_internal_set__clickCount_k__BackingField)) int32_t  _clickCount_k__BackingField;

/// @brief Field <deltaPosition>k__BackingField, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get__deltaPosition_k__BackingField, put=__cordl_internal_set__deltaPosition_k__BackingField)) ::UnityEngine::Vector3  _deltaPosition_k__BackingField;

/// @brief Field <deltaTime>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__deltaTime_k__BackingField, put=__cordl_internal_set__deltaTime_k__BackingField)) float_t  _deltaTime_k__BackingField;

/// @brief Field <isPrimary>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__isPrimary_k__BackingField, put=__cordl_internal_set__isPrimary_k__BackingField)) bool  _isPrimary_k__BackingField;

/// @brief Field <localPosition>k__BackingField, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get__localPosition_k__BackingField, put=__cordl_internal_set__localPosition_k__BackingField)) ::UnityEngine::Vector3  _localPosition_k__BackingField;

/// @brief Field <modifiers>k__BackingField, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__modifiers_k__BackingField, put=__cordl_internal_set__modifiers_k__BackingField)) ::UnityEngine::EventModifiers  _modifiers_k__BackingField;

/// @brief Field <penStatus>k__BackingField, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__penStatus_k__BackingField, put=__cordl_internal_set__penStatus_k__BackingField)) ::UnityEngine::PenStatus  _penStatus_k__BackingField;

/// @brief Field <pointerId>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__pointerId_k__BackingField, put=__cordl_internal_set__pointerId_k__BackingField)) int32_t  _pointerId_k__BackingField;

/// @brief Field <pointerType>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointerType_k__BackingField, put=__cordl_internal_set__pointerType_k__BackingField)) ::StringW  _pointerType_k__BackingField;

/// @brief Field <position>k__BackingField, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get__position_k__BackingField, put=__cordl_internal_set__position_k__BackingField)) ::UnityEngine::Vector3  _position_k__BackingField;

/// @brief Field <pressedButtons>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__pressedButtons_k__BackingField, put=__cordl_internal_set__pressedButtons_k__BackingField)) int32_t  _pressedButtons_k__BackingField;

/// @brief Field <pressure>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__pressure_k__BackingField, put=__cordl_internal_set__pressure_k__BackingField)) float_t  _pressure_k__BackingField;

/// @brief Field <radiusVariance>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__radiusVariance_k__BackingField, put=__cordl_internal_set__radiusVariance_k__BackingField)) ::UnityEngine::Vector2  _radiusVariance_k__BackingField;

/// @brief Field <radius>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__radius_k__BackingField, put=__cordl_internal_set__radius_k__BackingField)) ::UnityEngine::Vector2  _radius_k__BackingField;

/// @brief Field <tangentialPressure>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__tangentialPressure_k__BackingField, put=__cordl_internal_set__tangentialPressure_k__BackingField)) float_t  _tangentialPressure_k__BackingField;

/// @brief Field <tilt>k__BackingField, offset 0x6c, size 0x8 
 __declspec(property(get=__cordl_internal_get__tilt_k__BackingField, put=__cordl_internal_set__tilt_k__BackingField)) ::UnityEngine::Vector2  _tilt_k__BackingField;

/// @brief Field <twist>k__BackingField, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__twist_k__BackingField, put=__cordl_internal_set__twist_k__BackingField)) float_t  _twist_k__BackingField;

 __declspec(property(get=get_actionKey)) bool  actionKey;

 __declspec(property(get=get_altKey)) bool  altKey;

 __declspec(property(get=get_altitudeAngle, put=set_altitudeAngle)) float_t  altitudeAngle;

 __declspec(property(get=get_azimuthAngle, put=set_azimuthAngle)) float_t  azimuthAngle;

 __declspec(property(get=get_button, put=set_button)) int32_t  button;

 __declspec(property(get=get_clickCount, put=set_clickCount)) int32_t  clickCount;

 __declspec(property(get=get_commandKey)) bool  commandKey;

 __declspec(property(get=get_ctrlKey)) bool  ctrlKey;

 __declspec(property(get=get_deltaPosition, put=set_deltaPosition)) ::UnityEngine::Vector3  deltaPosition;

 __declspec(property(get=get_deltaTime, put=set_deltaTime)) float_t  deltaTime;

 __declspec(property(get=get_isPrimary, put=set_isPrimary)) bool  isPrimary;

 __declspec(property(get=get_localPosition, put=set_localPosition)) ::UnityEngine::Vector3  localPosition;

 __declspec(property(get=get_modifiers, put=set_modifiers)) ::UnityEngine::EventModifiers  modifiers;

 __declspec(property(get=get_penStatus, put=set_penStatus)) ::UnityEngine::PenStatus  penStatus;

 __declspec(property(get=get_pointerId, put=set_pointerId)) int32_t  pointerId;

 __declspec(property(get=get_pointerType, put=set_pointerType)) ::StringW  pointerType;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_pressedButtons, put=set_pressedButtons)) int32_t  pressedButtons;

 __declspec(property(get=get_pressure, put=set_pressure)) float_t  pressure;

 __declspec(property(get=get_radius, put=set_radius)) ::UnityEngine::Vector2  radius;

 __declspec(property(get=get_radiusVariance, put=set_radiusVariance)) ::UnityEngine::Vector2  radiusVariance;

 __declspec(property(get=get_shiftKey)) bool  shiftKey;

 __declspec(property(get=get_tangentialPressure, put=set_tangentialPressure)) float_t  tangentialPressure;

 __declspec(property(get=get_tilt, put=set_tilt)) ::UnityEngine::Vector2  tilt;

 __declspec(property(get=get_twist, put=set_twist)) float_t  twist;

/// @brief Convert operator to "::UnityEngine::UIElements::IPointerEvent"
constexpr operator  ::UnityEngine::UIElements::IPointerEvent*() noexcept;

static inline ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent* New_ctor() ;

/// @brief Method Read, addr 0x4a3f96c, size 0x4c4, virtual false, abstract: false, final false
inline void Read(::UnityEngine::UIElements::PanelEventHandler*  self, ::UnityEngine::EventSystems::PointerEventData*  eventData, ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType  eventType) ;

/// @brief Method SetPosition, addr 0x4a3fe30, size 0x18, virtual false, abstract: false, final false
inline void SetPosition(::UnityEngine::Vector3  positionOverride, ::UnityEngine::Vector3  deltaOverride) ;

/// @brief Method <Read>g__InRange|90_0, addr 0x4a4010c, size 0x1c, virtual false, abstract: false, final false
static inline bool _Read_g__InRange_90_0(int32_t  i, int32_t  start, int32_t  count) ;

constexpr float_t const& __cordl_internal_get__altitudeAngle_k__BackingField() const;

constexpr float_t& __cordl_internal_get__altitudeAngle_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__azimuthAngle_k__BackingField() const;

constexpr float_t& __cordl_internal_get__azimuthAngle_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__button_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__button_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__clickCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__clickCount_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__deltaPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__deltaPosition_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__deltaTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__deltaTime_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isPrimary_k__BackingField() const;

constexpr bool& __cordl_internal_get__isPrimary_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__localPosition_k__BackingField() ;

constexpr ::UnityEngine::EventModifiers const& __cordl_internal_get__modifiers_k__BackingField() const;

constexpr ::UnityEngine::EventModifiers& __cordl_internal_get__modifiers_k__BackingField() ;

constexpr ::UnityEngine::PenStatus const& __cordl_internal_get__penStatus_k__BackingField() const;

constexpr ::UnityEngine::PenStatus& __cordl_internal_get__penStatus_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__pointerId_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__pointerId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__pointerType_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__pointerType_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__position_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__pressedButtons_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__pressedButtons_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__pressure_k__BackingField() const;

constexpr float_t& __cordl_internal_get__pressure_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__radiusVariance_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__radiusVariance_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__radius_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__radius_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__tangentialPressure_k__BackingField() const;

constexpr float_t& __cordl_internal_get__tangentialPressure_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__tilt_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__tilt_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__twist_k__BackingField() const;

constexpr float_t& __cordl_internal_get__twist_k__BackingField() ;

constexpr void __cordl_internal_set__altitudeAngle_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__azimuthAngle_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__button_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__clickCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__deltaPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__deltaTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__isPrimary_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__localPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__modifiers_k__BackingField(::UnityEngine::EventModifiers  value) ;

constexpr void __cordl_internal_set__penStatus_k__BackingField(::UnityEngine::PenStatus  value) ;

constexpr void __cordl_internal_set__pointerId_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__pointerType_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__position_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__pressedButtons_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__pressure_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__radiusVariance_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__radius_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__tangentialPressure_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__tilt_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__twist_k__BackingField(float_t  value) ;

/// @brief Method .ctor, addr 0x4a3fedc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_actionKey, addr 0x4a40078, size 0x94, virtual true, abstract: false, final true
inline bool get_actionKey() ;

/// @brief Method get_altKey, addr 0x4a4006c, size 0xc, virtual true, abstract: false, final true
inline bool get_altKey() ;

/// @brief Method get_altitudeAngle, addr 0x4a3ffc8, size 0x8, virtual true, abstract: false, final true
inline float_t get_altitudeAngle() ;

/// @brief Method get_azimuthAngle, addr 0x4a3ffd8, size 0x8, virtual true, abstract: false, final true
inline float_t get_azimuthAngle() ;

/// @brief Method get_button, addr 0x4a3ff20, size 0x8, virtual true, abstract: false, final true
inline int32_t get_button() ;

/// @brief Method get_clickCount, addr 0x4a3ff98, size 0x8, virtual true, abstract: false, final true
inline int32_t get_clickCount() ;

/// @brief Method get_commandKey, addr 0x4a40060, size 0xc, virtual true, abstract: false, final true
inline bool get_commandKey() ;

/// @brief Method get_ctrlKey, addr 0x4a40054, size 0xc, virtual true, abstract: false, final true
inline bool get_ctrlKey() ;

/// @brief Method get_deltaPosition, addr 0x4a3ff70, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_deltaPosition() ;

/// @brief Method get_deltaTime, addr 0x4a3ff88, size 0x8, virtual true, abstract: false, final true
inline float_t get_deltaTime() ;

/// @brief Method get_isPrimary, addr 0x4a3ff0c, size 0x8, virtual true, abstract: false, final true
inline bool get_isPrimary() ;

/// @brief Method get_localPosition, addr 0x4a3ff58, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_localPosition() ;

/// @brief Method get_modifiers, addr 0x4a40038, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::EventModifiers get_modifiers() ;

/// @brief Method get_penStatus, addr 0x4a40008, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::PenStatus get_penStatus() ;

/// @brief Method get_pointerId, addr 0x4a3feec, size 0x8, virtual true, abstract: false, final true
inline int32_t get_pointerId() ;

/// @brief Method get_pointerType, addr 0x4a3fefc, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_pointerType() ;

/// @brief Method get_position, addr 0x4a3ff40, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_pressedButtons, addr 0x4a3ff30, size 0x8, virtual true, abstract: false, final true
inline int32_t get_pressedButtons() ;

/// @brief Method get_pressure, addr 0x4a3ffa8, size 0x8, virtual true, abstract: false, final true
inline float_t get_pressure() ;

/// @brief Method get_radius, addr 0x4a40018, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_radius() ;

/// @brief Method get_radiusVariance, addr 0x4a40028, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_radiusVariance() ;

/// @brief Method get_shiftKey, addr 0x4a40048, size 0xc, virtual true, abstract: false, final true
inline bool get_shiftKey() ;

/// @brief Method get_tangentialPressure, addr 0x4a3ffb8, size 0x8, virtual true, abstract: false, final true
inline float_t get_tangentialPressure() ;

/// @brief Method get_tilt, addr 0x4a3fff8, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_tilt() ;

/// @brief Method get_twist, addr 0x4a3ffe8, size 0x8, virtual true, abstract: false, final true
inline float_t get_twist() ;

/// @brief Convert to "::UnityEngine::UIElements::IPointerEvent"
constexpr ::UnityEngine::UIElements::IPointerEvent* i___UnityEngine__UIElements__IPointerEvent() noexcept;

/// @brief Method set_altitudeAngle, addr 0x4a3ffd0, size 0x8, virtual false, abstract: false, final false
inline void set_altitudeAngle(float_t  value) ;

/// @brief Method set_azimuthAngle, addr 0x4a3ffe0, size 0x8, virtual false, abstract: false, final false
inline void set_azimuthAngle(float_t  value) ;

/// @brief Method set_button, addr 0x4a3ff28, size 0x8, virtual false, abstract: false, final false
inline void set_button(int32_t  value) ;

/// @brief Method set_clickCount, addr 0x4a3ffa0, size 0x8, virtual false, abstract: false, final false
inline void set_clickCount(int32_t  value) ;

/// @brief Method set_deltaPosition, addr 0x4a3ff7c, size 0xc, virtual false, abstract: false, final false
inline void set_deltaPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_deltaTime, addr 0x4a3ff90, size 0x8, virtual false, abstract: false, final false
inline void set_deltaTime(float_t  value) ;

/// @brief Method set_isPrimary, addr 0x4a3ff14, size 0xc, virtual false, abstract: false, final false
inline void set_isPrimary(bool  value) ;

/// @brief Method set_localPosition, addr 0x4a3ff64, size 0xc, virtual false, abstract: false, final false
inline void set_localPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_modifiers, addr 0x4a40040, size 0x8, virtual false, abstract: false, final false
inline void set_modifiers(::UnityEngine::EventModifiers  value) ;

/// @brief Method set_penStatus, addr 0x4a40010, size 0x8, virtual false, abstract: false, final false
inline void set_penStatus(::UnityEngine::PenStatus  value) ;

/// @brief Method set_pointerId, addr 0x4a3fef4, size 0x8, virtual false, abstract: false, final false
inline void set_pointerId(int32_t  value) ;

/// @brief Method set_pointerType, addr 0x4a3ff04, size 0x8, virtual false, abstract: false, final false
inline void set_pointerType(::StringW  value) ;

/// @brief Method set_position, addr 0x4a3ff4c, size 0xc, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_pressedButtons, addr 0x4a3ff38, size 0x8, virtual false, abstract: false, final false
inline void set_pressedButtons(int32_t  value) ;

/// @brief Method set_pressure, addr 0x4a3ffb0, size 0x8, virtual false, abstract: false, final false
inline void set_pressure(float_t  value) ;

/// @brief Method set_radius, addr 0x4a40020, size 0x8, virtual false, abstract: false, final false
inline void set_radius(::UnityEngine::Vector2  value) ;

/// @brief Method set_radiusVariance, addr 0x4a40030, size 0x8, virtual false, abstract: false, final false
inline void set_radiusVariance(::UnityEngine::Vector2  value) ;

/// @brief Method set_tangentialPressure, addr 0x4a3ffc0, size 0x8, virtual false, abstract: false, final false
inline void set_tangentialPressure(float_t  value) ;

/// @brief Method set_tilt, addr 0x4a40000, size 0x8, virtual false, abstract: false, final false
inline void set_tilt(::UnityEngine::Vector2  value) ;

/// @brief Method set_twist, addr 0x4a3fff0, size 0x8, virtual false, abstract: false, final false
inline void set_twist(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __PanelEventHandler__PointerEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__PanelEventHandler__PointerEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PanelEventHandler__PointerEvent(__PanelEventHandler__PointerEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PanelEventHandler__PointerEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PanelEventHandler__PointerEvent(__PanelEventHandler__PointerEvent const& ) = delete;

/// @brief Field <pointerId>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____pointerId_k__BackingField;

/// @brief Field <pointerType>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____pointerType_k__BackingField;

/// @brief Field <isPrimary>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____isPrimary_k__BackingField;

/// @brief Field <button>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____button_k__BackingField;

/// @brief Field <pressedButtons>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____pressedButtons_k__BackingField;

/// @brief Field <position>k__BackingField, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____position_k__BackingField;

/// @brief Field <localPosition>k__BackingField, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____localPosition_k__BackingField;

/// @brief Field <deltaPosition>k__BackingField, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____deltaPosition_k__BackingField;

/// @brief Field <deltaTime>k__BackingField, offset: 0x50, size: 0x4, def value: None
 float_t  ____deltaTime_k__BackingField;

/// @brief Field <clickCount>k__BackingField, offset: 0x54, size: 0x4, def value: None
 int32_t  ____clickCount_k__BackingField;

/// @brief Field <pressure>k__BackingField, offset: 0x58, size: 0x4, def value: None
 float_t  ____pressure_k__BackingField;

/// @brief Field <tangentialPressure>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 float_t  ____tangentialPressure_k__BackingField;

/// @brief Field <altitudeAngle>k__BackingField, offset: 0x60, size: 0x4, def value: None
 float_t  ____altitudeAngle_k__BackingField;

/// @brief Field <azimuthAngle>k__BackingField, offset: 0x64, size: 0x4, def value: None
 float_t  ____azimuthAngle_k__BackingField;

/// @brief Field <twist>k__BackingField, offset: 0x68, size: 0x4, def value: None
 float_t  ____twist_k__BackingField;

/// @brief Field <tilt>k__BackingField, offset: 0x6c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____tilt_k__BackingField;

/// @brief Field <penStatus>k__BackingField, offset: 0x74, size: 0x4, def value: None
 ::UnityEngine::PenStatus  ____penStatus_k__BackingField;

/// @brief Field <radius>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____radius_k__BackingField;

/// @brief Field <radiusVariance>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____radiusVariance_k__BackingField;

/// @brief Field <modifiers>k__BackingField, offset: 0x88, size: 0x4, def value: None
 ::UnityEngine::EventModifiers  ____modifiers_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____pointerId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____pointerType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____isPrimary_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____button_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____pressedButtons_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____position_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____localPosition_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____deltaPosition_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____deltaTime_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____clickCount_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____pressure_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____tangentialPressure_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____altitudeAngle_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____azimuthAngle_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____twist_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____tilt_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____penStatus_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____radius_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____radiusVariance_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent, ____modifiers_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::PanelEventHandler
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PanelEventHandler*
class CORDL_TYPE PanelEventHandler : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using PointerEvent = ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent;

using PointerEventType = ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType;

 __declspec(property(get=get_currentFocusedElement)) ::UnityEngine::UIElements::Focusable*  currentFocusedElement;

 __declspec(property(get=get_eventSystem)) ::UnityW<::UnityEngine::EventSystems::EventSystem>  eventSystem;

 __declspec(property(get=get_isCurrentFocusedPanel)) bool  isCurrentFocusedPanel;

/// @brief Field m_Event, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Event, put=__cordl_internal_set_m_Event)) ::UnityEngine::Event*  m_Event;

/// @brief Field m_LastClickTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastClickTime, put=__cordl_internal_set_m_LastClickTime)) float_t  m_LastClickTime;

/// @brief Field m_Panel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Panel, put=__cordl_internal_set_m_Panel)) ::UnityEngine::UIElements::BaseRuntimePanel*  m_Panel;

/// @brief Field m_PointerEvent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PointerEvent, put=__cordl_internal_set_m_PointerEvent)) ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*  m_PointerEvent;

/// @brief Field m_Selecting, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Selecting, put=__cordl_internal_set_m_Selecting)) bool  m_Selecting;

 __declspec(property(get=get_panel, put=set_panel)) ::UnityEngine::UIElements::IPanel*  panel;

/// @brief Field s_Modifiers, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_s_Modifiers, put=setStaticF_s_Modifiers)) ::UnityEngine::EventModifiers  s_Modifiers;

 __declspec(property(get=get_selectableGameObject)) ::UnityW<::UnityEngine::GameObject>  selectableGameObject;

/// @brief Convert operator to "::UnityEngine::EventSystems::ICancelHandler"
constexpr operator  ::UnityEngine::EventSystems::ICancelHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IDeselectHandler"
constexpr operator  ::UnityEngine::EventSystems::IDeselectHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IMoveHandler"
constexpr operator  ::UnityEngine::EventSystems::IMoveHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerMoveHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerMoveHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IScrollHandler"
constexpr operator  ::UnityEngine::EventSystems::IScrollHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
constexpr operator  ::UnityEngine::EventSystems::ISelectHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr operator  ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::UIElements::IRuntimePanelComponent"
constexpr operator  ::UnityEngine::UIElements::IRuntimePanelComponent*() noexcept;

/// @brief Method LateUpdate, addr 0x4a3f268, size 0x8, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::UnityEngine::UIElements::PanelEventHandler* New_ctor() ;

/// @brief Method OnCancel, addr 0x4a3ebb4, size 0x210, virtual true, abstract: false, final true
inline void OnCancel(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnDeselect, addr 0x4a3dcb8, size 0x14, virtual true, abstract: false, final true
inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnDisable, addr 0x4a3db44, size 0x4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnElementBlur, addr 0x4a3dc3c, size 0x4, virtual false, abstract: false, final false
inline void OnElementBlur(::UnityEngine::UIElements::BlurEvent*  e) ;

/// @brief Method OnElementFocus, addr 0x4a3db54, size 0xbc, virtual false, abstract: false, final false
inline void OnElementFocus(::UnityEngine::UIElements::FocusEvent*  e) ;

/// @brief Method OnEnable, addr 0x4a3db3c, size 0x4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMove, addr 0x4a3edc4, size 0x234, virtual true, abstract: false, final true
inline void OnMove(::UnityEngine::EventSystems::AxisEventData*  eventData) ;

/// @brief Method OnPanelDestroyed, addr 0x4a3db4c, size 0x8, virtual false, abstract: false, final false
inline void OnPanelDestroyed() ;

/// @brief Method OnPointerClick, addr 0x4a3e840, size 0x1c, virtual true, abstract: false, final true
inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerDown, addr 0x4a3e238, size 0x28c, virtual true, abstract: false, final true
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerEnter, addr 0x4a3e7ec, size 0x54, virtual true, abstract: false, final true
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit, addr 0x4a3e4c4, size 0x328, virtual true, abstract: false, final true
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerMove, addr 0x4a3dccc, size 0x1ac, virtual true, abstract: false, final true
inline void OnPointerMove(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerUp, addr 0x4a3e01c, size 0x21c, virtual true, abstract: false, final true
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnScroll, addr 0x4a3eff8, size 0x1f4, virtual true, abstract: false, final true
inline void OnScroll(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnSelect, addr 0x4a3dc40, size 0x78, virtual true, abstract: false, final true
inline void OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnSubmit, addr 0x4a3e85c, size 0x210, virtual true, abstract: false, final true
inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method ProcessImguiEvents, addr 0x4a3ea6c, size 0x148, virtual false, abstract: false, final false
inline void ProcessImguiEvents(::UnityEngine::UIElements::Focusable*  target) ;

/// @brief Method ProcessKeyboardEvent, addr 0x4a3f270, size 0x80, virtual false, abstract: false, final false
inline void ProcessKeyboardEvent(::UnityEngine::Event*  e, ::UnityEngine::UIElements::Focusable*  target) ;

/// @brief Method ProcessTabEvent, addr 0x4a3f2f0, size 0x68, virtual false, abstract: false, final false
inline void ProcessTabEvent(::UnityEngine::Event*  e, ::UnityEngine::UIElements::Focusable*  target) ;

/// @brief Method ReadPointerData, addr 0x4a3de78, size 0x140, virtual false, abstract: false, final false
inline bool ReadPointerData(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*  pe, ::UnityEngine::EventSystems::PointerEventData*  eventData, ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType  eventType) ;

/// @brief Method RegisterCallbacks, addr 0x4a3d79c, size 0x1b4, virtual false, abstract: false, final false
inline void RegisterCallbacks() ;

/// @brief Method SendEvent, addr 0x4a3f1ec, size 0x20, virtual false, abstract: false, final false
inline void SendEvent(::UnityEngine::UIElements::EventBase*  e, ::UnityEngine::Event*  sourceEvent) ;

/// @brief Method SendEvent, addr 0x4a3dfb8, size 0x64, virtual false, abstract: false, final false
inline void SendEvent(::UnityEngine::UIElements::EventBase*  e, ::UnityEngine::EventSystems::BaseEventData*  sourceEventData) ;

/// @brief Method SendKeyDownEvent, addr 0x4a3f568, size 0x210, virtual false, abstract: false, final false
inline void SendKeyDownEvent(::UnityEngine::Event*  e, ::UnityEngine::UIElements::Focusable*  target) ;

/// @brief Method SendKeyUpEvent, addr 0x4a3f358, size 0x210, virtual false, abstract: false, final false
inline void SendKeyUpEvent(::UnityEngine::Event*  e, ::UnityEngine::UIElements::Focusable*  target) ;

/// @brief Method SendTabEvent, addr 0x4a3f778, size 0x1f4, virtual false, abstract: false, final false
inline void SendTabEvent(::UnityEngine::Event*  e, ::UnityEngine::UIElements::__NavigationMoveEvent__Direction  direction, ::UnityEngine::UIElements::Focusable*  target) ;

/// @brief Method UnregisterCallbacks, addr 0x4a3d5e8, size 0x1b4, virtual false, abstract: false, final false
inline void UnregisterCallbacks() ;

/// @brief Method Update, addr 0x4a3f20c, size 0x5c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Event*& __cordl_internal_get_m_Event() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Event*> const& __cordl_internal_get_m_Event() const;

constexpr float_t const& __cordl_internal_get_m_LastClickTime() const;

constexpr float_t& __cordl_internal_get_m_LastClickTime() ;

constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& __cordl_internal_get_m_Panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseRuntimePanel*> const& __cordl_internal_get_m_Panel() const;

constexpr ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*& __cordl_internal_get_m_PointerEvent() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*> const& __cordl_internal_get_m_PointerEvent() const;

constexpr bool const& __cordl_internal_get_m_Selecting() const;

constexpr bool& __cordl_internal_get_m_Selecting() ;

constexpr void __cordl_internal_set_m_Event(::UnityEngine::Event*  value) ;

constexpr void __cordl_internal_set_m_LastClickTime(float_t  value) ;

constexpr void __cordl_internal_set_m_Panel(::UnityEngine::UIElements::BaseRuntimePanel*  value) ;

constexpr void __cordl_internal_set_m_PointerEvent(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*  value) ;

constexpr void __cordl_internal_set_m_Selecting(bool  value) ;

/// @brief Method .ctor, addr 0x4a3fe48, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::EventModifiers getStaticF_s_Modifiers() ;

/// @brief Method get_currentFocusedElement, addr 0x4a3db04, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Focusable* get_currentFocusedElement() ;

/// @brief Method get_eventSystem, addr 0x4a3d968, size 0xd4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::EventSystems::EventSystem> get_eventSystem() ;

/// @brief Method get_isCurrentFocusedPanel, addr 0x4a3da3c, size 0xc8, virtual false, abstract: false, final false
inline bool get_isCurrentFocusedPanel() ;

/// @brief Method get_panel, addr 0x4a3d53c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::IPanel* get_panel() ;

/// @brief Method get_selectableGameObject, addr 0x4a3d950, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_selectableGameObject() ;

/// @brief Convert to "::UnityEngine::EventSystems::ICancelHandler"
constexpr ::UnityEngine::EventSystems::ICancelHandler* i___UnityEngine__EventSystems__ICancelHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IDeselectHandler"
constexpr ::UnityEngine::EventSystems::IDeselectHandler* i___UnityEngine__EventSystems__IDeselectHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IMoveHandler"
constexpr ::UnityEngine::EventSystems::IMoveHandler* i___UnityEngine__EventSystems__IMoveHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerMoveHandler"
constexpr ::UnityEngine::EventSystems::IPointerMoveHandler* i___UnityEngine__EventSystems__IPointerMoveHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IScrollHandler"
constexpr ::UnityEngine::EventSystems::IScrollHandler* i___UnityEngine__EventSystems__IScrollHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
constexpr ::UnityEngine::EventSystems::ISelectHandler* i___UnityEngine__EventSystems__ISelectHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

/// @brief Convert to "::UnityEngine::UIElements::IRuntimePanelComponent"
constexpr ::UnityEngine::UIElements::IRuntimePanelComponent* i___UnityEngine__UIElements__IRuntimePanelComponent() noexcept;

static inline void setStaticF_s_Modifiers(::UnityEngine::EventModifiers  value) ;

/// @brief Method set_panel, addr 0x4a3d544, size 0xa4, virtual true, abstract: false, final true
inline void set_panel(::UnityEngine::UIElements::IPanel*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PanelEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PanelEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PanelEventHandler(PanelEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PanelEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PanelEventHandler(PanelEventHandler const& ) = delete;

/// @brief Field m_Panel, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::UIElements::BaseRuntimePanel*  ___m_Panel;

/// @brief Field m_PointerEvent, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*  ___m_PointerEvent;

/// @brief Field m_LastClickTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___m_LastClickTime;

/// @brief Field m_Selecting, offset: 0x34, size: 0x1, def value: None
 bool  ___m_Selecting;

/// @brief Field m_Event, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Event*  ___m_Event;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PanelEventHandler, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler, ___m_Panel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler, ___m_PointerEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler, ___m_LastClickTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler, ___m_Selecting) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler, ___m_Event) == 0x38, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PanelEventHandler__PointerEventType, "UnityEngine.UIElements", "PanelEventHandler/PointerEventType");
NEED_NO_BOX(::UnityEngine::UIElements::PanelEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PanelEventHandler*, "UnityEngine.UIElements", "PanelEventHandler");
NEED_NO_BOX(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*, "UnityEngine.UIElements", "PanelEventHandler/PointerEvent");
