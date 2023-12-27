#pragma once
#include "System/Net/Http/zzzz__ByteArrayContent_impl.hpp"
#include "System/Net/Http/zzzz__StringContent_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::Net::Http::StringContent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::StringContent::*)(::StringW)>(&::System::Net::Http::StringContent::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x283466c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StringContent*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StringContent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::StringContent::*)(::StringW, ::System::Text::Encoding*, ::StringW)>(
    &::System::Net::Http::StringContent::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2834678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StringContent*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::StringContent.GetByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::StringW, ::System::Text::Encoding*)>(
    &::System::Net::Http::StringContent::GetByteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2834780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StringContent*>::get(), "GetByteArray", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Net::Http::StringContent* System::Net::Http::StringContent::New_ctor(::StringW content) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::StringContent*>(content));
}
inline void System::Net::Http::StringContent::_ctor(::StringW content) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StringContent*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content);
}
inline ::System::Net::Http::StringContent* System::Net::Http::StringContent::New_ctor(::StringW content, ::System::Text::Encoding* encoding, ::StringW mediaType) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::StringContent*>(content, encoding, mediaType));
}
inline void System::Net::Http::StringContent::_ctor(::StringW content, ::System::Text::Encoding* encoding, ::StringW mediaType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StringContent*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content, encoding, mediaType);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Net::Http::StringContent::GetByteArray(::StringW content, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::StringContent*>::get(), "GetByteArray", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, content, encoding);
}
// Ctor Parameters []
constexpr ::System::Net::Http::StringContent::StringContent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
