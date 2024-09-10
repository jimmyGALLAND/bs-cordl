#pragma once
// IWYU pragma private; include "UnityEngine/UI/HorizontalLayoutGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__HorizontalOrVerticalLayoutGroup_def.hpp"
CORDL_MODULE_EXPORT(HorizontalLayoutGroup)
// Forward declare root types
namespace UnityEngine::UI {
class HorizontalLayoutGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::HorizontalLayoutGroup);
// Type: UnityEngine.UI::HorizontalLayoutGroup
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 107, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::HorizontalLayoutGroup*
class CORDL_TYPE HorizontalLayoutGroup : public ::UnityEngine::UI::HorizontalOrVerticalLayoutGroup {
public:
// Declarations
/// @brief Method CalculateLayoutInputHorizontal, addr 0x4a23c38, size 0x20, virtual true, abstract: false, final false
inline void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical, addr 0x4a23ef8, size 0xc, virtual true, abstract: false, final false
inline void CalculateLayoutInputVertical() ;

static inline ::UnityEngine::UI::HorizontalLayoutGroup* New_ctor() ;

/// @brief Method SetLayoutHorizontal, addr 0x4a23f04, size 0xc, virtual true, abstract: false, final false
inline void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical, addr 0x4a24560, size 0xc, virtual true, abstract: false, final false
inline void SetLayoutVertical() ;

/// @brief Method .ctor, addr 0x4a23c20, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HorizontalLayoutGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HorizontalLayoutGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HorizontalLayoutGroup(HorizontalLayoutGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HorizontalLayoutGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HorizontalLayoutGroup(HorizontalLayoutGroup const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::HorizontalLayoutGroup, 0x70>, "Size mismatch!");

} // namespace end def UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::HorizontalLayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::HorizontalLayoutGroup*, "UnityEngine.UI", "HorizontalLayoutGroup");
