#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserAccountHandle_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserChange_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUser)
namespace UnityEngine::InputSystem::Utilities {
template <typename T> class __SavedStructState_1__TypedRestore;
}
namespace System {
class Action;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserPairingOptions;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserChange;
}
namespace UnityEngine::InputSystem {
template <typename TControl> struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
namespace UnityEngine::InputSystem::Users {
struct __InputUser__GlobalState;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
namespace UnityEngine::InputSystem::Users {
struct __InputUser__UserFlags;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Users {
struct __InputUser__CompareDevicesByUserAccount;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
struct __InputControlScheme__MatchResult;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserAccountHandle;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::InputSystem::Users {
struct __InputUser__ControlSchemeChangeSyntax;
}
namespace UnityEngine::InputSystem::Users {
class __InputUser____c;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::Users {
struct __InputUser__UserData;
}
namespace UnityEngine::InputSystem::Users {
struct __InputUser__OngoingAccountSelection;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TDelegate> struct CallbackArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct InlinedArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Users {
struct __InputUser__UserFlags;
}
namespace UnityEngine::InputSystem::Users {
class __InputUser____c;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser;
}
namespace UnityEngine::InputSystem::Users {
struct __InputUser__CompareDevicesByUserAccount;
}
namespace UnityEngine::InputSystem::Users {
struct __InputUser__ControlSchemeChangeSyntax;
}
namespace UnityEngine::InputSystem::Users {
struct __InputUser__GlobalState;
}
namespace UnityEngine::InputSystem::Users {
struct __InputUser__OngoingAccountSelection;
}
namespace UnityEngine::InputSystem::Users {
struct __InputUser__UserData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Users::__InputUser__UserFlags);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Users::__InputUser____c);
MARK_VAL_T(::UnityEngine::InputSystem::Users::InputUser);
MARK_VAL_T(::UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount);
MARK_VAL_T(::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax);
MARK_VAL_T(::UnityEngine::InputSystem::Users::__InputUser__GlobalState);
MARK_VAL_T(::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection);
MARK_VAL_T(::UnityEngine::InputSystem::Users::__InputUser__UserData);
// Type: ::ControlSchemeChangeSyntax
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6357))
// CS Name: ::InputUser::ControlSchemeChangeSyntax
struct CORDL_TYPE __InputUser__ControlSchemeChangeSyntax {
public:
  // Declarations
  /// @brief Method AndPairRemainingDevices addr 0x2acf1b8 size 0x24 virtual false final false
  inline ::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax AndPairRemainingDevices();

  // Ctor Parameters [CppParam { name: "m_UserIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputUser__ControlSchemeChangeSyntax(int32_t m_UserIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputUser__ControlSchemeChangeSyntax();

