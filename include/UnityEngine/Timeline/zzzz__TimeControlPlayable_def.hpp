#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TimeControlPlayable)
namespace UnityEngine::Playables {
template <typename T> struct ScriptPlayable_1;
}
namespace UnityEngine::Timeline {
class ITimeControl;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct FrameData;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimeControlPlayable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TimeControlPlayable);
// Type: UnityEngine.Timeline::TimeControlPlayable
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10425))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13909))
// CS Name: ::UnityEngine.Timeline::TimeControlPlayable*
class CORDL_TYPE TimeControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field m_timeControl, offset 0x10, size 0x8
  __declspec(property(get = __get_m_timeControl, put = __set_m_timeControl))::UnityEngine::Timeline::ITimeControl* m_timeControl;

  /// @brief Field m_started, offset 0x18, size 0x1
  __declspec(property(get = __get_m_started, put = __set_m_started)) bool m_started;

  constexpr ::UnityEngine::Timeline::ITimeControl*& __get_m_timeControl();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::ITimeControl*> const& __get_m_timeControl() const;

  constexpr void __set_m_timeControl(::UnityEngine::Timeline::ITimeControl* value);

  constexpr bool& __get_m_started();

  constexpr bool const& __get_m_started() const;

  constexpr void __set_m_started(bool value);

  /// @brief Method Create addr 0x2c6d334 size 0xf4 virtual false final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph,
                                                                                                                 ::UnityEngine::Timeline::ITimeControl* timeControl);

  /// @brief Method Initialize addr 0x2c6d428 size 0x8 virtual false final false
  inline void Initialize(::UnityEngine::Timeline::ITimeControl* timeControl);

  /// @brief Method PrepareFrame addr 0x2c6d430 size 0xf4 virtual true final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnBehaviourPlay addr 0x2c6d524 size 0xb4 virtual true final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnBehaviourPause addr 0x2c6d5d8 size 0xb0 virtual true final false
  inline void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  static inline ::UnityEngine::Timeline::TimeControlPlayable* New_ctor();

  /// @brief Method .ctor addr 0x2c6d688 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TimeControlPlayable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeControlPlayable(TimeControlPlayable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeControlPlayable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeControlPlayable(TimeControlPlayable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeControlPlayable();

public:
  /// @brief Field m_timeControl, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Timeline::ITimeControl* ___m_timeControl;

  /// @brief Field m_started, offset: 0x18, size: 0x1, def value: None
  bool ___m_started;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimeControlPlayable, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TimeControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimeControlPlayable*, "UnityEngine.Timeline", "TimeControlPlayable");
