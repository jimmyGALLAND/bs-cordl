#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkStatisticsState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "GlobalNamespace/zzzz__NetworkStatisticsState_def.hpp"
#include "GlobalNamespace/zzzz__NetworkStatisticsDelta_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xe4d0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate::*)(
    ByRef<::GlobalNamespace::NetworkStatisticsState>)>(&::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe4d198;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate::*)(ByRef<::GlobalNamespace::NetworkStatisticsState>, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xe4d1ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate::*)(
    ByRef<::GlobalNamespace::NetworkStatisticsState>, ::System::IAsyncResult*)>(&::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe4d238;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate* GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                          void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*>(object, method));
}
inline void GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate::Invoke(ByRef<::GlobalNamespace::NetworkStatisticsState> statisticsState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NetworkStatisticsState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statisticsState);
}
inline ::System::IAsyncResult* GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate::BeginInvoke(ByRef<::GlobalNamespace::NetworkStatisticsState> statisticsState,
                                                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NetworkStatisticsState>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, statisticsState, callback, object);
}
inline void GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate::EndInvoke(ByRef<::GlobalNamespace::NetworkStatisticsState> statisticsState, ::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate*>::get(), "EndInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NetworkStatisticsState>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statisticsState, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate::__NetworkStatisticsState__NetworkStatisticsUpdateDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::NetworkStatisticsState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkStatisticsState::*)(
    int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t)>(&::GlobalNamespace::NetworkStatisticsState::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe4d024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkStatisticsState.op_Subtraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NetworkStatisticsDelta (*)(
    ByRef<::GlobalNamespace::NetworkStatisticsState>, ByRef<::GlobalNamespace::NetworkStatisticsState>)>(&::GlobalNamespace::NetworkStatisticsState::op_Subtraction)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe4d04c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState>::get(), "op_Subtraction", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NetworkStatisticsState>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NetworkStatisticsState>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkStatisticsState::_ctor(int64_t packetsSent, int64_t packetsReceived, int64_t bytesSent, int64_t bytesReceived, int64_t packetsLost, int64_t packetsSentEncrypted,
                                                           int64_t packetsSentPlaintext, int64_t packetsSentRejected, int64_t packetsReceivedEncrypted, int64_t packetsReceivedPlaintext,
                                                           int64_t packetsReceivedRejected, int64_t encryptionProcessingTime, int64_t decryptionProcessingTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packetsSent, packetsReceived, bytesSent, bytesReceived, packetsLost, packetsSentEncrypted, packetsSentPlaintext,
                                                          packetsSentRejected, packetsReceivedEncrypted, packetsReceivedPlaintext, packetsReceivedRejected, encryptionProcessingTime,
                                                          decryptionProcessingTime);
}
inline ::GlobalNamespace::NetworkStatisticsDelta GlobalNamespace::NetworkStatisticsState::op_Subtraction(ByRef<::GlobalNamespace::NetworkStatisticsState> a,
                                                                                                         ByRef<::GlobalNamespace::NetworkStatisticsState> b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsState>::get(), "op_Subtraction", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NetworkStatisticsState>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NetworkStatisticsState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkStatisticsDelta, false>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "packetsSent", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsReceived", ty: "int64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "bytesSent", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytesReceived", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "packetsLost", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsSentEncrypted", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "packetsSentPlaintext", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsSentRejected", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "packetsReceivedEncrypted", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsReceivedPlaintext", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "packetsReceivedRejected", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "encryptionProcessingTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "decryptionProcessingTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NetworkStatisticsState::NetworkStatisticsState(int64_t packetsSent, int64_t packetsReceived, int64_t bytesSent, int64_t bytesReceived, int64_t packetsLost,
                                                                            int64_t packetsSentEncrypted, int64_t packetsSentPlaintext, int64_t packetsSentRejected, int64_t packetsReceivedEncrypted,
                                                                            int64_t packetsReceivedPlaintext, int64_t packetsReceivedRejected, int64_t encryptionProcessingTime,
                                                                            int64_t decryptionProcessingTime) noexcept {
  this->packetsSent = packetsSent;
  this->packetsReceived = packetsReceived;
  this->bytesSent = bytesSent;
  this->bytesReceived = bytesReceived;
  this->packetsLost = packetsLost;
  this->packetsSentEncrypted = packetsSentEncrypted;
  this->packetsSentPlaintext = packetsSentPlaintext;
  this->packetsSentRejected = packetsSentRejected;
  this->packetsReceivedEncrypted = packetsReceivedEncrypted;
  this->packetsReceivedPlaintext = packetsReceivedPlaintext;
  this->packetsReceivedRejected = packetsReceivedRejected;
  this->encryptionProcessingTime = encryptionProcessingTime;
  this->decryptionProcessingTime = decryptionProcessingTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkStatisticsState::NetworkStatisticsState() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
