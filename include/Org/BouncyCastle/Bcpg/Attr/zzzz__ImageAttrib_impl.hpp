#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/Attr/zzzz__ImageAttrib_def.hpp"
#include "Org/BouncyCastle/Bcpg/Attr/zzzz__ImageAttrib_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format::__ImageAttrib__Format(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format::__ImageAttrib__Format() {}
constexpr ::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format::Jpeg{ static_cast<uint8_t>(0x1u) };
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11c6ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)(bool, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x11c6edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)(
    ::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x11c6fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib.ToByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(
    ::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::ToByteArray)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x11c7030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get(), "ToByteArray", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)()>(
    &::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c717c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib.get_Encoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)()>(
    &::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::get_Encoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c7184;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib.GetImageData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::*)()>(
    &::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::GetImageData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c718c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get(), 9));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__get_hdrLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hdrLength;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__get_hdrLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hdrLength;
}
constexpr void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__set_hdrLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___hdrLength = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____version;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____version;
}
constexpr void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____version = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__get__encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____encoding;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__get__encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____encoding;
}
constexpr void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__set__encoding(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____encoding = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__get_imageData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___imageData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__get_imageData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___imageData;
}
constexpr void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::__set_imageData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___imageData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::setStaticF_Zeroes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "Zeroes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::Attr::ImageAttrib::getStaticF_Zeroes() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "Zeroes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get>();
}
inline ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib* Org::BouncyCastle::Bcpg::Attr::ImageAttrib::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(data));
}
inline void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib* Org::BouncyCastle::Bcpg::Attr::ImageAttrib::New_ctor(bool forceLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(forceLongLength, data));
}
inline void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor(bool forceLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forceLongLength, data);
}
inline ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib* Org::BouncyCastle::Bcpg::Attr::ImageAttrib::New_ctor(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format imageType,
                                                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> imageData) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>(imageType, imageData));
}
inline void Org::BouncyCastle::Bcpg::Attr::ImageAttrib::_ctor(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format imageType, ::ArrayW<uint8_t, ::Array<uint8_t>*> imageData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, imageType, imageData);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::Attr::ImageAttrib::ToByteArray(::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format imageType,
                                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> imageData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get(), "ToByteArray", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::Attr::__ImageAttrib__Format>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, imageType, imageData);
}
inline int32_t Org::BouncyCastle::Bcpg::Attr::ImageAttrib::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get(),
                                                                             "get_Version", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::Attr::ImageAttrib::get_Encoding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get(),
                                                                             "get_Encoding", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::Attr::ImageAttrib::GetImageData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Attr::ImageAttrib*>::get(),
                                                                             "GetImageData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib::ImageAttrib() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
