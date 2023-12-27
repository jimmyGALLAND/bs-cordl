#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__ConnectedPlayerAvatarVisualDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarVisualDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider.get_avatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::*)()>(
    &::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::get_avatarsData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xe0f47c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>::get(), "get_avatarsData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe0f544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarVisualDataProvider"
constexpr BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::operator ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IConnectedPlayer*& BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::__get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____connectedPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::__get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____connectedPlayer;
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::__set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MultiplayerAvatarsData BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::get_avatarsData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>::get(), "get_avatarsData",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData, false>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*
BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::New_ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>(connectedPlayer));
}
inline void BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::_ctor(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectedPlayer);
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::ConnectedPlayerAvatarVisualDataProvider::ConnectedPlayerAvatarVisualDataProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
