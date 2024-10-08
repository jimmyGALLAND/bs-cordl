#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSignal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GenericSignal_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(ColorSignal)
// Forward declare root types
namespace GlobalNamespace {
class ColorSignal;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSignal);
// Type: ::ColorSignal
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorSignal*
class CORDL_TYPE ColorSignal : public ::GlobalNamespace::GenericSignal_1<::UnityEngine::Color> {
public:
// Declarations
static inline ::GlobalNamespace::ColorSignal* New_ctor() ;

/// @brief Method .ctor, addr 0x3943af4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorSignal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorSignal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorSignal(ColorSignal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorSignal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorSignal(ColorSignal const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSignal, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSignal);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSignal*, "", "ColorSignal");
