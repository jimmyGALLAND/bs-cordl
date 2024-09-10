#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ContextClickEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(ContextClickEvent)
namespace UnityEngine::UIElements {
class __ContextClickEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ContextClickEvent;
}
namespace UnityEngine::UIElements {
class __ContextClickEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ContextClickEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ContextClickEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::ContextClickEvent::<>c*
class CORDL_TYPE __ContextClickEvent____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::__ContextClickEvent____c*  __9;

static inline ::UnityEngine::UIElements::__ContextClickEvent____c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x499700c, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::ContextClickEvent* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x4997004, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::__ContextClickEvent____c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::UIElements::__ContextClickEvent____c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __ContextClickEvent____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__ContextClickEvent____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ContextClickEvent____c(__ContextClickEvent____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ContextClickEvent____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ContextClickEvent____c(__ContextClickEvent____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ContextClickEvent____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ContextClickEvent
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ContextClickEvent*
class CORDL_TYPE ContextClickEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::ContextClickEvent*> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::__ContextClickEvent____c;

static inline ::UnityEngine::UIElements::ContextClickEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x4996f60, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContextClickEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContextClickEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContextClickEvent(ContextClickEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContextClickEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContextClickEvent(ContextClickEvent const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ContextClickEvent, 0xb8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ContextClickEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ContextClickEvent*, "UnityEngine.UIElements", "ContextClickEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__ContextClickEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ContextClickEvent____c*, "UnityEngine.UIElements", "ContextClickEvent/<>c");
