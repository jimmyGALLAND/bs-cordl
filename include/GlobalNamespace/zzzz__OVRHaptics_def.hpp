#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRHaptics)
namespace GlobalNamespace {
class __OVRHaptics__OVRHapticsChannel;
}
namespace GlobalNamespace {
class __OVRHaptics__OVRHapticsOutput;
}
namespace GlobalNamespace {
class __OVRHaptics__Config;
}
namespace GlobalNamespace {
class OVRHapticsClip;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class __OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker;
}
namespace GlobalNamespace {
class OVRNativeBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRHaptics;
}
namespace GlobalNamespace {
class __OVRHaptics__Config;
}
namespace GlobalNamespace {
class __OVRHaptics__OVRHapticsChannel;
}
namespace GlobalNamespace {
class __OVRHaptics__OVRHapticsOutput;
}
namespace GlobalNamespace {
class __OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRHaptics);
MARK_REF_PTR_T(::GlobalNamespace::__OVRHaptics__Config);
MARK_REF_PTR_T(::GlobalNamespace::__OVRHaptics__OVRHapticsChannel);
MARK_REF_PTR_T(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput);
MARK_REF_PTR_T(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker);
// Type: ::Config
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7572))
// CS Name: ::OVRHaptics::Config*
class CORDL_TYPE __OVRHaptics__Config : public ::System::Object {
public:
  // Declarations
  /// @brief Field <SampleRateHz>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SampleRateHz_k__BackingField, put = setStaticF__SampleRateHz_k__BackingField)) int32_t _SampleRateHz_k__BackingField;

  /// @brief Field <SampleSizeInBytes>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__SampleSizeInBytes_k__BackingField, put = setStaticF__SampleSizeInBytes_k__BackingField)) int32_t _SampleSizeInBytes_k__BackingField;

  /// @brief Field <MinimumSafeSamplesQueued>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__MinimumSafeSamplesQueued_k__BackingField, put = setStaticF__MinimumSafeSamplesQueued_k__BackingField)) int32_t _MinimumSafeSamplesQueued_k__BackingField;

  /// @brief Field <MinimumBufferSamplesCount>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__MinimumBufferSamplesCount_k__BackingField,
                             put = setStaticF__MinimumBufferSamplesCount_k__BackingField)) int32_t _MinimumBufferSamplesCount_k__BackingField;

  /// @brief Field <OptimalBufferSamplesCount>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__OptimalBufferSamplesCount_k__BackingField,
                             put = setStaticF__OptimalBufferSamplesCount_k__BackingField)) int32_t _OptimalBufferSamplesCount_k__BackingField;

  /// @brief Field <MaximumBufferSamplesCount>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__MaximumBufferSamplesCount_k__BackingField,
                             put = setStaticF__MaximumBufferSamplesCount_k__BackingField)) int32_t _MaximumBufferSamplesCount_k__BackingField;

  static inline void setStaticF__SampleRateHz_k__BackingField(int32_t value);

  static inline int32_t getStaticF__SampleRateHz_k__BackingField();

  static inline void setStaticF__SampleSizeInBytes_k__BackingField(int32_t value);

  static inline int32_t getStaticF__SampleSizeInBytes_k__BackingField();

  static inline void setStaticF__MinimumSafeSamplesQueued_k__BackingField(int32_t value);

  static inline int32_t getStaticF__MinimumSafeSamplesQueued_k__BackingField();

  static inline void setStaticF__MinimumBufferSamplesCount_k__BackingField(int32_t value);

  static inline int32_t getStaticF__MinimumBufferSamplesCount_k__BackingField();

  static inline void setStaticF__OptimalBufferSamplesCount_k__BackingField(int32_t value);

  static inline int32_t getStaticF__OptimalBufferSamplesCount_k__BackingField();

  static inline void setStaticF__MaximumBufferSamplesCount_k__BackingField(int32_t value);

  static inline int32_t getStaticF__MaximumBufferSamplesCount_k__BackingField();

  /// @brief Method get_SampleRateHz addr 0x2728938 size 0x58 virtual false final false
  static inline int32_t get_SampleRateHz();

  /// @brief Method set_SampleRateHz addr 0x2728990 size 0x5c virtual false final false
  static inline void set_SampleRateHz(int32_t value);

  /// @brief Method get_SampleSizeInBytes addr 0x27289ec size 0x58 virtual false final false
  static inline int32_t get_SampleSizeInBytes();

  /// @brief Method set_SampleSizeInBytes addr 0x2728a44 size 0x5c virtual false final false
  static inline void set_SampleSizeInBytes(int32_t value);

  /// @brief Method get_MinimumSafeSamplesQueued addr 0x2728aa0 size 0x58 virtual false final false
  static inline int32_t get_MinimumSafeSamplesQueued();

  /// @brief Method set_MinimumSafeSamplesQueued addr 0x2728af8 size 0x5c virtual false final false
  static inline void set_MinimumSafeSamplesQueued(int32_t value);

  /// @brief Method get_MinimumBufferSamplesCount addr 0x2728b54 size 0x58 virtual false final false
  static inline int32_t get_MinimumBufferSamplesCount();

  /// @brief Method set_MinimumBufferSamplesCount addr 0x2728bac size 0x5c virtual false final false
  static inline void set_MinimumBufferSamplesCount(int32_t value);

  /// @brief Method get_OptimalBufferSamplesCount addr 0x2728c08 size 0x58 virtual false final false
  static inline int32_t get_OptimalBufferSamplesCount();

  /// @brief Method set_OptimalBufferSamplesCount addr 0x2728c60 size 0x5c virtual false final false
  static inline void set_OptimalBufferSamplesCount(int32_t value);

  /// @brief Method get_MaximumBufferSamplesCount addr 0x2728cbc size 0x58 virtual false final false
  static inline int32_t get_MaximumBufferSamplesCount();

  /// @brief Method set_MaximumBufferSamplesCount addr 0x2728d14 size 0x5c virtual false final false
  static inline void set_MaximumBufferSamplesCount(int32_t value);

  /// @brief Method Load addr 0x27279b4 size 0x200 virtual false final false
  static inline void Load();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRHaptics__Config", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRHaptics__Config(__OVRHaptics__Config&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRHaptics__Config", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRHaptics__Config(__OVRHaptics__Config const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHaptics__Config();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHaptics__Config, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRHapticsChannel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7573))
