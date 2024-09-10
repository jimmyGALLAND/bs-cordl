#pragma once
// IWYU pragma private; include "HMUI/NoTransitionsToggle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__UISelectionState_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
CORDL_MODULE_EXPORT(NoTransitionsToggle)
namespace HMUI {
struct UISelectionState;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UI {
struct __Selectable__SelectionState;
}
// Forward declare root types
namespace HMUI {
class NoTransitionsToggle;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::NoTransitionsToggle);
// Type: HMUI::NoTransitionsToggle
// SizeInfo { instance_size: 312, native_size: -1, calculated_instance_size: 312, calculated_native_size: 308, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::NoTransitionsToggle*
class CORDL_TYPE NoTransitionsToggle : public ::UnityEngine::UI::Toggle {
public:
// Declarations
/// @brief Field _selectionState, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get__selectionState, put=__cordl_internal_set__selectionState)) ::HMUI::UISelectionState  _selectionState;

 __declspec(property(get=get_selectionState)) ::HMUI::UISelectionState  selectionState;

/// @brief Field selectionStateDidChangeEvent, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectionStateDidChangeEvent, put=__cordl_internal_set_selectionStateDidChangeEvent)) ::System::Action_1<::HMUI::UISelectionState>*  selectionStateDidChangeEvent;

/// @brief Method DoStateTransition, addr 0x3976818, size 0x64, virtual true, abstract: false, final false
inline void DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState  state, bool  instant) ;

static inline ::HMUI::NoTransitionsToggle* New_ctor() ;

/// @brief Method SetSelectionState, addr 0x397687c, size 0x20, virtual false, abstract: false, final false
inline void SetSelectionState(::HMUI::UISelectionState  state) ;

/// @brief Method Start, addr 0x3976768, size 0xb0, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method <Start>b__6_0, addr 0x39768a4, size 0x30, virtual false, abstract: false, final false
inline void _Start_b__6_0(bool  isOn) ;

constexpr ::HMUI::UISelectionState const& __cordl_internal_get__selectionState() const;

constexpr ::HMUI::UISelectionState& __cordl_internal_get__selectionState() ;

constexpr ::System::Action_1<::HMUI::UISelectionState>*& __cordl_internal_get_selectionStateDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::UISelectionState>*> const& __cordl_internal_get_selectionStateDidChangeEvent() const;

constexpr void __cordl_internal_set__selectionState(::HMUI::UISelectionState  value) ;

constexpr void __cordl_internal_set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState>*  value) ;

/// @brief Method .ctor, addr 0x397689c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_selectionStateDidChangeEvent, addr 0x3976600, size 0xb4, virtual false, abstract: false, final false
inline void add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState>*  value) ;

/// @brief Method get_selectionState, addr 0x39765f8, size 0x8, virtual false, abstract: false, final false
inline ::HMUI::UISelectionState get_selectionState() ;

/// @brief Method remove_selectionStateDidChangeEvent, addr 0x39766b4, size 0xb4, virtual false, abstract: false, final false
inline void remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoTransitionsToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionsToggle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoTransitionsToggle(NoTransitionsToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionsToggle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoTransitionsToggle(NoTransitionsToggle const& ) = delete;

/// @brief Field selectionStateDidChangeEvent, offset: 0x128, size: 0x8, def value: None
 ::System::Action_1<::HMUI::UISelectionState>*  ___selectionStateDidChangeEvent;

/// @brief Field _selectionState, offset: 0x130, size: 0x4, def value: None
 ::HMUI::UISelectionState  ____selectionState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::NoTransitionsToggle, 0x138>, "Size mismatch!");

static_assert(offsetof(::HMUI::NoTransitionsToggle, ___selectionStateDidChangeEvent) == 0x128, "Offset mismatch!");

static_assert(offsetof(::HMUI::NoTransitionsToggle, ____selectionState) == 0x130, "Offset mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::NoTransitionsToggle);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::NoTransitionsToggle*, "HMUI", "NoTransitionsToggle");
