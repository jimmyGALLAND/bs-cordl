#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
CORDL_MODULE_EXPORT(FastTouchscreen)
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Controls {
class TouchControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class TouchPressControl;
}
namespace UnityEngine::InputSystem::Controls {
class DoubleControl;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchPhaseControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class FastTouchscreen;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::FastTouchscreen);
// Type: UnityEngine.InputSystem::FastTouchscreen
// SizeInfo { instance_size: 408, native_size: -1, calculated_instance_size: 408, calculated_native_size: 408, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6288))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6250))
// CS Name: ::UnityEngine.InputSystem::FastTouchscreen*
class CORDL_TYPE FastTouchscreen : public ::UnityEngine::InputSystem::Touchscreen {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::FastTouchscreen* New_ctor();

  /// @brief Method .ctor addr 0x2a7de9c size 0x2e08 virtual false final false
  inline void _ctor();

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouch addr 0x2a80ca4 size 0x180 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreenprimaryTouch(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenposition addr 0x2a80e24 size 0x1a0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenposition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreendelta addr 0x2a80fc4 size 0x180 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreendelta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenpressure addr 0x2a81144 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenpressure(::UnityEngine::InputSystem::Utilities::InternedString kAnalogLayout,
                                                                                               ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenradius addr 0x2a812e0 size 0x180 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenradius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenpress addr 0x2a81460 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreenpress(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0 addr 0x2a81610 size 0x174 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch0(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1 addr 0x2a81784 size 0x174 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch1(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2 addr 0x2a818f8 size 0x174 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch2(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3 addr 0x2a81a6c size 0x174 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch3(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4 addr 0x2a81be0 size 0x174 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch4(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5 addr 0x2a81d54 size 0x174 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch5(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6 addr 0x2a81ec8 size 0x174 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch6(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7 addr 0x2a8203c size 0x174 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch7(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8 addr 0x2a821b0 size 0x174 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch8(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9 addr 0x2a82324 size 0x174 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch9(::UnityEngine::InputSystem::Utilities::InternedString kTouchLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchtouchId addr 0x2a82498 size 0x1c0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreenprimaryTouchtouchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchposition addr 0x2a82658 size 0x1bc virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenprimaryTouchposition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchdelta addr 0x2a82814 size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreenprimaryTouchdelta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                         ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchpressure addr 0x2a829ac size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchpressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchradius addr 0x2a82b38 size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenprimaryTouchradius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchphase addr 0x2a82cd0 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreenprimaryTouchphase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchpress addr 0x2a82e6c size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreenprimaryTouchpress(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchtapCount addr 0x2a83030 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreenprimaryTouchtapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchindirectTouch addr 0x2a831bc size 0x1d4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreenprimaryTouchindirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchtap addr 0x2a83390 size 0x1d0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreenprimaryTouchtap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartTime addr 0x2a83560 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreenprimaryTouchstartTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPosition addr 0x2a836fc size 0x1a8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenprimaryTouchstartPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchpositionx addr 0x2a838a4 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchpositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchpositiony addr 0x2a83a54 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchpositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaup addr 0x2a83c04 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltadown addr 0x2a83db4 size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaleft addr 0x2a83f68 size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaright addr 0x2a8411c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltax addr 0x2a842cc size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                         ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltay addr 0x2a84458 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                         ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchradiusx addr 0x2a845e4 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchradiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchradiusy addr 0x2a84770 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchradiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                          ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPositionx addr 0x2a848fc size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchstartPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                 ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPositiony addr 0x2a84a88 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchstartPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                                 ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenpositionx addr 0x2a84c14 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenpositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenpositiony addr 0x2a84dc4 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenpositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreendeltaup addr 0x2a84f74 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreendeltadown addr 0x2a85124 size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreendeltaleft addr 0x2a852d8 size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreendeltaright addr 0x2a8548c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                 ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreendeltax addr 0x2a8563c size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreendeltay addr 0x2a857c8 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenradiusx addr 0x2a85954 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenradiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreenradiusy addr 0x2a85ae0 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenradiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                              ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0touchId addr 0x2a85c6c size 0x1c0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch0touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0position addr 0x2a85e2c size 0x1bc virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch0position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0delta addr 0x2a85fe8 size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch0delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0pressure addr 0x2a86180 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0radius addr 0x2a8630c size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch0radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0phase addr 0x2a864a4 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch0phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0press addr 0x2a86640 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch0press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0tapCount addr 0x2a86804 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch0tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0indirectTouch addr 0x2a86990 size 0x1d4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch0indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0tap addr 0x2a86b64 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch0tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0startTime addr 0x2a86d28 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch0startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0startPosition addr 0x2a86ec4 size 0x1a8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch0startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0positionx addr 0x2a8706c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0positiony addr 0x2a8721c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0deltaup addr 0x2a873cc size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0deltadown addr 0x2a8757c size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0deltaleft addr 0x2a87730 size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0deltaright addr 0x2a878e4 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0deltax addr 0x2a87a94 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0deltay addr 0x2a87c20 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0radiusx addr 0x2a87dac size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0radiusy addr 0x2a87f38 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0startPositionx addr 0x2a880c4 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch0startPositiony addr 0x2a88250 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1touchId addr 0x2a883dc size 0x1c0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch1touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1position addr 0x2a8859c size 0x1bc virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch1position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1delta addr 0x2a88758 size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch1delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1pressure addr 0x2a888f0 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1radius addr 0x2a88a7c size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch1radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1phase addr 0x2a88c14 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch1phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1press addr 0x2a88db0 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch1press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1tapCount addr 0x2a88f74 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch1tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1indirectTouch addr 0x2a89100 size 0x1d4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch1indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1tap addr 0x2a892d4 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch1tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1startTime addr 0x2a89498 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch1startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1startPosition addr 0x2a89634 size 0x1a8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch1startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1positionx addr 0x2a897dc size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1positiony addr 0x2a8998c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1deltaup addr 0x2a89b3c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1deltadown addr 0x2a89cec size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1deltaleft addr 0x2a89ea0 size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1deltaright addr 0x2a8a054 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1deltax addr 0x2a8a204 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1deltay addr 0x2a8a390 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1radiusx addr 0x2a8a51c size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1radiusy addr 0x2a8a6a8 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1startPositionx addr 0x2a8a834 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch1startPositiony addr 0x2a8a9c0 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2touchId addr 0x2a8ab4c size 0x1c0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch2touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2position addr 0x2a8ad0c size 0x1bc virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch2position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2delta addr 0x2a8aec8 size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch2delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2pressure addr 0x2a8b060 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2radius addr 0x2a8b1ec size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch2radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2phase addr 0x2a8b384 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch2phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2press addr 0x2a8b520 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch2press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2tapCount addr 0x2a8b6e4 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch2tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2indirectTouch addr 0x2a8b870 size 0x1d4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch2indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2tap addr 0x2a8ba44 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch2tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2startTime addr 0x2a8bc08 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch2startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2startPosition addr 0x2a8bda4 size 0x1a8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch2startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2positionx addr 0x2a8bf4c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2positiony addr 0x2a8c0fc size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2deltaup addr 0x2a8c2ac size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2deltadown addr 0x2a8c45c size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2deltaleft addr 0x2a8c610 size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2deltaright addr 0x2a8c7c4 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2deltax addr 0x2a8c974 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2deltay addr 0x2a8cb00 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2radiusx addr 0x2a8cc8c size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2radiusy addr 0x2a8ce18 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2startPositionx addr 0x2a8cfa4 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch2startPositiony addr 0x2a8d130 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3touchId addr 0x2a8d2bc size 0x1c0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch3touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3position addr 0x2a8d47c size 0x1bc virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch3position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3delta addr 0x2a8d638 size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch3delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3pressure addr 0x2a8d7d0 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3radius addr 0x2a8d95c size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch3radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3phase addr 0x2a8daf4 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch3phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3press addr 0x2a8dc90 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch3press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3tapCount addr 0x2a8de54 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch3tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3indirectTouch addr 0x2a8dfe0 size 0x1d4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch3indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3tap addr 0x2a8e1b4 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch3tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3startTime addr 0x2a8e378 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch3startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3startPosition addr 0x2a8e514 size 0x1a8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch3startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3positionx addr 0x2a8e6bc size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3positiony addr 0x2a8e86c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3deltaup addr 0x2a8ea1c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3deltadown addr 0x2a8ebcc size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3deltaleft addr 0x2a8ed80 size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3deltaright addr 0x2a8ef34 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3deltax addr 0x2a8f0e4 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3deltay addr 0x2a8f270 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3radiusx addr 0x2a8f3fc size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3radiusy addr 0x2a8f588 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3startPositionx addr 0x2a8f714 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch3startPositiony addr 0x2a8f8a0 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4touchId addr 0x2a8fa2c size 0x1c0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch4touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4position addr 0x2a8fbec size 0x1bc virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch4position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4delta addr 0x2a8fda8 size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch4delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4pressure addr 0x2a8ff40 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4radius addr 0x2a900cc size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch4radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4phase addr 0x2a90264 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch4phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4press addr 0x2a90400 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch4press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4tapCount addr 0x2a905c4 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch4tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4indirectTouch addr 0x2a90750 size 0x1d4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch4indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4tap addr 0x2a90924 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch4tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4startTime addr 0x2a90ae8 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch4startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4startPosition addr 0x2a90c84 size 0x1a8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch4startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4positionx addr 0x2a90e2c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4positiony addr 0x2a90fdc size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4deltaup addr 0x2a9118c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4deltadown addr 0x2a9133c size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4deltaleft addr 0x2a914f0 size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4deltaright addr 0x2a916a4 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4deltax addr 0x2a91854 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4deltay addr 0x2a919e0 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4radiusx addr 0x2a91b6c size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4radiusy addr 0x2a91cf8 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4startPositionx addr 0x2a91e84 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch4startPositiony addr 0x2a92010 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5touchId addr 0x2a9219c size 0x1c0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch5touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5position addr 0x2a9235c size 0x1bc virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch5position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5delta addr 0x2a92518 size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch5delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5pressure addr 0x2a926b0 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5radius addr 0x2a9283c size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch5radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5phase addr 0x2a929d4 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch5phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5press addr 0x2a92b70 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch5press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5tapCount addr 0x2a92d34 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch5tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5indirectTouch addr 0x2a92ec0 size 0x1d4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch5indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5tap addr 0x2a93094 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch5tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5startTime addr 0x2a93258 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch5startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5startPosition addr 0x2a933f4 size 0x1a8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch5startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5positionx addr 0x2a9359c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5positiony addr 0x2a9374c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5deltaup addr 0x2a938fc size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5deltadown addr 0x2a93aac size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5deltaleft addr 0x2a93c60 size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5deltaright addr 0x2a93e14 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5deltax addr 0x2a93fc4 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5deltay addr 0x2a94150 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5radiusx addr 0x2a942dc size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5radiusy addr 0x2a94468 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5startPositionx addr 0x2a945f4 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch5startPositiony addr 0x2a94780 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6touchId addr 0x2a9490c size 0x1c0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch6touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6position addr 0x2a94acc size 0x1bc virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch6position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6delta addr 0x2a94c88 size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch6delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6pressure addr 0x2a94e20 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6radius addr 0x2a94fac size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch6radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6phase addr 0x2a95144 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch6phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6press addr 0x2a952e0 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch6press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6tapCount addr 0x2a954a4 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch6tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6indirectTouch addr 0x2a95630 size 0x1d4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch6indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6tap addr 0x2a95804 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch6tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6startTime addr 0x2a959c8 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch6startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6startPosition addr 0x2a95b64 size 0x1a8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch6startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6positionx addr 0x2a95d0c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6positiony addr 0x2a95ebc size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6deltaup addr 0x2a9606c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6deltadown addr 0x2a9621c size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6deltaleft addr 0x2a963d0 size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6deltaright addr 0x2a96584 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6deltax addr 0x2a96734 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6deltay addr 0x2a968c0 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6radiusx addr 0x2a96a4c size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6radiusy addr 0x2a96bd8 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6startPositionx addr 0x2a96d64 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch6startPositiony addr 0x2a96ef0 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7touchId addr 0x2a9707c size 0x1c0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch7touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7position addr 0x2a9723c size 0x1bc virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch7position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7delta addr 0x2a973f8 size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch7delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7pressure addr 0x2a97590 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7radius addr 0x2a9771c size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch7radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7phase addr 0x2a978b4 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch7phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7press addr 0x2a97a50 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch7press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7tapCount addr 0x2a97c14 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch7tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7indirectTouch addr 0x2a97da0 size 0x1d4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch7indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7tap addr 0x2a97f74 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch7tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7startTime addr 0x2a98138 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch7startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7startPosition addr 0x2a982d4 size 0x1a8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch7startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7positionx addr 0x2a9847c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7positiony addr 0x2a9862c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7deltaup addr 0x2a987dc size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7deltadown addr 0x2a9898c size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7deltaleft addr 0x2a98b40 size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7deltaright addr 0x2a98cf4 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7deltax addr 0x2a98ea4 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7deltay addr 0x2a99030 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7radiusx addr 0x2a991bc size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7radiusy addr 0x2a99348 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7startPositionx addr 0x2a994d4 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch7startPositiony addr 0x2a99660 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8touchId addr 0x2a997ec size 0x1c0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch8touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8position addr 0x2a999ac size 0x1bc virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch8position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8delta addr 0x2a99b68 size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch8delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8pressure addr 0x2a99d00 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8radius addr 0x2a99e8c size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch8radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8phase addr 0x2a9a024 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch8phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8press addr 0x2a9a1c0 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch8press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8tapCount addr 0x2a9a384 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch8tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8indirectTouch addr 0x2a9a510 size 0x1d4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch8indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8tap addr 0x2a9a6e4 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch8tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8startTime addr 0x2a9a8a8 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch8startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8startPosition addr 0x2a9aa44 size 0x1a8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch8startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8positionx addr 0x2a9abec size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8positiony addr 0x2a9ad9c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8deltaup addr 0x2a9af4c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8deltadown addr 0x2a9b0fc size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8deltaleft addr 0x2a9b2b0 size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8deltaright addr 0x2a9b464 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8deltax addr 0x2a9b614 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8deltay addr 0x2a9b7a0 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8radiusx addr 0x2a9b92c size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8radiusy addr 0x2a9bab8 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8startPositionx addr 0x2a9bc44 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch8startPositiony addr 0x2a9bdd0 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9touchId addr 0x2a9bf5c size 0x1c0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch9touchId(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9position addr 0x2a9c11c size 0x1bc virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch9position(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9delta addr 0x2a9c2d8 size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch9delta(::UnityEngine::InputSystem::Utilities::InternedString kDeltaLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9pressure addr 0x2a9c470 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9pressure(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                     ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9radius addr 0x2a9c5fc size 0x198 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch9radius(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9phase addr 0x2a9c794 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch9phase(::UnityEngine::InputSystem::Utilities::InternedString kTouchPhaseLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9press addr 0x2a9c930 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch9press(::UnityEngine::InputSystem::Utilities::InternedString kTouchPressLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9tapCount addr 0x2a9caf4 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch9tapCount(::UnityEngine::InputSystem::Utilities::InternedString kIntegerLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9indirectTouch addr 0x2a9cc80 size 0x1d4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch9indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                            ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9tap addr 0x2a9ce54 size 0x1c4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch9tap(::UnityEngine::InputSystem::Utilities::InternedString kButtonLayout,
                                                                                                  ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9startTime addr 0x2a9d018 size 0x19c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch9startTime(::UnityEngine::InputSystem::Utilities::InternedString kDoubleLayout,
                                                                                                        ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9startPosition addr 0x2a9d1b4 size 0x1a8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch9startPosition(::UnityEngine::InputSystem::Utilities::InternedString kVector2Layout,
                                                                                                             ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9positionx addr 0x2a9d35c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9positionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9positiony addr 0x2a9d50c size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9positiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9deltaup addr 0x2a9d6bc size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltaup(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9deltadown addr 0x2a9d86c size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltadown(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9deltaleft addr 0x2a9da20 size 0x1b4 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltaleft(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                      ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9deltaright addr 0x2a9dbd4 size 0x1b0 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltaright(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                       ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9deltax addr 0x2a9dd84 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltax(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9deltay addr 0x2a9df10 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltay(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                   ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9radiusx addr 0x2a9e09c size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9radiusx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9radiusy addr 0x2a9e228 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9radiusy(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                    ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9startPositionx addr 0x2a9e3b4 size 0x18c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9startPositionx(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Initialize_ctrlTouchscreentouch9startPositiony addr 0x2a9e540 size 0x118c virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9startPositiony(::UnityEngine::InputSystem::Utilities::InternedString kAxisLayout,
                                                                                                           ::UnityEngine::InputSystem::InputControl* parent);

  // Ctor Parameters [CppParam { name: "", ty: "FastTouchscreen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FastTouchscreen(FastTouchscreen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FastTouchscreen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FastTouchscreen(FastTouchscreen const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastTouchscreen();

public:
  /// @brief Field metadata offset 0xffffffff size 0x8
  static constexpr ::ConstString metadata{ u"AutoWindowSpace;Touch;Vector2;Delta;Analog;TouchPress;Button;Axis;Integer;TouchPhase;Double;Touchscreen;Pointer" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::FastTouchscreen, 0x198>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::FastTouchscreen);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::FastTouchscreen*, "UnityEngine.InputSystem", "FastTouchscreen");
