#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(NoAvatarPoseRestriction)
namespace UnityEngine {
struct Vector3;
}
namespace BeatSaber::AvatarCore {
class IAvatarPoseRestriction;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class NoAvatarPoseRestriction;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::NoAvatarPoseRestriction);
// Type: BeatSaber.AvatarCore::NoAvatarPoseRestriction
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15202))
// CS Name: ::BeatSaber.AvatarCore::NoAvatarPoseRestriction*
class CORDL_TYPE NoAvatarPoseRestriction : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarPoseRestriction"
  constexpr operator ::BeatSaber::AvatarCore::IAvatarPoseRestriction*() noexcept;

  /// @brief Method RestrictPose addr 0xe10498 size 0x2c virtual true final true
  inline void RestrictPose(::UnityEngine::Quaternion headRotation, ::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition,
                           ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition, ByRef<::UnityEngine::Vector3> newRightHandPosition);

  static inline ::BeatSaber::AvatarCore::NoAvatarPoseRestriction* New_ctor();

  /// @brief Method .ctor addr 0xe104c4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoAvatarPoseRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoAvatarPoseRestriction(NoAvatarPoseRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoAvatarPoseRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoAvatarPoseRestriction(NoAvatarPoseRestriction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoAvatarPoseRestriction();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::NoAvatarPoseRestriction, 0x10>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::NoAvatarPoseRestriction);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::NoAvatarPoseRestriction*, "BeatSaber.AvatarCore", "NoAvatarPoseRestriction");
