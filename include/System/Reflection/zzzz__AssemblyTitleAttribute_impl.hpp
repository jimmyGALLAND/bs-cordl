#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyTitleAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyTitleAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyTitleAttribute::*)(::StringW)>(
    &::System::Reflection::AssemblyTitleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24e6060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyTitleAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyTitleAttribute::__get__Title_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Title_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyTitleAttribute::__get__Title_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Title_k__BackingField;
}
constexpr void System::Reflection::AssemblyTitleAttribute::__set__Title_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Title_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Reflection::AssemblyTitleAttribute* System::Reflection::AssemblyTitleAttribute::New_ctor(::StringW title) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::AssemblyTitleAttribute*>(title));
}
inline void System::Reflection::AssemblyTitleAttribute::_ctor(::StringW title) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyTitleAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, title);
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyTitleAttribute::AssemblyTitleAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
