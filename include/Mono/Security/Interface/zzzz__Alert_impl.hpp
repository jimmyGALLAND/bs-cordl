#pragma once
#include "Mono/Security/Interface/zzzz__AlertDescription_impl.hpp"
#include "Mono/Security/Interface/zzzz__AlertLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Interface/zzzz__Alert_def.hpp"
#include "Mono/Security/Interface/zzzz__AlertDescription_def.hpp"
#include "Mono/Security/Interface/zzzz__AlertLevel_def.hpp"
//  Writing Method size for method: ::Mono::Security::Interface::Alert.get_Level
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::AlertLevel (::Mono::Security::Interface::Alert::*)()>(
    &::Mono::Security::Interface::Alert::get_Level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24028f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert*>::get(), "get_Level",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::Alert.get_Description
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::AlertDescription (::Mono::Security::Interface::Alert::*)()>(
    &::Mono::Security::Interface::Alert::get_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24028f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert*>::get(), "get_Description",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::Alert._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::Alert::*)(::Mono::Security::Interface::AlertDescription)>(
    &::Mono::Security::Interface::Alert::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2402900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::AlertDescription>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::Alert.inferAlertLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::Alert::*)()>(&::Mono::Security::Interface::Alert::inferAlertLevel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x240296c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert*>::get(), "inferAlertLevel",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::Alert.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::Interface::Alert::*)()>(&::Mono::Security::Interface::Alert::ToString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x24029ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::Interface::AlertLevel& Mono::Security::Interface::Alert::__get_level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___level;
}
constexpr ::Mono::Security::Interface::AlertLevel const& Mono::Security::Interface::Alert::__get_level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___level;
}
constexpr void Mono::Security::Interface::Alert::__set_level(::Mono::Security::Interface::AlertLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___level = value;
}
constexpr ::Mono::Security::Interface::AlertDescription& Mono::Security::Interface::Alert::__get_description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___description;
}
constexpr ::Mono::Security::Interface::AlertDescription const& Mono::Security::Interface::Alert::__get_description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___description;
}
constexpr void Mono::Security::Interface::Alert::__set_description(::Mono::Security::Interface::AlertDescription value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___description = value;
}
inline ::Mono::Security::Interface::AlertLevel Mono::Security::Interface::Alert::get_Level() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert*>::get(), "get_Level",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::AlertLevel, false>(this, ___internal_method);
}
inline ::Mono::Security::Interface::AlertDescription Mono::Security::Interface::Alert::get_Description() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert*>::get(), "get_Description",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::AlertDescription, false>(this, ___internal_method);
}
inline ::Mono::Security::Interface::Alert* Mono::Security::Interface::Alert::New_ctor(::Mono::Security::Interface::AlertDescription description) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::Interface::Alert*>(description));
}
inline void Mono::Security::Interface::Alert::_ctor(::Mono::Security::Interface::AlertDescription description) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::AlertDescription>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, description);
}
inline void Mono::Security::Interface::Alert::inferAlertLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert*>::get(), "inferAlertLevel",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Mono::Security::Interface::Alert::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::Alert::Alert() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
