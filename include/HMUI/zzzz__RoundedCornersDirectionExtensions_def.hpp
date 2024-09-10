#pragma once
// IWYU pragma private; include "HMUI/RoundedCornersDirectionExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RoundedCornersDirectionExtensions)
namespace HMUI {
struct RoundedCornersDirection;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace HMUI {
class RoundedCornersDirectionExtensions;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::RoundedCornersDirectionExtensions);
// Type: HMUI::RoundedCornersDirectionExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::RoundedCornersDirectionExtensions*
class CORDL_TYPE RoundedCornersDirectionExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method GetFlipAndSymmetry, addr 0x39768d4, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 GetFlipAndSymmetry(::HMUI::RoundedCornersDirection  direction) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoundedCornersDirectionExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoundedCornersDirectionExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoundedCornersDirectionExtensions(RoundedCornersDirectionExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoundedCornersDirectionExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoundedCornersDirectionExtensions(RoundedCornersDirectionExtensions const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::RoundedCornersDirectionExtensions, 0x10>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::RoundedCornersDirectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::RoundedCornersDirectionExtensions*, "HMUI", "RoundedCornersDirectionExtensions");
