#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonLinqContract_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonLinqContract._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonLinqContract::*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonLinqContract::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x266e1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonLinqContract*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline ::Newtonsoft::Json::Serialization::JsonLinqContract* Newtonsoft::Json::Serialization::JsonLinqContract::New_ctor(::System::Type* underlyingType) {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Serialization::JsonLinqContract*>(underlyingType));
}
inline void Newtonsoft::Json::Serialization::JsonLinqContract::_ctor(::System::Type* underlyingType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonLinqContract*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, underlyingType);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonLinqContract::JsonLinqContract() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
