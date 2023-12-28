#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__AbuseReportOptions_def.hpp"
#include "Oculus/Platform/zzzz__AbuseReportType_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::AbuseReportOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::AbuseReportOptions::*)()>(&::Oculus::Platform::AbuseReportOptions::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26cd744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AbuseReportOptions*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AbuseReportOptions.SetPreventPeopleChooser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::AbuseReportOptions::*)(bool)>(
    &::Oculus::Platform::AbuseReportOptions::SetPreventPeopleChooser)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26cd810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AbuseReportOptions*>::get(), "SetPreventPeopleChooser",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AbuseReportOptions.SetReportType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::AbuseReportOptions::*)(::Oculus::Platform::AbuseReportType)>(
    &::Oculus::Platform::AbuseReportOptions::SetReportType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26cd8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AbuseReportOptions*>::get(), "SetReportType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::AbuseReportType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AbuseReportOptions.op_Explicit_void_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::Oculus::Platform::AbuseReportOptions*)>(&::Oculus::Platform::AbuseReportOptions::op_Explicit_void_)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26cd9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AbuseReportOptions*>::get(), "op_Explicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::AbuseReportOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AbuseReportOptions.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::AbuseReportOptions::*)()>(&::Oculus::Platform::AbuseReportOptions::Finalize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x26cda40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AbuseReportOptions*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AbuseReportOptions*>::get(), 1));
    return ___internal_method;
  }
};
constexpr void*& Oculus::Platform::AbuseReportOptions::__get_Handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr void* const& Oculus::Platform::AbuseReportOptions::__get_Handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Handle;
}
constexpr void Oculus::Platform::AbuseReportOptions::__set_Handle(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Handle = value;
}
inline ::Oculus::Platform::AbuseReportOptions* Oculus::Platform::AbuseReportOptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::AbuseReportOptions*>());
}
inline void Oculus::Platform::AbuseReportOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AbuseReportOptions*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::AbuseReportOptions::SetPreventPeopleChooser(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AbuseReportOptions*>::get(), "SetPreventPeopleChooser",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Oculus::Platform::AbuseReportOptions::SetReportType(::Oculus::Platform::AbuseReportType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AbuseReportOptions*>::get(), "SetReportType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::AbuseReportType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void* Oculus::Platform::AbuseReportOptions::op_Explicit_void_(::Oculus::Platform::AbuseReportOptions* options) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AbuseReportOptions*>::get(), "op_Explicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::AbuseReportOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, options);
}
inline void Oculus::Platform::AbuseReportOptions::Finalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AbuseReportOptions*>::get(), "Finalize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::AbuseReportOptions::AbuseReportOptions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
