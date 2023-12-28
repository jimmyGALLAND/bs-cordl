#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TextureMixerPlayable)
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::Experimental::Playables {
struct TextureMixerPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Playables::TextureMixerPlayable);
// Type: UnityEngine.Experimental.Playables::TextureMixerPlayable
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10440))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10414))
// CS Name: ::UnityEngine.Experimental.Playables::TextureMixerPlayable
struct CORDL_TYPE TextureMixerPlayable {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Experimental::Playables::TextureMixerPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Experimental::Playables::TextureMixerPlayable>*();

  /// @brief Method GetHandle addr 0x2cf48c0 size 0xc virtual true final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method Equals addr 0x2cf48cc size 0x74 virtual true final true
  inline bool Equals(::UnityEngine::Experimental::Playables::TextureMixerPlayable other);

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr TextureMixerPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureMixerPlayable();

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Playables::TextureMixerPlayable, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Playables::TextureMixerPlayable, "UnityEngine.Experimental.Playables", "TextureMixerPlayable");
