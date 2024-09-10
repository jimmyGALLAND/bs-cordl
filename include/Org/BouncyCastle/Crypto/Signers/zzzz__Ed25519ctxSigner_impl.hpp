#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/Ed25519ctxSigner.hpp"
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__Ed25519ctxSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Ed25519PrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Ed25519PublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__Ed25519ctxSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer.GenerateSignature
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer::*)(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer::GenerateSignature)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2385198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer*>::get(),
                        "GenerateSignature",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer.VerifySignature
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer::*)(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*, ::ArrayW<uint8_t,::Array<uint8_t>*>, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer::VerifySignature)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x23853a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer*>::get(),
                        "VerifySignature",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer::*)()>(&::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer::Reset)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2385584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer::*)()>(&::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2384fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer::GenerateSignature(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*  privateKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer*>::get(),
                        "GenerateSignature",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(this, ___internal_method, privateKey, ctx);
}
inline bool Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer::VerifySignature(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*  publicKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  ctx, ::ArrayW<uint8_t,::Array<uint8_t>*>  signature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer*>::get(),
                        "VerifySignature",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, publicKey, ctx, signature);
}
inline void Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer* Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer*>());
}
inline void Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer::__Ed25519ctxSigner__Buffer()   {
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2384f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner.get_AlgorithmName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::*)()>(&::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2384fb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::Init)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2384ff8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::Update)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23850d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner.BlockUpdate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::BlockUpdate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23850fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner.GenerateSignature
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::*)()>(&::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::GenerateSignature)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2385120;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner.VerifySignature
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::VerifySignature)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x238532c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::*)()>(&::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x238556c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
constexpr  Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
constexpr ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::i___Org__BouncyCastle__Crypto__ISigner() noexcept {
return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer*& Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer*> const& Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::__cordl_internal_set_buffer(::Org::BouncyCastle::Crypto::Signers::__Ed25519ctxSigner__Buffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::__cordl_internal_get_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::__cordl_internal_get_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::__cordl_internal_set_context(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::__cordl_internal_get_forSigning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forSigning;
}
constexpr bool const& Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::__cordl_internal_get_forSigning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forSigning;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::__cordl_internal_set_forSigning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forSigning = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*& Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::__cordl_internal_get_privateKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*> const& Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::__cordl_internal_get_privateKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateKey;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::__cordl_internal_set_privateKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privateKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*& Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::__cordl_internal_get_publicKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publicKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*> const& Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::__cordl_internal_get_publicKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___publicKey;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::__cordl_internal_set_publicKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___publicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner* Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  context)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>(context));
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline ::StringW Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::get_AlgorithmName()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::Init(bool  forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forSigning, parameters);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::Update(uint8_t  b)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::BlockUpdate(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf, off, len);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::GenerateSignature()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::VerifySignature(::ArrayW<uint8_t,::Array<uint8_t>*>  signature)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, signature);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::Reset()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner::Ed25519ctxSigner()   {
}
