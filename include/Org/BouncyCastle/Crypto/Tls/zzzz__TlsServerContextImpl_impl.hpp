#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsServerContextImpl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServerContextImpl_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SecurityParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServerContext_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::*)(::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Crypto::Tls::SecurityParameters*)>(&::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23eace8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::SecurityParameters*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl.get_IsServer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::get_IsServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ead58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsServerContext"
constexpr  Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::operator ::Org::BouncyCastle::Crypto::Tls::TlsServerContext*() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsServerContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsServerContext"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContext* Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::i___Org__BouncyCastle__Crypto__Tls__TlsServerContext() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsServerContext*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsContext"
constexpr  Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::operator ::Org::BouncyCastle::Crypto::Tls::TlsContext*() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsContext"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::i___Org__BouncyCastle__Crypto__Tls__TlsContext() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(static_cast<void*>(this));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl* Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::New_ctor(::Org::BouncyCastle::Security::SecureRandom*  secureRandom, ::Org::BouncyCastle::Crypto::Tls::SecurityParameters*  securityParameters)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*>(secureRandom, securityParameters));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::_ctor(::Org::BouncyCastle::Security::SecureRandom*  secureRandom, ::Org::BouncyCastle::Crypto::Tls::SecurityParameters*  securityParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::SecurityParameters*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, secureRandom, securityParameters);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::get_IsServer()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl::TlsServerContextImpl()   {
}