// CS Name: ::OVRHaptics::OVRHapticsChannel*
class CORDL_TYPE __OVRHaptics__OVRHapticsChannel : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_output, offset 0x10, size 0x8
  __declspec(property(get = __get_m_output, put = __set_m_output))::GlobalNamespace::__OVRHaptics__OVRHapticsOutput* m_output;

  constexpr ::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*& __get_m_output();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*> const& __get_m_output() const;

  constexpr void __set_m_output(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput* value);

  static inline ::GlobalNamespace::__OVRHaptics__OVRHapticsChannel* New_ctor(uint32_t outputIndex);

  /// @brief Method .ctor addr 0x2727d58 size 0x98 virtual false final false
  inline void _ctor(uint32_t outputIndex);

  /// @brief Method Preempt addr 0x2728d74 size 0x18 virtual false final false
  inline void Preempt(::GlobalNamespace::OVRHapticsClip* clip);

  /// @brief Method Queue addr 0x2728eac size 0x18 virtual false final false
  inline void Queue(::GlobalNamespace::OVRHapticsClip* clip);

  /// @brief Method Mix addr 0x2728fac size 0x18 virtual false final false
  inline void Mix(::GlobalNamespace::OVRHapticsClip* clip);

  /// @brief Method Clear addr 0x272947c size 0x18 virtual false final false
  inline void Clear();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRHaptics__OVRHapticsChannel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRHaptics__OVRHapticsChannel(__OVRHaptics__OVRHapticsChannel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRHaptics__OVRHapticsChannel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRHaptics__OVRHapticsChannel(__OVRHaptics__OVRHapticsChannel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHaptics__OVRHapticsChannel();

public:
  /// @brief Field m_output, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__OVRHaptics__OVRHapticsOutput* ___m_output;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHaptics__OVRHapticsChannel, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ClipPlaybackTracker
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7574))
// CS Name: ::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker*
class CORDL_TYPE __OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker : public ::System::Object {
public:
  // Declarations
  /// @brief Field <ReadCount>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__ReadCount_k__BackingField, put = __set__ReadCount_k__BackingField)) int32_t _ReadCount_k__BackingField;

  /// @brief Field <Clip>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Clip_k__BackingField, put = __set__Clip_k__BackingField))::GlobalNamespace::OVRHapticsClip* _Clip_k__BackingField;

