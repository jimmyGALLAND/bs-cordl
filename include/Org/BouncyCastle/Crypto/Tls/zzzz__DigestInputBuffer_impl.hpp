#pragma once
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DigestInputBuffer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DigestInputBuffer_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf68764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream.WriteByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream::WriteByte)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xf6878c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream::Write)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xf68838;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream*>::get(), 38));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream::__get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___d;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream::__get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___d;
}
constexpr void Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream::__set_d(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___d)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream* Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream::New_ctor(::Org::BouncyCastle::Crypto::IDigest* d) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream*>(d));
}
inline void Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream::_ctor(::Org::BouncyCastle::Crypto::IDigest* d) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, d);
}
inline void Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream::WriteByte(uint8_t b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream*>::get(), "WriteByte",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream*>::get(), "Write", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf, off, len);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::__DigestInputBuffer__DigStream::__DigestInputBuffer__DigStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer.UpdateDigest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::UpdateDigest)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xf66ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*>::get(), "UpdateDigest", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf66a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::UpdateDigest(::Org::BouncyCastle::Crypto::IDigest* d) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*>::get(), "UpdateDigest", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, d);
}
inline ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer* Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*>());
}
inline void Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer::DigestInputBuffer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
