#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/MatchResultInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PseudoStates_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MatchResultInfo)
namespace UnityEngine::UIElements {
struct PseudoStates;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::MatchResultInfo);
// Type: UnityEngine.UIElements.StyleSheets::MatchResultInfo
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// CS Name: ::UnityEngine.UIElements.StyleSheets::MatchResultInfo
struct CORDL_TYPE MatchResultInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0x4943578, size 0x10, virtual false, abstract: false, final false
inline void _ctor(bool  success, ::UnityEngine::UIElements::PseudoStates  triggerPseudoMask, ::UnityEngine::UIElements::PseudoStates  dependencyPseudoMask) ;

// Ctor Parameters []
// @brief default ctor
constexpr MatchResultInfo() ;

// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "triggerPseudoMask", ty: "::UnityEngine::UIElements::PseudoStates", modifiers: "", def_value: None }, CppParam { name: "dependencyPseudoMask", ty: "::UnityEngine::UIElements::PseudoStates", modifiers: "", def_value: None }]
constexpr MatchResultInfo(bool  success, ::UnityEngine::UIElements::PseudoStates  triggerPseudoMask, ::UnityEngine::UIElements::PseudoStates  dependencyPseudoMask) noexcept;

/// @brief Field success, offset: 0x0, size: 0x1, def value: None
 bool  success;

/// @brief Field triggerPseudoMask, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::UIElements::PseudoStates  triggerPseudoMask;

/// @brief Field dependencyPseudoMask, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::UIElements::PseudoStates  dependencyPseudoMask;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::MatchResultInfo, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::MatchResultInfo, success) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::MatchResultInfo, triggerPseudoMask) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::MatchResultInfo, dependencyPseudoMask) == 0x8, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::MatchResultInfo, "UnityEngine.UIElements.StyleSheets", "MatchResultInfo");