  /// @brief Field m_UserIndex, offset: 0x0, size: 0x4, def value: None
  int32_t m_UserIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
// Type: ::UserFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6358))
// CS Name: ::InputUser::UserFlags
struct CORDL_TYPE __InputUser__UserFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputUser__UserFlags_Unwrapped
  enum struct ____InputUser__UserFlags_Unwrapped : int32_t {
    __E_BindToAllDevices = static_cast<int32_t>(0x1),
    __E_UserAccountSelectionInProgress = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputUser__UserFlags_Unwrapped() const noexcept {
    return static_cast<____InputUser__UserFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputUser__UserFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputUser__UserFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field BindToAllDevices value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::Users::__InputUser__UserFlags const BindToAllDevices;

  /// @brief Field UserAccountSelectionInProgress value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::Users::__InputUser__UserFlags const UserAccountSelectionInProgress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::__InputUser__UserFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
// Type: ::UserData
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 196, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6199)), TypeDefinitionIndex(TypeDefinitionIndex(6358)), TypeDefinitionIndex(TypeDefinitionIndex(2448)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 3107 }), TypeDefinitionIndex(TypeDefinitionIndex(6204)), TypeDefinitionIndex(TypeDefinitionIndex(6365)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 3305 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6359)) CS Name: ::InputUser::UserData
struct CORDL_TYPE __InputUser__UserData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "platformUserAccountHandle", ty: "::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>", modifiers: "", def_value: None }, CppParam {
  // name: "platformUserAccountName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "platformUserAccountId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "deviceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "deviceStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "actions", ty:
  // "::UnityEngine::InputSystem::IInputActionCollection*", modifiers: "", def_value: None }, CppParam { name: "controlScheme", ty:
  // "::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>", modifiers: "", def_value: None }, CppParam { name: "controlSchemeMatch", ty:
  // "::UnityEngine::InputSystem::__InputControlScheme__MatchResult", modifiers: "", def_value: None }, CppParam { name: "lostDeviceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "lostDeviceStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::InputSystem::Users::__InputUser__UserFlags", modifiers: "", def_value:
  // None }]
  constexpr __InputUser__UserData(::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> platformUserAccountHandle, ::StringW platformUserAccountName,
                                  ::StringW platformUserAccountId, int32_t deviceCount, int32_t deviceStartIndex, ::UnityEngine::InputSystem::IInputActionCollection* actions,
                                  ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> controlScheme, ::UnityEngine::InputSystem::__InputControlScheme__MatchResult controlSchemeMatch,
                                  int32_t lostDeviceCount, int32_t lostDeviceStartIndex, ::UnityEngine::InputSystem::Users::__InputUser__UserFlags flags) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputUser__UserData();

  /// @brief Field platformUserAccountHandle, offset: 0x0, size: 0x18, def value: None
  ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> platformUserAccountHandle;

  /// @brief Field platformUserAccountName, offset: 0x18, size: 0x8, def value: None
  ::StringW platformUserAccountName;

  /// @brief Field platformUserAccountId, offset: 0x20, size: 0x8, def value: None
  ::StringW platformUserAccountId;

  /// @brief Field deviceCount, offset: 0x28, size: 0x4, def value: None
  int32_t deviceCount;

  /// @brief Field deviceStartIndex, offset: 0x2c, size: 0x4, def value: None
  int32_t deviceStartIndex;

  /// @brief Field actions, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::InputSystem::IInputActionCollection* actions;

  /// @brief Field controlScheme, offset: 0x38, size: 0x20, def value: None
  ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> controlScheme;

  /// @brief Field controlSchemeMatch, offset: 0x58, size: 0x50, def value: None
  ::UnityEngine::InputSystem::__InputControlScheme__MatchResult controlSchemeMatch;

  /// @brief Field lostDeviceCount, offset: 0xa8, size: 0x4, def value: None
  int32_t lostDeviceCount;

  /// @brief Field lostDeviceStartIndex, offset: 0xac, size: 0x4, def value: None
  int32_t lostDeviceStartIndex;

  /// @brief Field flags, offset: 0xb0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Users::__InputUser__UserFlags flags;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::__InputUser__UserData, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
// Type: ::CompareDevicesByUserAccount
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6365))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6360))
// CS Name: ::InputUser::CompareDevicesByUserAccount
struct CORDL_TYPE __InputUser__CompareDevicesByUserAccount {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>*();

  /// @brief Method Compare addr 0x2acf1dc size 0x3c virtual true final true
  inline int32_t Compare(::UnityEngine::InputSystem::InputDevice* x, ::UnityEngine::InputSystem::InputDevice* y);

  /// @brief Method GetUserAccountHandleForDevice addr 0x2acf218 size 0xc virtual false final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> GetUserAccountHandleForDevice(::UnityEngine::InputSystem::InputDevice* device);

