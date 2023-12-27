#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_SessionSyncInfo_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Viewport_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionSyncData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionSyncData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_SessionSyncData__Status::__HEU_SessionSyncData__Status(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_SessionSyncData__Status::__HEU_SessionSyncData__Status() {}
constexpr ::HoudiniEngineUnity::__HEU_SessionSyncData__Status HoudiniEngineUnity::__HEU_SessionSyncData__Status::Stopped{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_SessionSyncData__Status HoudiniEngineUnity::__HEU_SessionSyncData__Status::Started{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_SessionSyncData__Status HoudiniEngineUnity::__HEU_SessionSyncData__Status::Connecting{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::__HEU_SessionSyncData__Status HoudiniEngineUnity::__HEU_SessionSyncData__Status::Initializing{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::__HEU_SessionSyncData__Status HoudiniEngineUnity::__HEU_SessionSyncData__Status::Connected{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionSyncData.get_SyncStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_SessionSyncData__Status (::HoudiniEngineUnity::HEU_SessionSyncData::*)()>(
    &::HoudiniEngineUnity::HEU_SessionSyncData::get_SyncStatus)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21a53d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionSyncData*>::get(),
                                                                               "get_SyncStatus", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionSyncData.set_SyncStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionSyncData::*)(::HoudiniEngineUnity::__HEU_SessionSyncData__Status)>(
    &::HoudiniEngineUnity::HEU_SessionSyncData::set_SyncStatus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21a53e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionSyncData*>::get(), "set_SyncStatus", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_SessionSyncData__Status>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionSyncData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionSyncData::*)()>(&::HoudiniEngineUnity::HEU_SessionSyncData::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x21a2764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionSyncData*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& HoudiniEngineUnity::HEU_SessionSyncData::__get__status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____status;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_SessionSyncData::__get__status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____status;
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__status(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____status = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_SessionSyncData::__get__timeLastUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timeLastUpdate;
}
constexpr float_t const& HoudiniEngineUnity::HEU_SessionSyncData::__get__timeLastUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timeLastUpdate;
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__timeLastUpdate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____timeLastUpdate = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_SessionSyncData::__get__timeStartConnection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timeStartConnection;
}
constexpr float_t const& HoudiniEngineUnity::HEU_SessionSyncData::__get__timeStartConnection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____timeStartConnection;
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__timeStartConnection(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____timeStartConnection = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_SessionSyncData::__get__newNodeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____newNodeName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_SessionSyncData::__get__newNodeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____newNodeName;
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__newNodeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____newNodeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_SessionSyncData::__get__nodeTypeIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nodeTypeIndex;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_SessionSyncData::__get__nodeTypeIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nodeTypeIndex;
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__nodeTypeIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____nodeTypeIndex = value;
}
constexpr bool& HoudiniEngineUnity::HEU_SessionSyncData::__get__validForConnection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____validForConnection;
}
constexpr bool const& HoudiniEngineUnity::HEU_SessionSyncData::__get__validForConnection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____validForConnection;
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__validForConnection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____validForConnection = value;
}
constexpr ::HoudiniEngineUnity::HAPI_Viewport& HoudiniEngineUnity::HEU_SessionSyncData::__get__viewportHAPI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____viewportHAPI;
}
constexpr ::HoudiniEngineUnity::HAPI_Viewport const& HoudiniEngineUnity::HEU_SessionSyncData::__get__viewportHAPI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____viewportHAPI;
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__viewportHAPI(::HoudiniEngineUnity::HAPI_Viewport value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____viewportHAPI = value;
}
constexpr ::HoudiniEngineUnity::HAPI_Viewport& HoudiniEngineUnity::HEU_SessionSyncData::__get__viewportLocal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____viewportLocal;
}
constexpr ::HoudiniEngineUnity::HAPI_Viewport const& HoudiniEngineUnity::HEU_SessionSyncData::__get__viewportLocal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____viewportLocal;
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__viewportLocal(::HoudiniEngineUnity::HAPI_Viewport value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____viewportLocal = value;
}
constexpr bool& HoudiniEngineUnity::HEU_SessionSyncData::__get__viewportJustUpdated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____viewportJustUpdated;
}
constexpr bool const& HoudiniEngineUnity::HEU_SessionSyncData::__get__viewportJustUpdated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____viewportJustUpdated;
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__viewportJustUpdated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____viewportJustUpdated = value;
}
constexpr ::HoudiniEngineUnity::HAPI_SessionSyncInfo& HoudiniEngineUnity::HEU_SessionSyncData::__get__syncInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____syncInfo;
}
constexpr ::HoudiniEngineUnity::HAPI_SessionSyncInfo const& HoudiniEngineUnity::HEU_SessionSyncData::__get__syncInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____syncInfo;
}
constexpr void HoudiniEngineUnity::HEU_SessionSyncData::__set__syncInfo(::HoudiniEngineUnity::HAPI_SessionSyncInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____syncInfo = value;
}
inline ::HoudiniEngineUnity::__HEU_SessionSyncData__Status HoudiniEngineUnity::HEU_SessionSyncData::get_SyncStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionSyncData*>::get(),
                                                                             "get_SyncStatus", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_SessionSyncData__Status, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_SessionSyncData::set_SyncStatus(::HoudiniEngineUnity::__HEU_SessionSyncData__Status value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionSyncData*>::get(), "set_SyncStatus", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_SessionSyncData__Status>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HoudiniEngineUnity::HEU_SessionSyncData* HoudiniEngineUnity::HEU_SessionSyncData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_SessionSyncData*>());
}
inline void HoudiniEngineUnity::HEU_SessionSyncData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionSyncData*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_SessionSyncData::HEU_SessionSyncData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
