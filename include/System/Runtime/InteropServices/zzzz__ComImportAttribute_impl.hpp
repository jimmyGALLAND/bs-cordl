#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/ComImportAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__ComImportAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::ComImportAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::ComImportAttribute::*)()>(&::System::Runtime::InteropServices::ComImportAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c83fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ComImportAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::Runtime::InteropServices::ComImportAttribute* System::Runtime::InteropServices::ComImportAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::InteropServices::ComImportAttribute*>());
}
inline void System::Runtime::InteropServices::ComImportAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ComImportAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::ComImportAttribute::ComImportAttribute()   {
}
