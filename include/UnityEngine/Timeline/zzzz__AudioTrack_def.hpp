#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioTrack)
namespace UnityEngine::Playables {
struct Playable;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::Timeline {
class AudioMixerProperties;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Timeline {
class RuntimeElement;
}
namespace UnityEngine::Timeline {
template <typename T> class IntervalTree_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
class __AudioTrack___get_outputs_d__4;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AudioTrack;
}
namespace UnityEngine::Timeline {
class __AudioTrack___get_outputs_d__4;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::AudioTrack);
MARK_REF_PTR_T(::UnityEngine::Timeline::__AudioTrack___get_outputs_d__4);
// Type: ::<get_outputs>d__4
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10431)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13869))
// CS Name: ::AudioTrack::<get_outputs>d__4*
class CORDL_TYPE __AudioTrack___get_outputs_d__4 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x20
  __declspec(property(get = __get___2__current, put = __set___2__current))::UnityEngine::Playables::PlayableBinding __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x38, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x40, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::Timeline::AudioTrack* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current))::UnityEngine::Playables::PlayableBinding
      System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::UnityEngine::Playables::PlayableBinding& __get___2__current();

  constexpr ::UnityEngine::Playables::PlayableBinding const& __get___2__current() const;

  constexpr void __set___2__current(::UnityEngine::Playables::PlayableBinding value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::UnityEngine::Timeline::AudioTrack*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::AudioTrack*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::Timeline::AudioTrack* value);

  static inline ::UnityEngine::Timeline::__AudioTrack___get_outputs_d__4* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2c62a9c size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2c62bb8 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2c62bbc size 0x90 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current addr 0x2c62c4c size 0x10 virtual true final true
  inline ::UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2c62c5c size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2c62c9c size 0x60 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator addr 0x2c62cfc size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2c62da0 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__AudioTrack___get_outputs_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioTrack___get_outputs_d__4(__AudioTrack___get_outputs_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioTrack___get_outputs_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioTrack___get_outputs_d__4(__AudioTrack___get_outputs_d__4 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioTrack___get_outputs_d__4();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x20, def value: None
  ::UnityEngine::Playables::PlayableBinding _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x38, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Timeline::AudioTrack* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__AudioTrack___get_outputs_d__4, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::AudioTrack
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13862))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13870))
// CS Name: ::UnityEngine.Timeline::AudioTrack*
class CORDL_TYPE AudioTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
  // Declarations
  using _get_outputs_d__4 = ::UnityEngine::Timeline::__AudioTrack___get_outputs_d__4;

  /// @brief Field m_TrackProperties, offset 0xa0, size 0x8
  __declspec(property(get = __get_m_TrackProperties, put = __set_m_TrackProperties))::UnityEngine::Timeline::AudioMixerProperties* m_TrackProperties;

  __declspec(property(get = get_outputs))::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* outputs;

  constexpr ::UnityEngine::Timeline::AudioMixerProperties*& __get_m_TrackProperties();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::AudioMixerProperties*> const& __get_m_TrackProperties() const;

  constexpr void __set_m_TrackProperties(::UnityEngine::Timeline::AudioMixerProperties* value);

  /// @brief Method CreateClip addr 0x2c62238 size 0x134 virtual false final false
  inline ::UnityEngine::Timeline::TimelineClip* CreateClip(::UnityEngine::AudioClip* clip);

  /// @brief Method CompileClips addr 0x2c6236c size 0x644 virtual true final false
  inline ::UnityEngine::Playables::Playable CompileClips(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                         ::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TimelineClip*>* timelineClips,
                                                         ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree);

  /// @brief Method get_outputs addr 0x2c62a24 size 0x78 virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();

  /// @brief Method OnValidate addr 0x2c62ad0 size 0x58 virtual false final false
  inline void OnValidate();

  static inline ::UnityEngine::Timeline::AudioTrack* New_ctor();

  /// @brief Method .ctor addr 0x2c62b28 size 0x90 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AudioTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioTrack(AudioTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioTrack(AudioTrack const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioTrack();

public:
  /// @brief Field m_TrackProperties, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::Timeline::AudioMixerProperties* ___m_TrackProperties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AudioTrack, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::AudioTrack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AudioTrack*, "UnityEngine.Timeline", "AudioTrack");
NEED_NO_BOX(::UnityEngine::Timeline::__AudioTrack___get_outputs_d__4);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__AudioTrack___get_outputs_d__4*, "UnityEngine.Timeline", "AudioTrack/<get_outputs>d__4");
