#pragma once
#include "System/Security/AccessControl/zzzz__FileSystemSecurity_impl.hpp"
#include "System/Security/AccessControl/zzzz__FileSecurity_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::FileSecurity._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::FileSecurity::*)(
    ::StringW, ::System::Security::AccessControl::AccessControlSections)>(&::System::Security::AccessControl::FileSecurity::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2483594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::FileSecurity*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlSections>::get() })));
    return ___internal_method;
  }
};
inline ::System::Security::AccessControl::FileSecurity* System::Security::AccessControl::FileSecurity::New_ctor(::StringW fileName,
                                                                                                                ::System::Security::AccessControl::AccessControlSections includeSections) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::AccessControl::FileSecurity*>(fileName, includeSections));
}
inline void System::Security::AccessControl::FileSecurity::_ctor(::StringW fileName, ::System::Security::AccessControl::AccessControlSections includeSections) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::FileSecurity*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlSections>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fileName, includeSections);
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::FileSecurity::FileSecurity() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