  __declspec(property(get = get_ReadCount, put = set_ReadCount)) int32_t ReadCount;

  __declspec(property(get = get_Clip, put = set_Clip))::GlobalNamespace::OVRHapticsClip* Clip;

  constexpr int32_t& __get__ReadCount_k__BackingField();

  constexpr int32_t const& __get__ReadCount_k__BackingField() const;

  constexpr void __set__ReadCount_k__BackingField(int32_t value);

  constexpr ::GlobalNamespace::OVRHapticsClip*& __get__Clip_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRHapticsClip*> const& __get__Clip_k__BackingField() const;

  constexpr void __set__Clip_k__BackingField(::GlobalNamespace::OVRHapticsClip* value);

  /// @brief Method get_ReadCount addr 0x2729834 size 0x8 virtual false final false
  inline int32_t get_ReadCount();

  /// @brief Method set_ReadCount addr 0x272983c size 0x8 virtual false final false
  inline void set_ReadCount(int32_t value);

  /// @brief Method get_Clip addr 0x2729844 size 0x8 virtual false final false
  inline ::GlobalNamespace::OVRHapticsClip* get_Clip();

  /// @brief Method set_Clip addr 0x272984c size 0x8 virtual false final false
  inline void set_Clip(::GlobalNamespace::OVRHapticsClip* value);

  static inline ::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker* New_ctor(::GlobalNamespace::OVRHapticsClip* clip);

  /// @brief Method .ctor addr 0x2729604 size 0x28 virtual false final false
  inline void _ctor(::GlobalNamespace::OVRHapticsClip* clip);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker(__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker(__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker();

public:
  /// @brief Field <ReadCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____ReadCount_k__BackingField;

  /// @brief Field <Clip>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OVRHapticsClip* ____Clip_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRHapticsOutput
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7575))
// CS Name: ::OVRHaptics::OVRHapticsOutput*
class CORDL_TYPE __OVRHaptics__OVRHapticsOutput : public ::System::Object {
public:
  // Declarations
  using ClipPlaybackTracker = ::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker;

  /// @brief Field m_lowLatencyMode, offset 0x10, size 0x1
  __declspec(property(get = __get_m_lowLatencyMode, put = __set_m_lowLatencyMode)) bool m_lowLatencyMode;

  /// @brief Field m_paddingEnabled, offset 0x11, size 0x1
  __declspec(property(get = __get_m_paddingEnabled, put = __set_m_paddingEnabled)) bool m_paddingEnabled;

  /// @brief Field m_prevSamplesQueued, offset 0x14, size 0x4
  __declspec(property(get = __get_m_prevSamplesQueued, put = __set_m_prevSamplesQueued)) int32_t m_prevSamplesQueued;

  /// @brief Field m_prevSamplesQueuedTime, offset 0x18, size 0x4
  __declspec(property(get = __get_m_prevSamplesQueuedTime, put = __set_m_prevSamplesQueuedTime)) float_t m_prevSamplesQueuedTime;

  /// @brief Field m_numPredictionHits, offset 0x1c, size 0x4
  __declspec(property(get = __get_m_numPredictionHits, put = __set_m_numPredictionHits)) int32_t m_numPredictionHits;

  /// @brief Field m_numPredictionMisses, offset 0x20, size 0x4
  __declspec(property(get = __get_m_numPredictionMisses, put = __set_m_numPredictionMisses)) int32_t m_numPredictionMisses;

  /// @brief Field m_numUnderruns, offset 0x24, size 0x4
  __declspec(property(get = __get_m_numUnderruns, put = __set_m_numUnderruns)) int32_t m_numUnderruns;

  /// @brief Field m_pendingClips, offset 0x28, size 0x8
  __declspec(property(get = __get_m_pendingClips,
                      put = __set_m_pendingClips))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker*>* m_pendingClips;

  /// @brief Field m_controller, offset 0x30, size 0x4
  __declspec(property(get = __get_m_controller, put = __set_m_controller)) uint32_t m_controller;

  /// @brief Field m_nativeBuffer, offset 0x38, size 0x8
  __declspec(property(get = __get_m_nativeBuffer, put = __set_m_nativeBuffer))::GlobalNamespace::OVRNativeBuffer* m_nativeBuffer;

  /// @brief Field m_paddingClip, offset 0x40, size 0x8
  __declspec(property(get = __get_m_paddingClip, put = __set_m_paddingClip))::GlobalNamespace::OVRHapticsClip* m_paddingClip;

