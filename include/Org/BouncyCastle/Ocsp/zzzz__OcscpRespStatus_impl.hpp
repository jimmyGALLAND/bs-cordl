#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/OcscpRespStatus.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcspRespStatus_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcscpRespStatus_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcscpRespStatus._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::OcscpRespStatus::*)()>(&::Org::BouncyCastle::Ocsp::OcscpRespStatus::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24d5bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcscpRespStatus*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Ocsp::OcscpRespStatus* Org::BouncyCastle::Ocsp::OcscpRespStatus::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Ocsp::OcscpRespStatus*>());
}
inline void Org::BouncyCastle::Ocsp::OcscpRespStatus::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcscpRespStatus*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::OcscpRespStatus::OcscpRespStatus()   {
}
