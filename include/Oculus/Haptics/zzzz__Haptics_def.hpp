#pragma once
// IWYU pragma private; include "Oculus/Haptics/Haptics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Haptics)
namespace Oculus::Haptics {
struct Controller;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Oculus::Haptics {
class Haptics;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Haptics::Haptics);
// Type: Oculus.Haptics::Haptics
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Haptics {
// Is value type: false
// CS Name: ::Oculus.Haptics::Haptics*
class CORDL_TYPE Haptics : public ::System::Object {
public:
// Declarations
/// @brief Field instance, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::Oculus::Haptics::Haptics*  instance;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CreateHapticPlayer, addr 0x3ec4200, size 0x20, virtual false, abstract: false, final false
inline int32_t CreateHapticPlayer() ;

/// @brief Method Dispose, addr 0x3ec5fd4, size 0xc4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EnsureInitialized, addr 0x3ec5038, size 0x108, virtual false, abstract: false, final false
static inline bool EnsureInitialized() ;

/// @brief Method GetAmplitudeHapticPlayer, addr 0x3ec4844, size 0xa8, virtual false, abstract: false, final false
inline float_t GetAmplitudeHapticPlayer(int32_t  playerId) ;

/// @brief Method GetClipDuration, addr 0x3ec4784, size 0xa4, virtual false, abstract: false, final false
inline float_t GetClipDuration(int32_t  clipId) ;

/// @brief Method GetFrequencyShiftHapticPlayer, addr 0x3ec4a74, size 0xa4, virtual false, abstract: false, final false
inline float_t GetFrequencyShiftHapticPlayer(int32_t  playerId) ;

/// @brief Method GetPriorityHapticPlayer, addr 0x3ec4ca0, size 0xbc, virtual false, abstract: false, final false
inline uint32_t GetPriorityHapticPlayer(int32_t  playerId) ;

/// @brief Method IsHapticPlayerLooping, addr 0x3ec4604, size 0xa4, virtual false, abstract: false, final false
inline bool IsHapticPlayerLooping(int32_t  playerId) ;

/// @brief Method IsInitialized, addr 0x3ec5140, size 0x90, virtual false, abstract: false, final false
static inline bool IsInitialized() ;

/// @brief Method IsSupportedPlatform, addr 0x3ec5028, size 0x8, virtual false, abstract: false, final false
static inline bool IsSupportedPlatform() ;

/// @brief Method LoadClip, addr 0x3ec4148, size 0xb8, virtual false, abstract: false, final false
inline int32_t LoadClip(::StringW  clipJson) ;

/// @brief Method LoopHapticPlayer, addr 0x3ec46cc, size 0x9c, virtual false, abstract: false, final false
inline void LoopHapticPlayer(int32_t  playerId, bool  enabled) ;

/// @brief Method MapPriority, addr 0x3ec5bc8, size 0x260, virtual false, abstract: false, final false
static inline uint32_t MapPriority(uint32_t  input, int32_t  inMin, int32_t  inMax, int32_t  outMin, int32_t  outMax) ;

static inline ::Oculus::Haptics::Haptics* New_ctor() ;

/// @brief Method PlayHapticPlayer, addr 0x3ec43c8, size 0x108, virtual false, abstract: false, final false
inline void PlayHapticPlayer(int32_t  playerId, ::Oculus::Haptics::Controller  controller) ;

/// @brief Method ReleaseClip, addr 0x3ec4f44, size 0x1c, virtual false, abstract: false, final false
inline bool ReleaseClip(int32_t  clipId) ;

/// @brief Method ReleaseHapticPlayer, addr 0x3ec5008, size 0x1c, virtual false, abstract: false, final false
inline bool ReleaseHapticPlayer(int32_t  playerId) ;

/// @brief Method SetAmplitudeHapticPlayer, addr 0x3ec4908, size 0x150, virtual false, abstract: false, final false
inline void SetAmplitudeHapticPlayer(int32_t  playerId, float_t  amplitude) ;

/// @brief Method SetFrequencyShiftHapticPlayer, addr 0x3ec4b34, size 0x150, virtual false, abstract: false, final false
inline void SetFrequencyShiftHapticPlayer(int32_t  playerId, float_t  amount) ;

/// @brief Method SetHapticPlayerClip, addr 0x3ec4220, size 0xd0, virtual false, abstract: false, final false
inline void SetHapticPlayerClip(int32_t  playerId, int32_t  clipId) ;

/// @brief Method SetPriorityHapticPlayer, addr 0x3ec4d7c, size 0x164, virtual false, abstract: false, final false
inline void SetPriorityHapticPlayer(int32_t  playerId, uint32_t  value) ;

/// @brief Method StopHapticPlayer, addr 0x3ec44ec, size 0xfc, virtual false, abstract: false, final false
inline void StopHapticPlayer(int32_t  playerId) ;

/// @brief Method .ctor, addr 0x3ec5030, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Haptics::Haptics* getStaticF_instance() ;

/// @brief Method get_Instance, addr 0x3ec4308, size 0xa0, virtual false, abstract: false, final false
static inline ::Oculus::Haptics::Haptics* get_Instance() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_instance(::Oculus::Haptics::Haptics*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Haptics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Haptics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Haptics(Haptics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Haptics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Haptics(Haptics const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Haptics::Haptics, 0x10>, "Size mismatch!");

} // namespace end def Oculus::Haptics
NEED_NO_BOX(::Oculus::Haptics::Haptics);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Haptics::Haptics*, "Oculus.Haptics", "Haptics");
