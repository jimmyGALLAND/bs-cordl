#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioMixerProperties)
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct FrameData;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AudioMixerProperties;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::AudioMixerProperties);
// Type: UnityEngine.Timeline::AudioMixerProperties
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10425))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13866))
// CS Name: ::UnityEngine.Timeline::AudioMixerProperties*
class CORDL_TYPE AudioMixerProperties : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field volume, offset 0x10, size 0x4
  __declspec(property(get = __get_volume, put = __set_volume)) float_t volume;

  /// @brief Field stereoPan, offset 0x14, size 0x4
  __declspec(property(get = __get_stereoPan, put = __set_stereoPan)) float_t stereoPan;

  /// @brief Field spatialBlend, offset 0x18, size 0x4
  __declspec(property(get = __get_spatialBlend, put = __set_spatialBlend)) float_t spatialBlend;

  constexpr float_t& __get_volume();

  constexpr float_t const& __get_volume() const;

  constexpr void __set_volume(float_t value);

  constexpr float_t& __get_stereoPan();

  constexpr float_t const& __get_stereoPan() const;

  constexpr void __set_stereoPan(float_t value);

  constexpr float_t& __get_spatialBlend();

  constexpr float_t const& __get_spatialBlend() const;

  constexpr void __set_spatialBlend(float_t value);

  /// @brief Method PrepareFrame addr 0x2c61ad0 size 0x234 virtual true final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  static inline ::UnityEngine::Timeline::AudioMixerProperties* New_ctor();

  /// @brief Method .ctor addr 0x2c61d04 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AudioMixerProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioMixerProperties(AudioMixerProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioMixerProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioMixerProperties(AudioMixerProperties const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioMixerProperties();

public:
  /// @brief Field volume, offset: 0x10, size: 0x4, def value: None
  float_t ___volume;

  /// @brief Field stereoPan, offset: 0x14, size: 0x4, def value: None
  float_t ___stereoPan;

  /// @brief Field spatialBlend, offset: 0x18, size: 0x4, def value: None
  float_t ___spatialBlend;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AudioMixerProperties, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::AudioMixerProperties);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AudioMixerProperties*, "UnityEngine.Timeline", "AudioMixerProperties");
