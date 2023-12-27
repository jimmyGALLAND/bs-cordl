#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__NetSyncOptions_def.hpp"
#include "Oculus/Platform/zzzz__NetSyncVoipStreamMode_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::NetSyncOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::NetSyncOptions::*)()>(&::Oculus::Platform::NetSyncOptions::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26f46f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::NetSyncOptions*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::NetSyncOptions.SetVoipGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::NetSyncOptions::*)(::StringW)>(&::Oculus::Platform::NetSyncOptions::SetVoipGroup)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26f475c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::NetSyncOptions*>::get(), "SetVoipGroup", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::NetSyncOptions.SetVoipStreamDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::NetSyncOptions::*)(::Oculus::Platform::NetSyncVoipStreamMode)>(
    &::Oculus::Platform::NetSyncOptions::SetVoipStreamDefault)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26f47c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::NetSyncOptions*>::get(), "SetVoipStreamDefault", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::NetSyncVoipStreamMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::NetSyncOptions.SetZoneId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::NetSyncOptions::*)(::StringW)>(&::Oculus::Platform::NetSyncOptions::SetZoneId)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26f482c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::NetSyncOptions*>::get(), "SetZoneId", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::NetSyncOptions.op_Explicit_void_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::Oculus::Platform::NetSyncOptions*)>(&::Oculus::Platform::NetSyncOptions::op_Explicit_void_)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26f4894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::NetSyncOptions*>::get(), "op_Explicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::NetSyncOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::NetSyncOptions.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::NetSyncOptions::*)()>(&::Oculus::Platform::NetSyncOptions::Finalize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x26f48ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::NetSyncOptions*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::NetSyncOptions*>::get(), 1));
    return ___internal_method;
  }
};
constexpr void*& Oculus::Platform::NetSyncOptions::__get_Handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Handle;
}
constexpr void* const& Oculus::Platform::NetSyncOptions::__get_Handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Handle;
}
constexpr void Oculus::Platform::NetSyncOptions::__set_Handle(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Handle = value;
}
inline ::Oculus::Platform::NetSyncOptions* Oculus::Platform::NetSyncOptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::NetSyncOptions*>());
}
inline void Oculus::Platform::NetSyncOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::NetSyncOptions*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::NetSyncOptions::SetVoipGroup(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::NetSyncOptions*>::get(), "SetVoipGroup", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Oculus::Platform::NetSyncOptions::SetVoipStreamDefault(::Oculus::Platform::NetSyncVoipStreamMode value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::NetSyncOptions*>::get(), "SetVoipStreamDefault", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::NetSyncVoipStreamMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Oculus::Platform::NetSyncOptions::SetZoneId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::NetSyncOptions*>::get(), "SetZoneId", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void* Oculus::Platform::NetSyncOptions::op_Explicit_void_(::Oculus::Platform::NetSyncOptions* options) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::NetSyncOptions*>::get(), "op_Explicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::NetSyncOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, options);
}
inline void Oculus::Platform::NetSyncOptions::Finalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::NetSyncOptions*>::get(), "Finalize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::NetSyncOptions::NetSyncOptions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
