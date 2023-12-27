#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAeadCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*, ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf98c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*, ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::_ctor)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0xf98c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher.GetPlaintextLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::GetPlaintextLimit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xf99104;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher.EncodePlaintext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::*)(
    int64_t, uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::EncodePlaintext)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0xf99114;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher.DecodeCiphertext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::*)(
    int64_t, uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::DecodeCiphertext)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0xf99688;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher.GetAdditionalData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::*)(int64_t, uint8_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::GetAdditionalData)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xf99bf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>::get(), 10));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
constexpr Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::operator ::Org::BouncyCastle::Crypto::Tls::TlsCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___context;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsContext*> const& Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___context;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__get_macSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___macSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__get_macSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___macSize;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__set_macSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___macSize = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__get_record_iv_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___record_iv_length;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__get_record_iv_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___record_iv_length;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__set_record_iv_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___record_iv_length = value;
}
constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*& Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__get_encryptCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___encryptCipher;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*> const& Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__get_encryptCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___encryptCipher;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__set_encryptCipher(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encryptCipher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*& Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__get_decryptCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___decryptCipher;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*> const& Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__get_decryptCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___decryptCipher;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__set_decryptCipher(::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___decryptCipher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__get_encryptImplicitNonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___encryptImplicitNonce;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__get_encryptImplicitNonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___encryptImplicitNonce;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__set_encryptImplicitNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encryptImplicitNonce)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__get_decryptImplicitNonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___decryptImplicitNonce;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__get_decryptImplicitNonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___decryptImplicitNonce;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__set_decryptImplicitNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___decryptImplicitNonce)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__get_nonceMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nonceMode;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__get_nonceMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nonceMode;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::__set_nonceMode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___nonceMode = value;
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* clientWriteCipher,
                                                                                                                ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* serverWriteCipher,
                                                                                                                int32_t cipherKeySize, int32_t macSize) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>(context, clientWriteCipher, serverWriteCipher, cipherKeySize, macSize));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* clientWriteCipher,
                                                                 ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* serverWriteCipher, int32_t cipherKeySize, int32_t macSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, clientWriteCipher, serverWriteCipher, cipherKeySize, macSize);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher* Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* clientWriteCipher,
                                                                                                                ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* serverWriteCipher,
                                                                                                                int32_t cipherKeySize, int32_t macSize, int32_t nonceMode) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>(context, clientWriteCipher, serverWriteCipher, cipherKeySize, macSize, nonceMode));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* clientWriteCipher,
                                                                 ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher* serverWriteCipher, int32_t cipherKeySize, int32_t macSize, int32_t nonceMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, clientWriteCipher, serverWriteCipher, cipherKeySize, macSize, nonceMode);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::GetPlaintextLimit(int32_t ciphertextLimit) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>::get(), "GetPlaintextLimit",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, ciphertextLimit);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> plaintext, int32_t offset,
                                                                                                           int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>::get(), "EncodePlaintext", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, seqNo, type, plaintext, offset, len);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertext,
                                                                                                            int32_t offset, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>::get(), "DecodeCiphertext", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, seqNo, type, ciphertext, offset, len);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::GetAdditionalData(int64_t seqNo, uint8_t type, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher*>::get(), "GetAdditionalData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, seqNo, type, len);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAeadCipher::TlsAeadCipher() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
