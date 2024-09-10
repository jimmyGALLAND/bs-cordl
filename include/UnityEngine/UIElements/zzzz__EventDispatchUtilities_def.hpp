#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventDispatchUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventDispatchUtilities)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventDispatchUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventDispatchUtilities);
// Type: UnityEngine.UIElements::EventDispatchUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::EventDispatchUtilities*
class CORDL_TYPE EventDispatchUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method ExecuteDefaultAction, addr 0x498d1cc, size 0x168, virtual false, abstract: false, final false
static inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method HandleEventAcrossPropagationPath, addr 0x4992e7c, size 0x778, virtual false, abstract: false, final false
static inline void HandleEventAcrossPropagationPath(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method PropagateEvent, addr 0x498e8bc, size 0x138, virtual false, abstract: false, final false
static inline void PropagateEvent(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method PropagateToIMGUIContainer, addr 0x498e470, size 0x44c, virtual false, abstract: false, final false
static inline void PropagateToIMGUIContainer(::UnityEngine::UIElements::VisualElement*  root, ::UnityEngine::UIElements::EventBase*  evt) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventDispatchUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventDispatchUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventDispatchUtilities(EventDispatchUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventDispatchUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventDispatchUtilities(EventDispatchUtilities const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventDispatchUtilities, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventDispatchUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDispatchUtilities*, "UnityEngine.UIElements", "EventDispatchUtilities");
