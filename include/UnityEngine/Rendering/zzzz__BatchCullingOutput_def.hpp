#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchCullingOutput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutputDrawCommands_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BatchCullingOutput)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct BatchCullingOutputDrawCommands;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchCullingOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchCullingOutput);
// Type: UnityEngine.Rendering::BatchCullingOutput
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::BatchCullingOutput
struct CORDL_TYPE BatchCullingOutput {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BatchCullingOutput() ;

// Ctor Parameters [CppParam { name: "drawCommands", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands>", modifiers: "", def_value: None }]
constexpr BatchCullingOutput(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands>  drawCommands) noexcept;

/// @brief Field drawCommands, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands>  drawCommands;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchCullingOutput, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchCullingOutput, drawCommands) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchCullingOutput, "UnityEngine.Rendering", "BatchCullingOutput");
