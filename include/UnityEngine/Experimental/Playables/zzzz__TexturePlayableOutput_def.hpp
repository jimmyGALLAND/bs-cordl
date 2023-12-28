#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TexturePlayableOutput)
namespace UnityEngine::Playables {
class IPlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Forward declare root types
namespace UnityEngine::Experimental::Playables {
struct TexturePlayableOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Playables::TexturePlayableOutput);
// Type: UnityEngine.Experimental.Playables::TexturePlayableOutput
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10415))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10413))
// CS Name: ::UnityEngine.Experimental.Playables::TexturePlayableOutput
struct CORDL_TYPE TexturePlayableOutput {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
  constexpr operator ::UnityEngine::Playables::IPlayableOutput*();

  /// @brief Method GetHandle addr 0x2cf48b4 size 0xc virtual true final true
  inline ::UnityEngine::Playables::PlayableOutputHandle GetHandle();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
  constexpr TexturePlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TexturePlayableOutput();

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableOutputHandle m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Playables::TexturePlayableOutput, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Playables::TexturePlayableOutput, "UnityEngine.Experimental.Playables", "TexturePlayableOutput");
