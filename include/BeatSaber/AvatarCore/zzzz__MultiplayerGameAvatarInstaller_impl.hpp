#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/MultiplayerGameAvatarInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__MultiplayerGameAvatarInstaller_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller.InstallBindings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::*)()>(&::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x220e894;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::*)()>(&::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220eac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IConnectedPlayer*& BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::__cordl_internal_get__connectedPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectedPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::__cordl_internal_get__connectedPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectedPlayer;
}
constexpr void BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::InstallBindings()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller* BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>());
}
inline void BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::MultiplayerGameAvatarInstaller::MultiplayerGameAvatarInstaller()   {
}
