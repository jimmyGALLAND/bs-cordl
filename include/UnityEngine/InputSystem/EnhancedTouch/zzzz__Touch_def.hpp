#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Finger_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Touch)
namespace System {
class Action;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename T> class __SavedStructState_1__TypedRestore;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem {
class Touchscreen;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
class Finger;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct __Touch__GlobalState;
}
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
class __Touch____c;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct TouchHistory;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct __Touch__FingerAndTouchState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine::InputSystem::LowLevel {
template <typename TValue> struct __InputStateHistory_1__Record;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct __Touch__ExtraDataPerTouchState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::LowLevel {
template <typename TValue> class InputStateHistory_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct InlinedArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TDelegate> struct CallbackArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::EnhancedTouch {
class __Touch____c;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct __Touch__ExtraDataPerTouchState;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct __Touch__FingerAndTouchState;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct __Touch__GlobalState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::EnhancedTouch::__Touch____c);
MARK_VAL_T(::UnityEngine::InputSystem::EnhancedTouch::Touch);
MARK_VAL_T(::UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState);
MARK_VAL_T(::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState);
MARK_VAL_T(::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState);
// Type: ::FingerAndTouchState
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6553))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6416))
// CS Name: ::Touch::FingerAndTouchState
struct CORDL_TYPE __Touch__FingerAndTouchState {
public:
  // Declarations
  /// @brief Method AddFingers addr 0x2ae3040 size 0x118 virtual false final false
  inline void AddFingers(::UnityEngine::InputSystem::Touchscreen* screen);

  /// @brief Method RemoveFingers addr 0x2ae323c size 0x144 virtual false final false
  inline void RemoveFingers(::UnityEngine::InputSystem::Touchscreen* screen);

  /// @brief Method Destroy addr 0x2ae369c size 0x84 virtual false final false
  inline void Destroy();

  /// @brief Method UpdateActiveFingers addr 0x2ae2550 size 0xf4 virtual false final false
  inline void UpdateActiveFingers();

  /// @brief Method UpdateActiveTouches addr 0x2ae1e60 size 0x5c0 virtual false final false
  inline void UpdateActiveTouches();

  // Ctor Parameters [CppParam { name: "updateMask", ty: "::UnityEngine::InputSystem::LowLevel::InputUpdateType", modifiers: "", def_value: None }, CppParam { name: "fingers", ty:
  // "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None }, CppParam { name: "activeFingers",
  // ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None }, CppParam { name:
  // "activeTouches", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>", modifiers: "", def_value: None }, CppParam { name:
  // "activeFingerCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "activeTouchCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalFingerCount",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "haveBuiltActiveTouches", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "haveActiveTouchesNeedingRefreshNextUpdate", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "activeTouchState", ty:
  // "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*", modifiers: "", def_value: None }]
  constexpr __Touch__FingerAndTouchState(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask,
                                         ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> fingers,
                                         ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> activeFingers,
                                         ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch, ::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*> activeTouches,
                                         int32_t activeFingerCount, int32_t activeTouchCount, int32_t totalFingerCount, uint32_t lastId, bool haveBuiltActiveTouches,
                                         bool haveActiveTouchesNeedingRefreshNextUpdate,
                                         ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* activeTouchState) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Touch__FingerAndTouchState();

  /// @brief Field updateMask, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask;

  /// @brief Field fingers, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> fingers;

  /// @brief Field activeFingers, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*, ::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> activeFingers;

  /// @brief Field activeTouches, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch, ::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*> activeTouches;

  /// @brief Field activeFingerCount, offset: 0x20, size: 0x4, def value: None
  int32_t activeFingerCount;

  /// @brief Field activeTouchCount, offset: 0x24, size: 0x4, def value: None
  int32_t activeTouchCount;

  /// @brief Field totalFingerCount, offset: 0x28, size: 0x4, def value: None
  int32_t totalFingerCount;

  /// @brief Field lastId, offset: 0x2c, size: 0x4, def value: None
  uint32_t lastId;

  /// @brief Field haveBuiltActiveTouches, offset: 0x30, size: 0x1, def value: None
  bool haveBuiltActiveTouches;

  /// @brief Field haveActiveTouchesNeedingRefreshNextUpdate, offset: 0x31, size: 0x1, def value: None
  bool haveActiveTouchesNeedingRefreshNextUpdate;

