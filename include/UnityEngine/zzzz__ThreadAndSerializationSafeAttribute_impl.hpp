#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__ThreadAndSerializationSafeAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::ThreadAndSerializationSafeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ThreadAndSerializationSafeAttribute::*)()>(
    &::UnityEngine::ThreadAndSerializationSafeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3266868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ThreadAndSerializationSafeAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::ThreadAndSerializationSafeAttribute* UnityEngine::ThreadAndSerializationSafeAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ThreadAndSerializationSafeAttribute*>());
}
inline void UnityEngine::ThreadAndSerializationSafeAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ThreadAndSerializationSafeAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ThreadAndSerializationSafeAttribute::ThreadAndSerializationSafeAttribute() {}
