#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/SpawnRotation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__ExecutionTime_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SpawnRotation)
namespace BeatmapSaveDataCommon {
struct ExecutionTime;
}
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct SpawnRotation;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::SpawnRotation);
// Type: BeatmapSaveDataVersion4::SpawnRotation
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: ::BeatmapSaveDataVersion4::SpawnRotation
struct CORDL_TYPE SpawnRotation {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SpawnRotation() ;

// Ctor Parameters [CppParam { name: "t", ty: "::BeatmapSaveDataCommon::ExecutionTime", modifiers: "", def_value: None }, CppParam { name: "r", ty: "float_t", modifiers: "", def_value: None }]
constexpr SpawnRotation(::BeatmapSaveDataCommon::ExecutionTime  t, float_t  r) noexcept;

/// @brief Field t, offset: 0x0, size: 0x4, def value: None
 ::BeatmapSaveDataCommon::ExecutionTime  t;

/// @brief Field r, offset: 0x4, size: 0x4, def value: None
 float_t  r;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::SpawnRotation, 0x8>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::SpawnRotation, t) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::SpawnRotation, r) == 0x4, "Offset mismatch!");

} // namespace end def BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::SpawnRotation, "BeatmapSaveDataVersion4", "SpawnRotation");
