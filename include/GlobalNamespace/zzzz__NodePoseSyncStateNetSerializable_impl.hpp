#pragma once
#include "GlobalNamespace/zzzz__NodePoseSyncState_impl.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "GlobalNamespace/zzzz__ISyncStateSerializable_1_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateNetSerializable.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::NodePoseSyncStateNetSerializable*>* (*)()>(
    &::GlobalNamespace::NodePoseSyncStateNetSerializable::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe59e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(),
                                                                               "get_pool", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateNetSerializable.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SyncStateId (::GlobalNamespace::NodePoseSyncStateNetSerializable::*)()>(
    &::GlobalNamespace::NodePoseSyncStateNetSerializable::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe59e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(),
                                                                               "get_id", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateNetSerializable.set_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateNetSerializable::*)(::GlobalNamespace::SyncStateId)>(
    &::GlobalNamespace::NodePoseSyncStateNetSerializable::set_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe59e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(), "set_id", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateNetSerializable.get_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::NodePoseSyncStateNetSerializable::*)()>(
    &::GlobalNamespace::NodePoseSyncStateNetSerializable::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe59e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(),
                                                                               "get_time", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateNetSerializable.set_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateNetSerializable::*)(int64_t)>(
    &::GlobalNamespace::NodePoseSyncStateNetSerializable::set_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe59e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(), "set_time",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateNetSerializable.get_state
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NodePoseSyncState (::GlobalNamespace::NodePoseSyncStateNetSerializable::*)()>(
    &::GlobalNamespace::NodePoseSyncStateNetSerializable::get_state)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe59e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(),
                                                                               "get_state", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateNetSerializable.set_state
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateNetSerializable::*)(::GlobalNamespace::NodePoseSyncState)>(
    &::GlobalNamespace::NodePoseSyncStateNetSerializable::set_state)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xe59e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(), "set_state", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::NodePoseSyncStateNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xe59eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::NodePoseSyncStateNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe59f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateNetSerializable.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateNetSerializable::*)()>(
    &::GlobalNamespace::NodePoseSyncStateNetSerializable::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xe59f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(),
                                                                               "Release", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateNetSerializable::*)()>(
    &::GlobalNamespace::NodePoseSyncStateNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe59fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::NodePoseSyncStateNetSerializable::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::NodePoseSyncStateNetSerializable::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::NodePoseSyncState>"
constexpr GlobalNamespace::NodePoseSyncStateNetSerializable::operator ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::NodePoseSyncState>*() noexcept {
  return static_cast<::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::NodePoseSyncState>*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::NodePoseSyncState& GlobalNamespace::NodePoseSyncStateNetSerializable::__get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____state;
}
constexpr ::GlobalNamespace::NodePoseSyncState const& GlobalNamespace::NodePoseSyncStateNetSerializable::__get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____state;
}
constexpr void GlobalNamespace::NodePoseSyncStateNetSerializable::__set__state(::GlobalNamespace::NodePoseSyncState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____state = value;
}
constexpr ::GlobalNamespace::SyncStateId& GlobalNamespace::NodePoseSyncStateNetSerializable::__get__id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____id_k__BackingField;
}
constexpr ::GlobalNamespace::SyncStateId const& GlobalNamespace::NodePoseSyncStateNetSerializable::__get__id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____id_k__BackingField;
}
constexpr void GlobalNamespace::NodePoseSyncStateNetSerializable::__set__id_k__BackingField(::GlobalNamespace::SyncStateId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____id_k__BackingField = value;
}
constexpr int64_t& GlobalNamespace::NodePoseSyncStateNetSerializable::__get__time_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____time_k__BackingField;
}
constexpr int64_t const& GlobalNamespace::NodePoseSyncStateNetSerializable::__get__time_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____time_k__BackingField;
}
constexpr void GlobalNamespace::NodePoseSyncStateNetSerializable::__set__time_k__BackingField(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____time_k__BackingField = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::NodePoseSyncStateNetSerializable*>* GlobalNamespace::NodePoseSyncStateNetSerializable::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(),
                                                                             "get_pool", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::NodePoseSyncStateNetSerializable*>*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::SyncStateId GlobalNamespace::NodePoseSyncStateNetSerializable::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(),
                                                                             "get_id", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SyncStateId, false>(this, ___internal_method);
}
inline void GlobalNamespace::NodePoseSyncStateNetSerializable::set_id(::GlobalNamespace::SyncStateId value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(), "set_id", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::NodePoseSyncStateNetSerializable::get_time() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(),
                                                                             "get_time", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::NodePoseSyncStateNetSerializable::set_time(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(), "set_time",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NodePoseSyncState GlobalNamespace::NodePoseSyncStateNetSerializable::get_state() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(),
                                                                             "get_state", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NodePoseSyncState, false>(this, ___internal_method);
}
inline void GlobalNamespace::NodePoseSyncStateNetSerializable::set_state(::GlobalNamespace::NodePoseSyncState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(), "set_state", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::NodePoseSyncStateNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::NodePoseSyncStateNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::NodePoseSyncStateNetSerializable::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(),
                                                                             "Release", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NodePoseSyncStateNetSerializable* GlobalNamespace::NodePoseSyncStateNetSerializable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NodePoseSyncStateNetSerializable*>());
}
inline void GlobalNamespace::NodePoseSyncStateNetSerializable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateNetSerializable*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NodePoseSyncStateNetSerializable::NodePoseSyncStateNetSerializable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
