#pragma once
// IWYU pragma private; include "Mono/Unity/Debug.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Unity/zzzz__Debug_def.hpp"
#include "Mono/Security/Interface/zzzz__AlertDescription_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
//  Writing Method size for method: ::Mono::Unity::Debug.CheckAndThrow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Mono::Unity::__UnityTls__unitytls_errorstate, ::StringW, ::Mono::Security::Interface::AlertDescription)>(&::Mono::Unity::Debug::CheckAndThrow)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x40788e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::Debug*>::get(),
                        "CheckAndThrow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::__UnityTls__unitytls_errorstate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::AlertDescription>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::Debug.CheckAndThrow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Mono::Unity::__UnityTls__unitytls_errorstate, ::Mono::Unity::__UnityTls__unitytls_x509verify_result, ::StringW, ::Mono::Security::Interface::AlertDescription)>(&::Mono::Unity::Debug::CheckAndThrow)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x4078980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::Debug*>::get(),
                        "CheckAndThrow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::__UnityTls__unitytls_errorstate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::__UnityTls__unitytls_x509verify_result>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::AlertDescription>::get()}
                    )));
    return ___internal_method;
  }
};
/// @param defaultAlert: ::Mono::Security::Interface::AlertDescription (default: static_cast<uint8_t>(0x50u))
inline void Mono::Unity::Debug::CheckAndThrow(::Mono::Unity::__UnityTls__unitytls_errorstate  errorState, ::StringW  context, ::Mono::Security::Interface::AlertDescription  defaultAlert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::Debug*>::get(),
                        "CheckAndThrow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::__UnityTls__unitytls_errorstate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::AlertDescription>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, errorState, context, defaultAlert);
}
/// @param defaultAlert: ::Mono::Security::Interface::AlertDescription (default: static_cast<uint8_t>(0x50u))
inline void Mono::Unity::Debug::CheckAndThrow(::Mono::Unity::__UnityTls__unitytls_errorstate  errorState, ::Mono::Unity::__UnityTls__unitytls_x509verify_result  verifyResult, ::StringW  context, ::Mono::Security::Interface::AlertDescription  defaultAlert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::Debug*>::get(),
                        "CheckAndThrow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::__UnityTls__unitytls_errorstate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::__UnityTls__unitytls_x509verify_result>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::AlertDescription>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, errorState, verifyResult, context, defaultAlert);
}
// Ctor Parameters []
constexpr ::Mono::Unity::Debug::Debug()   {
}
