#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/NavigationEventDispatchingStrategy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NavigationEventDispatchingStrategy)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IEventDispatchingStrategy;
}
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class NavigationEventDispatchingStrategy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::NavigationEventDispatchingStrategy);
// Type: UnityEngine.UIElements::NavigationEventDispatchingStrategy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::NavigationEventDispatchingStrategy*
class CORDL_TYPE NavigationEventDispatchingStrategy : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::UIElements::IEventDispatchingStrategy"
constexpr operator  ::UnityEngine::UIElements::IEventDispatchingStrategy*() noexcept;

/// @brief Method CanDispatchEvent, addr 0x49990f8, size 0x54, virtual true, abstract: false, final true
inline bool CanDispatchEvent(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method DispatchEvent, addr 0x499914c, size 0x160, virtual true, abstract: false, final true
inline void DispatchEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::IPanel*  panel) ;

static inline ::UnityEngine::UIElements::NavigationEventDispatchingStrategy* New_ctor() ;

/// @brief Method .ctor, addr 0x498d794, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::UIElements::IEventDispatchingStrategy"
constexpr ::UnityEngine::UIElements::IEventDispatchingStrategy* i___UnityEngine__UIElements__IEventDispatchingStrategy() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavigationEventDispatchingStrategy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavigationEventDispatchingStrategy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NavigationEventDispatchingStrategy(NavigationEventDispatchingStrategy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavigationEventDispatchingStrategy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavigationEventDispatchingStrategy(NavigationEventDispatchingStrategy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::NavigationEventDispatchingStrategy, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::NavigationEventDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::NavigationEventDispatchingStrategy*, "UnityEngine.UIElements", "NavigationEventDispatchingStrategy");