  // Ctor Parameters [CppParam { name: "platformUserAccountHandle", ty: "::UnityEngine::InputSystem::Users::InputUserAccountHandle", modifiers: "", def_value: None }]
  constexpr __InputUser__CompareDevicesByUserAccount(::UnityEngine::InputSystem::Users::InputUserAccountHandle platformUserAccountHandle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputUser__CompareDevicesByUserAccount();

  /// @brief Field platformUserAccountHandle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Users::InputUserAccountHandle platformUserAccountHandle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
// Type: ::OngoingAccountSelection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6361))
// CS Name: ::InputUser::OngoingAccountSelection
struct CORDL_TYPE __InputUser__OngoingAccountSelection {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "uint32_t", modifiers: "", def_value:
  // None }]
  constexpr __InputUser__OngoingAccountSelection(::UnityEngine::InputSystem::InputDevice* device, uint32_t userId) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputUser__OngoingAccountSelection();

  /// @brief Field device, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputDevice* device;

  /// @brief Field userId, offset: 0x8, size: 0x4, def value: None
  uint32_t userId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
// Type: UnityEngine.InputSystem.Users::InputUser
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6362))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6364))
// CS Name: ::UnityEngine.InputSystem.Users::InputUser
struct CORDL_TYPE InputUser {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::Users::__InputUser____c;

  using GlobalState = ::UnityEngine::InputSystem::Users::__InputUser__GlobalState;

  using OngoingAccountSelection = ::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection;

  using CompareDevicesByUserAccount = ::UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount;

  using UserData = ::UnityEngine::InputSystem::Users::__InputUser__UserData;

  using UserFlags = ::UnityEngine::InputSystem::Users::__InputUser__UserFlags;

  using ControlSchemeChangeSyntax = ::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax;

  /// @brief Field s_GlobalState, offset 0xffffffff, size 0x168
  static __declspec(property(get = getStaticF_s_GlobalState, put = setStaticF_s_GlobalState))::UnityEngine::InputSystem::Users::__InputUser__GlobalState s_GlobalState;

  __declspec(property(get = get_valid)) bool valid;

  __declspec(property(get = get_index)) int32_t index;

  __declspec(property(get = get_id)) uint32_t id;

  __declspec(property(get = get_platformUserAccountHandle))::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> platformUserAccountHandle;

  __declspec(property(get = get_platformUserAccountName))::StringW platformUserAccountName;

  __declspec(property(get = get_platformUserAccountId))::StringW platformUserAccountId;

  __declspec(property(get = get_pairedDevices))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> pairedDevices;

  __declspec(property(get = get_lostDevices))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> lostDevices;

  __declspec(property(get = get_actions))::UnityEngine::InputSystem::IInputActionCollection* actions;

  __declspec(property(get = get_controlScheme))::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> controlScheme;

  __declspec(property(get = get_controlSchemeMatch))::UnityEngine::InputSystem::__InputControlScheme__MatchResult controlSchemeMatch;

  __declspec(property(get = get_hasMissingRequiredDevices)) bool hasMissingRequiredDevices;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::Users::InputUser>*();

  static inline void setStaticF_s_GlobalState(::UnityEngine::InputSystem::Users::__InputUser__GlobalState value);

  static inline ::UnityEngine::InputSystem::Users::__InputUser__GlobalState getStaticF_s_GlobalState();

  /// @brief Method get_valid addr 0x2abd218 size 0xa4 virtual false final false
  inline bool get_valid();

  /// @brief Method get_index addr 0x2ac9b70 size 0xf4 virtual false final false
  inline int32_t get_index();

  /// @brief Method get_id addr 0x2ac9cf8 size 0x8 virtual false final false
  inline uint32_t get_id();

  /// @brief Method get_platformUserAccountHandle addr 0x2ac9d00 size 0x90 virtual false final false
  inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> get_platformUserAccountHandle();

  /// @brief Method get_platformUserAccountName addr 0x2ac9d90 size 0x78 virtual false final false
  inline ::StringW get_platformUserAccountName();

  /// @brief Method get_platformUserAccountId addr 0x2ac9e08 size 0x78 virtual false final false
  inline ::StringW get_platformUserAccountId();

  /// @brief Method get_pairedDevices addr 0x2abdf80 size 0xac virtual false final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_pairedDevices();

  /// @brief Method get_lostDevices addr 0x2ac9e80 size 0xac virtual false final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_lostDevices();

  /// @brief Method get_actions addr 0x2ac9f2c size 0x78 virtual false final false
  inline ::UnityEngine::InputSystem::IInputActionCollection* get_actions();