  /// @brief Field activeTouchState, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* activeTouchState;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState, 0x40>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
// Type: ::GlobalState
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6660), inst: 985 }), TypeDefinitionIndex(TypeDefinitionIndex(6414)),
// TypeDefinitionIndex(TypeDefinitionIndex(6288)), TypeDefinitionIndex(TypeDefinitionIndex(6660)), TypeDefinitionIndex(TypeDefinitionIndex(2323)), TypeDefinitionIndex(TypeDefinitionIndex(6669)),
// TypeDefinitionIndex(TypeDefinitionIndex(6416)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2323), inst: 306 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(6669), inst: 3129 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6415)) CS Name: ::Touch::GlobalState
struct CORDL_TYPE __Touch__GlobalState {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "touchscreens", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>", modifiers: "", def_value: None }, CppParam
  // { name: "historyLengthPerFinger", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "onFingerDown", ty:
  // "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None }, CppParam { name:
  // "onFingerMove", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None }, CppParam {
  // name: "onFingerUp", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None },
  // CppParam { name: "playerState", ty: "::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState", modifiers: "", def_value: None }]
  constexpr __Touch__GlobalState(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*> touchscreens, int32_t historyLengthPerFinger,
                                 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerDown,
                                 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerMove,
                                 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerUp,
                                 ::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState playerState) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Touch__GlobalState();

  /// @brief Field touchscreens, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*> touchscreens;

  /// @brief Field historyLengthPerFinger, offset: 0x18, size: 0x4, def value: None
  int32_t historyLengthPerFinger;

  /// @brief Field onFingerDown, offset: 0x20, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerDown;

  /// @brief Field onFingerMove, offset: 0x70, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerMove;

  /// @brief Field onFingerUp, offset: 0xc0, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> onFingerUp;

  /// @brief Field playerState, offset: 0x110, size: 0x40, def value: None
  ::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState playerState;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x150 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState, 0x150>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
// Type: ::ExtraDataPerTouchState
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6417))
// CS Name: ::Touch::ExtraDataPerTouchState
struct CORDL_TYPE __Touch__ExtraDataPerTouchState {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "accumulatedDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "uniqueId", ty: "uint32_t", modifiers: "", def_value: None
  // }]
  constexpr __Touch__ExtraDataPerTouchState(::UnityEngine::Vector2 accumulatedDelta, uint32_t uniqueId) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Touch__ExtraDataPerTouchState();

  /// @brief Field accumulatedDelta, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 accumulatedDelta;

  /// @brief Field uniqueId, offset: 0x8, size: 0x4, def value: None
  uint32_t uniqueId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState, 0xc>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6418))
// CS Name: ::Touch::<>c*
class CORDL_TYPE __Touch____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::InputSystem::EnhancedTouch::__Touch____c* __9;

  /// @brief Field <>9__78_0, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__78_0,
               put = setStaticF___9__78_0))::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>* __9__78_0;

  /// @brief Field <>9__78_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__78_1, put = setStaticF___9__78_1))::System::Action* __9__78_1;

  static inline void setStaticF___9(::UnityEngine::InputSystem::EnhancedTouch::__Touch____c* value);

  static inline ::UnityEngine::InputSystem::EnhancedTouch::__Touch____c* getStaticF___9();

  static inline void setStaticF___9__78_0(::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>* value);

  static inline ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>* getStaticF___9__78_0();

  static inline void setStaticF___9__78_1(::System::Action* value);

  static inline ::System::Action* getStaticF___9__78_1();

  static inline ::UnityEngine::InputSystem::EnhancedTouch::__Touch____c* New_ctor();

  /// @brief Method .ctor addr 0x2ae378c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SaveAndResetState>b__78_0 addr 0x2ae3794 size 0x84 virtual false final false
  inline void _SaveAndResetState_b__78_0(ByRef<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState> state);

  /// @brief Method <SaveAndResetState>b__78_1 addr 0x2ae3818 size 0x4 virtual false final false
  inline void _SaveAndResetState_b__78_1();

  // Ctor Parameters [CppParam { name: "", ty: "__Touch____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Touch____c(__Touch____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Touch____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Touch____c(__Touch____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Touch____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
// Type: UnityEngine.InputSystem.EnhancedTouch::Touch
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6576), inst: 3896 }), TypeDefinitionIndex(TypeDefinitionIndex(6514)),
// TypeDefinitionIndex(TypeDefinitionIndex(6576)), TypeDefinitionIndex(TypeDefinitionIndex(6415))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6419)) CS Name:
// ::UnityEngine.InputSystem.EnhancedTouch::Touch
struct CORDL_TYPE Touch {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::EnhancedTouch::__Touch____c;

  using ExtraDataPerTouchState = ::UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState;

  using FingerAndTouchState = ::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState;

  using GlobalState = ::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState;

  /// @brief Field s_GlobalState, offset 0xffffffff, size 0x150
  static __declspec(property(get = getStaticF_s_GlobalState, put = setStaticF_s_GlobalState))::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState s_GlobalState;

