#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BurstSliderGameNoteController)
namespace GlobalNamespace {
class BoxCuttableBySaber;
}
namespace GlobalNamespace {
class __BurstSliderGameNoteController__Pool;
}
namespace GlobalNamespace {
struct __NoteData__GameplayType;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
template <typename T> class ICubeNoteControllerInitializable_1;
}
namespace GlobalNamespace {
class INoteMovementProvider;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
namespace GlobalNamespace {
class INoteVisualModifierTypeProvider;
}
namespace GlobalNamespace {
class NoteMovement;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
class IGameNoteMirrorable;
}
namespace GlobalNamespace {
class INoteMirrorable;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class BurstSliderGameNoteController;
}
namespace GlobalNamespace {
class __BurstSliderGameNoteController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BurstSliderGameNoteController);
MARK_REF_PTR_T(::GlobalNamespace::__BurstSliderGameNoteController__Pool);
// Type: ::BurstSliderGameNoteController
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(4749)), TypeDefinitionIndex(TypeDefinitionIndex(14757)),
// TypeDefinitionIndex(TypeDefinitionIndex(4761))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4738)) CS Name: ::BurstSliderGameNoteController*
class CORDL_TYPE BurstSliderGameNoteController : public ::GlobalNamespace::NoteController {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__BurstSliderGameNoteController__Pool;

  /// @brief Field _bigCuttableBySaberList, offset 0x80, size 0x8
  __declspec(property(get = __get__bigCuttableBySaberList,
                      put = __set__bigCuttableBySaberList))::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> _bigCuttableBySaberList;

  /// @brief Field _smallCuttableBySaberList, offset 0x88, size 0x8
  __declspec(property(get = __get__smallCuttableBySaberList,
                      put = __set__smallCuttableBySaberList))::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> _smallCuttableBySaberList;

  /// @brief Field _wrapperGO, offset 0x90, size 0x8
  __declspec(property(get = __get__wrapperGO, put = __set__wrapperGO))::UnityEngine::GameObject* _wrapperGO;

  /// @brief Field _audioTimeSyncController, offset 0x98, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::AudioTimeSyncController* _audioTimeSyncController;

  /// @brief Field cubeNoteControllerDidInitEvent, offset 0xa0, size 0x8
  __declspec(property(get = __get_cubeNoteControllerDidInitEvent,
                      put = __set_cubeNoteControllerDidInitEvent))::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController*>* cubeNoteControllerDidInitEvent;

  /// @brief Field _noteVisualModifierType, offset 0xa8, size 0x4
  __declspec(property(get = __get__noteVisualModifierType, put = __set__noteVisualModifierType))::GlobalNamespace::NoteVisualModifierType _noteVisualModifierType;

  /// @brief Field _gameplayType, offset 0xac, size 0x4
  __declspec(property(get = __get__gameplayType, put = __set__gameplayType))::GlobalNamespace::__NoteData__GameplayType _gameplayType;

  /// @brief Field _bigCuttableBySaber, offset 0xb0, size 0x8
  __declspec(property(get = __get__bigCuttableBySaber, put = __set__bigCuttableBySaber))::GlobalNamespace::BoxCuttableBySaber* _bigCuttableBySaber;

  /// @brief Field _originalColliderSize, offset 0xb8, size 0xc
  __declspec(property(get = __get__originalColliderSize, put = __set__originalColliderSize))::UnityEngine::Vector3 _originalColliderSize;

  /// @brief Field _originalColliderCenter, offset 0xc4, size 0xc
  __declspec(property(get = __get__originalColliderCenter, put = __set__originalColliderCenter))::UnityEngine::Vector3 _originalColliderCenter;

  __declspec(property(get = get_noteMovement))::GlobalNamespace::NoteMovement* noteMovement;

  __declspec(property(get = get_noteVisualModifierType))::GlobalNamespace::NoteVisualModifierType noteVisualModifierType;

  __declspec(property(get = get_gameplayType))::GlobalNamespace::__NoteData__GameplayType gameplayType;

  /// @brief Convert operator to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::BurstSliderGameNoteController*>"
  constexpr operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::BurstSliderGameNoteController*>*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteVisualModifierTypeProvider"
  constexpr operator ::GlobalNamespace::INoteVisualModifierTypeProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteMovementProvider"
  constexpr operator ::GlobalNamespace::INoteMovementProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IGameNoteMirrorable"
  constexpr operator ::GlobalNamespace::IGameNoteMirrorable*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INoteMirrorable"
  constexpr operator ::GlobalNamespace::INoteMirrorable*() noexcept;

  constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*>& __get__bigCuttableBySaberList();

  constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> const& __get__bigCuttableBySaberList() const;

  constexpr void __set__bigCuttableBySaberList(::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*>& __get__smallCuttableBySaberList();

  constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> const& __get__smallCuttableBySaberList() const;

  constexpr void __set__smallCuttableBySaberList(::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> value);

  constexpr ::UnityEngine::GameObject*& __get__wrapperGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__wrapperGO() const;

  constexpr void __set__wrapperGO(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::AudioTimeSyncController*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value);

  constexpr ::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController*>*& __get_cubeNoteControllerDidInitEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController*>*> const& __get_cubeNoteControllerDidInitEvent() const;

  constexpr void __set_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController*>* value);

  constexpr ::GlobalNamespace::NoteVisualModifierType& __get__noteVisualModifierType();

  constexpr ::GlobalNamespace::NoteVisualModifierType const& __get__noteVisualModifierType() const;

  constexpr void __set__noteVisualModifierType(::GlobalNamespace::NoteVisualModifierType value);

  constexpr ::GlobalNamespace::__NoteData__GameplayType& __get__gameplayType();

  constexpr ::GlobalNamespace::__NoteData__GameplayType const& __get__gameplayType() const;

