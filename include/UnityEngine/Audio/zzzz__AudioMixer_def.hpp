#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioMixer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioMixer)
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine::Audio {
class AudioMixerSnapshot;
}
namespace UnityEngine::Audio {
struct AudioMixerUpdateMode;
}
// Forward declare root types
namespace UnityEngine::Audio {
class AudioMixer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Audio::AudioMixer);
// Type: UnityEngine.Audio::AudioMixer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: ::UnityEngine.Audio::AudioMixer*
class CORDL_TYPE AudioMixer : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_outputAudioMixerGroup, put=set_outputAudioMixerGroup)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  outputAudioMixerGroup;

 __declspec(property(get=get_updateMode, put=set_updateMode)) ::UnityEngine::Audio::AudioMixerUpdateMode  updateMode;

/// @brief Method ClearFloat, addr 0x47cbce0, size 0x44, virtual false, abstract: false, final false
inline bool ClearFloat(::StringW  name) ;

/// @brief Method FindMatchingGroups, addr 0x47cb86c, size 0x44, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Audio::AudioMixerGroup>,::Array<::UnityW<::UnityEngine::Audio::AudioMixerGroup>>*> FindMatchingGroups(::StringW  subPath) ;

/// @brief Method FindSnapshot, addr 0x47cb828, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> FindSnapshot(::StringW  name) ;

/// @brief Method GetAbsoluteAudibilityFromGroup, addr 0x47cbd78, size 0x44, virtual false, abstract: false, final false
inline float_t GetAbsoluteAudibilityFromGroup(::UnityEngine::Audio::AudioMixerGroup*  group) ;

/// @brief Method GetFloat, addr 0x47cbd24, size 0x54, virtual false, abstract: false, final false
inline bool GetFloat(::StringW  name, ByRef<float_t>  value) ;

static inline ::UnityEngine::Audio::AudioMixer* New_ctor() ;

/// @brief Method SetFloat, addr 0x47cbc8c, size 0x54, virtual false, abstract: false, final false
inline bool SetFloat(::StringW  name, float_t  value) ;

/// @brief Method TransitionToSnapshot, addr 0x47cb8b0, size 0x268, virtual false, abstract: false, final false
inline void TransitionToSnapshot(::UnityEngine::Audio::AudioMixerSnapshot*  snapshot, float_t  timeToReach) ;

/// @brief Method TransitionToSnapshotInternal, addr 0x47cbb54, size 0x54, virtual false, abstract: false, final false
inline void TransitionToSnapshotInternal(::UnityEngine::Audio::AudioMixerSnapshot*  snapshot, float_t  timeToReach) ;

/// @brief Method TransitionToSnapshots, addr 0x47cbba8, size 0x64, virtual false, abstract: false, final false
inline void TransitionToSnapshots(::ArrayW<::UnityEngine::Audio::AudioMixerSnapshot*,::Array<::UnityEngine::Audio::AudioMixerSnapshot*>*>  snapshots, ::ArrayW<float_t,::Array<float_t>*>  weights, float_t  timeToReach) ;

/// @brief Method .ctor, addr 0x47cb750, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_outputAudioMixerGroup, addr 0x47cb7a8, size 0x3c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Audio::AudioMixerGroup> get_outputAudioMixerGroup() ;

/// @brief Method get_updateMode, addr 0x47cbc0c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Audio::AudioMixerUpdateMode get_updateMode() ;

/// @brief Method set_outputAudioMixerGroup, addr 0x47cb7e4, size 0x44, virtual false, abstract: false, final false
inline void set_outputAudioMixerGroup(::UnityEngine::Audio::AudioMixerGroup*  value) ;

/// @brief Method set_updateMode, addr 0x47cbc48, size 0x44, virtual false, abstract: false, final false
inline void set_updateMode(::UnityEngine::Audio::AudioMixerUpdateMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioMixer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioMixer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioMixer(AudioMixer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioMixer(AudioMixer const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioMixer, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Audio
NEED_NO_BOX(::UnityEngine::Audio::AudioMixer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioMixer*, "UnityEngine.Audio", "AudioMixer");
