#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/CustomizableEnvironmentCommandLineArgsProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__CustomizableEnvironmentCommandLineArgsProvider_def.hpp"
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider.GetCommandLineArgs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (*)()>(&::BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider::GetCommandLineArgs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2251f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider*>::get(),
                        "GetCommandLineArgs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::StringW,::Array<::StringW>*> BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider::GetCommandLineArgs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider*>::get(),
                        "GetCommandLineArgs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider::CustomizableEnvironmentCommandLineArgsProvider()   {
}
