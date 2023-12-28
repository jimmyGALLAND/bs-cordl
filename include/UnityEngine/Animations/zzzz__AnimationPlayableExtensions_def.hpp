#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(AnimationPlayableExtensions)
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace UnityEngine::Animations {
class AnimationPlayableExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Animations::AnimationPlayableExtensions);
// Type: UnityEngine.Animations::AnimationPlayableExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Animations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14891))
// CS Name: ::UnityEngine.Animations::AnimationPlayableExtensions*
class CORDL_TYPE AnimationPlayableExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetAnimatedProperties addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename U> static inline void SetAnimatedProperties(U playable, ::UnityEngine::AnimationClip* clip);

  /// @brief Method SetAnimatedPropertiesInternal addr 0x2c97618 size 0x44 virtual false final false
  static inline void SetAnimatedPropertiesInternal(ByRef<::UnityEngine::Playables::PlayableHandle> playable, ::UnityEngine::AnimationClip* animatedProperties);

  // Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationPlayableExtensions(AnimationPlayableExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationPlayableExtensions(AnimationPlayableExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationPlayableExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationPlayableExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Animations
NEED_NO_BOX(::UnityEngine::Animations::AnimationPlayableExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationPlayableExtensions*, "UnityEngine.Animations", "AnimationPlayableExtensions");
