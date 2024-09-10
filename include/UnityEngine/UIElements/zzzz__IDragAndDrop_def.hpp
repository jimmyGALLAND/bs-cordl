#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IDragAndDrop.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDragAndDrop)
namespace UnityEngine::UIElements {
class DragAndDropData;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine::UIElements {
struct StartDragArgs;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IDragAndDrop;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IDragAndDrop);
// Type: UnityEngine.UIElements::IDragAndDrop
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IDragAndDrop*
class CORDL_TYPE IDragAndDrop {
public:
// Declarations
 __declspec(property(get=get_data)) ::UnityEngine::UIElements::DragAndDropData*  data;

/// @brief Method AcceptDrag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AcceptDrag() ;

/// @brief Method DragCleanup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DragCleanup() ;

/// @brief Method SetVisualMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetVisualMode(::UnityEngine::UIElements::DragVisualMode  visualMode) ;

/// @brief Method StartDrag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void StartDrag(::UnityEngine::UIElements::StartDragArgs  args, ::UnityEngine::Vector3  pointerPosition) ;

/// @brief Method UpdateDrag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateDrag(::UnityEngine::Vector3  pointerPosition) ;

/// @brief Method get_data, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::UIElements::DragAndDropData* get_data() ;

// Ctor Parameters [CppParam { name: "", ty: "IDragAndDrop", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IDragAndDrop(IDragAndDrop && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IDragAndDrop", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDragAndDrop(IDragAndDrop const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IDragAndDrop);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IDragAndDrop*, "UnityEngine.UIElements", "IDragAndDrop");
