#pragma once
#include "System/Configuration/zzzz__ConfigurationSection_impl.hpp"
#include "System/Net/Configuration/zzzz__DefaultProxySection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::DefaultProxySection::*)()>(
    &::System::Net::Configuration::DefaultProxySection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2944d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySection*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySection.get_Properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::DefaultProxySection::*)()>(
    &::System::Net::Configuration::DefaultProxySection::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2944d8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySection*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::DefaultProxySection.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::DefaultProxySection::*)(::System::Configuration::ConfigurationElement*)>(
    &::System::Net::Configuration::DefaultProxySection::Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2944dc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySection*>::get(), 6));
    return ___internal_method;
  }
};
inline ::System::Net::Configuration::DefaultProxySection* System::Net::Configuration::DefaultProxySection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Configuration::DefaultProxySection*>());
}
inline void System::Net::Configuration::DefaultProxySection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySection*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::DefaultProxySection::get_Properties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySection*>::get(),
                                                                             "get_Properties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*, false>(this, ___internal_method);
}
inline void System::Net::Configuration::DefaultProxySection::Reset(::System::Configuration::ConfigurationElement* parentElement) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::DefaultProxySection*>::get(), "Reset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Configuration::ConfigurationElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parentElement);
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::DefaultProxySection::DefaultProxySection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
