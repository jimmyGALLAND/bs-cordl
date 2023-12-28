#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsRecordLayer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ProtocolVersion_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DatagramTransport_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsHandshakeRetransmit_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPeer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsEpoch_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCloseable_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ByteQueue_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Timeout_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.SendDatagram
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Crypto::Tls::DatagramTransport*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
                                                                                           int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::SendDatagram)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xf6dfdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "SendDatagram", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DatagramTransport*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(
    ::Org::BouncyCastle::Crypto::Tls::DatagramTransport*, ::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Tls::TlsPeer*, uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xf695d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DatagramTransport*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsPeer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.get_IsClosed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::get_IsClosed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xf6e09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                                               "get_IsClosed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.SetPlaintextLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::SetPlaintextLimit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf6e0b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.get_ReadEpoch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::get_ReadEpoch)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xf6e0d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.get_ReadVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::get_ReadVersion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xf6e0f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.set_ReadVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::set_ReadVersion)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf6e10c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.SetWriteVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::SetWriteVersion)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf6e130;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.InitPendingEpoch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(::Org::BouncyCastle::Crypto::Tls::TlsCipher*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::InitPendingEpoch)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xf6e154;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.HandshakeSuccessful
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(
    ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::HandshakeSuccessful)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xf6e214;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.ResetWriteEpoch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::ResetWriteEpoch)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xf6e2f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.GetReceiveLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::GetReceiveLimit)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xf6e304;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.GetSendLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::GetSendLimit)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xf6e474;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.Receive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Receive)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xf6e5e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Send)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xf6eedc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Close)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf6f2d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.Failed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Failed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf6f4b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.Fail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Fail)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xf6f4f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.Warn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(uint8_t, ::StringW)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Warn)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xf6f6ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.CloseTransport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::CloseTransport)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xf6f358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                                               "CloseTransport", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.RaiseAlert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(uint8_t, uint8_t, ::StringW, ::System::Exception*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::RaiseAlert)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xf6f5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "RaiseAlert", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.ReceiveDatagram
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::ReceiveDatagram)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xf6f700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "ReceiveDatagram", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.ProcessRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(
    int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::ProcessRecord)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0xf6e97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "ProcessRecord", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.ReceiveRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::ReceiveRecord)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xf6e7ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "ReceiveRecord", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.SendRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(
    uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::SendRecord)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xf6f054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "SendRecord", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.GetMacSequenceNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int32_t, int64_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::GetMacSequenceNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf6f8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "GetMacSequenceNumber", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::DatagramTransport"
