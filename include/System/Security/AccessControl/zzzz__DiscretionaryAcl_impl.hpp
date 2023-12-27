#pragma once
#include "System/Security/AccessControl/zzzz__CommonAcl_impl.hpp"
#include "System/Security/AccessControl/zzzz__DiscretionaryAcl_def.hpp"
#include "System/Security/AccessControl/zzzz__AceQualifier_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlType_def.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__GenericAce_def.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::DiscretionaryAcl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::DiscretionaryAcl::*)(bool, bool, int32_t)>(
    &::System::Security::AccessControl::DiscretionaryAcl::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2483248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::DiscretionaryAcl*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::DiscretionaryAcl.AddAccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::DiscretionaryAcl::*)(
    ::System::Security::AccessControl::AccessControlType, ::System::Security::Principal::SecurityIdentifier*, int32_t, ::System::Security::AccessControl::InheritanceFlags,
    ::System::Security::AccessControl::PropagationFlags)>(&::System::Security::AccessControl::DiscretionaryAcl::AddAccess)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2483254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::DiscretionaryAcl*>::get(), "AddAccess", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::DiscretionaryAcl.ApplyCanonicalSortToExplicitAces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::DiscretionaryAcl::*)()>(
    &::System::Security::AccessControl::DiscretionaryAcl::ApplyCanonicalSortToExplicitAces)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2483428;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::DiscretionaryAcl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::DiscretionaryAcl*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::DiscretionaryAcl.GetAceInsertPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::AccessControl::DiscretionaryAcl::*)(::System::Security::AccessControl::AceQualifier)>(
    &::System::Security::AccessControl::DiscretionaryAcl::GetAceInsertPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2483470;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::DiscretionaryAcl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::DiscretionaryAcl*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::DiscretionaryAcl.GetAceQualifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AceQualifier (*)(::System::Security::AccessControl::AccessControlType)>(
    &::System::Security::AccessControl::DiscretionaryAcl::GetAceQualifier)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24833c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::DiscretionaryAcl*>::get(), "GetAceQualifier", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::DiscretionaryAcl.IsAceMeaningless
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::AccessControl::DiscretionaryAcl::*)(::System::Security::AccessControl::GenericAce*)>(
    &::System::Security::AccessControl::DiscretionaryAcl::IsAceMeaningless)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2483480;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::DiscretionaryAcl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::DiscretionaryAcl*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::Security::AccessControl::DiscretionaryAcl* System::Security::AccessControl::DiscretionaryAcl::New_ctor(bool isContainer, bool isDS, int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::AccessControl::DiscretionaryAcl*>(isContainer, isDS, capacity));
}
inline void System::Security::AccessControl::DiscretionaryAcl::_ctor(bool isContainer, bool isDS, int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::DiscretionaryAcl*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isContainer, isDS, capacity);
}
inline void System::Security::AccessControl::DiscretionaryAcl::AddAccess(::System::Security::AccessControl::AccessControlType accessType, ::System::Security::Principal::SecurityIdentifier* sid,
                                                                         int32_t accessMask, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                         ::System::Security::AccessControl::PropagationFlags propagationFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::DiscretionaryAcl*>::get(), "AddAccess", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accessType, sid, accessMask, inheritanceFlags, propagationFlags);
}
inline void System::Security::AccessControl::DiscretionaryAcl::ApplyCanonicalSortToExplicitAces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::DiscretionaryAcl*>::get(),
                                                                             "ApplyCanonicalSortToExplicitAces", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Security::AccessControl::DiscretionaryAcl::GetAceInsertPosition(::System::Security::AccessControl::AceQualifier aceQualifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::DiscretionaryAcl*>::get(), "GetAceInsertPosition", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceQualifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, aceQualifier);
}
inline ::System::Security::AccessControl::AceQualifier System::Security::AccessControl::DiscretionaryAcl::GetAceQualifier(::System::Security::AccessControl::AccessControlType accessType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::DiscretionaryAcl*>::get(), "GetAceQualifier", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AceQualifier, false>(nullptr, ___internal_method, accessType);
}
inline bool System::Security::AccessControl::DiscretionaryAcl::IsAceMeaningless(::System::Security::AccessControl::GenericAce* ace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::DiscretionaryAcl*>::get(), "IsAceMeaningless", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::GenericAce*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ace);
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::DiscretionaryAcl::DiscretionaryAcl() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
