#pragma once
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "GlobalNamespace/zzzz__UnifiedNetworkPlayerModel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModelPartyConfig_1_def.hpp"
#include "GlobalNamespace/zzzz__UnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__PartyMessageHandler_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GameLiftNetworkPlayerModel_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType() {}
constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType::GameLift{ static_cast<int32_t>(
    0x0) };
constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType::Platform{ static_cast<int32_t>(
    0x1) };
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::*)()>(
    &::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263bdf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>"
constexpr GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<
    ::GlobalNamespace::UnifiedNetworkPlayerModel*>*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_selectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selectionMask;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_selectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selectionMask;
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___selectionMask = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___configuration;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___configuration;
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__set_configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___configuration = value;
}
constexpr ::StringW& GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_secret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___secret;
}
constexpr ::StringW const& GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_secret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___secret;
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__set_secret(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___secret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___code;
}
constexpr ::StringW const& GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__get_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___code;
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__set_code(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___code)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig* GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*>());
}
inline void GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig() {}
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::*)()>(
    &::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263bb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>"
constexpr GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<
    ::GlobalNamespace::UnifiedNetworkPlayerModel*>*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::__get_selectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selectionMask;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::__get_selectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selectionMask;
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::__set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___selectionMask = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::__get_configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___configuration;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::__get_configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___configuration;
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::__set_configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___configuration = value;
}
inline ::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig* GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig*>());
}
inline void GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig::__UnifiedNetworkPlayerModel__StartClientPartyConfig() {}
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)(int32_t)>(
    &::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x263ba04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(
    &::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x263c2ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(
    &::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::MoveNext)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x263c2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(
    &::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263c7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                                                 "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.__m__Finally2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(
    &::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__m__Finally2)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263c89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                                                 "<>m__Finally2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::INetworkPlayer* (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(
    &::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263c94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                                                 "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(
    &::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x263c954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(
    &::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263c994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(
        &::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x263c99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                                                 "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::*)()>(
    &::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x263ca40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
constexpr GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
constexpr GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
constexpr ::GlobalNamespace::INetworkPlayer*& GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayer*> const& GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__set___2__current(::GlobalNamespace::INetworkPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel*& GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UnifiedNetworkPlayerModel*> const& GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__set___4__this(::GlobalNamespace::UnifiedNetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*& GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*> const&
GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap1;
}
constexpr void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64* GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>(__1__state));
}
inline void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(), "<>m__Finally1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(), "<>m__Finally2",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::INetworkPlayer* GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                                               "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayer*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                                               "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64() {}
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_connectedPlayerManagerCreatedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerCreatedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2639c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_connectedPlayerManagerCreatedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_connectedPlayerManagerCreatedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2639d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_connectedPlayerManagerCreatedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_connectedPlayerManagerDestroyedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2639dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_connectedPlayerManagerDestroyedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_connectedPlayerManagerDestroyedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2639e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_connectedPlayerManagerDestroyedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_partySizeChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_partySizeChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2639f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_partySizeChangedEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_partySizeChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_partySizeChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2639fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_partySizeChangedEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_partyRefreshingEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_partyRefreshingEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x263a08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_partyRefreshingEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_partyRefreshingEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyRefreshingEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x263a128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_partyRefreshingEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_partyChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_partyChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263a1c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_partyChangedEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_partyChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263a274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_partyChangedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_joinRequestedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_joinRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263a324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_joinRequestedEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_joinRequestedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_joinRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263a3d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_joinRequestedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_inviteRequestedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263a484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_inviteRequestedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_inviteRequestedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263a534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_inviteRequestedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_activeNetworkPlayerModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::INetworkPlayerModel* (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModel)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x263a5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_activeNetworkPlayerModel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_activeNetworkPlayerModelType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType (
    ::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModelType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263a610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_activeNetworkPlayerModelType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_localPlayerIsPartyOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_localPlayerIsPartyOwner)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x263a618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_localPlayerIsPartyOwner", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_hasNetworkingFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_hasNetworkingFailed)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x263a6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_hasNetworkingFailed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_currentPartySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_currentPartySize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x263a7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_currentPartySize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_selectionMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_selectionMask)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x263a870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_selectionMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_configuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_configuration)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x263a958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_configuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_secret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_secret)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x263aa3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_secret", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_code
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_code)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x263aa60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "get_code",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_connectedPlayerManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager* (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_connectedPlayerManager)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x263aa84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_connectedPlayerManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_publicServers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (
    ::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_publicServers)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x263ab44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_publicServers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_friends
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (
    ::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_friends)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x263ab8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_friends", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_discoveryEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_discoveryEnabled)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x263abb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_discoveryEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.set_discoveryEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(bool)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::set_discoveryEnabled)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x263ac6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "set_discoveryEnabled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_enableFriends
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_enableFriends)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x263ad34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_enableFriends", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.set_enableFriends
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(bool)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::set_enableFriends)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x263ad58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "set_enableFriends",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::Initialize)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x263b034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "Initialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::Dispose)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x263b480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_partyPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (
    ::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_partyPlayers)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x263b8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_partyPlayers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_otherPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (
    ::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_otherPlayers)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x263b98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_otherPlayers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.SetServerFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(
    ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::SetServerFilter)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x263ba38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "SetServerFilter", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.RefreshAlternateDiscoveryModels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::RefreshAlternateDiscoveryModels)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x263ad8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "RefreshAlternateDiscoveryModels", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandlePlayersChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandlePlayersChanged)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x263bb90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "HandlePlayersChanged", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleInviteRequested
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayer*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandleInviteRequested)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x263bbf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleInviteRequested", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleJoinRequested
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayer*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandleJoinRequested)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x263bc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleJoinRequested", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandlePartyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayerModel*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x263bc30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandlePartyChanged", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandlePartySizeChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(int32_t)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartySizeChanged)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x263bc50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandlePartySizeChanged",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandlePartyRefreshing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyRefreshing)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x263bc84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "HandlePartyRefreshing", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleFriendConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandleFriendConnected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x263bca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleFriendConnected", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleFriendConnectToMasterServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::StringW)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandleFriendConnectToMasterServer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x263bd04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleFriendConnectToMasterServer",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleConnectedPlayerManagerCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayerModel*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerCreated)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x263bdfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleConnectedPlayerManagerCreated", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleConnectedPlayerManagerDestroyed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayerModel*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerDestroyed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x263c0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleConnectedPlayerManagerDestroyed", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.ResetMasterServerReachability
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::ResetMasterServerReachability)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x263c158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "ResetMasterServerReachability", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.DestroyPartyConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::DestroyPartyConnection)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x263c1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "DestroyPartyConnection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.SetActiveNetworkPlayerModelType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(
    ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::SetActiveNetworkPlayerModelType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x263c268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "SetActiveNetworkPlayerModelType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263c2a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IUnifiedNetworkPlayerModel"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel::operator ::GlobalNamespace::IUnifiedNetworkPlayerModel*() noexcept {
  return static_cast<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel::operator ::GlobalNamespace::INetworkPlayerModel*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::GameLiftNetworkPlayerModel*& GlobalNamespace::UnifiedNetworkPlayerModel::__get__gameLiftNetworkPlayerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameLiftNetworkPlayerModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameLiftNetworkPlayerModel*> const& GlobalNamespace::UnifiedNetworkPlayerModel::__get__gameLiftNetworkPlayerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameLiftNetworkPlayerModel;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set__gameLiftNetworkPlayerModel(::GlobalNamespace::GameLiftNetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameLiftNetworkPlayerModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlatformNetworkPlayerModel*& GlobalNamespace::UnifiedNetworkPlayerModel::__get__platformNetworkPlayerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____platformNetworkPlayerModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformNetworkPlayerModel*> const& GlobalNamespace::UnifiedNetworkPlayerModel::__get__platformNetworkPlayerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____platformNetworkPlayerModel;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set__platformNetworkPlayerModel(::GlobalNamespace::PlatformNetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformNetworkPlayerModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& GlobalNamespace::UnifiedNetworkPlayerModel::__get_connectedPlayerManagerCreatedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___connectedPlayerManagerCreatedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> const&
GlobalNamespace::UnifiedNetworkPlayerModel::__get_connectedPlayerManagerCreatedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___connectedPlayerManagerCreatedEvent;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectedPlayerManagerCreatedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& GlobalNamespace::UnifiedNetworkPlayerModel::__get_connectedPlayerManagerDestroyedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___connectedPlayerManagerDestroyedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> const&
GlobalNamespace::UnifiedNetworkPlayerModel::__get_connectedPlayerManagerDestroyedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___connectedPlayerManagerDestroyedEvent;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectedPlayerManagerDestroyedEvent)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::UnifiedNetworkPlayerModel::__get_partySizeChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___partySizeChangedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& GlobalNamespace::UnifiedNetworkPlayerModel::__get_partySizeChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___partySizeChangedEvent;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_partySizeChangedEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partySizeChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::UnifiedNetworkPlayerModel::__get_partyRefreshingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___partyRefreshingEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::UnifiedNetworkPlayerModel::__get_partyRefreshingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___partyRefreshingEvent;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_partyRefreshingEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partyRefreshingEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& GlobalNamespace::UnifiedNetworkPlayerModel::__get_partyChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___partyChangedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> const& GlobalNamespace::UnifiedNetworkPlayerModel::__get_partyChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___partyChangedEvent;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partyChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& GlobalNamespace::UnifiedNetworkPlayerModel::__get_joinRequestedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___joinRequestedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> const& GlobalNamespace::UnifiedNetworkPlayerModel::__get_joinRequestedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___joinRequestedEvent;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___joinRequestedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& GlobalNamespace::UnifiedNetworkPlayerModel::__get_inviteRequestedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___inviteRequestedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> const& GlobalNamespace::UnifiedNetworkPlayerModel::__get_inviteRequestedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___inviteRequestedEvent;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inviteRequestedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PartyMessageHandler*& GlobalNamespace::UnifiedNetworkPlayerModel::__get__partyMessageHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____partyMessageHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyMessageHandler*> const& GlobalNamespace::UnifiedNetworkPlayerModel::__get__partyMessageHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____partyMessageHandler;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set__partyMessageHandler(::GlobalNamespace::PartyMessageHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____partyMessageHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PartyMessageHandler*& GlobalNamespace::UnifiedNetworkPlayerModel::__get__friendPartyMessageHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____friendPartyMessageHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyMessageHandler*> const& GlobalNamespace::UnifiedNetworkPlayerModel::__get__friendPartyMessageHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____friendPartyMessageHandler;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set__friendPartyMessageHandler(::GlobalNamespace::PartyMessageHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____friendPartyMessageHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType& GlobalNamespace::UnifiedNetworkPlayerModel::__get__activeNetworkPlayerModelType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____activeNetworkPlayerModelType;
}
constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType const& GlobalNamespace::UnifiedNetworkPlayerModel::__get__activeNetworkPlayerModelType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____activeNetworkPlayerModelType;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__set__activeNetworkPlayerModelType(::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____activeNetworkPlayerModelType = value;
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_connectedPlayerManagerCreatedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_connectedPlayerManagerCreatedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_connectedPlayerManagerDestroyedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_connectedPlayerManagerDestroyedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_partySizeChangedEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_partySizeChangedEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_partySizeChangedEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_partySizeChangedEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_partyRefreshingEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_partyRefreshingEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyRefreshingEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_partyRefreshingEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_partyChangedEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_partyChangedEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_joinRequestedEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_joinRequestedEvent", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_inviteRequestedEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_inviteRequestedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::INetworkPlayerModel* GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_activeNetworkPlayerModel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayerModel*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModelType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_activeNetworkPlayerModelType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType, false>(this, ___internal_method);
}
inline bool GlobalNamespace::UnifiedNetworkPlayerModel::get_localPlayerIsPartyOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_localPlayerIsPartyOwner", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::UnifiedNetworkPlayerModel::get_hasNetworkingFailed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_hasNetworkingFailed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::UnifiedNetworkPlayerModel::get_currentPartySize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_currentPartySize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::UnifiedNetworkPlayerModel::get_selectionMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_selectionMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::UnifiedNetworkPlayerModel::get_configuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_configuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::UnifiedNetworkPlayerModel::get_secret() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "get_secret",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::UnifiedNetworkPlayerModel::get_code() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "get_code",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager* GlobalNamespace::UnifiedNetworkPlayerModel::get_connectedPlayerManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_connectedPlayerManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::UnifiedNetworkPlayerModel::get_publicServers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_publicServers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::UnifiedNetworkPlayerModel::get_friends() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_friends", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::UnifiedNetworkPlayerModel::get_discoveryEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_discoveryEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::set_discoveryEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "set_discoveryEnabled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::UnifiedNetworkPlayerModel::get_enableFriends() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_enableFriends", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::set_enableFriends(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "set_enableFriends",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "Initialize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::UnifiedNetworkPlayerModel::get_partyPlayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_partyPlayers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::UnifiedNetworkPlayerModel::get_otherPlayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_otherPlayers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::SetServerFilter(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "SetServerFilter", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectionMask, configuration);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::RefreshAlternateDiscoveryModels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "RefreshAlternateDiscoveryModels", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePlayersChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "HandlePlayersChanged", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleInviteRequested(::GlobalNamespace::INetworkPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleInviteRequested", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleJoinRequested(::GlobalNamespace::INetworkPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleJoinRequested", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyChanged(::GlobalNamespace::INetworkPlayerModel* playerModel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandlePartyChanged", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerModel);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartySizeChanged(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandlePartySizeChanged",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyRefreshing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "HandlePartyRefreshing", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleFriendConnected(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleFriendConnected", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleFriendConnectToMasterServer(::StringW secret) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleFriendConnectToMasterServer",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, secret);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerCreated(::GlobalNamespace::INetworkPlayerModel* networkPlayerModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleConnectedPlayerManagerCreated", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, networkPlayerModel);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerDestroyed(::GlobalNamespace::INetworkPlayerModel* networkPlayerModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleConnectedPlayerManagerDestroyed", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, networkPlayerModel);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::ResetMasterServerReachability() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "ResetMasterServerReachability", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* partyConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "CreatePartyConnection",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, partyConfig);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::DestroyPartyConnection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "DestroyPartyConnection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::SetActiveNetworkPlayerModelType(::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType activeNetworkPlayerModelType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "SetActiveNetworkPlayerModelType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, activeNetworkPlayerModelType);
}
inline ::GlobalNamespace::UnifiedNetworkPlayerModel* GlobalNamespace::UnifiedNetworkPlayerModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::UnifiedNetworkPlayerModel*>());
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayerModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