  constexpr void __set__gameplayType(::GlobalNamespace::__NoteData__GameplayType value);

  constexpr ::GlobalNamespace::BoxCuttableBySaber*& __get__bigCuttableBySaber();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoxCuttableBySaber*> const& __get__bigCuttableBySaber() const;

  constexpr void __set__bigCuttableBySaber(::GlobalNamespace::BoxCuttableBySaber* value);

  constexpr ::UnityEngine::Vector3& __get__originalColliderSize();

  constexpr ::UnityEngine::Vector3 const& __get__originalColliderSize() const;

  constexpr void __set__originalColliderSize(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__originalColliderCenter();

  constexpr ::UnityEngine::Vector3 const& __get__originalColliderCenter() const;

  constexpr void __set__originalColliderCenter(::UnityEngine::Vector3 value);

  /// @brief Method add_cubeNoteControllerDidInitEvent addr 0x2383ef0 size 0xb0 virtual true final true
  inline void add_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController*>* value);

  /// @brief Method remove_cubeNoteControllerDidInitEvent addr 0x2383fa0 size 0xb0 virtual true final true
  inline void remove_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController*>* value);

  /// @brief Method get_noteMovement addr 0x2384050 size 0x8 virtual true final true
  inline ::GlobalNamespace::NoteMovement* get_noteMovement();

  /// @brief Method get_noteVisualModifierType addr 0x2384058 size 0x8 virtual true final true
  inline ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType();

  /// @brief Method get_gameplayType addr 0x2384060 size 0x8 virtual true final true
  inline ::GlobalNamespace::__NoteData__GameplayType get_gameplayType();

  /// @brief Method Init addr 0x2378b88 size 0x2a4 virtual false final false
  inline void Init(::GlobalNamespace::NoteData* noteData, float_t worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos,
                   float_t moveDuration, float_t jumpDuration, float_t jumpGravity, ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType, float_t uniformScale);

  /// @brief Method Awake addr 0x2384068 size 0x1a8 virtual true final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x2384210 size 0x1cc virtual true final false
  inline void OnDestroy();

  /// @brief Method NoteDidPassMissedMarker addr 0x23843dc size 0xbc virtual true final false
  inline void NoteDidPassMissedMarker();

  /// @brief Method NoteDidStartDissolving addr 0x2384498 size 0xb8 virtual true final false
  inline void NoteDidStartDissolving();

  /// @brief Method HandleBigWasCutBySaber addr 0x2384550 size 0x18 virtual false final false
  inline void HandleBigWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method HandleSmallWasCutBySaber addr 0x2384a4c size 0x18 virtual false final false
  inline void HandleSmallWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec);

  /// @brief Method HandleCut addr 0x2384568 size 0x4e4 virtual false final false
  inline void HandleCut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec, bool allowBadCut);

  /// @brief Method NoteDidStartJump addr 0x2384a64 size 0xc0 virtual true final false
  inline void NoteDidStartJump();

  /// @brief Method HiddenStateDidChange addr 0x2384b24 size 0x24 virtual true final false
  inline void HiddenStateDidChange(bool hide);

  /// @brief Method Pause addr 0x2384b48 size 0x10 virtual true final false
  inline void Pause(bool pause);

  static inline ::GlobalNamespace::BurstSliderGameNoteController* New_ctor();

  /// @brief Method .ctor addr 0x2384b58 size 0x4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BurstSliderGameNoteController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstSliderGameNoteController(BurstSliderGameNoteController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstSliderGameNoteController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstSliderGameNoteController(BurstSliderGameNoteController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstSliderGameNoteController();

public:
  /// @brief Field _bigCuttableBySaberList, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> ____bigCuttableBySaberList;

  /// @brief Field _smallCuttableBySaberList, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> ____smallCuttableBySaberList;

  /// @brief Field _wrapperGO, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____wrapperGO;

  /// @brief Field _audioTimeSyncController, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::AudioTimeSyncController* ____audioTimeSyncController;

  /// @brief Field cubeNoteControllerDidInitEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::BurstSliderGameNoteController*>* ___cubeNoteControllerDidInitEvent;

  /// @brief Field _noteVisualModifierType, offset: 0xa8, size: 0x4, def value: None
  ::GlobalNamespace::NoteVisualModifierType ____noteVisualModifierType;

  /// @brief Field _gameplayType, offset: 0xac, size: 0x4, def value: None
  ::GlobalNamespace::__NoteData__GameplayType ____gameplayType;

  /// @brief Field _bigCuttableBySaber, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::BoxCuttableBySaber* ____bigCuttableBySaber;

  /// @brief Field _originalColliderSize, offset: 0xb8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____originalColliderSize;

  /// @brief Field _originalColliderCenter, offset: 0xc4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____originalColliderCenter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BurstSliderGameNoteController, 0xd0>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11050)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 288 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4738))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4737)) CS Name: ::BurstSliderGameNoteController::Pool*
class CORDL_TYPE __BurstSliderGameNoteController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::BurstSliderGameNoteController*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__BurstSliderGameNoteController__Pool* New_ctor();

  /// @brief Method .ctor addr 0x2384b5c size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BurstSliderGameNoteController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BurstSliderGameNoteController__Pool(__BurstSliderGameNoteController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BurstSliderGameNoteController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BurstSliderGameNoteController__Pool(__BurstSliderGameNoteController__Pool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstSliderGameNoteController__Pool();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BurstSliderGameNoteController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BurstSliderGameNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BurstSliderGameNoteController*, "", "BurstSliderGameNoteController");
NEED_NO_BOX(::GlobalNamespace::__BurstSliderGameNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BurstSliderGameNoteController__Pool*, "", "BurstSliderGameNoteController/Pool");
