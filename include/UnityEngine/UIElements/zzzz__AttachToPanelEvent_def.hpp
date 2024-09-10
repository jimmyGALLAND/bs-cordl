#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/AttachToPanelEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelChangedEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(AttachToPanelEvent)
namespace UnityEngine::UIElements {
class __AttachToPanelEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
class __AttachToPanelEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::AttachToPanelEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__AttachToPanelEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::AttachToPanelEvent::<>c*
class CORDL_TYPE __AttachToPanelEvent____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::__AttachToPanelEvent____c*  __9;

static inline ::UnityEngine::UIElements::__AttachToPanelEvent____c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x4999c9c, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::AttachToPanelEvent* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x4999c94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::__AttachToPanelEvent____c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::UIElements::__AttachToPanelEvent____c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __AttachToPanelEvent____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__AttachToPanelEvent____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AttachToPanelEvent____c(__AttachToPanelEvent____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AttachToPanelEvent____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AttachToPanelEvent____c(__AttachToPanelEvent____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__AttachToPanelEvent____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::AttachToPanelEvent
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::AttachToPanelEvent*
class CORDL_TYPE AttachToPanelEvent : public ::UnityEngine::UIElements::PanelChangedEventBase_1<::UnityEngine::UIElements::AttachToPanelEvent*> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::__AttachToPanelEvent____c;

static inline ::UnityEngine::UIElements::AttachToPanelEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x4999bf0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttachToPanelEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttachToPanelEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AttachToPanelEvent(AttachToPanelEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttachToPanelEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttachToPanelEvent(AttachToPanelEvent const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::AttachToPanelEvent, 0x98>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::AttachToPanelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AttachToPanelEvent*, "UnityEngine.UIElements", "AttachToPanelEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__AttachToPanelEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__AttachToPanelEvent____c*, "UnityEngine.UIElements", "AttachToPanelEvent/<>c");
