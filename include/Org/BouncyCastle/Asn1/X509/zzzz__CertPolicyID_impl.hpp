#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/CertPolicyID.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CertPolicyID_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertPolicyID._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::CertPolicyID::*)(::StringW)>(&::Org::BouncyCastle::Asn1::X509::CertPolicyID::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25b70a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertPolicyID*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Asn1::X509::CertPolicyID* Org::BouncyCastle::Asn1::X509::CertPolicyID::New_ctor(::StringW  id)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::X509::CertPolicyID*>(id));
}
inline void Org::BouncyCastle::Asn1::X509::CertPolicyID::_ctor(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertPolicyID*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::CertPolicyID::CertPolicyID()   {
}
