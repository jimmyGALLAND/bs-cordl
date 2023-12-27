#pragma once
#include "System/Security/AccessControl/zzzz__CommonObjectSecurity_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Security/AccessControl/zzzz__NativeObjectSecurity_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "System/Security/AccessControl/zzzz__ResourceType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Security/AccessControl/zzzz__NativeObjectSecurity_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode::*)(
    ::System::Object*, void*)>(&::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x24842ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode::*)(int32_t, ::StringW, ::System::Runtime::InteropServices::SafeHandle*, ::System::Object*)>(
    &::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24843b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*
System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*>(object, method));
}
inline void System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::Exception* System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode::Invoke(int32_t errorCode, ::StringW name,
                                                                                                                    ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, errorCode, name, handle, context);
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode::__NativeObjectSecurity__ExceptionFromErrorCode() {}
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::NativeObjectSecurity::*)(
    bool, ::System::Security::AccessControl::ResourceType, ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*, ::System::Object*)>(
    &::System::Security::AccessControl::NativeObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2483ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ResourceType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::NativeObjectSecurity::*)(
    bool, ::System::Security::AccessControl::ResourceType, ::StringW, ::System::Security::AccessControl::AccessControlSections)>(&::System::Security::AccessControl::NativeObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24835bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ResourceType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlSections>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::NativeObjectSecurity::*)(
    bool, ::System::Security::AccessControl::ResourceType, ::StringW, ::System::Security::AccessControl::AccessControlSections,
    ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*, ::System::Object*)>(&::System::Security::AccessControl::NativeObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2483f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ResourceType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlSections>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity.ClearAccessControlSectionsModified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::NativeObjectSecurity::*)()>(
    &::System::Security::AccessControl::NativeObjectSecurity::ClearAccessControlSectionsModified)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x248403c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(),
                                                                               "ClearAccessControlSectionsModified", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity.DefaultExceptionFromErrorCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(int32_t, ::StringW, ::System::Runtime::InteropServices::SafeHandle*, ::System::Object*)>(
    &::System::Security::AccessControl::NativeObjectSecurity::DefaultExceptionFromErrorCode)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2484124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), "DefaultExceptionFromErrorCode", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity.RaiseExceptionOnFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::NativeObjectSecurity::*)(
    int32_t, ::StringW, ::System::Runtime::InteropServices::SafeHandle*, ::System::Object*)>(&::System::Security::AccessControl::NativeObjectSecurity::RaiseExceptionOnFailure)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2483f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), "RaiseExceptionOnFailure", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::NativeObjectSecurity.InternalGet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::AccessControl::NativeObjectSecurity::*)(
    ::StringW, ::System::Security::AccessControl::AccessControlSections)>(&::System::Security::AccessControl::NativeObjectSecurity::InternalGet)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2484370;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*& System::Security::AccessControl::NativeObjectSecurity::__get_exception_from_error_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___exception_from_error_code;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*> const&
System::Security::AccessControl::NativeObjectSecurity::__get_exception_from_error_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___exception_from_error_code;
}
constexpr void System::Security::AccessControl::NativeObjectSecurity::__set_exception_from_error_code(::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___exception_from_error_code)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::AccessControl::NativeObjectSecurity*
System::Security::AccessControl::NativeObjectSecurity::New_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType,
                                                                ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode* exceptionFromErrorCode,
                                                                ::System::Object* exceptionContext) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::AccessControl::NativeObjectSecurity*>(isContainer, resourceType, exceptionFromErrorCode, exceptionContext));
}
inline void System::Security::AccessControl::NativeObjectSecurity::_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType,
                                                                         ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode* exceptionFromErrorCode,
                                                                         ::System::Object* exceptionContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ResourceType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isContainer, resourceType, exceptionFromErrorCode, exceptionContext);
}
inline ::System::Security::AccessControl::NativeObjectSecurity*
System::Security::AccessControl::NativeObjectSecurity::New_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name,
                                                                ::System::Security::AccessControl::AccessControlSections includeSections) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::AccessControl::NativeObjectSecurity*>(isContainer, resourceType, name, includeSections));
}
inline void System::Security::AccessControl::NativeObjectSecurity::_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name,
                                                                         ::System::Security::AccessControl::AccessControlSections includeSections) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ResourceType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlSections>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isContainer, resourceType, name, includeSections);
}
inline ::System::Security::AccessControl::NativeObjectSecurity* System::Security::AccessControl::NativeObjectSecurity::New_ctor(
    bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections,
    ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode* exceptionFromErrorCode, ::System::Object* exceptionContext) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::AccessControl::NativeObjectSecurity*>(isContainer, resourceType, name, includeSections, exceptionFromErrorCode, exceptionContext));
}
inline void System::Security::AccessControl::NativeObjectSecurity::_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name,
                                                                         ::System::Security::AccessControl::AccessControlSections includeSections,
                                                                         ::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode* exceptionFromErrorCode,
                                                                         ::System::Object* exceptionContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ResourceType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlSections>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::__NativeObjectSecurity__ExceptionFromErrorCode*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isContainer, resourceType, name, includeSections, exceptionFromErrorCode, exceptionContext);
}
inline void System::Security::AccessControl::NativeObjectSecurity::ClearAccessControlSectionsModified() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(),
                                                                             "ClearAccessControlSectionsModified", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Exception* System::Security::AccessControl::NativeObjectSecurity::DefaultExceptionFromErrorCode(int32_t errorCode, ::StringW name,
                                                                                                                 ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), "DefaultExceptionFromErrorCode", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, errorCode, name, handle, context);
}
inline void System::Security::AccessControl::NativeObjectSecurity::RaiseExceptionOnFailure(int32_t errorCode, ::StringW name, ::System::Runtime::InteropServices::SafeHandle* handle,
                                                                                           ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), "RaiseExceptionOnFailure", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorCode, name, handle, context);
}
inline int32_t System::Security::AccessControl::NativeObjectSecurity::InternalGet(::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::NativeObjectSecurity*>::get(), "InternalGet", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlSections>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name, includeSections);
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::NativeObjectSecurity::NativeObjectSecurity() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
