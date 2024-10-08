#pragma once
// IWYU pragma private; include "GlobalNamespace/HelpMenuViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HelpMenuViewController)
namespace HMUI {
class SegmentedControl;
}
namespace HMUI {
class TextSegmentedControl;
}
namespace HMUI {
class ViewController;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class HelpMenuViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HelpMenuViewController);
// Type: ::HelpMenuViewController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HelpMenuViewController*
class CORDL_TYPE HelpMenuViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief Field _helpMenuSegmentedControl, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__helpMenuSegmentedControl, put=__cordl_internal_set__helpMenuSegmentedControl)) ::UnityW<::HMUI::TextSegmentedControl>  _helpMenuSegmentedControl;

/// @brief Field _viewControllers, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__viewControllers, put=__cordl_internal_set__viewControllers)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>,::StringW>>*  _viewControllers;

/// @brief Field didSelectHelpSubMenuEvent, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_didSelectHelpSubMenuEvent, put=__cordl_internal_set_didSelectHelpSubMenuEvent)) ::System::Action_1<int32_t>*  didSelectHelpSubMenuEvent;

/// @brief Method DidActivate, addr 0x3b853ac, size 0x2b8, virtual true, abstract: false, final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method HandleHelpMenuSegmentedControlDidSelectCell, addr 0x3b85664, size 0x24, virtual false, abstract: false, final false
inline void HandleHelpMenuSegmentedControlDidSelectCell(::HMUI::SegmentedControl*  segmentedControl, int32_t  cellIdx) ;

/// @brief Method Init, addr 0x3b853a4, size 0x8, virtual false, abstract: false, final false
inline void Init(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>,::StringW>>*  viewControllers) ;

static inline ::GlobalNamespace::HelpMenuViewController* New_ctor() ;

constexpr ::UnityW<::HMUI::TextSegmentedControl> const& __cordl_internal_get__helpMenuSegmentedControl() const;

constexpr ::UnityW<::HMUI::TextSegmentedControl>& __cordl_internal_get__helpMenuSegmentedControl() ;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>,::StringW>>*& __cordl_internal_get__viewControllers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>,::StringW>>*> const& __cordl_internal_get__viewControllers() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_didSelectHelpSubMenuEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __cordl_internal_get_didSelectHelpSubMenuEvent() const;

constexpr void __cordl_internal_set__helpMenuSegmentedControl(::UnityW<::HMUI::TextSegmentedControl>  value) ;

constexpr void __cordl_internal_set__viewControllers(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>,::StringW>>*  value) ;

constexpr void __cordl_internal_set_didSelectHelpSubMenuEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x3b85688, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_didSelectHelpSubMenuEvent, addr 0x3b85244, size 0xb0, virtual false, abstract: false, final false
inline void add_didSelectHelpSubMenuEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method remove_didSelectHelpSubMenuEvent, addr 0x3b852f4, size 0xb0, virtual false, abstract: false, final false
inline void remove_didSelectHelpSubMenuEvent(::System::Action_1<int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HelpMenuViewController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelpMenuViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelpMenuViewController(HelpMenuViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelpMenuViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelpMenuViewController(HelpMenuViewController const& ) = delete;

/// @brief Field _helpMenuSegmentedControl, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::HMUI::TextSegmentedControl>  ____helpMenuSegmentedControl;

/// @brief Field didSelectHelpSubMenuEvent, offset: 0x80, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___didSelectHelpSubMenuEvent;

/// @brief Field _viewControllers, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>,::StringW>>*  ____viewControllers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HelpMenuViewController, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpMenuViewController, ____helpMenuSegmentedControl) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpMenuViewController, ___didSelectHelpSubMenuEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpMenuViewController, ____viewControllers) == 0x88, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HelpMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HelpMenuViewController*, "", "HelpMenuViewController");
