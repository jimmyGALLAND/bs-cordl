#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchDrawRange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BatchFilterSettings_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchDrawRange)
namespace UnityEngine::Rendering {
struct BatchFilterSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchDrawRange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchDrawRange);
// Type: UnityEngine.Rendering::BatchDrawRange
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::BatchDrawRange
struct CORDL_TYPE BatchDrawRange {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BatchDrawRange() ;

// Ctor Parameters [CppParam { name: "drawCommandsBegin", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "drawCommandsCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "filterSettings", ty: "::UnityEngine::Rendering::BatchFilterSettings", modifiers: "", def_value: None }]
constexpr BatchDrawRange(uint32_t  drawCommandsBegin, uint32_t  drawCommandsCount, ::UnityEngine::Rendering::BatchFilterSettings  filterSettings) noexcept;

/// @brief Field drawCommandsBegin, offset: 0x0, size: 0x4, def value: None
 uint32_t  drawCommandsBegin;

/// @brief Field drawCommandsCount, offset: 0x4, size: 0x4, def value: None
 uint32_t  drawCommandsCount;

/// @brief Field filterSettings, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Rendering::BatchFilterSettings  filterSettings;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchDrawRange, 0x14>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawRange, drawCommandsBegin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawRange, drawCommandsCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchDrawRange, filterSettings) == 0x8, "Offset mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchDrawRange, "UnityEngine.Rendering", "BatchDrawRange");
