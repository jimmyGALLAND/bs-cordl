#pragma once
// IWYU pragma private; include "System/Net/Logging.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__Logging_def.hpp"
//  Writing Method size for method: ::System::Net::Logging.get_On
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Net::Logging::get_On)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4424028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Logging*>::get(),
                        "get_On",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline bool System::Net::Logging::get_On()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Logging*>::get(),
                        "get_On",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Logging::Logging()   {
}
