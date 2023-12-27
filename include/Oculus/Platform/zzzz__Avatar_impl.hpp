#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Avatar_def.hpp"
#include "Oculus/Platform/zzzz__AvatarEditorOptions_def.hpp"
#include "Oculus/Platform/Models/zzzz__AvatarEditorResult_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Avatar.LaunchAvatarEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AvatarEditorResult*>* (*)(::Oculus::Platform::AvatarEditorOptions*)>(&::Oculus::Platform::Avatar::LaunchAvatarEditor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x26fc8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Avatar*>::get(), "LaunchAvatarEditor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::AvatarEditorOptions*>::get() })));
    return ___internal_method;
  }
};
/// @param options: ::Oculus::Platform::AvatarEditorOptions* (default: nullptr)
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AvatarEditorResult*>* Oculus::Platform::Avatar::LaunchAvatarEditor(::Oculus::Platform::AvatarEditorOptions* options) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Avatar*>::get(), "LaunchAvatarEditor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::AvatarEditorOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AvatarEditorResult*>*, false>(nullptr, ___internal_method, options);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Avatar::Avatar() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
