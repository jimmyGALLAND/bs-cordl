#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsMac._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsMac::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsMac::_ctor)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0xfae054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsMac.get_MacSecret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsMac::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsMac::get_MacSecret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfae504;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsMac.get_Size
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsMac::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsMac::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfae50c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsMac.CalculateMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsMac::*)(
    int64_t, uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsMac::CalculateMac)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xfae514;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsMac.CalculateMacConstantTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsMac::*)(
    int64_t, uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::TlsMac::CalculateMacConstantTime)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xfae9dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsMac.GetDigestBlockCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsMac::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsMac::GetDigestBlockCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xfaec60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsMac.Truncate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsMac::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Tls::TlsMac::Truncate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xfaec70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& Org::BouncyCastle::Crypto::Tls::TlsMac::__get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___context;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> const& Org::BouncyCastle::Crypto::Tls::TlsMac::__get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___context;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsMac::__set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::TlsMac::__get_secret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___secret;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::TlsMac::__get_secret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___secret;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsMac::__set_secret(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___secret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::Tls::TlsMac::__get_mac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mac;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& Org::BouncyCastle::Crypto::Tls::TlsMac::__get_mac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mac;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsMac::__set_mac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::TlsMac::__get_digestBlockSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___digestBlockSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::TlsMac::__get_digestBlockSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___digestBlockSize;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsMac::__set_digestBlockSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___digestBlockSize = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::TlsMac::__get_digestOverhead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___digestOverhead;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::TlsMac::__get_digestOverhead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___digestOverhead;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsMac::__set_digestOverhead(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___digestOverhead = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::TlsMac::__get_macLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___macLength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::TlsMac::__get_macLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___macLength;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsMac::__set_macLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___macLength = value;
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsMac* Org::BouncyCastle::Crypto::Tls::TlsMac::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t keyOff, int32_t keyLen) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsMac*>(context, digest, key, keyOff, keyLen));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsMac::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> key,
                                                          int32_t keyOff, int32_t keyLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, digest, key, keyOff, keyLen);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsMac::get_MacSecret() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(), "get_MacSecret",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsMac::get_Size() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(), "get_Size",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsMac::CalculateMac(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> message, int32_t offset,
                                                                                                 int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(), "CalculateMac", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, seqNo, type, message, offset, length);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsMac::CalculateMacConstantTime(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> message, int32_t offset,
                                                                                                             int32_t length, int32_t fullLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> dummyData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(), "CalculateMacConstantTime", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, seqNo, type, message, offset, length, fullLength, dummyData);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsMac::GetDigestBlockCount(int32_t inputLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(), "GetDigestBlockCount",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, inputLength);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsMac::Truncate(::ArrayW<uint8_t, ::Array<uint8_t>*> bs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsMac*>::get(), "Truncate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, bs);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac::TlsMac() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
