#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyKeyFileAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyKeyFileAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyKeyFileAttribute::*)(::StringW)>(
    &::System::Reflection::AssemblyKeyFileAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24e6010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyKeyFileAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyKeyFileAttribute::__get__KeyFile_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____KeyFile_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyKeyFileAttribute::__get__KeyFile_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____KeyFile_k__BackingField;
}
constexpr void System::Reflection::AssemblyKeyFileAttribute::__set__KeyFile_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____KeyFile_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Reflection::AssemblyKeyFileAttribute* System::Reflection::AssemblyKeyFileAttribute::New_ctor(::StringW keyFile) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::AssemblyKeyFileAttribute*>(keyFile));
}
inline void System::Reflection::AssemblyKeyFileAttribute::_ctor(::StringW keyFile) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyKeyFileAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyFile);
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyKeyFileAttribute::AssemblyKeyFileAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
