#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizedHoverHint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__LocalizedTextComponent_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizedHoverHint)
namespace BGLib::Polyglot {
struct LanguageDirection;
}
namespace HMUI {
class HoverHint;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizedHoverHint;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalizedHoverHint);
// Type: ::LocalizedHoverHint
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LocalizedHoverHint*
class CORDL_TYPE LocalizedHoverHint : public ::BGLib::Polyglot::LocalizedTextComponent_1<::UnityW<::HMUI::HoverHint>> {
public:
// Declarations
static inline ::GlobalNamespace::LocalizedHoverHint* New_ctor() ;

/// @brief Method SetText, addr 0x3b72d9c, size 0x18, virtual true, abstract: false, final false
inline void SetText(::HMUI::HoverHint*  hoverHint, ::StringW  value) ;

/// @brief Method UpdateAlignment, addr 0x3b72db4, size 0x4, virtual true, abstract: false, final false
inline void UpdateAlignment(::HMUI::HoverHint*  hoverHint, ::BGLib::Polyglot::LanguageDirection  direction) ;

/// @brief Method .ctor, addr 0x3b72db8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedHoverHint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedHoverHint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedHoverHint(LocalizedHoverHint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedHoverHint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedHoverHint(LocalizedHoverHint const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalizedHoverHint, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalizedHoverHint);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedHoverHint*, "", "LocalizedHoverHint");
