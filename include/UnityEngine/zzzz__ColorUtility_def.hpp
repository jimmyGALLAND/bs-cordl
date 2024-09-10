#pragma once
// IWYU pragma private; include "UnityEngine/ColorUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ColorUtility)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class ColorUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ColorUtility);
// Type: UnityEngine::ColorUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ColorUtility*
class CORDL_TYPE ColorUtility : public ::System::Object {
public:
// Declarations
/// @brief Method ToHtmlStringRGB, addr 0x480ac10, size 0x3e8, virtual false, abstract: false, final false
static inline ::StringW ToHtmlStringRGB(::UnityEngine::Color  color) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorUtility(ColorUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorUtility(ColorUtility const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ColorUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ColorUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ColorUtility*, "UnityEngine", "ColorUtility");
