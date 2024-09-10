#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioClipAsyncLoaderExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AudioClipAsyncLoaderExtensions)
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioClipAsyncLoaderExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioClipAsyncLoaderExtensions);
// Type: ::AudioClipAsyncLoaderExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AudioClipAsyncLoaderExtensions*
class CORDL_TYPE AudioClipAsyncLoaderExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method LoadPreview, addr 0x2675414, size 0xdc, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* LoadPreview(::GlobalNamespace::AudioClipAsyncLoader*  asyncLoader, ::GlobalNamespace::BeatmapLevel*  beatmapLevel) ;

/// @brief Method LoadSong, addr 0x2675598, size 0x208, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* LoadSong(::GlobalNamespace::AudioClipAsyncLoader*  asyncLoader, ::GlobalNamespace::IBeatmapLevelData*  beatmapLevelData) ;

/// @brief Method UnloadPreview, addr 0x26754f0, size 0xa8, virtual false, abstract: false, final false
static inline void UnloadPreview(::GlobalNamespace::AudioClipAsyncLoader*  _, ::GlobalNamespace::BeatmapLevel*  beatmapLevel) ;

/// @brief Method UnloadSong, addr 0x26739d0, size 0x1c8, virtual false, abstract: false, final false
static inline void UnloadSong(::GlobalNamespace::AudioClipAsyncLoader*  asyncLoader, ::GlobalNamespace::IBeatmapLevelData*  beatmapLevelData) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioClipAsyncLoaderExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoaderExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioClipAsyncLoaderExtensions(AudioClipAsyncLoaderExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoaderExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioClipAsyncLoaderExtensions(AudioClipAsyncLoaderExtensions const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioClipAsyncLoaderExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioClipAsyncLoaderExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipAsyncLoaderExtensions*, "", "AudioClipAsyncLoaderExtensions");
