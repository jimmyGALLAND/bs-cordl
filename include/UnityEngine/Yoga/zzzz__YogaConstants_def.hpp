#pragma once
// IWYU pragma private; include "UnityEngine/Yoga/YogaConstants.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(YogaConstants)
// Forward declare root types
namespace UnityEngine::Yoga {
class YogaConstants;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Yoga::YogaConstants);
// Type: UnityEngine.Yoga::YogaConstants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Yoga {
// Is value type: false
// CS Name: ::UnityEngine.Yoga::YogaConstants*
class CORDL_TYPE YogaConstants : public ::System::Object {
public:
// Declarations
/// @brief Method IsUndefined, addr 0x48d600c, size 0x18, virtual false, abstract: false, final false
static inline bool IsUndefined(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YogaConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YogaConstants", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
YogaConstants(YogaConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YogaConstants", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
YogaConstants(YogaConstants const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaConstants, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::YogaConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaConstants*, "UnityEngine.Yoga", "YogaConstants");
