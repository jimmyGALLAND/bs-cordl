#pragma once
#include "System/zzzz__ArgumentException_impl.hpp"
#include "System/Text/zzzz__DecoderFallbackException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::Text::DecoderFallbackException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::DecoderFallbackException::*)()>(&::System::Text::DecoderFallbackException::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2631318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallbackException*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallbackException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::DecoderFallbackException::*)(::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Text::DecoderFallbackException::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26312e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallbackException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallbackException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::DecoderFallbackException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Text::DecoderFallbackException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2631374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallbackException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Text::DecoderFallbackException::__get__bytesUnknown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bytesUnknown;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Text::DecoderFallbackException::__get__bytesUnknown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bytesUnknown;
}
constexpr void System::Text::DecoderFallbackException::__set__bytesUnknown(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bytesUnknown)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Text::DecoderFallbackException::__get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____index;
}
constexpr int32_t const& System::Text::DecoderFallbackException::__get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____index;
}
constexpr void System::Text::DecoderFallbackException::__set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____index = value;
}
inline ::System::Text::DecoderFallbackException* System::Text::DecoderFallbackException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Text::DecoderFallbackException*>());
}
inline void System::Text::DecoderFallbackException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallbackException*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Text::DecoderFallbackException* System::Text::DecoderFallbackException::New_ctor(::StringW message, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Text::DecoderFallbackException*>(message, bytesUnknown, index));
}
inline void System::Text::DecoderFallbackException::_ctor(::StringW message, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallbackException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, bytesUnknown, index);
}
inline ::System::Text::DecoderFallbackException* System::Text::DecoderFallbackException::New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                                  ::System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Text::DecoderFallbackException*>(serializationInfo, streamingContext));
}
inline void System::Text::DecoderFallbackException::_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderFallbackException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
// Ctor Parameters []
constexpr ::System::Text::DecoderFallbackException::DecoderFallbackException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