constexpr Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::operator ::Org::BouncyCastle::Crypto::Tls::DatagramTransport*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::DatagramTransport*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCloseable"
constexpr Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::operator ::Org::BouncyCastle::Crypto::Tls::TlsCloseable*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCloseable*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::DatagramTransport*& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mTransport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTransport;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DatagramTransport*> const& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mTransport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mTransport;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mTransport(::Org::BouncyCastle::Crypto::Tls::DatagramTransport* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mTransport)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mContext;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> const& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mContext;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPeer*& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mPeer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPeer;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsPeer*> const& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mPeer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPeer;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mPeer(::Org::BouncyCastle::Crypto::Tls::TlsPeer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPeer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ByteQueue*& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mRecordQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRecordQueue;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ByteQueue*> const& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mRecordQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRecordQueue;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mRecordQueue(::Org::BouncyCastle::Crypto::Tls::ByteQueue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mRecordQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mClosed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mClosed;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mClosed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mClosed;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mClosed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mClosed = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mFailed;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mFailed;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mFailed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mFailed = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mReadVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReadVersion;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*> const& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mReadVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReadVersion;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mReadVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mReadVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mWriteVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mWriteVersion;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*> const& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mWriteVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mWriteVersion;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mWriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mWriteVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mInHandshake() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInHandshake;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mInHandshake() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInHandshake;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mInHandshake(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mInHandshake = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mPlaintextLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPlaintextLimit;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mPlaintextLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPlaintextLimit;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mPlaintextLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPlaintextLimit = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mCurrentEpoch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCurrentEpoch;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*> const& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mCurrentEpoch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCurrentEpoch;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mCurrentEpoch(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mCurrentEpoch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mPendingEpoch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPendingEpoch;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*> const& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mPendingEpoch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPendingEpoch;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mPendingEpoch(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPendingEpoch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mReadEpoch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReadEpoch;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*> const& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mReadEpoch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReadEpoch;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mReadEpoch(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mReadEpoch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mWriteEpoch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mWriteEpoch;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*> const& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mWriteEpoch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mWriteEpoch;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mWriteEpoch(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mWriteEpoch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mRetransmit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRetransmit;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*> const& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mRetransmit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRetransmit;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mRetransmit(::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mRetransmit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mRetransmitEpoch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRetransmitEpoch;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::DtlsEpoch*> const& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mRetransmitEpoch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRetransmitEpoch;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mRetransmitEpoch(::Org::BouncyCastle::Crypto::Tls::DtlsEpoch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mRetransmitEpoch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Timeout*& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mRetransmitTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRetransmitTimeout;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::Timeout*> const& Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mRetransmitTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRetransmitTimeout;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mRetransmitTimeout(::Org::BouncyCastle::Crypto::Tls::Timeout* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mRetransmitTimeout)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::SendDatagram(::Org::BouncyCastle::Crypto::Tls::DatagramTransport* sender, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off,
                                                                          int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "SendDatagram", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DatagramTransport*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sender, buf, off, len);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::New_ctor(::Org::BouncyCastle::Crypto::Tls::DatagramTransport* transport,
                                                                                                                    ::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                    ::Org::BouncyCastle::Crypto::Tls::TlsPeer* peer, uint8_t contentType) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>(transport, context, peer, contentType));
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::_ctor(::Org::BouncyCastle::Crypto::Tls::DatagramTransport* transport, ::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                   ::Org::BouncyCastle::Crypto::Tls::TlsPeer* peer, uint8_t contentType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DatagramTransport*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsPeer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transport, context, peer, contentType);
}
inline bool Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::get_IsClosed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                                             "get_IsClosed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::SetPlaintextLimit(int32_t plaintextLimit) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "SetPlaintextLimit",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, plaintextLimit);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::get_ReadEpoch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                                             "get_ReadEpoch", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::get_ReadVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                                             "get_ReadVersion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::set_ReadVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "set_ReadVersion", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::SetWriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion* writeVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "SetWriteVersion", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writeVersion);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::InitPendingEpoch(::Org::BouncyCastle::Crypto::Tls::TlsCipher* pendingCipher) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "InitPendingEpoch", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pendingCipher);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::HandshakeSuccessful(::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit* retransmit) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "HandshakeSuccessful", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, retransmit);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::ResetWriteEpoch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                                             "ResetWriteEpoch", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::GetReceiveLimit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                                             "GetReceiveLimit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::GetSendLimit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                                             "GetSendLimit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Receive(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, int32_t waitMillis) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "Receive", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buf, off, len, waitMillis);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Send(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "Send", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf, off, len);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "Close",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Failed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                                             "Failed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Fail(uint8_t alertDescription) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "Fail", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alertDescription);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Warn(uint8_t alertDescription, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "Warn", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alertDescription, message);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::CloseTransport() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(),
                                                                             "CloseTransport", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::RaiseAlert(uint8_t alertLevel, uint8_t alertDescription, ::StringW message, ::System::Exception* cause) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "RaiseAlert", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alertLevel, alertDescription, message, cause);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::ReceiveDatagram(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, int32_t waitMillis) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "ReceiveDatagram", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buf, off, len, waitMillis);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::ProcessRecord(int32_t received, ::ArrayW<uint8_t, ::Array<uint8_t>*> record, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "ProcessRecord", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, received, record, buf, off);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::ReceiveRecord(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, int32_t waitMillis) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "ReceiveRecord", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buf, off, len, waitMillis);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::SendRecord(uint8_t contentType, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "SendRecord", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contentType, buf, off, len);
}
inline int64_t Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::GetMacSequenceNumber(int32_t epoch, int64_t sequence_number) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>::get(), "GetMacSequenceNumber", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, epoch, sequence_number);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::DtlsRecordLayer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
