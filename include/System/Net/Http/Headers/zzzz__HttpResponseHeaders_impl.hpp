#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/HttpResponseHeaders.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HttpResponseHeaders_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::HttpResponseHeaders._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::Headers::HttpResponseHeaders::*)()>(&::System::Net::Http::Headers::HttpResponseHeaders::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x418861c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpResponseHeaders*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::Net::Http::Headers::HttpResponseHeaders* System::Net::Http::Headers::HttpResponseHeaders::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::Headers::HttpResponseHeaders*>());
}
inline void System::Net::Http::Headers::HttpResponseHeaders::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpResponseHeaders*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::HttpResponseHeaders::HttpResponseHeaders()   {
}
