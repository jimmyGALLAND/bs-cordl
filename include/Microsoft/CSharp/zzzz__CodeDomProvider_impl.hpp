#pragma once
// IWYU pragma private; include "Microsoft/CSharp/CodeDomProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Microsoft/CSharp/zzzz__CodeDomProvider_def.hpp"
//  Writing Method size for method: ::Microsoft::CSharp::CodeDomProvider._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Microsoft::CSharp::CodeDomProvider::*)()>(&::Microsoft::CSharp::CodeDomProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x41a3964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::CSharp::CodeDomProvider*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::Microsoft::CSharp::CodeDomProvider* Microsoft::CSharp::CodeDomProvider::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Microsoft::CSharp::CodeDomProvider*>());
}
inline void Microsoft::CSharp::CodeDomProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::CSharp::CodeDomProvider*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Microsoft::CSharp::CodeDomProvider::CodeDomProvider()   {
}
