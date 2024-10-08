#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FocusInEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(FocusInEvent)
namespace UnityEngine::UIElements {
class __FocusInEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusInEvent;
}
namespace UnityEngine::UIElements {
class __FocusInEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::FocusInEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__FocusInEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::FocusInEvent::<>c*
class CORDL_TYPE __FocusInEvent____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::__FocusInEvent____c*  __9;

static inline ::UnityEngine::UIElements::__FocusInEvent____c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x4992b94, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::FocusInEvent* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x4992b8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::__FocusInEvent____c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::UIElements::__FocusInEvent____c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __FocusInEvent____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__FocusInEvent____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FocusInEvent____c(__FocusInEvent____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FocusInEvent____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FocusInEvent____c(__FocusInEvent____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__FocusInEvent____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::FocusInEvent
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 161, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::FocusInEvent*
class CORDL_TYPE FocusInEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::FocusInEvent*> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::__FocusInEvent____c;

/// @brief Method Init, addr 0x4992a7c, size 0x54, virtual true, abstract: false, final false
inline void Init() ;

/// @brief Method LocalInit, addr 0x4992ad0, size 0xc, virtual false, abstract: false, final false
inline void LocalInit() ;

static inline ::UnityEngine::UIElements::FocusInEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x4992adc, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FocusInEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FocusInEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FocusInEvent(FocusInEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FocusInEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FocusInEvent(FocusInEvent const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusInEvent, 0xa8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::FocusInEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusInEvent*, "UnityEngine.UIElements", "FocusInEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__FocusInEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__FocusInEvent____c*, "UnityEngine.UIElements", "FocusInEvent/<>c");
