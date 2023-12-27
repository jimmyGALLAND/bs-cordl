#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedDataStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedDataStreamGenerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__CipherStream_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerSequenceGenerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::*)(
    ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*, ::Org::BouncyCastle::Crypto::IO::CipherStream*, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*,
    ::Org::BouncyCastle::Asn1::BerSequenceGenerator*, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*)>(
    &::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x11e1dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IO::CipherStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream.WriteByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::*)(uint8_t)>(
    &::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x11e1e3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x11e1e60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::*)()>(
    &::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::Close)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x11e1e84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream*>::get(), 21));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*& Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__get__outer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____outer;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*> const&
Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__get__outer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____outer;
}
constexpr void Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__set__outer(::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream*& Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__get__out() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____out;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IO::CipherStream*> const&
Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__get__out() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____out;
}
constexpr void Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__set__out(::Org::BouncyCastle::Crypto::IO::CipherStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____out)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__get__cGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cGen;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const&
Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__get__cGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cGen;
}
constexpr void Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__set__cGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cGen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__get__envGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____envGen;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const&
Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__get__envGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____envGen;
}
constexpr void Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__set__envGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____envGen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__get__eiGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eiGen;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::BerSequenceGenerator*> const&
Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__get__eiGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eiGen;
}
constexpr void Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__set__eiGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eiGen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream* Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::New_ctor(
    ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* outer, ::Org::BouncyCastle::Crypto::IO::CipherStream* outStream, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
    ::Org::BouncyCastle::Asn1::BerSequenceGenerator* envGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream*>(outer, outStream, cGen, envGen, eiGen));
}
inline void Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::_ctor(::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* outer,
                                                                                                           ::Org::BouncyCastle::Crypto::IO::CipherStream* outStream,
                                                                                                           ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
                                                                                                           ::Org::BouncyCastle::Asn1::BerSequenceGenerator* envGen,
                                                                                                           ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IO::CipherStream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outer, outStream, cGen, envGen, eiGen);
}
inline void Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::WriteByte(uint8_t b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream*>::get(),
                                  "WriteByte", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream*>::get(), "Write", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytes, off, len);
}
inline void Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::Close() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream*>::get(), "Close",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)()>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x11dfc5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x11dfcb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.SetBufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::SetBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11dfd1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(), "SetBufferSize",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.SetBerEncodeRecipients
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(bool)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::SetBerEncodeRecipients)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11dfd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(), "SetBerEncodeRecipients",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)()>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::get_Version)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x11dfd30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(), "get_Version",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW, ::Org::BouncyCastle::Crypto::CipherKeyGenerator*)>(
        &::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x11dfdb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(), "Open", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(::System::IO::Stream*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Crypto::ICipherParameters*,
                                                                  ::Org::BouncyCastle::Asn1::Asn1EncodableVector*)>(&::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x11e03b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(), "Open", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW)>(&::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x11e0c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(), "Open", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW, int32_t)>(&::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x10e0;
  constexpr static std::size_t addrs = 0x11e0d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(), "Open", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__get__originatorInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____originatorInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__get__originatorInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____originatorInfo;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__set__originatorInfo(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____originatorInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__get__unprotectedAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____unprotectedAttributes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__get__unprotectedAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____unprotectedAttributes;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__set__unprotectedAttributes(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unprotectedAttributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__get__bufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bufferSize;
}
constexpr int32_t const& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__get__bufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bufferSize;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__set__bufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____bufferSize = value;
}
constexpr bool& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__get__berEncodeRecipientSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____berEncodeRecipientSet;
}
constexpr bool const& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__get__berEncodeRecipientSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____berEncodeRecipientSet;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__set__berEncodeRecipientSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____berEncodeRecipientSet = value;
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator* Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>());
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator* Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(rand));
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rand);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::SetBufferSize(int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(), "SetBufferSize",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferSize);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::SetBerEncodeRecipients(bool berEncodeRecipientSet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(), "SetBerEncodeRecipients",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, berEncodeRecipientSet);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(),
                                                                             "get_Version", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*, false>(this, ___internal_method);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open(::System::IO::Stream* outStream, ::StringW encryptionOid,
                                                                                           ::Org::BouncyCastle::Crypto::CipherKeyGenerator* keyGen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(), "Open", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStream, encryptionOid, keyGen);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open(::System::IO::Stream* outStream, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* encAlgID,
                                                                                           ::Org::BouncyCastle::Crypto::ICipherParameters* cipherParameters,
                                                                                           ::Org::BouncyCastle::Asn1::Asn1EncodableVector* recipientInfos) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(), "Open", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStream, encAlgID, cipherParameters, recipientInfos);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open(::System::IO::Stream* outStream, ::StringW encryptionOid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(), "Open", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStream, encryptionOid);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open(::System::IO::Stream* outStream, ::StringW encryptionOid, int32_t keySize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>::get(), "Open", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, outStream, encryptionOid, keySize);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::CmsEnvelopedDataStreamGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
