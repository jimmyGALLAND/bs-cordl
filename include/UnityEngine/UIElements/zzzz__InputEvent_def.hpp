#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/InputEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InputEvent)
namespace UnityEngine::UIElements {
class __InputEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class InputEvent;
}
namespace UnityEngine::UIElements {
class __InputEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::InputEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__InputEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::InputEvent::<>c*
class CORDL_TYPE __InputEvent____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::__InputEvent____c*  __9;

static inline ::UnityEngine::UIElements::__InputEvent____c* New_ctor() ;

/// @brief Method <.cctor>b__0_0, addr 0x49939ec, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::InputEvent* __cctor_b__0_0() ;

/// @brief Method .ctor, addr 0x49939e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::__InputEvent____c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::UIElements::__InputEvent____c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __InputEvent____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__InputEvent____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputEvent____c(__InputEvent____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputEvent____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputEvent____c(__InputEvent____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__InputEvent____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::InputEvent
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::InputEvent*
class CORDL_TYPE InputEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::InputEvent*> {
public:
// Declarations
using __c = ::UnityEngine::UIElements::__InputEvent____c;

/// @brief Field <newData>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__newData_k__BackingField, put=__cordl_internal_set__newData_k__BackingField)) ::StringW  _newData_k__BackingField;

/// @brief Field <previousData>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousData_k__BackingField, put=__cordl_internal_set__previousData_k__BackingField)) ::StringW  _previousData_k__BackingField;

 __declspec(property(put=set_newData)) ::StringW  newData;

 __declspec(property(put=set_previousData)) ::StringW  previousData;

/// @brief Method GetPooled, addr 0x4993888, size 0x84, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::InputEvent* GetPooled(::StringW  previousData, ::StringW  newData) ;

/// @brief Method Init, addr 0x4993820, size 0x58, virtual true, abstract: false, final false
inline void Init() ;

/// @brief Method LocalInit, addr 0x4993878, size 0x10, virtual false, abstract: false, final false
inline void LocalInit() ;

static inline ::UnityEngine::UIElements::InputEvent* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__newData_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__newData_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__previousData_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__previousData_k__BackingField() ;

constexpr void __cordl_internal_set__newData_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__previousData_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x499390c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_newData, addr 0x4993818, size 0x8, virtual false, abstract: false, final false
inline void set_newData(::StringW  value) ;

/// @brief Method set_previousData, addr 0x4993810, size 0x8, virtual false, abstract: false, final false
inline void set_previousData(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputEvent(InputEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputEvent(InputEvent const& ) = delete;

/// @brief Field <previousData>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::StringW  ____previousData_k__BackingField;

/// @brief Field <newData>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::StringW  ____newData_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::InputEvent, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InputEvent, ____previousData_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::InputEvent, ____newData_k__BackingField) == 0x90, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::InputEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::InputEvent*, "UnityEngine.UIElements", "InputEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__InputEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__InputEvent____c*, "UnityEngine.UIElements", "InputEvent/<>c");
