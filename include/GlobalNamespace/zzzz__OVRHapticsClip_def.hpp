#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRHapticsClip)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRHapticsClip;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRHapticsClip);
// Type: ::OVRHapticsClip
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7577))
// CS Name: ::OVRHapticsClip*
class CORDL_TYPE OVRHapticsClip : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Count>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__Count_k__BackingField, put = __set__Count_k__BackingField)) int32_t _Count_k__BackingField;

  /// @brief Field <Capacity>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__Capacity_k__BackingField, put = __set__Capacity_k__BackingField)) int32_t _Capacity_k__BackingField;

  /// @brief Field <Samples>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Samples_k__BackingField, put = __set__Samples_k__BackingField))::ArrayW<uint8_t, ::Array<uint8_t>*> _Samples_k__BackingField;

  __declspec(property(get = get_Count, put = set_Count)) int32_t Count;

  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Samples, put = set_Samples))::ArrayW<uint8_t, ::Array<uint8_t>*> Samples;

  constexpr int32_t& __get__Count_k__BackingField();

  constexpr int32_t const& __get__Count_k__BackingField() const;

  constexpr void __set__Count_k__BackingField(int32_t value);

  constexpr int32_t& __get__Capacity_k__BackingField();

  constexpr int32_t const& __get__Capacity_k__BackingField() const;

  constexpr void __set__Capacity_k__BackingField(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__Samples_k__BackingField();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__Samples_k__BackingField() const;

  constexpr void __set__Samples_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_Count addr 0x2729854 size 0x8 virtual false final false
  inline int32_t get_Count();

  /// @brief Method set_Count addr 0x272985c size 0x8 virtual false final false
  inline void set_Count(int32_t value);

  /// @brief Method get_Capacity addr 0x2729864 size 0x8 virtual false final false
  inline int32_t get_Capacity();

  /// @brief Method set_Capacity addr 0x272986c size 0x8 virtual false final false
  inline void set_Capacity(int32_t value);

  /// @brief Method get_Samples addr 0x2729874 size 0x8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Samples();

  /// @brief Method set_Samples addr 0x272987c size 0x8 virtual false final false
  inline void set_Samples(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::GlobalNamespace::OVRHapticsClip* New_ctor();

  /// @brief Method .ctor addr 0x2729504 size 0x100 virtual false final false
  inline void _ctor();

  static inline ::GlobalNamespace::OVRHapticsClip* New_ctor(int32_t capacity);

  /// @brief Method .ctor addr 0x272962c size 0xd8 virtual false final false
  inline void _ctor(int32_t capacity);

  static inline ::GlobalNamespace::OVRHapticsClip* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> samples, int32_t samplesCount);

  /// @brief Method .ctor addr 0x2729884 size 0xc4 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> samples, int32_t samplesCount);

  static inline ::GlobalNamespace::OVRHapticsClip* New_ctor(::GlobalNamespace::OVRHapticsClip* a, ::GlobalNamespace::OVRHapticsClip* b);

  /// @brief Method .ctor addr 0x2729948 size 0x20c virtual false final false
  inline void _ctor(::GlobalNamespace::OVRHapticsClip* a, ::GlobalNamespace::OVRHapticsClip* b);

  static inline ::GlobalNamespace::OVRHapticsClip* New_ctor(::UnityEngine::AudioClip* audioClip, int32_t channel);

  /// @brief Method .ctor addr 0x2729b54 size 0xd8 virtual false final false
  inline void _ctor(::UnityEngine::AudioClip* audioClip, int32_t channel);

  /// @brief Method WriteSample addr 0x2729704 size 0x130 virtual false final false
  inline void WriteSample(uint8_t sample);

  /// @brief Method Reset addr 0x2729f58 size 0x8 virtual false final false
  inline void Reset();

  /// @brief Method InitializeFromAudioFloatTrack addr 0x2729c2c size 0x32c virtual false final false
  inline void InitializeFromAudioFloatTrack(::ArrayW<float_t, ::Array<float_t>*> sourceData, double_t sourceFrequency, int32_t sourceChannelCount, int32_t sourceChannel);

  // Ctor Parameters [CppParam { name: "", ty: "OVRHapticsClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRHapticsClip(OVRHapticsClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRHapticsClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRHapticsClip(OVRHapticsClip const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHapticsClip();

public:
  /// @brief Field <Count>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____Count_k__BackingField;

  /// @brief Field <Capacity>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____Capacity_k__BackingField;

  /// @brief Field <Samples>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____Samples_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHapticsClip, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRHapticsClip);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHapticsClip*, "", "OVRHapticsClip");
