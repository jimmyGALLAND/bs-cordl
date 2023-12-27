#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SceneStartHandler_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsAtStartNetSerializable_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.add_sceneSetupDidFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::SceneStartHandler::add_sceneSetupDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe54748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "add_sceneSetupDidFinishEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.remove_sceneSetupDidFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::SceneStartHandler::remove_sceneSetupDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe547f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "remove_sceneSetupDidFinishEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.add_sceneSetupDidReceiveTooLateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::SceneStartHandler::add_sceneSetupDidReceiveTooLateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe548a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "add_sceneSetupDidReceiveTooLateEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.remove_sceneSetupDidReceiveTooLateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::SceneStartHandler::remove_sceneSetupDidReceiveTooLateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe54958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "remove_sceneSetupDidReceiveTooLateEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(
    ::GlobalNamespace::IMultiplayerSessionManager*, ::GlobalNamespace::IGameplayRpcManager*, ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*)>(
    &::GlobalNamespace::SceneStartHandler::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xe54a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGameplayRpcManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)()>(&::GlobalNamespace::SceneStartHandler::Dispose)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0xe54af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.GetSceneLoadStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)()>(&::GlobalNamespace::SceneStartHandler::GetSceneLoadStatus)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0xe54e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(),
                                                                               "GetSceneLoadStatus", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.ForceStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)()>(&::GlobalNamespace::SceneStartHandler::ForceStart)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0xe558ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "ForceStart",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.HandleSetGameplaySceneReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*)>(
    &::GlobalNamespace::SceneStartHandler::HandleSetGameplaySceneReady)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0xe55f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "HandleSetGameplaySceneReady", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.HandleGetGameplaySceneReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(::StringW)>(
    &::GlobalNamespace::SceneStartHandler::HandleGetGameplaySceneReady)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe56364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "HandleGetGameplaySceneReady",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.HandleSetGameplaySceneSyncFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(
    ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW)>(&::GlobalNamespace::SceneStartHandler::HandleSetGameplaySceneSyncFinished)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe56418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "HandleSetGameplaySceneSyncFinished", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.HandleSetPlayerDidConnectLate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(
    ::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW)>(&::GlobalNamespace::SceneStartHandler::HandleSetPlayerDidConnectLate)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xe56480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "HandleSetPlayerDidConnectLate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.AddPlayerSpecificSettingsToDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SceneStartHandler::*)(::GlobalNamespace::PlayerSpecificSettingsNetSerializable*)>(
    &::GlobalNamespace::SceneStartHandler::AddPlayerSpecificSettingsToDictionary)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe55538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "AddPlayerSpecificSettingsToDictionary", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneStartHandler.CreatePlayersSpecificSettingsAtGameStartData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* (::GlobalNamespace::SceneStartHandler::*)()>(
    &::GlobalNamespace::SceneStartHandler::CreatePlayersSpecificSettingsAtGameStartData)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xe555a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(),
                                                                               "CreatePlayersSpecificSettingsAtGameStartData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::SceneStartHandler::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::SceneStartHandler::__get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& GlobalNamespace::SceneStartHandler::__get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::SceneStartHandler::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IGameplayRpcManager*& GlobalNamespace::SceneStartHandler::__get__gameplayRpcManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameplayRpcManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> const& GlobalNamespace::SceneStartHandler::__get__gameplayRpcManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameplayRpcManager;
}
constexpr void GlobalNamespace::SceneStartHandler::__set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayRpcManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& GlobalNamespace::SceneStartHandler::__get__playersAtGameStartModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playersAtGameStartModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*> const& GlobalNamespace::SceneStartHandler::__get__playersAtGameStartModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playersAtGameStartModel;
}
constexpr void GlobalNamespace::SceneStartHandler::__set__playersAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playersAtGameStartModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::SceneStartHandler::__get__readyPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____readyPlayers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& GlobalNamespace::SceneStartHandler::__get__readyPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____readyPlayers;
}
constexpr void GlobalNamespace::SceneStartHandler::__set__readyPlayers(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____readyPlayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*& GlobalNamespace::SceneStartHandler::__get__playersSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playersSpecificSettings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*> const&
GlobalNamespace::SceneStartHandler::__get__playersSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playersSpecificSettings;
}
constexpr void
GlobalNamespace::SceneStartHandler::__set__playersSpecificSettings(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playersSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SceneStartHandler::__get__started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____started;
}
constexpr bool const& GlobalNamespace::SceneStartHandler::__get__started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____started;
}
constexpr void GlobalNamespace::SceneStartHandler::__set__started(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____started = value;
}
constexpr ::StringW& GlobalNamespace::SceneStartHandler::__get__sessionGameId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sessionGameId;
}
constexpr ::StringW const& GlobalNamespace::SceneStartHandler::__get__sessionGameId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sessionGameId;
}
constexpr void GlobalNamespace::SceneStartHandler::__set__sessionGameId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sessionGameId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::SceneStartHandler::__get_sceneSetupDidFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sceneSetupDidFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::SceneStartHandler::__get_sceneSetupDidFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sceneSetupDidFinishEvent;
}
constexpr void GlobalNamespace::SceneStartHandler::__set_sceneSetupDidFinishEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sceneSetupDidFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::SceneStartHandler::__get_sceneSetupDidReceiveTooLateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sceneSetupDidReceiveTooLateEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::SceneStartHandler::__get_sceneSetupDidReceiveTooLateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sceneSetupDidReceiveTooLateEvent;
}
constexpr void GlobalNamespace::SceneStartHandler::__set_sceneSetupDidReceiveTooLateEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sceneSetupDidReceiveTooLateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SceneStartHandler::add_sceneSetupDidFinishEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "add_sceneSetupDidFinishEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SceneStartHandler::remove_sceneSetupDidFinishEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "remove_sceneSetupDidFinishEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SceneStartHandler::add_sceneSetupDidReceiveTooLateEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "add_sceneSetupDidReceiveTooLateEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SceneStartHandler::remove_sceneSetupDidReceiveTooLateEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "remove_sceneSetupDidReceiveTooLateEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SceneStartHandler* GlobalNamespace::SceneStartHandler::New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                                          ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                                                                                          ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SceneStartHandler*>(multiplayerSessionManager, gameplayRpcManager, playersAtGameStartModel));
}
inline void GlobalNamespace::SceneStartHandler::_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                                                      ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGameplayRpcManager*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerSessionManager, gameplayRpcManager, playersAtGameStartModel);
}
inline void GlobalNamespace::SceneStartHandler::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SceneStartHandler::GetSceneLoadStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "GetSceneLoadStatus",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SceneStartHandler::ForceStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "ForceStart",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SceneStartHandler::HandleSetGameplaySceneReady(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "HandleSetGameplaySceneReady", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, playerSpecificSettings);
}
inline void GlobalNamespace::SceneStartHandler::HandleGetGameplaySceneReady(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "HandleGetGameplaySceneReady",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::SceneStartHandler::HandleSetGameplaySceneSyncFinished(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart,
                                                                                   ::StringW sessionId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "HandleSetGameplaySceneSyncFinished", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, playersAtGameStart, sessionId);
}
inline void GlobalNamespace::SceneStartHandler::HandleSetPlayerDidConnectLate(::StringW userId, ::StringW failedUserId,
                                                                              ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart, ::StringW sessionId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "HandleSetPlayerDidConnectLate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, failedUserId, playersAtGameStart, sessionId);
}
inline void GlobalNamespace::SceneStartHandler::AddPlayerSpecificSettingsToDictionary(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettingsNetSerializable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(), "AddPlayerSpecificSettingsToDictionary", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerSpecificSettingsNetSerializable);
}
inline ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* GlobalNamespace::SceneStartHandler::CreatePlayersSpecificSettingsAtGameStartData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SceneStartHandler*>::get(),
                                                                             "CreatePlayersSpecificSettingsAtGameStartData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SceneStartHandler::SceneStartHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
