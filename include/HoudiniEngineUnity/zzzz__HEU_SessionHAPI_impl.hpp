#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_SessionHAPI.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionHAPI_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionHAPI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionHAPI::*)()>(&::HoudiniEngineUnity::HEU_SessionHAPI::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x39d5cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionHAPI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::HEU_SessionHAPI* HoudiniEngineUnity::HEU_SessionHAPI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_SessionHAPI*>());
}
inline void HoudiniEngineUnity::HEU_SessionHAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionHAPI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_SessionHAPI::HEU_SessionHAPI()   {
}
