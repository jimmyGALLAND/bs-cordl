#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__MultiplayerErrorOptions_def.hpp"
#include "Oculus/Platform/zzzz__MultiplayerErrorErrorKey_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MultiplayerErrorOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MultiplayerErrorOptions::*)()>(&::Oculus::Platform::MultiplayerErrorOptions::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26f4500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MultiplayerErrorOptions.SetErrorKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MultiplayerErrorOptions::*)(::Oculus::Platform::MultiplayerErrorErrorKey)>(
    &::Oculus::Platform::MultiplayerErrorOptions::SetErrorKey)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26f4564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(), "SetErrorKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MultiplayerErrorErrorKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MultiplayerErrorOptions.op_Explicit_void_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::Oculus::Platform::MultiplayerErrorOptions*)>(
    &::Oculus::Platform::MultiplayerErrorOptions::op_Explicit_void_)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26f45cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(), "op_Explicit", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MultiplayerErrorOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MultiplayerErrorOptions.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MultiplayerErrorOptions::*)()>(&::Oculus::Platform::MultiplayerErrorOptions::Finalize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x26f4624;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(), 1));
    return ___internal_method;
  }
};
constexpr void*& Oculus::Platform::MultiplayerErrorOptions::__get_Handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Handle;
}
constexpr void* const& Oculus::Platform::MultiplayerErrorOptions::__get_Handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Handle;
}
constexpr void Oculus::Platform::MultiplayerErrorOptions::__set_Handle(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Handle = value;
}
inline ::Oculus::Platform::MultiplayerErrorOptions* Oculus::Platform::MultiplayerErrorOptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MultiplayerErrorOptions*>());
}
inline void Oculus::Platform::MultiplayerErrorOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Oculus::Platform::MultiplayerErrorOptions::SetErrorKey(::Oculus::Platform::MultiplayerErrorErrorKey value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(), "SetErrorKey", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MultiplayerErrorErrorKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void* Oculus::Platform::MultiplayerErrorOptions::op_Explicit_void_(::Oculus::Platform::MultiplayerErrorOptions* options) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(), "op_Explicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::MultiplayerErrorOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, options);
}
inline void Oculus::Platform::MultiplayerErrorOptions::Finalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MultiplayerErrorOptions*>::get(), "Finalize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MultiplayerErrorOptions::MultiplayerErrorOptions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
