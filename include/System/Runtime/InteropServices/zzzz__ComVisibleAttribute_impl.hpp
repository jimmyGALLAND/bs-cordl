#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__ComVisibleAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::ComVisibleAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::ComVisibleAttribute::*)(bool)>(
    &::System::Runtime::InteropServices::ComVisibleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24d7270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ComVisibleAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& System::Runtime::InteropServices::ComVisibleAttribute::__get__val() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____val;
}
constexpr bool const& System::Runtime::InteropServices::ComVisibleAttribute::__get__val() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____val;
}
constexpr void System::Runtime::InteropServices::ComVisibleAttribute::__set__val(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____val = value;
}
inline ::System::Runtime::InteropServices::ComVisibleAttribute* System::Runtime::InteropServices::ComVisibleAttribute::New_ctor(bool visibility) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::InteropServices::ComVisibleAttribute*>(visibility));
}
inline void System::Runtime::InteropServices::ComVisibleAttribute::_ctor(bool visibility) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ComVisibleAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visibility);
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::ComVisibleAttribute::ComVisibleAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