  __declspec(property(get = get_valid)) bool valid;

  __declspec(property(get = get_finger))::UnityEngine::InputSystem::EnhancedTouch::Finger* finger;

  __declspec(property(get = get_phase))::UnityEngine::InputSystem::TouchPhase phase;

  __declspec(property(get = get_began)) bool began;

  __declspec(property(get = get_inProgress)) bool inProgress;

  __declspec(property(get = get_ended)) bool ended;

  __declspec(property(get = get_touchId)) int32_t touchId;

  __declspec(property(get = get_pressure)) float_t pressure;

  __declspec(property(get = get_radius))::UnityEngine::Vector2 radius;

  __declspec(property(get = get_startTime)) double_t startTime;

  __declspec(property(get = get_time)) double_t time;

  __declspec(property(get = get_screen))::UnityEngine::InputSystem::Touchscreen* screen;

  __declspec(property(get = get_screenPosition))::UnityEngine::Vector2 screenPosition;

  __declspec(property(get = get_startScreenPosition))::UnityEngine::Vector2 startScreenPosition;

  __declspec(property(get = get_delta))::UnityEngine::Vector2 delta;

  __declspec(property(get = get_tapCount)) int32_t tapCount;

  __declspec(property(get = get_isTap)) bool isTap;

  __declspec(property(get = get_isInProgress)) bool isInProgress;

  __declspec(property(get = get_updateStepCount)) uint32_t updateStepCount;

  __declspec(property(get = get_uniqueId)) uint32_t uniqueId;

  __declspec(property(get = get_state))::UnityEngine::InputSystem::LowLevel::TouchState state;

  __declspec(property(get = get_extraData))::UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState extraData;

  __declspec(property(get = get_history))::UnityEngine::InputSystem::EnhancedTouch::TouchHistory history;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*();

  static inline void setStaticF_s_GlobalState(::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState value);

  static inline ::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState getStaticF_s_GlobalState();

  /// @brief Method get_valid addr 0x2ae0c74 size 0x48 virtual false final false
  inline bool get_valid();

  /// @brief Method get_finger addr 0x2ae1ac8 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::EnhancedTouch::Finger* get_finger();

  /// @brief Method get_phase addr 0x2ae1ab4 size 0x14 virtual false final false
  inline ::UnityEngine::InputSystem::TouchPhase get_phase();

  /// @brief Method get_began addr 0x2ae1b18 size 0x1c virtual false final false
  inline bool get_began();

  /// @brief Method get_inProgress addr 0x2ae1b34 size 0x50 virtual false final false
  inline bool get_inProgress();

  /// @brief Method get_ended addr 0x2ae1b84 size 0x3c virtual false final false
  inline bool get_ended();

  /// @brief Method get_touchId addr 0x2ae1aa0 size 0x14 virtual false final false
  inline int32_t get_touchId();

  /// @brief Method get_pressure addr 0x2ae1bc0 size 0x14 virtual false final false
  inline float_t get_pressure();

  /// @brief Method get_radius addr 0x2ae1bd4 size 0x14 virtual false final false
  inline ::UnityEngine::Vector2 get_radius();

  /// @brief Method get_startTime addr 0x2ae1be8 size 0x14 virtual false final false
  inline double_t get_startTime();

  /// @brief Method get_time addr 0x2ae1bfc size 0x48 virtual false final false
  inline double_t get_time();

  /// @brief Method get_screen addr 0x2ae1c44 size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::Touchscreen* get_screen();

  /// @brief Method get_screenPosition addr 0x2ae0d74 size 0x14 virtual false final false
  inline ::UnityEngine::Vector2 get_screenPosition();

  /// @brief Method get_startScreenPosition addr 0x2ae1c60 size 0x14 virtual false final false
  inline ::UnityEngine::Vector2 get_startScreenPosition();

  /// @brief Method get_delta addr 0x2ae1c74 size 0x14 virtual false final false
  inline ::UnityEngine::Vector2 get_delta();

  /// @brief Method get_tapCount addr 0x2ae1c88 size 0x14 virtual false final false
  inline int32_t get_tapCount();

  /// @brief Method get_isTap addr 0x2ae1c9c size 0x18 virtual false final false
  inline bool get_isTap();

  /// @brief Method get_isInProgress addr 0x2ae0d94 size 0x34 virtual false final false
  inline bool get_isInProgress();

  /// @brief Method get_updateStepCount addr 0x2ae0dc8 size 0x14 virtual false final false
  inline uint32_t get_updateStepCount();

