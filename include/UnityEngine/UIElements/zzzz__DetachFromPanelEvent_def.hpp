#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DetachFromPanelEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelChangedEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(DetachFromPanelEvent)
namespace UnityEngine::UIElements {
class __DetachFromPanelEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
class __DetachFromPanelEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DetachFromPanelEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DetachFromPanelEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DetachFromPanelEvent::<>c*
class CORDL_TYPE __DetachFromPanelEvent____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::__DetachFromPanelEvent____c*  __9;

static inline ::UnityEngine::UIElements::__DetachFromPanelEvent____c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x4999e7c, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::DetachFromPanelEvent* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x4999e74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::__DetachFromPanelEvent____c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::UIElements::__DetachFromPanelEvent____c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __DetachFromPanelEvent____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__DetachFromPanelEvent____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DetachFromPanelEvent____c(__DetachFromPanelEvent____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DetachFromPanelEvent____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DetachFromPanelEvent____c(__DetachFromPanelEvent____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DetachFromPanelEvent____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::DetachFromPanelEvent
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::DetachFromPanelEvent*
class CORDL_TYPE DetachFromPanelEvent : public ::UnityEngine::UIElements::PanelChangedEventBase_1<::UnityEngine::UIElements::DetachFromPanelEvent*> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::__DetachFromPanelEvent____c;

static inline ::UnityEngine::UIElements::DetachFromPanelEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x4999dd0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DetachFromPanelEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DetachFromPanelEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DetachFromPanelEvent(DetachFromPanelEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DetachFromPanelEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DetachFromPanelEvent(DetachFromPanelEvent const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DetachFromPanelEvent, 0x98>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DetachFromPanelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DetachFromPanelEvent*, "UnityEngine.UIElements", "DetachFromPanelEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__DetachFromPanelEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DetachFromPanelEvent____c*, "UnityEngine.UIElements", "DetachFromPanelEvent/<>c");