  /// @brief Field PrevSampleRateHz, offset 0x48, size 0x4
  __declspec(property(get = __get_PrevSampleRateHz, put = __set_PrevSampleRateHz)) int32_t PrevSampleRateHz;

  constexpr bool& __get_m_lowLatencyMode();

  constexpr bool const& __get_m_lowLatencyMode() const;

  constexpr void __set_m_lowLatencyMode(bool value);

  constexpr bool& __get_m_paddingEnabled();

  constexpr bool const& __get_m_paddingEnabled() const;

  constexpr void __set_m_paddingEnabled(bool value);

  constexpr int32_t& __get_m_prevSamplesQueued();

  constexpr int32_t const& __get_m_prevSamplesQueued() const;

  constexpr void __set_m_prevSamplesQueued(int32_t value);

  constexpr float_t& __get_m_prevSamplesQueuedTime();

  constexpr float_t const& __get_m_prevSamplesQueuedTime() const;

  constexpr void __set_m_prevSamplesQueuedTime(float_t value);

  constexpr int32_t& __get_m_numPredictionHits();

  constexpr int32_t const& __get_m_numPredictionHits() const;

  constexpr void __set_m_numPredictionHits(int32_t value);

  constexpr int32_t& __get_m_numPredictionMisses();

  constexpr int32_t const& __get_m_numPredictionMisses() const;

  constexpr void __set_m_numPredictionMisses(int32_t value);

  constexpr int32_t& __get_m_numUnderruns();

  constexpr int32_t const& __get_m_numUnderruns() const;

  constexpr void __set_m_numUnderruns(int32_t value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker*>*& __get_m_pendingClips();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker*>*> const& __get_m_pendingClips() const;

  constexpr void __set_m_pendingClips(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker*>* value);

  constexpr uint32_t& __get_m_controller();

  constexpr uint32_t const& __get_m_controller() const;

  constexpr void __set_m_controller(uint32_t value);

  constexpr ::GlobalNamespace::OVRNativeBuffer*& __get_m_nativeBuffer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRNativeBuffer*> const& __get_m_nativeBuffer() const;

  constexpr void __set_m_nativeBuffer(::GlobalNamespace::OVRNativeBuffer* value);

  constexpr ::GlobalNamespace::OVRHapticsClip*& __get_m_paddingClip();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRHapticsClip*> const& __get_m_paddingClip() const;

  constexpr void __set_m_paddingClip(::GlobalNamespace::OVRHapticsClip* value);

  constexpr int32_t& __get_PrevSampleRateHz();

  constexpr int32_t const& __get_PrevSampleRateHz() const;

  constexpr void __set_PrevSampleRateHz(int32_t value);

  static inline ::GlobalNamespace::__OVRHaptics__OVRHapticsOutput* New_ctor(uint32_t controller);

  /// @brief Method .ctor addr 0x2727bb4 size 0x1a4 virtual false final false
  inline void _ctor(uint32_t controller);

  /// @brief Method Process addr 0x2727ecc size 0xa6c virtual false final false
  inline void Process();

  /// @brief Method Preempt addr 0x2728d8c size 0x120 virtual false final false
  inline void Preempt(::GlobalNamespace::OVRHapticsClip* clip);

  /// @brief Method Queue addr 0x2728ec4 size 0xe8 virtual false final false
  inline void Queue(::GlobalNamespace::OVRHapticsClip* clip);

  /// @brief Method Mix addr 0x2728fc4 size 0x4b8 virtual false final false
  inline void Mix(::GlobalNamespace::OVRHapticsClip* clip);

  /// @brief Method Clear addr 0x2729494 size 0x70 virtual false final false
  inline void Clear();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRHaptics__OVRHapticsOutput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRHaptics__OVRHapticsOutput(__OVRHaptics__OVRHapticsOutput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRHaptics__OVRHapticsOutput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRHaptics__OVRHapticsOutput(__OVRHaptics__OVRHapticsOutput const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHaptics__OVRHapticsOutput();

public:
  /// @brief Field m_lowLatencyMode, offset: 0x10, size: 0x1, def value: None
  bool ___m_lowLatencyMode;

  /// @brief Field m_paddingEnabled, offset: 0x11, size: 0x1, def value: None
  bool ___m_paddingEnabled;

  /// @brief Field m_prevSamplesQueued, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_prevSamplesQueued;

  /// @brief Field m_prevSamplesQueuedTime, offset: 0x18, size: 0x4, def value: None
  float_t ___m_prevSamplesQueuedTime;

  /// @brief Field m_numPredictionHits, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_numPredictionHits;

  /// @brief Field m_numPredictionMisses, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_numPredictionMisses;

  /// @brief Field m_numUnderruns, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_numUnderruns;

  /// @brief Field m_pendingClips, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker*>* ___m_pendingClips;

  /// @brief Field m_controller, offset: 0x30, size: 0x4, def value: None
  uint32_t ___m_controller;

  /// @brief Field m_nativeBuffer, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OVRNativeBuffer* ___m_nativeBuffer;

  /// @brief Field m_paddingClip, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OVRHapticsClip* ___m_paddingClip;

  /// @brief Field PrevSampleRateHz, offset: 0x48, size: 0x4, def value: None
  int32_t ___PrevSampleRateHz;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRHaptics
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7576))
// CS Name: ::OVRHaptics*
class CORDL_TYPE OVRHaptics : public ::System::Object {
public:
  // Declarations
  using OVRHapticsOutput = ::GlobalNamespace::__OVRHaptics__OVRHapticsOutput;

  using OVRHapticsChannel = ::GlobalNamespace::__OVRHaptics__OVRHapticsChannel;

  using Config = ::GlobalNamespace::__OVRHaptics__Config;

  /// @brief Field Channels, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Channels,
                             put = setStaticF_Channels))::ArrayW<::GlobalNamespace::__OVRHaptics__OVRHapticsChannel*, ::Array<::GlobalNamespace::__OVRHaptics__OVRHapticsChannel*>*> Channels;

