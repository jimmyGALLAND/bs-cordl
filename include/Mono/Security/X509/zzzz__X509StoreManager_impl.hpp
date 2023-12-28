#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509StoreManager_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/X509/zzzz__X509Stores_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_CurrentUserPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Mono::Security::X509::X509StoreManager::get_CurrentUserPath)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x23fddbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get(),
                                                                               "get_CurrentUserPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_LocalMachinePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Mono::Security::X509::X509StoreManager::get_LocalMachinePath)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x23fdebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get(),
                                                                               "get_LocalMachinePath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_CurrentUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Stores* (*)()>(&::Mono::Security::X509::X509StoreManager::get_CurrentUser)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x23fdfa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get(),
                                                                               "get_CurrentUser", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_LocalMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Stores* (*)()>(&::Mono::Security::X509::X509StoreManager::get_LocalMachine)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x23fe074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get(),
                                                                               "get_LocalMachine", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509StoreManager.get_TrustedRootCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509CertificateCollection* (*)()>(
    &::Mono::Security::X509::X509StoreManager::get_TrustedRootCertificates)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x23fbf74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get(),
                                                                               "get_TrustedRootCertificates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X509StoreManager::setStaticF__userPath(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_userPath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::X509::X509StoreManager::getStaticF__userPath() {
  return ::cordl_internals::getStaticField<::StringW, "_userPath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get>();
}
inline void Mono::Security::X509::X509StoreManager::setStaticF__localMachinePath(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_localMachinePath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Mono::Security::X509::X509StoreManager::getStaticF__localMachinePath() {
  return ::cordl_internals::getStaticField<::StringW, "_localMachinePath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get>();
}
inline void Mono::Security::X509::X509StoreManager::setStaticF__userStore(::Mono::Security::X509::X509Stores* value) {
  ::cordl_internals::setStaticField<::Mono::Security::X509::X509Stores*, "_userStore", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get>(
      std::forward<::Mono::Security::X509::X509Stores*>(value));
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509StoreManager::getStaticF__userStore() {
  return ::cordl_internals::getStaticField<::Mono::Security::X509::X509Stores*, "_userStore", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get>();
}
inline void Mono::Security::X509::X509StoreManager::setStaticF__machineStore(::Mono::Security::X509::X509Stores* value) {
  ::cordl_internals::setStaticField<::Mono::Security::X509::X509Stores*, "_machineStore", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get>(
      std::forward<::Mono::Security::X509::X509Stores*>(value));
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509StoreManager::getStaticF__machineStore() {
  return ::cordl_internals::getStaticField<::Mono::Security::X509::X509Stores*, "_machineStore",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get>();
}
inline ::StringW Mono::Security::X509::X509StoreManager::get_CurrentUserPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get(),
                                                                             "get_CurrentUserPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509StoreManager::get_LocalMachinePath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get(),
                                                                             "get_LocalMachinePath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509StoreManager::get_CurrentUser() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get(),
                                                                             "get_CurrentUser", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Stores*, false>(nullptr, ___internal_method);
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509StoreManager::get_LocalMachine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get(),
                                                                             "get_LocalMachine", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Stores*, false>(nullptr, ___internal_method);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::X509StoreManager::get_TrustedRootCertificates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509StoreManager*>::get(),
                                                                             "get_TrustedRootCertificates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509StoreManager::X509StoreManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
