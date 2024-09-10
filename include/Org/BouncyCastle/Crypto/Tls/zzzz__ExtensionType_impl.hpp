#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/ExtensionType.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ExtensionType_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ExtensionType._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::ExtensionType::*)()>(&::Org::BouncyCastle::Crypto::Tls::ExtensionType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ca440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ExtensionType*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::ExtensionType::setStaticF_DRAFT_token_binding(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DRAFT_token_binding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ExtensionType*>::get>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Tls::ExtensionType::getStaticF_DRAFT_token_binding()  {
return ::cordl_internals::getStaticField<int32_t, "DRAFT_token_binding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ExtensionType*>::get>();
}
inline void Org::BouncyCastle::Crypto::Tls::ExtensionType::setStaticF_negotiated_ff_dhe_groups(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "negotiated_ff_dhe_groups", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ExtensionType*>::get>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Tls::ExtensionType::getStaticF_negotiated_ff_dhe_groups()  {
return ::cordl_internals::getStaticField<int32_t, "negotiated_ff_dhe_groups", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ExtensionType*>::get>();
}
inline ::Org::BouncyCastle::Crypto::Tls::ExtensionType* Org::BouncyCastle::Crypto::Tls::ExtensionType::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::ExtensionType*>());
}
inline void Org::BouncyCastle::Crypto::Tls::ExtensionType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ExtensionType*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::ExtensionType::ExtensionType()   {
}
