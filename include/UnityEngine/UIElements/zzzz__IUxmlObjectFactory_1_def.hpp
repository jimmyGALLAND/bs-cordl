#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IUxmlObjectFactory_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUxmlObjectFactory_1)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IBaseUxmlFactory;
}
namespace UnityEngine::UIElements {
class IBaseUxmlObjectFactory;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class IUxmlObjectFactory_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::IUxmlObjectFactory_1);
// Type: UnityEngine.UIElements::IUxmlObjectFactory`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template<typename T>
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IUxmlObjectFactory`1<T>*
class CORDL_TYPE IUxmlObjectFactory_1 {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::UIElements::IBaseUxmlFactory"
constexpr operator  ::UnityEngine::UIElements::IBaseUxmlFactory*() noexcept;

/// @brief Convert operator to "::UnityEngine::UIElements::IBaseUxmlObjectFactory"
constexpr operator  ::UnityEngine::UIElements::IBaseUxmlObjectFactory*() noexcept;

/// @brief Method CreateObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T CreateObject(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

/// @brief Convert to "::UnityEngine::UIElements::IBaseUxmlFactory"
constexpr ::UnityEngine::UIElements::IBaseUxmlFactory* i___UnityEngine__UIElements__IBaseUxmlFactory() noexcept;

/// @brief Convert to "::UnityEngine::UIElements::IBaseUxmlObjectFactory"
constexpr ::UnityEngine::UIElements::IBaseUxmlObjectFactory* i___UnityEngine__UIElements__IBaseUxmlObjectFactory() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IUxmlObjectFactory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IUxmlObjectFactory_1(IUxmlObjectFactory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IUxmlObjectFactory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUxmlObjectFactory_1(IUxmlObjectFactory_1 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::IUxmlObjectFactory_1, "UnityEngine.UIElements", "IUxmlObjectFactory`1");