  /// @brief Method get_uniqueId addr 0x2ae1a8c size 0x14 virtual false final false
  inline uint32_t get_uniqueId();

  /// @brief Method get_state addr 0x2ae1ad0 size 0x48 virtual false final false
  inline ByRef<::UnityEngine::InputSystem::LowLevel::TouchState> get_state();

  /// @brief Method get_extraData addr 0x2ae1cc0 size 0x48 virtual false final false
  inline ByRef<::UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState> get_extraData();

  /// @brief Method get_history addr 0x2ae1d08 size 0xb8 virtual false final false
  inline ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory get_history();

  /// @brief Method get_activeTouches addr 0x2ae1dc0 size 0xa0 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch> get_activeTouches();

  /// @brief Method get_fingers addr 0x2ae2420 size 0x90 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> get_fingers();

  /// @brief Method get_activeFingers addr 0x2ae24b0 size 0xa0 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> get_activeFingers();

  /// @brief Method get_screens addr 0x2ae2644 size 0x8c virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen*>* get_screens();

  /// @brief Method add_onFingerDown addr 0x2ae26d0 size 0xc8 virtual false final false
  static inline void add_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value);

  /// @brief Method remove_onFingerDown addr 0x2ae2798 size 0xc8 virtual false final false
  static inline void remove_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value);

  /// @brief Method add_onFingerUp addr 0x2ae2860 size 0xc8 virtual false final false
  static inline void add_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value);

  /// @brief Method remove_onFingerUp addr 0x2ae2928 size 0xc8 virtual false final false
  static inline void remove_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value);

  /// @brief Method add_onFingerMove addr 0x2ae29f0 size 0xc8 virtual false final false
  static inline void add_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value);

  /// @brief Method remove_onFingerMove addr 0x2ae2ab8 size 0xc8 virtual false final false
  static inline void remove_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>* value);

  /// @brief Method get_maxHistoryLengthPerFinger addr 0x2ae1168 size 0x58 virtual false final false
  static inline int32_t get_maxHistoryLengthPerFinger();

  /// @brief Method .ctor addr 0x2ae0d88 size 0xc virtual false final false
  inline void _ctor(::UnityEngine::InputSystem::EnhancedTouch::Finger* finger,
                    ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState> touchRecord);

  /// @brief Method ToString addr 0x2ae2b80 size 0x2bc virtual true final false
  inline ::StringW ToString();

  /// @brief Method Equals addr 0x2ae2e3c size 0x74 virtual true final true
  inline bool Equals(::UnityEngine::InputSystem::EnhancedTouch::Touch other);

  /// @brief Method Equals addr 0x2ae2eb0 size 0x90 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2ae2f40 size 0x74 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method AddTouchscreen addr 0x2ae2fb4 size 0x8c virtual false final false
  static inline void AddTouchscreen(::UnityEngine::InputSystem::Touchscreen* screen);

  /// @brief Method RemoveTouchscreen addr 0x2ae3158 size 0xe4 virtual false final false
  static inline void RemoveTouchscreen(::UnityEngine::InputSystem::Touchscreen* screen);

  /// @brief Method BeginUpdate addr 0x2ae3380 size 0x74 virtual false final false
  static inline void BeginUpdate();

  /// @brief Method CreateGlobalState addr 0x2ae33f4 size 0x2c virtual false final false
  static inline ::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState CreateGlobalState();

  /// @brief Method SaveAndResetState addr 0x2ae3420 size 0x218 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::ISavedState* SaveAndResetState();

  // Ctor Parameters [CppParam { name: "m_Finger", ty: "::UnityEngine::InputSystem::EnhancedTouch::Finger*", modifiers: "", def_value: None }, CppParam { name: "m_TouchRecord", ty:
  // "::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>", modifiers: "", def_value: None }]
  constexpr Touch(::UnityEngine::InputSystem::EnhancedTouch::Finger* m_Finger,
                  ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState> m_TouchRecord) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Touch();

  /// @brief Field m_Finger, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::EnhancedTouch::Finger* m_Finger;

  /// @brief Field m_TouchRecord, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState> m_TouchRecord;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::Touch, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::EnhancedTouch
NEED_NO_BOX(::UnityEngine::InputSystem::EnhancedTouch::__Touch____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*, "UnityEngine.InputSystem.EnhancedTouch", "Touch/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::Touch, "UnityEngine.InputSystem.EnhancedTouch", "Touch");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState, "UnityEngine.InputSystem.EnhancedTouch", "Touch/ExtraDataPerTouchState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState, "UnityEngine.InputSystem.EnhancedTouch", "Touch/FingerAndTouchState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState, "UnityEngine.InputSystem.EnhancedTouch", "Touch/GlobalState");
