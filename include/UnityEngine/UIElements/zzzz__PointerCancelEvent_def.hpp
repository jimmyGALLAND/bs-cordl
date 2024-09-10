#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerCancelEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerCancelEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class __PointerCancelEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
class __PointerCancelEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerCancelEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__PointerCancelEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::PointerCancelEvent::<>c*
class CORDL_TYPE __PointerCancelEvent____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::__PointerCancelEvent____c*  __9;

static inline ::UnityEngine::UIElements::__PointerCancelEvent____c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x499d724, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::PointerCancelEvent* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x499d71c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::__PointerCancelEvent____c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::UIElements::__PointerCancelEvent____c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __PointerCancelEvent____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__PointerCancelEvent____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PointerCancelEvent____c(__PointerCancelEvent____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PointerCancelEvent____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PointerCancelEvent____c(__PointerCancelEvent____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PointerCancelEvent____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::PointerCancelEvent
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 262, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerCancelEvent*
class CORDL_TYPE PointerCancelEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerCancelEvent*> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::__PointerCancelEvent____c;

/// @brief Method Init, addr 0x499d1d0, size 0x50, virtual true, abstract: false, final false
inline void Init() ;

/// @brief Method LocalInit, addr 0x499d220, size 0x104, virtual false, abstract: false, final false
inline void LocalInit() ;

static inline ::UnityEngine::UIElements::PointerCancelEvent* New_ctor() ;

/// @brief Method PostDispatch, addr 0x499d374, size 0x34c, virtual true, abstract: false, final false
inline void PostDispatch(::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method .ctor, addr 0x499d324, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointerCancelEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointerCancelEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerCancelEvent(PointerCancelEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerCancelEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerCancelEvent(PointerCancelEvent const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerCancelEvent, 0x108>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerCancelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCancelEvent*, "UnityEngine.UIElements", "PointerCancelEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__PointerCancelEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PointerCancelEvent____c*, "UnityEngine.UIElements", "PointerCancelEvent/<>c");
