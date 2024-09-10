#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/FastMouse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Mouse_def.hpp"
CORDL_MODULE_EXPORT(FastMouse)
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
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::LowLevel {
class IEventMerger;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateCallbackReceiver;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class FastMouse;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::FastMouse);
// Type: UnityEngine.InputSystem::FastMouse
// SizeInfo { instance_size: 472, native_size: -1, calculated_instance_size: 472, calculated_native_size: 472, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::FastMouse*
class CORDL_TYPE FastMouse : public ::UnityEngine::InputSystem::Mouse {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IEventMerger"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IEventMerger*() noexcept;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver*() noexcept;

/// @brief Method Initialize_ctrlMousebackButton, addr 0x4508564, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMousebackButton(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMouseclickCount, addr 0x4508e00, size 0x1b0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlMouseclickCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousedelta, addr 0x45077f0, size 0x1b4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlMousedelta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousedeltadown, addr 0x450955c, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousedeltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousedeltaleft, addr 0x4509750, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousedeltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousedeltaright, addr 0x4509944, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousedeltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousedeltaup, addr 0x4509370, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousedeltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousedeltax, addr 0x4509b30, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousedeltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousedeltay, addr 0x4509cf4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousedeltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousedisplayIndex, addr 0x4508c60, size 0x1a0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlMousedisplayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMouseforwardButton, addr 0x4508380, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMouseforwardButton(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMouseleftButton, addr 0x4507d38, size 0x21c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMouseleftButton(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousemiddleButton, addr 0x4508170, size 0x210, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMousemiddleButton(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousepointerId, addr 0x4508ad4, size 0x18c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlMousepointerId(::UnityEngine::InputSystem::Utilities::InternedString  kDigitalLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMouseposition, addr 0x4507624, size 0x1cc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlMouseposition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousepositionx, addr 0x4508fb0, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousepositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousepositiony, addr 0x4509190, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousepositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousepress, addr 0x4507b50, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMousepress(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousepressure, addr 0x4508748, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousepressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMouseradius, addr 0x450891c, size 0x1b8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlMouseradius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMouseradiusx, addr 0x450aa2c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMouseradiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMouseradiusy, addr 0x450abf0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMouseradiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMouserightButton, addr 0x4507f54, size 0x21c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlMouserightButton(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousescroll, addr 0x45079a4, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlMousescroll(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousescrolldown, addr 0x450a0a4, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousescrolldown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousescrollleft, addr 0x450a298, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousescrollleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousescrollright, addr 0x450a48c, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousescrollright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousescrollup, addr 0x4509eb8, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousescrollup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousescrollx, addr 0x450a678, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousescrollx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlMousescrolly, addr 0x450a848, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlMousescrolly(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method MergeForward, addr 0x450b0ac, size 0x114, virtual false, abstract: false, final false
static inline bool MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr  currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  nextEventPtr) ;

static inline ::UnityEngine::InputSystem::FastMouse* New_ctor() ;

/// @brief Method OnNextUpdate, addr 0x450adb4, size 0x144, virtual false, abstract: false, final false
inline void OnNextUpdate() ;

/// @brief Method OnStateEvent, addr 0x450aef8, size 0x1ac, virtual false, abstract: false, final false
inline void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IEventMerger.MergeForward, addr 0x450b1c0, size 0xc, virtual true, abstract: false, final true
inline bool UnityEngine_InputSystem_LowLevel_IEventMerger_MergeForward(::UnityEngine::InputSystem::LowLevel::InputEventPtr  currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  nextEventPtr) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate, addr 0x450b0a4, size 0x4, virtual true, abstract: false, final true
inline void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate() ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent, addr 0x450b0a8, size 0x4, virtual true, abstract: false, final true
inline void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// @brief Method .ctor, addr 0x4506ce4, size 0x940, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IEventMerger"
constexpr ::UnityEngine::InputSystem::LowLevel::IEventMerger* i___UnityEngine__InputSystem__LowLevel__IEventMerger() noexcept;

/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver* i___UnityEngine__InputSystem__LowLevel__IInputStateCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FastMouse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FastMouse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FastMouse(FastMouse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastMouse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastMouse(FastMouse const& ) = delete;

/// @brief Field metadata offset 0xffffffff size 0x8
static constexpr ::ConstString  metadata{u"AutoWindowSpace;Vector2;Delta;Button;Axis;Digital;Integer;Mouse;Pointer"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::FastMouse, 0x1d8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::FastMouse);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::FastMouse*, "UnityEngine.InputSystem", "FastMouse");
