#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseEnterEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseEnterEvent)
namespace UnityEngine::UIElements {
class __MouseEnterEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseEnterEvent;
}
namespace UnityEngine::UIElements {
class __MouseEnterEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseEnterEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__MouseEnterEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::MouseEnterEvent::<>c*
class CORDL_TYPE __MouseEnterEvent____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::__MouseEnterEvent____c*  __9;

static inline ::UnityEngine::UIElements::__MouseEnterEvent____c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x49976c4, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::MouseEnterEvent* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x49976bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::__MouseEnterEvent____c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::UIElements::__MouseEnterEvent____c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __MouseEnterEvent____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__MouseEnterEvent____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MouseEnterEvent____c(__MouseEnterEvent____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MouseEnterEvent____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MouseEnterEvent____c(__MouseEnterEvent____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MouseEnterEvent____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::MouseEnterEvent
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MouseEnterEvent*
class CORDL_TYPE MouseEnterEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseEnterEvent*> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::__MouseEnterEvent____c;

/// @brief Method Init, addr 0x49975ac, size 0x54, virtual true, abstract: false, final false
inline void Init() ;

/// @brief Method LocalInit, addr 0x4997600, size 0xc, virtual false, abstract: false, final false
inline void LocalInit() ;

static inline ::UnityEngine::UIElements::MouseEnterEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x499760c, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MouseEnterEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MouseEnterEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseEnterEvent(MouseEnterEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseEnterEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseEnterEvent(MouseEnterEvent const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseEnterEvent, 0xb8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseEnterEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseEnterEvent*, "UnityEngine.UIElements", "MouseEnterEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__MouseEnterEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MouseEnterEvent____c*, "UnityEngine.UIElements", "MouseEnterEvent/<>c");
