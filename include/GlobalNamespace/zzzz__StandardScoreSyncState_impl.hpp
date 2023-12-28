#pragma once
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IEquatableByReference_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
#include "GlobalNamespace/zzzz__IStateTable_3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__StandardScoreSyncState__Score::__StandardScoreSyncState__Score(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandardScoreSyncState__Score::__StandardScoreSyncState__Score() {}
constexpr ::GlobalNamespace::__StandardScoreSyncState__Score GlobalNamespace::__StandardScoreSyncState__Score::ModifiedScore{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__StandardScoreSyncState__Score GlobalNamespace::__StandardScoreSyncState__Score::MultipliedScore{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__StandardScoreSyncState__Score GlobalNamespace::__StandardScoreSyncState__Score::ImmediateMaxPossibleMultipliedScore{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__StandardScoreSyncState__Score GlobalNamespace::__StandardScoreSyncState__Score::Combo{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__StandardScoreSyncState__Score GlobalNamespace::__StandardScoreSyncState__Score::Multiplier{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__StandardScoreSyncState__Score GlobalNamespace::__StandardScoreSyncState__Score::Count{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.SetState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardScoreSyncState::*)(::GlobalNamespace::__StandardScoreSyncState__Score, int32_t)>(
    &::GlobalNamespace::StandardScoreSyncState::SetState)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe5a584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "SetState", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StandardScoreSyncState__Score>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.GetDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StandardScoreSyncState (::GlobalNamespace::StandardScoreSyncState::*)(
    ByRef<::GlobalNamespace::StandardScoreSyncState>)>(&::GlobalNamespace::StandardScoreSyncState::GetDelta)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xe5a5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "GetDelta", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::StandardScoreSyncState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.ApplyDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StandardScoreSyncState (::GlobalNamespace::StandardScoreSyncState::*)(
    ByRef<::GlobalNamespace::StandardScoreSyncState>)>(&::GlobalNamespace::StandardScoreSyncState::ApplyDelta)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xe5a5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "ApplyDelta", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::StandardScoreSyncState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.GetState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::StandardScoreSyncState::*)(::GlobalNamespace::__StandardScoreSyncState__Score)>(
    &::GlobalNamespace::StandardScoreSyncState::GetState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe5a614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "GetState", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StandardScoreSyncState__Score>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardScoreSyncState::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::StandardScoreSyncState::Serialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe5a664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardScoreSyncState::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::StandardScoreSyncState::Deserialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe5a6d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::StandardScoreSyncState::*)(ByRef<::GlobalNamespace::StandardScoreSyncState>)>(
    &::GlobalNamespace::StandardScoreSyncState::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xe5a73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "Equals", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::StandardScoreSyncState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.GetSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::StandardScoreSyncState::*)()>(&::GlobalNamespace::StandardScoreSyncState::GetSize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xe5a798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "GetSize",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__GetDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StandardScoreSyncState (::GlobalNamespace::StandardScoreSyncState::*)(
    ByRef<::GlobalNamespace::StandardScoreSyncState>)>(&::GlobalNamespace::StandardScoreSyncState::IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__GetDelta)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xe5a824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(),
                                                 "IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.GetDelta", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::StandardScoreSyncState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__ApplyDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StandardScoreSyncState (::GlobalNamespace::StandardScoreSyncState::*)(
    ByRef<::GlobalNamespace::StandardScoreSyncState>)>(&::GlobalNamespace::StandardScoreSyncState::IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__ApplyDelta)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xe5a848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(),
                                                 "IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.ApplyDelta", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::StandardScoreSyncState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.IEquatableByReference_StandardScoreSyncState__Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::StandardScoreSyncState::*)(ByRef<::GlobalNamespace::StandardScoreSyncState>)>(
    &::GlobalNamespace::StandardScoreSyncState::IEquatableByReference_StandardScoreSyncState__Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe5a86c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "IEquatableByReference<StandardScoreSyncState>.Equals", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::StandardScoreSyncState>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState,::GlobalNamespace::__StandardScoreSyncState__Score,int32_t>"
constexpr GlobalNamespace::StandardScoreSyncState::operator ::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score,
                                                                                             int32_t>*() {
  return static_cast<::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t>*>(
      static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::StandardScoreSyncState::operator ::LiteNetLib::Utils::INetSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>"
constexpr GlobalNamespace::StandardScoreSyncState::operator ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>*() {
  return static_cast<::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::StandardScoreSyncState::SetState(::GlobalNamespace::__StandardScoreSyncState__Score s, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "SetState", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StandardScoreSyncState__Score>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s, value);
}
inline ::GlobalNamespace::StandardScoreSyncState GlobalNamespace::StandardScoreSyncState::GetDelta(ByRef<::GlobalNamespace::StandardScoreSyncState> stateTable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "GetDelta", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::StandardScoreSyncState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StandardScoreSyncState, false>(this, ___internal_method, stateTable);
}
inline ::GlobalNamespace::StandardScoreSyncState GlobalNamespace::StandardScoreSyncState::ApplyDelta(ByRef<::GlobalNamespace::StandardScoreSyncState> delta) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "ApplyDelta", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::StandardScoreSyncState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StandardScoreSyncState, false>(this, ___internal_method, delta);
}
inline int32_t GlobalNamespace::StandardScoreSyncState::GetState(::GlobalNamespace::__StandardScoreSyncState__Score s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "GetState", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StandardScoreSyncState__Score>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s);
}
inline void GlobalNamespace::StandardScoreSyncState::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::StandardScoreSyncState::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline bool GlobalNamespace::StandardScoreSyncState::Equals(ByRef<::GlobalNamespace::StandardScoreSyncState> other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::StandardScoreSyncState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t GlobalNamespace::StandardScoreSyncState::GetSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "GetSize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardScoreSyncState
GlobalNamespace::StandardScoreSyncState::IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__GetDelta(ByRef<::GlobalNamespace::StandardScoreSyncState> stateTable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(),
                                               "IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.GetDelta", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::StandardScoreSyncState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StandardScoreSyncState, false>(this, ___internal_method, stateTable);
}
inline ::GlobalNamespace::StandardScoreSyncState
GlobalNamespace::StandardScoreSyncState::IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__ApplyDelta(ByRef<::GlobalNamespace::StandardScoreSyncState> delta) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(),
                                               "IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.ApplyDelta", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::StandardScoreSyncState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StandardScoreSyncState, false>(this, ___internal_method, delta);
}
inline bool GlobalNamespace::StandardScoreSyncState::IEquatableByReference_StandardScoreSyncState__Equals(ByRef<::GlobalNamespace::StandardScoreSyncState> other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncState>::get(), "IEquatableByReference<StandardScoreSyncState>.Equals", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::StandardScoreSyncState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "_modifiedScore", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_multipliedScore", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "_immediateMaxPossibleMultipliedScore", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_combo", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_multiplier", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StandardScoreSyncState::StandardScoreSyncState(int32_t _modifiedScore, int32_t _multipliedScore, int32_t _immediateMaxPossibleMultipliedScore, int32_t _combo,
                                                                            int32_t _multiplier) noexcept {
  this->_modifiedScore = _modifiedScore;
  this->_multipliedScore = _multipliedScore;
  this->_immediateMaxPossibleMultipliedScore = _immediateMaxPossibleMultipliedScore;
  this->_combo = _combo;
  this->_multiplier = _multiplier;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardScoreSyncState::StandardScoreSyncState() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
