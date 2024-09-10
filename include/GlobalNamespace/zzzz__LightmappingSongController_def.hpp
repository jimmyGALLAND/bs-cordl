#pragma once
// IWYU pragma private; include "GlobalNamespace/LightmappingSongController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SongController_def.hpp"
CORDL_MODULE_EXPORT(LightmappingSongController)
// Forward declare root types
namespace GlobalNamespace {
class LightmappingSongController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightmappingSongController);
// Type: ::LightmappingSongController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightmappingSongController*
class CORDL_TYPE LightmappingSongController : public ::GlobalNamespace::SongController {
public:
// Declarations
static inline ::GlobalNamespace::LightmappingSongController* New_ctor() ;

/// @brief Method PauseSong, addr 0x3b59ab8, size 0x4, virtual true, abstract: false, final false
inline void PauseSong() ;

/// @brief Method ResumeSong, addr 0x3b59abc, size 0x4, virtual true, abstract: false, final false
inline void ResumeSong() ;

/// @brief Method StopSong, addr 0x3b59ab4, size 0x4, virtual true, abstract: false, final false
inline void StopSong() ;

/// @brief Method .ctor, addr 0x3b59ac0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightmappingSongController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightmappingSongController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightmappingSongController(LightmappingSongController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightmappingSongController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightmappingSongController(LightmappingSongController const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmappingSongController, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightmappingSongController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmappingSongController*, "", "LightmappingSongController");
