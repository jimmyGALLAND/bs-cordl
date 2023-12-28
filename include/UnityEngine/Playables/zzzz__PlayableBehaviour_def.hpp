#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlayableBehaviour)
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
class IPlayableBehaviour;
}
namespace System {
class Object;
}
namespace System {
class ICloneable;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Playables {
class PlayableBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Playables::PlayableBehaviour);
// Type: UnityEngine.Playables::PlayableBehaviour
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10425))
// CS Name: ::UnityEngine.Playables::PlayableBehaviour*
class CORDL_TYPE PlayableBehaviour : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Playables::IPlayableBehaviour"
  constexpr operator ::UnityEngine::Playables::IPlayableBehaviour*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  static inline ::UnityEngine::Playables::PlayableBehaviour* New_ctor();

  /// @brief Method .ctor addr 0x2cf5c10 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method OnGraphStart addr 0x2cf5c18 size 0x4 virtual true final false
  inline void OnGraphStart(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnGraphStop addr 0x2cf5c1c size 0x4 virtual true final false
  inline void OnGraphStop(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnPlayableCreate addr 0x2cf5c20 size 0x4 virtual true final false
  inline void OnPlayableCreate(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnPlayableDestroy addr 0x2cf5c24 size 0x4 virtual true final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnBehaviourPlay addr 0x2cf5c28 size 0x4 virtual true final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnBehaviourPause addr 0x2cf5c2c size 0x4 virtual true final false
  inline void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method PrepareFrame addr 0x2cf5c30 size 0x4 virtual true final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method ProcessFrame addr 0x2cf5c34 size 0x4 virtual true final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  /// @brief Method Clone addr 0x2cf5c38 size 0x8 virtual true final false
  inline ::System::Object* Clone();

  // Ctor Parameters [CppParam { name: "", ty: "PlayableBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayableBehaviour(PlayableBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayableBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayableBehaviour(PlayableBehaviour const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableBehaviour();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableBehaviour, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::PlayableBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableBehaviour*, "UnityEngine.Playables", "PlayableBehaviour");