  /// @brief Field LeftChannel, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LeftChannel, put = setStaticF_LeftChannel))::GlobalNamespace::__OVRHaptics__OVRHapticsChannel* LeftChannel;

  /// @brief Field RightChannel, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RightChannel, put = setStaticF_RightChannel))::GlobalNamespace::__OVRHaptics__OVRHapticsChannel* RightChannel;

  /// @brief Field m_outputs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_outputs,
                             put = setStaticF_m_outputs))::ArrayW<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*, ::Array<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*>*> m_outputs;

  static inline void setStaticF_Channels(::ArrayW<::GlobalNamespace::__OVRHaptics__OVRHapticsChannel*, ::Array<::GlobalNamespace::__OVRHaptics__OVRHapticsChannel*>*> value);

  static inline ::ArrayW<::GlobalNamespace::__OVRHaptics__OVRHapticsChannel*, ::Array<::GlobalNamespace::__OVRHaptics__OVRHapticsChannel*>*> getStaticF_Channels();

  static inline void setStaticF_LeftChannel(::GlobalNamespace::__OVRHaptics__OVRHapticsChannel* value);

  static inline ::GlobalNamespace::__OVRHaptics__OVRHapticsChannel* getStaticF_LeftChannel();

  static inline void setStaticF_RightChannel(::GlobalNamespace::__OVRHaptics__OVRHapticsChannel* value);

  static inline ::GlobalNamespace::__OVRHaptics__OVRHapticsChannel* getStaticF_RightChannel();

  static inline void setStaticF_m_outputs(::ArrayW<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*, ::Array<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*>*> value);

  static inline ::ArrayW<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*, ::Array<::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*>*> getStaticF_m_outputs();

  /// @brief Method Process addr 0x2727df0 size 0xdc virtual false final false
  static inline void Process();

  // Ctor Parameters [CppParam { name: "", ty: "OVRHaptics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRHaptics(OVRHaptics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRHaptics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRHaptics(OVRHaptics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHaptics();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHaptics, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRHaptics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHaptics*, "", "OVRHaptics");
NEED_NO_BOX(::GlobalNamespace::__OVRHaptics__Config);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHaptics__Config*, "", "OVRHaptics/Config");
NEED_NO_BOX(::GlobalNamespace::__OVRHaptics__OVRHapticsChannel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHaptics__OVRHapticsChannel*, "", "OVRHaptics/OVRHapticsChannel");
NEED_NO_BOX(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput*, "", "OVRHaptics/OVRHapticsOutput");
NEED_NO_BOX(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHaptics__OVRHapticsOutput__ClipPlaybackTracker*, "", "OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker");
