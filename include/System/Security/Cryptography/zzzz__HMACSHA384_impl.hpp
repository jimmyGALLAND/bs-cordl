#pragma once
#include "System/Security/Cryptography/zzzz__HMAC_impl.hpp"
#include "System/Security/Cryptography/zzzz__HMACSHA384_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::HMACSHA384._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMACSHA384::*)()>(&::System::Security::Cryptography::HMACSHA384::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x245f078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACSHA384*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMACSHA384._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMACSHA384::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::Cryptography::HMACSHA384::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x245f09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACSHA384*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMACSHA384.get_BlockSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::HMACSHA384::*)()>(
    &::System::Security::Cryptography::HMACSHA384::get_BlockSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x245f18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACSHA384*>::get(),
                                                                               "get_BlockSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& System::Security::Cryptography::HMACSHA384::__get_m_useLegacyBlockSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_useLegacyBlockSize;
}
constexpr bool const& System::Security::Cryptography::HMACSHA384::__get_m_useLegacyBlockSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_useLegacyBlockSize;
}
constexpr void System::Security::Cryptography::HMACSHA384::__set_m_useLegacyBlockSize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_useLegacyBlockSize = value;
}
inline ::System::Security::Cryptography::HMACSHA384* System::Security::Cryptography::HMACSHA384::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::HMACSHA384*>());
}
inline void System::Security::Cryptography::HMACSHA384::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACSHA384*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::HMACSHA384* System::Security::Cryptography::HMACSHA384::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Cryptography::HMACSHA384*>(key));
}
inline void System::Security::Cryptography::HMACSHA384::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACSHA384*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline int32_t System::Security::Cryptography::HMACSHA384::get_BlockSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACSHA384*>::get(),
                                                                             "get_BlockSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::HMACSHA384::HMACSHA384() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
