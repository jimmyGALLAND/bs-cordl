#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Macs/zzzz__GMac_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__GcmBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::GMac._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::GMac::*)(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::Macs::GMac::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xf0cba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::GMac._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::GMac::*)(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::GMac::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xf0cbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::GMac.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::GMac::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Macs::GMac::Init)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xf0cc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(), "Init", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::GMac.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Macs::GMac::*)()>(
    &::Org::BouncyCastle::Crypto::Macs::GMac::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xf0cd8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(),
                                                                               "get_AlgorithmName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::GMac.GetMacSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::GMac::*)()>(&::Org::BouncyCastle::Crypto::Macs::GMac::GetMacSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xf0ce54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(), "GetMacSize",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::GMac.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::GMac::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Macs::GMac::Update)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf0ce6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(), "Update", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::GMac.BlockUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::GMac::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::GMac::BlockUpdate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf0ce90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(), "BlockUpdate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::GMac.DoFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::GMac::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::GMac::DoFinal)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xf0ceb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(), "DoFinal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::GMac.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::GMac::*)()>(&::Org::BouncyCastle::Crypto::Macs::GMac::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf0cfac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(), "Reset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
constexpr Org::BouncyCastle::Crypto::Macs::GMac::operator ::Org::BouncyCastle::Crypto::IMac*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMac*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*& Org::BouncyCastle::Crypto::Macs::GMac::__get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___cipher;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*> const& Org::BouncyCastle::Crypto::Macs::GMac::__get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::Macs::GMac::__set_cipher(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cipher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Macs::GMac::__get_macSizeBits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___macSizeBits;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Macs::GMac::__get_macSizeBits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___macSizeBits;
}
constexpr void Org::BouncyCastle::Crypto::Macs::GMac::__set_macSizeBits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___macSizeBits = value;
}
inline ::Org::BouncyCastle::Crypto::Macs::GMac* Org::BouncyCastle::Crypto::Macs::GMac::New_ctor(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* cipher) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Macs::GMac*>(cipher));
}
inline void Org::BouncyCastle::Crypto::Macs::GMac::_ctor(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* cipher) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cipher);
}
inline ::Org::BouncyCastle::Crypto::Macs::GMac* Org::BouncyCastle::Crypto::Macs::GMac::New_ctor(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* cipher, int32_t macSizeBits) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Macs::GMac*>(cipher, macSizeBits));
}
inline void Org::BouncyCastle::Crypto::Macs::GMac::_ctor(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* cipher, int32_t macSizeBits) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cipher, macSizeBits);
}
inline void Org::BouncyCastle::Crypto::Macs::GMac::Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Macs::GMac::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(),
                                                                             "get_AlgorithmName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::GMac::GetMacSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(), "GetMacSize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::GMac::Update(uint8_t input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(), "Update", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Macs::GMac::BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(), "BlockUpdate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, inOff, len);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::GMac::DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(), "DoFinal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Macs::GMac::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::GMac*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Macs::GMac::GMac() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
