#pragma once
#include "System/Security/AccessControl/zzzz__ControlFlags_impl.hpp"
#include "System/Security/AccessControl/zzzz__GenericSecurityDescriptor_impl.hpp"
#include "System/Security/AccessControl/zzzz__CommonSecurityDescriptor_def.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
#include "System/Security/AccessControl/zzzz__CommonAcl_def.hpp"
#include "System/Security/AccessControl/zzzz__ControlFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__DiscretionaryAcl_def.hpp"
#include "System/Security/AccessControl/zzzz__SystemAcl_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(
    bool, bool, ::System::Security::AccessControl::ControlFlags, ::System::Security::Principal::SecurityIdentifier*, ::System::Security::Principal::SecurityIdentifier*,
    ::System::Security::AccessControl::SystemAcl*, ::System::Security::AccessControl::DiscretionaryAcl*)>(&::System::Security::AccessControl::CommonSecurityDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x248300c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ControlFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::SystemAcl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::DiscretionaryAcl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(
    bool, bool, ::System::Security::AccessControl::ControlFlags, ::System::Security::Principal::SecurityIdentifier*, ::System::Security::Principal::SecurityIdentifier*,
    ::System::Security::AccessControl::SystemAcl*, ::System::Security::AccessControl::DiscretionaryAcl*)>(&::System::Security::AccessControl::CommonSecurityDescriptor::Init)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2483088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ControlFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::SystemAcl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::DiscretionaryAcl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.get_DiscretionaryAcl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::DiscretionaryAcl* (
    ::System::Security::AccessControl::CommonSecurityDescriptor::*)()>(&::System::Security::AccessControl::CommonSecurityDescriptor::get_DiscretionaryAcl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2483240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), "get_DiscretionaryAcl",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.set_DiscretionaryAcl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(
    ::System::Security::AccessControl::DiscretionaryAcl*)>(&::System::Security::AccessControl::CommonSecurityDescriptor::set_DiscretionaryAcl)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x248313c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), "set_DiscretionaryAcl", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::DiscretionaryAcl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.set_Group
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(
    ::System::Security::Principal::SecurityIdentifier*)>(&::System::Security::AccessControl::CommonSecurityDescriptor::set_Group)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2483378;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.get_IsContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::AccessControl::CommonSecurityDescriptor::*)()>(
    &::System::Security::AccessControl::CommonSecurityDescriptor::get_IsContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2483380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), "get_IsContainer",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.get_IsDS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::AccessControl::CommonSecurityDescriptor::*)()>(
    &::System::Security::AccessControl::CommonSecurityDescriptor::get_IsDS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2483388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), "get_IsDS",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.set_Owner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(
    ::System::Security::Principal::SecurityIdentifier*)>(&::System::Security::AccessControl::CommonSecurityDescriptor::set_Owner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2483390;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.set_SystemAcl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(::System::Security::AccessControl::SystemAcl*)>(
    &::System::Security::AccessControl::CommonSecurityDescriptor::set_SystemAcl)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x248310c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), "set_SystemAcl", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::SystemAcl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonSecurityDescriptor.CheckAclConsistency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonSecurityDescriptor::*)(::System::Security::AccessControl::CommonAcl*)>(
    &::System::Security::AccessControl::CommonSecurityDescriptor::CheckAclConsistency)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x24832b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), "CheckAclConsistency", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::CommonAcl*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& System::Security::AccessControl::CommonSecurityDescriptor::__get_is_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___is_container;
}
constexpr bool const& System::Security::AccessControl::CommonSecurityDescriptor::__get_is_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___is_container;
}
constexpr void System::Security::AccessControl::CommonSecurityDescriptor::__set_is_container(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___is_container = value;
}
constexpr bool& System::Security::AccessControl::CommonSecurityDescriptor::__get_is_ds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___is_ds;
}
constexpr bool const& System::Security::AccessControl::CommonSecurityDescriptor::__get_is_ds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___is_ds;
}
constexpr void System::Security::AccessControl::CommonSecurityDescriptor::__set_is_ds(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___is_ds = value;
}
constexpr ::System::Security::AccessControl::ControlFlags& System::Security::AccessControl::CommonSecurityDescriptor::__get_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___flags;
}
constexpr ::System::Security::AccessControl::ControlFlags const& System::Security::AccessControl::CommonSecurityDescriptor::__get_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___flags;
}
constexpr void System::Security::AccessControl::CommonSecurityDescriptor::__set_flags(::System::Security::AccessControl::ControlFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___flags = value;
}
constexpr ::System::Security::Principal::SecurityIdentifier*& System::Security::AccessControl::CommonSecurityDescriptor::__get_owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___owner;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::SecurityIdentifier*> const& System::Security::AccessControl::CommonSecurityDescriptor::__get_owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___owner;
}
constexpr void System::Security::AccessControl::CommonSecurityDescriptor::__set_owner(::System::Security::Principal::SecurityIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___owner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Principal::SecurityIdentifier*& System::Security::AccessControl::CommonSecurityDescriptor::__get_group() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___group;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::SecurityIdentifier*> const& System::Security::AccessControl::CommonSecurityDescriptor::__get_group() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___group;
}
constexpr void System::Security::AccessControl::CommonSecurityDescriptor::__set_group(::System::Security::Principal::SecurityIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___group)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::AccessControl::SystemAcl*& System::Security::AccessControl::CommonSecurityDescriptor::__get_system_acl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___system_acl;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::AccessControl::SystemAcl*> const& System::Security::AccessControl::CommonSecurityDescriptor::__get_system_acl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___system_acl;
}
constexpr void System::Security::AccessControl::CommonSecurityDescriptor::__set_system_acl(::System::Security::AccessControl::SystemAcl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___system_acl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::AccessControl::DiscretionaryAcl*& System::Security::AccessControl::CommonSecurityDescriptor::__get_discretionary_acl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___discretionary_acl;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::AccessControl::DiscretionaryAcl*> const& System::Security::AccessControl::CommonSecurityDescriptor::__get_discretionary_acl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___discretionary_acl;
}
constexpr void System::Security::AccessControl::CommonSecurityDescriptor::__set_discretionary_acl(::System::Security::AccessControl::DiscretionaryAcl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___discretionary_acl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::AccessControl::CommonSecurityDescriptor*
System::Security::AccessControl::CommonSecurityDescriptor::New_ctor(bool isContainer, bool isDS, ::System::Security::AccessControl::ControlFlags flags,
                                                                    ::System::Security::Principal::SecurityIdentifier* owner, ::System::Security::Principal::SecurityIdentifier* group,
                                                                    ::System::Security::AccessControl::SystemAcl* systemAcl, ::System::Security::AccessControl::DiscretionaryAcl* discretionaryAcl) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::AccessControl::CommonSecurityDescriptor*>(isContainer, isDS, flags, owner, group, systemAcl, discretionaryAcl));
}
inline void System::Security::AccessControl::CommonSecurityDescriptor::_ctor(bool isContainer, bool isDS, ::System::Security::AccessControl::ControlFlags flags,
                                                                             ::System::Security::Principal::SecurityIdentifier* owner, ::System::Security::Principal::SecurityIdentifier* group,
                                                                             ::System::Security::AccessControl::SystemAcl* systemAcl,
                                                                             ::System::Security::AccessControl::DiscretionaryAcl* discretionaryAcl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ControlFlags>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::SystemAcl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::DiscretionaryAcl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isContainer, isDS, flags, owner, group, systemAcl, discretionaryAcl);
}
inline void System::Security::AccessControl::CommonSecurityDescriptor::Init(bool isContainer, bool isDS, ::System::Security::AccessControl::ControlFlags flags,
                                                                            ::System::Security::Principal::SecurityIdentifier* owner, ::System::Security::Principal::SecurityIdentifier* group,
                                                                            ::System::Security::AccessControl::SystemAcl* systemAcl,
                                                                            ::System::Security::AccessControl::DiscretionaryAcl* discretionaryAcl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ControlFlags>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::SystemAcl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::DiscretionaryAcl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isContainer, isDS, flags, owner, group, systemAcl, discretionaryAcl);
}
inline ::System::Security::AccessControl::DiscretionaryAcl* System::Security::AccessControl::CommonSecurityDescriptor::get_DiscretionaryAcl() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), "get_DiscretionaryAcl",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::DiscretionaryAcl*, false>(this, ___internal_method);
}
inline void System::Security::AccessControl::CommonSecurityDescriptor::set_DiscretionaryAcl(::System::Security::AccessControl::DiscretionaryAcl* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), "set_DiscretionaryAcl", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::DiscretionaryAcl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Security::AccessControl::CommonSecurityDescriptor::set_Group(::System::Security::Principal::SecurityIdentifier* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), "set_Group", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Security::AccessControl::CommonSecurityDescriptor::get_IsContainer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), "get_IsContainer",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Security::AccessControl::CommonSecurityDescriptor::get_IsDS() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), "get_IsDS",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Security::AccessControl::CommonSecurityDescriptor::set_Owner(::System::Security::Principal::SecurityIdentifier* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), "set_Owner", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Security::AccessControl::CommonSecurityDescriptor::set_SystemAcl(::System::Security::AccessControl::SystemAcl* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), "set_SystemAcl", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::SystemAcl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Security::AccessControl::CommonSecurityDescriptor::CheckAclConsistency(::System::Security::AccessControl::CommonAcl* acl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonSecurityDescriptor*>::get(), "CheckAclConsistency", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::CommonAcl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, acl);
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::CommonSecurityDescriptor::CommonSecurityDescriptor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
