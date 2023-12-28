#pragma once
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11ffff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream::Read)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1200010;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream*>::get(), 35));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream* Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream::New_ctor(::System::IO::Stream* input) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream*>(input));
}
inline void Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream::_ctor(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline int32_t Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream*>::get(), "Read", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buf, off, len);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::__CmsTypedStream__FullReaderStream::__CmsTypedStream__FullReaderStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsTypedStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsTypedStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsTypedStream::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x11ffeb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsTypedStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsTypedStream::*)(::StringW, ::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsTypedStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11ee154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsTypedStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsTypedStream::*)(::StringW, ::System::IO::Stream*, int32_t)>(
    &::Org::BouncyCastle::Cms::CmsTypedStream::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x11fff34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsTypedStream.get_ContentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Cms::CmsTypedStream::*)()>(
    &::Org::BouncyCastle::Cms::CmsTypedStream::get_ContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1200000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(),
                                                                               "get_ContentType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsTypedStream.get_ContentStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsTypedStream::*)()>(
    &::Org::BouncyCastle::Cms::CmsTypedStream::get_ContentStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1200008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(),
                                                                               "get_ContentStream", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsTypedStream.Drain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsTypedStream::*)()>(&::Org::BouncyCastle::Cms::CmsTypedStream::Drain)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x11ee15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(), "Drain",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Cms::CmsTypedStream::__get__oid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oid;
}
constexpr ::StringW const& Org::BouncyCastle::Cms::CmsTypedStream::__get__oid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oid;
}
constexpr void Org::BouncyCastle::Cms::CmsTypedStream::__set__oid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::Cms::CmsTypedStream::__get__in() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____in;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& Org::BouncyCastle::Cms::CmsTypedStream::__get__in() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____in;
}
constexpr void Org::BouncyCastle::Cms::CmsTypedStream::__set__in(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____in)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::CmsTypedStream::New_ctor(::System::IO::Stream* inStream) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsTypedStream*>(inStream));
}
inline void Org::BouncyCastle::Cms::CmsTypedStream::_ctor(::System::IO::Stream* inStream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inStream);
}
inline ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::CmsTypedStream::New_ctor(::StringW oid, ::System::IO::Stream* inStream) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsTypedStream*>(oid, inStream));
}
inline void Org::BouncyCastle::Cms::CmsTypedStream::_ctor(::StringW oid, ::System::IO::Stream* inStream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oid, inStream);
}
inline ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::CmsTypedStream::New_ctor(::StringW oid, ::System::IO::Stream* inStream, int32_t bufSize) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsTypedStream*>(oid, inStream, bufSize));
}
inline void Org::BouncyCastle::Cms::CmsTypedStream::_ctor(::StringW oid, ::System::IO::Stream* inStream, int32_t bufSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oid, inStream, bufSize);
}
inline ::StringW Org::BouncyCastle::Cms::CmsTypedStream::get_ContentType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(),
                                                                             "get_ContentType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsTypedStream::get_ContentStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(),
                                                                             "get_ContentStream", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsTypedStream::Drain() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsTypedStream*>::get(), "Drain",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsTypedStream::CmsTypedStream() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
