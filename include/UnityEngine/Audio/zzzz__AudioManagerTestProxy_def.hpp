#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioManagerTestProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AudioManagerTestProxy)
// Forward declare root types
namespace UnityEngine::Audio {
class AudioManagerTestProxy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Audio::AudioManagerTestProxy);
// Type: UnityEngine.Audio::AudioManagerTestProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: ::UnityEngine.Audio::AudioManagerTestProxy*
class CORDL_TYPE AudioManagerTestProxy : public ::System::Object {
public:
// Declarations
/// @brief Method ComputeAudibilityConsistency, addr 0x47ca608, size 0x28, virtual false, abstract: false, final false
static inline bool ComputeAudibilityConsistency() ;

static inline ::UnityEngine::Audio::AudioManagerTestProxy* New_ctor() ;

/// @brief Method .ctor, addr 0x47ca630, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioManagerTestProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioManagerTestProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioManagerTestProxy(AudioManagerTestProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioManagerTestProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioManagerTestProxy(AudioManagerTestProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioManagerTestProxy, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Audio
NEED_NO_BOX(::UnityEngine::Audio::AudioManagerTestProxy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioManagerTestProxy*, "UnityEngine.Audio", "AudioManagerTestProxy");
