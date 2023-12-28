#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerVerticalPlayerMovementManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerFacade_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(
    &::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x225b2bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), "Start",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(
    &::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x225b374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), "OnDestroy",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(
    &::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Update)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x225b444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), "Update",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager.HandleStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)(
    ::GlobalNamespace::__MultiplayerController__State)>(&::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::HandleStateChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x225b364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), "HandleStateChanged", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerController__State>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::*)()>(
    &::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::_ctor)> {
  constexpr static std::size_t size = 0x10e0;
  constexpr static std::size_t addrs = 0x225bc24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__movementRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementRange;
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__movementRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementRange;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__movementRange(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____movementRange = value;
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__duelMovementRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duelMovementRange;
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__duelMovementRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duelMovementRange;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__duelMovementRange(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duelMovementRange = value;
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__maxMoveSpeedMetersPerSecond() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxMoveSpeedMetersPerSecond;
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__maxMoveSpeedMetersPerSecond() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxMoveSpeedMetersPerSecond;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__maxMoveSpeedMetersPerSecond(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxMoveSpeedMetersPerSecond = value;
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__accelerationMetersPerSecondSquared() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accelerationMetersPerSecondSquared;
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__accelerationMetersPerSecondSquared() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accelerationMetersPerSecondSquared;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__accelerationMetersPerSecondSquared(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____accelerationMetersPerSecondSquared = value;
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__decelerationMetersPerSecondSquared() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decelerationMetersPerSecondSquared;
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__decelerationMetersPerSecondSquared() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decelerationMetersPerSecondSquared;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__decelerationMetersPerSecondSquared(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____decelerationMetersPerSecondSquared = value;
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__minScoreDifference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minScoreDifference;
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__minScoreDifference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minScoreDifference;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__minScoreDifference(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minScoreDifference = value;
}
constexpr ::GlobalNamespace::MultiplayerPlayersManager*& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__multiplayerPlayersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> const&
GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__multiplayerPlayersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__multiplayerPlayersManager(::GlobalNamespace::MultiplayerPlayersManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerPlayersManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerScoreProvider*& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__scoreProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__scoreProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__layoutProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__layoutProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layoutProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerController*& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__multiplayerController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__multiplayerController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__multiplayerController(::GlobalNamespace::MultiplayerController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*&
GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__reusablePlayersList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusablePlayersList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*> const&
GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__reusablePlayersList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusablePlayersList;
}
constexpr void
GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__reusablePlayersList(::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reusablePlayersList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*, float_t>*&
GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__currentSpeedsDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSpeedsDictionary;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*, float_t>*> const&
GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__currentSpeedsDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSpeedsDictionary;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__currentSpeedsDictionary(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MultiplayerConnectedPlayerFacade*, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentSpeedsDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__lastFrameBaseScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameBaseScore;
}
constexpr float_t const& GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__get__lastFrameBaseScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameBaseScore;
}
constexpr void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::__set__lastFrameBaseScore(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastFrameBaseScore = value;
}
inline void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), "Start",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), "OnDestroy",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::Update() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), "Update",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::HandleStateChanged(::GlobalNamespace::__MultiplayerController__State state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), "HandleStateChanged", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerController__State>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager* GlobalNamespace::MultiplayerVerticalPlayerMovementManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>());
}
inline void GlobalNamespace::MultiplayerVerticalPlayerMovementManager::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerVerticalPlayerMovementManager*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerVerticalPlayerMovementManager::MultiplayerVerticalPlayerMovementManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
