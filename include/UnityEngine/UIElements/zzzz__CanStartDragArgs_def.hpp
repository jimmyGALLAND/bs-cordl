#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CanStartDragArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CanStartDragArgs)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct CanStartDragArgs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::CanStartDragArgs);
// Type: UnityEngine.UIElements::CanStartDragArgs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::CanStartDragArgs
struct CORDL_TYPE CanStartDragArgs {
public:
// Declarations
/// @brief Method .ctor, addr 0x4983e24, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::VisualElement*  draggedElement, int32_t  id, ::System::Collections::Generic::IEnumerable_1<int32_t>*  selectedIds) ;

// Ctor Parameters []
// @brief default ctor
constexpr CanStartDragArgs() ;

// Ctor Parameters [CppParam { name: "draggedElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "selectedIds", ty: "::System::Collections::Generic::IEnumerable_1<int32_t>*", modifiers: "", def_value: None }]
constexpr CanStartDragArgs(::UnityEngine::UIElements::VisualElement*  draggedElement, int32_t  id, ::System::Collections::Generic::IEnumerable_1<int32_t>*  selectedIds) noexcept;

/// @brief Field draggedElement, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  draggedElement;

/// @brief Field id, offset: 0x8, size: 0x4, def value: None
 int32_t  id;

/// @brief Field selectedIds, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<int32_t>*  selectedIds;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CanStartDragArgs, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CanStartDragArgs, draggedElement) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CanStartDragArgs, id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CanStartDragArgs, selectedIds) == 0x10, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CanStartDragArgs, "UnityEngine.UIElements", "CanStartDragArgs");
