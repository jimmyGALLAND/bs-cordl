#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PlayerPose.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PlayerPose)
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace BeatSaber::RecPlay {
struct PlayerPose;
}
// Write type traits
MARK_VAL_T(::BeatSaber::RecPlay::PlayerPose);
// Type: BeatSaber.RecPlay::PlayerPose
// SizeInfo { instance_size: 84, native_size: 84, calculated_instance_size: 84, calculated_native_size: 100, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::RecPlay {
// Is value type: true
// CS Name: ::BeatSaber.RecPlay::PlayerPose
struct CORDL_TYPE PlayerPose {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlayerPose() ;

// Ctor Parameters [CppParam { name: "head", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }, CppParam { name: "leftHand", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }, CppParam { name: "rightHand", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }]
constexpr PlayerPose(::UnityEngine::Pose  head, ::UnityEngine::Pose  leftHand, ::UnityEngine::Pose  rightHand) noexcept;

/// @brief Field head, offset: 0x0, size: 0x1c, def value: None
 ::UnityEngine::Pose  head;

/// @brief Field leftHand, offset: 0x1c, size: 0x1c, def value: None
 ::UnityEngine::Pose  leftHand;

/// @brief Field rightHand, offset: 0x38, size: 0x1c, def value: None
 ::UnityEngine::Pose  rightHand;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x54};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::RecPlay::PlayerPose, 0x54>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PlayerPose, head) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PlayerPose, leftHand) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PlayerPose, rightHand) == 0x38, "Offset mismatch!");

} // namespace end def BeatSaber::RecPlay
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::RecPlay::PlayerPose, "BeatSaber.RecPlay", "PlayerPose");
