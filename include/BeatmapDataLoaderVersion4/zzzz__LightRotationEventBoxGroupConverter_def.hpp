#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/LightRotationEventBoxGroupConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapDataLoaderVersion4/zzzz__EventBoxGroupConverter_def.hpp"
CORDL_MODULE_EXPORT(LightRotationEventBoxGroupConverter)
namespace BeatmapSaveDataVersion4 {
struct EventBox;
}
namespace BeatmapSaveDataVersion4 {
class LightshowSaveData;
}
namespace GlobalNamespace {
class BeatmapEventDataBox;
}
namespace GlobalNamespace {
class IEnvironmentLightGroups;
}
namespace GlobalNamespace {
class IndexFilter;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class LightRotationEventBoxGroupConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::LightRotationEventBoxGroupConverter);
// Type: BeatmapDataLoaderVersion4::LightRotationEventBoxGroupConverter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: ::BeatmapDataLoaderVersion4::LightRotationEventBoxGroupConverter*
class CORDL_TYPE LightRotationEventBoxGroupConverter : public ::BeatmapDataLoaderVersion4::EventBoxGroupConverter {
public:
// Declarations
/// @brief Method ConvertEvents, addr 0x26c10ac, size 0x248, virtual true, abstract: false, final false
inline ::GlobalNamespace::BeatmapEventDataBox* ConvertEvents(::BeatmapSaveDataVersion4::EventBox  eventBox, ::GlobalNamespace::IndexFilter*  indexFilter) ;

static inline ::BeatmapDataLoaderVersion4::LightRotationEventBoxGroupConverter* New_ctor(::BeatmapSaveDataVersion4::LightshowSaveData*  lightshowSaveData, ::GlobalNamespace::IEnvironmentLightGroups*  lightGroups) ;

/// @brief Method .ctor, addr 0x26c0598, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::BeatmapSaveDataVersion4::LightshowSaveData*  lightshowSaveData, ::GlobalNamespace::IEnvironmentLightGroups*  lightGroups) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightRotationEventBoxGroupConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightRotationEventBoxGroupConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightRotationEventBoxGroupConverter(LightRotationEventBoxGroupConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationEventBoxGroupConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightRotationEventBoxGroupConverter(LightRotationEventBoxGroupConverter const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::LightRotationEventBoxGroupConverter, 0x28>, "Size mismatch!");

} // namespace end def BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::LightRotationEventBoxGroupConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::LightRotationEventBoxGroupConverter*, "BeatmapDataLoaderVersion4", "LightRotationEventBoxGroupConverter");
