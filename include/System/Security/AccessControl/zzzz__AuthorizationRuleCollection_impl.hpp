#pragma once
#include "System/Collections/zzzz__ReadOnlyCollectionBase_impl.hpp"
#include "System/Security/AccessControl/zzzz__AuthorizationRuleCollection_def.hpp"
#include "System/Security/AccessControl/zzzz__AuthorizationRule_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::AuthorizationRuleCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::AuthorizationRuleCollection::*)(
    ::ArrayW<::System::Security::AccessControl::AuthorizationRule*, ::Array<::System::Security::AccessControl::AuthorizationRule*>*>)>(
    &::System::Security::AccessControl::AuthorizationRuleCollection::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x24809e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AuthorizationRuleCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                       ::ArrayW<::System::Security::AccessControl::AuthorizationRule*, ::Array<::System::Security::AccessControl::AuthorizationRule*>*>>::get() })));
    return ___internal_method;
  }
};
inline ::System::Security::AccessControl::AuthorizationRuleCollection* System::Security::AccessControl::AuthorizationRuleCollection::New_ctor(
    ::ArrayW<::System::Security::AccessControl::AuthorizationRule*, ::Array<::System::Security::AccessControl::AuthorizationRule*>*> rules) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::AccessControl::AuthorizationRuleCollection*>(rules));
}
inline void System::Security::AccessControl::AuthorizationRuleCollection::_ctor(
    ::ArrayW<::System::Security::AccessControl::AuthorizationRule*, ::Array<::System::Security::AccessControl::AuthorizationRule*>*> rules) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AuthorizationRuleCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::ArrayW<::System::Security::AccessControl::AuthorizationRule*, ::Array<::System::Security::AccessControl::AuthorizationRule*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rules);
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::AuthorizationRuleCollection::AuthorizationRuleCollection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
