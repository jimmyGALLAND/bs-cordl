#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Pkcs/KeyDerivationFunc.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_impl.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__KeyDerivationFunc_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c2180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23c2184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*>(seq));
}
inline void Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  id, ::Org::BouncyCastle::Asn1::Asn1Encodable*  parameters)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*>(id, parameters));
}
inline void Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  id, ::Org::BouncyCastle::Asn1::Asn1Encodable*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, parameters);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::KeyDerivationFunc()   {
}
