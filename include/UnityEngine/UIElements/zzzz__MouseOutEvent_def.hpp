#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseOutEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseOutEvent)
namespace UnityEngine::UIElements {
class __MouseOutEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseOutEvent;
}
namespace UnityEngine::UIElements {
class __MouseOutEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseOutEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__MouseOutEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::MouseOutEvent::<>c*
class CORDL_TYPE __MouseOutEvent____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::__MouseOutEvent____c*  __9;

static inline ::UnityEngine::UIElements::__MouseOutEvent____c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x49985e0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::MouseOutEvent* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x49985d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::__MouseOutEvent____c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::UIElements::__MouseOutEvent____c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __MouseOutEvent____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__MouseOutEvent____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MouseOutEvent____c(__MouseOutEvent____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MouseOutEvent____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MouseOutEvent____c(__MouseOutEvent____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MouseOutEvent____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::MouseOutEvent
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MouseOutEvent*
class CORDL_TYPE MouseOutEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseOutEvent*> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::__MouseOutEvent____c;

static inline ::UnityEngine::UIElements::MouseOutEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x4998534, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MouseOutEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MouseOutEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseOutEvent(MouseOutEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseOutEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseOutEvent(MouseOutEvent const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseOutEvent, 0xb8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseOutEvent*, "UnityEngine.UIElements", "MouseOutEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__MouseOutEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MouseOutEvent____c*, "UnityEngine.UIElements", "MouseOutEvent/<>c");
