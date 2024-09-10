#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PlayerPoseFrames.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PlayerPoseFrames)
namespace BeatSaber::RecPlay {
struct PoseFrame;
}
// Forward declare root types
namespace BeatSaber::RecPlay {
struct PlayerPoseFrames;
}
// Write type traits
MARK_VAL_T(::BeatSaber::RecPlay::PlayerPoseFrames);
// Type: BeatSaber.RecPlay::PlayerPoseFrames
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::RecPlay {
// Is value type: true
// CS Name: ::BeatSaber.RecPlay::PlayerPoseFrames
struct CORDL_TYPE PlayerPoseFrames {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlayerPoseFrames() ;

// Ctor Parameters [CppParam { name: "head", ty: "::ArrayW<::BeatSaber::RecPlay::PoseFrame,::Array<::BeatSaber::RecPlay::PoseFrame>*>", modifiers: "", def_value: None }, CppParam { name: "leftHand", ty: "::ArrayW<::BeatSaber::RecPlay::PoseFrame,::Array<::BeatSaber::RecPlay::PoseFrame>*>", modifiers: "", def_value: None }, CppParam { name: "rightHand", ty: "::ArrayW<::BeatSaber::RecPlay::PoseFrame,::Array<::BeatSaber::RecPlay::PoseFrame>*>", modifiers: "", def_value: None }]
constexpr PlayerPoseFrames(::ArrayW<::BeatSaber::RecPlay::PoseFrame,::Array<::BeatSaber::RecPlay::PoseFrame>*>  head, ::ArrayW<::BeatSaber::RecPlay::PoseFrame,::Array<::BeatSaber::RecPlay::PoseFrame>*>  leftHand, ::ArrayW<::BeatSaber::RecPlay::PoseFrame,::Array<::BeatSaber::RecPlay::PoseFrame>*>  rightHand) noexcept;

/// @brief Field head, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::BeatSaber::RecPlay::PoseFrame,::Array<::BeatSaber::RecPlay::PoseFrame>*>  head;

/// @brief Field leftHand, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::BeatSaber::RecPlay::PoseFrame,::Array<::BeatSaber::RecPlay::PoseFrame>*>  leftHand;

/// @brief Field rightHand, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::BeatSaber::RecPlay::PoseFrame,::Array<::BeatSaber::RecPlay::PoseFrame>*>  rightHand;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::RecPlay::PlayerPoseFrames, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PlayerPoseFrames, head) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PlayerPoseFrames, leftHand) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::RecPlay::PlayerPoseFrames, rightHand) == 0x10, "Offset mismatch!");

} // namespace end def BeatSaber::RecPlay
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::RecPlay::PlayerPoseFrames, "BeatSaber.RecPlay", "PlayerPoseFrames");
