#pragma once
// IWYU pragma private; include "GlobalNamespace/SafeAreaFocusedSimpleDialogPromptViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
CORDL_MODULE_EXPORT(SafeAreaFocusedSimpleDialogPromptViewController)
// Forward declare root types
namespace GlobalNamespace {
class SafeAreaFocusedSimpleDialogPromptViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController);
// Type: ::SafeAreaFocusedSimpleDialogPromptViewController
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SafeAreaFocusedSimpleDialogPromptViewController*
class CORDL_TYPE SafeAreaFocusedSimpleDialogPromptViewController : public ::GlobalNamespace::SimpleDialogPromptViewController {
public:
// Declarations
static inline ::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController* New_ctor() ;

/// @brief Method .ctor, addr 0x3b8ec9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeAreaFocusedSimpleDialogPromptViewController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeAreaFocusedSimpleDialogPromptViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeAreaFocusedSimpleDialogPromptViewController(SafeAreaFocusedSimpleDialogPromptViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeAreaFocusedSimpleDialogPromptViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeAreaFocusedSimpleDialogPromptViewController(SafeAreaFocusedSimpleDialogPromptViewController const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController, 0xa0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController*, "", "SafeAreaFocusedSimpleDialogPromptViewController");
