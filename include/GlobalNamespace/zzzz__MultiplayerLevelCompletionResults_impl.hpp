#pragma once
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState() {}
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::SongFinished{
  static_cast<int32_t>(0x0)
};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::NotFinished{
  static_cast<int32_t>(0x1)
};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState::NotStarted{
  static_cast<int32_t>(0x2)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason() {}
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::Cleared{
  static_cast<int32_t>(0x0)
};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::Failed{
  static_cast<int32_t>(0x1)
};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::GivenUp{
  static_cast<int32_t>(0x2)
};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::Quit{
  static_cast<int32_t>(0x3)
};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::HostEndedLevel{
  static_cast<int32_t>(0x4)
};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::WasInactive{
  static_cast<int32_t>(0x5)
};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::StartupFailed{
  static_cast<int32_t>(0x6)
};
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason
    GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason::ConnectedAfterLevelEnded{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.get_playerLevelEndState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState (
    ::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&::GlobalNamespace::MultiplayerLevelCompletionResults::get_playerLevelEndState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe49b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                                                                               "get_playerLevelEndState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.get_playerLevelEndReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason (
    ::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&::GlobalNamespace::MultiplayerLevelCompletionResults::get_playerLevelEndReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe49b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                                                                               "get_playerLevelEndReason", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.get_levelCompletionResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LevelCompletionResults* (::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(
    &::GlobalNamespace::MultiplayerLevelCompletionResults::get_levelCompletionResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe49b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                                                                               "get_levelCompletionResults", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.get_hasAnyResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(
    &::GlobalNamespace::MultiplayerLevelCompletionResults::get_hasAnyResults)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe49b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                                                                               "get_hasAnyResults", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.get_failedOrGivenUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(
    &::GlobalNamespace::MultiplayerLevelCompletionResults::get_failedOrGivenUp)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe49b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                                                                               "get_failedOrGivenUp", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(
    &::GlobalNamespace::MultiplayerLevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe49b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelCompletionResults::*)(
    ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState, ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason,
    ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::MultiplayerLevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xe49b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelCompletionResults::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::MultiplayerLevelCompletionResults::Serialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe49b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerLevelCompletionResults* (
    ::GlobalNamespace::MultiplayerLevelCompletionResults::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::MultiplayerLevelCompletionResults::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xe49bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(), "CreateFromSerializedData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MultiplayerLevelCompletionResults::*)(::System::Object*)>(
    &::GlobalNamespace::MultiplayerLevelCompletionResults::CompareTo)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xe49ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(), "CompareTo",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.HasAnyResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState)>(
    &::GlobalNamespace::MultiplayerLevelCompletionResults::HasAnyResult)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe49b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(), "HasAnyResult", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>"
constexpr GlobalNamespace::MultiplayerLevelCompletionResults::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
constexpr GlobalNamespace::MultiplayerLevelCompletionResults::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState& GlobalNamespace::MultiplayerLevelCompletionResults::__get__playerLevelEndState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerLevelEndState;
}
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState const& GlobalNamespace::MultiplayerLevelCompletionResults::__get__playerLevelEndState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerLevelEndState;
}
constexpr void GlobalNamespace::MultiplayerLevelCompletionResults::__set__playerLevelEndState(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____playerLevelEndState = value;
}
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason& GlobalNamespace::MultiplayerLevelCompletionResults::__get__playerLevelEndReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerLevelEndReason;
}
constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const& GlobalNamespace::MultiplayerLevelCompletionResults::__get__playerLevelEndReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerLevelEndReason;
}
constexpr void GlobalNamespace::MultiplayerLevelCompletionResults::__set__playerLevelEndReason(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____playerLevelEndReason = value;
}
constexpr ::GlobalNamespace::LevelCompletionResults*& GlobalNamespace::MultiplayerLevelCompletionResults::__get__levelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____levelCompletionResults;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> const& GlobalNamespace::MultiplayerLevelCompletionResults::__get__levelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____levelCompletionResults;
}
constexpr void GlobalNamespace::MultiplayerLevelCompletionResults::__set__levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelCompletionResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState GlobalNamespace::MultiplayerLevelCompletionResults::get_playerLevelEndState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                                                                             "get_playerLevelEndState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason GlobalNamespace::MultiplayerLevelCompletionResults::get_playerLevelEndReason() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                                                                             "get_playerLevelEndReason", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::MultiplayerLevelCompletionResults::get_levelCompletionResults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                                                                             "get_levelCompletionResults", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerLevelCompletionResults::get_hasAnyResults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                                                                             "get_hasAnyResults", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerLevelCompletionResults::get_failedOrGivenUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                                                                             "get_failedOrGivenUp", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLevelCompletionResults* GlobalNamespace::MultiplayerLevelCompletionResults::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLevelCompletionResults*>());
}
inline void GlobalNamespace::MultiplayerLevelCompletionResults::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLevelCompletionResults*
GlobalNamespace::MultiplayerLevelCompletionResults::New_ctor(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState playerLevelEndState,
                                                             ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason playerLevelEndReason,
                                                             ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLevelCompletionResults*>(playerLevelEndState, playerLevelEndReason, levelCompletionResults));
}
inline void GlobalNamespace::MultiplayerLevelCompletionResults::_ctor(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState playerLevelEndState,
                                                                      ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason playerLevelEndReason,
                                                                      ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerLevelEndState, playerLevelEndReason, levelCompletionResults);
}
inline void GlobalNamespace::MultiplayerLevelCompletionResults::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline ::GlobalNamespace::MultiplayerLevelCompletionResults* GlobalNamespace::MultiplayerLevelCompletionResults::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(), "CreateFromSerializedData",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerLevelCompletionResults*, false>(this, ___internal_method, reader);
}
inline int32_t GlobalNamespace::MultiplayerLevelCompletionResults::CompareTo(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(), "CompareTo",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::MultiplayerLevelCompletionResults::HasAnyResult(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState playerLevelEndState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(), "HasAnyResult", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, playerLevelEndState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelCompletionResults() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
