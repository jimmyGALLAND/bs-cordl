#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyGameStateController.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_impl.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKeyNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyGameStateControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayerData_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayersDataModel_def.hpp"
#include "GlobalNamespace/zzzz__IMenuRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__LevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__LobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__LobbyGameStateModel_def.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayerPermissionsModel_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyState_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLobbyPermissionConfigurationNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayersLobbyPermissionConfigurationNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayersMissingEntitlementsNetSerializable_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LobbyGameStateController____c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LobbyGameStateController____c::*)()>(&::GlobalNamespace::__LobbyGameStateController____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b2a654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LobbyGameStateController____c._PredictCountdownEndTime_b__99_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LobbyGameStateController____c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>)>(&::GlobalNamespace::__LobbyGameStateController____c::_PredictCountdownEndTime_b__99_0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3b2a65c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c*>::get(),
                        "<PredictCountdownEndTime>b__99_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__LobbyGameStateController____c::setStaticF___9(::GlobalNamespace::__LobbyGameStateController____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__LobbyGameStateController____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c*>::get>(std::forward<::GlobalNamespace::__LobbyGameStateController____c*>(value));
}
inline ::GlobalNamespace::__LobbyGameStateController____c* GlobalNamespace::__LobbyGameStateController____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__LobbyGameStateController____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c*>::get>();
}
inline void GlobalNamespace::__LobbyGameStateController____c::setStaticF___9__99_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>,bool>*, "<>9__99_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c*>::get>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>,bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>,bool>* GlobalNamespace::__LobbyGameStateController____c::getStaticF___9__99_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>,bool>*, "<>9__99_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c*>::get>();
}
inline ::GlobalNamespace::__LobbyGameStateController____c* GlobalNamespace::__LobbyGameStateController____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LobbyGameStateController____c*>());
}
inline void GlobalNamespace::__LobbyGameStateController____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__LobbyGameStateController____c::_PredictCountdownEndTime_b__99_0(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>  pair)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c*>::get(),
                        "<PredictCountdownEndTime>b__99_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pair);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LobbyGameStateController____c::__LobbyGameStateController____c()   {
}
//  Writing Method size for method: ::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::*)()>(&::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b28d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0._GetGameStateAndConfigurationAsync_g__HandleSetMultiplayerGameState_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::*)(::StringW, ::GlobalNamespace::MultiplayerGameState)>(&::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_g__HandleSetMultiplayerGameState_0)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x3b2a774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>::get(),
                        "<GetGameStateAndConfigurationAsync>g__HandleSetMultiplayerGameState|0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerGameState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0._GetGameStateAndConfigurationAsync_g__HandleSetPlayerPermissionConfiguration_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::*)(::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*)>(&::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_g__HandleSetPlayerPermissionConfiguration_1)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3b2a9d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>::get(),
                        "<GetGameStateAndConfigurationAsync>g__HandleSetPlayerPermissionConfiguration|1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0._GetGameStateAndConfigurationAsync_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::*)(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*)>(&::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_b__2)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3b2abb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>::get(),
                        "<GetGameStateAndConfigurationAsync>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LobbyGameStateController*& GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyGameStateController*> const& GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__cordl_internal_set___4__this(::GlobalNamespace::LobbyGameStateController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__cordl_internal_get_getGameStateAsyncTcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getGameStateAsyncTcs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__cordl_internal_get_getGameStateAsyncTcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getGameStateAsyncTcs;
}
constexpr void GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__cordl_internal_set_getGameStateAsyncTcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getGameStateAsyncTcs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__cordl_internal_get_getPlayerPermissionAsyncTcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getPlayerPermissionAsyncTcs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__cordl_internal_get_getPlayerPermissionAsyncTcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getPlayerPermissionAsyncTcs;
}
constexpr void GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__cordl_internal_set_getPlayerPermissionAsyncTcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getPlayerPermissionAsyncTcs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0* GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>());
}
inline void GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_g__HandleSetMultiplayerGameState_0(::StringW  userId, ::GlobalNamespace::MultiplayerGameState  newMultiplayerGameState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>::get(),
                        "<GetGameStateAndConfigurationAsync>g__HandleSetMultiplayerGameState|0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerGameState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, newMultiplayerGameState);
}
inline void GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_g__HandleSetPlayerPermissionConfiguration_1(::StringW  userId, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*  playersLobbyPermissionConfiguration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>::get(),
                        "<GetGameStateAndConfigurationAsync>g__HandleSetPlayerPermissionConfiguration|1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, playersLobbyPermissionConfiguration);
}
inline bool GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::_GetGameStateAndConfigurationAsync_b__2(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0*>::get(),
                        "<GetGameStateAndConfigurationAsync>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, p);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LobbyGameStateController____c__DisplayClass98_0::__LobbyGameStateController____c__DisplayClass98_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_selectedLevelGameplaySetupDataChangedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*)>(&::GlobalNamespace::LobbyGameStateController::add_selectedLevelGameplaySetupDataChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b25dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_selectedLevelGameplaySetupDataChangedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_selectedLevelGameplaySetupDataChangedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*)>(&::GlobalNamespace::LobbyGameStateController::remove_selectedLevelGameplaySetupDataChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b25e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_selectedLevelGameplaySetupDataChangedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_gameStartedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*)>(&::GlobalNamespace::LobbyGameStateController::add_gameStartedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b25f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_gameStartedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_gameStartedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*)>(&::GlobalNamespace::LobbyGameStateController::remove_gameStartedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b25fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_gameStartedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_gameStartCancelledEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::add_gameStartCancelledEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b26080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_gameStartCancelledEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_gameStartCancelledEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::remove_gameStartCancelledEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b2611c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_gameStartCancelledEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_countdownStartedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::add_countdownStartedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b261b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_countdownStartedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_countdownStartedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::remove_countdownStartedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b26254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_countdownStartedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_countdownCancelledEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::add_countdownCancelledEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b262f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_countdownCancelledEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_countdownCancelledEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::remove_countdownCancelledEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b2638c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_countdownCancelledEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_songStillDownloadingEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::add_songStillDownloadingEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b26428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_songStillDownloadingEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_songStillDownloadingEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::remove_songStillDownloadingEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b264c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_songStillDownloadingEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_startTimeChangedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::add_startTimeChangedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b26560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_startTimeChangedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_startTimeChangedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::remove_startTimeChangedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b265fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_startTimeChangedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_levelFinishedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MultiplayerResultsData*>*)>(&::GlobalNamespace::LobbyGameStateController::add_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b26698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_levelFinishedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MultiplayerResultsData*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_levelFinishedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MultiplayerResultsData*>*)>(&::GlobalNamespace::LobbyGameStateController::remove_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b26748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_levelFinishedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MultiplayerResultsData*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_levelDidGetDisconnectedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::LobbyGameStateController::add_levelDidGetDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b267f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_levelDidGetDisconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_levelDidGetDisconnectedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::LobbyGameStateController::remove_levelDidGetDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b268a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_levelDidGetDisconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_lobbyDisconnectedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::add_lobbyDisconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b26958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_lobbyDisconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_lobbyDisconnectedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::remove_lobbyDisconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b269f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_lobbyDisconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_beforeSceneSwitchCallbackEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::add_beforeSceneSwitchCallbackEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b26a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_beforeSceneSwitchCallbackEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_beforeSceneSwitchCallbackEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::remove_beforeSceneSwitchCallbackEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b26b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_beforeSceneSwitchCallbackEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_lobbyStateChangedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*)>(&::GlobalNamespace::LobbyGameStateController::add_lobbyStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b26bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_lobbyStateChangedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_lobbyStateChangedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*)>(&::GlobalNamespace::LobbyGameStateController::remove_lobbyStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b26c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_lobbyStateChangedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_startButtonEnabledEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::CannotStartGameReason>*)>(&::GlobalNamespace::LobbyGameStateController::add_startButtonEnabledEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b26d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_startButtonEnabledEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_startButtonEnabledEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::CannotStartGameReason>*)>(&::GlobalNamespace::LobbyGameStateController::remove_startButtonEnabledEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b26dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_startButtonEnabledEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_playerMissingEntitlementsChangedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*)>(&::GlobalNamespace::LobbyGameStateController::add_playerMissingEntitlementsChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b26e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_playerMissingEntitlementsChangedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_playerMissingEntitlementsChangedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*)>(&::GlobalNamespace::LobbyGameStateController::remove_playerMissingEntitlementsChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b26f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_playerMissingEntitlementsChangedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_predictedCountdownEndTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_predictedCountdownEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b26fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_predictedCountdownEndTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_startTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b26ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_startTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_startTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(int64_t)>(&::GlobalNamespace::LobbyGameStateController::set_startTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3b26ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "set_startTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_levelStartInitiated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_levelStartInitiated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b27018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_levelStartInitiated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_levelStartInitiated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(bool)>(&::GlobalNamespace::LobbyGameStateController::set_levelStartInitiated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3b27020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "set_levelStartInitiated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_selectedLevelGameplaySetupData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILevelGameplaySetupData* (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_selectedLevelGameplaySetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b2702c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_selectedLevelGameplaySetupData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_countdownStarted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_countdownStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b27034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_countdownStarted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_countdownStarted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(bool)>(&::GlobalNamespace::LobbyGameStateController::set_countdownStarted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3b2703c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "set_countdownStarted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_countdownEndTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_countdownEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b27048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_countdownEndTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_countdownEndTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(int64_t)>(&::GlobalNamespace::LobbyGameStateController::set_countdownEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b27050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "set_countdownEndTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_state
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerLobbyState (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b27058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_state",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_state
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::MultiplayerLobbyState)>(&::GlobalNamespace::LobbyGameStateController::set_state)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3b27060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "set_state",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLobbyState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_cannotStartGameReason
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::CannotStartGameReason (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_cannotStartGameReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b2708c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_cannotStartGameReason",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_isDisconnected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_isDisconnected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b27094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_isDisconnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_isDisconnected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(bool)>(&::GlobalNamespace::LobbyGameStateController::set_isDisconnected)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3b2709c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "set_isDisconnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_disconnectedReason
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DisconnectedReason (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_disconnectedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b270a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_disconnectedReason",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_disconnectedReason
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::LobbyGameStateController::set_disconnectedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b270b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "set_disconnectedReason",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.Activate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::Activate)> {
  constexpr static std::size_t size = 0x874;
  constexpr static std::size_t addrs = 0x3b270b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "Activate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.Deactivate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::Deactivate)> {
  constexpr static std::size_t size = 0x900;
  constexpr static std::size_t addrs = 0x3b2792c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "Deactivate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3b2823c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.StartListeningToGameStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::StartListeningToGameStart)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x3b28240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "StartListeningToGameStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.GetCurrentLevelIfGameStarted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::GetCurrentLevelIfGameStarted)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3b288e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "GetCurrentLevelIfGameStarted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.ClearDisconnectedState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::ClearDisconnectedState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3b2822c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "ClearDisconnectedState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.GetGameStateAndConfigurationAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LobbyGameStateController::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::LobbyGameStateController::GetGameStateAndConfigurationAsync)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x3b28988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "GetGameStateAndConfigurationAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.PredictCountdownEndTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::PredictCountdownEndTime)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x3b28da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "PredictCountdownEndTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.IsCloseToStartGame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::IsCloseToStartGame)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3b28f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "IsCloseToStartGame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerSessionManagerDisconnected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::LobbyGameStateController::HandleMultiplayerSessionManagerDisconnected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3b29004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMultiplayerSessionManagerDisconnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerSessionManagerConnectionOwnerStateChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::LobbyGameStateController::HandleMultiplayerSessionManagerConnectionOwnerStateChanged)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3b2902c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMultiplayerSessionManagerConnectionOwnerStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.StopListeningToGameStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::StopListeningToGameStart)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x3b29124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "StopListeningToGameStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerStartedLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerStartedLevel)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x3b2938c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerStartedLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKeyNetSerializable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerCancelledLevelStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerCancelledLevelStart)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3b29610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerCancelledLevelStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetCountdownEndTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, int64_t)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetCountdownEndTime)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x3b29794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerSetCountdownEndTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerCancelCountdown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerCancelCountdown)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x3b299b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerCancelCountdown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetStartGameTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, int64_t)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetStartGameTime)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3b29be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerSetStartGameTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleSetIsStartButtonEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, ::GlobalNamespace::CannotStartGameReason)>(&::GlobalNamespace::LobbyGameStateController::HandleSetIsStartButtonEnabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3b29c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleSetIsStartButtonEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CannotStartGameReason>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3b29c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleStartTimeChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::HandleStartTimeChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3b29c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleStartTimeChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerLevelLoaderStillDownloadingSong
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelLoaderStillDownloadingSong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b29c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMultiplayerLevelLoaderStillDownloadingSong",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetSelectedBeatmap
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetSelectedBeatmap)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3b29cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerSetSelectedBeatmap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKeyNetSerializable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetSelectedGameplayModifiers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, ::GlobalNamespace::GameplayModifiers*)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3b29d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerSetSelectedGameplayModifiers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerClearSelectedBeatmap
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerClearSelectedBeatmap)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3b29d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerClearSelectedBeatmap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerClearSelectedGameplayModifiers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerClearSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3b29dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerClearSelectedGameplayModifiers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerLevelLoaderCountdownFinished
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*)>(&::GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelLoaderCountdownFinished)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x3b29e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMultiplayerLevelLoaderCountdownFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.StartMultiplayerLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*, ::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::StartMultiplayerLevel)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x3b2a158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "StartMultiplayerLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerLevelDidFinish
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::MultiplayerResultsData*)>(&::GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelDidFinish)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3b2a468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMultiplayerLevelDidFinish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerLevelDidDisconnect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelDidDisconnect)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3b2a4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMultiplayerLevelDidDisconnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.StopLoading
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::StopLoading)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3b29698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "StopLoading",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3b2a588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ILobbyGameStateController"
constexpr  GlobalNamespace::LobbyGameStateController::operator ::GlobalNamespace::ILobbyGameStateController*() noexcept {
return static_cast<::GlobalNamespace::ILobbyGameStateController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILobbyGameStateController"
constexpr ::GlobalNamespace::ILobbyGameStateController* GlobalNamespace::LobbyGameStateController::i___GlobalNamespace__ILobbyGameStateController() noexcept {
return static_cast<::GlobalNamespace::ILobbyGameStateController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ILobbyGameStateControllerBase"
constexpr  GlobalNamespace::LobbyGameStateController::operator ::GlobalNamespace::ILobbyGameStateControllerBase*() noexcept {
return static_cast<::GlobalNamespace::ILobbyGameStateControllerBase*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILobbyGameStateControllerBase"
constexpr ::GlobalNamespace::ILobbyGameStateControllerBase* GlobalNamespace::LobbyGameStateController::i___GlobalNamespace__ILobbyGameStateControllerBase() noexcept {
return static_cast<::GlobalNamespace::ILobbyGameStateControllerBase*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::LobbyGameStateController::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::LobbyGameStateController::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::ILobbyPlayersDataModel*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__lobbyPlayersDataModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lobbyPlayersDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyPlayersDataModel*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__lobbyPlayersDataModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lobbyPlayersDataModel;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyPlayersDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__playerDataModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__playerDataModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerDataModel;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMenuRpcManager*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__menuRpcManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuRpcManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMenuRpcManager*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__menuRpcManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuRpcManager;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__menuRpcManager(::GlobalNamespace::IMenuRpcManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuRpcManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__multiplayerSessionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__multiplayerSessionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLevelLoader*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__multiplayerLevelLoader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiplayerLevelLoader;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelLoader*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__multiplayerLevelLoader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiplayerLevelLoader;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__multiplayerLevelLoader(::GlobalNamespace::MultiplayerLevelLoader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerLevelLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__menuTransitionsHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuTransitionsHelper;
}
constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__menuTransitionsHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuTransitionsHelper;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__menuTransitionsHelper(::UnityW<::GlobalNamespace::MenuTransitionsHelper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuTransitionsHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LobbyGameStateModel*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__lobbyGameStateModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lobbyGameStateModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyGameStateModel*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__lobbyGameStateModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lobbyGameStateModel;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__lobbyGameStateModel(::GlobalNamespace::LobbyGameStateModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyGameStateModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__lobbyPlayerPermissionsModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lobbyPlayerPermissionsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayerPermissionsModel*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__lobbyPlayerPermissionsModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lobbyPlayerPermissionsModel;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyPlayerPermissionsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__beatmapCharacteristicCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapCharacteristicCollection;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__beatmapCharacteristicCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapCharacteristicCollection;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristicCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__beatmapLevelsModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapLevelsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__beatmapLevelsModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_selectedLevelGameplaySetupDataChangedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedLevelGameplaySetupDataChangedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_selectedLevelGameplaySetupDataChangedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedLevelGameplaySetupDataChangedEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selectedLevelGameplaySetupDataChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_gameStartedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameStartedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_gameStartedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameStartedEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameStartedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_gameStartCancelledEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameStartCancelledEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_gameStartCancelledEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameStartCancelledEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_gameStartCancelledEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameStartCancelledEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_countdownStartedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownStartedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_countdownStartedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownStartedEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_countdownStartedEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___countdownStartedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_countdownCancelledEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownCancelledEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_countdownCancelledEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownCancelledEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_countdownCancelledEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___countdownCancelledEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_songStillDownloadingEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___songStillDownloadingEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_songStillDownloadingEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___songStillDownloadingEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_songStillDownloadingEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___songStillDownloadingEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_startTimeChangedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTimeChangedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_startTimeChangedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTimeChangedEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_startTimeChangedEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startTimeChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MultiplayerResultsData*>*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_levelFinishedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelFinishedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MultiplayerResultsData*>*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_levelFinishedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelFinishedEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_levelFinishedEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MultiplayerResultsData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelFinishedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_levelDidGetDisconnectedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelDidGetDisconnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_levelDidGetDisconnectedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelDidGetDisconnectedEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelDidGetDisconnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_lobbyDisconnectedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyDisconnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_lobbyDisconnectedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyDisconnectedEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_lobbyDisconnectedEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lobbyDisconnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_beforeSceneSwitchCallbackEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beforeSceneSwitchCallbackEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_beforeSceneSwitchCallbackEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beforeSceneSwitchCallbackEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_beforeSceneSwitchCallbackEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beforeSceneSwitchCallbackEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_lobbyStateChangedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyStateChangedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_lobbyStateChangedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lobbyStateChangedEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lobbyStateChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::CannotStartGameReason>*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_startButtonEnabledEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startButtonEnabledEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_startButtonEnabledEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startButtonEnabledEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startButtonEnabledEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_playerMissingEntitlementsChangedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMissingEntitlementsChangedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_playerMissingEntitlementsChangedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMissingEntitlementsChangedEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerMissingEntitlementsChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__levelStartInitiated_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levelStartInitiated_k__BackingField;
}
constexpr bool const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__levelStartInitiated_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levelStartInitiated_k__BackingField;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__levelStartInitiated_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____levelStartInitiated_k__BackingField = value;
}
constexpr bool& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__countdownStarted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownStarted_k__BackingField;
}
constexpr bool const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__countdownStarted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownStarted_k__BackingField;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__countdownStarted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____countdownStarted_k__BackingField = value;
}
constexpr int64_t& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__countdownEndTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownEndTime_k__BackingField;
}
constexpr int64_t const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__countdownEndTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownEndTime_k__BackingField;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__countdownEndTime_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____countdownEndTime_k__BackingField = value;
}
constexpr bool& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__isDisconnected_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisconnected_k__BackingField;
}
constexpr bool const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__isDisconnected_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisconnected_k__BackingField;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__isDisconnected_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDisconnected_k__BackingField = value;
}
constexpr ::GlobalNamespace::DisconnectedReason& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__disconnectedReason_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disconnectedReason_k__BackingField;
}
constexpr ::GlobalNamespace::DisconnectedReason const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__disconnectedReason_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disconnectedReason_k__BackingField;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__disconnectedReason_k__BackingField(::GlobalNamespace::DisconnectedReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disconnectedReason_k__BackingField = value;
}
constexpr int64_t& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__predictedStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____predictedStartTime;
}
constexpr int64_t const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__predictedStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____predictedStartTime;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__predictedStartTime(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____predictedStartTime = value;
}
constexpr int64_t& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime;
}
constexpr int64_t const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__startTime(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime = value;
}
constexpr bool& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__levelStartedOnTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levelStartedOnTime;
}
constexpr bool const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__levelStartedOnTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levelStartedOnTime;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__levelStartedOnTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____levelStartedOnTime = value;
}
constexpr ::GlobalNamespace::MultiplayerLobbyState& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::GlobalNamespace::MultiplayerLobbyState const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__state(::GlobalNamespace::MultiplayerLobbyState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
constexpr ::GlobalNamespace::CannotStartGameReason& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__cannotStartGameReason()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cannotStartGameReason;
}
constexpr ::GlobalNamespace::CannotStartGameReason const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__cannotStartGameReason() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cannotStartGameReason;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__cannotStartGameReason(::GlobalNamespace::CannotStartGameReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cannotStartGameReason = value;
}
constexpr ::GlobalNamespace::LevelGameplaySetupData*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__selectedLevelGameplaySetupData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedLevelGameplaySetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelGameplaySetupData*> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__selectedLevelGameplaySetupData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedLevelGameplaySetupData;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__selectedLevelGameplaySetupData(::GlobalNamespace::LevelGameplaySetupData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedLevelGameplaySetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LobbyGameStateController::add_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_selectedLevelGameplaySetupDataChangedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_selectedLevelGameplaySetupDataChangedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_gameStartedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_gameStartedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_gameStartCancelledEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_gameStartCancelledEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_gameStartCancelledEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_gameStartCancelledEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_countdownStartedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_countdownStartedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_countdownStartedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_countdownStartedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_countdownCancelledEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_countdownCancelledEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_countdownCancelledEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_countdownCancelledEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_songStillDownloadingEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_songStillDownloadingEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_songStillDownloadingEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_songStillDownloadingEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_startTimeChangedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_startTimeChangedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_startTimeChangedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_startTimeChangedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_levelFinishedEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MultiplayerResultsData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_levelFinishedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MultiplayerResultsData*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_levelFinishedEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MultiplayerResultsData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_levelFinishedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MultiplayerResultsData*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_levelDidGetDisconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_levelDidGetDisconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_lobbyDisconnectedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_lobbyDisconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_lobbyDisconnectedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_lobbyDisconnectedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_beforeSceneSwitchCallbackEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_beforeSceneSwitchCallbackEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_beforeSceneSwitchCallbackEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_beforeSceneSwitchCallbackEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_lobbyStateChangedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_lobbyStateChangedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_startButtonEnabledEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_startButtonEnabledEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "add_playerMissingEntitlementsChangedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "remove_playerMissingEntitlementsChangedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::LobbyGameStateController::get_predictedCountdownEndTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_predictedCountdownEndTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t GlobalNamespace::LobbyGameStateController::get_startTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_startTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_startTime(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "set_startTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LobbyGameStateController::get_levelStartInitiated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_levelStartInitiated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_levelStartInitiated(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "set_levelStartInitiated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ILevelGameplaySetupData* GlobalNamespace::LobbyGameStateController::get_selectedLevelGameplaySetupData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_selectedLevelGameplaySetupData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILevelGameplaySetupData*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LobbyGameStateController::get_countdownStarted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_countdownStarted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_countdownStarted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "set_countdownStarted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::LobbyGameStateController::get_countdownEndTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_countdownEndTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_countdownEndTime(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "set_countdownEndTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerLobbyState GlobalNamespace::LobbyGameStateController::get_state()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_state",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerLobbyState, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_state(::GlobalNamespace::MultiplayerLobbyState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "set_state",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLobbyState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::CannotStartGameReason GlobalNamespace::LobbyGameStateController::get_cannotStartGameReason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_cannotStartGameReason",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CannotStartGameReason, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LobbyGameStateController::get_isDisconnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_isDisconnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_isDisconnected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "set_isDisconnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::DisconnectedReason GlobalNamespace::LobbyGameStateController::get_disconnectedReason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "get_disconnectedReason",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DisconnectedReason, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_disconnectedReason(::GlobalNamespace::DisconnectedReason  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "set_disconnectedReason",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::Activate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "Activate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::Deactivate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "Deactivate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::StartListeningToGameStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "StartListeningToGameStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::GetCurrentLevelIfGameStarted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "GetCurrentLevelIfGameStarted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::ClearDisconnectedState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "ClearDisconnectedState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LobbyGameStateController::GetGameStateAndConfigurationAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "GetGameStateAndConfigurationAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline void GlobalNamespace::LobbyGameStateController::PredictCountdownEndTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "PredictCountdownEndTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LobbyGameStateController::IsCloseToStartGame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "IsCloseToStartGame",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerSessionManagerDisconnected(::GlobalNamespace::DisconnectedReason  disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMultiplayerSessionManagerDisconnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerSessionManagerConnectionOwnerStateChanged(::GlobalNamespace::IConnectedPlayer*  connectedPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMultiplayerSessionManagerConnectionOwnerStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectedPlayer);
}
inline void GlobalNamespace::LobbyGameStateController::StopListeningToGameStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "StopListeningToGameStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerStartedLevel(::StringW  userId, ::GlobalNamespace::BeatmapKeyNetSerializable*  beatmapKeyNetSerializable, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, int64_t  startTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerStartedLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKeyNetSerializable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, beatmapKeyNetSerializable, gameplayModifiers, startTime);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerCancelledLevelStart(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerCancelledLevelStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetCountdownEndTime(::StringW  userId, int64_t  countdownTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerSetCountdownEndTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, countdownTime);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerCancelCountdown(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerCancelCountdown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetStartGameTime(::StringW  userId, int64_t  startTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerSetStartGameTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, startTime);
}
inline void GlobalNamespace::LobbyGameStateController::HandleSetIsStartButtonEnabled(::StringW  userId, ::GlobalNamespace::CannotStartGameReason  cannotStartGameReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleSetIsStartButtonEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CannotStartGameReason>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, cannotStartGameReason);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel(::StringW  userId, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*  playersMissingEntitlements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, playersMissingEntitlements);
}
inline void GlobalNamespace::LobbyGameStateController::HandleStartTimeChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleStartTimeChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelLoaderStillDownloadingSong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMultiplayerLevelLoaderStillDownloadingSong",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetSelectedBeatmap(::StringW  userId, ::GlobalNamespace::BeatmapKeyNetSerializable*  beatmapKeySerializable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerSetSelectedBeatmap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKeyNetSerializable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, beatmapKeySerializable);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetSelectedGameplayModifiers(::StringW  userId, ::GlobalNamespace::GameplayModifiers*  modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerSetSelectedGameplayModifiers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, modifiers);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerClearSelectedBeatmap(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerClearSelectedBeatmap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerClearSelectedGameplayModifiers(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMenuRpcManagerClearSelectedGameplayModifiers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelLoaderCountdownFinished(::GlobalNamespace::ILevelGameplaySetupData*  gameplaySetupData, ::GlobalNamespace::IBeatmapLevelData*  beatmapLevelData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMultiplayerLevelLoaderCountdownFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameplaySetupData, beatmapLevelData);
}
inline void GlobalNamespace::LobbyGameStateController::StartMultiplayerLevel(::GlobalNamespace::ILevelGameplaySetupData*  gameplaySetupData, ::GlobalNamespace::IBeatmapLevelData*  beatmapLevelData, ::System::Action*  beforeSceneSwitchCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "StartMultiplayerLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameplaySetupData, beatmapLevelData, beforeSceneSwitchCallback);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*  multiplayerLevelScenesTransitionSetupData, ::GlobalNamespace::MultiplayerResultsData*  multiplayerResultsData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMultiplayerLevelDidFinish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerResultsData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerLevelScenesTransitionSetupData, multiplayerResultsData);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelDidDisconnect(::GlobalNamespace::DisconnectedReason  disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "HandleMultiplayerLevelDidDisconnect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::LobbyGameStateController::StopLoading()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        "StopLoading",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LobbyGameStateController* GlobalNamespace::LobbyGameStateController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LobbyGameStateController*>());
}
inline void GlobalNamespace::LobbyGameStateController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LobbyGameStateController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyGameStateController::LobbyGameStateController()   {
}
