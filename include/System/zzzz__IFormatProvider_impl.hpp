#pragma once
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::IFormatProvider.GetFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::IFormatProvider::*)(::System::Type*)>(&::System::IFormatProvider::GetFormat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IFormatProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IFormatProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Object* System::IFormatProvider::GetFormat(::System::Type* formatType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IFormatProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, formatType);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
