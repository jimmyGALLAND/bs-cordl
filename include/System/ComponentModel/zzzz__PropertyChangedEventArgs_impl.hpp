#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventArgs_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::PropertyChangedEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::PropertyChangedEventArgs::*)(::StringW)>(
    &::System::ComponentModel::PropertyChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29199b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::PropertyChangedEventArgs*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::PropertyChangedEventArgs::__get__propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr ::StringW const& System::ComponentModel::PropertyChangedEventArgs::__get__propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr void System::ComponentModel::PropertyChangedEventArgs::__set__propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____propertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::PropertyChangedEventArgs* System::ComponentModel::PropertyChangedEventArgs::New_ctor(::StringW propertyName) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::PropertyChangedEventArgs*>(propertyName));
}
inline void System::ComponentModel::PropertyChangedEventArgs::_ctor(::StringW propertyName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::PropertyChangedEventArgs*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::PropertyChangedEventArgs::PropertyChangedEventArgs() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
