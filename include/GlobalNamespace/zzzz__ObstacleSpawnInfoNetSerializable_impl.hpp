#pragma once
#include "GlobalNamespace/zzzz__NoteLineLayer_impl.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnInfoNetSerializable_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObstacleSpawnInfoNetSerializable.Obtain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ObstacleSpawnInfoNetSerializable* (*)()>(
    &::GlobalNamespace::ObstacleSpawnInfoNetSerializable::Obtain)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x12a51a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(),
                                                                               "Obtain", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSpawnInfoNetSerializable.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ObstacleSpawnInfoNetSerializable* (
    ::GlobalNamespace::ObstacleSpawnInfoNetSerializable::*)(float_t, int32_t, ::GlobalNamespace::NoteLineLayer, float_t, int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
                                                            ::UnityEngine::Vector3, float_t, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::ObstacleSpawnInfoNetSerializable::Init)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x12a520c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSpawnInfoNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleSpawnInfoNetSerializable::*)()>(
    &::GlobalNamespace::ObstacleSpawnInfoNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12a532c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSpawnInfoNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::ObstacleSpawnInfoNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x12a5384;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSpawnInfoNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::ObstacleSpawnInfoNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x12a5488;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(), 11));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___time;
}
constexpr float_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___time;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__set_time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___time = value;
}
constexpr int32_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_lineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lineIndex;
}
constexpr int32_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_lineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lineIndex;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__set_lineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lineIndex = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_lineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lineLayer;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_lineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lineLayer;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__set_lineLayer(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lineLayer = value;
}
constexpr float_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___duration;
}
constexpr float_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___duration;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__set_duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___duration = value;
}
constexpr int32_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___width;
}
constexpr int32_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___width;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__set_width(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___width = value;
}
constexpr int32_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___height;
}
constexpr int32_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___height;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__set_height(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___height = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_moveStartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___moveStartPos;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_moveStartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___moveStartPos;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__set_moveStartPos(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___moveStartPos = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_moveEndPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___moveEndPos;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_moveEndPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___moveEndPos;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__set_moveEndPos(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___moveEndPos = value;
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_jumpEndPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___jumpEndPos;
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_jumpEndPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___jumpEndPos;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__set_jumpEndPos(::GlobalNamespace::Vector3Serializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___jumpEndPos = value;
}
constexpr float_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_obstacleHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___obstacleHeight;
}
constexpr float_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_obstacleHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___obstacleHeight;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__set_obstacleHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___obstacleHeight = value;
}
constexpr float_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_moveDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___moveDuration;
}
constexpr float_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_moveDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___moveDuration;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__set_moveDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___moveDuration = value;
}
constexpr float_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_jumpDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___jumpDuration;
}
constexpr float_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_jumpDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___jumpDuration;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__set_jumpDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___jumpDuration = value;
}
constexpr float_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_noteLinesDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___noteLinesDistance;
}
constexpr float_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_noteLinesDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___noteLinesDistance;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__set_noteLinesDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___noteLinesDistance = value;
}
constexpr float_t& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rotation;
}
constexpr float_t const& GlobalNamespace::ObstacleSpawnInfoNetSerializable::__get_rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rotation;
}
constexpr void GlobalNamespace::ObstacleSpawnInfoNetSerializable::__set_rotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___rotation = value;
}
inline ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* GlobalNamespace::ObstacleSpawnInfoNetSerializable::Obtain() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(),
                                                                             "Obtain", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* GlobalNamespace::ObstacleSpawnInfoNetSerializable::Init(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer,
                                                                                                                    float_t duration, int32_t width, int32_t height,
                                                                                                                    ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos,
                                                                                                                    ::UnityEngine::Vector3 jumpEndPos, float_t obstacleHeight, float_t moveDuration,
                                                                                                                    float_t jumpDuration, float_t noteLinesDistance, float_t rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*, false>(
      this, ___internal_method, time, lineIndex, lineLayer, duration, width, height, moveStartPos, moveEndPos, jumpEndPos, obstacleHeight, moveDuration, jumpDuration, noteLinesDistance, rotation);
}
inline ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* GlobalNamespace::ObstacleSpawnInfoNetSerializable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>());
}
inline void GlobalNamespace::ObstacleSpawnInfoNetSerializable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleSpawnInfoNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::ObstacleSpawnInfoNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleSpawnInfoNetSerializable::ObstacleSpawnInfoNetSerializable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
