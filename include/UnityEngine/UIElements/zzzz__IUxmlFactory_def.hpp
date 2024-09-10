#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IUxmlFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUxmlFactory)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IBaseUxmlFactory;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IUxmlFactory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IUxmlFactory);
// Type: UnityEngine.UIElements::IUxmlFactory
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IUxmlFactory*
class CORDL_TYPE IUxmlFactory {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::UIElements::IBaseUxmlFactory"
constexpr operator  ::UnityEngine::UIElements::IBaseUxmlFactory*() noexcept;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

/// @brief Convert to "::UnityEngine::UIElements::IBaseUxmlFactory"
constexpr ::UnityEngine::UIElements::IBaseUxmlFactory* i___UnityEngine__UIElements__IBaseUxmlFactory() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IUxmlFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IUxmlFactory(IUxmlFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IUxmlFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUxmlFactory(IUxmlFactory const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IUxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IUxmlFactory*, "UnityEngine.UIElements", "IUxmlFactory");
