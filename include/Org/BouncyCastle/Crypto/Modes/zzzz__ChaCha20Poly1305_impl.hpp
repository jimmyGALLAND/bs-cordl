#pragma once
#include "Org/BouncyCastle/Crypto/Modes/zzzz__ChaCha20Poly1305_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__ChaCha20Poly1305_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__ChaCha7539Engine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__IAeadCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__ChaCha20Poly1305_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State::__ChaCha20Poly1305__State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State::__ChaCha20Poly1305__State() {}
constexpr ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State::Uninitialized{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State::EncInit{ static_cast<int32_t>(0x1) };
constexpr ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State::EncAad{ static_cast<int32_t>(0x2) };
constexpr ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State::EncData{ static_cast<int32_t>(0x3) };
constexpr ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State::EncFinal{ static_cast<int32_t>(0x4) };
constexpr ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State::DecInit{ static_cast<int32_t>(0x5) };
constexpr ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State::DecAad{ static_cast<int32_t>(0x6) };
constexpr ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State::DecData{ static_cast<int32_t>(0x7) };
constexpr ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State::DecFinal{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xf17bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(::Org::BouncyCastle::Crypto::IMac*)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xf17c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf17e20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Init)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0xf17e60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.GetOutputSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::GetOutputSize)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xf18404;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.GetUpdateOutputSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::GetUpdateOutputSize)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xf184fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.ProcessAadByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessAadByte)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xf185f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.ProcessAadBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessAadBytes)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xf187e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.ProcessByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(
    uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessByte)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xf189d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.ProcessBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessBytes)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0xf18dfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.DoFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::DoFinal)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0xf19304;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.GetMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::GetMac)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xf19864;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf198c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.CheckAad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::CheckAad)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xf186c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                                               "CheckAad", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.CheckData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::CheckData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xf18c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                                               "CheckData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.FinishAad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(
    ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State)>(&::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::FinishAad)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf198cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "FinishAad", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.FinishData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(
    ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State)>(&::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::FinishData)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xf196d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "FinishData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.IncrementCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(uint64_t, uint32_t, uint64_t)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::IncrementCount)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xf18778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "IncrementCount", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.InitMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::InitMac)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xf199f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                                               "InitMac", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.PadMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(uint64_t)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::PadMac)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xf198f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "PadMac",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.ProcessData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xf18d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "ProcessData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(bool, bool)>(
    &::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Reset)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xf182c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "Reset", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
constexpr Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Modes::IAeadCipher*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mChacha20() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mChacha20;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*> const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mChacha20() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mChacha20;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__set_mChacha20(::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mChacha20)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mPoly1305() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPoly1305;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mPoly1305() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPoly1305;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__set_mPoly1305(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPoly1305)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mKey;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__set_mKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mNonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNonce;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mNonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mNonce;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__set_mNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mNonce)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mBuf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBuf;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mBuf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBuf;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__set_mBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mBuf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMac;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMac;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__set_mMac(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mMac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mInitialAad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInitialAad;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mInitialAad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInitialAad;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__set_mInitialAad(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mInitialAad)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint64_t& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mAadCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAadCount;
}
constexpr uint64_t const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mAadCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mAadCount;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__set_mAadCount(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mAadCount = value;
}
constexpr uint64_t& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mDataCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDataCount;
}
constexpr uint64_t const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mDataCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDataCount;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__set_mDataCount(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mDataCount = value;
}
constexpr ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mState;
}
constexpr ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mState;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__set_mState(::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mState = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mBufPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBufPos;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__get_mBufPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBufPos;
}
constexpr void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::__set_mBufPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mBufPos = value;
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::setStaticF_Zeroes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "Zeroes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::getStaticF_Zeroes() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "Zeroes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get>();
}
inline ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305* Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>());
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305* Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::New_ctor(::Org::BouncyCastle::Crypto::IMac* poly1305) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>(poly1305));
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::_ctor(::Org::BouncyCastle::Crypto::IMac* poly1305) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, poly1305);
}
inline ::StringW Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                                             "get_AlgorithmName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forEncryption, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::GetOutputSize(int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "GetOutputSize",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, len);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::GetUpdateOutputSize(int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "GetUpdateOutputSize",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, len);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessAadByte(uint8_t input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "ProcessAadByte",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessAadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "ProcessAadBytes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inBytes, inOff, len);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "ProcessByte", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, input, outBytes, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes,
                                                                                int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "ProcessBytes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, inBytes, inOff, len, outBytes, outOff);
}
inline int32_t Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "DoFinal", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, outBytes, outOff);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::GetMac() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                                             "GetMac", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                                             "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::CheckAad() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                                             "CheckAad", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::CheckData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                                             "CheckData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::FinishAad(::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State nextState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "FinishAad", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nextState);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::FinishData(::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State nextState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "FinishData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nextState);
}
inline uint64_t Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::IncrementCount(uint64_t count, uint32_t increment, uint64_t limit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "IncrementCount", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, count, increment, limit);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::InitMac() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(),
                                                                             "InitMac", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::PadMac(uint64_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "PadMac",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessData(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes,
                                                                            int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "ProcessData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inBytes, inOff, inLen, outBytes, outOff);
}
inline void Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Reset(bool clearMac, bool resetCipher) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*>::get(), "Reset", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clearMac, resetCipher);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ChaCha20Poly1305() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
