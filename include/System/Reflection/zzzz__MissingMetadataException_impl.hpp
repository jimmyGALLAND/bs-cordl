#pragma once
#include "System/zzzz__TypeAccessException_impl.hpp"
#include "System/Reflection/zzzz__MissingMetadataException_def.hpp"
//  Writing Method size for method: ::System::Reflection::MissingMetadataException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::MissingMetadataException::*)()>(&::System::Reflection::MissingMetadataException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24edeac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MissingMetadataException*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Reflection::MissingMetadataException* System::Reflection::MissingMetadataException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::MissingMetadataException*>());
}
inline void System::Reflection::MissingMetadataException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MissingMetadataException*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Reflection::MissingMetadataException::MissingMetadataException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
