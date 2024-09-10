#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/FastTouchscreen.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
CORDL_MODULE_EXPORT(FastTouchscreen)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
namespace UnityEngine::InputSystem::Controls {
class DoubleControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchPhaseControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchPressControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class FastTouchscreen;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::FastTouchscreen);
// Type: UnityEngine.InputSystem::FastTouchscreen
// SizeInfo { instance_size: 440, native_size: -1, calculated_instance_size: 440, calculated_native_size: 440, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::FastTouchscreen*
class CORDL_TYPE FastTouchscreen : public ::UnityEngine::InputSystem::Touchscreen {
public:
// Declarations
/// @brief Method Initialize_ctrlTouchscreendelta, addr 0x450e348, size 0x1b8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreendelta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltadown, addr 0x45130f0, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltaleft, addr 0x45132e4, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltaright, addr 0x45134d8, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltaup, addr 0x4512f04, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltax, addr 0x45136c4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltay, addr 0x4513888, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendisplayIndex, addr 0x450fb2c, size 0x1a0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreendisplayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenposition, addr 0x450e178, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenposition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenpositionx, addr 0x4512b44, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenpositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenpositiony, addr 0x4512d24, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenpositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenpress, addr 0x450e88c, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreenpress(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenpressure, addr 0x450e500, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenpressure(::UnityEngine::InputSystem::Utilities::InternedString  kAnalogLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouch, addr 0x450dfc4, size 0x1b4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreenprimaryTouch(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdelta, addr 0x45100a8, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreenprimaryTouchdelta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltadown, addr 0x4511ad8, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaleft, addr 0x4511ccc, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaright, addr 0x4511ec0, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaup, addr 0x45118ec, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltax, addr 0x45120ac, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltay, addr 0x4512270, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdisplayIndex, addr 0x4510ba0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreenprimaryTouchdisplayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchindirectTouch, addr 0x4510d64, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreenprimaryTouchindirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchphase, addr 0x451060c, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreenprimaryTouchphase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchposition, addr 0x450febc, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenprimaryTouchposition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpositionx, addr 0x451152c, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchpositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpositiony, addr 0x451170c, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchpositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpress, addr 0x45107e0, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreenprimaryTouchpress(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpressure, addr 0x4510278, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchpressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchradius, addr 0x451043c, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenprimaryTouchradius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchradiusx, addr 0x4512434, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchradiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchradiusy, addr 0x45125f8, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchradiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPosition, addr 0x451134c, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenprimaryTouchstartPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPositionx, addr 0x45127bc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchstartPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPositiony, addr 0x4512980, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchstartPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartTime, addr 0x4511178, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreenprimaryTouchstartTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchtap, addr 0x4510f70, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreenprimaryTouchtap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchtapCount, addr 0x45109dc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreenprimaryTouchtapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchtouchId, addr 0x450fccc, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreenprimaryTouchtouchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenradius, addr 0x450e6d4, size 0x1b8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenradius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenradiusx, addr 0x4513a4c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenradiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenradiusy, addr 0x4513c10, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenradiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0, addr 0x450ea74, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch0(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0delta, addr 0x45141b0, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch0delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltadown, addr 0x4515bd4, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltaleft, addr 0x4515dc8, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltaright, addr 0x4515fbc, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltaup, addr 0x45159e8, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltax, addr 0x45161a8, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltay, addr 0x451636c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0displayIndex, addr 0x4514ca8, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch0displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0indirectTouch, addr 0x4514e6c, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch0indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0phase, addr 0x4514714, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch0phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0position, addr 0x4513fc4, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch0position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0positionx, addr 0x4515628, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0positiony, addr 0x4515808, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0press, addr 0x45148e8, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch0press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0pressure, addr 0x4514380, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0radius, addr 0x4514544, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch0radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0radiusx, addr 0x4516530, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0radiusy, addr 0x45166f4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startPosition, addr 0x4515448, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch0startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startPositionx, addr 0x45168b8, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startPositiony, addr 0x4516a7c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startTime, addr 0x4515274, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch0startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0tap, addr 0x4515078, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch0tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0tapCount, addr 0x4514ae4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch0tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0touchId, addr 0x4513dd4, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch0touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1, addr 0x450ec20, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch1(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1delta, addr 0x451701c, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch1delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltadown, addr 0x4518a40, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltaleft, addr 0x4518c34, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltaright, addr 0x4518e28, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltaup, addr 0x4518854, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltax, addr 0x4519014, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltay, addr 0x45191d8, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1displayIndex, addr 0x4517b14, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch1displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1indirectTouch, addr 0x4517cd8, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch1indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1phase, addr 0x4517580, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch1phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1position, addr 0x4516e30, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch1position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1positionx, addr 0x4518494, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1positiony, addr 0x4518674, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1press, addr 0x4517754, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch1press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1pressure, addr 0x45171ec, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1radius, addr 0x45173b0, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch1radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1radiusx, addr 0x451939c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1radiusy, addr 0x4519560, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startPosition, addr 0x45182b4, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch1startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startPositionx, addr 0x4519724, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startPositiony, addr 0x45198e8, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startTime, addr 0x45180e0, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch1startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1tap, addr 0x4517ee4, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch1tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1tapCount, addr 0x4517950, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch1tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1touchId, addr 0x4516c40, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch1touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2, addr 0x450edcc, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch2(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2delta, addr 0x4519e88, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch2delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltadown, addr 0x451b8ac, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltaleft, addr 0x451baa0, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltaright, addr 0x451bc94, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltaup, addr 0x451b6c0, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltax, addr 0x451be80, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltay, addr 0x451c044, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2displayIndex, addr 0x451a980, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch2displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2indirectTouch, addr 0x451ab44, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch2indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2phase, addr 0x451a3ec, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch2phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2position, addr 0x4519c9c, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch2position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2positionx, addr 0x451b300, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2positiony, addr 0x451b4e0, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2press, addr 0x451a5c0, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch2press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2pressure, addr 0x451a058, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2radius, addr 0x451a21c, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch2radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2radiusx, addr 0x451c208, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2radiusy, addr 0x451c3cc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startPosition, addr 0x451b120, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch2startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startPositionx, addr 0x451c590, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startPositiony, addr 0x451c754, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startTime, addr 0x451af4c, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch2startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2tap, addr 0x451ad50, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch2tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2tapCount, addr 0x451a7bc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch2tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2touchId, addr 0x4519aac, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch2touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3, addr 0x450ef78, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch3(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3delta, addr 0x451ccf4, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch3delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltadown, addr 0x451e718, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltaleft, addr 0x451e90c, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltaright, addr 0x451eb00, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltaup, addr 0x451e52c, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltax, addr 0x451ecec, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltay, addr 0x451eeb0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3displayIndex, addr 0x451d7ec, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch3displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3indirectTouch, addr 0x451d9b0, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch3indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3phase, addr 0x451d258, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch3phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3position, addr 0x451cb08, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch3position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3positionx, addr 0x451e16c, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3positiony, addr 0x451e34c, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3press, addr 0x451d42c, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch3press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3pressure, addr 0x451cec4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3radius, addr 0x451d088, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch3radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3radiusx, addr 0x451f074, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3radiusy, addr 0x451f238, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startPosition, addr 0x451df8c, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch3startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startPositionx, addr 0x451f3fc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startPositiony, addr 0x451f5c0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startTime, addr 0x451ddb8, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch3startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3tap, addr 0x451dbbc, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch3tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3tapCount, addr 0x451d628, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch3tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3touchId, addr 0x451c918, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch3touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4, addr 0x450f124, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch4(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4delta, addr 0x451fb60, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch4delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltadown, addr 0x4521584, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltaleft, addr 0x4521778, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltaright, addr 0x452196c, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltaup, addr 0x4521398, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltax, addr 0x4521b58, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltay, addr 0x4521d1c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4displayIndex, addr 0x4520658, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch4displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4indirectTouch, addr 0x452081c, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch4indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4phase, addr 0x45200c4, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch4phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4position, addr 0x451f974, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch4position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4positionx, addr 0x4520fd8, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4positiony, addr 0x45211b8, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4press, addr 0x4520298, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch4press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4pressure, addr 0x451fd30, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4radius, addr 0x451fef4, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch4radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4radiusx, addr 0x4521ee0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4radiusy, addr 0x45220a4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startPosition, addr 0x4520df8, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch4startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startPositionx, addr 0x4522268, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startPositiony, addr 0x452242c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startTime, addr 0x4520c24, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch4startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4tap, addr 0x4520a28, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch4tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4tapCount, addr 0x4520494, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch4tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4touchId, addr 0x451f784, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch4touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5, addr 0x450f2d0, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch5(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5delta, addr 0x45229cc, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch5delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltadown, addr 0x45243f0, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltaleft, addr 0x45245e4, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltaright, addr 0x45247d8, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltaup, addr 0x4524204, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltax, addr 0x45249c4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltay, addr 0x4524b88, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5displayIndex, addr 0x45234c4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch5displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5indirectTouch, addr 0x4523688, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch5indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5phase, addr 0x4522f30, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch5phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5position, addr 0x45227e0, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch5position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5positionx, addr 0x4523e44, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5positiony, addr 0x4524024, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5press, addr 0x4523104, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch5press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5pressure, addr 0x4522b9c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5radius, addr 0x4522d60, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch5radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5radiusx, addr 0x4524d4c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5radiusy, addr 0x4524f10, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startPosition, addr 0x4523c64, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch5startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startPositionx, addr 0x45250d4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startPositiony, addr 0x4525298, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startTime, addr 0x4523a90, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch5startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5tap, addr 0x4523894, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch5tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5tapCount, addr 0x4523300, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch5tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5touchId, addr 0x45225f0, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch5touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6, addr 0x450f47c, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch6(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6delta, addr 0x4525838, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch6delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltadown, addr 0x452725c, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltaleft, addr 0x4527450, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltaright, addr 0x4527644, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltaup, addr 0x4527070, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltax, addr 0x4527830, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltay, addr 0x45279f4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6displayIndex, addr 0x4526330, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch6displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6indirectTouch, addr 0x45264f4, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch6indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6phase, addr 0x4525d9c, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch6phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6position, addr 0x452564c, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch6position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6positionx, addr 0x4526cb0, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6positiony, addr 0x4526e90, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6press, addr 0x4525f70, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch6press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6pressure, addr 0x4525a08, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6radius, addr 0x4525bcc, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch6radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6radiusx, addr 0x4527bb8, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6radiusy, addr 0x4527d7c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startPosition, addr 0x4526ad0, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch6startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startPositionx, addr 0x4527f40, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startPositiony, addr 0x4528104, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startTime, addr 0x45268fc, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch6startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6tap, addr 0x4526700, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch6tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6tapCount, addr 0x452616c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch6tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6touchId, addr 0x452545c, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch6touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7, addr 0x450f628, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch7(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7delta, addr 0x45286a4, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch7delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltadown, addr 0x452a0c8, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltaleft, addr 0x452a2bc, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltaright, addr 0x452a4b0, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltaup, addr 0x4529edc, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltax, addr 0x452a69c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltay, addr 0x452a860, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7displayIndex, addr 0x452919c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch7displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7indirectTouch, addr 0x4529360, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch7indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7phase, addr 0x4528c08, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch7phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7position, addr 0x45284b8, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch7position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7positionx, addr 0x4529b1c, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7positiony, addr 0x4529cfc, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7press, addr 0x4528ddc, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch7press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7pressure, addr 0x4528874, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7radius, addr 0x4528a38, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch7radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7radiusx, addr 0x452aa24, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7radiusy, addr 0x452abe8, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startPosition, addr 0x452993c, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch7startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startPositionx, addr 0x452adac, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startPositiony, addr 0x452af70, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startTime, addr 0x4529768, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch7startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7tap, addr 0x452956c, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch7tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7tapCount, addr 0x4528fd8, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch7tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7touchId, addr 0x45282c8, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch7touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8, addr 0x450f7d4, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch8(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8delta, addr 0x452b510, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch8delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltadown, addr 0x452cf34, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltaleft, addr 0x452d128, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltaright, addr 0x452d31c, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltaup, addr 0x452cd48, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltax, addr 0x452d508, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltay, addr 0x452d6cc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8displayIndex, addr 0x452c008, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch8displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8indirectTouch, addr 0x452c1cc, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch8indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8phase, addr 0x452ba74, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch8phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8position, addr 0x452b324, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch8position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8positionx, addr 0x452c988, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8positiony, addr 0x452cb68, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8press, addr 0x452bc48, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch8press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8pressure, addr 0x452b6e0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8radius, addr 0x452b8a4, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch8radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8radiusx, addr 0x452d890, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8radiusy, addr 0x452da54, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startPosition, addr 0x452c7a8, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch8startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startPositionx, addr 0x452dc18, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startPositiony, addr 0x452dddc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startTime, addr 0x452c5d4, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch8startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8tap, addr 0x452c3d8, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch8tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8tapCount, addr 0x452be44, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch8tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8touchId, addr 0x452b134, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch8touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9, addr 0x450f980, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch9(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9delta, addr 0x452e37c, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch9delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltadown, addr 0x452fda0, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltaleft, addr 0x452ff94, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltaright, addr 0x4530188, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltaup, addr 0x452fbb4, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltax, addr 0x4530374, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltay, addr 0x4530538, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9displayIndex, addr 0x452ee74, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch9displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9indirectTouch, addr 0x452f038, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch9indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9phase, addr 0x452e8e0, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch9phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9position, addr 0x452e190, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch9position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9positionx, addr 0x452f7f4, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9positiony, addr 0x452f9d4, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9press, addr 0x452eab4, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch9press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9pressure, addr 0x452e54c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9radius, addr 0x452e710, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch9radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9radiusx, addr 0x45306fc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9radiusy, addr 0x45308c0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startPosition, addr 0x452f614, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch9startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startPositionx, addr 0x4530a84, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startPositiony, addr 0x4530c48, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startTime, addr 0x452f440, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch9startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9tap, addr 0x452f244, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch9tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9tapCount, addr 0x452ecb0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch9tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9touchId, addr 0x452dfa0, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch9touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

static inline ::UnityEngine::InputSystem::FastTouchscreen* New_ctor() ;

/// @brief Method .ctor, addr 0x450b1cc, size 0x2df8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FastTouchscreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FastTouchscreen", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FastTouchscreen(FastTouchscreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastTouchscreen", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastTouchscreen(FastTouchscreen const& ) = delete;

/// @brief Field metadata offset 0xffffffff size 0x8
static constexpr ::ConstString  metadata{u"AutoWindowSpace;Touch;Vector2;Delta;Analog;TouchPress;Button;Axis;Integer;TouchPhase;Double;Touchscreen;Pointer"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::FastTouchscreen, 0x1b8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::FastTouchscreen);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::FastTouchscreen*, "UnityEngine.InputSystem", "FastTouchscreen");
