#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseEnterWindowEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseEnterWindowEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class __MouseEnterWindowEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseEnterWindowEvent;
}
namespace UnityEngine::UIElements {
class __MouseEnterWindowEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseEnterWindowEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__MouseEnterWindowEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::MouseEnterWindowEvent::<>c*
class CORDL_TYPE __MouseEnterWindowEvent____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::__MouseEnterWindowEvent____c*  __9;

static inline ::UnityEngine::UIElements::__MouseEnterWindowEvent____c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x4997cb8, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::MouseEnterWindowEvent* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x4997cb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::__MouseEnterWindowEvent____c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::UIElements::__MouseEnterWindowEvent____c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __MouseEnterWindowEvent____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__MouseEnterWindowEvent____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MouseEnterWindowEvent____c(__MouseEnterWindowEvent____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MouseEnterWindowEvent____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MouseEnterWindowEvent____c(__MouseEnterWindowEvent____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MouseEnterWindowEvent____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::MouseEnterWindowEvent
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MouseEnterWindowEvent*
class CORDL_TYPE MouseEnterWindowEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseEnterWindowEvent*> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::__MouseEnterWindowEvent____c;

/// @brief Method Init, addr 0x4997a44, size 0x54, virtual true, abstract: false, final false
inline void Init() ;

/// @brief Method LocalInit, addr 0x4997a98, size 0xc, virtual false, abstract: false, final false
inline void LocalInit() ;

static inline ::UnityEngine::UIElements::MouseEnterWindowEvent* New_ctor() ;

/// @brief Method PostDispatch, addr 0x4997af8, size 0x15c, virtual true, abstract: false, final false
inline void PostDispatch(::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method .ctor, addr 0x4997aa4, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MouseEnterWindowEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MouseEnterWindowEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseEnterWindowEvent(MouseEnterWindowEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseEnterWindowEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseEnterWindowEvent(MouseEnterWindowEvent const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseEnterWindowEvent, 0xb8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseEnterWindowEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseEnterWindowEvent*, "UnityEngine.UIElements", "MouseEnterWindowEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__MouseEnterWindowEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MouseEnterWindowEvent____c*, "UnityEngine.UIElements", "MouseEnterWindowEvent/<>c");
