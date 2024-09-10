#pragma once
// IWYU pragma private; include "UnityEngine/GUIUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUIUtility)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct EventType;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct FocusType;
}
namespace UnityEngine {
class GUISkin;
}
namespace UnityEngine {
struct IMECompositionMode;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
class ObjectGUIState;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class GUIUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUIUtility);
// Type: UnityEngine::GUIUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::GUIUtility*
class CORDL_TYPE GUIUtility : public ::System::Object {
public:
// Declarations
/// @brief Field <guiIsExiting>k__BackingField, offset 0xffffffff, size 0x1 
static __declspec(property(get=getStaticF__guiIsExiting_k__BackingField, put=setStaticF__guiIsExiting_k__BackingField)) bool  _guiIsExiting_k__BackingField;

/// @brief Field beforeEventProcessed, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_beforeEventProcessed, put=setStaticF_beforeEventProcessed)) ::System::Action_2<::UnityEngine::EventType,::UnityEngine::KeyCode>*  beforeEventProcessed;

/// @brief Field cleanupRoots, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_cleanupRoots, put=setStaticF_cleanupRoots)) ::System::Action*  cleanupRoots;

/// @brief Field endContainerGUIFromException, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_endContainerGUIFromException, put=setStaticF_endContainerGUIFromException)) ::System::Func_2<::System::Exception*,bool>*  endContainerGUIFromException;

/// @brief Field guiChanged, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_guiChanged, put=setStaticF_guiChanged)) ::System::Action*  guiChanged;

/// @brief Field m_Event, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_m_Event, put=setStaticF_m_Event)) ::UnityEngine::Event*  m_Event;

/// @brief Field processEvent, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_processEvent, put=setStaticF_processEvent)) ::System::Func_3<int32_t,::System::IntPtr,bool>*  processEvent;

/// @brief Field releaseCapture, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_releaseCapture, put=setStaticF_releaseCapture)) ::System::Action*  releaseCapture;

/// @brief Field s_ControlCount, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_s_ControlCount, put=setStaticF_s_ControlCount)) int32_t  s_ControlCount;

/// @brief Field s_HasCurrentWindowKeyFocusFunc, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_HasCurrentWindowKeyFocusFunc, put=setStaticF_s_HasCurrentWindowKeyFocusFunc)) ::System::Func_1<bool>*  s_HasCurrentWindowKeyFocusFunc;

/// @brief Field s_OriginalID, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_s_OriginalID, put=setStaticF_s_OriginalID)) int32_t  s_OriginalID;

/// @brief Field s_SkinMode, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_s_SkinMode, put=setStaticF_s_SkinMode)) int32_t  s_SkinMode;

/// @brief Field takeCapture, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_takeCapture, put=setStaticF_takeCapture)) ::System::Action*  takeCapture;

/// @brief Method AlignRectToDevice, addr 0x484bcd8, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect AlignRectToDevice(::UnityEngine::Rect  rect) ;

/// @brief Method AlignRectToDevice, addr 0x484ac4c, size 0xac, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect AlignRectToDevice(::UnityEngine::Rect  rect, ByRef<int32_t>  widthInPixels, ByRef<int32_t>  heightInPixels) ;

/// @brief Method AlignRectToDevice_Injected, addr 0x484acf8, size 0x5c, virtual false, abstract: false, final false
static inline void AlignRectToDevice_Injected(ByRef<::UnityEngine::Rect>  rect, ByRef<int32_t>  widthInPixels, ByRef<int32_t>  heightInPixels, ByRef<::UnityEngine::Rect>  ret) ;

/// @brief Method BeginContainer, addr 0x484aaf8, size 0x3c, virtual false, abstract: false, final false
static inline void BeginContainer(::UnityEngine::ObjectGUIState*  objectGUIState) ;

/// @brief Method BeginContainerFromOwner, addr 0x484aabc, size 0x3c, virtual false, abstract: false, final false
static inline void BeginContainerFromOwner(::UnityEngine::ScriptableObject*  owner) ;

/// @brief Method BeginGUI, addr 0x484b5e0, size 0xac, virtual false, abstract: false, final false
static inline void BeginGUI(int32_t  skinMode, int32_t  instanceID, int32_t  useGUILayout) ;

/// @brief Method CheckForTabEvent, addr 0x484ab5c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t CheckForTabEvent(::UnityEngine::Event*  evt) ;

/// @brief Method CheckOnGUI, addr 0x4844dcc, size 0xc0, virtual false, abstract: false, final false
static inline void CheckOnGUI() ;

/// @brief Method DestroyGUI, addr 0x484b7b8, size 0x58, virtual false, abstract: false, final false
static inline void DestroyGUI(int32_t  instanceID) ;

/// @brief Method EndContainer, addr 0x484b558, size 0x88, virtual false, abstract: false, final false
static inline void EndContainer() ;

/// @brief Method EndContainerGUIFromException, addr 0x484bb04, size 0xa0, virtual false, abstract: false, final false
static inline bool EndContainerGUIFromException(::System::Exception*  exception) ;

/// @brief Method EndGUI, addr 0x484b810, size 0x22c, virtual false, abstract: false, final false
static inline void EndGUI(int32_t  layoutType) ;

/// @brief Method EndGUIFromException, addr 0x484ba3c, size 0x74, virtual false, abstract: false, final false
static inline bool EndGUIFromException(::System::Exception*  exception) ;

/// @brief Method ExitGUI, addr 0x484b2a4, size 0x34, virtual false, abstract: false, final false
static inline void ExitGUI() ;

/// @brief Method GetControlID, addr 0x4845a34, size 0x9c, virtual false, abstract: false, final false
static inline int32_t GetControlID(int32_t  hint, ::UnityEngine::FocusType  focus) ;

/// @brief Method GetControlID, addr 0x484aa14, size 0xa8, virtual false, abstract: false, final false
static inline int32_t GetControlID(int32_t  hint, ::UnityEngine::FocusType  focusType, ::UnityEngine::Rect  rect) ;

/// @brief Method GetDefaultSkin, addr 0x4844fd4, size 0xa8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GUISkin> GetDefaultSkin() ;

/// @brief Method HasFocusableControls, addr 0x484abe8, size 0x28, virtual false, abstract: false, final false
static inline bool HasFocusableControls() ;

/// @brief Method HasKeyFocus, addr 0x484a50c, size 0xc0, virtual false, abstract: false, final false
static inline bool HasKeyFocus(int32_t  controlID) ;

/// @brief Method HitTest, addr 0x484bdb0, size 0xc0, virtual false, abstract: false, final false
static inline bool HitTest(::UnityEngine::Rect  rect, ::UnityEngine::Vector2  point, bool  isDirectManipulationDevice) ;

/// @brief Method HitTest, addr 0x484bd64, size 0x4c, virtual false, abstract: false, final false
static inline bool HitTest(::UnityEngine::Rect  rect, ::UnityEngine::Vector2  point, int32_t  offset) ;

/// @brief Method Internal_EndContainer, addr 0x484ab34, size 0x28, virtual false, abstract: false, final false
static inline void Internal_EndContainer() ;

/// @brief Method Internal_ExitGUI, addr 0x484af70, size 0x28, virtual false, abstract: false, final false
static inline void Internal_ExitGUI() ;

/// @brief Method Internal_GetControlID, addr 0x484a924, size 0x9c, virtual false, abstract: false, final false
static inline int32_t Internal_GetControlID(int32_t  hint, ::UnityEngine::FocusType  focusType, ::UnityEngine::Rect  rect) ;

/// @brief Method Internal_GetControlID_Injected, addr 0x484a9c0, size 0x54, virtual false, abstract: false, final false
static inline int32_t Internal_GetControlID_Injected(int32_t  hint, ::UnityEngine::FocusType  focusType, ByRef<::UnityEngine::Rect>  rect) ;

/// @brief Method Internal_GetDefaultSkin, addr 0x484af34, size 0x3c, virtual false, abstract: false, final false
static inline ::System::Object* Internal_GetDefaultSkin(int32_t  skinMode) ;

/// @brief Method Internal_GetHotControl, addr 0x484ae6c, size 0x28, virtual false, abstract: false, final false
static inline int32_t Internal_GetHotControl() ;

/// @brief Method Internal_GetKeyboardControl, addr 0x484ae94, size 0x28, virtual false, abstract: false, final false
static inline int32_t Internal_GetKeyboardControl() ;

/// @brief Method Internal_SetHotControl, addr 0x484aebc, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_SetHotControl(int32_t  value) ;

/// @brief Method Internal_SetKeyboardControl, addr 0x484aef8, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_SetKeyboardControl(int32_t  value) ;

/// @brief Method IsExitGUIException, addr 0x484bba4, size 0x84, virtual false, abstract: false, final false
static inline bool IsExitGUIException(::System::Exception*  exception) ;

/// @brief Method MarkGUIChanged, addr 0x484af98, size 0x74, virtual false, abstract: false, final false
static inline void MarkGUIChanged() ;

/// @brief Method OwnsId, addr 0x484ac10, size 0x3c, virtual false, abstract: false, final false
static inline bool OwnsId(int32_t  id) ;

/// @brief Method ProcessEvent, addr 0x484b398, size 0x1c0, virtual false, abstract: false, final false
static inline void ProcessEvent(int32_t  instanceID, ::System::IntPtr  nativeEventPtr, ByRef<bool>  result) ;

/// @brief Method RemoveCapture, addr 0x484b154, size 0x74, virtual false, abstract: false, final false
static inline void RemoveCapture() ;

/// @brief Method ResetGlobalState, addr 0x484b68c, size 0x12c, virtual false, abstract: false, final false
static inline void ResetGlobalState() ;

/// @brief Method RoundToPixelGrid, addr 0x484bc28, size 0xb0, virtual false, abstract: false, final false
static inline float_t RoundToPixelGrid(float_t  v) ;

/// @brief Method SetKeyboardControlToFirstControlId, addr 0x484ab98, size 0x28, virtual false, abstract: false, final false
static inline void SetKeyboardControlToFirstControlId() ;

/// @brief Method SetKeyboardControlToLastControlId, addr 0x484abc0, size 0x28, virtual false, abstract: false, final false
static inline void SetKeyboardControlToLastControlId() ;

/// @brief Method ShouldRethrowException, addr 0x484bab0, size 0x54, virtual false, abstract: false, final false
static inline bool ShouldRethrowException(::System::Exception*  exception) ;

/// @brief Method TakeCapture, addr 0x484b0e0, size 0x74, virtual false, abstract: false, final false
static inline void TakeCapture() ;

static inline bool getStaticF__guiIsExiting_k__BackingField() ;

static inline ::System::Action_2<::UnityEngine::EventType,::UnityEngine::KeyCode>* getStaticF_beforeEventProcessed() ;

static inline ::System::Action* getStaticF_cleanupRoots() ;

static inline ::System::Func_2<::System::Exception*,bool>* getStaticF_endContainerGUIFromException() ;

static inline ::System::Action* getStaticF_guiChanged() ;

static inline ::UnityEngine::Event* getStaticF_m_Event() ;

static inline ::System::Func_3<int32_t,::System::IntPtr,bool>* getStaticF_processEvent() ;

static inline ::System::Action* getStaticF_releaseCapture() ;

static inline int32_t getStaticF_s_ControlCount() ;

static inline ::System::Func_1<bool>* getStaticF_s_HasCurrentWindowKeyFocusFunc() ;

static inline int32_t getStaticF_s_OriginalID() ;

static inline int32_t getStaticF_s_SkinMode() ;

static inline ::System::Action* getStaticF_takeCapture() ;

/// @brief Method get_compositionString, addr 0x484ad54, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_compositionString() ;

/// @brief Method get_guiDepth, addr 0x484a898, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_guiDepth() ;

/// @brief Method get_hotControl, addr 0x484a4a4, size 0x68, virtual false, abstract: false, final false
static inline int32_t get_hotControl() ;

/// @brief Method get_keyboardControl, addr 0x484b1c8, size 0x68, virtual false, abstract: false, final false
static inline int32_t get_keyboardControl() ;

/// @brief Method get_pixelsPerPoint, addr 0x4847668, size 0x28, virtual false, abstract: false, final false
static inline float_t get_pixelsPerPoint() ;

/// @brief Method get_systemCopyBuffer, addr 0x484a8c0, size 0x28, virtual false, abstract: false, final false
static inline ::StringW get_systemCopyBuffer() ;

/// @brief Method get_textFieldInput, addr 0x48444e8, size 0x28, virtual false, abstract: false, final false
static inline bool get_textFieldInput() ;

static inline void setStaticF__guiIsExiting_k__BackingField(bool  value) ;

static inline void setStaticF_beforeEventProcessed(::System::Action_2<::UnityEngine::EventType,::UnityEngine::KeyCode>*  value) ;

static inline void setStaticF_cleanupRoots(::System::Action*  value) ;

static inline void setStaticF_endContainerGUIFromException(::System::Func_2<::System::Exception*,bool>*  value) ;

static inline void setStaticF_guiChanged(::System::Action*  value) ;

static inline void setStaticF_m_Event(::UnityEngine::Event*  value) ;

static inline void setStaticF_processEvent(::System::Func_3<int32_t,::System::IntPtr,bool>*  value) ;

static inline void setStaticF_releaseCapture(::System::Action*  value) ;

static inline void setStaticF_s_ControlCount(int32_t  value) ;

static inline void setStaticF_s_HasCurrentWindowKeyFocusFunc(::System::Func_1<bool>*  value) ;

static inline void setStaticF_s_OriginalID(int32_t  value) ;

static inline void setStaticF_s_SkinMode(int32_t  value) ;

static inline void setStaticF_takeCapture(::System::Action*  value) ;

/// @brief Method set_compositionCursorPos, addr 0x484adb8, size 0x78, virtual false, abstract: false, final false
static inline void set_compositionCursorPos(::UnityEngine::Vector2  value) ;

/// @brief Method set_compositionCursorPos_Injected, addr 0x484ae30, size 0x3c, virtual false, abstract: false, final false
static inline void set_compositionCursorPos_Injected(ByRef<::UnityEngine::Vector2>  value) ;

/// @brief Method set_guiIsExiting, addr 0x484b00c, size 0x60, virtual false, abstract: false, final false
static inline void set_guiIsExiting(bool  value) ;

/// @brief Method set_hotControl, addr 0x484b06c, size 0x74, virtual false, abstract: false, final false
static inline void set_hotControl(int32_t  value) ;

/// @brief Method set_imeCompositionMode, addr 0x484ad7c, size 0x3c, virtual false, abstract: false, final false
static inline void set_imeCompositionMode(::UnityEngine::IMECompositionMode  value) ;

/// @brief Method set_keyboardControl, addr 0x484b230, size 0x74, virtual false, abstract: false, final false
static inline void set_keyboardControl(int32_t  value) ;

/// @brief Method set_systemCopyBuffer, addr 0x484a8e8, size 0x3c, virtual false, abstract: false, final false
static inline void set_systemCopyBuffer(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUIUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUIUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GUIUtility(GUIUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUIUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUIUtility(GUIUtility const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUIUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::GUIUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIUtility*, "UnityEngine", "GUIUtility");
