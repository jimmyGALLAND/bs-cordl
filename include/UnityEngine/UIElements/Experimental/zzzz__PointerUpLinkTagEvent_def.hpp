#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Experimental/PointerUpLinkTagEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PointerUpLinkTagEvent)
namespace UnityEngine::UIElements::Experimental {
class __PointerUpLinkTagEvent____c;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
class PointerUpLinkTagEvent;
}
namespace UnityEngine::UIElements::Experimental {
class __PointerUpLinkTagEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::__PointerUpLinkTagEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: ::PointerUpLinkTagEvent::<>c*
class CORDL_TYPE __PointerUpLinkTagEvent____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::Experimental::__PointerUpLinkTagEvent____c*  __9;

static inline ::UnityEngine::UIElements::Experimental::__PointerUpLinkTagEvent____c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x494b818, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x494b810, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::Experimental::__PointerUpLinkTagEvent____c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::UIElements::Experimental::__PointerUpLinkTagEvent____c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __PointerUpLinkTagEvent____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__PointerUpLinkTagEvent____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PointerUpLinkTagEvent____c(__PointerUpLinkTagEvent____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PointerUpLinkTagEvent____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PointerUpLinkTagEvent____c(__PointerUpLinkTagEvent____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::__PointerUpLinkTagEvent____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::Experimental
// Type: UnityEngine.UIElements.Experimental::PointerUpLinkTagEvent
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 280, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.Experimental::PointerUpLinkTagEvent*
class CORDL_TYPE PointerUpLinkTagEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent*> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::Experimental::__PointerUpLinkTagEvent____c;

/// @brief Field <linkID>k__BackingField, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__linkID_k__BackingField, put=__cordl_internal_set__linkID_k__BackingField)) ::StringW  _linkID_k__BackingField;

/// @brief Field <linkText>k__BackingField, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__linkText_k__BackingField, put=__cordl_internal_set__linkText_k__BackingField)) ::StringW  _linkText_k__BackingField;

 __declspec(property(put=set_linkID)) ::StringW  linkID;

 __declspec(property(put=set_linkText)) ::StringW  linkText;

/// @brief Method GetPooled, addr 0x494b6f8, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent* GetPooled(::UnityEngine::UIElements::IPointerEvent*  evt, ::StringW  linkID, ::StringW  linkText) ;

/// @brief Method Init, addr 0x494b698, size 0x54, virtual true, abstract: false, final false
inline void Init() ;

/// @brief Method LocalInit, addr 0x494b6ec, size 0xc, virtual false, abstract: false, final false
inline void LocalInit() ;

static inline ::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__linkID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__linkID_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__linkText_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__linkText_k__BackingField() ;

constexpr void __cordl_internal_set__linkID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__linkText_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x494b760, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_linkID, addr 0x494b688, size 0x8, virtual false, abstract: false, final false
inline void set_linkID(::StringW  value) ;

/// @brief Method set_linkText, addr 0x494b690, size 0x8, virtual false, abstract: false, final false
inline void set_linkText(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointerUpLinkTagEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointerUpLinkTagEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerUpLinkTagEvent(PointerUpLinkTagEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerUpLinkTagEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerUpLinkTagEvent(PointerUpLinkTagEvent const& ) = delete;

/// @brief Field <linkID>k__BackingField, offset: 0x108, size: 0x8, def value: None
 ::StringW  ____linkID_k__BackingField;

/// @brief Field <linkText>k__BackingField, offset: 0x110, size: 0x8, def value: None
 ::StringW  ____linkText_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent, 0x118>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent, ____linkID_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent, ____linkText_k__BackingField) == 0x110, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements::Experimental
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::PointerUpLinkTagEvent*, "UnityEngine.UIElements.Experimental", "PointerUpLinkTagEvent");
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::__PointerUpLinkTagEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::__PointerUpLinkTagEvent____c*, "UnityEngine.UIElements.Experimental", "PointerUpLinkTagEvent/<>c");