  /// @brief Method get_controlScheme addr 0x2abd2bc size 0x8c virtual false final false
  inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> get_controlScheme();

  /// @brief Method get_controlSchemeMatch addr 0x2ac9fa4 size 0x8c virtual false final false
  inline ::UnityEngine::InputSystem::__InputControlScheme__MatchResult get_controlSchemeMatch();

  /// @brief Method get_hasMissingRequiredDevices addr 0x2abe074 size 0x7c virtual false final false
  inline bool get_hasMissingRequiredDevices();

  /// @brief Method get_all addr 0x2aca030 size 0x80 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Users::InputUser> get_all();

  /// @brief Method add_onChange addr 0x2ac12a4 size 0xb8 virtual false final false
  static inline void
  add_onChange(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>* value);

  /// @brief Method remove_onChange addr 0x2ac1e3c size 0xb8 virtual false final false
  static inline void
  remove_onChange(::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>* value);

  /// @brief Method add_onUnpairedDeviceUsed addr 0x2ac1664 size 0xdc virtual false final false
  static inline void add_onUnpairedDeviceUsed(::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  /// @brief Method remove_onUnpairedDeviceUsed addr 0x2ac1930 size 0xf4 virtual false final false
  static inline void remove_onUnpairedDeviceUsed(::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  /// @brief Method add_onPrefilterUnpairedDeviceActivity addr 0x2ac1740 size 0xb8 virtual false final false
  static inline void add_onPrefilterUnpairedDeviceActivity(::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* value);

  /// @brief Method remove_onPrefilterUnpairedDeviceActivity addr 0x2ac1a24 size 0xb8 virtual false final false
  static inline void remove_onPrefilterUnpairedDeviceActivity(::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* value);

  /// @brief Method get_listenForUnpairedDeviceActivity addr 0x2ac17f8 size 0x48 virtual false final false
  static inline int32_t get_listenForUnpairedDeviceActivity();

  /// @brief Method set_listenForUnpairedDeviceActivity addr 0x2ac1840 size 0xf0 virtual false final false
  static inline void set_listenForUnpairedDeviceActivity(int32_t value);

  /// @brief Method ToString addr 0x2aca264 size 0x26c virtual true final false
  inline ::StringW ToString();

  /// @brief Method AssociateActionsWithUser addr 0x2ac0508 size 0x338 virtual false final false
  inline void AssociateActionsWithUser(::UnityEngine::InputSystem::IInputActionCollection* actions);

  /// @brief Method ActivateControlScheme addr 0x2ac0b5c size 0x78 virtual false final false
  inline ::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax ActivateControlScheme(::StringW schemeName);

  /// @brief Method TryFindControlScheme addr 0x2aca980 size 0x280 virtual false final false
  inline bool TryFindControlScheme(::StringW schemeName, ByRef<::UnityEngine::InputSystem::InputControlScheme> scheme);

  /// @brief Method FindControlScheme addr 0x2abeaf8 size 0xbc virtual false final false
  inline void FindControlScheme(::StringW schemeName, ByRef<::UnityEngine::InputSystem::InputControlScheme> scheme);

  /// @brief Method ActivateControlScheme addr 0x2ac0988 size 0x1d4 virtual false final false
  inline ::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax ActivateControlScheme(::UnityEngine::InputSystem::InputControlScheme scheme);

  /// @brief Method ActivateControlSchemeInternal addr 0x2aca5e4 size 0x39c virtual false final false
  inline void ActivateControlSchemeInternal(int32_t userIndex, ::UnityEngine::InputSystem::InputControlScheme scheme);

  /// @brief Method UnpairDevice addr 0x2ac2c4c size 0xdc virtual false final false
  inline void UnpairDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method UnpairDevices addr 0x2abfd70 size 0x278 virtual false final false
  inline void UnpairDevices();

  /// @brief Method RemoveLostDevicesForUser addr 0x2acb730 size 0x12c virtual false final false
  static inline void RemoveLostDevicesForUser(int32_t userIndex);

  /// @brief Method UnpairDevicesAndRemoveUser addr 0x2ac08f8 size 0x24 virtual false final false
  inline void UnpairDevicesAndRemoveUser();

  /// @brief Method GetUnpairedInputDevices addr 0x2ac038c size 0x74 virtual false final false
  static inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> GetUnpairedInputDevices();

  /// @brief Method GetUnpairedInputDevices addr 0x2acbf74 size 0x214 virtual false final false
  static inline int32_t GetUnpairedInputDevices(ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>> list);

  /// @brief Method FindUserPairedToDevice addr 0x2acc188 size 0x100 virtual false final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> FindUserPairedToDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method FindUserByAccount addr 0x2acc374 size 0x13c virtual false final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> FindUserByAccount(::UnityEngine::InputSystem::Users::InputUserAccountHandle platformUserAccountHandle);

  /// @brief Method CreateUserWithoutPairedDevices addr 0x2ac091c size 0x6c virtual false final false
  static inline ::UnityEngine::InputSystem::Users::InputUser CreateUserWithoutPairedDevices();

  /// @brief Method PerformPairingWithDevice addr 0x2abffe8 size 0x1c4 virtual false final false
  static inline ::UnityEngine::InputSystem::Users::InputUser PerformPairingWithDevice(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Users::InputUser user,
                                                                                      ::UnityEngine::InputSystem::Users::InputUserPairingOptions options);

  /// @brief Method InitiateUserAccountSelection addr 0x2acc690 size 0x118 virtual false final false
  static inline bool InitiateUserAccountSelection(int32_t userIndex, ::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Users::InputUserPairingOptions options);

  /// @brief Method Equals addr 0x2acd0cc size 0x10 virtual true final true
  inline bool Equals(::UnityEngine::InputSystem::Users::InputUser other);

  /// @brief Method Equals addr 0x2acd0dc size 0x78 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2acd154 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x2ac2434 size 0xc virtual false final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Users::InputUser left, ::UnityEngine::InputSystem::Users::InputUser right);

  /// @brief Method op_Inequality addr 0x2acc684 size 0xc virtual false final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Users::InputUser left, ::UnityEngine::InputSystem::Users::InputUser right);

  /// @brief Method AddUser addr 0x2acc594 size 0xf0 virtual false final false
  static inline int32_t AddUser();

  /// @brief Method RemoveUser addr 0x2acbcbc size 0x2b8 virtual false final false
  static inline void RemoveUser(int32_t userIndex);

  /// @brief Method Notify addr 0x2acac00 size 0x308 virtual false final false
  static inline void Notify(int32_t userIndex, ::UnityEngine::InputSystem::Users::InputUserChange change, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method TryFindUserIndex addr 0x2ac9c64 size 0x94 virtual false final false
  static inline int32_t TryFindUserIndex(uint32_t userId);

  /// @brief Method TryFindUserIndex addr 0x2acc4b0 size 0xe4 virtual false final false
  static inline int32_t TryFindUserIndex(::UnityEngine::InputSystem::Users::InputUserAccountHandle platformHandle);

  /// @brief Method TryFindUserIndex addr 0x2acc288 size 0xec virtual false final false
  static inline int32_t TryFindUserIndex(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method AddDeviceToUser addr 0x2acc7a8 size 0x40c virtual false final false
  static inline void AddDeviceToUser(int32_t userIndex, ::UnityEngine::InputSystem::InputDevice* device, bool asLostDevice, bool dontUpdateControlScheme);

  /// @brief Method RemoveDeviceFromUser addr 0x2acb85c size 0x460 virtual false final false
  static inline void RemoveDeviceFromUser(int32_t userIndex, ::UnityEngine::InputSystem::InputDevice* device, bool asLostDevice);

  /// @brief Method UpdateControlSchemeMatch addr 0x2acaf08 size 0x828 virtual false final false
  static inline void UpdateControlSchemeMatch(int32_t userIndex, bool autoPairMissing);

  /// @brief Method UpdatePlatformUserAccount addr 0x2accbb4 size 0x36c virtual false final false
  static inline int64_t UpdatePlatformUserAccount(int32_t userIndex, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method QueryPairedPlatformUserAccount addr 0x2acd2bc size 0x184 virtual false final false
  static inline int64_t QueryPairedPlatformUserAccount(::UnityEngine::InputSystem::InputDevice* device,
                                                       ByRef<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>> platformAccountHandle,
                                                       ByRef<::StringW> platformAccountName, ByRef<::StringW> platformAccountId);

  /// @brief Method InitiateUserAccountSelectionAtPlatformLevel addr 0x2accf20 size 0xc0 virtual false final false
  static inline bool InitiateUserAccountSelectionAtPlatformLevel(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method OnActionChange addr 0x2acd440 size 0xc8 virtual false final false
  static inline void OnActionChange(::System::Object* obj, ::UnityEngine::InputSystem::InputActionChange change);

  /// @brief Method OnDeviceChange addr 0x2acd508 size 0x488 virtual false final false
  static inline void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change);

  /// @brief Method FindLostDevice addr 0x2acd990 size 0xb8 virtual false final false
  static inline int32_t FindLostDevice(::UnityEngine::InputSystem::InputDevice* device, int32_t startIndex);

  /// @brief Method OnEvent addr 0x2acda48 size 0x4bc virtual false final false
  static inline void OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method SaveAndResetState addr 0x2acdf04 size 0x1e4 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::ISavedState* SaveAndResetState();

  /// @brief Method HookIntoActionChange addr 0x2aca4d0 size 0x114 virtual false final false
  static inline void HookIntoActionChange();

  /// @brief Method UnhookFromActionChange addr 0x2acd1e8 size 0xd4 virtual false final false
  static inline void UnhookFromActionChange();

  /// @brief Method HookIntoDeviceChange addr 0x2accfe0 size 0xec virtual false final false
  static inline void HookIntoDeviceChange();

  /// @brief Method UnhookFromDeviceChange addr 0x2acd15c size 0x8c virtual false final false
  static inline void UnhookFromDeviceChange();

  /// @brief Method HookIntoEvents addr 0x2aca0b0 size 0x10c virtual false final false
  static inline void HookIntoEvents();

  /// @brief Method UnhookFromDeviceStateChange addr 0x2aca1bc size 0xa8 virtual false final false
  static inline void UnhookFromDeviceStateChange();

  /// @brief Method DisposeAndResetGlobalState addr 0x2ace0e8 size 0xb8 virtual false final false
  static inline void DisposeAndResetGlobalState();

  /// @brief Method ResetGlobals addr 0x2ace1a0 size 0x1018 virtual false final false
  static inline void ResetGlobals();

  // Ctor Parameters [CppParam { name: "m_Id", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr InputUser(uint32_t m_Id) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUser();

  /// @brief Field m_Id, offset: 0x0, size: 0x4, def value: None
  uint32_t m_Id;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field InvalidId offset 0xffffffff size 0x4
  static constexpr uint32_t InvalidId{ static_cast<uint32_t>(0x40200u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::InputUser, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
// Type: ::GlobalState
// SizeInfo { instance_size: 360, native_size: -1, calculated_instance_size: 360, calculated_native_size: 376, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6366)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 3871 }), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(2325), inst: 647 }), TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(6669)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(6660), inst: 997 }), TypeDefinitionIndex(TypeDefinitionIndex(6536)), TypeDefinitionIndex(TypeDefinitionIndex(6364)), TypeDefinitionIndex(TypeDefinitionIndex(2324)),
// TypeDefinitionIndex(TypeDefinitionIndex(6239)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6660), inst: 991 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(6660), inst: 999 }), TypeDefinitionIndex(TypeDefinitionIndex(6361)), TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(6215)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 526 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2487 }),
// TypeDefinitionIndex(TypeDefinitionIndex(6660))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6362)) CS Name: ::InputUser::GlobalState
struct CORDL_TYPE __InputUser__GlobalState {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "pairingStateVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastUserId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam
  // { name: "allUserCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "allPairedDeviceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "allLostDeviceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "allUsers", ty:
  // "::ArrayW<::UnityEngine::InputSystem::Users::InputUser,::Array<::UnityEngine::InputSystem::Users::InputUser>*>", modifiers: "", def_value: None }, CppParam { name: "allUserData", ty:
  // "::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__UserData,::Array<::UnityEngine::InputSystem::Users::__InputUser__UserData>*>", modifiers: "", def_value: None }, CppParam { name:
  // "allPairedDevices", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>", modifiers: "", def_value: None }, CppParam { name:
  // "allLostDevices", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>", modifiers: "", def_value: None }, CppParam { name:
  // "ongoingAccountSelections", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection>", modifiers: "", def_value: None },
  // CppParam { name: "onChange", ty:
  // "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_3<::UnityEngine::InputSystem::Users::InputUser,::UnityEngine::InputSystem::Users::InputUserChange,::UnityEngine::InputSystem::InputDevice*>*>",
  // modifiers: "", def_value: None }, CppParam { name: "onUnpairedDeviceUsed", ty:
  // "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*,::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>", modifiers: "",
  // def_value: None }, CppParam { name: "onPreFilterUnpairedDeviceUsed", ty:
  // "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>*>", modifiers: "",
  // def_value: None }, CppParam { name: "actionChangeDelegate", ty: "::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*", modifiers: "", def_value: None }, CppParam
  // { name: "onDeviceChangeDelegate", ty: "::System::Action_2<::UnityEngine::InputSystem::InputDevice*,::UnityEngine::InputSystem::InputDeviceChange>*", modifiers: "", def_value: None }, CppParam {
  // name: "onEventDelegate", ty: "::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice*>*", modifiers: "", def_value: None }, CppParam {
  // name: "onActionChangeHooked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "onDeviceChangeHooked", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "onEventHooked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "listenForUnpairedDeviceActivity", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputUser__GlobalState(
      int32_t pairingStateVersion, uint32_t lastUserId, int32_t allUserCount, int32_t allPairedDeviceCount, int32_t allLostDeviceCount,
      ::ArrayW<::UnityEngine::InputSystem::Users::InputUser, ::Array<::UnityEngine::InputSystem::Users::InputUser>*> allUsers,
      ::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__UserData, ::Array<::UnityEngine::InputSystem::Users::__InputUser__UserData>*> allUserData,
      ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> allPairedDevices,
      ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> allLostDevices,
      ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection> ongoingAccountSelections,
      ::UnityEngine::InputSystem::Utilities::CallbackArray_1<
          ::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>*>
          onChange,
      ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> onUnpairedDeviceUsed,
      ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>*>
          onPreFilterUnpairedDeviceUsed,
      ::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* actionChangeDelegate,
      ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* onDeviceChangeDelegate,
      ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* onEventDelegate, bool onActionChangeHooked, bool onDeviceChangeHooked,
      bool onEventHooked, int32_t listenForUnpairedDeviceActivity) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputUser__GlobalState();

  /// @brief Field pairingStateVersion, offset: 0x0, size: 0x4, def value: None
  int32_t pairingStateVersion;

  /// @brief Field lastUserId, offset: 0x4, size: 0x4, def value: None
  uint32_t lastUserId;

  /// @brief Field allUserCount, offset: 0x8, size: 0x4, def value: None
  int32_t allUserCount;

  /// @brief Field allPairedDeviceCount, offset: 0xc, size: 0x4, def value: None
  int32_t allPairedDeviceCount;

  /// @brief Field allLostDeviceCount, offset: 0x10, size: 0x4, def value: None
  int32_t allLostDeviceCount;

  /// @brief Field allUsers, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Users::InputUser, ::Array<::UnityEngine::InputSystem::Users::InputUser>*> allUsers;

  /// @brief Field allUserData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Users::__InputUser__UserData, ::Array<::UnityEngine::InputSystem::Users::__InputUser__UserData>*> allUserData;

  /// @brief Field allPairedDevices, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> allPairedDevices;

  /// @brief Field allLostDevices, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> allLostDevices;

  /// @brief Field ongoingAccountSelections, offset: 0x38, size: 0x20, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection> ongoingAccountSelections;

  /// @brief Field onChange, offset: 0x58, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<
      ::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>*>
      onChange;

  /// @brief Field onUnpairedDeviceUsed, offset: 0xa8, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> onUnpairedDeviceUsed;

  /// @brief Field onPreFilterUnpairedDeviceUsed, offset: 0xf8, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>*>
      onPreFilterUnpairedDeviceUsed;

  /// @brief Field actionChangeDelegate, offset: 0x148, size: 0x8, def value: None
  ::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* actionChangeDelegate;

  /// @brief Field onDeviceChangeDelegate, offset: 0x150, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* onDeviceChangeDelegate;

  /// @brief Field onEventDelegate, offset: 0x158, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* onEventDelegate;

  /// @brief Field onActionChangeHooked, offset: 0x160, size: 0x1, def value: None
  bool onActionChangeHooked;

  /// @brief Field onDeviceChangeHooked, offset: 0x161, size: 0x1, def value: None
  bool onDeviceChangeHooked;

  /// @brief Field onEventHooked, offset: 0x162, size: 0x1, def value: None
  bool onEventHooked;

  /// @brief Field listenForUnpairedDeviceActivity, offset: 0x164, size: 0x4, def value: None
  int32_t listenForUnpairedDeviceActivity;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x168 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::__InputUser__GlobalState, 0x168>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Users {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6363))
// CS Name: ::InputUser::<>c*
class CORDL_TYPE __InputUser____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::InputSystem::Users::__InputUser____c* __9;

  /// @brief Field <>9__86_0, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__86_0,
               put = setStaticF___9__86_0))::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>* __9__86_0;

  /// @brief Field <>9__86_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__86_1, put = setStaticF___9__86_1))::System::Action* __9__86_1;

  static inline void setStaticF___9(::UnityEngine::InputSystem::Users::__InputUser____c* value);

  static inline ::UnityEngine::InputSystem::Users::__InputUser____c* getStaticF___9();

  static inline void setStaticF___9__86_0(::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>* value);

  static inline ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>* getStaticF___9__86_0();

  static inline void setStaticF___9__86_1(::System::Action* value);

  static inline ::System::Action* getStaticF___9__86_1();

  static inline ::UnityEngine::InputSystem::Users::__InputUser____c* New_ctor();

  /// @brief Method .ctor addr 0x2acf2b4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SaveAndResetState>b__86_0 addr 0x2acf2bc size 0x74 virtual false final false
  inline void _SaveAndResetState_b__86_0(ByRef<::UnityEngine::InputSystem::Users::__InputUser__GlobalState> state);

  /// @brief Method <SaveAndResetState>b__86_1 addr 0x2acf330 size 0x8 virtual false final false
  inline void _SaveAndResetState_b__86_1();

  // Ctor Parameters [CppParam { name: "", ty: "__InputUser____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputUser____c(__InputUser____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputUser____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputUser____c(__InputUser____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputUser____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Users::__InputUser____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Users
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::__InputUser__UserFlags, "UnityEngine.InputSystem.Users", "InputUser/UserFlags");
NEED_NO_BOX(::UnityEngine::InputSystem::Users::__InputUser____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::__InputUser____c*, "UnityEngine.InputSystem.Users", "InputUser/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUser, "UnityEngine.InputSystem.Users", "InputUser");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::__InputUser__CompareDevicesByUserAccount, "UnityEngine.InputSystem.Users", "InputUser/CompareDevicesByUserAccount");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::__InputUser__ControlSchemeChangeSyntax, "UnityEngine.InputSystem.Users", "InputUser/ControlSchemeChangeSyntax");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::__InputUser__GlobalState, "UnityEngine.InputSystem.Users", "InputUser/GlobalState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::__InputUser__OngoingAccountSelection, "UnityEngine.InputSystem.Users", "InputUser/OngoingAccountSelection");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::__InputUser__UserData, "UnityEngine.InputSystem.Users", "InputUser/UserData");
