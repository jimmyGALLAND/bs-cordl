#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__MultiplayerGameAvatarInstaller_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::*)()>(
    &::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xe10254;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::*)()>(
    &::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe10490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IConnectedPlayer*& BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::__get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____connectedPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::__get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____connectedPlayer;
}
constexpr void BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::__set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::InstallBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>::get(),
                                                                             "InstallBindings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller* BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>());
}
inline void BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::MultiplayerGameAvatarInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
