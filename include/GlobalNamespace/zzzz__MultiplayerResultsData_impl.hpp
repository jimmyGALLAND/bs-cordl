#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgesProvider_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsData.get_gameId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MultiplayerResultsData::*)()>(&::GlobalNamespace::MultiplayerResultsData::get_gameId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2257e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsData*>::get(), "get_gameId",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsData.get_localPlayerResultData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerPlayerResultsData* (::GlobalNamespace::MultiplayerResultsData::*)()>(
    &::GlobalNamespace::MultiplayerResultsData::get_localPlayerResultData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2257e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsData*>::get(),
                                                                               "get_localPlayerResultData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsData.get_otherPlayersData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* (
    ::GlobalNamespace::MultiplayerResultsData::*)()>(&::GlobalNamespace::MultiplayerResultsData::get_otherPlayersData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2257e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsData*>::get(),
                                                                               "get_otherPlayersData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsData.get_allPlayersSortedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* (
    ::GlobalNamespace::MultiplayerResultsData::*)()>(&::GlobalNamespace::MultiplayerResultsData::get_allPlayersSortedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2257e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsData*>::get(),
                                                                               "get_allPlayersSortedData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsData::*)(
    ::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*,
    ::GlobalNamespace::MultiplayerBadgesProvider*, ::GlobalNamespace::IMultiplayerSessionManager*)>(&::GlobalNamespace::MultiplayerResultsData::_ctor)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x2247900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerBadgesProvider*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MultiplayerResultsData::__get__gameId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameId;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerResultsData::__get__gameId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameId;
}
constexpr void GlobalNamespace::MultiplayerResultsData::__set__gameId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerPlayerResultsData*& GlobalNamespace::MultiplayerResultsData::__get__localPlayerResultData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____localPlayerResultData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayerResultsData*> const& GlobalNamespace::MultiplayerResultsData::__get__localPlayerResultData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____localPlayerResultData;
}
constexpr void GlobalNamespace::MultiplayerResultsData::__set__localPlayerResultData(::GlobalNamespace::MultiplayerPlayerResultsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localPlayerResultData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*& GlobalNamespace::MultiplayerResultsData::__get__otherPlayersData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____otherPlayersData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*> const&
GlobalNamespace::MultiplayerResultsData::__get__otherPlayersData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____otherPlayersData;
}
constexpr void GlobalNamespace::MultiplayerResultsData::__set__otherPlayersData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____otherPlayersData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*& GlobalNamespace::MultiplayerResultsData::__get__allPlayersSortedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____allPlayersSortedData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*> const&
GlobalNamespace::MultiplayerResultsData::__get__allPlayersSortedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____allPlayersSortedData;
}
constexpr void GlobalNamespace::MultiplayerResultsData::__set__allPlayersSortedData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allPlayersSortedData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::MultiplayerResultsData::get_gameId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsData*>::get(), "get_gameId",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerPlayerResultsData* GlobalNamespace::MultiplayerResultsData::get_localPlayerResultData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsData*>::get(),
                                                                             "get_localPlayerResultData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerPlayerResultsData*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* GlobalNamespace::MultiplayerResultsData::get_otherPlayersData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsData*>::get(),
                                                                             "get_otherPlayersData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* GlobalNamespace::MultiplayerResultsData::get_allPlayersSortedData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsData*>::get(),
                                                                             "get_allPlayersSortedData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerResultsData*
GlobalNamespace::MultiplayerResultsData::New_ctor(::StringW gameId, ::GlobalNamespace::MultiplayerLevelCompletionResults* localPlayerResultData,
                                                  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* otherPlayersResultData,
                                                  ::GlobalNamespace::MultiplayerBadgesProvider* badgesProvider, ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerResultsData*>(gameId, localPlayerResultData, otherPlayersResultData, badgesProvider, multiplayerSessionManager));
}
inline void GlobalNamespace::MultiplayerResultsData::_ctor(::StringW gameId, ::GlobalNamespace::MultiplayerLevelCompletionResults* localPlayerResultData,
                                                           ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* otherPlayersResultData,
                                                           ::GlobalNamespace::MultiplayerBadgesProvider* badgesProvider, ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerBadgesProvider*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameId, localPlayerResultData, otherPlayersResultData, badgesProvider, multiplayerSessionManager);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerResultsData::MultiplayerResultsData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
